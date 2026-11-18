// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 722

// OnCreateRenderThreadResources'' @ 1411365f0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 141136610

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// OnLightComponentRegistered'' @ 141136630

void __cdecl
`dynamic_initializer_for_'FStaticLightingSystemInterface::OnLightComponentRegistered__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::
         OnLightComponentRegistered__);
  return;
}

// OnLightComponentUnregistered'' @ 141136650

void __cdecl
`dynamic_initializer_for_'FStaticLightingSystemInterface::OnLightComponentUnregistered__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::
         OnLightComponentUnregistered__);
  return;
}

// OnLightmassImportanceVolumeModified'' @ 141136670

void __cdecl
`dynamic_initializer_for_'FStaticLightingSystemInterface::OnLightmassImportanceVolumeModified__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::
         OnLightmassImportanceVolumeModified__);
  return;
}

// OnMaterialInvalidated'' @ 141136690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FStaticLightingSystemInterface::OnMaterialInvalidated__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FStaticLightingSystemInterface::OnMaterialInvalidated,4000);
  FStaticLightingSystemInterface::OnMaterialInvalidated._48_8_ =
       ___xmm_00000000000000020000000000000000;
  FStaticLightingSystemInterface::OnMaterialInvalidated._56_8_ = _UNK_150631d48;
  FStaticLightingSystemInterface::OnMaterialInvalidated._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnMaterialInvalidated__);
  return;
}

// OnPrimitiveComponentRegistered'' @ 1411366e0

void __cdecl
`dynamic_initializer_for_'FStaticLightingSystemInterface::OnPrimitiveComponentRegistered__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::
         OnPrimitiveComponentRegistered__);
  return;
}

// OnPrimitiveComponentUnregistered'' @ 141136700

void __cdecl
`dynamic_initializer_for_'FStaticLightingSystemInterface::OnPrimitiveComponentUnregistered__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::
         OnPrimitiveComponentUnregistered__);
  return;
}

// OnSkyAtmosphereModified'' @ 141136720

void __cdecl
`dynamic_initializer_for_'FStaticLightingSystemInterface::OnSkyAtmosphereModified__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnSkyAtmosphereModified__);
  return;
}

// OnStationaryLightChannelReassigned'' @ 141136740

void __cdecl
`dynamic_initializer_for_'FStaticLightingSystemInterface::OnStationaryLightChannelReassigned__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::
         OnStationaryLightChannelReassigned__);
  return;
}

// ShaderTypeRegistration'' @ 141136760

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

void __cdecl `dynamic_initializer_for_'Nanite::FMemcpy_CS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = Nanite::FMemcpy_CS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&Nanite::FMemcpy_CS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'Nanite::FMemcpy_CS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1411367b0

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

void __cdecl `dynamic_initializer_for_'FSSProfilePreIntegratedPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FSSProfilePreIntegratedPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FSSProfilePreIntegratedPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FSSProfilePreIntegratedPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141136800

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

void __cdecl `dynamic_initializer_for_'FSpecularProfileConvolveCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FSpecularProfileConvolveCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FSpecularProfileConvolveCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FSpecularProfileConvolveCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141136850

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

void __cdecl `dynamic_initializer_for_'FSpecularProfileCopyCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FSpecularProfileCopyCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FSpecularProfileCopyCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FSpecularProfileCopyCS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1411368a0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<0,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'CVarForceHighestMipOnUITexturesEnabled'' @ 141136960

void __cdecl _dynamic_initializer_for__CVarForceHighestMipOnUITexturesEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarForceHighestMipOnUITexturesEnabled,L"r.ForceHighestMipOnUITextures",local_res8,
             L"If set to 1, texutres in the UI Group will have their highest mip level forced.",0x20
            );
  atexit(_dynamic_atexit_destructor_for__CVarForceHighestMipOnUITexturesEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingAsync'' @ 1411369b0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingAsync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingAsync,L"r.Nanite.Streaming.Async",&GNaniteStreamingAsync,
             L"Perform most of the Nanite streaming on an asynchronous worker thread instead of the rendering thread."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingAsync__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingBandwidthLimit'' @ 141136a00

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingBandwidthLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingBandwidthLimit,L"r.Nanite.Streaming.BandwidthLimit",
             &GNaniteStreamingBandwidthLimit,
             L"Streaming bandwidth limit in megabytes per second. Negatives values are interpreted as unlimited. "
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingBandwidthLimit__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingDynamicallyGrowAllocations'' @ 141136a50

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingDynamicallyGrowAllocations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingDynamicallyGrowAllocations,
             L"r.Nanite.Streaming.DynamicallyGrowAllocations",
             &GNaniteStreamingDynamicallyGrowAllocations,
             L"Determines if root page and imposter allocations are allowed to grow dynamically from initial allocation set by r.Nanite.Streaming.NumInitialRootPages and r.Nanite.Streaming.NumInitialImposters"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingDynamicallyGrowAllocations__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingExplicitRequests'' @ 141136aa0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingExplicitRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingExplicitRequests,L"r.Nanite.Streaming.Debug.ExplicitRequests",
             &GNaniteStreamingExplicitRequests,
             L"Process requests coming from explicit calls to RequestNanitePages().",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingExplicitRequests__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingGPUFeedback'' @ 141136af0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingGPUFeedback__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingGPUFeedback,L"r.Nanite.Streaming.Debug.GPURequests",
             &GNaniteStreamingGPURequests,L"Process requests coming from GPU rendering feedback",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingGPUFeedback__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingImposters'' @ 141136b40

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingImposters__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingImposters,L"r.Nanite.Streaming.Imposters",
             &GNaniteStreamingImposters,
             L"Load imposters used for faster rendering of distant objects. Requires additional memory and might not be worthwhile for scenes with HLOD or no distant objects."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingImposters__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingMaxPageInstallsPerFrame'' @ 141136b90

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingMaxPageInstallsPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingMaxPageInstallsPerFrame,
             L"r.Nanite.Streaming.MaxPageInstallsPerFrame",&GNaniteStreamingMaxPageInstallsPerFrame,
             L"Maximum number of pages that can be installed per frame. Limiting this can limit the overhead of streaming."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingMaxPageInstallsPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingMaxPendingPages'' @ 141136be0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingMaxPendingPages__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingMaxPendingPages,L"r.Nanite.Streaming.MaxPendingPages",
             &GNaniteStreamingMaxPendingPages,
             L"Maximum number of pages that can be pending for installation.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingMaxPendingPages__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingMaxPendingRequests'' @ 141136c30

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingMaxPendingRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingMaxPendingRequests,L"r.RayTracing.Streaming.MaxPendingRequests",
             &GRayTracingStreamingMaxPendingRequests,
             L"Maximum number of requests that can be pending streaming.",4);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingMaxPendingRequests__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingNumInitialImposters'' @ 141136c80

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingNumInitialImposters__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingNumInitialImposters,L"r.Nanite.Streaming.NumInitialImposters",
             &GNaniteStreamingNumInitialImposters,
             L"Number of imposters in initial allocation. Allowed to grow on demand if r.Nanite.Streaming.DynamicallyGrowAllocations is enabled."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingNumInitialImposters__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingNumInitialRootPages'' @ 141136cd0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingNumInitialRootPages__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingNumInitialRootPages,L"r.Nanite.Streaming.NumInitialRootPages",
             &GNaniteStreamingNumInitialRootPages,
             L"Number of root pages in initial allocation. Allowed to grow on demand if r.Nanite.Streaming.DynamicallyGrowAllocations is enabled."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingNumInitialRootPages__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingNumRetries'' @ 141136d20

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingNumRetries__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingNumRetries,L"r.Nanite.Streaming.NumRetries",
             &GNaniteStreamingNumRetries,
             L"Number of times to retry an IO or DDC request on failure.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingNumRetries__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingPoolResize'' @ 141136d70

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingPoolResize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingPoolResize,L"r.Nanite.Streaming.Debug.StreamingPoolResize",
             &GNaniteStreamingPoolResize,L"Allow streaming pool to be resized at runtime.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingPoolResize__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingPoolSize'' @ 141136dc0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingPoolSize,L"r.Nanite.Streaming.StreamingPoolSize",
             &GNaniteStreamingPoolSize,
             L"Size of streaming pool in MB. Does not include memory used for root pages.Be careful with setting this close to the GPU resource size limit (typically 2-4GB) as root pages are allocated from the same physical buffer."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingPrefetch'' @ 141136e10

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingPrefetch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingPrefetch,L"r.Nanite.Streaming.Debug.Prefetch",
             &GNaniteStreamingPrefetch,
             L"Process resource prefetch requests from calls to PrefetchResource().",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingPrefetch__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingQualityScaleMaxPoolPercentage'' @ 141136e60

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingQualityScaleMaxPoolPercentage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingQualityScaleMaxPoolPercentage,
             L"r.Nanite.Streaming.QualityScale.MaxPoolPercentage",
             &GNaniteStreamingQualityScaleMaxPoolPercentage,
             L"Adjust quality down whenever the streaming pool load percentage goes above this threshold."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingQualityScaleMaxPoolPercentage__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingQualityScaleMinPoolPercentage'' @ 141136eb0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingQualityScaleMinPoolPercentage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingQualityScaleMinPoolPercentage,
             L"r.Nanite.Streaming.QualityScale.MinPoolPercentage",
             &GNaniteStreamingQualityScaleMinPoolPercentage,
             L"Adjust quality up whenever the streaming pool load percentage goes below this threshold."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingQualityScaleMinPoolPercentage__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingQualityScaleMinQuality'' @ 141136f00

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingQualityScaleMinQuality__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingQualityScaleMinQuality,
             L"r.Nanite.Streaming.QualityScale.MinQuality",&GNaniteStreamingQualityScaleMinQuality,
             L"Quality scaling will never go below this limit. 1.0 disables any scaling.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingQualityScaleMinQuality__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingReservedResourceGrowOnly'' @ 141136f50

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingReservedResourceGrowOnly__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingReservedResourceGrowOnly,
             L"r.Nanite.Streaming.Debug.ReservedResourceRootPageGrowOnly",
             &GNaniteStreamingReservedResourceRootPageGrowOnly,L"Root page allocator only grows.",
             0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingReservedResourceGrowOnly__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation'' @ 141136fa0

void __cdecl
_dynamic_initializer_for__CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation,
             L"r.Nanite.Streaming.Debug.ReservedResourceIgnoreInitialRootAllocation",
             &GNaniteStreamingReservedResourceIgnoreInitialRootAllocation,
             L"Ignore root page initial allocation size for reserved resources.",0x24);
  atexit(
        _dynamic_atexit_destructor_for__CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation__
        );
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingReservedResources'' @ 141136ff0

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingReservedResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingReservedResources,L"r.Nanite.Streaming.ReservedResources",
             &GNaniteStreamingReservedResources,
             L"Allow allocating Nanite GPU resources as reserved resources for better memory utilization and more efficient resizing (EXPERIMENTAL)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingReservedResources__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingVerificationLevel'' @ 141137040

void __cdecl _dynamic_initializer_for__CVarNaniteStreamingVerificationLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingVerificationLevel,L"r.Nanite.Streaming.Debug.VerificationLevel",
             &GNaniteStreamingVerificationLevel,
             L"Additional debug verification. 0: Off, 1: Light, 2: Heavy.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingVerificationLevel__);
  return;
}

// `dynamic_initializer_for_'CVarPartiallyResidentTextureEnabled'' @ 141137090

void __cdecl _dynamic_initializer_for__CVarPartiallyResidentTextureEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPartiallyResidentTextureEnabled,L"r.PRT.Enable",local_res8,
             L"If set to 1, textures will use virtual memory on supported platforms so that they can be partially resident."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPartiallyResidentTextureEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPartiallyResidentTextureEnabled_Deprecated'' @ 1411370e0

void __cdecl _dynamic_initializer_for__CVarPartiallyResidentTextureEnabled_Deprecated__(void)

{
  FAutoConsoleVariableDeprecated::FAutoConsoleVariableDeprecated
            (&CVarPartiallyResidentTextureEnabled_Deprecated,L"r.VirtualTexture",L"r.PRT.Enable",
             L"5.6",Ensure,Ensure,L"");
  return;
}

// `dynamic_initializer_for_'CVarPartiallyResidentTextureReducedMemory'' @ 141137130

void __cdecl _dynamic_initializer_for__CVarPartiallyResidentTextureReducedMemory__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPartiallyResidentTextureReducedMemory,L"r.PRT.ReducedMemory",local_res8,
             L"If set to 1, the cost of partially resident textures will be reduced by using a more packed layout."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPartiallyResidentTextureReducedMemory__);
  return;
}

// `dynamic_initializer_for_'CVarPartiallyResidentTextureReducedMemory_Deprecated'' @ 141137180

void __cdecl _dynamic_initializer_for__CVarPartiallyResidentTextureReducedMemory_Deprecated__(void)

{
  FAutoConsoleVariableDeprecated::FAutoConsoleVariableDeprecated
            (&CVarPartiallyResidentTextureReducedMemory_Deprecated,L"r.VirtualTextureReducedMemory",
             L"r.PRT.ReducedMemory",L"5.6",Ensure,Ensure,L"");
  return;
}

// `dynamic_initializer_for_'CVarRayTracingApproximateCompactionRatio'' @ 1411371d0

void __cdecl _dynamic_initializer_for__CVarRayTracingApproximateCompactionRatio__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingApproximateCompactionRatio,L"r.RayTracing.ApproximateCompactionRatio",
             &GRayTracingApproximateCompactionRatio,
             L"Ratio used by Ray Tracing Geometry Manager to approximate the ray tracing geometry size after compaction.\nThis will be removed in a future version once Ray Tracing Geometry Manager tracks the actual compacted sizes."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingApproximateCompactionRatio__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingEnable'' @ 141137220

void __cdecl _dynamic_initializer_for__CVarRayTracingEnable__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingEnable,L"r.RayTracing.Enable",local_res8,
             L"Whether ray tracing is enabled at runtime.\nIf r.RayTracing.EnableOnDemand is enabled, ray tracing can be toggled on/off at runtime. Otherwise this is only checked during initialization."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x20);
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
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingEnable__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingMaxBuiltPrimitivesPerFrame'' @ 141137360

void __cdecl _dynamic_initializer_for__CVarRayTracingMaxBuiltPrimitivesPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingMaxBuiltPrimitivesPerFrame,
             L"r.RayTracing.Geometry.MaxBuiltPrimitivesPerFrame",
             &GRayTracingMaxBuiltPrimitivesPerFrame,
             L"Sets the ray tracing acceleration structure build budget in terms of maximum number of triangles per frame (<= 0 then disabled and all acceleration structures are build immediatly - default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingMaxBuiltPrimitivesPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingNumAlwaysResidentLODs'' @ 1411373b0

void __cdecl _dynamic_initializer_for__CVarRayTracingNumAlwaysResidentLODs__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingNumAlwaysResidentLODs,L"r.RayTracing.NumAlwaysResidentLODs",
             &GRayTracingNumAlwaysResidentLODs,
             L"Number of LODs per ray tracing geometry group to always keep resident (even when not referenced by TLAS).\nDoesn\'t apply when ray tracing is disabled, in which case all ray tracing geometry is evicted."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x20);
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
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingNumAlwaysResidentLODs__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingOnDemandGeometryBuffersStreaming'' @ 1411374f0

void __cdecl _dynamic_initializer_for__CVarRayTracingOnDemandGeometryBuffersStreaming__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRayTracingOnDemandGeometryBuffersStreaming,
             L"r.RayTracing.OnDemandGeometryBuffersStreaming",local_res8,
             L"Whether to stream-in VB/IB buffers required to update dynamic geometry on-demand instead of keeping it in memory."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingOnDemandGeometryBuffersStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingPendingBuildPriorityBoostPerFrame'' @ 141137540

void __cdecl _dynamic_initializer_for__CVarRayTracingPendingBuildPriorityBoostPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingPendingBuildPriorityBoostPerFrame,
             L"r.RayTracing.Geometry.PendingBuildPriorityBoostPerFrame",
             &GRayTracingPendingBuildPriorityBoostPerFrame,
             L"Increment the priority for all pending build requests which are not scheduled that frame (0.001 - default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingPendingBuildPriorityBoostPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingResidentGeometryMemoryPoolSizeInMB'' @ 141137590

void __cdecl _dynamic_initializer_for__CVarRayTracingResidentGeometryMemoryPoolSizeInMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingResidentGeometryMemoryPoolSizeInMB,
             L"r.RayTracing.ResidentGeometryMemoryPoolSizeInMB",
             &GRayTracingResidentGeometryMemoryPoolSizeInMB,
             L"Size of the ray tracing geometry pool.\nIf pool size is larger than the requested geometry size, some unreferenced geometries will stay resident to reduce build overhead when they are requested again."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingResidentGeometryMemoryPoolSizeInMB__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingShowOnScreenWarnings'' @ 1411375e0

void __cdecl _dynamic_initializer_for__CVarRayTracingShowOnScreenWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingShowOnScreenWarnings,L"r.RayTracing.ShowOnScreenWarnings",
             &GRayTracingShowOnScreenWarnings,
             L"Whether to show on-screen warnings related to ray tracing.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingShowOnScreenWarnings__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingTestCheckIntegrity'' @ 141137630

void __cdecl _dynamic_initializer_for__CVarRayTracingTestCheckIntegrity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingTestCheckIntegrity,L"r.RayTracing.Test.CheckIntegrity",
             &GRayTracingTestCheckIntegrity,
             L"Whether to check integrity of cached state related to ray tracing.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingTestCheckIntegrity__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingUseReferenceBasedResidency'' @ 141137680

void __cdecl _dynamic_initializer_for__CVarRayTracingUseReferenceBasedResidency__(void)

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
            (&CVarRayTracingUseReferenceBasedResidency,L"r.RayTracing.UseReferenceBasedResidency",
             local_res8,
             L"Whether raytracing geometries should be resident or evicted based on whether they\'re referenced in TLAS."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x20);
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
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingUseReferenceBasedResidency__);
  return;
}

// `dynamic_initializer_for_'CVarSSProfilesPreIntegratedTextureForceUpdate'' @ 1411377c0

void __cdecl _dynamic_initializer_for__CVarSSProfilesPreIntegratedTextureForceUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSSProfilesPreIntegratedTextureForceUpdate,
             L"r.SSProfilesPreIntegratedTextureForceUpdate",local_res8,
             L"0: Only update the preintegrated texture as needed.\n1: Force to update the preintegrated texture for debugging.\n"
             ,0x21);
  atexit(_dynamic_atexit_destructor_for__CVarSSProfilesPreIntegratedTextureForceUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarSSProfilesPreIntegratedTextureResolution'' @ 141137810

void __cdecl _dynamic_initializer_for__CVarSSProfilesPreIntegratedTextureResolution__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x40;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSSProfilesPreIntegratedTextureResolution,
             L"r.SSProfilesPreIntegratedTextureResolution",local_res8,
             L"The resolution of the subsurface profile preintegrated texture.\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSSProfilesPreIntegratedTextureResolution__);
  return;
}

// `dynamic_initializer_for_'CVarSSProfilesSamplingChannelSelection'' @ 141137860

void __cdecl _dynamic_initializer_for__CVarSSProfilesSamplingChannelSelection__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSSProfilesSamplingChannelSelection,L"r.SSProfilesSamplingChannelSelection",
             local_res8,L"0. Select the sampling channel based on max DMFP.\n1. based on max MFP.",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSSProfilesSamplingChannelSelection__);
  return;
}

// `dynamic_initializer_for_'CVarSpecularProfileForceUpdate'' @ 1411378b0

void __cdecl _dynamic_initializer_for__CVarSpecularProfileForceUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSpecularProfileForceUpdate,L"r.Substrate.SpecularProfile.ForceUpdate",local_res8,
             L"0: Only update the specular profile as needed.\n1: Force to update the specular profile every frame for debugging.\n"
             ,0x21);
  atexit(_dynamic_atexit_destructor_for__CVarSpecularProfileForceUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarSpecularProfileResolution'' @ 141137900

void __cdecl _dynamic_initializer_for__CVarSpecularProfileResolution__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x40;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSpecularProfileResolution,L"r.Substrate.SpecularProfile.Resolution",local_res8,
             L"The resolution of the specular profile texture.\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSpecularProfileResolution__);
  return;
}

// `dynamic_initializer_for_'CVarYourCommand'' @ 141137950

void __cdecl _dynamic_initializer_for__CVarYourCommand__(void)

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
            (&CVarYourCommand,L"r.Nanite.Streaming.ResetStreamingPool",
             L"Resets the Nanite streaming pool on next update.",
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
  atexit(_dynamic_atexit_destructor_for__CVarYourCommand__);
  return;
}

// `dynamic_initializer_for_'DataVertexBufferName'' @ 141137a80

void __cdecl SkeletalMeshResourceNames::_dynamic_initializer_for__DataVertexBufferName__(void)

{
  ::FName::FName(&DataVertexBufferName,L"FSkinWeightVertexBuffer.DataVertexBuffer");
  return;
}

// `dynamic_initializer_for_'GNeuralProfileManager'' @ 141137aa0

void __cdecl _dynamic_initializer_for__GNeuralProfileManager__(void)

{
  atexit(_dynamic_atexit_destructor_for__GNeuralProfileManager__);
  return;
}

// `dynamic_initializer_for_'GNeuralProfileModelTextureManager'' @ 141137ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GNeuralProfileModelTextureManager__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GNeuralProfileModelTextureManager);
  GNeuralProfileModelTextureManager._0_8_ = &___7FNeuralProfileModelTextureManager__6B_;
  GNeuralProfileModelTextureManager._32_8_ = 0;
  GNeuralProfileModelTextureManager._40_8_ = 0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GNeuralProfileModelTextureManager._0_8_ =
       &___7__TGlobalResource_VFNeuralProfileModelTextureManager___00__6B_;
  if (GNeuralProfileModelTextureManager._24_4_ != -1) {
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
  GNeuralProfileModelTextureManager._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GNeuralProfileModelTextureManager._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GNeuralProfileModelTextureManager,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GNeuralProfileModelTextureManager__);
    return;
  }
  BeginInitResource((FRenderResource *)&GNeuralProfileModelTextureManager,(FRenderCommandPipe *)0x0)
  ;
  atexit(_dynamic_atexit_destructor_for__GNeuralProfileModelTextureManager__);
  return;
}

// `dynamic_initializer_for_'GSSProfiles'' @ 141137bd0

void __cdecl _dynamic_initializer_for__GSSProfiles__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSSProfiles__);
  return;
}

// `dynamic_initializer_for_'GSSProfilesPreIntegratedTexture'' @ 141137bf0

void __cdecl _dynamic_initializer_for__GSSProfilesPreIntegratedTexture__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSSProfilesPreIntegratedTexture__);
  return;
}

// `dynamic_initializer_for_'GSpecularProfileTextureAtlas'' @ 141137c10

void __cdecl _dynamic_initializer_for__GSpecularProfileTextureAtlas__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSpecularProfileTextureAtlas__);
  return;
}

// `dynamic_initializer_for_'GSpecularProfileTextureManager'' @ 141137c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GSpecularProfileTextureManager__(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSpecularProfileStruct *pFVar4;
  FRHICommandListBase *pFVar5;
  FSpecularProfileStruct *this;
  undefined1 auStack_458 [32];
  FSpecularProfileStruct local_438;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_458;
  FRenderResource::FRenderResource((FRenderResource *)&GSpecularProfileTextureManager);
  GSpecularProfileTextureManager._0_8_ = &___7FSpecularProfileTextureManager__6B_;
  GSpecularProfileTextureManager._32_8_ = 0;
  GSpecularProfileTextureManager._40_8_ = 0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                       ,0xc4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = GSpecularProfileTextureManager._40_4_;
  if (GSpecularProfileTextureManager._40_4_ == GSpecularProfileTextureManager._44_4_) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x440,8,(ForAnyElementType *)&GSpecularProfileTextureManager.field_0x20,
                       (int *)&GSpecularProfileTextureManager.field_0x2c);
  }
  GSpecularProfileTextureManager._40_4_ = iVar3 + 1;
  this = (FSpecularProfileStruct *)((longlong)iVar3 * 0x440 + GSpecularProfileTextureManager._32_8_)
  ;
  DefaultConstructItems<FSpecularProfileTextureManager::FProfileEntry,int>(this,1);
  pFVar4 = FSpecularProfileStruct::FSpecularProfileStruct(&local_438);
  FSpecularProfileStruct::operator=(this,pFVar4);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_438.LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_438.ViewColor);
  *(undefined8 *)(this + 1) = 0;
  this[1].ViewColor.ColorCurves[0]._padding_ = 0;
  GSpecularProfileTextureManager._0_8_ =
       &___7__TGlobalResource_VFSpecularProfileTextureManager___00__6B_;
  if (GSpecularProfileTextureManager._24_4_ != -1) {
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
  GSpecularProfileTextureManager._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GSpecularProfileTextureManager._0_8_ + 0x18);
    pFVar5 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GSpecularProfileTextureManager,pFVar5);
  }
  else {
    BeginInitResource((FRenderResource *)&GSpecularProfileTextureManager,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__GSpecularProfileTextureManager__);
  return;
}

// `dynamic_initializer_for_'GStreamingManager'' @ 141137de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl Nanite::_dynamic_initializer_for__GStreamingManager__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FStreamingManager::FStreamingManager((FStreamingManager *)&GStreamingManager);
  GStreamingManager._0_8_ = &___7__TGlobalResource_VFStreamingManager_Nanite___00__6B_;
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

// `dynamic_initializer_for_'GSubsurfaceProfileTextureObject'' @ 141137ea0

void __cdecl _dynamic_initializer_for__GSubsurfaceProfileTextureObject__(void)

{
  TGlobalResource<FSubsurfaceProfileTexture,1>::TGlobalResource<FSubsurfaceProfileTexture,1>
            (&GSubsurfaceProfileTextureObject);
  atexit(_dynamic_atexit_destructor_for__GSubsurfaceProfileTextureObject__);
  return;
}

// `dynamic_initializer_for_'LogNaniteStreaming'' @ 141137ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNaniteStreaming__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNaniteStreaming,L"LogNaniteStreaming",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNaniteStreaming__);
  return;
}

// `dynamic_initializer_for_'LogNeuralProfile'' @ 141137f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNeuralProfile__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNeuralProfile,L"LogNeuralProfile",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNeuralProfile__);
  return;
}

// `dynamic_initializer_for_'LogRayTracingGeometryManager'' @ 141137f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRayTracingGeometryManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRayTracingGeometryManager,L"LogRayTracingGeometryManager",Log,
             All);
  atexit(_dynamic_atexit_destructor_for__LogRayTracingGeometryManager__);
  return;
}

// `dynamic_initializer_for_'LogSkeletalMeshHalfEdgeBufferAccessor'' @ 141137f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkeletalMeshHalfEdgeBufferAccessor__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSkeletalMeshHalfEdgeBufferAccessor,
             L"LogSkeletalMeshHalfEdgeBufferAccessor",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSkeletalMeshHalfEdgeBufferAccessor__);
  return;
}

// `dynamic_initializer_for_'LogSpecularProfile'' @ 141137fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSpecularProfile__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSpecularProfile,L"LogSpecularProfile",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpecularProfile__);
  return;
}

// `dynamic_initializer_for_'LogSubsurfaceProfile'' @ 141138010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSubsurfaceProfile__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSubsurfaceProfile,L"LogSubsurfaceProfile",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSubsurfaceProfile__);
  return;
}

// `dynamic_initializer_for_'LookupVertexBufferName'' @ 141138050

void __cdecl SkeletalMeshResourceNames::_dynamic_initializer_for__LookupVertexBufferName__(void)

{
  ::FName::FName(&LookupVertexBufferName,L"FSkinWeightVertexBuffer.LookupVertexBuffer");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141138070

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_FTexture2DArrayResource'' @ 141138090

void __cdecl _dynamic_initializer_for__NAME_FTexture2DArrayResource__(void)

{
  FName::FName(&NAME_FTexture2DArrayResource,L"FTexture2DArrayResource");
  return;
}

// `dynamic_initializer_for_'NAME_FTexture2DResource'' @ 1411380b0

void __cdecl _dynamic_initializer_for__NAME_FTexture2DResource__(void)

{
  FName::FName(&NAME_FTexture2DResource,L"FTexture2DResource");
  return;
}

// `dynamic_initializer_for_'NAME_FTexture3DResource'' @ 1411380d0

void __cdecl _dynamic_initializer_for__NAME_FTexture3DResource__(void)

{
  FName::FName(&NAME_FTexture3DResource,L"FTexture3DResource");
  return;
}

// `dynamic_initializer_for_'SkeletalMesh'' @ 1411380f0

void __cdecl UE::RenderCommandPipe::_dynamic_initializer_for__SkeletalMesh__(void)

{
  FRenderCommandPipe::FRenderCommandPipe
            (&SkeletalMesh,L"SkeletalMesh",None,L"r.RenderCommandPipe.SkeletalMesh",
             L"Whether to enable the SkeletalMesh Render Command Pipe 0: off; 1: on (default)");
  atexit(_dynamic_atexit_destructor_for__SkeletalMesh__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming00_NaniteResources'' @ 141138140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming00_NaniteResources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming00_NaniteResources ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming00_NaniteResources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming00_NaniteResources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming00_NaniteResources,*pFVar1,
               L"Nanite Resources","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming"
               ,true,false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming01_Imposters'' @ 1411381d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming01_Imposters__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming01_Imposters ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming01_Imposters>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming01_Imposters");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming01_Imposters,*pFVar1,
               L"Imposters","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming02_HierarchyNodes'' @ 141138260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming02_HierarchyNodes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming02_HierarchyNodes ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming02_HierarchyNodes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming02_HierarchyNodes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming02_HierarchyNodes,*pFVar1,
               L"HierarchyNodes","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",
               true,false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming03_PeakHierarchyNodes'' @ 1411382f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming03_PeakHierarchyNodes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming03_PeakHierarchyNodes ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming03_PeakHierarchyNodes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming03_PeakHierarchyNodes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming03_PeakHierarchyNodes,
               *pFVar1,L"    Peak","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming"
               ,true,false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming04_MaxHierarchyLevels'' @ 141138380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming04_MaxHierarchyLevels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming04_MaxHierarchyLevels ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming04_MaxHierarchyLevels>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming04_MaxHierarchyLevels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming04_MaxHierarchyLevels,
               *pFVar1,L"    Max Depth","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming06_RootPages'' @ 141138410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming06_RootPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming06_RootPages ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming06_RootPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming06_RootPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming06_RootPages,*pFVar1,
               L"Root Pages","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming07_PeakRootPages'' @ 1411384a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming07_PeakRootPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming07_PeakRootPages ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming07_PeakRootPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming07_PeakRootPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming07_PeakRootPages,*pFVar1,
               L"    Peak","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming08_AllocatedRootPages'' @ 141138530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming08_AllocatedRootPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming08_AllocatedRootPages ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming08_AllocatedRootPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming08_AllocatedRootPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming08_AllocatedRootPages,
               *pFVar1,L"    Allocated","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming09_RootPageLimit'' @ 1411385c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming09_RootPageLimit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming09_RootPageLimit ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming09_RootPageLimit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming09_RootPageLimit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming09_RootPageLimit,*pFVar1,
               L"    Limit","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming0A_StreamingPoolPages'' @ 141138650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming0A_StreamingPoolPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming0A_StreamingPoolPages ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming0A_StreamingPoolPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming0A_StreamingPoolPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming0A_StreamingPoolPages,
               *pFVar1,L"Streaming Pool Pages","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming0B_TotalStreamingPages'' @ 1411386e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming0B_TotalStreamingPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming0B_TotalStreamingPages ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming0B_TotalStreamingPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming0B_TotalStreamingPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming0B_TotalStreamingPages,
               *pFVar1,L"Total Streaming Pages","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming10_ImpostersSizeMB'' @ 141138770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming10_ImpostersSizeMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming10_ImpostersSizeMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming10_ImpostersSizeMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming10_ImpostersSizeMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming10_ImpostersSizeMB,*pFVar1,
               L"Imposter Size (MB)","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming11_HiearchySizeMB'' @ 141138800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming11_HiearchySizeMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming11_HiearchySizeMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming11_HiearchySizeMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming11_HiearchySizeMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming11_HiearchySizeMB,*pFVar1,
               L"Hierarchy Size (MB)","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming12_TotalPoolSizeMB'' @ 141138890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming12_TotalPoolSizeMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming12_TotalPoolSizeMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming12_TotalPoolSizeMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming12_TotalPoolSizeMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming12_TotalPoolSizeMB,*pFVar1,
               L"Total Pool Size (MB)","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming13_AllocatedRootPagesSizeMB'' @ 141138920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NaniteStreaming13_AllocatedRootPagesSizeMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming13_AllocatedRootPagesSizeMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming13_AllocatedRootPagesSizeMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming13_AllocatedRootPagesSizeMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming13_AllocatedRootPagesSizeMB
               ,*pFVar1,L"    Root Pool Size (MB)","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming14_StreamingPoolSizeMB'' @ 1411389b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming14_StreamingPoolSizeMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming14_StreamingPoolSizeMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming14_StreamingPoolSizeMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming14_StreamingPoolSizeMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming14_StreamingPoolSizeMB,
               *pFVar1,L"    Streaming Pool Size (MB)","STATGROUP_NaniteStreaming",
               "STATCAT_Advanced",L"NaniteStreaming",true,false,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming15_TotalPoolSizeLimitMB'' @ 141138a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming15_TotalPoolSizeLimitMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming15_TotalPoolSizeLimitMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming15_TotalPoolSizeLimitMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming15_TotalPoolSizeLimitMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming15_TotalPoolSizeLimitMB,
               *pFVar1,L"Total Pool Size Limit (MB)","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,false,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming20_PageRequests'' @ 141138ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming20_PageRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming20_PageRequests ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming20_PageRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming20_PageRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming20_PageRequests,*pFVar1,
               L"Page Requests","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",
               true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming21_PageRequestsGPU'' @ 141138b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming21_PageRequestsGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming21_PageRequestsGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming21_PageRequestsGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming21_PageRequestsGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming21_PageRequestsGPU,*pFVar1,
               L"    GPU","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming22_PageRequestsExplicit'' @ 141138bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming22_PageRequestsExplicit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming22_PageRequestsExplicit ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming22_PageRequestsExplicit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming22_PageRequestsExplicit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming22_PageRequestsExplicit,
               *pFVar1,L"    Explicit","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming23_PageRequestsPrefetch'' @ 141138c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming23_PageRequestsPrefetch__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming23_PageRequestsPrefetch ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming23_PageRequestsPrefetch>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming23_PageRequestsPrefetch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming23_PageRequestsPrefetch,
               *pFVar1,L"    Prefetch","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming24_PageRequestsParents'' @ 141138d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming24_PageRequestsParents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming24_PageRequestsParents ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming24_PageRequestsParents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming24_PageRequestsParents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming24_PageRequestsParents,
               *pFVar1,L"    Parents","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming25_PageRequestsUnique'' @ 141138da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming25_PageRequestsUnique__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming25_PageRequestsUnique ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming25_PageRequestsUnique>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming25_PageRequestsUnique");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming25_PageRequestsUnique,
               *pFVar1,L"    Unique","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming26_PageRequestsRegistered'' @ 141138e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming26_PageRequestsRegistered__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming26_PageRequestsRegistered ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming26_PageRequestsRegistered>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming26_PageRequestsRegistered");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming26_PageRequestsRegistered,
               *pFVar1,L"    Registered","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming27_PageRequestsNew'' @ 141138ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming27_PageRequestsNew__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming27_PageRequestsNew ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming27_PageRequestsNew>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming27_PageRequestsNew");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming27_PageRequestsNew,*pFVar1,
               L"    New","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming30_VisibleStreamingDataSizeMB'' @ 141138f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NaniteStreaming30_VisibleStreamingDataSizeMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming30_VisibleStreamingDataSizeMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming30_VisibleStreamingDataSizeMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming30_VisibleStreamingDataSizeMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NaniteStreaming30_VisibleStreamingDataSizeMB,*pFVar1,
               L"Visible Streaming Data Size (MB)","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming31_VisibleStreamingPoolPercentage'' @ 141138fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NaniteStreaming31_VisibleStreamingPoolPercentage__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming31_VisibleStreamingPoolPercentage ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming31_VisibleStreamingPoolPercentage>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming31_VisibleStreamingPoolPercentage");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NaniteStreaming31_VisibleStreamingPoolPercentage,*pFVar1,
               L"    Streaming Pool Percentage","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming32_VisibleStreamingQualityScale'' @ 141139070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NaniteStreaming32_VisibleStreamingQualityScale__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming32_VisibleStreamingQualityScale ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming32_VisibleStreamingQualityScale>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming32_VisibleStreamingQualityScale");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NaniteStreaming32_VisibleStreamingQualityScale,*pFVar1,
               L"    Quality Scale","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming40_IORequestSizeMB'' @ 141139100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming40_IORequestSizeMB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming40_IORequestSizeMB ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming40_IORequestSizeMB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming40_IORequestSizeMB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming40_IORequestSizeMB,*pFVar1,
               L"IO Request Size (MB)","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,NumBits,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming41_ReadbackSize'' @ 141139190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming41_ReadbackSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming41_ReadbackSize ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming41_ReadbackSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming41_ReadbackSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming41_ReadbackSize,*pFVar1,
               L"Readback Size","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",
               true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming42_ReadbackBufferSize'' @ 141139220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming42_ReadbackBufferSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming42_ReadbackBufferSize ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming42_ReadbackBufferSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming42_ReadbackBufferSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming42_ReadbackBufferSize,
               *pFVar1,L"Readback Buffer Size","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_AddParentNewRequests'' @ 1411392b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_AddParentNewRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_AddParentNewRequests ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_AddParentNewRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_AddParentNewRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_AddParentNewRequests,
               *pFVar1,L"AddParentNewRequests","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_AddParentRegisteredRequests'' @ 141139340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_AddParentRegisteredRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_AddParentRegisteredRequests ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_AddParentRegisteredRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_AddParentRegisteredRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NaniteStreaming_AddParentRegisteredRequests,*pFVar1,
               L"AddParentRegisteredRequests","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_AddParentRequests'' @ 1411393d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_AddParentRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_AddParentRequests ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_AddParentRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_AddParentRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_AddParentRequests,*pFVar1,
               L"AddParentRequests","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_AddResource'' @ 141139460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_AddResource__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_AddResource ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_AddResource>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_AddResource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_AddResource,*pFVar1,
               L"AddResource","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true
               ,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_ApplyFixup'' @ 1411394f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_ApplyFixup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_ApplyFixup ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_ApplyFixup>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_ApplyFixup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_ApplyFixup,*pFVar1,
               L"ApplyFixup","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_AsyncUpdate'' @ 141139580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_AsyncUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_AsyncUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_AsyncUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_AsyncUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_AsyncUpdate,*pFVar1,
               L"AsyncUpdate","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true
               ,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_BeginAsyncUpdate'' @ 141139610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_BeginAsyncUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_BeginAsyncUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_BeginAsyncUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_BeginAsyncUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_BeginAsyncUpdate,*pFVar1,
               L"BeginAsyncUpdate","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming"
               ,true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_ClearReferencedArray'' @ 1411396a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_ClearReferencedArray__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_ClearReferencedArray ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_ClearReferencedArray>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_ClearReferencedArray");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_ClearReferencedArray,
               *pFVar1,L"ClearReferencedArray","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_CompactLRU'' @ 141139730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_CompactLRU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_CompactLRU ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_CompactLRU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_CompactLRU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_CompactLRU,*pFVar1,
               L"CompactLRU","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_EndAsyncUpdate'' @ 1411397c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_EndAsyncUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_EndAsyncUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_EndAsyncUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_EndAsyncUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_EndAsyncUpdate,*pFVar1,
               L"EndAsyncUpdate","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",
               true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_Heapify'' @ 141139850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_Heapify__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_Heapify ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_Heapify>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_Heapify");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_Heapify,*pFVar1,L"Heapify"
               ,"STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,true,ST_int64
               ,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_InstallReadyPages'' @ 1411398e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_InstallReadyPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_InstallReadyPages ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_InstallReadyPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_InstallReadyPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_InstallReadyPages,*pFVar1,
               L"InstallReadyPages","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_ProcessGPURequests'' @ 141139970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_ProcessGPURequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_ProcessGPURequests ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_ProcessGPURequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_ProcessGPURequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_ProcessGPURequests,*pFVar1
               ,L"ProcessGPURequests","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_ProcessRequests'' @ 141139a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_ProcessRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_ProcessRequests ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_ProcessRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_ProcessRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_ProcessRequests,*pFVar1,
               L"ProcessRequests","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",
               true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_RemoveResource'' @ 141139a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_RemoveResource__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_RemoveResource ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_RemoveResource>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_RemoveResource");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_RemoveResource,*pFVar1,
               L"RemoveResource","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",
               true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_ResolveOverwrites'' @ 141139b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_ResolveOverwrites__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_ResolveOverwrites ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_ResolveOverwrites>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_ResolveOverwrites");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_ResolveOverwrites,*pFVar1,
               L"ResolveOverwrites","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_SelectHighestPriority'' @ 141139bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_SelectHighestPriority__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_SelectHighestPriority ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_SelectHighestPriority>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_SelectHighestPriority");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_SelectHighestPriority,
               *pFVar1,L"SelectHighestPriority","STATGROUP_NaniteStreaming","STATCAT_Advanced",
               L"NaniteStreaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_UpdateLRU'' @ 141139c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_UpdateLRU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_UpdateLRU ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_UpdateLRU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_UpdateLRU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_UpdateLRU,*pFVar1,
               L"UpdateLRU","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_UploadTask'' @ 141139cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_UploadTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_UploadTask ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_UploadTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_UploadTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_UploadTask,*pFVar1,
               L"UploadTask","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_VerifyFixupState'' @ 141139d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_VerifyFixupState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_VerifyFixupState ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_VerifyFixupState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_VerifyFixupState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_VerifyFixupState,*pFVar1,
               L"VerifyFixupState","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming"
               ,true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NaniteStreaming_VerifyLRU'' @ 141139df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NaniteStreaming_VerifyLRU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NaniteStreaming_VerifyLRU ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteStreaming_VerifyLRU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NaniteStreaming_VerifyLRU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteStreaming_VerifyLRU,*pFVar1,
               L"VerifyLRU","STATGROUP_NaniteStreaming","STATCAT_Advanced",L"NaniteStreaming",true,
               true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingGeometryAlwaysResidentMemory'' @ 141139e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingGeometryAlwaysResidentMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingGeometryAlwaysResidentMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryAlwaysResidentMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingGeometryAlwaysResidentMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryAlwaysResidentMemory,
               *pFVar1,L"Always Resident Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingGeometryCount'' @ 141139f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingGeometryCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingGeometryCount ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingGeometryCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryCount,*pFVar1,
               L"Geometry Count","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingGeometryGroupCount'' @ 141139fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingGeometryGroupCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingGeometryGroupCount ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryGroupCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingGeometryGroupCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryGroupCount,*pFVar1,
               L"Geometry Group Count","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingGeometryReferencedMemory'' @ 14113a030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingGeometryReferencedMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingGeometryReferencedMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryReferencedMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingGeometryReferencedMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryReferencedMemory,*pFVar1
               ,L"Referenced Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingGeometryRequestedMemory'' @ 14113a0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingGeometryRequestedMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingGeometryRequestedMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryRequestedMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingGeometryRequestedMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryRequestedMemory,*pFVar1,
               L"Requested Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingGeometryResidentMemory'' @ 14113a150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingGeometryResidentMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingGeometryResidentMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingGeometryResidentMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingGeometryResidentMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingGeometryResidentMemory,*pFVar1,
               L"Resident Memory","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingInflightStreamingRequests'' @ 14113a1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingInflightStreamingRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingInflightStreamingRequests ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingInflightStreamingRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingInflightStreamingRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingInflightStreamingRequests,
               *pFVar1,L"In-flight Streaming Requests","STATGROUP_RayTracingGeometry",
               "STATCAT_Advanced",L"Ray Tracing Geometry",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingPendingBuildPrimitives'' @ 14113a270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingPendingBuildPrimitives__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingPendingBuildPrimitives ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuildPrimitives>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingPendingBuildPrimitives");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingPendingBuildPrimitives,*pFVar1,
               L"Pending Build Primitives","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingPendingBuilds'' @ 14113a300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingPendingBuilds__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingPendingBuilds ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingBuilds>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingPendingBuilds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingPendingBuilds,*pFVar1,
               L"Pending Builds","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RayTracingPendingStreamingRequests'' @ 14113a390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RayTracingPendingStreamingRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RayTracingPendingStreamingRequests ==
      (FThreadSafeStaticStat<FStat_STAT_RayTracingPendingStreamingRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RayTracingPendingStreamingRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingPendingStreamingRequests,*pFVar1
               ,L"Pending Streaming Requests","STATGROUP_RayTracingGeometry","STATCAT_Advanced",
               L"Ray Tracing Geometry",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h__Script_Engine_1838391164'' @ 14113a420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h__Script_Engine_1838391164__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h__Script_Engine_3366518939'' @ 14113a470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h__Script_Engine_3366518939__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h__Script_Engine_2326259680'' @ 14113a4c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h__Script_Engine_2326259680__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h__Script_Engine_3463746729'' @ 14113a510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h__Script_Engine_3463746729__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SkeletalMeshHalfEdgeBufferAccessor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h__Script_Engine_3591595708'' @ 14113a550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h__Script_Engine_3591595708__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NaniteStreaming'' @ 14113a590

void __cdecl _dynamic_initializer_for___GCsvCategory_NaniteStreaming__(void)

{
  FString::operator=(&_GCsvCategory_NaniteStreaming.Name,L"NaniteStreaming");
  _GCsvCategory_NaniteStreaming.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NaniteStreaming.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NaniteStreaming__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NaniteStreamingDetail'' @ 14113a5e0

void __cdecl _dynamic_initializer_for___GCsvCategory_NaniteStreamingDetail__(void)

{
  FString::operator=(&_GCsvCategory_NaniteStreamingDetail.Name,L"NaniteStreamingDetail");
  _GCsvCategory_NaniteStreamingDetail.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NaniteStreamingDetail.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NaniteStreamingDetail__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_RayTracingGeometry'' @ 14113a630

void __cdecl _dynamic_initializer_for___GCsvCategory_RayTracingGeometry__(void)

{
  FString::operator=(&_GCsvCategory_RayTracingGeometry.Name,L"RayTracingGeometry");
  _GCsvCategory_RayTracingGeometry.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_RayTracingGeometry.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_RayTracingGeometry__);
  return;
}

// `scalar_deleting_destructor' @ 1484304d0

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

// Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor @ 148430760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor(void)

{
  if (Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.OuterSingleton,
               &Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.OuterSingleton;
}

// Z_Construct_UClass_USubsurfaceProfile @ 148430860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubsurfaceProfile(void)

{
  if (Z_Registration_Info_UClass_USubsurfaceProfile.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubsurfaceProfile.OuterSingleton,
               &Z_Construct_UClass_USubsurfaceProfile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubsurfaceProfile.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ESubsurfaceImplementationTechniqueHint @ 1484308a0

UEnum * __cdecl Z_Construct_UEnum_Engine_ESubsurfaceImplementationTechniqueHint(void)

{
  if (Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESubsurfaceImplementationTechniqueHint_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSubsurfaceProfileStruct @ 1484308e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubsurfaceProfileStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubsurfaceProfileStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubsurfaceProfileStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubsurfaceProfileStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubsurfaceProfileStruct.InnerSingleton;
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

// ESubsurfaceImplementationTechniqueHint_StaticEnum @ 148430960

UEnum * __cdecl ESubsurfaceImplementationTechniqueHint_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubsurfaceImplementationTechniqueHint,
                       (UObject *)pUVar1,L"ESubsurfaceImplementationTechniqueHint");
  }
  return Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.OuterSingleton;
}

// NewProp_bEnableBurley_SetBit @ 1484309a0

void __cdecl
Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bEnableMeanFreePath_SetBit @ 1484309b0

void __cdecl
Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableMeanFreePath_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 1484309c0

void * __cdecl Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubsurfaceProfileStruct,&UE::CoreUObject::Private::Construct<FSubsurfaceProfileStruct>,&UE::CoreUObject::Private::ConstructForTests<FSubsurfaceProfileStruct>,&UE::CoreUObject::Private::Destruct<FSubsurfaceProfileStruct>,&UE::CoreUObject::Private::Copy<FSubsurfaceProfileStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNeuralProfile @ 148430a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNeuralProfile(void)

{
  if (Z_Registration_Info_UClass_UNeuralProfile.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNeuralProfile.OuterSingleton,
               &Z_Construct_UClass_UNeuralProfile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNeuralProfile.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ENeuralModelTileType @ 148430a40

UEnum * __cdecl Z_Construct_UEnum_Engine_ENeuralModelTileType(void)

{
  if (Z_Registration_Info_UEnum_ENeuralModelTileType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENeuralModelTileType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENeuralModelTileType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENeuralModelTileType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENeuralProfileFormat @ 148430a80

UEnum * __cdecl Z_Construct_UEnum_Engine_ENeuralProfileFormat(void)

{
  if (Z_Registration_Info_UEnum_ENeuralProfileFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENeuralProfileFormat.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENeuralProfileFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENeuralProfileFormat.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType @ 148430ac0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType(void)

{
  if (Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETileOverlapResolveType @ 148430b00

UEnum * __cdecl Z_Construct_UEnum_Engine_ETileOverlapResolveType(void)

{
  if (Z_Registration_Info_UEnum_ETileOverlapResolveType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETileOverlapResolveType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETileOverlapResolveType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETileOverlapResolveType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNeuralProfileStruct @ 148430b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNeuralProfileStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNeuralProfileStruct.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNeuralProfileStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNeuralProfileStruct.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNeuralProfileStruct.InnerSingleton;
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

// ENeuralProfileFormat_StaticEnum @ 148430bc0

UEnum * __cdecl ENeuralProfileFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralProfileFormat,(UObject *)pUVar1,
                       L"ENeuralProfileFormat");
  }
  return Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton;
}

// ENeuralModelTileType_StaticEnum @ 148430c00

UEnum * __cdecl ENeuralModelTileType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralModelTileType,(UObject *)pUVar1,
                       L"ENeuralModelTileType");
  }
  return Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148430c40

void * __thiscall
TGlobalResource<FSubsurfaceProfileTexture,1>::_scalar_deleting_destructor_
          (TGlobalResource<FSubsurfaceProfileTexture,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSubsurfaceProfileTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSubsurfaceProfileTexture__6B_;
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// ETileOverlapResolveType_StaticEnum @ 148430cb0

UEnum * __cdecl ETileOverlapResolveType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETileOverlapResolveType,(UObject *)pUVar1,
                       L"ETileOverlapResolveType");
  }
  return Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton;
}

// ENeuralProfileRuntimeType_StaticEnum @ 148430cf0

UEnum * __cdecl ENeuralProfileRuntimeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType,(UObject *)pUVar1,
                       L"ENeuralProfileRuntimeType");
  }
  return Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148430f20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 148430f50

void * __cdecl Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNeuralProfileStruct,&UE::CoreUObject::Private::Construct<FNeuralProfileStruct>,&UE::CoreUObject::Private::ConstructForTests<FNeuralProfileStruct>,&UE::CoreUObject::Private::Destruct<FNeuralProfileStruct>,&UE::CoreUObject::Private::Copy<FNeuralProfileStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148431180

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

// `scalar_deleting_destructor' @ 1484313e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_USpecularProfile @ 1484314c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USpecularProfile(void)

{
  if (Z_Registration_Info_UClass_USpecularProfile.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USpecularProfile.OuterSingleton,
               &Z_Construct_UClass_USpecularProfile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USpecularProfile.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ESpecularProfileFormat @ 148431500

UEnum * __cdecl Z_Construct_UEnum_Engine_ESpecularProfileFormat(void)

{
  if (Z_Registration_Info_UEnum_ESpecularProfileFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpecularProfileFormat.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpecularProfileFormat.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSpecularProfileStruct @ 148431540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpecularProfileStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpecularProfileStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpecularProfileStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpecularProfileStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpecularProfileStruct.InnerSingleton;
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

// ESpecularProfileFormat_StaticEnum @ 1484315c0

UEnum * __cdecl ESpecularProfileFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESpecularProfileFormat,(UObject *)pUVar1,
                       L"ESpecularProfileFormat");
  }
  return Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton;
}

// NewStructOps @ 148431600

void * __cdecl Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x420;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpecularProfileStruct,&UE::CoreUObject::Private::Construct<FSpecularProfileStruct>,&UE::CoreUObject::Private::ConstructForTests<FSpecularProfileStruct>,&UE::CoreUObject::Private::Destruct<FSpecularProfileStruct>,&UE::CoreUObject::Private::Copy<FSpecularProfileStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148431640

void * __thiscall
FNeuralProfileModelTextureManager::_scalar_deleting_destructor_
          (FNeuralProfileModelTextureManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNeuralProfileModelTextureManager__6B_;
  pFVar1 = (this->NeuralProfileEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1484316a0

void * __thiscall
TGlobalResource<FNeuralProfileModelTextureManager,1>::_scalar_deleting_destructor_
          (TGlobalResource<FNeuralProfileModelTextureManager,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNeuralProfileModelTextureManager___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FNeuralProfileModelTextureManager__6B_;
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148431710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TGlobalResource<Nanite::FStreamingManager,1>::_scalar_deleting_destructor_
          (TGlobalResource<Nanite::FStreamingManager,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFStreamingManager_Nanite___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  Nanite::FStreamingManager::~FStreamingManager((FStreamingManager *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x718);
  }
  return this;
}

// Z_Construct_UClass_UReplayNetConnection @ 1484319d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReplayNetConnection(void)

{
  if (Z_Registration_Info_UClass_UReplayNetConnection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReplayNetConnection.OuterSingleton,
               &Z_Construct_UClass_UReplayNetConnection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReplayNetConnection.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148431ae0

void * __thiscall
TGlobalResource<FSpecularProfileTextureManager,1>::_scalar_deleting_destructor_
          (TGlobalResource<FSpecularProfileTextureManager,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSpecularProfileTextureManager___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSpecularProfileTextureManager__6B_;
  DestructItems<FSpecularProfileTextureManager::FProfileEntry,int>
            (*(FProfileEntry **)&this->field_0x20,*(int *)&this->field_0x28);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 148431b60

void __cdecl
`<lambda_26>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  bHasRayTracingEnableChanged = true;
  return;
}

// <lambda_invoker_cdecl> @ 148431b70

void __cdecl
`<lambda_27>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  bHasRayTracingEnableChanged = true;
  return;
}

// <lambda_invoker_cdecl> @ 148431b80

void __cdecl
`<lambda_28>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  bRefreshAlwaysResidentRayTracingGeometries = true;
  return;
}

// operator<<<int,0> @ 148431b90

FArchive * __cdecl operator<<<int,0>(FArchive *param_1,TResourceArray<int,0> *param_2)

{
  FArchive *pFVar1;
  TArray<int,TMemoryImageAllocator<0>_> *pTVar2;
  
  pTVar2 = (TArray<int,TMemoryImageAllocator<0>_> *)&param_2->_padding_;
  if (param_2 == (TResourceArray<int,0> *)0x0) {
    pTVar2 = (TArray<int,TMemoryImageAllocator<0>_> *)0x0;
  }
  pFVar1 = TArrayPrivateFriend::Serialize<int,TMemoryImageAllocator<0>_>(param_1,pTVar2);
  return pFVar1;
}

// operator<<<int,TMemoryImageAllocator<0>_> @ 148431bb0

FArchive * __cdecl
operator<<<int,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<int,TMemoryImageAllocator<0>_> *param_2)

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
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
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
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        FVar6 = param_2->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6,(longlong)param_2->ArrayNum << 2);
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

// operator<<<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> @ 148431bc0

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  TGPUSkinVertexFloat16Uvs<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar9) {
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
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat16Uvs<1> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar11 * 0x18));
              uVar11 = uVar11 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x418,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              pTVar2 = (TGPUSkinVertexFloat16Uvs<1> *)((longlong)FVar10 + (longlong)iVar6 * 0x18);
              DefaultConstructItems<TGPUSkinVertexFloat16Uvs<1>,int>(pTVar2,1);
              operator<<(param_1,pTVar2);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> @ 148431bd0

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  TGPUSkinVertexFloat16Uvs<2> *pTVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x1c);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x92493)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar9) {
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
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat16Uvs<2> *)
                                 ((longlong)(int)uVar10 * 0x1c + (longlong)FVar8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x41c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pTVar11 = (TGPUSkinVertexFloat16Uvs<2> *)((longlong)iVar5 * 0x1c + (longlong)FVar8);
              DefaultConstructItems<TGPUSkinVertexFloat16Uvs<2>,int>(pTVar11,1);
              operator<<(param_1,pTVar11);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> @ 148431be0

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  TGPUSkinVertexFloat16Uvs<3> *pTVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x20,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar6 = ~uVar10 >> 0x1f;
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
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat16Uvs<3> *)
                                 ((longlong)(int)uVar10 * 0x20 + (longlong)FVar8));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x420,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pTVar11 = (TGPUSkinVertexFloat16Uvs<3> *)((longlong)iVar5 * 0x20 + (longlong)FVar8);
              DefaultConstructItems<TGPUSkinVertexFloat16Uvs<3>,int>(pTVar11,1);
              operator<<(param_1,pTVar11);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> @ 148431bf0

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  TGPUSkinVertexFloat16Uvs<4> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x24);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x71c72)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar9) {
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
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat16Uvs<4> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar11 * 0x24));
              uVar11 = uVar11 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x424,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              pTVar2 = (TGPUSkinVertexFloat16Uvs<4> *)((longlong)FVar10 + (longlong)iVar6 * 0x24);
              DefaultConstructItems<TGPUSkinVertexFloat16Uvs<4>,int>(pTVar2,1);
              operator<<(param_1,pTVar2);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> @ 148431c00

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  TGPUSkinVertexFloat32Uvs<1> *pTVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x1c);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x92493)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar9) {
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
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat32Uvs<1> *)
                                 ((longlong)(int)uVar10 * 0x1c + (longlong)FVar8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x41c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pTVar11 = (TGPUSkinVertexFloat32Uvs<1> *)((longlong)iVar5 * 0x1c + (longlong)FVar8);
              DefaultConstructItems<TGPUSkinVertexFloat32Uvs<1>,int>(pTVar11,1);
              operator<<(param_1,pTVar11);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> @ 148431c10

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  TGPUSkinVertexFloat32Uvs<2> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x24);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x71c72)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar9) {
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
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat32Uvs<2> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar11 * 0x24));
              uVar11 = uVar11 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x424,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              pTVar2 = (TGPUSkinVertexFloat32Uvs<2> *)((longlong)FVar10 + (longlong)iVar6 * 0x24);
              DefaultConstructItems<TGPUSkinVertexFloat32Uvs<2>,int>(pTVar2,1);
              operator<<(param_1,pTVar2);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> @ 148431c20

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  TGPUSkinVertexFloat32Uvs<3> *pTVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x2c);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x2c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x5d175)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar9) {
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
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat32Uvs<3> *)
                                 ((longlong)(int)uVar10 * 0x2c + (longlong)FVar8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x42c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pTVar11 = (TGPUSkinVertexFloat32Uvs<3> *)((longlong)iVar5 * 0x2c + (longlong)FVar8);
              DefaultConstructItems<TGPUSkinVertexFloat32Uvs<3>,int>(pTVar11,1);
              operator<<(param_1,pTVar11);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> @ 148431c30

FArchive * __cdecl
operator<<<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  TGPUSkinVertexFloat32Uvs<4> *pTVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x34);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x34,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x4ec4f)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar9) {
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
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              operator<<(param_1,(TGPUSkinVertexFloat32Uvs<4> *)
                                 ((longlong)(int)uVar10 * 0x34 + (longlong)FVar8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x434,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pTVar11 = (TGPUSkinVertexFloat32Uvs<4> *)((longlong)iVar5 * 0x34 + (longlong)FVar8);
              DefaultConstructItems<TGPUSkinVertexFloat32Uvs<4>,int>(pTVar11,1);
              operator<<(param_1,pTVar11);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> @ 148431c40

FArchive * __cdecl
operator<<<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                (0x110,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            FVar8 = param_2->AllocatorInstance;
            if (((ulonglong)FVar8 & 1) != 0) {
              FVar8 = (ForAnyElementType)
                      ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18)
                      );
            }
            operator<<(param_1,(TLegacySkinWeightInfo<1,unsigned_char> *)
                               ((longlong)iVar5 * 0x10 + (longlong)FVar8));
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar11 = 0;
        uVar9 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar6 = 0;
          if ((int)uVar11 < (int)uVar9) {
            uVar6 = ~uVar11 >> 0x1f;
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
          FVar8 = param_2->AllocatorInstance;
          if (((ulonglong)FVar8 & 1) != 0) {
            FVar8 = (ForAnyElementType)
                    ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
          }
          operator<<(param_1,(TLegacySkinWeightInfo<1,unsigned_char> *)
                             ((longlong)(int)uVar11 * 0x10 + (longlong)FVar8));
          uVar9 = param_2->ArrayNum;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar9);
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

// operator<<<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> @ 148431c50

FArchive * __cdecl
operator<<<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar10 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                (0x218,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            FVar8 = param_2->AllocatorInstance;
            if (((ulonglong)FVar8 & 1) != 0) {
              FVar8 = (ForAnyElementType)
                      ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18)
                      );
            }
            operator<<(param_1,(TLegacySkinWeightInfo<1,unsigned_short> *)
                               ((longlong)FVar8 + (longlong)iVar5 * 0x18));
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar11 = 0;
        uVar9 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar6 = 0;
          if ((int)uVar11 < (int)uVar9) {
            uVar6 = ~uVar11 >> 0x1f;
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
          FVar8 = param_2->AllocatorInstance;
          if (((ulonglong)FVar8 & 1) != 0) {
            FVar8 = (ForAnyElementType)
                    ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
          }
          operator<<(param_1,(TLegacySkinWeightInfo<1,unsigned_short> *)
                             ((longlong)FVar8 + (longlong)(int)uVar11 * 0x18));
          uVar9 = param_2->ArrayNum;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar9);
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

// operator<<<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> @ 148431c60

FArchive * __cdecl
operator<<<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar10 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                (0x108,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            FVar8 = param_2->AllocatorInstance;
            if (((ulonglong)FVar8 & 1) != 0) {
              FVar8 = (ForAnyElementType)
                      ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18)
                      );
            }
            operator<<(param_1,(TLegacySkinWeightInfo<0,unsigned_char> *)
                               ((longlong)FVar8 + (longlong)iVar5 * 8));
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar11 = 0;
        uVar9 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar6 = 0;
          if ((int)uVar11 < (int)uVar9) {
            uVar6 = ~uVar11 >> 0x1f;
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
          FVar8 = param_2->AllocatorInstance;
          if (((ulonglong)FVar8 & 1) != 0) {
            FVar8 = (ForAnyElementType)
                    ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
          }
          operator<<(param_1,(TLegacySkinWeightInfo<0,unsigned_char> *)
                             ((longlong)FVar8 + (longlong)(int)uVar11 * 8));
          uVar9 = param_2->ArrayNum;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar9);
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

// operator<<<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> @ 148431c70

FArchive * __cdecl
operator<<<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar10 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                (0x20c,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            FVar8 = param_2->AllocatorInstance;
            if (((ulonglong)FVar8 & 1) != 0) {
              FVar8 = (ForAnyElementType)
                      ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18)
                      );
            }
            operator<<(param_1,(TLegacySkinWeightInfo<0,unsigned_short> *)
                               ((longlong)FVar8 + (longlong)iVar5 * 0xc));
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar11 = 0;
        uVar9 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar6 = 0;
          if ((int)uVar11 < (int)uVar9) {
            uVar6 = ~uVar11 >> 0x1f;
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
          FVar8 = param_2->AllocatorInstance;
          if (((ulonglong)FVar8 & 1) != 0) {
            FVar8 = (ForAnyElementType)
                    ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
          }
          operator<<(param_1,(TLegacySkinWeightInfo<0,unsigned_short> *)
                             ((longlong)FVar8 + (longlong)(int)uVar11 * 0xc));
          uVar9 = param_2->ArrayNum;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar9);
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

// operator<<<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> @ 148431c80

FArchive * __cdecl
operator<<<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  FPackedNormal *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
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
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
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
              FVar9 = param_2->AllocatorInstance;
              if (((ulonglong)FVar9 & 1) != 0) {
                FVar9 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar9 >> 0x18));
              }
              pFVar2 = (FPackedNormal *)((longlong)FVar9 + (longlong)(int)uVar11 * 8);
              operator<<(param_1,pFVar2);
              operator<<(param_1,pFVar2 + 1);
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar9 = param_2->AllocatorInstance;
              if (((ulonglong)FVar9 & 1) != 0) {
                FVar9 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar9 >> 0x18));
              }
              pFVar2 = (FPackedNormal *)((longlong)FVar9 + (longlong)iVar6 * 8);
              DefaultConstructItems<TStaticMeshVertexTangentDatum<FPackedNormal>,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              operator<<(param_1,pFVar2 + 1);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> @ 148431c90

FArchive * __cdecl
operator<<<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  FPackedRGBA16N *pFVar10;
  uint uVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar11 < (int)uVar9) {
                uVar6 = ~uVar11 >> 0x1f;
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
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pFVar10 = (FPackedRGBA16N *)((longlong)(int)uVar11 * 0x10 + (longlong)FVar8);
              operator<<(param_1,pFVar10);
              operator<<(param_1,pFVar10 + 1);
              uVar9 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar9);
          }
        }
        else {
          TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x210,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pFVar10 = (FPackedRGBA16N *)((longlong)iVar5 * 0x10 + (longlong)FVar8);
              DefaultConstructItems<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              operator<<(param_1,pFVar10 + 1);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// TVector2<float>_>,TMemoryImageAllocator<0>_> @ 148431ca0

FArchive * __cdecl
operator<<<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar10 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>::
          Empty(param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                (0x408,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            FVar8 = param_2->AllocatorInstance;
            if (((ulonglong)FVar8 & 1) != 0) {
              FVar8 = (ForAnyElementType)
                      ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18)
                      );
            }
            UE::Math::operator<<(param_1,(TVector2<float> *)((longlong)FVar8 + (longlong)iVar5 * 8))
            ;
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar11 = 0;
        uVar9 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar6 = 0;
          if ((int)uVar11 < (int)uVar9) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar3)();
            return pFVar7;
          }
          FVar8 = param_2->AllocatorInstance;
          if (((ulonglong)FVar8 & 1) != 0) {
            FVar8 = (ForAnyElementType)
                    ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
          }
          UE::Math::operator<<
                    (param_1,(TVector2<float> *)((longlong)FVar8 + (longlong)(int)uVar11 * 8));
          uVar9 = param_2->ArrayNum;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar9);
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

// operator<<<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> @ 148431cb0

FArchive * __cdecl
operator<<<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  FVector2DHalf *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
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
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
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
              FVar9 = param_2->AllocatorInstance;
              if (((ulonglong)FVar9 & 1) != 0) {
                FVar9 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar9 >> 0x18));
              }
              operator<<(param_1,(FVector2DHalf *)((longlong)FVar9 + (longlong)(int)uVar11 * 4));
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x204,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar9 = param_2->AllocatorInstance;
              if (((ulonglong)FVar9 & 1) != 0) {
                FVar9 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar9 >> 0x18));
              }
              pFVar2 = (FVector2DHalf *)((longlong)FVar9 + (longlong)iVar6 * 4);
              DefaultConstructItems<TStaticMeshVertexUVsDatum<FVector2DHalf>,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> @ 148431cc0

FArchive * __cdecl
operator<<<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
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
            operator<<(param_1,(FClothBufferIndexMapping *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
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
        TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FClothBufferIndexMapping *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc));
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

// operator<<<FMeshToMeshVertData,TMemoryImageAllocator<0>_> @ 148431cd0

FArchive * __cdecl
operator<<<FMeshToMeshVertData,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  FMeshToMeshVertData *pFVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar6 = ~uVar10 >> 0x1f;
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
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              operator<<(param_1,(FMeshToMeshVertData *)
                                 ((longlong)(int)uVar10 * 0x40 + (longlong)FVar8));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x1040,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar8 = param_2->AllocatorInstance;
              if (((ulonglong)FVar8 & 1) != 0) {
                FVar8 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar8 >> 0x18));
              }
              pFVar11 = (FMeshToMeshVertData *)((longlong)iVar5 * 0x40 + (longlong)FVar8);
              DefaultConstructItems<FMeshToMeshVertData,int>(pFVar11,1);
              operator<<(param_1,pFVar11);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// AddLambda<`FRayTracingGeometryManager::FRayTracingGeometryManager'::__l5::<lambda_1>_> @ 148431d90

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FRayTracingGeometryManager::FRayTracingGeometryManager_::__l5::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRayTracingGeometryManager::FRayTracingGeometryManager'::`5'::<lambda_1>_>
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

// AddPass<`FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>'::__l2::<lambda_1>_> @ 148431fc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFMemcpy_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFMemcpy_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FMemcpy_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugCardAtlasCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<`FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>'::__l2::<lambda_1>_> @ 148432150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSpecularProfileConvolveCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSpecularProfileConvolveCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSpecularProfileConvolveCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugClusterAABBCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<`FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>'::__l2::<lambda_1>_> @ 1484322e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSpecularProfileCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSpecularProfileCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSpecularProfileCopyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugCardGuidesCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<FSSProfilePreIntegratedPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FSSProfilePreIntegratedPS>'::__l2::<lambda_1>_> @ 1484326d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FSSProfilePreIntegratedPS::FParameters,_FPixelShaderUtils::AddFullscreenPass<FSSProfilePreIntegratedPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  pFVar8 = FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_2,pFVar8,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar9,param_3);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_2;
  if ((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (pFVar8->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar8;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar6,Async);
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FSSProfilePreIntegratedPS__V<lambda_1>__1____AddFullscreenPass_VFSSProfilePreIntegratedPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFSSProfilePreIntegratedPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar10[1]._padding_ = *(longlong *)param_4;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_4 + 8);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  pwVar9 = *(wchar_t **)(param_4 + 0x18);
  pFVar10[1].FullPathIfDebug.Data.ArrayNum = (int)uVar3;
  pFVar10[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar10[1].Name.EventFormat = pwVar9;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_4 + 0x20);
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  pFVar10[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar3;
  pFVar10[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar10[1].ParameterStruct.Contents = *(uchar **)(param_4 + 0x30);
  pFVar10[1].ParameterStruct.Layout.Reference = *(FRHIUniformBufferLayout **)(param_4 + 0x38);
  pFVar10[1].ParameterStruct.Metadata = *(FShaderParametersMetadata **)(param_4 + 0x40);
  uVar2 = *(undefined4 *)(param_4 + 0x48);
  pFVar10[1].Flags = (short)uVar2;
  pFVar10[1].TaskMode = (char)((uint)uVar2 >> 0x10);
  pFVar10[1].Pipeline = (char)((uint)uVar2 >> 0x18);
  *(FParameters **)&pFVar10[1].Workload = param_2;
  ClobberPassOutputs(this,pFVar10);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// AddPassInternal<FSSProfilePreIntegratedPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FSSProfilePreIntegratedPS>'::__l2::<lambda_1>_> @ 148432d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FSSProfilePreIntegratedPS::FParameters,_FPixelShaderUtils::AddFullscreenPass<FSSProfilePreIntegratedPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar4)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FSSProfilePreIntegratedPS__V<lambda_1>__1____AddFullscreenPass_VFSSProfilePreIntegratedPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFSSProfilePreIntegratedPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(param_5 + 8)
  ;
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar3;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_5 + 0x20);
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
  pFVar9[1].ParameterStruct.Contents = *(uchar **)(param_5 + 0x30);
  pFVar9[1].ParameterStruct.Layout.Reference = *(FRHIUniformBufferLayout **)(param_5 + 0x38);
  pFVar9[1].ParameterStruct.Metadata = *(FShaderParametersMetadata **)(param_5 + 0x40);
  uVar2 = *(undefined4 *)(param_5 + 0x48);
  pFVar9[1].Flags = (short)uVar2;
  pFVar9[1].TaskMode = (char)((uint)uVar2 >> 0x10);
  pFVar9[1].Pipeline = (char)((uint)uVar2 >> 0x18);
  *(FParameters **)&pFVar9[1].Workload = param_3;
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>'::__l2::<lambda_1>_> @ 148432f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFMemcpy_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFMemcpy_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FMemcpy_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugCardAtlasCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>'::__l2::<lambda_1>_> @ 1484330c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSpecularProfileConvolveCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSpecularProfileConvolveCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSpecularProfileConvolveCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugClusterAABBCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>'::__l2::<lambda_1>_> @ 148433250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSpecularProfileCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSpecularProfileCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSpecularProfileCopyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugCardGuidesCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// BindForLegacyShaderParameters<Nanite::FMemcpy_CS::FParameters> @ 148433ee0

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
BindForLegacyShaderParameters<Nanite::FMemcpy_CS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = Nanite::FMemcpy_CS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FSSProfilePreIntegratedPS::FParameters> @ 148433f40

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
BindForLegacyShaderParameters<FSSProfilePreIntegratedPS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FSpecularProfileConvolveCS::FParameters> @ 148433fa0

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
BindForLegacyShaderParameters<FSpecularProfileConvolveCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FSpecularProfileConvolveCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FSpecularProfileCopyCS::FParameters> @ 148434000

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
BindForLegacyShaderParameters<FSpecularProfileCopyCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FSpecularProfileCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<Nanite::FMemcpy_CS> @ 148434060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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
ClearUnusedGraphResources<Nanite::FMemcpy_CS>
          (TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FSSProfilePreIntegratedPS> @ 1484340e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FSSProfilePreIntegratedPS>
          (TShaderRefBase<FSSProfilePreIntegratedPS,FShaderMapPointerTable> *param_1,
          FParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata();
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,pFVar1,param_2);
  local_18.ShaderContent = (FShader *)param_3->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_3->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,pFVar1,param_2,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FSSProfilePreIntegratedPS> @ 148434160

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FSSProfilePreIntegratedPS>
          (TShaderRefBase<FSSProfilePreIntegratedPS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FSpecularProfileConvolveCS> @ 1484341e0

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
ClearUnusedGraphResources<FSpecularProfileConvolveCS>
          (TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FSpecularProfileCopyCS> @ 148434260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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
ClearUnusedGraphResources<FSpecularProfileCopyCS>
          (TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable> *param_1,
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

// ConvertValue<signed_char> @ 1484342e0

schar __cdecl ConvertValue<signed_char>(float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_bf800000) {
    param_1 = __real_bf800000;
  }
  return (schar)(int)(param_1 * __real_42fe0000);
}

// ConvertValue<unsigned_char> @ 148434310

uchar __cdecl ConvertValue<unsigned_char>(float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return (uchar)(int)(param_1 * __real_437f0000);
}

// ConvertValue<short> @ 148434340

short __cdecl ConvertValue<short>(float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_bf800000) {
    param_1 = __real_bf800000;
  }
  return (short)(int)(param_1 * __real_46fffe00);
}

// ConvertValue<unsigned_short> @ 148434370

ushort __cdecl ConvertValue<unsigned_short>(float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return (ushort)(int)(param_1 * __real_477fff00);
}

// ConvertValue<FFloat16> @ 1484343a0

FFloat16 __cdecl ConvertValue<FFloat16>(float param_1)

{
  ushort *in_RCX;
  float in_XMM1_Da;
  
  *in_RCX = 0;
  FGenericPlatformMath::StoreHalf(in_RCX,in_XMM1_Da);
  return (FFloat16)(ushort)in_RCX;
}

// DefaultConstructItems<TGPUSkinVertexFloat16Uvs<1>,int> @ 1484344d0

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat16Uvs<1>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TGPUSkinVertexFloat16Uvs<2>,int> @ 148434500

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat16Uvs<2>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x18;
    do {
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TGPUSkinVertexFloat16Uvs<3>,int> @ 148434530

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat16Uvs<3>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x18;
    do {
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TGPUSkinVertexFloat16Uvs<4>,int> @ 148434560

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat16Uvs<4>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x18;
    do {
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TGPUSkinVertexFloat32Uvs<1>,int> @ 148434590

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat32Uvs<1>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x1c);
  }
  return;
}

// DefaultConstructItems<TGPUSkinVertexFloat32Uvs<2>,int> @ 1484345c0

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat32Uvs<2>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x24);
  }
  return;
}

// DefaultConstructItems<TGPUSkinVertexFloat32Uvs<3>,int> @ 1484345f0

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat32Uvs<3>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x2c);
  }
  return;
}

// DefaultConstructItems<TGPUSkinVertexFloat32Uvs<4>,int> @ 148434620

void __cdecl DefaultConstructItems<TGPUSkinVertexFloat32Uvs<4>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x34);
  }
  return;
}

// DefaultConstructItems<TLegacySkinWeightInfo<1,unsigned_char>,int> @ 148434650

void __cdecl
DefaultConstructItems<TLegacySkinWeightInfo<1,unsigned_char>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TLegacySkinWeightInfo<1,unsigned_short>,int> @ 148434660

void __cdecl
DefaultConstructItems<TLegacySkinWeightInfo<1,unsigned_short>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TLegacySkinWeightInfo<0,unsigned_char>,int> @ 148434670

void __cdecl
DefaultConstructItems<TLegacySkinWeightInfo<0,unsigned_char>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TLegacySkinWeightInfo<0,unsigned_short>,int> @ 148434680

void __cdecl
DefaultConstructItems<TLegacySkinWeightInfo<0,unsigned_short>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TStaticMeshVertexTangentDatum<FPackedNormal>,int> @ 148434690

void __cdecl
DefaultConstructItems<TStaticMeshVertexTangentDatum<FPackedNormal>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,int> @ 1484346c0

void __cdecl
DefaultConstructItems<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,int> @ 1484346f0

void __cdecl
DefaultConstructItems<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TStaticMeshVertexUVsDatum<FVector2DHalf>,int> @ 148434700

void __cdecl
DefaultConstructItems<TStaticMeshVertexUVsDatum<FVector2DHalf>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DefaultConstructItems<FClothBufferIndexMapping,int> @ 148434730

void __cdecl DefaultConstructItems<FClothBufferIndexMapping,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<`FSpecularProfileTextureManager::GetAtlasTexture'::__l36::FLinearColor16,int> @ 148434740

void __cdecl
DefaultConstructItems<_FSpecularProfileTextureManager::GetAtlasTexture_::__l36::FLinearColor16,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMeshToMeshVertData,int> @ 148434770

void __cdecl DefaultConstructItems<FMeshToMeshVertData,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 1) = 0x3f800000;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0x3f800000;
      *(undefined8 *)(puVar1 + 7) = 0;
      puVar1[9] = 0x3f800000;
      puVar1[0xc] = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Nanite::FStreamingManager::FPendingPage,int> @ 1484347c0

void __cdecl
DefaultConstructItems<Nanite::FStreamingManager::FPendingPage,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      FIoBuffer::FIoBuffer((FIoBuffer *)(puVar1 + -2));
      puVar1[-1] = 0;
      *puVar1 = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNeuralProfileModelTextureManager::FProfileEntry,int> @ 148434830

void __cdecl
DefaultConstructItems<FNeuralProfileModelTextureManager::FProfileEntry,int>
          (void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 2);
    do {
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[0x32] = 0;
      *(undefined4 *)(puVar1 + 0x2e) = 1;
      *(undefined8 *)(puVar1 + 0x36) = 0;
      puVar1[0x3e] = 0;
      *(undefined2 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x1e) = 0;
      *(undefined8 *)(puVar1 + 0x26) = 0;
      *(undefined8 *)(puVar1 + 0x46) = 0;
      puVar1 = puVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSpecularProfileTextureManager::FProfileEntry,int> @ 148434890

void __cdecl
DefaultConstructItems<FSpecularProfileTextureManager::FProfileEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x428);
    do {
      FSpecularProfileStruct::FSpecularProfileStruct((FSpecularProfileStruct *)(puVar1 + -0x85));
      puVar1[-1] = 0;
      *puVar1 = 0;
      ((TIntPoint<int>_u_0 *)(puVar1 + 1))->_s_0 =
           (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      puVar1[2] = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x88;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Nanite::FStreamingManager::FRegisteredPage,int> @ 148434900

void __cdecl
DefaultConstructItems<Nanite::FStreamingManager::FRegisteredPage,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0xffffffffffffffff;
      *puVar1 = 0xffffffff;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Nanite::FStreamingManager::FRegisteredVirtualPage,int> @ 148434940

void __cdecl
DefaultConstructItems<Nanite::FStreamingManager::FRegisteredVirtualPage,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<Nanite::FStreamingManager::FResidentPage,int> @ 148434970

void __cdecl
DefaultConstructItems<Nanite::FStreamingManager::FResidentPage,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -8) = 0xffffffffffffffff;
      *puVar1 = 0xff;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Nanite::FStreamingManager::FResidentVirtualPage,int> @ 1484349a0

void __cdecl
DefaultConstructItems<Nanite::FStreamingManager::FResidentVirtualPage,int>
          (void *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    for (uVar1 = (ulonglong)(uint)param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)param_1 = 0xffff;
      param_1 = (undefined2 *)((longlong)param_1 + 2);
    }
  }
  return;
}

// DefaultConstructItems<Nanite::FStreamingManager::FRootPageInfo,int> @ 1484349d0

void __cdecl
DefaultConstructItems<Nanite::FStreamingManager::FRootPageInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(uint *)(puVar1 + 3) = *(uint *)(puVar1 + 3) & 0xfffffffe;
      puVar1[-2] = 0;
      *(undefined1 *)(puVar1 + -1) = 0xff;
      *puVar1 = 0;
      puVar1[1] = 0xffffffffffffffff;
      puVar1[2] = 0xffffffffffffffff;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSkinWeightInfo,int> @ 148434a10

void __cdecl DefaultConstructItems<FSkinWeightInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FRayTracingGeometryManager::FStreamingRequest,int> @ 148434a20

void __cdecl
DefaultConstructItems<FRayTracingGeometryManager::FStreamingRequest,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      FIoBuffer::FIoBuffer((FIoBuffer *)(puVar1 + -4));
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`Nanite::FStreamingManager::InstallReadyPages'::__l2::FUploadTask,int> @ 148434a80

void __cdecl
DefaultConstructItems<_Nanite::FStreamingManager::InstallReadyPages_::__l2::FUploadTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`anonymous_namespace'::FVertexToEdgeBuilder::FVertexToEdgeItem,int> @ 148434ab0

void __cdecl
DefaultConstructItems<_anonymous_namespace_::FVertexToEdgeBuilder::FVertexToEdgeItem,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0xffffffffffffffff;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 148434ae0

void __cdecl
DefaultConstructItems<TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x10;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Nanite::FStreamingManager::FPendingPage,int> @ 148434d00

void __cdecl
DestructItems<Nanite::FStreamingManager::FPendingPage,int>(FPendingPage *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  IHandle *pIVar3;
  BufCore *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar3 = (param_1->Request).Handle.Reference;
    if (pIVar3 != (IHandle *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    this = (param_1->RequestBuffer).CorePtr.Reference;
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
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSpecularProfileTextureManager::FProfileEntry,int> @ 148434d90

void __cdecl
DestructItems<FSpecularProfileTextureManager::FProfileEntry,int>(FProfileEntry *param_1,int param_2)

{
  FRuntimeCurveLinearColor *this;
  
  if (param_2 != 0) {
    this = &(param_1->Settings).ViewColor;
    do {
      FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(this + 1);
      FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(this);
      this = (FRuntimeCurveLinearColor *)&this[2].ColorCurves[0]._padding_;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Nanite::FReadbackManager::FReadbackBuffer,int> @ 148434de0

void __cdecl
DestructItems<Nanite::FReadbackManager::FReadbackBuffer,int>(FReadbackBuffer *param_1,int param_2)

{
  FRHIGPUBufferReadback *pFVar1;
  FRHIStagingBuffer *this;
  longlong lVar2;
  FRHIGPUBufferReadback *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Buffer).Ptr;
    if (pFVar1 != (FRHIGPUBufferReadback *)0x0) {
      pFVar3 = pFVar1 + 1;
      lVar2 = 8;
      do {
        this = pFVar3[-1].DestinationStagingBuffers[7].Reference;
        pFVar3 = (FRHIGPUBufferReadback *)(pFVar3[-1].DestinationStagingBuffers + 7);
        lVar2 = lVar2 + -1;
        if (this != (FRHIStagingBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)this);
        }
      } while (lVar2 != 0);
      pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
      }
      operator_delete(pFVar1,0x58);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRayTracingGeometryManager::FStreamingRequest,int> @ 148434ea0

void __cdecl
DestructItems<FRayTracingGeometryManager::FStreamingRequest,int>
          (FStreamingRequest *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  BufCore *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Request != (FBulkDataBatchRequest)0x0) {
      (**(code **)(*(longlong *)param_1->Request + 0x10))();
    }
    this = (param_1->RequestBuffer).CorePtr.Reference;
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
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 148434f30

void __cdecl
DestructItems<TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_1,
          int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FUniqueBuffer,int> @ 148434f70

void __cdecl DestructItems<FUniqueBuffer,int>(FUniqueBuffer *param_1,int param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = (param_1->Owner).Owner;
    if (pFVar3 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
        pFVar3->Data = (void *)0x0;
        pFVar3->Size = 0;
        LOCK();
        paVar1 = &pFVar3->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FTexture2DResource::~FTexture2DResource'::__l2::TSTR_DeleteResourceMem66>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148436a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FTexture2DResource::~FTexture2DResource_::__l2::TSTR_DeleteResourceMem66>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FTexture2DResource::~FTexture2DResource'::__l2::TSTR_DeleteResourceMem66>
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
      if (bVar8) goto LAB_148436b51;
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
    goto LAB_148436d45;
  }
LAB_148436b51:
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
LAB_148436c2f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148436c2f;
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
LAB_148436d45:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`<lambda_26>::operator()'::__l2::TSTR_RayTracingToggledCmd37>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148436d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_<lambda_26>::operator()_::__l2::TSTR_RayTracingToggledCmd37>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`<lambda_26>::operator()'::__l2::TSTR_RayTracingToggledCmd37>::Get();
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
      if (bVar8) goto LAB_148436ed1;
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
    goto LAB_1484370c5;
  }
LAB_148436ed1:
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
LAB_148436faf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148436faf;
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
LAB_1484370c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`<lambda_27>::operator()'::__l2::TSTR_RayTracingToggledCmd54>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148437100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_<lambda_27>::operator()_::__l2::TSTR_RayTracingToggledCmd54>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`<lambda_27>::operator()'::__l2::TSTR_RayTracingToggledCmd54>::Get();
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
      if (bVar8) goto LAB_148437251;
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
    goto LAB_148437445;
  }
LAB_148437251:
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
LAB_14843732f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14843732f;
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
LAB_148437445:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`<lambda_28>::operator()'::__l2::TSTR_RefreshAlwaysResidentRayTracingGeometriesCmd100>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148437480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_<lambda_28>::operator()_::__l2::TSTR_RefreshAlwaysResidentRayTracingGeometriesCmd100>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`<lambda_28>::operator()'::__l2::TSTR_RefreshAlwaysResidentRayTracingGeometriesCmd100>
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
      if (bVar8) goto LAB_1484375d1;
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
    goto LAB_1484377c5;
  }
LAB_1484375d1:
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
LAB_1484376af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1484376af;
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
LAB_1484377c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNeuralProfileModelTextureManager::RemoveProfile'::__l5::TSTR_RemoveNeuralProfile177>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148437800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNeuralProfileModelTextureManager::RemoveProfile_::__l5::TSTR_RemoveNeuralProfile177>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNeuralProfileModelTextureManager::RemoveProfile'::__l5::TSTR_RemoveNeuralProfile177>
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
      if (bVar8) goto LAB_148437951;
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
    goto LAB_148437b45;
  }
LAB_148437951:
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
LAB_148437a2f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148437a2f;
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
LAB_148437b45:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNeuralProfile::BeginDestroy'::__l2::TSTR_RemoveNeuralProfile241>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148437b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNeuralProfile::BeginDestroy_::__l2::TSTR_RemoveNeuralProfile241>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNeuralProfile::BeginDestroy'::__l2::TSTR_RemoveNeuralProfile241>::
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
      if (bVar8) goto LAB_148437cd1;
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
    goto LAB_148437ec5;
  }
LAB_148437cd1:
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
LAB_148437daf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148437daf;
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
LAB_148437ec5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`USpecularProfile::BeginDestroy'::__l2::TSTR_RemoveSpecularProfile535>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148437f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_USpecularProfile::BeginDestroy_::__l2::TSTR_RemoveSpecularProfile535>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`USpecularProfile::BeginDestroy'::__l2::TSTR_RemoveSpecularProfile535>
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
      if (bVar8) goto LAB_148438051;
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
    goto LAB_148438245;
  }
LAB_148438051:
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
LAB_14843812f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14843812f;
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
LAB_148438245:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`USubsurfaceProfile::BeginDestroy'::__l2::TSTR_RemoveSubsurfaceProfile818>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148438280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_USubsurfaceProfile::BeginDestroy_::__l2::TSTR_RemoveSubsurfaceProfile818>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`USubsurfaceProfile::BeginDestroy'::__l2::TSTR_RemoveSubsurfaceProfile818>
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
      if (bVar8) goto LAB_1484383d1;
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
    goto LAB_1484385c5;
  }
LAB_1484383d1:
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
LAB_1484384af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1484384af;
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
LAB_1484385c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNeuralProfile::PostEditChangeProperty'::__l5::TSTR_UpdateDimensionParams265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148438600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNeuralProfile::PostEditChangeProperty_::__l5::TSTR_UpdateDimensionParams265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNeuralProfile::PostEditChangeProperty'::__l5::TSTR_UpdateDimensionParams265>
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
      if (bVar8) goto LAB_148438751;
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
    goto LAB_148438945;
  }
LAB_148438751:
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
LAB_14843882f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14843882f;
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
LAB_148438945:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNeuralProfile::PostEditChangeProperty'::__l2::TSTR_UpdateNeuralProfile256>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148438980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNeuralProfile::PostEditChangeProperty_::__l2::TSTR_UpdateNeuralProfile256>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNeuralProfile::PostEditChangeProperty'::__l2::TSTR_UpdateNeuralProfile256>
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
      if (bVar8) goto LAB_148438ad1;
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
    goto LAB_148438cc5;
  }
LAB_148438ad1:
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
LAB_148438baf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148438baf;
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
LAB_148438cc5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`USpecularProfile::PostEditChangeProperty'::__l2::TSTR_UpdateSpecularProfile556>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148438d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_USpecularProfile::PostEditChangeProperty_::__l2::TSTR_UpdateSpecularProfile556>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`USpecularProfile::PostEditChangeProperty'::__l2::TSTR_UpdateSpecularProfile556>
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
      if (bVar8) goto LAB_148438e51;
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
    goto LAB_148439045;
  }
LAB_148438e51:
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
LAB_148438f2f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148438f2f;
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
LAB_148439045:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`USubsurfaceProfile::PostEditChangeProperty'::__l2::TSTR_UpdateSubsurfaceProfile832>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148439080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_USubsurfaceProfile::PostEditChangeProperty_::__l2::TSTR_UpdateSubsurfaceProfile832>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`USubsurfaceProfile::PostEditChangeProperty'::__l2::TSTR_UpdateSubsurfaceProfile832>
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
      if (bVar8) goto LAB_1484391d1;
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
    goto LAB_1484393c5;
  }
LAB_1484391d1:
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
LAB_1484392af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1484392af;
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
LAB_1484393c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetMaterialMeshName<FInstancedSkinnedMeshSceneProxyDesc> @ 1484397f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
Nanite::Private::GetMaterialMeshName<FInstancedSkinnedMeshSceneProxyDesc>
          (FString *__return_storage_ptr__,FInstancedSkinnedMeshSceneProxyDesc *param_1)

{
  USkinnedAsset *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset((FSkinnedMeshSceneProxyDesc *)param_1);
  local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
  local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialMeshName<FSkinnedMeshSceneProxyDesc> @ 148439830

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
Nanite::Private::GetMaterialMeshName<FSkinnedMeshSceneProxyDesc>
          (FString *__return_storage_ptr__,FSkinnedMeshSceneProxyDesc *param_1)

{
  USkinnedAsset *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
  local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialMeshName<USkinnedMeshComponent> @ 148439870

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
Nanite::Private::GetMaterialMeshName<USkinnedMeshComponent>
          (FString *__return_storage_ptr__,USkinnedMeshComponent *param_1)

{
  USkinnedAsset *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
  local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
  local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialSlotInfos<FInstancedSkinnedMeshSceneProxyDesc> @ 1484398b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
* __cdecl Nanite::Private::GetMaterialSlotInfos<FInstancedSkinnedMeshSceneProxyDesc>
                    (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,FInstancedSkinnedMeshSceneProxyDesc *param_1)

{
  GetMaterialSlotInfos<FSkinnedMeshSceneProxyDesc>
            (__return_storage_ptr__,(FSkinnedMeshSceneProxyDesc *)param_1);
  return __return_storage_ptr__;
}

// GetMaterialSlotInfos<FSkinnedMeshSceneProxyDesc> @ 1484398d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
* __cdecl Nanite::Private::GetMaterialSlotInfos<FSkinnedMeshSceneProxyDesc>
                    (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,FSkinnedMeshSceneProxyDesc *param_1)

{
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  USkinnedAsset *pUVar6;
  longlong *plVar7;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x20;
  pUVar6 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  if (pUVar6 != (USkinnedAsset *)0x0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x3c0))(pUVar6);
    uVar13 = 0;
    iVar5 = (int)plVar7[1];
    if (0 < iVar5) {
      lVar12 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar13 < iVar5) {
          uVar4 = ~uVar13 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_70 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)(longlong)iVar5;
          local_78 = (undefined8 *)(longlong)(int)uVar13;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar2)();
            return pTVar8;
          }
        }
        FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        puVar11 = (undefined8 *)(*plVar7 + lVar12);
        local_48 = *puVar11;
        local_38 = puVar11[2];
        uStack_30 = puVar11[3];
        uStack_40 = puVar11[1];
        local_28 = *(undefined4 *)(puVar11 + 4);
        FVar9 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
        if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_48) {
          FVar9 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
          if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
            FVar9 = FVar1;
          }
          if (&local_48 <
              (undefined8 *)((longlong)FVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
            local_60 = (longlong)__return_storage_ptr__->ArrayNum;
            local_58 = 0x28;
            local_70 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)
                       __return_storage_ptr__;
            if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
              local_70 = FVar1;
            }
            local_78 = &local_48;
            local_68 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
          }
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::Private::FAuditMaterialSlotInfo>_>
                            (0x828,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
        if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
          FVar9 = FVar1;
        }
        lVar10 = (longlong)iVar5;
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x30;
        puVar11 = (undefined8 *)((longlong)FVar9 + lVar10 * 0x28);
        *puVar11 = local_48;
        puVar11[1] = uStack_40;
        *(undefined8 *)((uchar *)((longlong)FVar9 + 0x10) + lVar10 * 0x28) = local_38;
        *(undefined8 *)((uchar *)((longlong)FVar9 + 0x10) + lVar10 * 0x28 + 8) = uStack_30;
        *(ulonglong *)((uchar *)((longlong)FVar9 + 0x20) + lVar10 * 0x28) =
             CONCAT44(uStack_24,local_28);
        iVar5 = (int)plVar7[1];
      } while ((int)uVar13 < iVar5);
    }
  }
  return __return_storage_ptr__;
}

// GetMaterialSlotInfos<USkinnedMeshComponent> @ 148439b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
* __cdecl Nanite::Private::GetMaterialSlotInfos<USkinnedMeshComponent>
                    (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,USkinnedMeshComponent *param_1)

{
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  USkinnedAsset *pUVar6;
  longlong *plVar7;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x20;
  pUVar6 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
  if (pUVar6 != (USkinnedAsset *)0x0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x3c0))(pUVar6);
    uVar13 = 0;
    iVar5 = (int)plVar7[1];
    if (0 < iVar5) {
      lVar12 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar13 < iVar5) {
          uVar4 = ~uVar13 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_70 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)(longlong)iVar5;
          local_78 = (undefined8 *)(longlong)(int)uVar13;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar2)();
            return pTVar8;
          }
        }
        FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        puVar11 = (undefined8 *)(*plVar7 + lVar12);
        local_48 = *puVar11;
        local_38 = puVar11[2];
        uStack_30 = puVar11[3];
        uStack_40 = puVar11[1];
        local_28 = *(undefined4 *)(puVar11 + 4);
        FVar9 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
        if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
          FVar9 = FVar1;
        }
        if ((ulonglong)FVar9 <= &local_48) {
          FVar9 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
          if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
            FVar9 = FVar1;
          }
          if (&local_48 <
              (undefined8 *)((longlong)FVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
            local_60 = (longlong)__return_storage_ptr__->ArrayNum;
            local_58 = 0x28;
            local_70 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)
                       __return_storage_ptr__;
            if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
              local_70 = FVar1;
            }
            local_78 = &local_48;
            local_68 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
          }
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::Private::FAuditMaterialSlotInfo>_>
                            (0x828,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
        if (FVar1 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
          FVar9 = FVar1;
        }
        lVar10 = (longlong)iVar5;
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x30;
        puVar11 = (undefined8 *)((longlong)FVar9 + lVar10 * 0x28);
        *puVar11 = local_48;
        puVar11[1] = uStack_40;
        *(undefined8 *)((uchar *)((longlong)FVar9 + 0x10) + lVar10 * 0x28) = local_38;
        *(undefined8 *)((uchar *)((longlong)FVar9 + 0x10) + lVar10 * 0x28 + 8) = uStack_30;
        *(ulonglong *)((uchar *)((longlong)FVar9 + 0x20) + lVar10 * 0x28) =
             CONCAT44(uStack_24,local_28);
        iVar5 = (int)plVar7[1];
      } while ((int)uVar13 < iVar5);
    }
  }
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,`FRayTracingGeometryManager::UpdateReferenceBasedResidency'::__l50::<lambda_1>_> @ 148439ea0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l50::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  TSparseArray<FRayTracingGeometryManager::FRegisteredGeometry,FDefaultSparseArrayAllocator> *pTVar1
  ;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  FRayTracingGeometryManager *local_res20;
  
  local_res20 = param_4.__this;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l50::<lambda_1>_>_>
            (param_1,param_2,param_3,(<lambda_1> *)&local_res20);
  iVar13 = param_2 + -1;
  lVar12 = (longlong)iVar13;
  if (0 < iVar13) {
    do {
      iVar10 = *param_1;
      *param_1 = param_1[lVar12];
      param_1[lVar12] = iVar10;
      if (1 < iVar13) {
        pTVar1 = &local_res20->RegisteredGeometries;
        iVar10 = 0;
        do {
          iVar2 = iVar10 * 2;
          iVar8 = iVar2 + 1;
          if (iVar2 + 2 < iVar13) {
            lVar9 = (longlong)param_1[(longlong)iVar2 + 2] * 0x30 + *(longlong *)pTVar1;
            lVar11 = (longlong)param_1[iVar8] * 0x30 + *(longlong *)pTVar1;
            uVar4 = *(ulonglong *)(lVar9 + 8);
            uVar5 = *(ulonglong *)(lVar11 + 8);
            bVar7 = uVar4 < uVar5;
            if (uVar4 == uVar5) {
              bVar7 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar9 + 0x10);
            }
            if (bVar7) {
              iVar8 = iVar2;
            }
            iVar8 = iVar8 + 1;
          }
          lVar9 = *(longlong *)pTVar1;
          iVar2 = param_1[iVar10];
          iVar3 = param_1[iVar8];
          uVar4 = *(ulonglong *)(lVar9 + 8 + (longlong)iVar3 * 0x30);
          uVar5 = *(ulonglong *)(lVar9 + 8 + (longlong)iVar2 * 0x30);
          bVar7 = uVar5 < uVar4;
          if (uVar5 == uVar4) {
            bVar7 = *(uint *)(lVar9 + 0x10 + (longlong)iVar3 * 0x30) <
                    *(uint *)(lVar9 + 0x10 + (longlong)iVar2 * 0x30);
          }
          if (!bVar7) break;
          param_1[iVar10] = iVar3;
          param_1[iVar8] = iVar2;
          iVar10 = iVar8;
        } while (iVar8 * 2 + 1 < iVar13);
      }
      lVar12 = lVar12 + -1;
      iVar13 = iVar13 + -1;
    } while (0 < lVar12);
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,`FRayTracingGeometryManager::UpdateReferenceBasedResidency'::__l62::<lambda_2>_> @ 14843a070

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l62::<lambda_2>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar3 = (param_2 + -2) / 2;
  iVar8 = iVar3 * 2;
  do {
    if (iVar8 + 1 < param_2) {
      iVar7 = iVar3;
      iVar4 = iVar8;
      do {
        if (iVar4 + 2 < param_2) {
          lVar9 = *(longlong *)&(param_4.__this)->RegisteredGeometries;
          iVar5 = iVar4 + 1;
          if (*(uint *)(lVar9 + 0x10 + (longlong)param_1[(longlong)iVar4 + 2] * 0x30) <
              *(uint *)(lVar9 + 0x10 + (longlong)param_1[iVar4 + 1] * 0x30)) {
            iVar5 = iVar4;
          }
        }
        else {
          lVar9 = *(longlong *)&(param_4.__this)->RegisteredGeometries;
          iVar5 = iVar4;
        }
        iVar4 = param_1[iVar7];
        if (*(uint *)(lVar9 + 0x10 + (longlong)param_1[(longlong)iVar5 + 1] * 0x30) <=
            *(uint *)(lVar9 + 0x10 + (longlong)iVar4 * 0x30)) break;
        param_1[iVar7] = param_1[(longlong)iVar5 + 1];
        iVar7 = iVar5 + 1;
        param_1[(longlong)iVar5 + 1] = iVar4;
        iVar4 = iVar7 * 2;
      } while (iVar4 + 1 < param_2);
    }
    if (iVar3 == 0) {
      iVar8 = param_2 + -1;
      lVar9 = (longlong)iVar8;
      if (0 < iVar8) {
        do {
          iVar3 = *param_1;
          iVar7 = 0;
          *param_1 = param_1[lVar9];
          param_1[lVar9] = iVar3;
          if (1 < iVar8) {
            iVar3 = 0;
            do {
              if (iVar3 + 2 < iVar8) {
                lVar6 = *(longlong *)&(param_4.__this)->RegisteredGeometries;
                iVar4 = iVar3 + 1;
                if (*(uint *)(lVar6 + 0x10 + (longlong)param_1[(longlong)iVar3 + 2] * 0x30) <
                    *(uint *)(lVar6 + 0x10 + (longlong)param_1[iVar3 + 1] * 0x30)) {
                  iVar4 = iVar3;
                }
              }
              else {
                lVar6 = *(longlong *)&(param_4.__this)->RegisteredGeometries;
                iVar4 = iVar3;
              }
              iVar3 = param_1[iVar7];
              if (*(uint *)(lVar6 + 0x10 + (longlong)param_1[(longlong)iVar4 + 1] * 0x30) <=
                  *(uint *)(lVar6 + 0x10 + (longlong)iVar3 * 0x30)) break;
              param_1[iVar7] = param_1[(longlong)iVar4 + 1];
              iVar7 = iVar4 + 1;
              param_1[(longlong)iVar4 + 1] = iVar3;
              iVar3 = iVar7 * 2;
            } while (iVar3 + 1 < iVar8);
          }
          iVar8 = iVar8 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
      return;
    }
    iVar3 = iVar3 + -1;
    iVar8 = iVar8 + -2;
  } while( true );
}

// HeapSortInternal<FRayTracingGeometryManager::FBuildRequest,int,FIdentityFunctor,TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,`FRayTracingGeometryManager::ProcessBuildRequests'::__l33::<lambda_1>_>_> @ 14843a2f0

void __cdecl
AlgoImpl::
HeapSortInternal<FRayTracingGeometryManager::FBuildRequest,int,FIdentityFunctor,TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,_FRayTracingGeometryManager::ProcessBuildRequests_::__l33::<lambda_1>_>_>
          (FBuildRequest *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,_public:_virtual_void___cdecl_FRayTracingGeometryManager::ProcessBuildRequests(FRHIComputeCommandList_&,bool)_::_33_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FRayTracingGeometry *pFVar2;
  FBuildRequest *pFVar3;
  FBuildRequest *pFVar4;
  int iVar5;
  float fVar6;
  undefined3 uVar7;
  int iVar8;
  float fVar9;
  EAccelerationStructureBuildMode EVar10;
  bool bVar11;
  undefined3 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FBuildRequest *pFVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar15 = iVar14 * 2 + 1;
  iVar19 = iVar15;
  iVar20 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_14843a406:
      if (iVar20 == 0) {
        iVar15 = param_2 + -1;
        lVar17 = (longlong)iVar15;
        if (0 < iVar15) {
          pFVar16 = param_1 + lVar17;
          do {
            iVar19 = pFVar16->RequestIndex;
            fVar6 = pFVar16->BuildPriority;
            EVar10 = param_1->BuildMode;
            bVar11 = param_1->bReleaseBuffersAfterBuild;
            uVar12 = *(undefined3 *)&param_1->field_0x15;
            pFVar2 = param_1->Owner;
            iVar14 = param_1->RequestIndex;
            fVar9 = param_1->BuildPriority;
            param_1->Owner = pFVar16->Owner;
            param_1->RequestIndex = iVar19;
            param_1->BuildPriority = fVar6;
            bVar13 = pFVar16->bReleaseBuffersAfterBuild;
            uVar7 = *(undefined3 *)&pFVar16->field_0x15;
            param_1->BuildMode = pFVar16->BuildMode;
            param_1->bReleaseBuffersAfterBuild = bVar13;
            *(undefined3 *)&param_1->field_0x15 = uVar7;
            pFVar16->Owner = pFVar2;
            pFVar16->RequestIndex = iVar14;
            pFVar16->BuildPriority = fVar9;
            pFVar16->BuildMode = EVar10;
            pFVar16->bReleaseBuffersAfterBuild = bVar11;
            *(undefined3 *)&pFVar16->field_0x15 = uVar12;
            iVar19 = 0;
            if (1 < iVar15) {
              do {
                iVar20 = iVar19 * 2;
                iVar14 = iVar20 + 1;
                if (iVar20 + 2 < iVar15) {
                  if (param_1[iVar14].BuildPriority <= param_1[(longlong)iVar20 + 2].BuildPriority
                      && param_1[(longlong)iVar20 + 2].BuildPriority !=
                         param_1[iVar14].BuildPriority) {
                    iVar14 = iVar20;
                  }
                  iVar14 = iVar14 + 1;
                }
                if (param_1[iVar19].BuildPriority <= param_1[iVar14].BuildPriority) break;
                pFVar3 = param_1 + iVar14;
                iVar20 = pFVar3->RequestIndex;
                fVar6 = pFVar3->BuildPriority;
                pFVar4 = param_1 + iVar19;
                EVar10 = pFVar4->BuildMode;
                bVar11 = pFVar4->bReleaseBuffersAfterBuild;
                uVar12 = *(undefined3 *)&pFVar4->field_0x15;
                pFVar4 = param_1 + iVar19;
                pFVar2 = pFVar4->Owner;
                iVar18 = pFVar4->RequestIndex;
                fVar9 = pFVar4->BuildPriority;
                pFVar4 = param_1 + iVar19;
                pFVar4->Owner = pFVar3->Owner;
                pFVar4->RequestIndex = iVar20;
                pFVar4->BuildPriority = fVar6;
                pFVar3 = param_1 + iVar14;
                bVar13 = pFVar3->bReleaseBuffersAfterBuild;
                uVar7 = *(undefined3 *)&pFVar3->field_0x15;
                pFVar4 = param_1 + iVar19;
                pFVar4->BuildMode = pFVar3->BuildMode;
                pFVar4->bReleaseBuffersAfterBuild = bVar13;
                *(undefined3 *)&pFVar4->field_0x15 = uVar7;
                pFVar3 = param_1 + iVar14;
                pFVar3->Owner = pFVar2;
                pFVar3->RequestIndex = iVar18;
                pFVar3->BuildPriority = fVar9;
                pFVar3 = param_1 + iVar14;
                pFVar3->BuildMode = EVar10;
                pFVar3->bReleaseBuffersAfterBuild = bVar11;
                *(undefined3 *)&pFVar3->field_0x15 = uVar12;
                iVar19 = iVar14;
              } while (iVar14 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar17 = lVar17 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar14 = iVar20 + -1;
      iVar15 = iVar19 + -2;
      iVar19 = iVar15;
      iVar20 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar18 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      if (param_1[iVar18].BuildPriority <= param_1[(longlong)iVar15 + 2].BuildPriority &&
          param_1[(longlong)iVar15 + 2].BuildPriority != param_1[iVar18].BuildPriority) {
        iVar18 = iVar15;
      }
      iVar18 = iVar18 + 1;
    }
    if (param_1[iVar14].BuildPriority <= param_1[iVar18].BuildPriority) goto LAB_14843a406;
    pFVar16 = param_1 + iVar18;
    iVar5 = pFVar16->RequestIndex;
    fVar6 = pFVar16->BuildPriority;
    iVar15 = iVar18 * 2 + 1;
    pFVar3 = param_1 + iVar14;
    EVar10 = pFVar3->BuildMode;
    bVar11 = pFVar3->bReleaseBuffersAfterBuild;
    uVar12 = *(undefined3 *)&pFVar3->field_0x15;
    pFVar3 = param_1 + iVar14;
    pFVar2 = pFVar3->Owner;
    iVar8 = pFVar3->RequestIndex;
    fVar9 = pFVar3->BuildPriority;
    pFVar3 = param_1 + iVar14;
    pFVar3->Owner = pFVar16->Owner;
    pFVar3->RequestIndex = iVar5;
    pFVar3->BuildPriority = fVar6;
    pFVar16 = param_1 + iVar18;
    bVar13 = pFVar16->bReleaseBuffersAfterBuild;
    uVar7 = *(undefined3 *)&pFVar16->field_0x15;
    pFVar3 = param_1 + iVar14;
    pFVar3->BuildMode = pFVar16->BuildMode;
    pFVar3->bReleaseBuffersAfterBuild = bVar13;
    *(undefined3 *)&pFVar3->field_0x15 = uVar7;
    pFVar16 = param_1 + iVar18;
    pFVar16->Owner = pFVar2;
    pFVar16->RequestIndex = iVar8;
    pFVar16->BuildPriority = fVar9;
    pFVar16 = param_1 + iVar18;
    pFVar16->BuildMode = EVar10;
    pFVar16->bReleaseBuffersAfterBuild = bVar11;
    *(undefined3 *)&pFVar16->field_0x15 = uVar12;
    iVar14 = iVar18;
  } while( true );
}

// HeapSortInternal<`FReplayHelper::SaveCheckpoint'::__l53::FStrippedActorInfo,int,FIdentityFunctor,TDereferenceWrapper<`FReplayHelper::SaveCheckpoint'::__l53::FStrippedActorInfo,`FReplayHelper::SaveCheckpoint'::__l54::<lambda_1>_>_> @ 14843a520

void __cdecl
AlgoImpl::
HeapSortInternal<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,int,FIdentityFunctor,TDereferenceWrapper<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,_FReplayHelper::SaveCheckpoint_::__l54::<lambda_1>_>_>
          (FStrippedActorInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_53_::FStrippedActorInfo,_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_54_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  UObject *pUVar2;
  FWeakObjectPtr FVar3;
  UObject *pUVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FStrippedActorInfo *pFVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14843a613:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar12 = param_1 + lVar9;
          do {
            pUVar2 = pFVar12->Level;
            iVar10 = 0;
            FVar3 = (param_1->Actor).WeakPtr;
            pUVar4 = param_1->Level;
            (param_1->Actor).WeakPtr = (pFVar12->Actor).WeakPtr;
            param_1->Level = pUVar2;
            (pFVar12->Actor).WeakPtr = FVar3;
            pFVar12->Level = pUVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (param_1[iVar6].Level < param_1[(longlong)iVar11 + 2].Level) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (param_1[iVar10].Level <= param_1[iVar6].Level) break;
                pUVar2 = param_1[iVar6].Level;
                FVar3 = param_1[iVar10].Actor.WeakPtr;
                pUVar4 = param_1[iVar10].Level;
                param_1[iVar10].Actor.WeakPtr = param_1[iVar6].Actor.WeakPtr;
                param_1[iVar10].Level = pUVar2;
                param_1[iVar6].Actor.WeakPtr = FVar3;
                param_1[iVar6].Level = pUVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[iVar8].Level < param_1[(longlong)iVar7 + 2].Level) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (param_1[iVar6].Level <= param_1[iVar8].Level) goto LAB_14843a613;
    pUVar2 = param_1[iVar8].Level;
    iVar7 = iVar8 * 2 + 1;
    FVar3 = param_1[iVar6].Actor.WeakPtr;
    pUVar4 = param_1[iVar6].Level;
    param_1[iVar6].Actor.WeakPtr = param_1[iVar8].Actor.WeakPtr;
    param_1[iVar6].Level = pUVar2;
    param_1[iVar8].Actor.WeakPtr = FVar3;
    param_1[iVar8].Level = pUVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<`FRayTracingGeometryManager::UpdateReferenceBasedResidency'::__l50::<lambda_1>_>_> @ 14843a6f0

void __cdecl
AlgoImpl::
HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l50::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_private:_void___cdecl_FRayTracingGeometryManager::UpdateReferenceBasedResidency(FRHICommandList_&)_::_50_::<lambda_1>_>
          param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar12 = iVar7 * 2;
  iVar5 = iVar12;
  iVar11 = iVar7;
  do {
    while (param_2 <= iVar12 + 1) {
LAB_14843a851:
      if (iVar11 == 0) {
        return;
      }
      iVar7 = iVar11 + -1;
      iVar12 = iVar5 + -2;
      iVar5 = iVar12;
      iVar11 = iVar7;
    }
    iVar9 = iVar12;
    if (iVar12 + 2 < param_2) {
      lVar8 = *(longlong *)&(param_4.Predicate)->__this->RegisteredGeometries;
      lVar10 = (longlong)param_1[(longlong)iVar12 + 2] * 0x30 + lVar8;
      lVar8 = (longlong)param_1[(longlong)iVar12 + 1] * 0x30 + lVar8;
      uVar2 = *(ulonglong *)(lVar10 + 8);
      uVar3 = *(ulonglong *)(lVar8 + 8);
      iVar9 = iVar12 + 1;
      if (uVar2 == uVar3) {
        if (*(uint *)(lVar8 + 0x10) < *(uint *)(lVar10 + 0x10)) {
          iVar9 = iVar12;
        }
      }
      else if (uVar2 < uVar3) {
        iVar9 = iVar12;
      }
    }
    lVar8 = *(longlong *)&(param_4.Predicate)->__this->RegisteredGeometries;
    iVar1 = param_1[iVar7];
    iVar12 = param_1[(longlong)iVar9 + 1];
    uVar2 = *(ulonglong *)(lVar8 + 8 + (longlong)iVar12 * 0x30);
    uVar3 = *(ulonglong *)(lVar8 + 8 + (longlong)iVar1 * 0x30);
    bVar6 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar6 = *(uint *)(lVar8 + 0x10 + (longlong)iVar12 * 0x30) <
              *(uint *)(lVar8 + 0x10 + (longlong)iVar1 * 0x30);
    }
    if (!bVar6) goto LAB_14843a851;
    param_1[iVar7] = iVar12;
    iVar12 = (iVar9 + 1) * 2;
    param_1[(longlong)iVar9 + 1] = iVar1;
    iVar7 = iVar9 + 1;
  } while( true );
}

// HeapifyInternal<Nanite::FStreamingRequest,int,FIdentityFunctor,TDereferenceWrapper<Nanite::FStreamingRequest,`Nanite::FStreamingManager::SelectHighestPriorityPagesAndUpdateLRU'::__l2::<lambda_1>_>_> @ 14843a890

void __cdecl
AlgoImpl::
HeapifyInternal<Nanite::FStreamingRequest,int,FIdentityFunctor,TDereferenceWrapper<Nanite::FStreamingRequest,_Nanite::FStreamingManager::SelectHighestPriorityPagesAndUpdateLRU_::__l2::<lambda_1>_>_>
          (FStreamingRequest *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Nanite::FStreamingRequest,_private:_void___cdecl_Nanite::FStreamingManager::SelectHighestPriorityPagesAndUpdateLRU(unsigned_int)_::_2_::<lambda_1>_>
          param_4)

{
  FStreamingRequest *pFVar1;
  FStreamingRequest *pFVar2;
  FPageKey FVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar10 = iVar8 * 2 + 1;
  iVar6 = iVar10;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_14843a97c:
      if (iVar11 == 0) {
        return;
      }
      iVar8 = iVar11 + -1;
      iVar10 = iVar6 + -2;
      iVar6 = iVar10;
      iVar11 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar9 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (param_1[(longlong)iVar10 + 2].Priority < param_1[iVar9].Priority) {
        iVar9 = iVar10;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar1 = param_1 + iVar8;
    uVar4 = pFVar1->Priority;
    pFVar2 = param_1 + iVar9;
    if (param_1[iVar9].Priority <= uVar4) goto LAB_14843a97c;
    FVar3 = pFVar1->Key;
    pFVar1->Key = pFVar2->Key;
    iVar10 = iVar9 * 2 + 1;
    pFVar1->Priority = pFVar2->Priority;
    pFVar2->Key = FVar3;
    pFVar2->Priority = uVar4;
    iVar8 = iVar9;
  } while( true );
}

// InternalConstructor<UNeuralProfile> @ 14843a9b0

void __cdecl InternalConstructor<UNeuralProfile>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNeuralProfile__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[2].field_0xc = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 1;
    *(undefined8 *)&this[2].field_0x10 = 0;
    this[2].field_0x18 = 0;
    *(undefined2 *)(this + 1) = 0;
    this[1].field_0x2 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UReplayNetConnection> @ 14843aa20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UReplayNetConnection>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UNetConnection *this;
  
  this = (UNetConnection *)param_1->Obj;
  if (this != (UNetConnection *)0x0) {
    UNetConnection::UNetConnection(this,param_1);
    this->_padding_ = (longlong)&UReplayNetConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UReplayNetConnection::_vftable__for__FExec__;
    FReplayHelper::FReplayHelper((FReplayHelper *)(this + 1));
    this->InternalAck = 1;
    this->bInternalAck = 1;
    this->bUnlimitedBunchSizeAllowed = 1;
    this->bReplay = 1;
    this[1].OutLagTime[99] = 0.0;
    this[1].OutLagTime[100] = 0.0;
    this->MaxPacket = 0x800;
    this->bAutoFlush = true;
  }
  return;
}

// InternalConstructor<USkeletalMeshHalfEdgeBufferAccessor> @ 14843aaa0

void __cdecl InternalConstructor<USkeletalMeshHalfEdgeBufferAccessor>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7USkeletalMeshHalfEdgeBufferAccessor__6B_;
  }
  return;
}

// InternalConstructor<USpecularProfile> @ 14843aad0

void __cdecl InternalConstructor<USpecularProfile>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USpecularProfile__6B_;
    FSpecularProfileStruct::FSpecularProfileStruct((FSpecularProfileStruct *)(this + 1));
    *(undefined8 *)&this[0x1b].field_0x10 = 0;
    *(undefined8 *)&this[0x1b].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<USubsurfaceProfile> @ 14843ab20

void __cdecl InternalConstructor<USubsurfaceProfile>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USubsurfaceProfile__6B_;
    FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)(this + 1));
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
  }
  return;
}

// InternalGetDefaultObject<TResourceArray<int,0>_> @ 14843ab70

TResourceArray<int,0> * __cdecl InternalGetDefaultObject<TResourceArray<int,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
      ::__l3::Default.bNeedsCPUAccess = false;
      `class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
      ::__l3::Default._padding_ = (longlong)&___7__TResourceArray_H_0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<int,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_> @ 14843ac10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523ca98 = 0;
      _DAT_15523ca88 = 0;
      _DAT_15523ca90 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat16Uvs__00___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_> @ 14843acb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cac0 = 0;
      _DAT_15523cab0 = 0;
      _DAT_15523cab8 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat16Uvs__01___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_> @ 14843ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cae8 = 0;
      _DAT_15523cad8 = 0;
      _DAT_15523cae0 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat16Uvs__02___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_> @ 14843adf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cb10 = 0;
      _DAT_15523cb00 = 0;
      _DAT_15523cb08 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat16Uvs__03___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_> @ 14843ae90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cb38 = 0;
      _DAT_15523cb28 = 0;
      _DAT_15523cb30 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat32Uvs__00___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_> @ 14843af30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cb60 = 0;
      _DAT_15523cb50 = 0;
      _DAT_15523cb58 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat32Uvs__01___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_> @ 14843afd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cb88 = 0;
      _DAT_15523cb78 = 0;
      _DAT_15523cb80 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat32Uvs__02___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_> @ 14843b070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cbb0 = 0;
      _DAT_15523cba0 = 0;
      _DAT_15523cba8 = 0;
      _Default = &___7__TResourceArray_U__TGPUSkinVertexFloat32Uvs__03___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *)
             &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *)
         &`class_TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_> @ 14843b110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cc28 = 0;
      _DAT_15523cc18 = 0;
      _DAT_15523cc20 = 0;
      _Default = &___7__TResourceArray_U__TLegacySkinWeightInfo__00E___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>'::
             __l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *)
             &`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *)
         &`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_> @ 14843b1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cc00 = 0;
      _DAT_15523cbf0 = 0;
      _DAT_15523cbf8 = 0;
      _Default = &___7__TResourceArray_U__TLegacySkinWeightInfo__00G___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>'
             ::__l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *)
             &`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *)
         &`class_TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_> @ 14843b250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cc78 = 0;
      _DAT_15523cc68 = 0;
      _DAT_15523cc70 = 0;
      _Default = &___7__TResourceArray_U__TLegacySkinWeightInfo__0A_E___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>'::
             __l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *)
             &`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *)
         &`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_> @ 14843b2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cc50 = 0;
      _DAT_15523cc40 = 0;
      _DAT_15523cc48 = 0;
      _Default = &___7__TResourceArray_U__TLegacySkinWeightInfo__0A_G___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>'
             ::__l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *)
             &`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *)
         &`class_TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_> @ 14843b390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523ccf0 = 0;
      _DAT_15523cce0 = 0;
      _DAT_15523cce8 = 0;
      _Default = &___7__TResourceArray_U__TStaticMeshVertexTangentDatum_UFPackedNormal_____0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>'
             ::__l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *)
             &`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *)
         &`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_> @ 14843b430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523ccc8 = 0;
      _DAT_15523ccb8 = 0;
      _DAT_15523ccc0 = 0;
      _Default = &___7__TResourceArray_U__TStaticMeshVertexTangentDatum_UFPackedRGBA16N_____0A___6B_
      ;
      atexit(`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>'
             ::__l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *)
             &`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *)
         &`class_TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_> @ 14843b4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cca0 = 0;
      _DAT_15523cc90 = 0;
      _DAT_15523cc98 = 0;
      _Default = &
                 ___7__TResourceArray_U__TStaticMeshVertexUVsDatum_U__TVector2_M_Math_UE_____0A___6B_
      ;
      atexit(`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>'
             ::__l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *)
             &`class_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *)
         &`class_TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_> @ 14843b570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cd18 = 0;
      _DAT_15523cd08 = 0;
      _DAT_15523cd10 = 0;
      _Default = &___7__TResourceArray_U__TStaticMeshVertexUVsDatum_UFVector2DHalf_____0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>'
             ::__l3::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *)
             &`class_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *)
         &`class_TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_> @ 14843b610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<FMeshToMeshVertData,0> * __cdecl
InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<FMeshToMeshVertData,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<FMeshToMeshVertData,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<FMeshToMeshVertData,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15523cbd8 = 0;
      _DAT_15523cbc8 = 0;
      _DAT_15523cbd0 = 0;
      _Default = &___7__TResourceArray_UFMeshToMeshVertData___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<FMeshToMeshVertData,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<FMeshToMeshVertData,0> *)
             &`class_TResourceArray<FMeshToMeshVertData,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<FMeshToMeshVertData,0> *)
         &`class_TResourceArray<FMeshToMeshVertData,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>(void)'
          ::__l3::Default;
}

// InternalVTableHelperCtorCaller<UNeuralProfile> @ 14843b6b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNeuralProfile>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNeuralProfile::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNeuralProfile__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 1;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    pUVar1[2].field_0x18 = 0;
    *(undefined2 *)(pUVar1 + 1) = 0;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReplayNetConnection> @ 14843b7a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UReplayNetConnection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetConnection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReplayNetConnection::GetPrivateStaticClass();
  this = (UNetConnection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetConnection *)0x0) {
    UNetConnection::UNetConnection(this,param_1);
    this->_padding_ = (longlong)&UReplayNetConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UReplayNetConnection::_vftable__for__FExec__;
    FReplayHelper::FReplayHelper((FReplayHelper *)(this + 1));
    this[1].OutLagTime[99] = 0.0;
    this[1].OutLagTime[100] = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USkeletalMeshHalfEdgeBufferAccessor> @ 14843b870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USkeletalMeshHalfEdgeBufferAccessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USkeletalMeshHalfEdgeBufferAccessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USkeletalMeshHalfEdgeBufferAccessor__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USpecularProfile> @ 14843b920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USpecularProfile>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USpecularProfile::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USpecularProfile__6B_;
    FSpecularProfileStruct::FSpecularProfileStruct((FSpecularProfileStruct *)(pUVar1 + 1));
    *(undefined8 *)&pUVar1[0x1b].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x1b].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubsurfaceProfile> @ 14843b9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USubsurfaceProfile>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubsurfaceProfile::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USubsurfaceProfile__6B_;
    FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)(pUVar1 + 1));
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> @ 14843bac0

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> @ 14843bae0

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> @ 14843bb00

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> @ 14843bb20

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> @ 14843bb40

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> @ 14843bb60

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> @ 14843bb80

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> @ 14843bba0

uint __cdecl
Freeze::IntrinsicAppendHash<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843bbc0

uint __cdecl
Freeze::IntrinsicAppendHash<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843bbe0

uint __cdecl
Freeze::IntrinsicAppendHash<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843bc00

uint __cdecl
Freeze::IntrinsicAppendHash<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843bc20

uint __cdecl
Freeze::IntrinsicAppendHash<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> @ 14843bc40

uint __cdecl
Freeze::IntrinsicAppendHash<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> @ 14843bc60

uint __cdecl
Freeze::IntrinsicAppendHash<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_> @ 14843bc80

uint __cdecl
Freeze::
IntrinsicAppendHash<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
           *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> @ 14843bca0

uint __cdecl
Freeze::IntrinsicAppendHash<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<FMeshToMeshVertData,TMemoryImageAllocator<0>_> @ 14843bcc0

uint __cdecl
Freeze::IntrinsicAppendHash<FMeshToMeshVertData,TMemoryImageAllocator<0>_>
          (TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> @ 14843bce0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> @ 14843bd00

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> @ 14843bd20

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> @ 14843bd40

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> @ 14843bd60

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> @ 14843bd80

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> @ 14843bda0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> @ 14843bdc0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843bde0

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843be00

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843be20

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843be40

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> @ 14843be60

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> @ 14843be80

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_> @ 14843bea0

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
           *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> @ 14843bec0

uint __cdecl
Freeze::
IntrinsicGetTargetAlignment<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<FMeshToMeshVertData,TMemoryImageAllocator<0>_> @ 14843bee0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FMeshToMeshVertData,TMemoryImageAllocator<0>_>
          (TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> @ 14843bf00

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> @ 14843bf10

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> @ 14843bf20

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> @ 14843bf30

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> @ 14843bf40

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> @ 14843bf50

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> @ 14843bf60

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> @ 14843bf70

void __cdecl
Freeze::IntrinsicToString<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>
          (TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843bf80

void __cdecl
Freeze::IntrinsicToString<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843bf90

void __cdecl
Freeze::IntrinsicToString<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843bfa0

void __cdecl
Freeze::IntrinsicToString<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843bfb0

void __cdecl
Freeze::IntrinsicToString<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>
          (TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> @ 14843bfc0

void __cdecl
Freeze::IntrinsicToString<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> @ 14843bfd0

void __cdecl
Freeze::IntrinsicToString<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_> @ 14843bfe0

void __cdecl
Freeze::
IntrinsicToString<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
           *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> @ 14843bff0

void __cdecl
Freeze::IntrinsicToString<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>
          (TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicToString<FMeshToMeshVertData,TMemoryImageAllocator<0>_> @ 14843c000

void __cdecl
Freeze::IntrinsicToString<FMeshToMeshVertData,TMemoryImageAllocator<0>_>
          (TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> @ 14843c010

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> @ 14843c030

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> @ 14843c050

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> @ 14843c070

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> @ 14843c090

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> @ 14843c0b0

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> @ 14843c0d0

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> @ 14843c0f0

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843c110

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843c130

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843c150

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843c170

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> @ 14843c190

uint __cdecl
Freeze::
IntrinsicUnfrozenCopy<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> @ 14843c1b0

uint __cdecl
Freeze::
IntrinsicUnfrozenCopy<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_> @ 14843c1d0

uint __cdecl
Freeze::
IntrinsicUnfrozenCopy<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> @ 14843c1f0

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicUnfrozenCopy<FMeshToMeshVertData,TMemoryImageAllocator<0>_> @ 14843c210

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FMeshToMeshVertData,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> @ 14843c230

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> @ 14843c2a0

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> @ 14843c310

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> @ 14843c380

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> @ 14843c3f0

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> @ 14843c460

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> @ 14843c4d0

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> @ 14843c540

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843c5b0

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843c620

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> @ 14843c690

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> @ 14843c700

void __cdecl
Freeze::IntrinsicWriteMemoryImage<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> @ 14843c770

void __cdecl
Freeze::
IntrinsicWriteMemoryImage<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> @ 14843c7e0

void __cdecl
Freeze::
IntrinsicWriteMemoryImage<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_> @ 14843c850

void __cdecl
Freeze::
IntrinsicWriteMemoryImage<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
          *param_2,FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> @ 14843c8c0

void __cdecl
Freeze::
IntrinsicWriteMemoryImage<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntrinsicWriteMemoryImage<FMeshToMeshVertData,TMemoryImageAllocator<0>_> @ 14843c930

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FMeshToMeshVertData,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_> *param_2,FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

// IntroSortInternal<int,int,FIdentityFunctor,`FRayTracingGeometryManager::UpdateReferenceBasedResidency'::__l50::<lambda_1>_> @ 14843c9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l50::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int **ppiVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_378 [48];
  int *local_348;
  int *local_338;
  int *local_330;
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
    ppiVar12 = &local_338;
    do {
      piVar7 = ppiVar12[1];
      piVar6 = *ppiVar12;
      piVar11 = ppiVar12[2];
      iVar5 = (int)((longlong)piVar7 - (longlong)piVar6 >> 2) + 1;
      local_348._0_4_ = (int)piVar11;
      piVar8 = piVar6;
      if ((int)local_348 != 0) {
LAB_14843ca60:
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          piVar9 = piVar7 + 1;
          iVar1 = piVar8[iVar5 >> 1];
          piVar8[iVar5 >> 1] = *piVar8;
          *piVar8 = iVar1;
          piVar6 = piVar8;
LAB_14843ca85:
          piVar6 = piVar6 + 1;
          if (piVar6 <= piVar7) goto code_r0x00014843ca8e;
          goto LAB_14843cad0;
        }
        if (piVar8 < piVar7) {
          do {
            piVar11 = piVar8;
            if (piVar8 + 1 <= piVar7) {
              lVar2 = *(longlong *)&(param_4.__this)->RegisteredGeometries;
              piVar6 = piVar8 + 1;
              do {
                uVar3 = *(ulonglong *)(lVar2 + 8 + (longlong)*piVar6 * 0x30);
                uVar4 = *(ulonglong *)(lVar2 + 8 + (longlong)*piVar11 * 0x30);
                bVar13 = uVar4 < uVar3;
                if (uVar4 == uVar3) {
                  bVar13 = *(uint *)(lVar2 + 0x10 + (longlong)*piVar6 * 0x30) <
                           *(uint *)(lVar2 + 0x10 + (longlong)*piVar11 * 0x30);
                }
                if (bVar13) {
                  piVar11 = piVar6;
                }
                piVar6 = piVar6 + 1;
              } while (piVar6 <= piVar7);
            }
            iVar5 = *piVar11;
            piVar6 = piVar7 + -1;
            *piVar11 = *piVar7;
            *piVar7 = iVar5;
            piVar7 = piVar6;
          } while (piVar8 < piVar6);
        }
        goto LAB_14843cbbd;
      }
LAB_14843cbac:
      local_348 = piVar11;
      HeapSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l50::<lambda_1>_>
                (piVar6,iVar5,param_3,param_4);
LAB_14843cbbd:
      ppiVar12 = ppiVar12 + -3;
    } while (&local_338 <= ppiVar12);
  }
  return;
code_r0x00014843ca8e:
  lVar2 = *(longlong *)&(param_4.__this)->RegisteredGeometries;
  uVar3 = *(ulonglong *)(lVar2 + 8 + (longlong)*piVar6 * 0x30);
  uVar4 = *(ulonglong *)(lVar2 + 8 + (longlong)*piVar8 * 0x30);
  bVar13 = uVar4 < uVar3;
  if (uVar4 == uVar3) {
    bVar13 = *(uint *)(lVar2 + 0x10 + (longlong)*piVar6 * 0x30) <
             *(uint *)(lVar2 + 0x10 + (longlong)*piVar8 * 0x30);
  }
  if (!bVar13) goto LAB_14843ca85;
LAB_14843cad0:
  do {
    piVar10 = piVar9;
    piVar9 = piVar10 + -1;
    if (piVar9 <= piVar8) break;
    lVar2 = *(longlong *)&(param_4.__this)->RegisteredGeometries;
    uVar3 = *(ulonglong *)(lVar2 + 8 + (longlong)*piVar8 * 0x30);
    uVar4 = *(ulonglong *)(lVar2 + 8 + (longlong)*piVar9 * 0x30);
    bVar13 = uVar4 < uVar3;
    if (uVar4 == uVar3) {
      bVar13 = *(uint *)(lVar2 + 0x10 + (longlong)*piVar8 * 0x30) <
               *(uint *)(lVar2 + 0x10 + (longlong)*piVar9 * 0x30);
    }
  } while (!bVar13);
  if (piVar6 <= piVar9) {
    iVar5 = *piVar6;
    *piVar6 = *piVar9;
    *piVar9 = iVar5;
    goto LAB_14843ca85;
  }
  iVar5 = *piVar8;
  local_348._0_4_ = (int)local_348 + -1;
  *piVar8 = *piVar9;
  *piVar9 = iVar5;
  if ((longlong)((longlong)piVar9 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar7 - (longlong)piVar6 & 0xfffffffffffffffcU)) {
    if (piVar6 < piVar7) {
      *ppiVar12 = piVar6;
      ppiVar12[1] = piVar7;
      *(int *)(ppiVar12 + 2) = (int)local_348;
      ppiVar12 = ppiVar12 + 3;
    }
    if (piVar9 <= piVar8 + 1) goto LAB_14843cbbd;
    piVar7 = piVar10 + -2;
    piVar6 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar9) {
      *ppiVar12 = piVar8;
      ppiVar12[1] = piVar10 + -2;
      *(int *)(ppiVar12 + 2) = (int)local_348;
      ppiVar12 = ppiVar12 + 3;
    }
    if (piVar7 <= piVar6) goto LAB_14843cbbd;
  }
  iVar5 = (int)((longlong)piVar7 - (longlong)piVar6 >> 2) + 1;
  piVar8 = piVar6;
  if ((int)local_348 == 0) goto LAB_14843cbac;
  goto LAB_14843ca60;
}

// IntroSortInternal<int,int,FIdentityFunctor,`FRayTracingGeometryManager::UpdateReferenceBasedResidency'::__l62::<lambda_2>_> @ 14843cca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l62::<lambda_2>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  int *local_348;
  int *local_338;
  int *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    ppiVar9 = &local_338;
    do {
      piVar8 = ppiVar9[1];
      piVar4 = *ppiVar9;
      piVar3 = ppiVar9[2];
      iVar2 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
      local_348._0_4_ = (int)piVar3;
      piVar7 = piVar4;
      if ((int)local_348 != 0) {
LAB_14843cd50:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          piVar6 = piVar8 + 1;
          iVar1 = piVar7[iVar2 >> 1];
          piVar7[iVar2 >> 1] = *piVar7;
          *piVar7 = iVar1;
          piVar4 = piVar7;
LAB_14843cd80:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar8) goto code_r0x00014843cd89;
          goto LAB_14843cdb0;
        }
        if (piVar7 < piVar8) {
          do {
            piVar3 = piVar7;
            if (piVar7 + 1 <= piVar8) {
              piVar4 = piVar7;
              piVar6 = piVar7 + 1;
              do {
                piVar3 = piVar6;
                if (*(uint *)(*(longlong *)&(param_4.__this)->RegisteredGeometries + 0x10 +
                             (longlong)*piVar6 * 0x30) <=
                    *(uint *)(*(longlong *)&(param_4.__this)->RegisteredGeometries + 0x10 +
                             (longlong)*piVar4 * 0x30)) {
                  piVar3 = piVar4;
                }
                piVar6 = piVar6 + 1;
                piVar4 = piVar3;
              } while (piVar6 <= piVar8);
            }
            iVar2 = *piVar3;
            piVar4 = piVar8 + -1;
            *piVar3 = *piVar8;
            *piVar8 = iVar2;
            piVar8 = piVar4;
          } while (piVar7 < piVar4);
        }
        goto LAB_14843ce85;
      }
LAB_14843ce74:
      local_348 = piVar3;
      HeapSortInternal<int,int,FIdentityFunctor,_FRayTracingGeometryManager::UpdateReferenceBasedResidency_::__l62::<lambda_2>_>
                (piVar4,iVar2,param_3,param_4);
LAB_14843ce85:
      ppiVar9 = ppiVar9 + -3;
    } while (&local_338 <= ppiVar9);
  }
  return;
code_r0x00014843cd89:
  if (*(uint *)(*(longlong *)&(param_4.__this)->RegisteredGeometries + 0x10 +
               (longlong)*piVar4 * 0x30) <=
      *(uint *)(*(longlong *)&(param_4.__this)->RegisteredGeometries + 0x10 +
               (longlong)*piVar7 * 0x30)) goto LAB_14843cd80;
LAB_14843cdb0:
  do {
    piVar5 = piVar6;
    piVar6 = piVar5 + -1;
    if (piVar6 <= piVar7) break;
  } while (*(uint *)(*(longlong *)&(param_4.__this)->RegisteredGeometries + 0x10 +
                    (longlong)*piVar7 * 0x30) <=
           *(uint *)(*(longlong *)&(param_4.__this)->RegisteredGeometries + 0x10 +
                    (longlong)*piVar6 * 0x30));
  if (piVar4 <= piVar6) {
    iVar2 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar2;
    goto LAB_14843cd80;
  }
  iVar2 = *piVar7;
  local_348._0_4_ = (int)local_348 + -1;
  *piVar7 = *piVar6;
  *piVar6 = iVar2;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar7) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar8) {
      *ppiVar9 = piVar4;
      ppiVar9[1] = piVar8;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar6 <= piVar7 + 1) goto LAB_14843ce85;
    piVar8 = piVar5 + -2;
    piVar4 = piVar7;
  }
  else {
    if (piVar7 + 1 < piVar6) {
      *ppiVar9 = piVar7;
      ppiVar9[1] = piVar5 + -2;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_14843ce85;
  }
  iVar2 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
  piVar7 = piVar4;
  if ((int)local_348 == 0) goto LAB_14843ce74;
  goto LAB_14843cd50;
}

// IntroSortInternal<FRayTracingGeometryManager::FBuildRequest,int,FIdentityFunctor,TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,`FRayTracingGeometryManager::ProcessBuildRequests'::__l33::<lambda_1>_>_> @ 14843cf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FRayTracingGeometryManager::FBuildRequest,int,FIdentityFunctor,TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,_FRayTracingGeometryManager::ProcessBuildRequests_::__l33::<lambda_1>_>_>
          (FBuildRequest *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,_public:_virtual_void___cdecl_FRayTracingGeometryManager::ProcessBuildRequests(FRHIComputeCommandList_&,bool)_::_33_::<lambda_1>_>
          param_4)

{
  FBuildRequest *pFVar1;
  FRayTracingGeometry *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined3 uVar7;
  int iVar8;
  float fVar9;
  EAccelerationStructureBuildMode EVar10;
  bool bVar11;
  undefined3 uVar12;
  longlong lVar13;
  FBuildRequest *pFVar14;
  int iVar15;
  FBuildRequest *pFVar16;
  FBuildRequest *pFVar17;
  FBuildRequest *pFVar18;
  FBuildRequest *pFVar19;
  FBuildRequest *pFVar20;
  FBuildRequest **ppFVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  FBuildRequest *local_348;
  FBuildRequest *local_338;
  FBuildRequest *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar22;
    memset(local_320,0,0x2e8);
    ppFVar21 = &local_338;
    do {
      pFVar17 = ppFVar21[1];
      pFVar16 = *ppFVar21;
      pFVar1 = ppFVar21[2];
      local_348._0_4_ = (int)pFVar1;
      iVar15 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x18) + 1;
      pFVar20 = pFVar16;
      if ((int)local_348 != 0) {
LAB_14843d010:
        if (8 < iVar15) {
          iVar5 = pFVar20->RequestIndex;
          fVar22 = pFVar20->BuildPriority;
          pFVar14 = pFVar17 + 1;
          iVar15 = iVar15 / 2;
          pFVar16 = pFVar20 + iVar15;
          pFVar2 = pFVar16->Owner;
          iVar8 = pFVar16->RequestIndex;
          fVar9 = pFVar16->BuildPriority;
          pFVar16 = pFVar20 + iVar15;
          EVar10 = pFVar16->BuildMode;
          bVar11 = pFVar16->bReleaseBuffersAfterBuild;
          uVar12 = *(undefined3 *)&pFVar16->field_0x15;
          pFVar16 = pFVar20 + iVar15;
          pFVar16->Owner = pFVar20->Owner;
          pFVar16->RequestIndex = iVar5;
          pFVar16->BuildPriority = fVar22;
          bVar6 = pFVar20->bReleaseBuffersAfterBuild;
          uVar7 = *(undefined3 *)&pFVar20->field_0x15;
          pFVar16 = pFVar20 + iVar15;
          pFVar16->BuildMode = pFVar20->BuildMode;
          pFVar16->bReleaseBuffersAfterBuild = bVar6;
          *(undefined3 *)&pFVar16->field_0x15 = uVar7;
          pFVar20->Owner = pFVar2;
          pFVar20->RequestIndex = iVar8;
          pFVar20->BuildPriority = fVar9;
          pFVar20->BuildMode = EVar10;
          pFVar20->bReleaseBuffersAfterBuild = bVar11;
          *(undefined3 *)&pFVar20->field_0x15 = uVar12;
          pFVar16 = pFVar20;
LAB_14843d060:
          pFVar18 = pFVar16;
          pFVar16 = pFVar18 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x00014843d069;
          goto LAB_14843d076;
        }
        if (pFVar20 < pFVar17) {
          pFVar1 = pFVar20 + 1;
          do {
            pFVar16 = pFVar20;
            if (pFVar1 <= pFVar17) {
              pFVar14 = pFVar1;
              if (0x5f < (ulonglong)((longlong)pFVar17 + (0x18 - (longlong)pFVar1))) {
                do {
                  if (pFVar14->BuildPriority < pFVar16->BuildPriority) {
                    pFVar16 = pFVar14;
                  }
                  if (pFVar14[1].BuildPriority < pFVar16->BuildPriority) {
                    pFVar16 = pFVar14 + 1;
                  }
                  if (pFVar14[2].BuildPriority < pFVar16->BuildPriority) {
                    pFVar16 = pFVar14 + 2;
                  }
                  if (pFVar14[3].BuildPriority < pFVar16->BuildPriority) {
                    pFVar16 = pFVar14 + 3;
                  }
                  pFVar14 = pFVar14 + 4;
                } while (pFVar14 <= pFVar17 + -3);
              }
              for (; pFVar14 <= pFVar17; pFVar14 = pFVar14 + 1) {
                if (pFVar14->BuildPriority < pFVar16->BuildPriority) {
                  pFVar16 = pFVar14;
                }
              }
            }
            pFVar2 = pFVar16->Owner;
            iVar5 = pFVar16->RequestIndex;
            fVar9 = pFVar16->BuildPriority;
            pFVar14 = pFVar17 + -1;
            EVar10 = pFVar16->BuildMode;
            bVar11 = pFVar16->bReleaseBuffersAfterBuild;
            uVar12 = *(undefined3 *)&pFVar16->field_0x15;
            iVar15 = pFVar17->RequestIndex;
            fVar22 = pFVar17->BuildPriority;
            pFVar16->Owner = pFVar17->Owner;
            pFVar16->RequestIndex = iVar15;
            pFVar16->BuildPriority = fVar22;
            bVar6 = pFVar17->bReleaseBuffersAfterBuild;
            uVar7 = *(undefined3 *)&pFVar17->field_0x15;
            pFVar16->BuildMode = pFVar17->BuildMode;
            pFVar16->bReleaseBuffersAfterBuild = bVar6;
            *(undefined3 *)&pFVar16->field_0x15 = uVar7;
            pFVar17->Owner = pFVar2;
            pFVar17->RequestIndex = iVar5;
            pFVar17->BuildPriority = fVar9;
            pFVar17->BuildMode = EVar10;
            pFVar17->bReleaseBuffersAfterBuild = bVar11;
            *(undefined3 *)&pFVar17->field_0x15 = uVar12;
            pFVar17 = pFVar14;
          } while (pFVar20 < pFVar14);
        }
        goto LAB_14843d19b;
      }
LAB_14843d18c:
      local_348 = pFVar1;
      HeapSortInternal<FRayTracingGeometryManager::FBuildRequest,int,FIdentityFunctor,TDereferenceWrapper<FRayTracingGeometryManager::FBuildRequest,_FRayTracingGeometryManager::ProcessBuildRequests_::__l33::<lambda_1>_>_>
                (pFVar16,iVar15,param_3,param_4);
LAB_14843d19b:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_338 <= ppFVar21);
  }
  return;
code_r0x00014843d069:
  if (pFVar20->BuildPriority <= pFVar18[1].BuildPriority) goto LAB_14843d060;
LAB_14843d076:
  do {
    pFVar19 = pFVar14;
    pFVar14 = pFVar19 + -1;
    if (pFVar14 <= pFVar20) break;
  } while (pFVar19[-1].BuildPriority <= pFVar20->BuildPriority);
  uVar3 = pFVar19[-1].RequestIndex;
  uVar4 = pFVar19[-1].BuildPriority;
  if (pFVar16 <= pFVar14) {
    pFVar2 = pFVar16->Owner;
    iVar15 = pFVar18[1].RequestIndex;
    fVar22 = pFVar18[1].BuildPriority;
    EVar10 = pFVar18[1].BuildMode;
    bVar11 = pFVar18[1].bReleaseBuffersAfterBuild;
    uVar12 = *(undefined3 *)&pFVar18[1].field_0x15;
    pFVar16->Owner = pFVar14->Owner;
    pFVar18[1].RequestIndex = uVar3;
    pFVar18[1].BuildPriority = (float)uVar4;
    bVar6 = pFVar19[-1].bReleaseBuffersAfterBuild;
    uVar7 = *(undefined3 *)&pFVar19[-1].field_0x15;
    pFVar18[1].BuildMode = pFVar19[-1].BuildMode;
    pFVar18[1].bReleaseBuffersAfterBuild = bVar6;
    *(undefined3 *)&pFVar18[1].field_0x15 = uVar7;
    pFVar14->Owner = pFVar2;
    pFVar19[-1].RequestIndex = iVar15;
    pFVar19[-1].BuildPriority = fVar22;
    pFVar19[-1].BuildMode = EVar10;
    pFVar19[-1].bReleaseBuffersAfterBuild = bVar11;
    *(undefined3 *)&pFVar19[-1].field_0x15 = uVar12;
    goto LAB_14843d060;
  }
  pFVar2 = pFVar20->Owner;
  iVar15 = pFVar20->RequestIndex;
  fVar22 = pFVar20->BuildPriority;
  EVar10 = pFVar20->BuildMode;
  bVar11 = pFVar20->bReleaseBuffersAfterBuild;
  uVar12 = *(undefined3 *)&pFVar20->field_0x15;
  lVar13 = (longlong)pFVar14 + (-0x18 - (longlong)pFVar20);
  local_348._0_4_ = (int)local_348 + -1;
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  pFVar20->Owner = pFVar14->Owner;
  pFVar20->RequestIndex = uVar3;
  pFVar20->BuildPriority = (float)uVar4;
  bVar6 = pFVar19[-1].bReleaseBuffersAfterBuild;
  uVar7 = *(undefined3 *)&pFVar19[-1].field_0x15;
  pFVar20->BuildMode = pFVar19[-1].BuildMode;
  pFVar20->bReleaseBuffersAfterBuild = bVar6;
  *(undefined3 *)&pFVar20->field_0x15 = uVar7;
  pFVar14->Owner = pFVar2;
  pFVar19[-1].RequestIndex = iVar15;
  pFVar19[-1].BuildPriority = fVar22;
  pFVar19[-1].BuildMode = EVar10;
  pFVar19[-1].bReleaseBuffersAfterBuild = bVar11;
  *(undefined3 *)&pFVar19[-1].field_0x15 = uVar12;
  if ((lVar13 >> 2) - (lVar13 >> 0x3f) < ((longlong)pFVar17 - (longlong)pFVar16) / 0x18) {
    if (pFVar16 < pFVar17) {
      *ppFVar21 = pFVar16;
      ppFVar21[1] = pFVar17;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar14 <= pFVar20 + 1) goto LAB_14843d19b;
    pFVar17 = pFVar19 + -2;
    pFVar16 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar14) {
      *ppFVar21 = pFVar20;
      ppFVar21[1] = pFVar19 + -2;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_14843d19b;
  }
  iVar15 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x18) + 1;
  pFVar20 = pFVar16;
  if ((int)local_348 == 0) goto LAB_14843d18c;
  goto LAB_14843d010;
}

// IntroSortInternal<`FReplayHelper::SaveCheckpoint'::__l53::FStrippedActorInfo,int,FIdentityFunctor,TDereferenceWrapper<`FReplayHelper::SaveCheckpoint'::__l53::FStrippedActorInfo,`FReplayHelper::SaveCheckpoint'::__l54::<lambda_1>_>_> @ 14843d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,int,FIdentityFunctor,TDereferenceWrapper<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,_FReplayHelper::SaveCheckpoint_::__l54::<lambda_1>_>_>
          (FStrippedActorInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_53_::FStrippedActorInfo,_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_54_::<lambda_1>_>
          param_4)

{
  FStrippedActorInfo *pFVar1;
  UObject *pUVar2;
  FWeakObjectPtr FVar3;
  UObject *pUVar4;
  FWeakObjectPtr FVar5;
  int iVar6;
  FStrippedActorInfo *pFVar7;
  FStrippedActorInfo **ppFVar8;
  FStrippedActorInfo *pFVar9;
  FStrippedActorInfo *pFVar10;
  FStrippedActorInfo *pFVar11;
  FStrippedActorInfo *pFVar12;
  FStrippedActorInfo *pFVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  FStrippedActorInfo *local_338;
  FStrippedActorInfo *local_328;
  FStrippedActorInfo *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar14;
    memset(local_310,0,0x2e8);
    ppFVar8 = &local_328;
    do {
      pFVar11 = ppFVar8[1];
      pFVar13 = *ppFVar8;
      pFVar1 = ppFVar8[2];
      iVar6 = (int)((longlong)pFVar11 - (longlong)pFVar13 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar12 = pFVar13;
      if ((int)local_338 != 0) {
LAB_14843d360:
        if (8 < iVar6) {
          pUVar2 = pFVar12->Level;
          pFVar9 = pFVar11 + 1;
          FVar3 = pFVar12[iVar6 / 2].Actor.WeakPtr;
          pUVar4 = pFVar12[iVar6 / 2].Level;
          pFVar12[iVar6 / 2].Actor.WeakPtr = (pFVar12->Actor).WeakPtr;
          pFVar12[iVar6 / 2].Level = pUVar2;
          (pFVar12->Actor).WeakPtr = FVar3;
          pFVar12->Level = pUVar4;
          pFVar13 = pFVar12;
LAB_14843d390:
          pFVar7 = pFVar13;
          pFVar13 = pFVar7 + 1;
          if (pFVar13 <= pFVar11) goto code_r0x00014843d399;
          goto LAB_14843d3a3;
        }
        for (; pFVar1 = pFVar12, pFVar13 = pFVar12, pFVar12 < pFVar11; pFVar11 = pFVar11 + -1) {
          while (pFVar9 = pFVar13 + 1, pFVar9 <= pFVar11) {
            pFVar7 = pFVar13 + 1;
            pFVar13 = pFVar9;
            if (pFVar7->Level < pFVar1->Level) {
              pFVar1 = pFVar9;
            }
          }
          FVar3 = (pFVar1->Actor).WeakPtr;
          pUVar2 = pFVar1->Level;
          pUVar4 = pFVar11->Level;
          (pFVar1->Actor).WeakPtr = (pFVar11->Actor).WeakPtr;
          pFVar1->Level = pUVar4;
          (pFVar11->Actor).WeakPtr = FVar3;
          pFVar11->Level = pUVar2;
        }
        goto LAB_14843d464;
      }
LAB_14843d453:
      local_338 = pFVar1;
      HeapSortInternal<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,int,FIdentityFunctor,TDereferenceWrapper<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,_FReplayHelper::SaveCheckpoint_::__l54::<lambda_1>_>_>
                (pFVar13,iVar6,param_3,param_4);
LAB_14843d464:
      ppFVar8 = ppFVar8 + -3;
    } while (&local_328 <= ppFVar8);
  }
  return;
code_r0x00014843d399:
  if (pFVar12->Level <= pFVar7[1].Level) goto LAB_14843d390;
LAB_14843d3a3:
  do {
    pFVar10 = pFVar9;
    pFVar9 = pFVar10 + -1;
    if (pFVar9 <= pFVar12) break;
  } while (pFVar10[-1].Level <= pFVar12->Level);
  FVar3 = (pFVar9->Actor).WeakPtr;
  pUVar2 = pFVar10[-1].Level;
  if (pFVar13 <= pFVar9) {
    FVar5 = (pFVar13->Actor).WeakPtr;
    pUVar4 = pFVar7[1].Level;
    (pFVar13->Actor).WeakPtr = FVar3;
    pFVar7[1].Level = pUVar2;
    (pFVar9->Actor).WeakPtr = FVar5;
    pFVar10[-1].Level = pUVar4;
    goto LAB_14843d390;
  }
  FVar5 = (pFVar12->Actor).WeakPtr;
  pUVar4 = pFVar12->Level;
  local_338._0_4_ = (int)local_338 + -1;
  (pFVar12->Actor).WeakPtr = FVar3;
  pFVar12->Level = pUVar2;
  (pFVar9->Actor).WeakPtr = FVar5;
  pFVar10[-1].Level = pUVar4;
  if ((longlong)((longlong)pFVar9 + (-0x10 - (longlong)pFVar12) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar11 - (longlong)pFVar13 & 0xfffffffffffffff0U)) {
    if (pFVar13 < pFVar11) {
      *ppFVar8 = pFVar13;
      ppFVar8[1] = pFVar11;
      *(int *)(ppFVar8 + 2) = (int)local_338;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar9 <= pFVar12 + 1) goto LAB_14843d464;
    pFVar11 = pFVar10 + -2;
    pFVar13 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar9) {
      *ppFVar8 = pFVar12;
      ppFVar8[1] = pFVar10 + -2;
      *(int *)(ppFVar8 + 2) = (int)local_338;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar11 <= pFVar13) goto LAB_14843d464;
  }
  iVar6 = (int)((longlong)pFVar11 - (longlong)pFVar13 >> 4) + 1;
  pFVar12 = pFVar13;
  if ((int)local_338 == 0) goto LAB_14843d453;
  goto LAB_14843d360;
}

// IsMaterialSkeletalMesh<FInstancedSkinnedMeshSceneProxyDesc> @ 14843d4f0

bool __cdecl
Nanite::Private::IsMaterialSkeletalMesh<FInstancedSkinnedMeshSceneProxyDesc>
          (FInstancedSkinnedMeshSceneProxyDesc *param_1)

{
  return true;
}

// IsMaterialSkeletalMesh<FSkinnedMeshSceneProxyDesc> @ 14843d500

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Nanite::Private::IsMaterialSkeletalMesh<FSkinnedMeshSceneProxyDesc>
          (FSkinnedMeshSceneProxyDesc *param_1)

{
  return true;
}

// IsMaterialSkeletalMesh<USkinnedMeshComponent> @ 14843d510

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Nanite::Private::IsMaterialSkeletalMesh<USkinnedMeshComponent>(USkinnedMeshComponent *param_1)

{
  return true;
}

// NewObject<ULevelStreamingDynamic> @ 14843d520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelStreamingDynamic * __cdecl
NewObject<ULevelStreamingDynamic>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  ULevelStreamingDynamic *pUVar2;
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
  pUVar1 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (ULevelStreamingDynamic *)
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

// Reverse<Nanite::FResources_*> @ 14843e240

void __cdecl AlgoImpl::Reverse<Nanite::FResources_*>(FResources **param_1,int param_2)

{
  FResources *pFVar1;
  FResources **ppFVar2;
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

// StaticEnum<enum_ENeuralModelTileType> @ 148440cc0

UEnum * __cdecl StaticEnum<enum_ENeuralModelTileType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralModelTileType,(UObject *)pUVar1,
                       L"ENeuralModelTileType");
  }
  return Z_Registration_Info_UEnum_ENeuralModelTileType.OuterSingleton;
}

// StaticEnum<enum_ENeuralProfileFormat> @ 148440d00

UEnum * __cdecl StaticEnum<enum_ENeuralProfileFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralProfileFormat,(UObject *)pUVar1,
                       L"ENeuralProfileFormat");
  }
  return Z_Registration_Info_UEnum_ENeuralProfileFormat.OuterSingleton;
}

// StaticEnum<enum_ENeuralProfileRuntimeType> @ 148440d40

UEnum * __cdecl StaticEnum<enum_ENeuralProfileRuntimeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENeuralProfileRuntimeType,(UObject *)pUVar1,
                       L"ENeuralProfileRuntimeType");
  }
  return Z_Registration_Info_UEnum_ENeuralProfileRuntimeType.OuterSingleton;
}

// StaticEnum<enum_ESpecularProfileFormat> @ 148440d80

UEnum * __cdecl StaticEnum<enum_ESpecularProfileFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESpecularProfileFormat,(UObject *)pUVar1,
                       L"ESpecularProfileFormat");
  }
  return Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton;
}

// StaticEnum<enum_ESubsurfaceImplementationTechniqueHint> @ 148440dc0

UEnum * __cdecl StaticEnum<enum_ESubsurfaceImplementationTechniqueHint>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubsurfaceImplementationTechniqueHint,
                       (UObject *)pUVar1,L"ESubsurfaceImplementationTechniqueHint");
  }
  return Z_Registration_Info_UEnum_ESubsurfaceImplementationTechniqueHint.OuterSingleton;
}

// StaticEnum<enum_ETileOverlapResolveType> @ 148440e00

UEnum * __cdecl StaticEnum<enum_ETileOverlapResolveType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETileOverlapResolveType,(UObject *)pUVar1,
                       L"ETileOverlapResolveType");
  }
  return Z_Registration_Info_UEnum_ETileOverlapResolveType.OuterSingleton;
}

// TrueForAllPages<`Nanite::FResources::ForEachPage<`Nanite::FStreamingManager::VerifyFixupState'::__l19::<lambda_1>_>'::__l2::<lambda_1>_> @ 148440e40

bool __thiscall
Nanite::FResources::
TrueForAllPages<_Nanite::FResources::ForEachPage<_Nanite::FStreamingManager::VerifyFixupState_::__l19::<lambda_1>_>_::__l2::<lambda_1>_>
          (FResources *this,FPageRangeKey param_1,<lambda_1> *param_2,bool param_3)

{
  FPageRangeKey FVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FPageRangeKey FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FPageRangeKey local_res10 [2];
  FString local_48;
  FString local_38;
  
  local_res10[0].Value = param_1.Value;
  if (param_3) {
    if ((param_1.Value >> 0x1e & 1) == 0) {
      return true;
    }
    FPageRangeKey::RemoveRootPages(local_res10,this->NumRootPages);
  }
  FVar4.Value = local_res10[0].Value;
  uVar8 = 0;
  if ((int)local_res10[0].Value < 0) {
    uVar11 = local_res10[0].Value & 0x1f;
    if (uVar11 != 0) {
      do {
        uVar7 = (FVar4.Value >> 5 & 0x1ffffff) + uVar8;
        uVar10 = 0;
        if ((int)uVar7 < (this->PageRangeLookup).ArrayNum) {
          uVar10 = ~uVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        FVar1.Value = *(uint *)((this->PageRangeLookup).AllocatorInstance.Data +
                               (longlong)(int)uVar7 * 4);
        if ((((FVar1.Value & 0x1f) == 0) || ((int)FVar1.Value < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!PageRange.IsEmpty() && !PageRange.IsMultiRange()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResources.h"
                               ,0x217,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        bVar5 = TrueForAllPages<_Nanite::FResources::ForEachPage<_Nanite::FStreamingManager::VerifyFixupState_::__l19::<lambda_1>_>_::__l2::<lambda_1>_>
                          (this,FVar1,param_2,param_3);
        if (!bVar5) {
          return false;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar11);
    }
  }
  else {
    uVar10 = local_res10[0].Value >> 5;
    uVar11 = local_res10[0].Value & 0x1f;
    if (uVar11 != 0) {
      do {
        puVar2 = *(undefined8 **)param_2;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_48,uVar8 + (uVar10 & 0x1ffffff));
        ::FString::ConcatFC(&local_38,&local_48,L", ");
        iVar9 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::AppendChars
                  ((FString *)*puVar2,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar9);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar11);
    }
  }
  return true;
}

// TrueForAllPages<`Nanite::FResources::ForEachPage<`Nanite::FStreamingManager::AddPendingGPURequests'::__l69::<lambda_1>_>'::__l2::<lambda_1>_> @ 148441040

bool __thiscall
Nanite::FResources::
TrueForAllPages<_Nanite::FResources::ForEachPage<_Nanite::FStreamingManager::AddPendingGPURequests_::__l69::<lambda_1>_>_::__l2::<lambda_1>_>
          (FResources *this,FPageRangeKey param_1,<lambda_1> *param_2,bool param_3)

{
  FPageRangeKey FVar1;
  code *pcVar2;
  FPageRangeKey FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FPageRangeKey local_res10 [2];
  
  local_res10[0].Value = param_1.Value;
  if (param_3) {
    if ((param_1.Value >> 0x1e & 1) == 0) {
      return true;
    }
    FPageRangeKey::RemoveRootPages(local_res10,this->NumRootPages);
  }
  FVar3.Value = local_res10[0].Value;
  uVar7 = 0;
  if ((int)local_res10[0].Value < 0) {
    uVar7 = 0;
    uVar9 = local_res10[0].Value & 0x1f;
    if (uVar9 != 0) {
      do {
        uVar6 = (FVar3.Value >> 5 & 0x1ffffff) + uVar7;
        uVar8 = 0;
        if ((int)uVar6 < (this->PageRangeLookup).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        FVar1.Value = *(uint *)((this->PageRangeLookup).AllocatorInstance.Data +
                               (longlong)(int)uVar6 * 4);
        if ((((FVar1.Value & 0x1f) == 0) || ((int)FVar1.Value < 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!PageRange.IsEmpty() && !PageRange.IsMultiRange()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResources.h"
                               ,0x217,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = TrueForAllPages<_Nanite::FResources::ForEachPage<_Nanite::FStreamingManager::AddPendingGPURequests_::__l69::<lambda_1>_>_::__l2::<lambda_1>_>
                          (this,FVar1,param_2,param_3);
        if (!bVar4) {
          return false;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
  }
  else {
    uVar9 = local_res10[0].Value >> 5;
    uVar8 = local_res10[0].Value & 0x1f;
    if (uVar8 != 0) {
      do {
        `Nanite::FStreamingManager::AddPendingGPURequests'::__l69::<lambda_1>::operator()
                  (*(void **)param_2,uVar7 + (uVar9 & 0x1ffffff));
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  return true;
}

// TrueForAllPages<`Nanite::FStreamingManager::ArePageDependenciesCommitted'::__l2::<lambda_1>_> @ 1484411d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
Nanite::FResources::
TrueForAllPages<_Nanite::FStreamingManager::ArePageDependenciesCommitted_::__l2::<lambda_1>_>
          (FResources *this,FPageRangeKey param_1,<lambda_1> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  FPageRangeKey FVar3;
  FStreamingManager *pFVar4;
  code *pcVar5;
  FPageRangeKey FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FPageRangeKey local_res10 [2];
  
  local_res10[0].Value = param_1.Value;
  if (param_3) {
    if ((param_1.Value >> 0x1e & 1) == 0) {
      return true;
    }
    FPageRangeKey::RemoveRootPages(local_res10,this->NumRootPages);
  }
  FVar6.Value = local_res10[0].Value;
  if ((int)local_res10[0].Value < 0) {
    uVar10 = 0;
    uVar12 = local_res10[0].Value & 0x1f;
    if (uVar12 != 0) {
      do {
        uVar9 = (FVar6.Value >> 5 & 0x1ffffff) + uVar10;
        uVar13 = 0;
        if ((int)uVar9 < (this->PageRangeLookup).ArrayNum) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        FVar3.Value = *(uint *)((this->PageRangeLookup).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 4);
        if ((((FVar3.Value & 0x1f) == 0) || ((int)FVar3.Value < 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!PageRange.IsEmpty() && !PageRange.IsMultiRange()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\NaniteResources.h"
                               ,0x217,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        bVar7 = TrueForAllPages<_Nanite::FStreamingManager::ArePageDependenciesCommitted_::__l2::<lambda_1>_>
                          (this,FVar3,param_2,param_3);
        if (!bVar7) {
          return false;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
    }
  }
  else {
    uVar13 = local_res10[0].Value >> 5 & 0x1ffffff;
    uVar12 = local_res10[0].Value & 0x1f;
    uVar10 = uVar13;
    if (uVar12 != 0) {
      do {
        if (uVar10 == param_2->PageToExclude) {
          return false;
        }
        pFVar4 = param_2->__this;
        uVar11 = param_2->VirtualPageRangeStart + uVar10;
        uVar9 = 0;
        if ((int)uVar11 < (pFVar4->ResidentVirtualPages).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar2 = *(ushort *)
                 ((pFVar4->ResidentVirtualPages).AllocatorInstance.Data + (longlong)(int)uVar11 * 2)
        ;
        if (uVar2 == 0xffff) {
          return false;
        }
        pFVar4 = param_2->__this;
        if (((pFVar4->ResidentPages).ArrayNum <= (int)(uint)uVar2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar1 = (pFVar4->ResidentPages).AllocatorInstance.Data + (ulonglong)uVar2 * 0xc;
        if (((*(uint *)pFVar1 != param_2->RuntimeResourceID) || (*(uint *)(pFVar1 + 4) != uVar10))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ResidentPages[ResidentPageIndex].Key == FPageKey(RuntimeResourceID, PageIndex)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteStreamingManager.cpp"
                                  ,0x434,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 - uVar13 < uVar12);
    }
  }
  return true;
}

// ~TFunction_OwnedObject<`FTexture2DResource::~FTexture2DResource'::__l2::<lambda_1>,1,0> @ 148444890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTexture2DResource::~FTexture2DResource'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FTexture2DResource::~FTexture2DResource_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTexture2DResource::~FTexture2DResource'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNeuralProfile::BeginDestroy'::__l2::<lambda_1>,1,0> @ 1484448b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNeuralProfile::BeginDestroy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNeuralProfile::BeginDestroy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNeuralProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USpecularProfile::BeginDestroy'::__l2::<lambda_1>,1,0> @ 1484448d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USpecularProfile::BeginDestroy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USpecularProfile::BeginDestroy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USpecularProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USubsurfaceProfile::BeginDestroy'::__l2::<lambda_1>,1,0> @ 1484448f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubsurfaceProfile::BeginDestroy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USubsurfaceProfile::BeginDestroy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubsurfaceProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1> @ 148444910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UNeuralProfile::PostEditChangeProperty_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USpecularProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1> @ 148444930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USpecularProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_USpecularProfile::PostEditChangeProperty_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USpecularProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>::
        _vftable_;
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor
            ((FRuntimeCurveLinearColor *)((longlong)this + 0x218));
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor
            ((FRuntimeCurveLinearColor *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`USubsurfaceProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1> @ 148444970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubsurfaceProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_USubsurfaceProfile::PostEditChangeProperty_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubsurfaceProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNeuralProfileModelTextureManager::RemoveProfile'::__l5::<lambda_1>,1,1> @ 148444990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNeuralProfileModelTextureManager::RemoveProfile'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNeuralProfileModelTextureManager::RemoveProfile_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__RemoveProfile_FNeuralProfileModelTextureManager__QEAAXPEBVUNeuralProfile___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::__l5::<lambda_2>,1,0> @ 1484449b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::__l5::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UNeuralProfile::PostEditChangeProperty_::__l5::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::`5'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FEdgeKey,`anonymous_namespace'::FTwinEdgeBuilder::FEdgeDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 148445400

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FEdgeKey,`anonymous_namespace'::FTwinEdgeBuilder::FEdgeDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FEdgeKey,_anonymous_namespace_::FTwinEdgeBuilder::FEdgeDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FEdgeKey,_anonymous_namespace_::FTwinEdgeBuilder::FEdgeDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator<< @ 148447e50

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat16Uvs<1> *param_2)

{
  FFloat16 *pFVar1;
  ushort *puVar2;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].X.Encoded = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[0].Y;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    pFVar1->Encoded = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
  return param_1;
}

// operator<< @ 148447f40

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat16Uvs<2> *param_2)

{
  FFloat16 *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[0].Y;
  puVar2 = &param_1->field_0x2a;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)(param_2->UVs + 1));
    }
  }
  else {
    param_2->UVs[1].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[1].Y;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  return param_1;
}

// operator<< @ 1484480b0

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat16Uvs<3> *param_2)

{
  FFloat16 *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[0].Y;
  puVar2 = &param_1->field_0x2a;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)(param_2->UVs + 1));
    }
  }
  else {
    param_2->UVs[1].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[1].Y;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)(param_2->UVs + 2));
    }
  }
  else {
    param_2->UVs[2].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[2].Y;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  return param_1;
}

// operator<< @ 1484482b0

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat16Uvs<4> *param_2)

{
  FFloat16 *pFVar1;
  FVector2DHalf *pFVar2;
  ushort *puVar3;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[0].Y;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)(param_2->UVs + 1));
    }
  }
  else {
    param_2->UVs[1].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[1].Y;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)(param_2->UVs + 2));
    }
  }
  else {
    param_2->UVs[2].X.Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[2].Y;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
    }
  }
  else {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar2 = param_2->UVs + 3;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar2);
    }
  }
  else {
    (pFVar2->X).Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->UVs[3].Y;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    pFVar1->Encoded = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
  return param_1;
}

// operator<< @ 148448560

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat32Uvs<1> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].field0_0x0._s_0.X = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->UVs[0].field0_0x0._s_0.Y;
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

// operator<< @ 148448650

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat32Uvs<2> *param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[0].field0_0x0._s_0.Y;
  puVar1 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)(param_2->UVs + 1));
    }
  }
  else {
    param_2->UVs[1].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[1].field0_0x0._s_0.Y;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return param_1;
}

// operator<< @ 1484487c0

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat32Uvs<3> *param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[0].field0_0x0._s_0.Y;
  puVar1 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)(param_2->UVs + 1));
    }
  }
  else {
    param_2->UVs[1].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[1].field0_0x0._s_0.Y;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)(param_2->UVs + 2));
    }
  }
  else {
    param_2->UVs[2].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[2].field0_0x0._s_0.Y;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return param_1;
}

// operator<< @ 1484489b0

FArchive * __cdecl operator<<(FArchive *param_1,TGPUSkinVertexFloat32Uvs<4> *param_2)

{
  TVector2<float> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  
  TGPUSkinVertexBase::Serialize((TGPUSkinVertexBase *)param_2,param_1);
  UE::Math::operator<<(param_1,&param_2->Position);
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2->UVs);
    }
  }
  else {
    param_2->UVs[0].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[0].field0_0x0._s_0.Y;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)(param_2->UVs + 1));
    }
  }
  else {
    param_2->UVs[1].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[1].field0_0x0._s_0.Y;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->UVs + 2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)(param_2->UVs + 2));
    }
  }
  else {
    param_2->UVs[2].field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[2].field0_0x0._s_0.Y;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pTVar1 = param_2->UVs + 3;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
    }
  }
  else {
    (pTVar1->field0_0x0)._s_0.X = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->UVs[3].field0_0x0._s_0.Y;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
  return param_1;
}

// operator<< @ 148448c50

FArchive * __cdecl operator<<(FArchive *param_1,TLegacySkinWeightInfo<1,unsigned_char> *param_2)

{
  longlong *plVar1;
  uchar *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  TLegacySkinWeightInfo<1,unsigned_char> *pTVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  lVar5 = 8;
  lVar4 = 8;
  pTVar6 = param_2;
  do {
    if ((param_1->field_0x28 & 1) == 0) {
LAB_148448ce5:
      puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
      if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar6,1);
      }
      else {
        pTVar6->InfluenceBones[0] = *puVar7;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
    }
    else {
      iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
      if (3 < iVar3) goto LAB_148448ce5;
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = '\0';
      if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
        pTVar6->InfluenceBones[0] = local_res8[0];
      }
      else {
        local_res8[0] = *(uchar *)*plVar1;
        *plVar1 = *plVar1 + 1;
        pTVar6->InfluenceBones[0] = local_res8[0];
      }
    }
    pTVar6 = (TLegacySkinWeightInfo<1,unsigned_char> *)(pTVar6->InfluenceBones + 1);
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      puVar7 = param_2->InfluenceWeights;
      do {
        puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
        if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,1);
        }
        else {
          *puVar7 = *puVar2;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar7 = puVar7 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      return param_1;
    }
  } while( true );
}

// operator<< @ 148448d90

FArchive * __cdecl operator<<(FArchive *param_1,TLegacySkinWeightInfo<1,unsigned_short> *param_2)

{
  longlong *plVar1;
  ushort *puVar2;
  uchar *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TLegacySkinWeightInfo<1,unsigned_short> *pTVar7;
  uchar *puVar8;
  byte local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  lVar6 = 8;
  lVar5 = 8;
  pTVar7 = param_2;
  do {
    if ((param_1->field_0x28 & 1) == 0) {
LAB_148448e27:
      puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
      if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar7,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,pTVar7->InfluenceBones);
        }
      }
      else {
        pTVar7->InfluenceBones[0] = *puVar2;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
      }
    }
    else {
      iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
      if (3 < iVar4) goto LAB_148448e27;
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = 0;
      if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
        pTVar7->InfluenceBones[0] = (ushort)local_res8[0];
      }
      else {
        local_res8[0] = *(byte *)*plVar1;
        *plVar1 = *plVar1 + 1;
        pTVar7->InfluenceBones[0] = (ushort)local_res8[0];
      }
    }
    pTVar7 = (TLegacySkinWeightInfo<1,unsigned_short> *)(pTVar7->InfluenceBones + 1);
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      puVar8 = param_2->InfluenceWeights;
      do {
        puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
        if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,1);
        }
        else {
          *puVar8 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar8 = puVar8 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return param_1;
    }
  } while( true );
}

// operator<< @ 148448ee0

FArchive * __cdecl operator<<(FArchive *param_1,TLegacySkinWeightInfo<0,unsigned_char> *param_2)

{
  longlong *plVar1;
  uchar *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  TLegacySkinWeightInfo<0,unsigned_char> *pTVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  lVar5 = 4;
  lVar4 = 4;
  pTVar6 = param_2;
  do {
    if ((param_1->field_0x28 & 1) == 0) {
LAB_148448f74:
      puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
      if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar6,1);
      }
      else {
        pTVar6->InfluenceBones[0] = *puVar7;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
    }
    else {
      iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
      if (3 < iVar3) goto LAB_148448f74;
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = '\0';
      if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
        pTVar6->InfluenceBones[0] = local_res8[0];
      }
      else {
        local_res8[0] = *(uchar *)*plVar1;
        *plVar1 = *plVar1 + 1;
        pTVar6->InfluenceBones[0] = local_res8[0];
      }
    }
    pTVar6 = (TLegacySkinWeightInfo<0,unsigned_char> *)(pTVar6->InfluenceBones + 1);
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      puVar7 = param_2->InfluenceWeights;
      do {
        puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
        if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,1);
        }
        else {
          *puVar7 = *puVar2;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar7 = puVar7 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      return param_1;
    }
  } while( true );
}

// operator<< @ 148449020

FArchive * __cdecl operator<<(FArchive *param_1,TLegacySkinWeightInfo<0,unsigned_short> *param_2)

{
  longlong *plVar1;
  ushort *puVar2;
  uchar *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  TLegacySkinWeightInfo<0,unsigned_short> *pTVar7;
  uchar *puVar8;
  byte local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  lVar6 = 4;
  lVar5 = 4;
  pTVar7 = param_2;
  do {
    if ((param_1->field_0x28 & 1) == 0) {
LAB_1484490b6:
      puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
      if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar7,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,pTVar7->InfluenceBones);
        }
      }
      else {
        pTVar7->InfluenceBones[0] = *puVar2;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
      }
    }
    else {
      iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
      if (3 < iVar4) goto LAB_1484490b6;
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = 0;
      if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
        pTVar7->InfluenceBones[0] = (ushort)local_res8[0];
      }
      else {
        local_res8[0] = *(byte *)*plVar1;
        *plVar1 = *plVar1 + 1;
        pTVar7->InfluenceBones[0] = (ushort)local_res8[0];
      }
    }
    pTVar7 = (TLegacySkinWeightInfo<0,unsigned_short> *)(pTVar7->InfluenceBones + 1);
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      puVar8 = param_2->InfluenceWeights;
      do {
        puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
        if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,1);
        }
        else {
          *puVar8 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar8 = puVar8 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return param_1;
    }
  } while( true );
}

// operator<< @ 148449170

FArchive * __cdecl operator<<(FArchive *param_1,FVector2DHalf *param_2)

{
  FFloat16 *pFVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2);
    }
  }
  else {
    (param_2->X).Encoded = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pFVar1 = &param_2->Y;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    pFVar1->Encoded = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Encoded);
  return param_1;
}

// operator<< @ 148449240

/* WARNING: Enum "EUnrealEngineObjectUE4Version": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FDummySkeletalMeshVertexBuffer *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  FSkeletalMeshVertexDataInterface *pFVar5;
  int iVar6;
  uint uVar7;
  FPackageFileVersion FVar8;
  FArchive *pFVar9;
  uchar *puVar10;
  FStripDataFlags local_res8 [4];
  uint local_res10 [2];
  uint local_res18 [2];
  ForAnyElementType local_48;
  int local_40 [2];
  TVector<double> local_38;
  
  FVar8 = FPackageFileVersion::CreateUE4Version((EUnrealEngineObjectUE4Version)local_res10);
  FStripDataFlags::FStripDataFlags(local_res8,param_1,'\0',(FPackageFileVersion *)FVar8);
  puVar1 = &param_2->NumTexCoords;
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
  operator<<(param_1,&param_2->bUseFullPrecisionUVs);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSkeletalMeshCustomVersion::GUID);
  puVar10 = (uchar *)0x0;
  if ((0x14d < *(int *)&param_1->field_0x40) &&
     (iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSkeletalMeshCustomVersion::GUID),
     iVar6 < 7)) {
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    if (puVar3[1] < *puVar3 + 4) {
      local_res10[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
  }
  pFVar9 = UE::Math::operator<<(param_1,&local_38);
  UE::Math::operator<<(pFVar9,&local_38);
  if ((param_1->field_0x28 & 1) != 0) {
    FDummySkeletalMeshVertexBuffer::AllocateData(param_2);
  }
  if (((local_res8[0].GlobalStripFlags & 2) == 0) || ((param_1->field_0x2b & 4) != 0)) {
    if (((param_1->field_0x28 & 1) != 0) &&
       (iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSkeletalMeshCustomVersion::GUID)
       , iVar6 < 7)) {
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res10);
        }
      }
      else {
        local_res10[0] = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40[0] = 0;
      local_40[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res10[0] * local_res18[0],&local_48,local_40,local_40 + 1);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,local_48.Data,(longlong)(int)(local_res10[0] * local_res18[0]));
      if (local_48.Data == (FScriptContainerElement *)0x0) {
        return param_1;
      }
      FMemory::Free(local_48.Data);
      return param_1;
    }
    pFVar5 = param_2->VertexData;
    if (pFVar5 != (FSkeletalMeshVertexDataInterface *)0x0) {
      (**(code **)((longlong)*pFVar5 + 0x30))(pFVar5,param_1);
      uVar7 = (**(code **)((longlong)*param_2->VertexData + 0x20))();
      param_2->NumVertices = uVar7;
      if (uVar7 != 0) {
        puVar10 = (uchar *)(**(code **)((longlong)*param_2->VertexData + 0x18))();
      }
      param_2->Data = puVar10;
      uVar7 = (**(code **)((longlong)*param_2->VertexData + 0x10))();
      param_2->Stride = uVar7;
    }
  }
  return param_1;
}

// operator<< @ 1484494d0

FArchive * __cdecl operator<<(FArchive *param_1,FSkeletalMeshHalfEdgeBuffer *param_2)

{
  TArray<int,TMemoryImageAllocator<0>_> *pTVar1;
  
  pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)&(param_2->VertexToEdgeData)._padding_;
  if (param_2 == (FSkeletalMeshHalfEdgeBuffer *)0xffffffffffffffe0) {
    pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)0x0;
  }
  TArrayPrivateFriend::Serialize<int,TMemoryImageAllocator<0>_>(param_1,pTVar1);
  pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)&(param_2->EdgeToTwinEdgeData)._padding_;
  if (param_2 == (FSkeletalMeshHalfEdgeBuffer *)0xffffffffffffffc0) {
    pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)0x0;
  }
  TArrayPrivateFriend::Serialize<int,TMemoryImageAllocator<0>_>(param_1,pTVar1);
  return param_1;
}

// operator<< @ 148449530

/* WARNING: Enum "EUnrealEngineObjectUE4Version": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FSkeletalMeshVertexClothBuffer *param_2)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  uint uVar2;
  FPackageFileVersion FVar3;
  uchar *puVar4;
  FStripDataFlags local_res8 [4];
  undefined1 local_res18 [16];
  
  FVar3 = FPackageFileVersion::CreateUE4Version((EUnrealEngineObjectUE4Version)local_res18);
  FStripDataFlags::FStripDataFlags(local_res8,param_1,'\0',(FPackageFileVersion *)FVar3);
  if ((param_1->field_0x28 & 1) != 0) {
    FSkeletalMeshVertexClothBuffer::AllocateData(param_2);
  }
  if (((local_res8[0].GlobalStripFlags & 2) == 0) || ((param_1->field_0x2b & 4) != 0)) {
    pFVar1 = param_2->VertexData;
    if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
      (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,param_1);
      uVar2 = (**(code **)((longlong)*param_2->VertexData + 0x20))();
      param_2->NumVertices = uVar2;
      if (uVar2 == 0) {
        puVar4 = (uchar *)0x0;
      }
      else {
        puVar4 = (uchar *)(**(code **)((longlong)*param_2->VertexData + 0x18))();
      }
      param_2->Data = puVar4;
      uVar2 = (**(code **)((longlong)*param_2->VertexData + 0x10))();
      param_2->Stride = uVar2;
    }
    TArrayPrivateFriend::Serialize<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->ClothIndexMapping);
  }
  return param_1;
}

// operator<< @ 1484495e0

FArchive * __cdecl operator<<(FArchive *param_1,FSkinWeightDataVertexBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  FArchive *pFVar6;
  void *_Src;
  void *_Dst;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  FStripDataFlags local_res8 [4];
  
  FStripDataFlags::FStripDataFlags(local_res8,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  FSkinWeightDataVertexBuffer::SerializeMetaData(param_2,param_1);
  if (((param_1->field_0x28 & 1) != 0) ||
     (param_2->WeightData == (FStaticMeshVertexDataInterface *)0x0)) {
    FSkinWeightDataVertexBuffer::AllocateData(param_2);
  }
  if ((((local_res8[0].GlobalStripFlags & 2) == 0) || ((param_1->field_0x2b & 4) != 0)) &&
     (param_2->WeightData != (FStaticMeshVertexDataInterface *)0x0)) {
    plVar8 = (longlong *)0x0;
    if (((param_1->field_0x28 & 1) == 0) ||
       (iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID),
       4 < iVar3)) {
      (**(code **)((longlong)*param_2->WeightData + 0x40))(param_2->WeightData,param_1,0);
    }
    else {
      plVar7 = plVar8;
      if (param_2->MaxBoneInfluences < 5) {
        if (param_2->bUse16BitBoneIndex == false) {
          plVar5 = operator_new(0x28);
          if (plVar5 != (longlong *)0x0) {
            *(bool *)(plVar5 + 4) = param_2->bNeedsCPUAccess;
            *plVar5 = (longlong)&___7__FSkinWeightVertexData_U__TLegacySkinWeightInfo__0A_E____6B_;
            plVar5[1] = (longlong)&___7__TResourceArray_U__TLegacySkinWeightInfo__0A_E___0A___6B_;
            plVar5[3] = 0;
            plVar5[2] = 0;
            plVar7 = plVar5;
          }
        }
        else {
          plVar5 = operator_new(0x28);
          if (plVar5 != (longlong *)0x0) {
            *(bool *)(plVar5 + 4) = param_2->bNeedsCPUAccess;
            *plVar5 = (longlong)&___7__FSkinWeightVertexData_U__TLegacySkinWeightInfo__0A_G____6B_;
            plVar5[1] = (longlong)&___7__TResourceArray_U__TLegacySkinWeightInfo__0A_G___0A___6B_;
            plVar5[3] = 0;
            plVar5[2] = 0;
            plVar7 = plVar5;
          }
        }
      }
      else if (param_2->bUse16BitBoneIndex == false) {
        plVar5 = operator_new(0x28);
        if (plVar5 != (longlong *)0x0) {
          *(bool *)(plVar5 + 4) = param_2->bNeedsCPUAccess;
          *plVar5 = (longlong)&___7__FSkinWeightVertexData_U__TLegacySkinWeightInfo__00E____6B_;
          plVar5[1] = (longlong)&___7__TResourceArray_U__TLegacySkinWeightInfo__00E___0A___6B_;
          plVar5[3] = 0;
          plVar5[2] = 0;
          plVar7 = plVar5;
        }
      }
      else {
        plVar5 = operator_new(0x28);
        if (plVar5 != (longlong *)0x0) {
          *(bool *)(plVar5 + 4) = param_2->bNeedsCPUAccess;
          *plVar5 = (longlong)&___7__FSkinWeightVertexData_U__TLegacySkinWeightInfo__00G____6B_;
          plVar5[1] = (longlong)&___7__TResourceArray_U__TLegacySkinWeightInfo__00G___0A___6B_;
          plVar5[3] = 0;
          plVar5[2] = 0;
          plVar7 = plVar5;
        }
      }
      if (((param_1->field_0x28 & 1) == 0) ||
         (iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID),
         3 < iVar3)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,param_1,uVar9);
      plVar5 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if ((((uint)(param_2->bUse16BitBoneWeight != false) +
           (param_2->bUse16BitBoneIndex != false) + 2) * param_2->NumBoneWeights != uVar4) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("VertexBuffer.GetVertexDataSize() == BufferSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
                             ,0x142,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar1)();
        return pFVar6;
      }
      (**(code **)((longlong)*param_2->WeightData + 8))(param_2->WeightData,(ulonglong)uVar4,0);
      _Src = (void *)(**(code **)(*plVar7 + 0x30))(plVar7);
      _Dst = (void *)(**(code **)((longlong)*param_2->WeightData + 0x30))();
      memcpy(_Dst,_Src,(ulonglong)uVar4);
      uVar4 = (**(code **)(*plVar7 + 0x28))(plVar7);
      param_2->NumVertices = uVar4;
      (**(code **)*plVar7)(plVar7,1);
    }
    if ((param_1->field_0x2b & 4) == 0) {
      if (param_2->NumBoneWeights != 0) {
        plVar7 = (longlong *)(**(code **)((longlong)*param_2->WeightData + 0x38))();
        iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
        if (iVar3 != 0) {
          plVar8 = (longlong *)(**(code **)((longlong)*param_2->WeightData + 0x30))();
        }
      }
      param_2->Data = (uchar *)plVar8;
    }
  }
  return param_1;
}

// operator<< @ 1484498d0

FArchive * __cdecl operator<<(FArchive *param_1,FSkinWeightLookupVertexBuffer *param_2)

{
  int iVar1;
  longlong *plVar2;
  uchar *puVar3;
  FStripDataFlags local_res8 [4];
  
  FStripDataFlags::FStripDataFlags(local_res8,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  FSkinWeightLookupVertexBuffer::SerializeMetaData(param_2,param_1);
  if (((param_1->field_0x28 & 1) != 0) ||
     (param_2->LookupData == (FStaticMeshVertexDataInterface *)0x0)) {
    FSkinWeightLookupVertexBuffer::AllocateData(param_2);
  }
  if (((local_res8[0].GlobalStripFlags & 2) != 0) && ((param_1->field_0x2b & 4) == 0)) {
    return param_1;
  }
  if (param_2->LookupData == (FStaticMeshVertexDataInterface *)0x0) {
    return param_1;
  }
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (4 < iVar1) {
    (**(code **)((longlong)*param_2->LookupData + 0x40))(param_2->LookupData,param_1,0);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    return param_1;
  }
  if (param_2->NumVertices != 0) {
    plVar2 = (longlong *)(**(code **)((longlong)*param_2->LookupData + 0x38))();
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar1 != 0) {
      puVar3 = (uchar *)(**(code **)((longlong)*param_2->LookupData + 0x30))();
      goto LAB_1484499a2;
    }
  }
  puVar3 = (uchar *)0x0;
LAB_1484499a2:
  param_2->Data = puVar3;
  return param_1;
}

// operator<< @ 1484499d0

FArchive * __cdecl operator<<(FArchive *param_1,FSkinWeightVertexBuffer *param_2)

{
  uint uVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uchar *puVar5;
  longlong *plVar6;
  uchar *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FStripDataFlags local_res8 [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  operator<<(param_1,&param_2->DataVertexBuffer);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID),
     iVar4 < 5)) {
    uVar1 = (param_2->DataVertexBuffer).MaxBoneInfluences;
    uVar3 = (ulonglong)(param_2->DataVertexBuffer).NumBoneWeights / (ulonglong)uVar1;
    FSkinWeightLookupVertexBuffer::AllocateData(&param_2->LookupVertexBuffer);
    pFVar2 = (param_2->LookupVertexBuffer).LookupData;
    uVar10 = (uint)uVar3;
    (param_2->LookupVertexBuffer).NumVertices = uVar10;
    (**(code **)((longlong)*pFVar2 + 8))(pFVar2,uVar3,0);
    puVar7 = (uchar *)0x0;
    puVar5 = puVar7;
    if ((param_2->LookupVertexBuffer).NumVertices != 0) {
      puVar5 = (uchar *)(**(code **)((longlong)*(param_2->LookupVertexBuffer).LookupData + 0x30))();
    }
    (param_2->LookupVertexBuffer).Data = puVar5;
    puVar5 = puVar7;
    if (uVar10 != 0) {
      do {
        iVar4 = (int)puVar7;
        uVar8 = iVar4 + 1;
        puVar7 = (uchar *)(ulonglong)uVar8;
        iVar9 = (int)puVar5;
        puVar5 = (uchar *)(ulonglong)(iVar9 + uVar1);
        *(uint *)((param_2->LookupVertexBuffer).Data + (uint)(iVar4 * 4)) =
             ((uint)((param_2->DataVertexBuffer).bUse16BitBoneWeight != false) +
             ((param_2->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * iVar9 * 0x100 | uVar1;
      } while (uVar8 < uVar10);
    }
    return param_1;
  }
  FStripDataFlags::FStripDataFlags(local_res8,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  FSkinWeightLookupVertexBuffer::SerializeMetaData(&param_2->LookupVertexBuffer,param_1);
  if (((param_1->field_0x28 & 1) != 0) ||
     ((param_2->LookupVertexBuffer).LookupData == (FStaticMeshVertexDataInterface *)0x0)) {
    FSkinWeightLookupVertexBuffer::AllocateData(&param_2->LookupVertexBuffer);
  }
  if ((((local_res8[0].GlobalStripFlags & 2) == 0) || ((param_1->field_0x2b & 4) != 0)) &&
     ((param_2->LookupVertexBuffer).LookupData != (FStaticMeshVertexDataInterface *)0x0)) {
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
    if (4 < iVar4) {
      pFVar2 = (param_2->LookupVertexBuffer).LookupData;
      (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2,param_1,0);
    }
    if ((param_1->field_0x2b & 4) == 0) {
      if ((param_2->LookupVertexBuffer).NumVertices != 0) {
        plVar6 = (longlong *)
                 (**(code **)((longlong)*(param_2->LookupVertexBuffer).LookupData + 0x38))();
        iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if (iVar4 != 0) {
          puVar5 = (uchar *)(**(code **)((longlong)*(param_2->LookupVertexBuffer).LookupData + 0x30)
                            )();
          (param_2->LookupVertexBuffer).Data = puVar5;
          return param_1;
        }
      }
      (param_2->LookupVertexBuffer).Data = (uchar *)0x0;
    }
  }
  return param_1;
}

// operator() @ 14844a650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall <lambda_26>::operator()(<lambda_26> *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [32];
  code *local_e8 [2];
  undefined **local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  FGlobalComponentRecreateRenderStateContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext(&local_78);
  local_c0 = (undefined ***)0x0;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_d0 = `<lambda_26>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_<lambda_26>::operator()_::__l2::TSTR_RayTracingToggledCmd37>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_b8._0_8_ = local_e8[0];
    local_90 = local_c0;
    local_a8 = local_d8;
    pcStack_a0 = pcStack_d0;
    local_98 = local_c8;
    local_e8[0] = (code *)0x0;
    local_88 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`<lambda_26>::operator()'::__l2::TSTR_RayTracingToggledCmd37>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar3);
    uVar5 = (ulonglong)local_88;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_b8 + 0x10);
        if (local_90 != (undefined ***)0x0) {
          pppuVar4 = local_90;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_b8);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    pppuVar4 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar4 = local_c0;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(&local_78)
  ;
  return;
}

// operator() @ 14844a7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall <lambda_27>::operator()(<lambda_27> *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [32];
  code *local_e8 [2];
  undefined **local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  FGlobalComponentRecreateRenderStateContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext(&local_78);
  local_c0 = (undefined ***)0x0;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_d0 = `<lambda_27>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_<lambda_27>::operator()_::__l2::TSTR_RayTracingToggledCmd54>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_b8._0_8_ = local_e8[0];
    local_90 = local_c0;
    local_a8 = local_d8;
    pcStack_a0 = pcStack_d0;
    local_98 = local_c8;
    local_e8[0] = (code *)0x0;
    local_88 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`<lambda_27>::operator()'::__l2::TSTR_RayTracingToggledCmd54>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar3);
    uVar5 = (ulonglong)local_88;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_b8 + 0x10);
        if (local_90 != (undefined ***)0x0) {
          pppuVar4 = local_90;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_b8);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    pppuVar4 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar4 = local_c0;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(&local_78)
  ;
  return;
}

// operator() @ 14844a950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall <lambda_28>::operator()(<lambda_28> *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_70 = `<lambda_28>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_<lambda_28>::operator()_::__l2::TSTR_RefreshAlwaysResidentRayTracingGeometriesCmd100>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pcStack_40 = pcStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`<lambda_28>::operator()'::__l2::TSTR_RefreshAlwaysResidentRayTracingGeometriesCmd100>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844ab70

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat16Uvs<1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844ab80

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat16Uvs<2> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844ab90

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat16Uvs<3> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844aba0

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat16Uvs<4> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844abb0

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat32Uvs<1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844abc0

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat32Uvs<2> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844abd0

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat32Uvs<3> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844abe0

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   TGPUSkinVertexFloat32Uvs<4> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844abf0

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   FMeshToMeshVertData>::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<FMeshToMeshVertData> *)&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14844ac00

/* [thunk]:public: virtual void * __ptr64 __cdecl FSkeletalMeshVertexAttributeData::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSkeletalMeshVertexAttributeData::_vector_deleting_destructor__adjustor_8__
          (FSkeletalMeshVertexAttributeData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSkeletalMeshVertexAttributeData *)&this[-1].Stride,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14844ac10

/* [thunk]:public: virtual void * __ptr64 __cdecl UReplayNetConnection::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UReplayNetConnection::_vector_deleting_destructor__adjustor_40__
          (UReplayNetConnection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UReplayNetConnection *)&this[-1].ReplayHelper.field_0xa58,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14844ac20

void * __thiscall
FSkinWeightVertexData<unsigned_char>::_scalar_deleting_destructor_
          (FSkinWeightVertexData<unsigned_char> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  *(undefined ***)&this->field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)this = &___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ac80

void * __thiscall
FSkinWeightVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::_scalar_deleting_destructor_
          (FSkinWeightVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  *(undefined ***)&this->field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)this = &___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ace0

void * __thiscall
FSkinWeightVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::_scalar_deleting_destructor_
          (FSkinWeightVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  *(undefined ***)&this->field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)this = &___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ad40

void * __thiscall
FSkinWeightVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::_scalar_deleting_destructor_
          (FSkinWeightVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  *(undefined ***)&this->field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)this = &___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ada0

void * __thiscall
FSkinWeightVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::_scalar_deleting_destructor_
          (FSkinWeightVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  *(undefined ***)&this->field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)this = &___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ae00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRayTracingGeometryManager::FRayTracingGeometryManager'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ae30

void * __thiscall
TBaseRawMethodDelegateInstance<0,FReplayHelper,void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FReplayHelper,void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ae60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FReplayHelper,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FReplayHelper,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844ae90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UReplayNetConnection,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UReplayNetConnection,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844aec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTexture2DResource::~FTexture2DResource'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTexture2DResource::~FTexture2DResource'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844af00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNeuralProfile::BeginDestroy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNeuralProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844af40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USpecularProfile::BeginDestroy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USpecularProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844af80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubsurfaceProfile::BeginDestroy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubsurfaceProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844afc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USpecularProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USpecularProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>::
        _vftable_;
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor
            ((FRuntimeCurveLinearColor *)((longlong)this + 0x218));
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor
            ((FRuntimeCurveLinearColor *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubsurfaceProfile::PostEditChangeProperty'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USubsurfaceProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNeuralProfileModelTextureManager::RemoveProfile'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__RemoveProfile_FNeuralProfileModelTextureManager__QEAAXPEBVUNeuralProfile___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b0e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::__l5::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::`5'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b120

void * __thiscall
TGraphTask<Nanite::FStreamingUpdateTask>::_scalar_deleting_destructor_
          (TGraphTask<Nanite::FStreamingUpdateTask> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844b180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<Nanite::FMemcpy_CS::FParameters>::_scalar_deleting_destructor_
          (TObject<Nanite::FMemcpy_CS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b1b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSSProfilePreIntegratedPS::FParameters>::_scalar_deleting_destructor_
          (TObject<FSSProfilePreIntegratedPS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b1e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSpecularProfileConvolveCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FSpecularProfileConvolveCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b210

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSpecularProfileCopyCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FSpecularProfileCopyCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b240

void * __thiscall
TRDGLambdaPass<FSSProfilePreIntegratedPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FSSProfilePreIntegratedPS>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b2a0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>'::__l2::<lambda_1>_>::
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b300

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FSpecularProfileConvolveCS>'::__l2::<lambda_1>_>::
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b360

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FSpecularProfileCopyCS>'::__l2::<lambda_1>_>::
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b3c0

void * __thiscall
TResourceArray<int,0>::_scalar_deleting_destructor_(TResourceArray<int,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b410

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b460

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b4b0

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b500

void * __thiscall
TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b550

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b5a0

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b5f0

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b640

void * __thiscall
TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>::_scalar_deleting_destructor_
          (TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b690

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>::_scalar_deleting_destructor_
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b6e0

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>::_scalar_deleting_destructor_
          (TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b730

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>::_scalar_deleting_destructor_
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b780

void * __thiscall
TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>::_scalar_deleting_destructor_
          (TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b7d0

void * __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>::_scalar_deleting_destructor_
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b820

void * __thiscall
TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>::_scalar_deleting_destructor_
          (TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b870

void * __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>::
_scalar_deleting_destructor_
          (TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0> *this,
          uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b8c0

void * __thiscall
TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>::_scalar_deleting_destructor_
          (TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b910

void * __thiscall
TResourceArray<FMeshToMeshVertData,0>::_scalar_deleting_destructor_
          (TResourceArray<FMeshToMeshVertData,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844b960

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844b9c0

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844ba20

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844ba80

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844bae0

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844bb40

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844bba0

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844bc00

void * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844bc60

void * __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844bcc0

void * __thiscall
TStaticMeshVertexData<unsigned_char>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<unsigned_char> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844bd20

void * __thiscall
TStaticMeshVertexData<unsigned_int>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<unsigned_int> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844bd80

void * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844bde0

void * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844be40

void * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844bea0

void * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844bf00

void * __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844bf60

void * __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844bfc0

void * __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::
_scalar_deleting_destructor_
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this,
          uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c020

void * __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::_scalar_deleting_destructor_
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FStaticMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c080

void * __thiscall
FRayTracingGeometryManager::_scalar_deleting_destructor_
          (FRayTracingGeometryManager *this,uint param_1)

{
  ~FRayTracingGeometryManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c0c0

void * __thiscall
FReplayResultHandler::_scalar_deleting_destructor_(FReplayResultHandler *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c0f0

void * __thiscall
FSkeletalMeshHalfEdgeBuffer::_scalar_deleting_destructor_
          (FSkeletalMeshHalfEdgeBuffer *this,uint param_1)

{
  ~FSkeletalMeshHalfEdgeBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c130

void * __thiscall
FSkeletalMeshVertexAttributeData::_scalar_deleting_destructor_
          (FSkeletalMeshVertexAttributeData *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this->_padding_ = (longlong)&___7FSkeletalMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c190

void * __thiscall
FSkeletalMeshVertexClothBuffer::_scalar_deleting_destructor_
          (FSkeletalMeshVertexClothBuffer *this,uint param_1)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  FScriptContainerElement *pFVar2;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshVertexClothBuffer__6B_;
  pFVar1 = this->VertexData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  pFVar2 = (this->ClothIndexMapping).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c210

void * __thiscall
FSkinWeightDataVertexBuffer::_scalar_deleting_destructor_
          (FSkinWeightDataVertexBuffer *this,uint param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSkinWeightDataVertexBuffer__6B_;
  pFVar1 = this->WeightData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  this_00 = (this->SRVValue).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c290

void * __thiscall
FSkinWeightLookupVertexBuffer::_scalar_deleting_destructor_
          (FSkinWeightLookupVertexBuffer *this,uint param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSkinWeightLookupVertexBuffer__6B_;
  pFVar1 = this->LookupData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  this_00 = (this->SRVValue).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c310

void * __thiscall
FSpecularProfileTextureManager::_scalar_deleting_destructor_
          (FSpecularProfileTextureManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSpecularProfileTextureManager__6B_;
  DestructItems<FSpecularProfileTextureManager::FProfileEntry,int>
            ((FProfileEntry *)(this->SpecularProfileEntries).AllocatorInstance.Data,
             (this->SpecularProfileEntries).ArrayNum);
  pFVar1 = (this->SpecularProfileEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c380

void * __thiscall
FStaticMeshVertexBuffer::_scalar_deleting_destructor_(FStaticMeshVertexBuffer *this,uint param_1)

{
  ~FStaticMeshVertexBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c3c0

void * __thiscall
FStreamableTextureResource::_scalar_deleting_destructor_
          (FStreamableTextureResource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c420

void * __thiscall
FStreamableTextureScopedDebugInfo::_scalar_deleting_destructor_
          (FStreamableTextureScopedDebugInfo *this,uint param_1)

{
  FScopedDebugInfo::~FScopedDebugInfo((FScopedDebugInfo *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
Nanite::FStreamingManager::_scalar_deleting_destructor_(FStreamingManager *this,uint param_1)

{
  ~FStreamingManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x718);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c4a0

void * __thiscall
FSubsurfaceProfileTexture::_scalar_deleting_destructor_
          (FSubsurfaceProfileTexture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSubsurfaceProfileTexture__6B_;
  pFVar1 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c500

void * __thiscall
FStaticMeshVertexBuffer::FTangentsVertexBuffer::_scalar_deleting_destructor_
          (FTangentsVertexBuffer *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c540

void * __thiscall
FStaticMeshVertexBuffer::FTexcoordVertexBuffer::_scalar_deleting_destructor_
          (FTexcoordVertexBuffer *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c580

void * __thiscall
FTexture2DArrayResource::_scalar_deleting_destructor_(FTexture2DArrayResource *this,uint param_1)

{
  ForElementType<FUniqueBuffer> FVar1;
  
  FVar1 = (this->AllMipsData).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FUniqueBuffer>)0x0) {
    FVar1 = (ForElementType<FUniqueBuffer>)&this->AllMipsData;
  }
  DestructItems<FUniqueBuffer,int>((FUniqueBuffer *)FVar1,(this->AllMipsData).ArrayNum);
  FVar1 = (this->AllMipsData).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FUniqueBuffer>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c610

void * __thiscall
FTexture2DResource::_scalar_deleting_destructor_(FTexture2DResource *this,uint param_1)

{
  ~FTexture2DResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c650

void * __thiscall
FTexture3DResource::_scalar_deleting_destructor_(FTexture3DResource *this,uint param_1)

{
  FVolumeTextureBulkData::~FVolumeTextureBulkData(&this->InitialData);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c6c0

void * __thiscall
FVolumeTextureBulkData::_scalar_deleting_destructor_(FVolumeTextureBulkData *this,uint param_1)

{
  ~FVolumeTextureBulkData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c700

void * __thiscall
IRayTracingGeometryManager::_scalar_deleting_destructor_
          (IRayTracingGeometryManager *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c730

void * __thiscall UNeuralProfile::_scalar_deleting_destructor_(UNeuralProfile *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNeuralProfile__6B_;
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

// `scalar_deleting_destructor' @ 14844c790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UReplayNetConnection::_scalar_deleting_destructor_(UReplayNetConnection *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  FReplayHelper::~FReplayHelper(&this->ReplayHelper);
  UNetConnection::~UNetConnection((UNetConnection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2a00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c810

void * __thiscall
USkeletalMeshHalfEdgeBufferAccessor::_scalar_deleting_destructor_
          (USkeletalMeshHalfEdgeBufferAccessor *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14844c870

void * __thiscall
USpecularProfile::_scalar_deleting_destructor_(USpecularProfile *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USpecularProfile__6B_;
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&(this->Settings).LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&(this->Settings).ViewColor);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14844c8f0

void * __thiscall
USubsurfaceProfile::_scalar_deleting_destructor_(USubsurfaceProfile *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USubsurfaceProfile__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// AddOrUpdateProfile @ 14844e620

int __cdecl
NeuralProfile::AddOrUpdateProfile
          (UNeuralProfile *param_1,FGuid *param_2,FNeuralProfileStruct *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNeuralProfileStruct *pFVar4;
  FNeuralProfileStruct local_e8;
  FNeuralProfileStruct local_a0;
  FNeuralProfileStruct local_58;
  
  pFVar4 = FNeuralProfileStruct::FNeuralProfileStruct(&local_e8,param_3);
  if (param_1 == (UNeuralProfile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProfile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NeuralProfile.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FNeuralProfileModelTextureManager::FindAllocationId
                    ((FNeuralProfileModelTextureManager *)&GNeuralProfileModelTextureManager,param_1
                    );
  if (iVar3 == -1) {
    pFVar4 = FNeuralProfileStruct::FNeuralProfileStruct(&local_58,pFVar4);
    iVar3 = FNeuralProfileModelTextureManager::AddProfile
                      ((FNeuralProfileModelTextureManager *)&GNeuralProfileModelTextureManager,
                       param_1,param_2,pFVar4);
  }
  else {
    pFVar4 = FNeuralProfileStruct::FNeuralProfileStruct(&local_a0,pFVar4);
    FNeuralProfileModelTextureManager::UpdateProfile
              ((FNeuralProfileModelTextureManager *)&GNeuralProfileModelTextureManager,iVar3,pFVar4)
    ;
  }
  return iVar3;
}

// AddOrUpdateProfile @ 14844e700

int __cdecl
SpecularProfile::AddOrUpdateProfile
          (USpecularProfile *param_1,FGuid *param_2,FSpecularProfileStruct *param_3,
          FTextureReference *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSpecularProfileStruct *pFVar4;
  FSpecularProfileStruct local_c88;
  FSpecularProfileStruct local_868;
  FSpecularProfileStruct local_448;
  
  local_c88.Format = param_3->Format;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_c88.ViewColor,&param_3->ViewColor);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_c88.LightColor,&param_3->LightColor);
  local_c88.Texture.field0_0x0 = (TObjectPtr<UTexture2D>_u_0)(param_3->Texture).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c88.Texture.field0_0x0.DebugPtr != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c88.Texture.field0_0x0);
  }
  if (param_1 == (USpecularProfile *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProfile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SpecularProfile.cpp"
                       ,0xd3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FSpecularProfileTextureManager::FindAllocationId
                    ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,param_1);
  if (iVar3 == -1) {
    pFVar4 = FSpecularProfileStruct::FSpecularProfileStruct(&local_448,&local_c88);
    iVar3 = FSpecularProfileTextureManager::AddProfile
                      ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,param_1,
                       param_2,pFVar4,param_4);
  }
  else {
    pFVar4 = FSpecularProfileStruct::FSpecularProfileStruct(&local_868,&local_c88);
    FSpecularProfileTextureManager::UpdateProfile
              ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,iVar3,pFVar4,
               param_4);
  }
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_c88.LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_c88.ViewColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_3->LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&param_3->ViewColor);
  return iVar3;
}

// AddPass_Memcpy @ 14844f450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
Nanite::AddPass_Memcpy
          (FRDGBuilder *param_1,FRDGBufferUAV *param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FGlobalShaderMap *this;
  FGlobalShaderType *pFVar6;
  FShaderType *pFVar7;
  FName this_00;
  FRDGEventName *pFVar8;
  FShaderParametersMetadata *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 local_res8 [24];
  undefined8 *local_a8 [2];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  TIntVector3<int>_u_0 local_88;
  FString local_78;
  TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  uVar14 = param_5;
  puVar13 = (undefined8 *)0x0;
  if ((param_5 < 0x8000) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Length >= (1u << 15)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteStreamingManager.cpp"
                         ,0x15a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_4 < param_3 + uVar14) && (param_3 < param_4 + uVar14)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcOffset >= DstOffset + Length || DstOffset >= SrcOffset + Length",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteStreamingManager.cpp"
                         ,0x15b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_3 & 0xf) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(DstOffset & 15u) == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteStreamingManager.cpp"
                         ,0x15d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_4 & 0xf) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SrcOffset & 15u) == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteStreamingManager.cpp"
                         ,0x15e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uVar14 & 0xf) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Length & 15u) == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteStreamingManager.cpp"
                         ,0x15f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar5[4] = 0;
    *puVar5 = &___7__TObject_VFParameters_FMemcpy_CS_Nanite___FRDGAllocator__6B_;
    puVar13 = puVar5;
  }
  local_a8[0] = puVar13;
  if ((((undefined8 **)param_1->_padding_ <= local_a8) &&
      (local_a8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_a8[0];
  ((FParameters *)(puVar13 + 2))->SrcOffset = param_4;
  *(uint *)((longlong)puVar13 + 0x14) = param_3;
  *(uint *)(puVar13 + 3) = uVar14 >> 4;
  puVar13[4] = param_2;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar6 = FMemcpy_CS::GetStaticType();
  if (*(int *)&pFVar6->field_0x50 != 1) {
    param_5 = param_5 & 0xffffff00;
    `FGlobalShaderMap::GetShader<Nanite::FMemcpy_CS>'::__l2::<lambda_1>::operator()(&param_5);
  }
  pFVar7 = (FShaderType *)FMemcpy_CS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_98,pFVar7,0);
  if (CONCAT44(local_98.ShaderContent._4_4_,(uint)local_98.ShaderContent) == 0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_78);
    FMemcpy_CS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMemcpy_CS::GetStaticType();
  uVar14 = (uVar14 >> 4) + 0x3f >> 6;
  local_68.ShaderMap = local_98.ShaderMap;
  if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
      (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,400,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = 1;
  uVar12 = 1;
  uVar11 = uVar14;
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar14) {
    uVar11 = 0x80;
    uVar10 = uVar14 + 0x7f >> 7;
  }
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < (int)uVar10) {
    uVar12 = uVar10 + 0x7f;
    uVar10 = 0x80;
    uVar12 = uVar12 >> 7;
  }
  if (((int)(uVar11 * uVar10 * uVar12) < (int)uVar14) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                         ,0x19f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98.ShaderContent._0_4_ = uVar11;
  local_98.ShaderContent._4_4_ = uVar10;
  pFVar8 = FRDGEventName::FRDGEventName(&local_58,1,L"Memcpy");
  pFVar9 = FMemcpy_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_88._0_8_ = CONCAT44(local_98.ShaderContent._4_4_,(uint)local_98.ShaderContent);
  local_88._s_0.Z = uVar12;
  FComputeShaderUtils::AddPass<Nanite::FMemcpy_CS>
            (param_1,pFVar8,Compute,&local_68,pFVar9,(FParameters *)(puVar13 + 2),
             (TIntVector3<int> *)&local_88._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// AddPass_Memmove @ 14844f8b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
Nanite::AddPass_Memmove
          (FRDGBuilder *param_1,FRDGBufferUAV *param_2,uint param_3,uint param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  FRDGScope *this;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8>_const_*,std::tuple<>_> local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  TRDGEventScopeGuard<FRDGScope_RHI> local_48;
  undefined1 local_38;
  
  if (param_3 != param_4) {
    bVar2 = false;
    uVar5 = 0;
    local_38 = 0;
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_58 = 0;
        uStack_54 = 0;
        ::Desc._12_8_ = ZEXT48(local_68._Myfirst._Val._4_4_);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_Memmove;
        ::Desc._padding_ = (longlong)u_Memmove;
        ::Desc._padding_._0_4_ = 0x17a;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::AddPass_Memmove'::__l10::Desc::operator()<>'::__l3::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_68._Myfirst._Val._0_4_ = 0x54c67440;
      local_68._Myfirst._Val._4_4_ = 1;
      local_48.State = (FRDGScopeState *)param_1;
      this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                       ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this;
      local_48.Scope = this;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8>_const_*,std::tuple<>_>_>
                (&(this->Impl).Impl,(FRDGScopeState *)param_1,&local_68);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar2 = true;
      local_38 = 1;
    }
    uVar4 = param_3 - param_4;
    if (param_3 <= param_4) {
      uVar4 = param_4 - param_3;
    }
    if (param_5 < uVar4) {
      uVar4 = param_5;
    }
    uVar6 = 0x1000000;
    if (uVar4 < 0x1000000) {
      uVar6 = uVar4;
    }
    if (param_5 != 0) {
      do {
        uVar4 = uVar6;
        if (param_5 - uVar5 < uVar6) {
          uVar4 = param_5 - uVar5;
        }
        uVar3 = uVar5;
        if (param_4 < param_3) {
          uVar3 = (param_5 - uVar4) - uVar5;
        }
        AddPass_Memcpy(param_1,param_2,uVar3 + param_3,uVar3 + param_4,uVar4);
        uVar5 = uVar5 + uVar6;
      } while (uVar5 < param_5);
    }
    if (bVar2) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_48);
    }
  }
  return;
}

// BuildHalfEdgeBuffers @ 148456f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
SkeletalMeshHalfEdgeUtility::BuildHalfEdgeBuffers
          (FSkeletalMeshLODRenderData *param_1,TResourceArray<int,0> *param_2,
          TResourceArray<int,0> *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  uint uVar3;
  FRawStaticIndexBuffer16or32Interface *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  int iVar7;
  TResourceArray<int,0> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar18;
  longlong lVar19;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar20;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  FVertexToEdgeBuilder local_110;
  int local_100;
  FScriptContainerElement *local_f8;
  TResourceArray<int,0> *local_f0;
  TResourceArray<int,0> *local_e8;
  undefined1 local_d8 [64];
  void *local_98;
  undefined4 local_90;
  undefined **local_88;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_80;
  undefined8 local_78;
  bool local_70;
  TVector<float>_u_0 local_68;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f0 = param_2;
  local_e8 = param_3;
  if (((param_1->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0
      ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IndexBuffer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                               ,0x56,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (param_1->MultiSizeIndexContainer).IndexBuffer;
  iVar10 = (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4);
  uVar3 = (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  local_d8._44_4_ = 0x80;
  local_d8._48_4_ = 0xffffffff;
  local_70 = false;
  local_d8._0_8_ = 0;
  local_100 = (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f) +
              iVar10 / 3 + (iVar10 >> 0x1f);
  local_d8._8_8_ = 0;
  local_d8._32_8_ = 0;
  local_d8._40_4_ = 0;
  local_d8._52_4_ = 0;
  uVar16 = local_100 * 3;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_80.Packed = 0;
  local_78 = 0;
  local_88 = &___7__TResourceArray_H_0A___6B_;
  TArray<int,TMemoryImageAllocator<0>_>::SetNum
            ((TArray<int,TMemoryImageAllocator<0>_> *)&local_80.Frozen,uVar16,Default);
  iVar10 = (int)local_78;
  TVar18 = local_80;
  TVar20 = local_80;
  if ((local_80.Packed & 1) != 0) {
    TVar18.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_80 + ((longlong)local_80.Packed >> 0x18));
    TVar20.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_80 + ((longlong)local_80.Packed >> 0x18));
  }
  pFVar13 = TVar20.UnfrozenPtr + (longlong)(int)local_78 * 4;
  local_f8 = pFVar13;
  while( true ) {
    if ((int)local_78 != iVar10) {
      local_118[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_118);
      pFVar13 = local_f8;
    }
    iVar7 = local_100;
    if ((FScriptContainerElement *)TVar18.Packed == pFVar13) break;
    *(undefined4 *)TVar18.UnfrozenPtr = 0xffffffff;
    TVar18.UnfrozenPtr = (FScriptContainerElement *)(TVar18.Packed + 4);
  }
  local_f8 = (FScriptContainerElement *)((ulonglong)local_f8 & 0xffffffff00000000);
  pFVar13 = local_f8;
  if (0 < local_100) {
    local_f8._0_4_ = 0;
    iVar10 = (int)local_f8;
    local_f8 = pFVar13;
    do {
      iVar12 = iVar10 * 3;
      iVar11 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar12);
      uVar14 = (ulonglong)(iVar11 * (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar5 = (param_1->StaticVertexBuffers).PositionVertexBuffer.Data;
      local_68._0_8_ = *(undefined8 *)(puVar5 + uVar14);
      local_68._s_0.Z = (float)*(undefined4 *)(puVar5 + uVar14 + 8);
      iVar11 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar12 + 1);
      uVar14 = (ulonglong)(iVar11 * (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar5 = (param_1->StaticVertexBuffers).PositionVertexBuffer.Data;
      local_5c = *(undefined8 *)(puVar5 + uVar14);
      local_54 = *(undefined4 *)(puVar5 + uVar14 + 8);
      iVar12 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar12 + 2);
      uVar14 = (ulonglong)(iVar12 * (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar5 = (param_1->StaticVertexBuffers).PositionVertexBuffer.Data;
      local_50 = *(undefined8 *)(puVar5 + uVar14);
      local_48 = *(undefined4 *)(puVar5 + uVar14 + 8);
      _anon_14BEF342::FTwinEdgeBuilder::Add
                ((FTwinEdgeBuilder *)local_d8,iVar10,
                 (TStaticArray<UE::Math::TVector<float>,3,4294967295> *)&local_68._s_0);
      iVar10 = iVar10 + 1;
      param_2 = local_f0;
    } while (iVar10 < iVar7);
  }
  pTVar8 = local_e8;
  if ((TMemoryImagePtr<FScriptContainerElement>_u_0 *)&local_e8->_padding_ != &local_80) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&local_e8->_padding_,
               (FMemoryImageAllocatorBase *)&local_80.Frozen);
    *(int *)&pTVar8->_padding_ = (int)local_78;
    *(undefined4 *)((longlong)&pTVar8->_padding_ + 4) = local_78._4_4_;
    local_78 = 0;
  }
  uVar17 = 0;
  pTVar8->bNeedsCPUAccess = local_70;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_80.Frozen);
  local_88 = &___7FResourceArrayUploadInterface__6B_;
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FEdgeKey,`anonymous_namespace'::FTwinEdgeBuilder::FEdgeDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FEdgeKey,_anonymous_namespace_::FTwinEdgeBuilder::FEdgeDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FEdgeKey,_anonymous_namespace_::FTwinEdgeBuilder::FEdgeDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  local_110.VertexToEdgeItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.VertexToEdgeItems.ArrayNum = 0;
  local_110.VertexToEdgeItems.ArrayMax = 0;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar16,(ForAnyElementType *)&local_110,0,&local_110.VertexToEdgeItems.ArrayMax);
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,4,uVar3,(ForAnyElementType *)&local_110,
                      &local_110.VertexToEdgeItems.ArrayNum,&local_110.VertexToEdgeItems.ArrayMax);
  DefaultConstructItems<_anonymous_namespace_::FVertexToEdgeBuilder::FVertexToEdgeItem,int>
            (local_110.VertexToEdgeItems.AllocatorInstance.Data + (longlong)iVar10 * 8,uVar3);
  uVar15 = uVar17;
  if (0 < (int)uVar16) {
    do {
      iVar10 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,uVar15);
      _anon_14BEF342::FVertexToEdgeBuilder::Add(&local_110,iVar10,uVar15);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  plVar1 = &param_2->_padding_;
  iVar10 = (int)param_2->_padding_;
  plVar2 = &param_2->_padding_;
  if (iVar10 < (int)uVar3) {
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,uVar3 - iVar10,(ForAnyElementType *)plVar1,(int *)plVar2,
               (int *)((longlong)&param_2->_padding_ + 4));
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar10) {
      uVar16 = iVar10 - uVar3;
      if (((int)(uVar16 | uVar3) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar16 != 0) {
        uVar14 = *plVar1;
        if ((uVar14 & 1) != 0) {
          uVar14 = (longlong)plVar1 + ((longlong)uVar14 >> 0x18);
        }
        _Dst = (void *)(uVar14 + (longlong)(int)uVar3 * 4);
        iVar10 = ((int)*plVar2 - uVar16) - uVar3;
        if (iVar10 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar16 * 4),(longlong)iVar10 << 2);
        }
        *(uint *)plVar2 = (int)*plVar2 - uVar16;
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)plVar1,(int)*plVar2,
                   (int *)((longlong)&param_2->_padding_ + 4));
      }
    }
  }
  if (0 < (int)uVar3) {
    lVar19 = 0;
    do {
      iVar10 = ::`anonymous_namespace'::GetHeadEdgeForVertex(uVar17,&local_110,pTVar8);
      uVar16 = 0;
      if ((int)uVar17 < (int)param_2->_padding_) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = *plVar1;
      if ((uVar14 & 1) != 0) {
        uVar14 = (longlong)&param_2->_padding_ + ((longlong)uVar14 >> 0x18);
      }
      *(int *)(uVar14 + lVar19 * 4) = iVar10;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uVar3);
  }
  if (local_110.VertexToEdgeItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.VertexToEdgeItems.AllocatorInstance.Data);
  }
  return;
}

// CanCreateWithPartiallyResidentMips @ 14845b8b0

bool __cdecl CanCreateWithPartiallyResidentMips(ETextureCreateFlags param_1)

{
  return false;
}

// ConvertSubsurfaceParametersFromSeparableToBurley @ 14845d0c0

void __cdecl
ConvertSubsurfaceParametersFromSeparableToBurley
          (FSubsurfaceProfileStruct *param_1,FLinearColor *param_2,FLinearColor *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  
  MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
            ((param_1->FalloffColor).field0_0x0._s_0.R,(float *)param_2,(float *)param_3);
  MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
            ((param_1->FalloffColor).field0_0x0._s_0.G,&(param_2->field0_0x0)._s_0.G,
             &(param_3->field0_0x0)._s_0.G);
  MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
            ((param_1->FalloffColor).field0_0x0._s_0.B,&(param_2->field0_0x0)._s_0.B,
             &(param_3->field0_0x0)._s_0.B);
  fVar2 = (param_3->field0_0x0)._s_0.G;
  fVar1 = (param_3->field0_0x0)._s_0.R;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (param_3->field0_0x0)._s_0.B;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  if (__real_3f800000 < fVar2) {
    fVar1 = __real_3f800000 / fVar2;
    (param_3->field0_0x0)._s_0.R = fVar1 * (param_3->field0_0x0)._s_0.R;
    (param_3->field0_0x0)._s_0.G = fVar1 * (param_3->field0_0x0)._s_0.G;
    (param_3->field0_0x0)._s_0.B = fVar1 * (param_3->field0_0x0)._s_0.B;
    (param_3->field0_0x0)._s_0.A = fVar1 * (param_3->field0_0x0)._s_0.A;
    fVar2 = fVar2 * param_1->ScatterRadius;
    if (__real_42480000 <= fVar2) {
      fVar2 = __real_42480000;
    }
    if (fVar2 <= __real_3dcccccd) {
      fVar2 = __real_3dcccccd;
    }
    *param_4 = fVar2;
  }
  return;
}

// CreateSpecularProfileParameterName @ 14845f290

FName __cdecl SpecularProfile::CreateSpecularProfileParameterName(USpecularProfile *param_1)

{
  FName FVar1;
  FName *pFVar2;
  int iVar3;
  longlong in_RDX;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (in_RDX != 0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString((FGuid *)(in_RDX + 0x448),&local_28,Digits);
    ::FString::ConcatCF(&local_18,L"__SpecularProfile",&local_28);
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar1 = *pFVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    param_1->_padding_ = (longlong)FVar1;
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// CreateSubsurfaceProfileParameterName @ 14845f350

FName __cdecl CreateSubsurfaceProfileParameterName(USubsurfaceProfile *param_1)

{
  FName FVar1;
  FName *pFVar2;
  int iVar3;
  longlong in_RDX;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (in_RDX != 0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString((FGuid *)(in_RDX + 200),&local_28,Digits);
    FString::ConcatCF(&local_18,L"__SubsurfaceProfile",&local_28);
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar2 = FName::FName(&local_res8,iVar3,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                          FNAME_Add);
    FVar1 = *pFVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    param_1->_padding_ = (longlong)FVar1;
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// CreateSubsurfaceProfileParameterName @ 14845f410

FName __cdecl SubsurfaceProfile::CreateSubsurfaceProfileParameterName(USubsurfaceProfile *param_1)

{
  FName FVar1;
  FName *pFVar2;
  int iVar3;
  longlong in_RDX;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (in_RDX != 0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString((FGuid *)(in_RDX + 200),&local_28,Digits);
    ::FString::ConcatCF(&local_18,L"__SubsurfaceProfile",&local_28);
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar1 = *pFVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    param_1->_padding_ = (longlong)FVar1;
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// DecodeDiffuseMeanFreePath @ 148461350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __cdecl
DecodeDiffuseMeanFreePath(FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = _UNK_151ad2084 * (param_1->field0_0x0)._s_0.G;
  fVar2 = _UNK_151ad2088 * (param_1->field0_0x0)._s_0.B;
  fVar3 = _UNK_151ad208c * (param_1->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       ___xmm_43f9ffff43f9ffff43f9ffff43f9ffff * (param_1->field0_0x0)._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar3;
  return __return_storage_ptr__;
}

// DecodeExtinctionScale @ 148461380

float __cdecl DecodeExtinctionScale(float param_1)

{
  return param_1 * __real_42c80000;
}

// DecodeScatteringDistribution @ 148461390

float __cdecl DecodeScatteringDistribution(float param_1)

{
  return (param_1 + param_1) - __real_3f800000;
}

// DecodeWorldUnitScale @ 1484613b0

float __cdecl DecodeWorldUnitScale(float param_1)

{
  return param_1 * __real_42480000;
}

// EmptyLinkFunctionForGeneratedCodeNeuralProfile @ 148464670

void __cdecl EmptyLinkFunctionForGeneratedCodeNeuralProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplayNetConnection @ 148464680

void __cdecl EmptyLinkFunctionForGeneratedCodeReplayNetConnection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMeshHalfEdgeBufferAccessor @ 148464690

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMeshHalfEdgeBufferAccessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpecularProfile @ 1484646a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSpecularProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubsurfaceProfile @ 1484646b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubsurfaceProfile(void)

{
  return;
}

// EncodeDiffuseMeanFreePath @ 1484646c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __cdecl
EncodeDiffuseMeanFreePath(FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = _UNK_151ad2074 * (param_1->field0_0x0)._s_0.G;
  fVar2 = _UNK_151ad2078 * (param_1->field0_0x0)._s_0.B;
  fVar3 = _UNK_151ad207c * (param_1->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       ___xmm_3b03126f3b03126f3b03126f3b03126f * (param_1->field0_0x0)._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar3;
  return __return_storage_ptr__;
}

// EncodeExtinctionScale @ 1484646e0

float __cdecl EncodeExtinctionScale(float param_1)

{
  return param_1 * __real_3c23d70a;
}

// EncodeScatteringDistribution @ 1484646f0

float __cdecl EncodeScatteringDistribution(float param_1)

{
  return (param_1 + __real_3f800000) * __real_3f000000;
}

// EncodeWorldUnitScale @ 148464710

float __cdecl EncodeWorldUnitScale(float param_1)

{
  return param_1 * __real_3ca3d70a;
}

// GetHalfEdgeRequirementAssetTagName @ 14846c620

FName __cdecl SkeletalMeshHalfEdgeBufferAccessor::GetHalfEdgeRequirementAssetTagName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Tag,"bRequiresSkeletalMeshHalfEdgeBuffer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Tag;
  return in_RCX;
}

// GetHeadEdgeForVertex @ 14846c6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
`anonymous_namespace'::GetHeadEdgeForVertex
          (int param_1,FVertexToEdgeBuilder *param_2,TResourceArray<int,0> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<int> FVar6;
  ForElementType<int> FVar7;
  ForElementType<int> FVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0x10;
  _anon_14BEF342::FVertexToEdgeBuilder::Get(param_2,param_1,&local_88);
  if (local_88.ArrayNum < 1) {
    local_98 = 0;
    local_90 = (longlong)local_88.ArrayNum;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  FVar6 = (ForElementType<int>)&local_88;
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar6 = local_88.AllocatorInstance.SecondaryData;
  }
  iVar4 = *(int *)FVar6;
  FVar6 = local_88.AllocatorInstance.SecondaryData;
  iVar1 = iVar4;
  while( true ) {
    iVar9 = iVar1;
    iVar1 = iVar9 + 2;
    iVar10 = (int)param_3->_padding_;
    uVar12 = (iVar9 / 3 + (iVar9 >> 0x1f) +
             (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3 +
             iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                     (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f))
                     * -3;
    uVar5 = 0;
    if ((int)uVar12 < iVar10) {
      uVar5 = ~uVar12 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_98 = (longlong)(int)uVar12;
      local_90 = (longlong)iVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      FVar6 = local_88.AllocatorInstance.SecondaryData;
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    uVar11 = param_3->_padding_;
    if ((uVar11 & 1) != 0) {
      uVar11 = (longlong)&param_3->_padding_ + ((longlong)uVar11 >> 0x18);
    }
    iVar1 = *(int *)(uVar11 + (longlong)(int)uVar12 * 4);
    iVar10 = iVar1;
    if ((iVar1 == iVar4) || (iVar10 = iVar9, iVar1 == -1)) break;
    FVar8 = (ForElementType<int>)&local_88;
    if (FVar6 != (ForElementType<int>)0x0) {
      FVar8 = FVar6;
    }
    FVar7 = FVar8;
    while( true ) {
      if (FVar7 == (ForElementType<int>)((longlong)FVar8 + (longlong)local_88.ArrayNum * 4))
      goto LAB_14846c822;
      if (*(int *)FVar7 == iVar1) break;
      FVar7 = (ForElementType<int>)((longlong)FVar7 + 4);
    }
    if ((int)((longlong)FVar7 - (longlong)FVar8 >> 2) == -1) break;
  }
LAB_14846c822:
  if (FVar6 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  return iVar10;
}

// GetNeuralProfileId @ 14846cab0

int __cdecl NeuralProfile::GetNeuralProfileId(UNeuralProfile *param_1)

{
  int iVar1;
  
  if (param_1 != (UNeuralProfile *)0x0) {
    iVar1 = FNeuralProfileModelTextureManager::FindAllocationId
                      ((FNeuralProfileModelTextureManager *)&GNeuralProfileModelTextureManager,
                       param_1);
    return iVar1;
  }
  return -1;
}

// GetProfileSetting @ 14846dbb0

FNeuralProfileStruct * __cdecl
NeuralProfile::GetProfileSetting(FNeuralProfileStruct *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FNeuralProfileStruct *pFVar3;
  
  (__return_storage_ptr__->NNEModelData).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->TileSize = OneByOne;
  __return_storage_ptr__->BatchSizeOverride = 1;
  (__return_storage_ptr__->TileOverlap).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  __return_storage_ptr__->TileOverlapResolveType = Ignore;
  __return_storage_ptr__->InputFormat = Type32;
  __return_storage_ptr__->OutputFormat = Type32;
  __return_storage_ptr__->RuntimeType = NNERuntimeORTDml;
  *(undefined8 *)&(__return_storage_ptr__->InputDimension).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->InputDimension).field0_0x0 + 8) = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputDimension).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->OutputDimension).field0_0x0 + 8) = 0;
  if ((-1 < param_1) && (param_1 < (int)GNeuralProfileModelTextureManager._40_4_)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FNeuralProfileStruct *)(*pcVar1)();
        return pFVar3;
      }
    }
    FNeuralProfileStruct::operator=
              (__return_storage_ptr__,
               (FNeuralProfileStruct *)
               ((longlong)param_1 * 0x50 + GNeuralProfileModelTextureManager._32_8_));
  }
  return __return_storage_ptr__;
}

// GetSSProfilesPreIntegratedTextureWithFallback @ 14846f4f0

FRHITexture * __cdecl GetSSProfilesPreIntegratedTextureWithFallback(void)

{
  if (GSSProfilesPreIntegratedTexture.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSSProfilesPreIntegratedTexture.Reference)->RenderTargetItem).TargetableTexture.
           Reference;
  }
  return (GBlackArrayTexture->TextureRHI).Reference;
}

// GetSSProfilesPreIntegratedTextureWithFallback @ 14846f520

FRHITexture * __cdecl SubsurfaceProfile::GetSSProfilesPreIntegratedTextureWithFallback(void)

{
  if (GSSProfilesPreIntegratedTexture.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSSProfilesPreIntegratedTexture.Reference)->RenderTargetItem).TargetableTexture.
           Reference;
  }
  return (GBlackArrayTexture->TextureRHI).Reference;
}

// GetSpecularProfileId @ 14846f840

float __cdecl SpecularProfile::GetSpecularProfileId(USpecularProfile *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = 0;
  if (param_1 != (USpecularProfile *)0x0) {
    iVar1 = FSpecularProfileTextureManager::FindAllocationId
                      ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,param_1);
  }
  fVar2 = FSpecularProfileTextureManager::GetParameterizationSign
                    ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,iVar1);
  return fVar2 * (float)iVar1 * __real_3b808081;
}

// GetSpecularProfileParameterName @ 14846f890

FName __cdecl SpecularProfile::GetSpecularProfileParameterName(USpecularProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint uVar5;
  longlong lVar6;
  USpecularProfile *in_RDX;
  
  uVar3 = FSpecularProfileTextureManager::FindAllocationId
                    ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,in_RDX);
  lVar6 = 0;
  if (uVar3 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar3 < (int)GSpecularProfileTextureManager._40_4_) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FName)(*pcVar1)();
        return FVar4;
      }
    }
    lVar6 = *(longlong *)
             ((longlong)(int)uVar3 * 0x440 + 0x438 + GSpecularProfileTextureManager._32_8_);
  }
  param_1->_padding_ = lVar6;
  return (FName)param_1;
}

// GetSpecularProfileTextureAtlas @ 14846f930

FRHITexture * __cdecl SpecularProfile::GetSpecularProfileTextureAtlas(void)

{
  if (GSpecularProfileTextureAtlas.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSpecularProfileTextureAtlas.Reference)->RenderTargetItem).TargetableTexture.Reference;
  }
  return (FRHITexture *)0x0;
}

// GetSpecularProfileTextureAtlasWithFallback @ 14846f950

FRHITexture * __cdecl SpecularProfile::GetSpecularProfileTextureAtlasWithFallback(void)

{
  if (GSpecularProfileTextureAtlas.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSpecularProfileTextureAtlas.Reference)->RenderTargetItem).TargetableTexture.Reference;
  }
  return (GBlackTexture->TextureRHI).Reference;
}

// GetSubsurfaceProfileId @ 148470a00

float __cdecl GetSubsurfaceProfileId(USubsurfaceProfile *param_1)

{
  int iVar1;
  
  if (param_1 != (USubsurfaceProfile *)0x0) {
    iVar1 = FSubsurfaceProfileTexture::FindAllocationId
                      ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,param_1);
    return (float)iVar1 * __real_3b808081;
  }
  return __real_3b808081 * 0.0;
}

// GetSubsurfaceProfileId @ 148470a50

float __cdecl SubsurfaceProfile::GetSubsurfaceProfileId(USubsurfaceProfile *param_1)

{
  int iVar1;
  
  if (param_1 != (USubsurfaceProfile *)0x0) {
    iVar1 = FSubsurfaceProfileTexture::FindAllocationId
                      ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,param_1);
    return (float)iVar1 * __real_3b808081;
  }
  return __real_3b808081 * 0.0;
}

// GetSubsurfaceProfileParameterName @ 148470aa0

FName __cdecl GetSubsurfaceProfileParameterName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&NameSubsurfaceProfile,L"__SubsurfaceProfile");
      _Init_thread_footer(&_TSS0);
    }
  }
  *(FName *)in_RCX = NameSubsurfaceProfile;
  return in_RCX;
}

// GetSubsurfaceProfileParameterName @ 148470b20

FName __cdecl SubsurfaceProfile::GetSubsurfaceProfileParameterName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NameSubsurfaceProfile,L"__SubsurfaceProfile");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = NameSubsurfaceProfile;
  return in_RCX;
}

// GetSubsurfaceProfileTexture @ 148470ba0

FRHITexture * __cdecl GetSubsurfaceProfileTexture(void)

{
  if (GSSProfiles.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSSProfiles.Reference)->RenderTargetItem).TargetableTexture.Reference;
  }
  return (FRHITexture *)0x0;
}

// GetSubsurfaceProfileTexture @ 148470bc0

FRHITexture * __cdecl SubsurfaceProfile::GetSubsurfaceProfileTexture(void)

{
  if (GSSProfiles.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSSProfiles.Reference)->RenderTargetItem).TargetableTexture.Reference;
  }
  return (FRHITexture *)0x0;
}

// GetSubsurfaceProfileTextureWithFallback @ 148470be0

FRHITexture * __cdecl GetSubsurfaceProfileTextureWithFallback(void)

{
  if (GSSProfiles.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSSProfiles.Reference)->RenderTargetItem).TargetableTexture.Reference;
  }
  return (GBlackTexture->TextureRHI).Reference;
}

// GetSubsurfaceProfileTextureWithFallback @ 148470c10

FRHITexture * __cdecl SubsurfaceProfile::GetSubsurfaceProfileTextureWithFallback(void)

{
  if (GSSProfiles.Reference != (IPooledRenderTarget *)0x0) {
    return ((GSSProfiles.Reference)->RenderTargetItem).TargetableTexture.Reference;
  }
  return (GBlackTexture->TextureRHI).Reference;
}

// GetTypeHash @ 148470d60

uint __cdecl GetTypeHash(FEdgeKey *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&param_1->V1,0xc,0);
  uVar2 = FCrc::MemCrc_DEPRECATED(param_1,0xc,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// IsHalfEdgeRequired @ 148478270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
SkeletalMeshHalfEdgeBufferAccessor::IsHalfEdgeRequired(TSoftObjectPtr<UObject> *param_1)

{
  void *pvVar1;
  FName FVar2;
  code *pcVar3;
  FMapHandle FVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  IModuleInterface *pIVar9;
  longlong *plVar10;
  FValueId *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  FAssetTagValueRef_u_0 FVar14;
  undefined1 auStackY_138 [32];
  FKeyForward local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  FString *local_e0;
  undefined8 local_d8;
  FAssetTagValueRef_u_0 local_d0;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FName local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  FMapHandle local_50;
  undefined8 uStack_48;
  TReferenceControllerBase<1> *local_40;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
    pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    return false;
  }
  pFVar8 = ::FName::FName(&local_90,"AssetRegistry");
  FVar2 = *pFVar8;
  this = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this,FVar2);
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
  pcVar3 = *(code **)(*plVar10 + 0x228);
  FSoftObjectPath::GetLongPackageName
            ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,&local_a0);
  local_e8 = 1;
  FVar14.Loose = (FString *)0x0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_f0,1,&local_e4);
  ConstructItems<FString,FString,int>(local_f0.Data,&local_a0,1);
  local_e0 = (FString *)0x0;
  local_d8 = 0;
  (*pcVar3)(plVar10,&local_e0,&local_f0,0);
  DestructItems<FString,int>(local_e0,(int)local_d8);
  if (local_e0 != (FString *)0x0) {
    FMemory::Free(local_e0);
  }
  DestructItems<FString,int>((FString *)local_f0.Data,local_e8);
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  local_88 = 0;
  local_50._0_2_ = 0;
  local_50.Num = 0;
  local_50.PairBegin = 0;
  uStack_48 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_24 = 2;
  (**(code **)(*plVar10 + 0x90))(plVar10,&(param_1->SoftObjectPtr).field_0x8,&local_88);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Tag,"bRequiresSkeletalMeshHalfEdgeBuffer");
    _Init_thread_footer(&::_TSS0);
  }
  FVar4 = local_50;
  if (local_50.IsValid == 0) {
    if (local_50 == (FMapHandle)0x0) goto LAB_148478587;
    local_c8 = ::Tag;
    uVar7 = Algo::
            BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                      ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)local_50,
                       &local_c8,local_f8,(FNameFastLess)local_f8);
    if (uVar7 != 0xffffffff) {
      uVar13 = 0;
      if ((int)uVar7 < *(int *)((longlong)FVar4 + 8)) {
        uVar13 = ~uVar7 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar14.Loose = (FString *)(*(longlong *)FVar4 + ((longlong)(int)uVar7 * 3 + 1) * 8);
    }
  }
  else {
    pFVar11 = FixedTagPrivate::FMapHandle::FindValue(&local_50,::Tag);
    if (pFVar11 != (FValueId *)0x0) {
      FVar14.Bits = ((ulonglong)local_50 & 0xfffc | 0xfffffffe00000000) << 0x1e |
                    (ulonglong)(uint)*pFVar11;
    }
  }
  local_d0 = FVar14;
  if (FVar14.Loose != (FString *)0x0) {
    FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_d0.Fixed,&local_c0);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar12.Data = local_c0.Data.AllocatorInstance.Data;
    }
    bVar6 = FToBoolHelper::FromCStringWide((wchar_t *)FVar12.Data);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)&local_50)
    ;
    pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
    if (pvVar1 == (void *)0x0) {
      return bVar6;
    }
    FMemory::Free(pvVar1);
    return bVar6;
  }
LAB_148478587:
  if (2 < (byte)LogSkeletalMeshHalfEdgeBufferAccessor._0_1_) {
    FSoftObjectPath::ToString((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,&local_b0);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMeshHalfEdgeBufferAccessor);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)&local_50);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return true;
}

// IsSpecularProfileSupport @ 1484787e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsSpecularProfileSupport(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel) {
    bVar2 = Substrate::IsSpecularProfileEnabled(param_1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// LexToString @ 148478b20

wchar_t * __cdecl LexToString(EReplayHeaderFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case ClientRecorded:
    return L"ClientRecorded";
  case HasStreamingFixes:
    return L"HasStreamingFixes";
  case DeltaCheckpoints:
    return L"DeltaCheckpoints";
  case GameSpecificFrameData:
    return L"GameSpecificFrameData";
  case ReplayConnection:
    return L"ReplayConnection";
  case ActorPrioritizationEnabled:
    return L"ActorPrioritizationEnabled";
  case NetRelevancyEnabled:
    return L"NetRelevancyEnabled";
  case AsyncRecorded:
    return L"AsyncRecorded";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                     ,0x8cc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"Unknown";
}

// MiniFontCharFromIndex @ 148479b70

wchar_t __cdecl MiniFontCharFromIndex(uint param_1)

{
  wchar_t wVar1;
  
  if (param_1 < 10) {
    return (short)param_1 + L'0';
  }
  wVar1 = (short)param_1 + L'7';
  if (0x19 < param_1 - 10) {
    wVar1 = L'?';
  }
  return wVar1;
}

// Pow4 @ 14847ba20

float __cdecl Pow4(float param_1)

{
  return param_1 * param_1 * param_1 * param_1;
}

// SetupSurfaceAlbedoAndDiffuseMeanFreePath @ 148494e60

void __cdecl SetupSurfaceAlbedoAndDiffuseMeanFreePath(FLinearColor *param_1,FLinearColor *param_2)

{
  float fVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FLinearColor_u_0 *pFVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FLinearColor_u_0 local_38;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  pTVar2 = CVarSSProfilesSamplingChannelSelection.Ref;
  bVar3 = IsInParallelGameThread();
  lVar8 = 0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar5 = 4;
    if (!bVar3) goto LAB_148494ea7;
  }
  lVar5 = lVar8;
LAB_148494ea7:
  local_38._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  iVar7 = 1;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) < 1) {
    iVar7 = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  }
  iVar4 = 0;
  if (0 < iVar7) {
    iVar4 = iVar7;
  }
  if (iVar4 == 0) {
    pFVar6 = &local_38;
  }
  else {
    local_28._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_28._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    pFVar6 = &GetMeanFreePathFromDiffuseMeanFreePath
                        (&local_18,(FLinearColor *)&local_28._s_0,(FLinearColor *)&local_38._s_0)->
              field0_0x0;
  }
  fVar1 = __real_43fa0000;
  fVar11 = (((FLinearColor_u_0 *)&(pFVar6->_s_0).R)->_s_0).R;
  fVar9 = (pFVar6->_s_0).G;
  fVar10 = fVar11;
  if (fVar11 <= fVar9) {
    fVar10 = fVar9;
  }
  if (fVar10 <= (pFVar6->_s_0).B) {
    fVar10 = (pFVar6->_s_0).B;
  }
  if ((fVar11 != fVar10) && (lVar8 = 8, fVar9 == fVar10)) {
    lVar8 = 4;
  }
  (param_1->field0_0x0)._s_0.A = *(float *)((longlong)&param_1->field0_0x0 + lVar8);
  fVar11 = *(float *)((longlong)&param_2->field0_0x0 + lVar8);
  fVar9 = (param_2->field0_0x0)._s_0.R;
  if (fVar1 <= fVar11) {
    fVar11 = fVar1;
  }
  fVar10 = (param_2->field0_0x0)._s_0.G;
  if (fVar1 <= fVar9) {
    fVar9 = fVar1;
  }
  if (fVar1 <= fVar10) {
    fVar10 = fVar1;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  (param_2->field0_0x0)._s_0.A = fVar11;
  (param_2->field0_0x0)._s_0.R = fVar9;
  fVar11 = (param_2->field0_0x0)._s_0.B;
  if (fVar1 <= fVar11) {
    fVar11 = fVar1;
  }
  (param_2->field0_0x0)._s_0.G = fVar10;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  (param_2->field0_0x0)._s_0.B = fVar11;
  return;
}

// Sqrt2 @ 1484950f0

float __cdecl Sqrt2(float param_1)

{
  return SQRT(SQRT(param_1));
}

// UpdateSpecularProfileTextureAtlas @ 14849d1f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
SpecularProfile::UpdateSpecularProfileTextureAtlas(FRDGBuilder *param_1,EShaderPlatform param_2)

{
  FSpecularProfileTextureManager::GetAtlasTexture
            ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,param_1,param_2);
  return;
}

// UpdateSubsurfaceProfileTexture @ 14849d210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl UpdateSubsurfaceProfileTexture(FRDGBuilder *param_1,EShaderPlatform param_2)

{
  if (GSSProfiles.Reference == (IPooledRenderTarget *)0x0) {
    FSubsurfaceProfileTexture::CreateTexture
              ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,
               (FRHICommandListImmediate *)param_1->_padding_);
  }
  FSubsurfaceProfileTexture::GetSSProfilesPreIntegratedTexture
            ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,param_1,param_2);
  return;
}

// UpdateSubsurfaceProfileTexture @ 14849d260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SubsurfaceProfile::UpdateSubsurfaceProfileTexture(FRDGBuilder *param_1,EShaderPlatform param_2)

{
  if (GSSProfiles.Reference == (IPooledRenderTarget *)0x0) {
    FSubsurfaceProfileTexture::CreateTexture
              ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,
               (FRHICommandListImmediate *)param_1->_padding_);
  }
  FSubsurfaceProfileTexture::GetSSProfilesPreIntegratedTexture
            ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,param_1,param_2);
  return;
}

// UpgradeDiffuseMeanFreePathToMeanFreePath @ 14849d2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UpgradeDiffuseMeanFreePathToMeanFreePath(FSubsurfaceProfileStruct *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48 [4];
  
  fVar3 = param_1->MeanFreePathDistance;
  local_68._s_0.R = (param_1->MeanFreePathColor).field0_0x0._s_0.R * fVar3;
  local_68._s_0.G = (param_1->MeanFreePathColor).field0_0x0._s_0.G * fVar3;
  local_68._s_0.B = (param_1->MeanFreePathColor).field0_0x0._s_0.B * fVar3;
  local_68._s_0.A = (param_1->MeanFreePathColor).field0_0x0._s_0.A * fVar3;
  local_48[0]._0_8_ = *(undefined8 *)&(param_1->SurfaceAlbedo).field0_0x0;
  local_48[0]._8_8_ = *(undefined8 *)((longlong)&(param_1->SurfaceAlbedo).field0_0x0 + 8);
  GetMeanFreePathFromDiffuseMeanFreePath
            ((FLinearColor *)&local_58._s_0,(FLinearColor *)&local_48[0]._s_0,
             (FLinearColor *)&local_68._s_0);
  fVar2 = local_58._s_0.G * __real_3f19999a;
  fVar6 = local_58._s_0.R * __real_3f19999a;
  fVar4 = local_58._s_0.B * __real_3f19999a;
  fVar3 = fVar2;
  if (fVar2 <= fVar6) {
    fVar3 = fVar6;
  }
  fVar7 = local_58._s_0.A * __real_3f19999a;
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar5 = __real_3f800000 / fVar3;
  param_1->MeanFreePathDistance = fVar3;
  fVar7 = fVar7 * fVar5;
  (param_1->MeanFreePathColor).field0_0x0._s_0.R = fVar5 * fVar6;
  (param_1->MeanFreePathColor).field0_0x0._s_0.G = fVar5 * fVar2;
  (param_1->MeanFreePathColor).field0_0x0._s_0.B = fVar5 * fVar4;
  (param_1->MeanFreePathColor).field0_0x0._s_0.A = fVar7;
  fVar1 = __real_41200000;
  if (fVar3 < __real_3dcccccd) {
    (param_1->MeanFreePathColor).field0_0x0._s_0.R = fVar3 * fVar5 * fVar6 * __real_41200000;
    (param_1->MeanFreePathColor).field0_0x0._s_0.G = fVar3 * fVar5 * fVar2 * fVar1;
    (param_1->MeanFreePathColor).field0_0x0._s_0.B = fVar5 * fVar4 * fVar3 * fVar1;
    (param_1->MeanFreePathColor).field0_0x0._s_0.A = fVar7 * fVar3 * fVar1;
    param_1->MeanFreePathDistance = 0.1;
  }
  fVar3 = param_1->WorldUnitScale * ___real_40555555;
  param_1->bEnableMeanFreePath = true;
  param_1->WorldUnitScale = fVar3;
  return;
}

// UpgradeSeparableToBurley @ 14849d400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UpgradeSeparableToBurley(FSubsurfaceProfileStruct *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
            ((param_1->FalloffColor).field0_0x0._s_0.R,(float *)param_1,
             (float *)&param_1->MeanFreePathColor);
  MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
            ((param_1->FalloffColor).field0_0x0._s_0.G,&(param_1->SurfaceAlbedo).field0_0x0._s_0.G,
             &(param_1->MeanFreePathColor).field0_0x0._s_0.G);
  MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
            ((param_1->FalloffColor).field0_0x0._s_0.B,&(param_1->SurfaceAlbedo).field0_0x0._s_0.B,
             &(param_1->MeanFreePathColor).field0_0x0._s_0.B);
  fVar6 = (param_1->MeanFreePathColor).field0_0x0._s_0.G;
  fVar1 = (param_1->MeanFreePathColor).field0_0x0._s_0.R;
  if (fVar6 <= fVar1) {
    fVar6 = fVar1;
  }
  fVar1 = (param_1->MeanFreePathColor).field0_0x0._s_0.B;
  if (fVar6 <= fVar1) {
    fVar6 = fVar1;
  }
  if (__real_3f800000 < fVar6) {
    fVar5 = __real_3f800000 / fVar6;
    fVar1 = (param_1->MeanFreePathColor).field0_0x0._s_0.G;
    fVar2 = (param_1->MeanFreePathColor).field0_0x0._s_0.B;
    fVar3 = (param_1->MeanFreePathColor).field0_0x0._s_0.A;
    (param_1->MeanFreePathColor).field0_0x0._s_0.R =
         fVar5 * (param_1->MeanFreePathColor).field0_0x0._s_0.R;
    (param_1->MeanFreePathColor).field0_0x0._s_0.G = fVar5 * fVar1;
    (param_1->MeanFreePathColor).field0_0x0._s_0.B = fVar5 * fVar2;
    (param_1->MeanFreePathColor).field0_0x0._s_0.A = fVar5 * fVar3;
    fVar6 = fVar6 * param_1->ScatterRadius;
    if (__real_42480000 <= fVar6) {
      fVar6 = __real_42480000;
    }
    if (fVar6 <= __real_3dcccccd) {
      fVar6 = __real_3dcccccd;
    }
    param_1->MeanFreePathDistance = fVar6;
  }
  fVar6 = param_1->MeanFreePathDistance * ___real_3e4e19d1;
  param_1->bEnableBurley = true;
  param_1->MeanFreePathDistance = fVar6;
  uVar4 = *(undefined8 *)((longlong)&(param_1->SubsurfaceColor).field0_0x0 + 8);
  *(undefined8 *)&(param_1->Tint).field0_0x0 = *(undefined8 *)&(param_1->SubsurfaceColor).field0_0x0
  ;
  *(undefined8 *)((longlong)&(param_1->Tint).field0_0x0 + 8) = uVar4;
  return;
}

// UpgradeSubsurfaceProfileParameters @ 14849d4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UpgradeSubsurfaceProfileParameters(FSubsurfaceProfileStruct *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FLinearColor_u_0 local_78;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58 [5];
  
  fVar2 = __real_3dcccccd;
  fVar10 = __real_3f800000;
  if (param_1->bEnableBurley == false) {
    MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
              ((param_1->FalloffColor).field0_0x0._s_0.R,(float *)param_1,
               (float *)&param_1->MeanFreePathColor);
    MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
              ((param_1->FalloffColor).field0_0x0._s_0.G,&(param_1->SurfaceAlbedo).field0_0x0._s_0.G
               ,&(param_1->MeanFreePathColor).field0_0x0._s_0.G);
    MapFallOffColor2SurfaceAlbedoAndDiffuseMeanFreePath
              ((param_1->FalloffColor).field0_0x0._s_0.B,&(param_1->SurfaceAlbedo).field0_0x0._s_0.B
               ,&(param_1->MeanFreePathColor).field0_0x0._s_0.B);
    fVar7 = (param_1->MeanFreePathColor).field0_0x0._s_0.G;
    pfVar3 = &param_1->MeanFreePathDistance;
    fVar9 = (param_1->MeanFreePathColor).field0_0x0._s_0.R;
    if (fVar7 <= fVar9) {
      fVar7 = fVar9;
    }
    fVar9 = (param_1->MeanFreePathColor).field0_0x0._s_0.B;
    if (fVar7 <= fVar9) {
      fVar7 = fVar9;
    }
    if (fVar10 < fVar7) {
      fVar9 = (param_1->MeanFreePathColor).field0_0x0._s_0.G;
      fVar4 = (param_1->MeanFreePathColor).field0_0x0._s_0.B;
      fVar6 = (param_1->MeanFreePathColor).field0_0x0._s_0.A;
      fVar5 = fVar10 / fVar7;
      (param_1->MeanFreePathColor).field0_0x0._s_0.R =
           fVar5 * (param_1->MeanFreePathColor).field0_0x0._s_0.R;
      (param_1->MeanFreePathColor).field0_0x0._s_0.G = fVar5 * fVar9;
      (param_1->MeanFreePathColor).field0_0x0._s_0.B = fVar5 * fVar4;
      (param_1->MeanFreePathColor).field0_0x0._s_0.A = fVar5 * fVar6;
      fVar7 = fVar7 * param_1->ScatterRadius;
      if (__real_42480000 <= fVar7) {
        fVar7 = __real_42480000;
      }
      if (fVar7 <= fVar2) {
        fVar7 = fVar2;
      }
      *pfVar3 = fVar7;
    }
    fVar7 = *pfVar3 * ___real_3e4e19d1;
    param_1->bEnableBurley = true;
    *pfVar3 = fVar7;
    uVar1 = *(undefined8 *)((longlong)&(param_1->SubsurfaceColor).field0_0x0 + 8);
    *(undefined8 *)&(param_1->Tint).field0_0x0 =
         *(undefined8 *)&(param_1->SubsurfaceColor).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->Tint).field0_0x0 + 8) = uVar1;
  }
  pfVar3 = &param_1->MeanFreePathDistance;
  if (param_1->bEnableMeanFreePath == false) {
    fVar7 = *pfVar3;
    local_78._s_0.R = (param_1->MeanFreePathColor).field0_0x0._s_0.R * fVar7;
    local_78._s_0.G = (param_1->MeanFreePathColor).field0_0x0._s_0.G * fVar7;
    local_78._s_0.B = (param_1->MeanFreePathColor).field0_0x0._s_0.B * fVar7;
    local_78._s_0.A = (param_1->MeanFreePathColor).field0_0x0._s_0.A * fVar7;
    local_58[0]._0_8_ = *(undefined8 *)&(param_1->SurfaceAlbedo).field0_0x0;
    local_58[0]._8_8_ = *(undefined8 *)((longlong)&(param_1->SurfaceAlbedo).field0_0x0 + 8);
    GetMeanFreePathFromDiffuseMeanFreePath
              ((FLinearColor *)&local_68._s_0,(FLinearColor *)&local_58[0]._s_0,
               (FLinearColor *)&local_78._s_0);
    fVar7 = __real_3f19999a;
    fVar5 = local_68._s_0.B * __real_3f19999a;
    fVar6 = local_68._s_0.G * __real_3f19999a;
    fVar4 = local_68._s_0.R * __real_3f19999a;
    fVar9 = fVar6;
    if (fVar6 <= fVar4) {
      fVar9 = fVar4;
    }
    if (fVar9 <= fVar5) {
      fVar9 = fVar5;
    }
    fVar10 = fVar10 / fVar9;
    *pfVar3 = fVar9;
    (param_1->MeanFreePathColor).field0_0x0._s_0.R = fVar10 * fVar4;
    fVar8 = local_68._s_0.A * fVar7 * fVar10;
    (param_1->MeanFreePathColor).field0_0x0._s_0.G = fVar10 * fVar6;
    (param_1->MeanFreePathColor).field0_0x0._s_0.B = fVar10 * fVar5;
    (param_1->MeanFreePathColor).field0_0x0._s_0.A = fVar8;
    fVar7 = __real_41200000;
    if (fVar9 < fVar2) {
      (param_1->MeanFreePathColor).field0_0x0._s_0.R = fVar9 * fVar10 * fVar4 * __real_41200000;
      (param_1->MeanFreePathColor).field0_0x0._s_0.G = fVar10 * fVar6 * fVar9 * fVar7;
      (param_1->MeanFreePathColor).field0_0x0._s_0.B = fVar9 * fVar10 * fVar5 * fVar7;
      (param_1->MeanFreePathColor).field0_0x0._s_0.A = fVar8 * fVar9 * fVar7;
      *pfVar3 = 0.1;
    }
    fVar10 = param_1->WorldUnitScale * ___real_40555555;
    param_1->bEnableMeanFreePath = true;
    param_1->WorldUnitScale = fVar10;
  }
  return;
}

// Z_Construct_UClass_UNeuralProfile_NoRegister @ 14849f350

UClass * __cdecl Z_Construct_UClass_UNeuralProfile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NeuralProfile",
               &Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton,
               UNeuralProfile::StaticRegisterNativesUNeuralProfile,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNeuralProfile>,
               InternalVTableHelperCtorCaller<UNeuralProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton;
}

// Z_Construct_UClass_UReplayNetConnection_NoRegister @ 14849f400

UClass * __cdecl Z_Construct_UClass_UReplayNetConnection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplayNetConnection",
               &Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton,
               UReplayNetConnection::StaticRegisterNativesUReplayNetConnection,0x2a00,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplayNetConnection>,
               InternalVTableHelperCtorCaller<UReplayNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton;
}

// Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_NoRegister @ 14849f4c0

UClass * __cdecl Z_Construct_UClass_USkeletalMeshHalfEdgeBufferAccessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshHalfEdgeBufferAccessor",
               &Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton,
               USkeletalMeshHalfEdgeBufferAccessor::
               StaticRegisterNativesUSkeletalMeshHalfEdgeBufferAccessor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshHalfEdgeBufferAccessor>,
               InternalVTableHelperCtorCaller<USkeletalMeshHalfEdgeBufferAccessor>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton;
}

// Z_Construct_UClass_USpecularProfile_NoRegister @ 14849f580

UClass * __cdecl Z_Construct_UClass_USpecularProfile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpecularProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpecularProfile",
               &Z_Registration_Info_UClass_USpecularProfile.InnerSingleton,
               USpecularProfile::StaticRegisterNativesUSpecularProfile,0x458,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USpecularProfile>,
               InternalVTableHelperCtorCaller<USpecularProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpecularProfile.InnerSingleton;
}

// Z_Construct_UClass_USubsurfaceProfile_NoRegister @ 14849f630

UClass * __cdecl Z_Construct_UClass_USubsurfaceProfile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubsurfaceProfile",
               &Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton,
               USubsurfaceProfile::StaticRegisterNativesUSubsurfaceProfile,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubsurfaceProfile>,
               InternalVTableHelperCtorCaller<USubsurfaceProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton;
}

// OnCreateRenderThreadResources'' @ 1503fce00

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

// OnDestroyRenderThreadResources'' @ 1503fce40

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

// OnLightComponentRegistered'' @ 1503fce80

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnLightComponentRegistered__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnLightComponentRegistered._8_8_,
             FStaticLightingSystemInterface::OnLightComponentRegistered._16_4_);
  if (FStaticLightingSystemInterface::OnLightComponentRegistered._8_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnLightComponentRegistered._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FStaticLightingSystemInterface::OnLightComponentRegistered);
  return;
}

// OnLightComponentUnregistered'' @ 1503fcec0

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnLightComponentUnregistered__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnLightComponentUnregistered._8_8_,
             FStaticLightingSystemInterface::OnLightComponentUnregistered._16_4_);
  if (FStaticLightingSystemInterface::OnLightComponentUnregistered._8_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnLightComponentUnregistered._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FStaticLightingSystemInterface::OnLightComponentUnregistered);
  return;
}

// OnLightmassImportanceVolumeModified'' @ 1503fcf00

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::
OnLightmassImportanceVolumeModified__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnLightmassImportanceVolumeModified._8_8_,
             FStaticLightingSystemInterface::OnLightmassImportanceVolumeModified._16_4_);
  if (FStaticLightingSystemInterface::OnLightmassImportanceVolumeModified._8_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnLightmassImportanceVolumeModified._8_8_)
    ;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FStaticLightingSystemInterface::OnLightmassImportanceVolumeModified);
  return;
}

// OnMaterialInvalidated'' @ 1503fcf40

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnMaterialInvalidated__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnMaterialInvalidated._40_8_,
             FStaticLightingSystemInterface::OnMaterialInvalidated._48_4_);
  if (FStaticLightingSystemInterface::OnMaterialInvalidated._40_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnMaterialInvalidated._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x0001503fcf72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FStaticLightingSystemInterface::OnMaterialInvalidated);
  return;
}

// OnPrimitiveComponentRegistered'' @ 1503fcf80

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnPrimitiveComponentRegistered__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnPrimitiveComponentRegistered._8_8_,
             FStaticLightingSystemInterface::OnPrimitiveComponentRegistered._16_4_);
  if (FStaticLightingSystemInterface::OnPrimitiveComponentRegistered._8_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnPrimitiveComponentRegistered._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FStaticLightingSystemInterface::OnPrimitiveComponentRegistered);
  return;
}

// OnPrimitiveComponentUnregistered'' @ 1503fcfc0

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnPrimitiveComponentUnregistered__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnPrimitiveComponentUnregistered._8_8_,
             FStaticLightingSystemInterface::OnPrimitiveComponentUnregistered._16_4_);
  if (FStaticLightingSystemInterface::OnPrimitiveComponentUnregistered._8_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnPrimitiveComponentUnregistered._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FStaticLightingSystemInterface::OnPrimitiveComponentUnregistered);
  return;
}

// OnSkyAtmosphereModified'' @ 1503fd000

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnSkyAtmosphereModified__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnSkyAtmosphereModified._8_8_,
             FStaticLightingSystemInterface::OnSkyAtmosphereModified._16_4_);
  if (FStaticLightingSystemInterface::OnSkyAtmosphereModified._8_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnSkyAtmosphereModified._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FStaticLightingSystemInterface::OnSkyAtmosphereModified);
  return;
}

// OnStationaryLightChannelReassigned'' @ 1503fd040

void __cdecl
`dynamic_atexit_destructor_for_'FStaticLightingSystemInterface::OnStationaryLightChannelReassigned__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FStaticLightingSystemInterface::OnStationaryLightChannelReassigned._8_8_,
             FStaticLightingSystemInterface::OnStationaryLightChannelReassigned._16_4_);
  if (FStaticLightingSystemInterface::OnStationaryLightChannelReassigned._8_8_ != 0) {
    FMemory::Free((void *)FStaticLightingSystemInterface::OnStationaryLightChannelReassigned._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FStaticLightingSystemInterface::OnStationaryLightChannelReassigned);
  return;
}

// ShaderTypeRegistration'' @ 1503fd080

void __cdecl `dynamic_atexit_destructor_for_'Nanite::FMemcpy_CS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503fd090

void __cdecl
`dynamic_atexit_destructor_for_'FSSProfilePreIntegratedPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503fd0a0

void __cdecl
`dynamic_atexit_destructor_for_'FSpecularProfileConvolveCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503fd0b0

void __cdecl `dynamic_atexit_destructor_for_'FSpecularProfileCopyCS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 1503fd0c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceHighestMipOnUITexturesEnabled'' @ 1503fd140

void __cdecl _dynamic_atexit_destructor_for__CVarForceHighestMipOnUITexturesEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceHighestMipOnUITexturesEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingAsync'' @ 1503fd160

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingAsync__(void)

{
  CVarNaniteStreamingAsync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingAsync);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingBandwidthLimit'' @ 1503fd180

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingBandwidthLimit__(void)

{
  CVarNaniteStreamingBandwidthLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingBandwidthLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingDynamicallyGrowAllocations'' @ 1503fd1a0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingDynamicallyGrowAllocations__(void)

{
  CVarNaniteStreamingDynamicallyGrowAllocations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingDynamicallyGrowAllocations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingExplicitRequests'' @ 1503fd1c0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingExplicitRequests__(void)

{
  CVarNaniteStreamingExplicitRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingExplicitRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingGPUFeedback'' @ 1503fd1e0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingGPUFeedback__(void)

{
  CVarNaniteStreamingGPUFeedback._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingGPUFeedback);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingImposters'' @ 1503fd200

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingImposters__(void)

{
  CVarNaniteStreamingImposters._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingImposters);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingMaxPageInstallsPerFrame'' @ 1503fd220

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingMaxPageInstallsPerFrame__(void)

{
  CVarNaniteStreamingMaxPageInstallsPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingMaxPageInstallsPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingMaxPendingPages'' @ 1503fd240

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingMaxPendingPages__(void)

{
  CVarNaniteStreamingMaxPendingPages._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingMaxPendingPages)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingMaxPendingRequests'' @ 1503fd260

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingMaxPendingRequests__(void)

{
  CVarNaniteStreamingMaxPendingRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingMaxPendingRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingNumInitialImposters'' @ 1503fd280

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingNumInitialImposters__(void)

{
  CVarNaniteStreamingNumInitialImposters._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingNumInitialImposters);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingNumInitialRootPages'' @ 1503fd2a0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingNumInitialRootPages__(void)

{
  CVarNaniteStreamingNumInitialRootPages._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingNumInitialRootPages);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingNumRetries'' @ 1503fd2c0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingNumRetries__(void)

{
  CVarNaniteStreamingNumRetries._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingNumRetries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingPoolResize'' @ 1503fd2e0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingPoolResize__(void)

{
  CVarNaniteStreamingPoolResize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingPoolResize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingPoolSize'' @ 1503fd300

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingPoolSize__(void)

{
  CVarNaniteStreamingPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingPrefetch'' @ 1503fd320

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingPrefetch__(void)

{
  CVarNaniteStreamingPrefetch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingPrefetch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingQualityScaleMaxPoolPercentage'' @ 1503fd340

void __cdecl
_dynamic_atexit_destructor_for__CVarNaniteStreamingQualityScaleMaxPoolPercentage__(void)

{
  CVarNaniteStreamingQualityScaleMaxPoolPercentage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingQualityScaleMaxPoolPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingQualityScaleMinPoolPercentage'' @ 1503fd360

void __cdecl
_dynamic_atexit_destructor_for__CVarNaniteStreamingQualityScaleMinPoolPercentage__(void)

{
  CVarNaniteStreamingQualityScaleMinPoolPercentage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingQualityScaleMinPoolPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingQualityScaleMinQuality'' @ 1503fd380

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingQualityScaleMinQuality__(void)

{
  CVarNaniteStreamingQualityScaleMinQuality._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingQualityScaleMinQuality);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingReservedResourceGrowOnly'' @ 1503fd3a0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingReservedResourceGrowOnly__(void)

{
  CVarNaniteStreamingReservedResourceGrowOnly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingReservedResourceGrowOnly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation'' @ 1503fd3c0

void __cdecl
_dynamic_atexit_destructor_for__CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation__
          (void)

{
  CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingReservedResourceIgnoreInitialRootAllocation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingReservedResources'' @ 1503fd3e0

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingReservedResources__(void)

{
  CVarNaniteStreamingReservedResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingReservedResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingVerificationLevel'' @ 1503fd400

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteStreamingVerificationLevel__(void)

{
  CVarNaniteStreamingVerificationLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingVerificationLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPartiallyResidentTextureEnabled'' @ 1503fd420

void __cdecl _dynamic_atexit_destructor_for__CVarPartiallyResidentTextureEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPartiallyResidentTextureEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPartiallyResidentTextureReducedMemory'' @ 1503fd440

void __cdecl _dynamic_atexit_destructor_for__CVarPartiallyResidentTextureReducedMemory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPartiallyResidentTextureReducedMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingApproximateCompactionRatio'' @ 1503fd460

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingApproximateCompactionRatio__(void)

{
  CVarRayTracingApproximateCompactionRatio._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingApproximateCompactionRatio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingEnable'' @ 1503fd480

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingMaxBuiltPrimitivesPerFrame'' @ 1503fd4a0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingMaxBuiltPrimitivesPerFrame__(void)

{
  CVarRayTracingMaxBuiltPrimitivesPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingMaxBuiltPrimitivesPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingNumAlwaysResidentLODs'' @ 1503fd4c0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingNumAlwaysResidentLODs__(void)

{
  CVarRayTracingNumAlwaysResidentLODs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingNumAlwaysResidentLODs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingOnDemandGeometryBuffersStreaming'' @ 1503fd4e0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingOnDemandGeometryBuffersStreaming__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingOnDemandGeometryBuffersStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingPendingBuildPriorityBoostPerFrame'' @ 1503fd500

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingPendingBuildPriorityBoostPerFrame__(void)

{
  CVarRayTracingPendingBuildPriorityBoostPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingPendingBuildPriorityBoostPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingResidentGeometryMemoryPoolSizeInMB'' @ 1503fd520

void __cdecl
_dynamic_atexit_destructor_for__CVarRayTracingResidentGeometryMemoryPoolSizeInMB__(void)

{
  CVarRayTracingResidentGeometryMemoryPoolSizeInMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingResidentGeometryMemoryPoolSizeInMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingShowOnScreenWarnings'' @ 1503fd540

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingShowOnScreenWarnings__(void)

{
  CVarRayTracingShowOnScreenWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingShowOnScreenWarnings)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingTestCheckIntegrity'' @ 1503fd560

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingTestCheckIntegrity__(void)

{
  CVarRayTracingTestCheckIntegrity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingTestCheckIntegrity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingUseReferenceBasedResidency'' @ 1503fd580

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingUseReferenceBasedResidency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingUseReferenceBasedResidency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSSProfilesPreIntegratedTextureForceUpdate'' @ 1503fd5a0

void __cdecl _dynamic_atexit_destructor_for__CVarSSProfilesPreIntegratedTextureForceUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSSProfilesPreIntegratedTextureForceUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSSProfilesPreIntegratedTextureResolution'' @ 1503fd5c0

void __cdecl _dynamic_atexit_destructor_for__CVarSSProfilesPreIntegratedTextureResolution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSSProfilesPreIntegratedTextureResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSSProfilesSamplingChannelSelection'' @ 1503fd5e0

void __cdecl _dynamic_atexit_destructor_for__CVarSSProfilesSamplingChannelSelection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSSProfilesSamplingChannelSelection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSpecularProfileForceUpdate'' @ 1503fd600

void __cdecl _dynamic_atexit_destructor_for__CVarSpecularProfileForceUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSpecularProfileForceUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSpecularProfileResolution'' @ 1503fd620

void __cdecl _dynamic_atexit_destructor_for__CVarSpecularProfileResolution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSpecularProfileResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarYourCommand'' @ 1503fd640

void __cdecl _dynamic_atexit_destructor_for__CVarYourCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarYourCommand);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd660

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

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd690

void __cdecl
`InternalGetDefaultObject<TResourceArray<int,0>_>'::__l3::_dynamic_atexit_destructor_for__Default__
          (void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd6c0

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523ca88)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cab0)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cad8)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cb00)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cb28)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cb50)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cb78)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cba0)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_char>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cc18)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<1,unsigned_short>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cbf0)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_char>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cc68)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TLegacySkinWeightInfo<0,unsigned_short>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cc40)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedNormal>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cce0)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523ccb8)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,0>_>'
::__l3::_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cc90)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cd08)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503fd9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<FMeshToMeshVertData,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15523cbc8)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503fda20

void __cdecl
```Nanite::AddPass_Memmove'::__l10::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503fda27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503fda40

void __cdecl
```Nanite::FStreamingManager::BeginAsyncUpdate'::__l17::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503fda47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503fda60

void __cdecl
```Nanite::FStreamingManager::EndAsyncUpdate'::__l17::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503fda67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503fda80

void __cdecl
```FSpecularProfileTextureManager::GetAtlasTexture'::__l31::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503fda87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503fdaa0

void __cdecl
```Nanite::FStreamingManager::BeginAsyncUpdate'::__l41::<lambda_2>::operator()<>'::__l3::<lambda_1>
::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503fdaa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GNeuralProfileManager'' @ 1503fdac0

void __cdecl _dynamic_atexit_destructor_for__GNeuralProfileManager__(void)

{
  if (GNeuralProfileManager.Ptr != (INeuralProfileManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503fdad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*GNeuralProfileManager.Ptr)(GNeuralProfileManager.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GNeuralProfileModelTextureManager'' @ 1503fdae0

void __cdecl _dynamic_atexit_destructor_for__GNeuralProfileModelTextureManager__(void)

{
  GNeuralProfileModelTextureManager._0_8_ =
       &___7__TGlobalResource_VFNeuralProfileModelTextureManager___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GNeuralProfileModelTextureManager);
  GNeuralProfileModelTextureManager._0_8_ = &___7FNeuralProfileModelTextureManager__6B_;
  if (GNeuralProfileModelTextureManager._32_8_ != 0) {
    FMemory::Free((void *)GNeuralProfileModelTextureManager._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GNeuralProfileModelTextureManager);
  return;
}

// `dynamic_atexit_destructor_for_'GSSProfiles'' @ 1503fdb40

void __cdecl _dynamic_atexit_destructor_for__GSSProfiles__(void)

{
  if (GSSProfiles.Reference != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503fdb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((GSSProfiles.Reference)->_padding_ + 0x38))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSSProfilesPreIntegratedTexture'' @ 1503fdb60

void __cdecl _dynamic_atexit_destructor_for__GSSProfilesPreIntegratedTexture__(void)

{
  if (GSSProfilesPreIntegratedTexture.Reference != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503fdb6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((GSSProfilesPreIntegratedTexture.Reference)->_padding_ + 0x38))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSpecularProfileTextureAtlas'' @ 1503fdb80

void __cdecl _dynamic_atexit_destructor_for__GSpecularProfileTextureAtlas__(void)

{
  if (GSpecularProfileTextureAtlas.Reference != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503fdb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((GSpecularProfileTextureAtlas.Reference)->_padding_ + 0x38))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSpecularProfileTextureManager'' @ 1503fdba0

void __cdecl _dynamic_atexit_destructor_for__GSpecularProfileTextureManager__(void)

{
  GSpecularProfileTextureManager._0_8_ =
       &___7__TGlobalResource_VFSpecularProfileTextureManager___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GSpecularProfileTextureManager);
  GSpecularProfileTextureManager._0_8_ = &___7FSpecularProfileTextureManager__6B_;
  DestructItems<FSpecularProfileTextureManager::FProfileEntry,int>
            ((FProfileEntry *)GSpecularProfileTextureManager._32_8_,
             GSpecularProfileTextureManager._40_4_);
  if (GSpecularProfileTextureManager._32_8_ != 0) {
    FMemory::Free((void *)GSpecularProfileTextureManager._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GSpecularProfileTextureManager);
  return;
}

// `dynamic_atexit_destructor_for_'GStreamingManager'' @ 1503fdc10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl Nanite::_dynamic_atexit_destructor_for__GStreamingManager__(void)

{
  GStreamingManager._0_8_ = &___7__TGlobalResource_VFStreamingManager_Nanite___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GStreamingManager);
  FStreamingManager::~FStreamingManager((FStreamingManager *)&GStreamingManager);
  return;
}

// `dynamic_atexit_destructor_for_'GSubsurfaceProfileTextureObject'' @ 1503fdc50

void __cdecl _dynamic_atexit_destructor_for__GSubsurfaceProfileTextureObject__(void)

{
  GSubsurfaceProfileTextureObject._0_8_ =
       &___7__TGlobalResource_VFSubsurfaceProfileTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GSubsurfaceProfileTextureObject);
  GSubsurfaceProfileTextureObject._0_8_ = &___7FSubsurfaceProfileTexture__6B_;
  if (GSubsurfaceProfileTextureObject._32_8_ != 0) {
    FMemory::Free((void *)GSubsurfaceProfileTextureObject._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GSubsurfaceProfileTextureObject);
  return;
}

// `dynamic_atexit_destructor_for_'LogNaniteStreaming'' @ 1503fdcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNaniteStreaming__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNaniteStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'LogNeuralProfile'' @ 1503fdcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNeuralProfile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNeuralProfile);
  return;
}

// `dynamic_atexit_destructor_for_'LogRayTracingGeometryManager'' @ 1503fdcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRayTracingGeometryManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRayTracingGeometryManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogSkeletalMeshHalfEdgeBufferAccessor'' @ 1503fdd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkeletalMeshHalfEdgeBufferAccessor__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkeletalMeshHalfEdgeBufferAccessor);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpecularProfile'' @ 1503fdd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSpecularProfile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpecularProfile);
  return;
}

// `dynamic_atexit_destructor_for_'LogSubsurfaceProfile'' @ 1503fdd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSubsurfaceProfile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSubsurfaceProfile);
  return;
}

// `dynamic_atexit_destructor_for_'SkeletalMesh'' @ 1503fdd70

void __cdecl UE::RenderCommandPipe::_dynamic_atexit_destructor_for__SkeletalMesh__(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong this;
  FTaskHandle FVar4;
  bool bVar5;
  
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SkeletalMesh.ConsoleVariable);
  FVar4 = SkeletalMesh.RecordTask;
  if (SkeletalMesh.RecordTask.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)SkeletalMesh.RecordTask.Pimpl.Reference + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar4.Pimpl.Reference)();
    }
  }
  this = SkeletalMesh._padding_;
  if (SkeletalMesh._padding_ != 0) {
    FCommandList::Release((FCommandList *)(SkeletalMesh._padding_ + 0x28));
    if ((GIsCriticalError == false) && (*(int *)(this + 0x20) != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GIsCriticalError || !NumMarks)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x74,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FMemStackBase::FreeChunks((FMemStackBase *)this,(FTaggedMemory *)0x0);
    ::operator_delete((void *)this,0x58);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503fde20

void __cdecl
`Nanite::FMemcpy_CS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_Nanite::FMemcpy_CS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503fde40

void __cdecl
`FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503fde60

void __cdecl
`FSpecularProfileConvolveCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSpecularProfileConvolveCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503fde80

void __cdecl
`FSpecularProfileCopyCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSpecularProfileCopyCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503fdea0

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
`Nanite::FMemcpy_CS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503fdec0

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
`FSSProfilePreIntegratedPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503fdee0

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
`FSpecularProfileConvolveCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503fdf00

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
`FSpecularProfileCopyCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_NaniteStreaming'' @ 1503fdf20

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NaniteStreaming__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NaniteStreaming.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NaniteStreaming.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NaniteStreaming.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_NaniteStreamingDetail'' @ 1503fdf40

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NaniteStreamingDetail__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NaniteStreamingDetail.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NaniteStreamingDetail.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NaniteStreamingDetail.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_RayTracingGeometry'' @ 1503fdf60

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_RayTracingGeometry__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_RayTracingGeometry.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_RayTracingGeometry.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_RayTracingGeometry.Name.Data.AllocatorInstance.Data !=
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

// operator() @ 15052b050

bool __thiscall `ShouldAllowPlatformTiling'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1739247822558986314>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1739247822558986314>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

