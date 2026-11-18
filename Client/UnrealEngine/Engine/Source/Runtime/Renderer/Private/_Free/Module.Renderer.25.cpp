// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 423

// AsyncTasks'' @ 14100dda0

void __cdecl `dynamic_initializer_for_'FSceneRenderProcessor::AsyncTasks__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSceneRenderProcessor::AsyncTasks__);
  return;
}

// ExtensionRegistration'' @ 14100ddc0

void __cdecl `dynamic_initializer_for_'FSceneCulling::ExtensionRegistration__(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FSceneExtensionRegistry *pFVar4;
  bool bVar5;
  int iVar6;
  TSceneExtensionRegistration<FSceneCulling> *local_18 [2];
  
  if ((FSceneExtensionRegistry::GlobalRegistry == (FSceneExtensionRegistry *)0x0) &&
     (FSceneExtensionRegistry::GlobalRegistry = ::operator_new(0x10),
     FSceneExtensionRegistry::GlobalRegistry != (FSceneExtensionRegistry *)0x0)) {
    (FSceneExtensionRegistry::GlobalRegistry->Factories).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayNum = 0;
    (FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayMax = 0;
  }
  pFVar4 = FSceneExtensionRegistry::GlobalRegistry;
  FSceneCulling::ExtensionRegistration._8_4_ =
       (FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayNum;
  pFVar2 = (FSceneExtensionRegistry::GlobalRegistry->Factories).AllocatorInstance.Data;
  local_18[0] = &FSceneCulling::ExtensionRegistration;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (pFVar4->Factories).ArrayNum;
  piVar1 = &(pFVar4->Factories).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,piVar1);
  }
  (pFVar4->Factories).ArrayNum = iVar6 + 1;
  *(TSceneExtensionRegistration<FSceneCulling> **)
   ((pFVar4->Factories).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
  atexit(`dynamic_atexit_destructor_for_'FSceneCulling::ExtensionRegistration__);
  return;
}

// GDefaultData'' @ 14100dec0

void __cdecl `dynamic_initializer_for_'FSceneCaptureCustomRenderPassUserData::GDefaultData__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSceneCaptureCustomRenderPassUserData::GDefaultData__);
  return;
}

// OnCreateRenderThreadResources'' @ 14100dee0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 14100df00

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ShaderTypeRegistration'' @ 14100df20

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
`dynamic_initializer_for_'FComputeExplicitChunkBounds_CS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FComputeExplicitChunkBounds_CS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FComputeExplicitChunkBounds_CS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FComputeExplicitChunkBounds_CS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100df70

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

void __cdecl `dynamic_initializer_for_'FHZBTestPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FHZBTestPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FHZBTestPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FHZBTestPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100dfc0

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

void __cdecl `dynamic_initializer_for_'FHitProxyPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FHitProxyPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMeshMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FHitProxyPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FHitProxyPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100e010

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

void __cdecl `dynamic_initializer_for_'FHitProxyVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FHitProxyVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMeshMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FHitProxyVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FHitProxyVS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100e060

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

void __cdecl `dynamic_initializer_for_'FOcclusionFeedbackPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FOcclusionFeedbackPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FOcclusionFeedbackPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FOcclusionFeedbackPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100e0b0

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

void __cdecl `dynamic_initializer_for_'FOcclusionFeedbackVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FOcclusionFeedbackVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FOcclusionFeedbackVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FOcclusionFeedbackVS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100e100

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

void __cdecl `dynamic_initializer_for_'FOcclusionQueryPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FOcclusionQueryPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FOcclusionQueryPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FOcclusionQueryPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100e150

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

void __cdecl `dynamic_initializer_for_'FOcclusionQueryVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FOcclusionQueryVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FOcclusionQueryVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FOcclusionQueryVS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100e1a0

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

void __cdecl `dynamic_initializer_for_'FSceneCapturePS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FSceneCapturePS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FSceneCapturePS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FSceneCapturePS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14100e1f0

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

void __cdecl `dynamic_initializer_for_'FSceneCullingDebugRender_CS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FSceneCullingDebugRender_CS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FSceneCullingDebugRender_CS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FSceneCullingDebugRender_CS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 14100e240

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__07_0A__00_00_0A__0A__00_0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100e300

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100e3c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_00_0A__0A__03_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100e480

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_03_0A__0A__03_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100e540

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100e600

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  FLLMScope local_res8 [2];
  FRHIDepthStencilState *local_res10;
  FMemScope local_res18 [2];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__02_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18 = 0x7000300;
    local_10 = 7;
    local_c = 0xffff;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1159,L"RHIMisc/CreateDepthStencilState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1159,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1159,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x58))(GDynamicRHI,&local_res10,&local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
    ::StaticResource.StateRHI.Reference = local_res10;
    local_res10 = (FRHIDepthStencilState *)0x0;
    if (this.Reference != (FRHIDepthStencilState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100e790

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  FLLMScope local_res8 [2];
  FRHIDepthStencilState *local_res10;
  FMemScope local_res18 [2];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18 = 0x7000700;
    local_10 = 7;
    local_c = 0xffff;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1159,L"RHIMisc/CreateDepthStencilState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1159,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIDepthStencilState>___cdecl_RHICreateDepthStencilState(FDepthStencilStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1159,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x58))(GDynamicRHI,&local_res10,&local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
    ::StaticResource.StateRHI.Reference = local_res10;
    local_res10 = (FRHIDepthStencilState *)0x0;
    if (this.Reference != (FRHIDepthStencilState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100e920

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_00_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 0x102;
    local_14 = 0;
    local_c = 0x100;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1153,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1153,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_res10,local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100eab0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_01_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 0x202;
    local_14 = 0;
    local_c = 0x100;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1153,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1153,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_res10,local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100ec40

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 2;
    local_14 = 0;
    local_c = 0x100;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1153,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1153,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_res10,local_18);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100edd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__0A__0A__00__V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010101;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_14 = 0;
    local_10 = 1;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res10,&local_28);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14100ef60

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  FLLMScope local_res8 [2];
  FRHIResource *local_res10;
  FMemScope local_res18 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
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
    local_28 = 0x1010100;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 1;
    local_10 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                        ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
        _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (local_res8,
               `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
               ::__l2::LLMScope_Name1147,false,None,Default,true);
    FMemScope::FMemScope
              (local_res18,
               &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                ::__l2::LLMScope_Name1147,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res10,&local_28);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'CVarAllowPrecomputedVisibility'' @ 14100f100

void __cdecl _dynamic_initializer_for__CVarAllowPrecomputedVisibility__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowPrecomputedVisibility,L"r.AllowPrecomputedVisibility",
             &GAllowPrecomputedVisibility,
             L"If zero, precomputed visibility will not be used to cull primitives.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarAllowPrecomputedVisibility__);
  return;
}

// `dynamic_initializer_for_'CVarCaptureNextSceneCullingUpdate'' @ 14100f150

void __cdecl _dynamic_initializer_for__CVarCaptureNextSceneCullingUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCaptureNextSceneCullingUpdate,L"r.CaptureNextSceneCullingUpdate",
             &GCaptureNextSceneCullingUpdate,
             L"0 to capture the immideately next frame using e.g. RenderDoc or PIX.\n > 0: N frames delay\n < 0: disabled"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarCaptureNextSceneCullingUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarDownsampledOcclusionQueries'' @ 14100f1a0

void __cdecl _dynamic_initializer_for__CVarDownsampledOcclusionQueries__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDownsampledOcclusionQueries,L"r.DownsampledOcclusionQueries",
             &GDownsampledOcclusionQueries,
             L"Whether to issue occlusion queries to a downsampled depth buffer",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDownsampledOcclusionQueries__);
  return;
}

// `dynamic_initializer_for_'CVarEnableComputeBuildHZB'' @ 14100f1f0

void __cdecl _dynamic_initializer_for__CVarEnableComputeBuildHZB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableComputeBuildHZB,L"r.EnableComputeBuildHZB",&GEnableComputeBuildHZB,
             L"If zero, build HZB using graphics pipeline.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarEnableComputeBuildHZB__);
  return;
}

// `dynamic_initializer_for_'CVarLogCellSizes'' @ 14100f240

void __cdecl _dynamic_initializer_for__CVarLogCellSizes__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarLogCellSizes,L"r.SceneCulling.LogCellSizes",local_res8,L"",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLogCellSizes__);
  return;
}

// `dynamic_initializer_for_'CVarMobileEnableOcclusionExtraFrame'' @ 14100f290

void __cdecl _dynamic_initializer_for__CVarMobileEnableOcclusionExtraFrame__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMobileEnableOcclusionExtraFrame,L"r.Mobile.EnableOcclusionExtraFrame",local_res8,
             L"Whether to allow extra frame for occlusion culling (enabled by default)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMobileEnableOcclusionExtraFrame__);
  return;
}

// `dynamic_initializer_for_'CVarOcclusionCullCascadedShadowMaps'' @ 14100f2e0

void __cdecl _dynamic_initializer_for__CVarOcclusionCullCascadedShadowMaps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOcclusionCullCascadedShadowMaps,L"r.Shadow.OcclusionCullCascadedShadowMaps",
             &GOcclusionCullCascadedShadowMaps,
             L"Whether to use occlusion culling on cascaded shadow maps.  Disabled by default because rapid view changes reveal new regions too quickly for latent occlusion queries to work with."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarOcclusionCullCascadedShadowMaps__);
  return;
}

// `dynamic_initializer_for_'CVarOcclusionFeeback_Blending'' @ 14100f330

void __cdecl _dynamic_initializer_for__CVarOcclusionFeeback_Blending__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOcclusionFeeback_Blending,L"r.OcclusionFeedback.Blending",
             &GOcclusionFeeback_Blending,
             L"0: Opaque \n1: Enable blending  (default) \n2: Enable pixel discard",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarOcclusionFeeback_Blending__);
  return;
}

// `dynamic_initializer_for_'CVarOcclusionQueryDispatchOrder'' @ 14100f380

void __cdecl _dynamic_initializer_for__CVarOcclusionQueryDispatchOrder__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOcclusionQueryDispatchOrder,L"r.OcclusionQueryDispatchOrder",
             &GOcclusionQueryDispatchOrder,
             L"0: Grouped queries before individual (default)\n1: Individual queries before grouped"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarOcclusionQueryDispatchOrder__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingSceneCaptures'' @ 14100f3d0

void __cdecl _dynamic_initializer_for__CVarRayTracingSceneCaptures__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingSceneCaptures,L"r.RayTracing.SceneCaptures",&GRayTracingSceneCaptures,
             L"Enable ray tracing in scene captures.\n -1: Use scene capture settings (default) \n 0: off \n 1: on"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingSceneCaptures__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCaptureAllowRenderInMainRenderer'' @ 14100f420

void __cdecl _dynamic_initializer_for__CVarSceneCaptureAllowRenderInMainRenderer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSceneCaptureAllowRenderInMainRenderer,L"r.SceneCapture.AllowRenderInMainRenderer",
             &GSceneCaptureAllowRenderInMainRenderer,
             L"Whether to allow SceneDepth & DeviceDepth scene capture to render in the main renderer as an optimization.\n0: render as an independent renderer.\n1: render as part of the main renderer if Render in Main Renderer is enabled on scene capture component.\n"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCaptureAllowRenderInMainRenderer__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCaptureCubeSinglePass'' @ 14100f470

void __cdecl _dynamic_initializer_for__CVarSceneCaptureCubeSinglePass__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSceneCaptureCubeSinglePass,L"r.SceneCapture.CubeSinglePass",
             &GSceneCaptureCubeSinglePass,
             L"Whether to run all 6 faces of cube map capture in a single scene renderer pass.",0x40
            );
  atexit(_dynamic_atexit_destructor_for__CVarSceneCaptureCubeSinglePass__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingAsyncQuery'' @ 14100f4c0

void __cdecl _dynamic_initializer_for__CVarSceneCullingAsyncQuery__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSceneCullingAsyncQuery,L"r.SceneCulling.Async.Query",local_res8,
             L"Enable/Disable async culling scene queries.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingAsyncQuery__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingAsyncUpdate'' @ 14100f510

void __cdecl _dynamic_initializer_for__CVarSceneCullingAsyncUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSceneCullingAsyncUpdate,L"r.SceneCulling.Async.Update",local_res8,
             L"Enable/Disable async culling scene update.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingAsyncUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingDbgPattern'' @ 14100f560

void __cdecl _dynamic_initializer_for__CVarSceneCullingDbgPattern__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSceneCullingDbgPattern,L"r.SceneCulling.DbgPattern",&GSceneCullingDbgPattern,L"",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingDbgPattern__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingDebugRenderMode'' @ 14100f5b0

void __cdecl _dynamic_initializer_for__CVarSceneCullingDebugRenderMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSceneCullingDebugRenderMode,L"r.SceneCulling.DebugRenderMode",local_res8,
             L"SceneCulling debug render mode.\n 0 = Disabled (default)\n 1 = Enabled",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingDebugRenderMode__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingMaxCellSize'' @ 14100f600

void __cdecl _dynamic_initializer_for__CVarSceneCullingMaxCellSize__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1048576.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSceneCullingMaxCellSize,L"r.SceneCulling.MaxCellSize",local_res8,
             L"Hierarchy max cell size. Objects with larger bounds will be classified as uncullable."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingMaxCellSize__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingMinCellSize'' @ 14100f650

void __cdecl _dynamic_initializer_for__CVarSceneCullingMinCellSize__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 4096.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSceneCullingMinCellSize,L"r.SceneCulling.MinCellSize",local_res8,
             L"Set the minimum cell size & level in the hierarchy, rounded to nearest POT. Clamps the level for object footprints.\n  This trades culling effectiveness for construction cost and memory use.\n  The minimum cell size is (will be) used for precomputing the key for static ISMs.\n  Currently read-only as there is implementation to rebuild the whole structure on a change.\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingMinCellSize__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingPrecomputed'' @ 14100f6a0

void __cdecl _dynamic_initializer_for__CVarSceneCullingPrecomputed__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSceneCullingPrecomputed,L"r.SceneCulling.Precomputed",local_res8,
             L"Enable/Disable precomputed spatial hashes for scene culling.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingPrecomputed__);
  return;
}

// `dynamic_initializer_for_'CVarSceneCullingUseForceRebuildExplicitChunkBounds'' @ 14100f6f0

void __cdecl _dynamic_initializer_for__CVarSceneCullingUseForceRebuildExplicitChunkBounds__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSceneCullingUseForceRebuildExplicitChunkBounds,
             L"r.SceneCulling.ForceRebuildExplicitChunkBounds",local_res8,
             L"Forces a rebuild of the explicit chunk bounds each frame, for debugging only.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSceneCullingUseForceRebuildExplicitChunkBounds__);
  return;
}

// `dynamic_initializer_for_'CVarSceneRenderCleanUpMode'' @ 14100f740

void __cdecl _dynamic_initializer_for__CVarSceneRenderCleanUpMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSceneRenderCleanUpMode,L"r.SceneRender.CleanUpMode",&GSceneRenderCleanUpMode,
             L"Controls when to perform clean up of the scene renderer.\n 0: clean up is performed immediately after render on the render thread.\n 1: clean up is performed asynchronously in a task. (default)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSceneRenderCleanUpMode__);
  return;
}

// `dynamic_initializer_for_'CVarShowPrecomputedVisibilityCells'' @ 14100f790

void __cdecl _dynamic_initializer_for__CVarShowPrecomputedVisibilityCells__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowPrecomputedVisibilityCells,L"r.ShowPrecomputedVisibilityCells",
             &GShowPrecomputedVisibilityCells,L"If not zero, draw all precomputed visibility cells."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarShowPrecomputedVisibilityCells__);
  return;
}

// `dynamic_initializer_for_'CVarShowRelevantPrecomputedVisibilityCells'' @ 14100f7e0

void __cdecl _dynamic_initializer_for__CVarShowRelevantPrecomputedVisibilityCells__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowRelevantPrecomputedVisibilityCells,L"r.ShowRelevantPrecomputedVisibilityCells"
             ,&GShowRelevantPrecomputedVisibilityCells,
             L"If not zero, draw relevant precomputed visibility cells only.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarShowRelevantPrecomputedVisibilityCells__);
  return;
}

// `dynamic_initializer_for_'CVarSmallFootprintSideThreshold'' @ 14100f830

void __cdecl _dynamic_initializer_for__CVarSmallFootprintSideThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSmallFootprintSideThreshold,L"r.SceneCulling.SmallFootprintSideThreshold",
             local_res8,
             L"Queries with a smaller footprint (maximum) side (in number of cells in the lowest level) go down the footprint based path.\n  The default (16) <=> a footprint of 16x16x16 cells or 8 blocks"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSmallFootprintSideThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugEnable'' @ 14100f880

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSplitScreenDebugEnable,L"r.SplitScreenDebug.Enable",local_res8,
             L"Debug feature to replace the main view with a pair of split screen views for testing purposes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugEnable__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugFOVZoom'' @ 14100f8d0

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugFOVZoom__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSplitScreenDebugFOVZoom,L"r.SplitScreenDebug.FOVZoom",local_res8,
             L"Amount to zoom FOV.  Split screen expands the FOV for the new aspect.  This setting can counteract that expansion."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugFOVZoom__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugLetterbox'' @ 14100f920

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugLetterbox__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSplitScreenDebugLetterbox,L"r.SplitScreenDebug.Letterbox",local_res8,
             L"When non-zero, letterboxes away this percent of screen (rounds up to nearest multiple of 8 pixels, max 50%)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugLetterbox__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugLumenScene'' @ 14100f970

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugLumenScene__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSplitScreenDebugLumenScene,L"r.SplitScreenDebug.LumenScene",local_res8,
             L"For split screen debugging, allocate a separate Lumen scene for the second view.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugLumenScene__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugMultiViewFamily'' @ 14100f9c0

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugMultiViewFamily__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSplitScreenDebugMultiViewFamily,L"r.SplitScreenDebug.MultiViewFamily",local_res8,
             L"Uses two renderers with one view each rather than two views.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugMultiViewFamily__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugOrbit'' @ 14100fa10

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugOrbit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSplitScreenDebugOrbit,L"r.SplitScreenDebug.Orbit",local_res8,
             L"When rotating by yaw, orbit around camera target actor, to keep third person character visible."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugOrbit__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugRotate0'' @ 14100fa60

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugRotate0__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSplitScreenDebugRotate0,L"r.SplitScreenDebug.Rotate0",local_res8,
             L"Rotate first split screen view by this amount.  Values [-1..1] are rotations in view space by fraction of horizontal FOV, outside that range are yaw rotation in degrees."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugRotate0__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugRotate1'' @ 14100fab0

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugRotate1__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSplitScreenDebugRotate1,L"r.SplitScreenDebug.Rotate1",local_res8,
             L"Rotate second split screen view by this amount.  Values [-1..1] are rotations in view space by fraction of horizontal FOV, outside that range are yaw rotation in degrees."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugRotate1__);
  return;
}

// `dynamic_initializer_for_'CVarSplitScreenDebugVertical'' @ 14100fb00

void __cdecl _dynamic_initializer_for__CVarSplitScreenDebugVertical__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSplitScreenDebugVertical,L"r.SplitScreenDebug.Vertical",local_res8,
             L"Split screen debug use vertical split (two panes vertically stacked).  If false, uses horizontal split (two panes side by side)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplitScreenDebugVertical__);
  return;
}

// `dynamic_initializer_for_'CVarTreatDynamicInstancedAsUncullable'' @ 14100fb50

void __cdecl _dynamic_initializer_for__CVarTreatDynamicInstancedAsUncullable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTreatDynamicInstancedAsUncullable,
             L"r.SceneCulling.TreatInstancedDynamicAsUnCullable",local_res8,
             L"If this is turned on, dynamic primitives with instances are treated as uncullable (not put into the hierarchy and instead brute-forced on the GPU).  This significantly reduces the hierarchy update cost on the CPU and for scenes with a large proportion of static elements, does not increase the GPU cost."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTreatDynamicInstancedAsUncullable__);
  return;
}

// `dynamic_initializer_for_'CVarUnbuiltPreviewShadowsInGame'' @ 14100fba0

void __cdecl _dynamic_initializer_for__CVarUnbuiltPreviewShadowsInGame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUnbuiltPreviewShadowsInGame,L"r.Shadow.UnbuiltPreviewInGame",
             &GUnbuiltPreviewShadowsInGame,
             L"Whether to render unbuilt preview shadows in game.  When enabled and lighting is not built, expensive preview shadows will be rendered in game.  When disabled, lighting in game and editor won\'t match which can appear to be a bug."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarUnbuiltPreviewShadowsInGame__);
  return;
}

// `dynamic_initializer_for_'CVarValidateAllInstanceAllocations'' @ 14100fbf0

void __cdecl _dynamic_initializer_for__CVarValidateAllInstanceAllocations__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarValidateAllInstanceAllocations,L"r.SceneCulling.ValidateAllInstanceAllocations",
             local_res8,
             L"Perform validation of all instance IDs stored in the grid. This is very slow.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarValidateAllInstanceAllocations__);
  return;
}

// `dynamic_initializer_for_'CVarValidateGPUData'' @ 14100fc40

void __cdecl _dynamic_initializer_for__CVarValidateGPUData__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarValidateGPUData,L"r.SceneCulling.ValidateGPUData",local_res8,
             L"Perform readback and validation of uploaded GPU-data against CPU copy. This is quite slow and forces CPU/GPU syncs."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarValidateGPUData__);
  return;
}

// `dynamic_initializer_for_'Cache'' @ 14100fc90

void __cdecl ViewSnapshotCache::_dynamic_initializer_for__Cache__(void)

{
  atexit(_dynamic_atexit_destructor_for__Cache__);
  return;
}

// `dynamic_initializer_for_'CvarSceneCullingCullChunkViewDistance'' @ 14100fcb0

void __cdecl _dynamic_initializer_for__CvarSceneCullingCullChunkViewDistance__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CvarSceneCullingCullChunkViewDistance,L"r.SceneCulling.CullChunkViewDistance",
             local_res8,
             L"Set to true (default is false) to enable per-chunk view distance culling.\n  For some scenes it may increase overhead due to poor load balancing in the cell culling. This may be mitigated by lowering r.SceneCulling.MinCellSize"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CvarSceneCullingCullChunkViewDistance__);
  return;
}

// `dynamic_initializer_for_'GLightPrimitiveInteractionAllocator'' @ 14100fd00

void __cdecl _dynamic_initializer_for__GLightPrimitiveInteractionAllocator__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLightPrimitiveInteractionAllocator__);
  return;
}

// `dynamic_initializer_for_'GOcclusionQueryIndexBuffer'' @ 14100fd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GOcclusionQueryIndexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&GOcclusionQueryIndexBuffer);
  GOcclusionQueryIndexBuffer._0_8_ = &___7__TGlobalResource_VFOcclusionQueryIndexBuffer___00__6B_;
  if (GOcclusionQueryIndexBuffer._24_4_ != -1) {
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
  GOcclusionQueryIndexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GOcclusionQueryIndexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GOcclusionQueryIndexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GOcclusionQueryIndexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GOcclusionQueryIndexBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GOcclusionQueryIndexBuffer__);
  return;
}

// `dynamic_initializer_for_'GOcclusionRandomStream'' @ 14100fde0

void __cdecl _dynamic_initializer_for__GOcclusionRandomStream__(void)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  
  fVar1 = __real_3f800000;
  pfVar2 = GOcclusionRandomStream.Samples;
  uVar3 = 0x83246;
  do {
    uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
    *pfVar2 = (float)(uVar3 >> 9 | 0x3f800000) - fVar1;
    pfVar2 = pfVar2 + 1;
  } while ((longlong)pfVar2 < 0x15512ef20);
  GOcclusionRandomStream.Samples[0] = 0.0;
  GOcclusionRandomStream.Samples[0x4a6] = 0.0;
  GOcclusionRandomStream.Samples[0x94c] = 0.0;
  return;
}

// `dynamic_initializer_for_'GPUStat_BeginOcclusionTests'' @ 14100fe50

void __cdecl _dynamic_initializer_for__GPUStat_BeginOcclusionTests__(void)

{
  FRHIDrawStatsCategory::FRHIDrawStatsCategory(&GPUStat_BeginOcclusionTests.DrawcallCategory);
  atexit(_dynamic_atexit_destructor_for__GPUStat_BeginOcclusionTests__);
  return;
}

// `dynamic_initializer_for_'GPUStat_HZB'' @ 14100fe80

void __cdecl _dynamic_initializer_for__GPUStat_HZB__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_HZB__);
  return;
}

// `dynamic_initializer_for_'GSceneCullingDbgPattern'' @ 14100fea0

void __cdecl _dynamic_initializer_for__GSceneCullingDbgPattern__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSceneCullingDbgPattern__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_SceneCulling'' @ 14100fec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_SceneCulling__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SceneCullingLLM> FVar4;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  FVar4 = StatPtr_STAT_SceneCullingLLM;
  if (StatPtr_STAT_SceneCullingLLM == (FThreadSafeStaticStat<FStat_STAT_SceneCullingLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_SceneCullingLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_SceneCullingLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCullingLLM,*pFVar3,
                       L"SceneCulling","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false
                       ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar4 = StatPtr_STAT_SceneCullingLLM;
  if (StatPtr_STAT_SceneCullingLLM == (FThreadSafeStaticStat<FStat_STAT_SceneCullingLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_SceneCullingLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_SceneCullingLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCullingLLM,*pFVar3,
                       L"SceneCulling","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false
                       ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  FVar1 = *(FName *)FVar4;
  local_res10.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res10.Number = FVar1.Number;
  local_res18 = 0;
  local_res20 = 0;
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_SceneCulling,L"SceneCulling",(FName)0x0,(FName)0x0,FVar1,FVar2,None)
  ;
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion'' @ 141010040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesAmbientOcclusion>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesAmbientOcclusion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion,
               *pFVar1,L"Ambient Occlusion","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesLightCache'' @ 1410100d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesLightCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesLightCache ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesLightCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesLightCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesLightCache,
               *pFVar1,L"Light Cache","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking'' @ 141010160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesMaterialBaking>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesMaterialBaking");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking,
               *pFVar1,L"Material Baking","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesShadows'' @ 1410101f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesShadows__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesShadows ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesShadows>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesShadows");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesShadows,*pFVar1,
               L"Shadows","STATGROUP_HeterogeneousVolumesRT","STATCAT_HeterogeneousVolumes",
               L"Heterogeneous Volumes RT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering'' @ 141010280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesSingleScattering>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesSingleScattering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering,
               *pFVar1,L"Single Scattering","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OcclusionSubmittedFence_Dispatch'' @ 141010310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OcclusionSubmittedFence_Dispatch__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OcclusionSubmittedFence_Dispatch ==
      (FThreadSafeStaticStat<FStat_STAT_OcclusionSubmittedFence_Dispatch>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OcclusionSubmittedFence_Dispatch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OcclusionSubmittedFence_Dispatch,*pFVar1,
               L"OcclusionSubmittedFence Dispatch","STATGROUP_SceneRendering","STATCAT_Advanced",
               L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OcclusionSubmittedFence_Wait'' @ 1410103a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OcclusionSubmittedFence_Wait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OcclusionSubmittedFence_Wait ==
      (FThreadSafeStaticStat<FStat_STAT_OcclusionSubmittedFence_Wait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OcclusionSubmittedFence_Wait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OcclusionSubmittedFence_Wait,*pFVar1,
               L"OcclusionSubmittedFence Wait","STATGROUP_SceneRendering","STATCAT_Advanced",
               L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCullingLLM'' @ 141010430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCullingLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCullingLLM == (FThreadSafeStaticStat<FStat_STAT_SceneCullingLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCullingLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCullingLLM,*pFVar1,L"SceneCulling",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCullingSummaryLLM'' @ 1410104c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCullingSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCullingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCullingSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCullingSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCullingSummaryLLM,*pFVar1,
               L"SceneCulling","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64
               ,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_AddedInstanceCount'' @ 141010550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_AddedInstanceCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_AddedInstanceCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_AddedInstanceCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_AddedInstanceCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_AddedInstanceCount,*pFVar1,
               L"Added Instances","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_BlockCount'' @ 1410105e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_BlockCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_BlockCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_BlockCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_BlockCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_BlockCount,*pFVar1,
               L"Block Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_CellCount'' @ 141010670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_CellCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_CellCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CellCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_CellCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_CellCount,*pFVar1,
               L"Cell Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_ChunkOccupancy'' @ 141010700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_ChunkOccupancy__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_ChunkOccupancy ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ChunkOccupancy>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_ChunkOccupancy");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ChunkOccupancy,*pFVar1,
               L"Chunk Occupancy","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,
               true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_CompRangeCount'' @ 141010790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_CompRangeCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_CompRangeCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompRangeCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_CompRangeCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_CompRangeCount,*pFVar1,
               L"Num Comp. Ranges","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_CompressedChunkCount'' @ 141010820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_CompressedChunkCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_CompressedChunkCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompressedChunkCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_CompressedChunkCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_CompressedChunkCount,*pFVar1,
               L"Compressed Chunk Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_CopiedIdCount'' @ 1410108b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_CopiedIdCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_CopiedIdCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CopiedIdCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_CopiedIdCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_CopiedIdCount,*pFVar1,
               L"Update Copied Id Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_ExplicitChunkCount'' @ 141010940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_ExplicitChunkCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_ExplicitChunkCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ExplicitChunkCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_ExplicitChunkCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ExplicitChunkCount,*pFVar1,
               L"Explicit Chunk Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_IdCacheSize'' @ 1410109d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_IdCacheSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_IdCacheSize ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_IdCacheSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_IdCacheSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_IdCacheSize,*pFVar1,
               L"Total Id Cache Size","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_ItemBufferSize'' @ 141010a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_ItemBufferSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_ItemBufferSize ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemBufferSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_ItemBufferSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ItemBufferSize,*pFVar1,
               L"Item Buffer Size","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_ItemChunkCount'' @ 141010af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_ItemChunkCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_ItemChunkCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemChunkCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_ItemChunkCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ItemChunkCount,*pFVar1,
               L"Chunk ID Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_NonEmptyCellCount'' @ 141010b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_NonEmptyCellCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_NonEmptyCellCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_NonEmptyCellCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_NonEmptyCellCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_NonEmptyCellCount,*pFVar1,
               L"Non-Empty Cell Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_NumDynamicInstances'' @ 141010c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_NumDynamicInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_NumDynamicInstances ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumDynamicInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_NumDynamicInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_NumDynamicInstances,*pFVar1,
               L"Num Dynamic Instances","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_NumStaticInstances'' @ 141010ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_NumStaticInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_NumStaticInstances ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumStaticInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_NumStaticInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_NumStaticInstances,*pFVar1,
               L"Num Static Instances","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_RangeCount'' @ 141010d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_RangeCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_RangeCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_RangeCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_RangeCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_RangeCount,*pFVar1,
               L"Ranges Added","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_RemovedInstanceCount'' @ 141010dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_RemovedInstanceCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_RemovedInstanceCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_RemovedInstanceCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_RemovedInstanceCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_RemovedInstanceCount,*pFVar1,
               L"Removed Instances","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true
               ,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_SceneInstanceCount'' @ 141010e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_SceneInstanceCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_SceneInstanceCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_SceneInstanceCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_SceneInstanceCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_SceneInstanceCount,*pFVar1,
               L"Scene Instance Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_Test'' @ 141010ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_Test__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_Test == (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Test>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_Test");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_Test,*pFVar1,L"Test",
               "STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_TestSphereBlocks'' @ 141010f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_TestSphereBlocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_TestSphereBlocks ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_TestSphereBlocks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_TestSphereBlocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_TestSphereBlocks,*pFVar1,
               L"Test Sphere Blocks","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_TestSphereBounds'' @ 141011000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_TestSphereBounds__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_TestSphereBounds ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_TestSphereBounds>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_TestSphereBounds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_TestSphereBounds,*pFVar1,
               L"Test Sphere Bounds","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_TestSphereCells'' @ 141011090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_TestSphereCells__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_TestSphereCells ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_TestSphereCells>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_TestSphereCells");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_TestSphereCells,*pFVar1,
               L"Test Sphere Cells","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true
               ,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_Test_Convex'' @ 141011120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_Test_Convex__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_Test_Convex ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Test_Convex>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_Test_Convex");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_Test_Convex,*pFVar1,
               L"Test Convex","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_Test_Sphere'' @ 1410111b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_Test_Sphere__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_Test_Sphere ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Test_Sphere>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_Test_Sphere");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_Test_Sphere,*pFVar1,
               L"Test Sphere","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_Update_FinalizeAndClear'' @ 141011240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_Update_FinalizeAndClear__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_Update_FinalizeAndClear ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_FinalizeAndClear>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_Update_FinalizeAndClear");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_Update_FinalizeAndClear,
               *pFVar1,L"Update Finalize","STATGROUP_SceneCulling","STATCAT_Advanced",
               L"SceneCulling",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_Update_Post'' @ 1410112d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_Update_Post__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_Update_Post ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_Post>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_Update_Post");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_Update_Post,*pFVar1,
               L"Update Post","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_Update_Pre'' @ 141011360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_Update_Pre__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_Update_Pre ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_Pre>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_Update_Pre");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_Update_Pre,*pFVar1,
               L"Update Pre","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_UpdatedInstanceCount'' @ 1410113f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_UpdatedInstanceCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_UpdatedInstanceCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UpdatedInstanceCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_UpdatedInstanceCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UpdatedInstanceCount,*pFVar1,
               L"Updated Instances","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",true
               ,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_UploadedBlocks'' @ 141011480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_UploadedBlocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_UploadedBlocks ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedBlocks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_UploadedBlocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedBlocks,*pFVar1,
               L"Update Uploaded Blocks","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_UploadedCells'' @ 141011510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_UploadedCells__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_UploadedCells ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedCells>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_UploadedCells");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedCells,*pFVar1,
               L"Update Uploaded Cells","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_UploadedChunks'' @ 1410115a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_UploadedChunks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_UploadedChunks ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedChunks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_UploadedChunks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedChunks,*pFVar1,
               L"Update Uploaded Chunks","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_UploadedItems'' @ 141011630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_UploadedItems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_UploadedItems ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedItems>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_UploadedItems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedItems,*pFVar1,
               L"Update Uploaded Items","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneCulling_VisitedIdCount'' @ 1410116c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneCulling_VisitedIdCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneCulling_VisitedIdCount ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_VisitedIdCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneCulling_VisitedIdCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_VisitedIdCount,*pFVar1,
               L"Update Visited Id Count","STATGROUP_SceneCulling","STATCAT_Advanced",
               L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_SceneCulling'' @ 141011750

void __cdecl _dynamic_initializer_for___GCsvCategory_SceneCulling__(void)

{
  FString::operator=(&_GCsvCategory_SceneCulling.Name,L"SceneCulling");
  _GCsvCategory_SceneCulling.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_SceneCulling.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_SceneCulling__);
  return;
}

// `scalar_deleting_destructor' @ 14546a900

void * __thiscall
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14546ae40

void * __thiscall
FOcclusionQueryIndexBuffer::_scalar_deleting_destructor_
          (FOcclusionQueryIndexBuffer *this,uint param_1)

{
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14546ae80

void * __thiscall
TGlobalResource<FOcclusionQueryIndexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FOcclusionQueryIndexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFOcclusionQueryIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14546af30

void * __thiscall
TSceneExtensionRegistration<FSceneCulling>::_scalar_deleting_destructor_
          (TSceneExtensionRegistration<FSceneCulling> *this,uint param_1)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14546b080

void * __thiscall
TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_> @ 14546b9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>_::__l12::<lambda_1>_>
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> param_2,uint param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FRDGEventName *pFVar4;
  void *this;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar5;
  FRDGEventName local_48;
  <lambda_1> local_30;
  
  local_30.ReadbackProcessingLambdaType.ValueCheckFunc.__this = (param_4->ValueCheckFunc).__this;
  local_30.ReadbackProcessingLambdaType.HostValues.DataPtr = (param_4->HostValues).DataPtr;
  local_30.ReadbackProcessingLambdaType.HostValues.ArrayNum = (param_4->HostValues).ArrayNum;
  local_30.ReadbackProcessingLambdaType.HostValues._12_4_ =
       *(undefined4 *)&(param_4->HostValues).field_0xc;
  local_30.SourceBufferRHI = *(FRHIBuffer **)((param_2.Reference)->_padding_ + 0x28);
  local_30.NumBytes = param_3;
  pFVar4 = FRDGEventName::FRDGEventName(&local_48,1,L"BufferLockReadbackPass");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar4,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
  pTVar5 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this,pFVar4,NeverCull,&local_30);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar3 = (param_1->Passes).Array.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar3 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)pTVar5;
  *(int *)&pTVar5->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar5);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  puVar2 = (undefined8 *)(param_2.Reference)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

// AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_> @ 14546bb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>_::__l12::<lambda_1>_>
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> param_2,uint param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  FRHIBuffer *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  FRDGEventName *pFVar5;
  void *this;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar6;
  undefined1 auStack_c8 [40];
  FRDGEventName local_a0;
  <lambda_1> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar2 = *(FRHIBuffer **)((param_2.Reference)->_padding_ + 0x28);
  `FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>::<lambda_3>
            (&local_88,&param_4->ValueCheckFunc);
  local_88.ReadbackProcessingLambdaType.HostValues.DataPtr = (param_4->HostValues).DataPtr;
  local_88.ReadbackProcessingLambdaType.HostValues.ArrayNum = (param_4->HostValues).ArrayNum;
  local_88.ReadbackProcessingLambdaType.HostValues._12_4_ =
       *(undefined4 *)&(param_4->HostValues).field_0xc;
  local_88.SourceBufferRHI = pFVar2;
  local_88.NumBytes = param_3;
  pFVar5 = FRDGEventName::FRDGEventName(&local_a0,1,L"BufferLockReadbackPass");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar5,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
  pTVar6 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this,pFVar5,NeverCull,&local_88);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar4 = (param_1->Passes).Array.ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar4 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar4] = (FRDGPass *)pTVar6;
  *(int *)&pTVar6->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar6);
  if (local_a0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_88.ReadbackProcessingLambdaType.ValueCheckFunc.FreeChunkBits.AllocatorInstance.
      SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.ReadbackProcessingLambdaType.ValueCheckFunc.FreeChunkBits.
                          AllocatorInstance.SecondaryData);
  }
  puVar3 = (undefined8 *)(param_2.Reference)->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_> @ 14546bc90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>_::__l12::<lambda_1>_>
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> param_2,uint param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FRDGEventName *pFVar4;
  void *this;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar5;
  FRDGEventName local_48;
  <lambda_1> local_30;
  
  local_30.ReadbackProcessingLambdaType.ValueCheckFunc.__this = (param_4->ValueCheckFunc).__this;
  local_30.ReadbackProcessingLambdaType.HostValues.DataPtr = (param_4->HostValues).DataPtr;
  local_30.ReadbackProcessingLambdaType.HostValues.ArrayNum = (param_4->HostValues).ArrayNum;
  local_30.ReadbackProcessingLambdaType.HostValues._12_4_ =
       *(undefined4 *)&(param_4->HostValues).field_0xc;
  local_30.SourceBufferRHI = *(FRHIBuffer **)((param_2.Reference)->_padding_ + 0x28);
  local_30.NumBytes = param_3;
  pFVar4 = FRDGEventName::FRDGEventName(&local_48,1,L"BufferLockReadbackPass");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar4,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
  pTVar5 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this,pFVar4,NeverCull,&local_30);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar3 = (param_1->Passes).Array.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar3 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)pTVar5;
  *(int *)&pTVar5->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar5);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  puVar2 = (undefined8 *)(param_2.Reference)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

// AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_> @ 14546bdd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>_::__l12::<lambda_1>_>
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> param_2,uint param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FRDGEventName *pFVar4;
  void *this;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar5;
  FRDGEventName local_48;
  <lambda_1> local_30;
  
  local_30.ReadbackProcessingLambdaType.ValueCheckFunc.__this = (param_4->ValueCheckFunc).__this;
  local_30.ReadbackProcessingLambdaType.HostValues.DataPtr = (param_4->HostValues).DataPtr;
  local_30.ReadbackProcessingLambdaType.HostValues.ArrayNum = (param_4->HostValues).ArrayNum;
  local_30.ReadbackProcessingLambdaType.HostValues._12_4_ =
       *(undefined4 *)&(param_4->HostValues).field_0xc;
  local_30.SourceBufferRHI = *(FRHIBuffer **)((param_2.Reference)->_padding_ + 0x28);
  local_30.NumBytes = param_3;
  pFVar4 = FRDGEventName::FRDGEventName(&local_48,1,L"BufferLockReadbackPass");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar4,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
  pTVar5 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this,pFVar4,NeverCull,&local_30);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar3 = (param_1->Passes).Array.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar3 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)pTVar5;
  *(int *)&pTVar5->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar5);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  puVar2 = (undefined8 *)(param_2.Reference)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

// AddPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 14546c1c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b0,8);
  pTVar3 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// AddPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 14546c2a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d0,8);
  pTVar3 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// AddPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 14546c380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b0,8);
  pTVar3 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// AddPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 14546c460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b0,8);
  pTVar3 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// AddPass<`FComputeShaderUtils::AddPass<FComputeExplicitChunkBounds_CS>'::__l2::<lambda_1>_> @ 14546c540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<FComputeExplicitChunkBounds_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFComputeExplicitChunkBounds_CS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFComputeExplicitChunkBounds_CS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FComputeExplicitChunkBounds_CS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FAnimBankScatterCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<`FComputeShaderUtils::AddPass<FSceneCullingDebugRender_CS>'::__l2::<lambda_1>_> @ 14546c6d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FSceneCullingDebugRender_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSceneCullingDebugRender_CS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSceneCullingDebugRender_CS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSceneCullingDebugRender_CS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FNaniteSkinningUpdateChunkCullCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<FHZBOcclusionUpdateTexturesParameters,`FHZBOcclusionTester::Submit'::__l13::<lambda_2>_> @ 14546cac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FHZBOcclusionUpdateTexturesParameters,_FHZBOcclusionTester::Submit_::__l13::<lambda_2>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FHZBOcclusionUpdateTexturesParameters *param_2,
          ERDGPassFlags param_3,<lambda_2> *param_4)

{
  int *piVar1;
  bool bVar2;
  ERDGPassFlags EVar3;
  int iVar4;
  wchar_t *pwVar5;
  FRDGPass *pFVar6;
  code *pcVar7;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar7 = FHZBOcclusionUpdateTexturesParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar7 = (code *)(*pcVar7)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar7 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FHZBOcclusionUpdateTexturesParameters",L"FHZBOcclusionUpdateTexturesParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                 ,0x3ad,0x30,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar5 = FRDGEventName::GetTCHAR(param_1);
  EVar3 = OverridePassFlags(this,pwVar5,param_3);
  pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a8,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar7 = (code *)swi(3);
      pFVar6 = (FRDGPass *)(*pcVar7)();
      return pFVar6;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar6,param_1,&local_38,EVar3,Inline);
  pFVar6->_padding_ =
       (longlong)
       &TRDGLambdaPass<FHZBOcclusionUpdateTexturesParameters,`FHZBOcclusionTester::Submit'::`13'::<lambda_2>_>
        ::_vftable_;
  pFVar6[1]._padding_ = 0;
  pFVar6[1]._padding_ = (longlong)(param_4->Primitives).AllocatorInstance.Data;
  (param_4->Primitives).AllocatorInstance.Data = (FOcclusionPrimitive *)0x0;
  *(int *)&pFVar6[1].FullPathIfDebug.Data.AllocatorInstance.Data = (param_4->Primitives).ArrayNum;
  *(int *)((longlong)&pFVar6[1].FullPathIfDebug.Data.AllocatorInstance.Data + 4) =
       (param_4->Primitives).ArrayMax;
  (param_4->Primitives).ArrayNum = 0;
  (param_4->Primitives).ArrayMax = 0;
  *(FRDGTexture **)&pFVar6[1].FullPathIfDebug.Data.ArrayNum = param_4->BoundsCenterTexture;
  pFVar6[1].Name.EventFormat = (wchar_t *)param_4->BoundsExtentTexture;
  pFVar6[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2
  ;
  ClobberPassOutputs(this,pFVar6);
  iVar4 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar4 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar4] = pFVar6;
  (pFVar6->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar6);
  return pFVar6;
}

// AddPass<FHZBTestPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>'::__l2::<lambda_1>_> @ 14546cda0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FHZBTestPS::FParameters,_FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  code *pcVar2;
  FShaderMapBase *pFVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  int iVar8;
  FShaderParametersMetadata *pFVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  pFVar9 = FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_2,pFVar9,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar7 = OverridePassFlags(this,pwVar10,param_3);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_2;
  if ((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (pFVar9->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar9;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar7,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FHZBTestPS__V<lambda_1>__1____AddFullscreenPass_VFHZBTestPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFHZBTestPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar11[1]._padding_ = (longlong)param_4->Parameters;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_4->GlobalShaderMap;
  pFVar3 = (param_4->PixelShader).ShaderMap;
  *(FComposeSeparateTranslucencyPS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_4->PixelShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->Viewport).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar11[1].Name.FormattedEventName.Data.ArrayNum =
       (param_4->Viewport).field0_0x0._s_0.Max.field0_0x0;
  pFVar11[1].ParameterStruct.Contents = (uchar *)param_4->BlendState;
  pFVar11[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_4->RasterizerState;
  pFVar11[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_4->DepthStencilState;
  uVar4 = *(undefined1 *)((longlong)&param_4->StencilRef + 2);
  uVar5 = *(undefined1 *)((longlong)&param_4->StencilRef + 3);
  pFVar11[1].Flags = *(undefined2 *)&param_4->StencilRef;
  pFVar11[1].TaskMode = uVar4;
  pFVar11[1].Pipeline = uVar5;
  *(FParameters **)&pFVar11[1].Workload = param_2;
  ClobberPassOutputs(this,pFVar11);
  iVar8 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar8 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar8] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<FRenderTargetParameters,`FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_4>_> @ 14546cf70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FRenderTargetParameters,_FDeferredShadingSceneRenderer::RenderOcclusion_::__l5::<lambda_4>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FRenderTargetParameters *param_2,
          ERDGPassFlags param_3,<lambda_4> *param_4)

{
  int *piVar1;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  undefined4 uVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FRDGPass *pFVar8;
  code *pcVar9;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = FRenderTargetParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FRenderTargetParameters",L"FRenderTargetParameters",(wchar_t *)0x0,(wchar_t *)0x0
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                 ,0x7b0,0x100,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FRenderTargetParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar9)();
      return pFVar8;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Async);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRenderTargetParameters,`FDeferredShadingSceneRenderer::RenderOcclusion'::`5'::<lambda_4>_>
        ::_vftable_;
  pTVar2 = param_4->QueriesPerView;
  pFVar8[1]._padding_ = (longlong)param_4->__this;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar2;
  uVar3 = *(undefined4 *)&param_4->field_0x14;
  pFVar8[1].FullPathIfDebug.Data.ArrayNum = param_4->DownsampleFactor;
  pFVar8[1].FullPathIfDebug.Data.ArrayMax = uVar3;
  pFVar8[1].Name.EventFormat = (wchar_t *)param_2;
  ClobberPassOutputs(this,pFVar8);
  iVar6 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar6 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar6] = pFVar8;
  (pFVar8->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar8);
  return pFVar8;
}

// AddPassInternal<FHZBTestPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>'::__l2::<lambda_1>_> @ 14546d490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FHZBTestPS::FParameters,_FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FShaderMapBase *pFVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  ERDGPassFlags EVar7;
  int iVar8;
  wchar_t *pwVar9;
  FRDGPass *pFVar10;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar9 = FRDGEventName::GetTCHAR(param_1);
  EVar7 = OverridePassFlags(this,pwVar9,param_4);
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d8,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar2)();
      return pFVar10;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar10,param_1,&local_38,EVar7,Async);
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFParameters_FHZBTestPS__V<lambda_1>__1____AddFullscreenPass_VFHZBTestPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFHZBTestPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
  ;
  pFVar10[1]._padding_ = (longlong)param_5->Parameters;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_5->GlobalShaderMap;
  pFVar3 = (param_5->PixelShader).ShaderMap;
  *(FComposeSeparateTranslucencyPS **)&pFVar10[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->PixelShader).ShaderContent;
  pFVar10[1].Name.EventFormat = (wchar_t *)pFVar3;
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->Viewport).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar10[1].Name.FormattedEventName.Data.ArrayNum =
       (param_5->Viewport).field0_0x0._s_0.Max.field0_0x0;
  pFVar10[1].ParameterStruct.Contents = (uchar *)param_5->BlendState;
  pFVar10[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)param_5->RasterizerState;
  pFVar10[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_5->DepthStencilState;
  uVar4 = *(undefined1 *)((longlong)&param_5->StencilRef + 2);
  uVar5 = *(undefined1 *)((longlong)&param_5->StencilRef + 3);
  pFVar10[1].Flags = *(undefined2 *)&param_5->StencilRef;
  pFVar10[1].TaskMode = uVar4;
  pFVar10[1].Pipeline = uVar5;
  *(FParameters **)&pFVar10[1].Workload = param_3;
  ClobberPassOutputs(this,pFVar10);
  iVar8 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar8 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar8] = pFVar10;
  (pFVar10->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar10);
  return pFVar10;
}

// AddPassInternal<FSceneCapturePS::FParameters,`CopySceneCaptureComponentToTarget'::__l4::<lambda_2>_> @ 14546d660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FSceneCapturePS::FParameters,_CopySceneCaptureComponentToTarget_::__l4::<lambda_2>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_2> *param_5)

{
  int *piVar1;
  ETextureCreateFlags *pEVar2;
  code *pcVar3;
  FRHIVertexShader *pFVar4;
  FRHIMeshShader *pFVar5;
  FRHIGeometryShader *pFVar6;
  FShaderParametersMetadata *pFVar7;
  FRHIDepthStencilState *pFVar8;
  FRHISamplerState *pFVar9;
  TRDGHandle<FRDGPass,unsigned_int> *pTVar10;
  FRDGPass **ppFVar11;
  FTextureState *pFVar12;
  FBufferState *pFVar13;
  TRDGHandle<FRDGView,unsigned_int> *pTVar14;
  undefined8 uVar15;
  TRDGHandle<FRDGUniformBuffer,unsigned_int> *pTVar16;
  FExternalAccessOp *pFVar17;
  undefined8 uVar18;
  ulong64 uVar19;
  FRDGBarrierBatchBegin **ppFVar20;
  FRDGPass *pFVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  bool bVar32;
  ERDGPassFlags EVar33;
  int iVar34;
  wchar_t *pwVar35;
  FRDGPass *pFVar36;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar35 = FRDGEventName::GetTCHAR(param_1);
  EVar33 = OverridePassFlags(this,pwVar35,param_4);
  pFVar36 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x2e0,0x10);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsLayoutInitialized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                        ,0x17c,L"");
    if (bVar32) {
      pcVar3 = (code *)swi(3);
      pFVar36 = (FRDGPass *)(*pcVar3)();
      return pFVar36;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar36,param_1,&local_38,EVar33,Async);
  pFVar36->_padding_ =
       (longlong)
       &TRDGLambdaPass<FSceneCapturePS::FParameters,`CopySceneCaptureComponentToTarget'::`4'::<lambda_2>_>
        ::_vftable_;
  pFVar36[1]._padding_ = (longlong)param_5->PassParameters;
  pEVar2 = (param_5->GraphicsPSOInit).RenderTargetFlags.Elements + 2;
  pFVar4 = (param_5->GraphicsPSOInit).BoundShaderState.VertexShaderRHI;
  pFVar36[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->GraphicsPSOInit).BoundShaderState.VertexDeclarationRHI;
  *(FRHIVertexShader **)&pFVar36[1].FullPathIfDebug.Data.ArrayNum = pFVar4;
  pFVar5 = (param_5->GraphicsPSOInit).BoundShaderState.MeshShaderRHI;
  pFVar36[1].Name.EventFormat =
       (wchar_t *)(param_5->GraphicsPSOInit).BoundShaderState.PixelShaderRHI;
  pFVar36[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar5
  ;
  pFVar6 = (param_5->GraphicsPSOInit).BoundShaderState.GeometryShaderRHI;
  *(FRHIAmplificationShader **)&pFVar36[1].Name.FormattedEventName.Data.ArrayNum =
       (param_5->GraphicsPSOInit).BoundShaderState.AmplificationShaderRHI;
  pFVar36[1].ParameterStruct.Contents = (uchar *)pFVar6;
  pFVar7 = (FShaderParametersMetadata *)(param_5->GraphicsPSOInit).BlendState;
  pFVar36[1].ParameterStruct.Layout.Reference =
       (FRHIUniformBufferLayout *)(param_5->GraphicsPSOInit).BoundShaderState.WorkGraphMeshShaderRHI
  ;
  pFVar36[1].ParameterStruct.Metadata = pFVar7;
  pFVar8 = (param_5->GraphicsPSOInit).DepthStencilState;
  *(FRHIRasterizerState **)&pFVar36[1].Flags = (param_5->GraphicsPSOInit).RasterizerState;
  *(FRHIDepthStencilState **)&pFVar36[1].Workload = pFVar8;
  pFVar9 = (param_5->GraphicsPSOInit).ImmutableSamplerState.ImmutableSamplers.Elements[1];
  *(FRHISamplerState **)&pFVar36[1].CrossPipelineProducer =
       (param_5->GraphicsPSOInit).ImmutableSamplerState.ImmutableSamplers.Elements[0];
  *(FRHISamplerState **)&pFVar36[1].GraphicsJoinPass = pFVar9;
  uVar22 = (param_5->GraphicsPSOInit).RenderTargetsEnabled;
  pTVar10 = *(TRDGHandle<FRDGPass,unsigned_int> **)
             (param_5->GraphicsPSOInit).RenderTargetFormats.Elements;
  pFVar36[1].EpilogueBarrierPass =
       (TRDGHandle<FRDGPass,unsigned_int>)(param_5->GraphicsPSOInit).PrimitiveType;
  pFVar36[1].NumTransitionsToReserve = uVar22;
  pFVar36[1].CrossPipelineConsumers.AllocatorInstance.Data = pTVar10;
  uVar23 = *(undefined4 *)
            ((longlong)((param_5->GraphicsPSOInit).RenderTargetFlags.Elements + 0) + 4);
  ppFVar11 = (FRDGPass **)(param_5->GraphicsPSOInit).RenderTargetFlags.Elements[1];
  pFVar36[1].CrossPipelineConsumers.ArrayNum =
       *(undefined4 *)((param_5->GraphicsPSOInit).RenderTargetFlags.Elements + 0);
  pFVar36[1].CrossPipelineConsumers.ArrayMax = uVar23;
  pFVar36[1].Producers.AllocatorInstance.Data = ppFVar11;
  uVar23 = *(undefined4 *)((longlong)pEVar2 + 4);
  pFVar12 = (FTextureState *)(param_5->GraphicsPSOInit).RenderTargetFlags.Elements[3];
  pFVar36[1].Producers.ArrayNum = *(undefined4 *)pEVar2;
  pFVar36[1].Producers.ArrayMax = uVar23;
  pFVar36[1].TextureStates.AllocatorInstance.Data = pFVar12;
  pEVar2 = (param_5->GraphicsPSOInit).RenderTargetFlags.Elements + 4;
  uVar23 = *(undefined4 *)((longlong)pEVar2 + 4);
  pFVar13 = (FBufferState *)(param_5->GraphicsPSOInit).RenderTargetFlags.Elements[5];
  pFVar36[1].TextureStates.ArrayNum = *(undefined4 *)pEVar2;
  pFVar36[1].TextureStates.ArrayMax = uVar23;
  pFVar36[1].BufferStates.AllocatorInstance.Data = pFVar13;
  pEVar2 = (param_5->GraphicsPSOInit).RenderTargetFlags.Elements + 6;
  uVar23 = *(undefined4 *)((longlong)pEVar2 + 4);
  pTVar14 = (TRDGHandle<FRDGView,unsigned_int> *)
            (param_5->GraphicsPSOInit).RenderTargetFlags.Elements[7];
  pFVar36[1].BufferStates.ArrayNum = *(undefined4 *)pEVar2;
  pFVar36[1].BufferStates.ArrayMax = uVar23;
  pFVar36[1].Views.AllocatorInstance.Data = pTVar14;
  uVar15 = *(undefined8 *)&(param_5->GraphicsPSOInit).DepthStencilTargetFormat;
  pTVar16 = (TRDGHandle<FRDGUniformBuffer,unsigned_int> *)
            (param_5->GraphicsPSOInit).DepthStencilTargetFlag;
  pFVar36[1].Views.ArrayNum = (int)uVar15;
  pFVar36[1].Views.ArrayMax = (int)((ulonglong)uVar15 >> 0x20);
  pFVar36[1].UniformBuffers.AllocatorInstance.Data = pTVar16;
  uVar15._0_1_ = (param_5->GraphicsPSOInit).DepthTargetLoadAction;
  uVar15._1_1_ = (param_5->GraphicsPSOInit).DepthTargetStoreAction;
  uVar15._2_1_ = (param_5->GraphicsPSOInit).StencilTargetLoadAction;
  uVar15._3_1_ = (param_5->GraphicsPSOInit).StencilTargetStoreAction;
  uVar15._4_4_ = (param_5->GraphicsPSOInit).DepthStencilAccess;
  pFVar17 = *(FExternalAccessOp **)&(param_5->GraphicsPSOInit).NumSamples;
  pFVar36[1].UniformBuffers.ArrayNum = (int)uVar15;
  pFVar36[1].UniformBuffers.ArrayMax = (int)((ulonglong)uVar15 >> 0x20);
  pFVar36[1].ExternalAccessOps.AllocatorInstance.Data = pFVar17;
  uVar18._0_1_ = (param_5->GraphicsPSOInit).bAllowVariableRateShading;
  uVar18._1_1_ = (param_5->GraphicsPSOInit).ShadingRate;
  uVar18._2_2_ = (param_5->GraphicsPSOInit).field25_0xd2;
  uVar18._4_4_ = *(undefined4 *)&(param_5->GraphicsPSOInit).field_0xd4;
  uVar19 = (param_5->GraphicsPSOInit).StatePrecachePSOHash;
  pFVar36[1].ExternalAccessOps.ArrayNum = (int)uVar18;
  pFVar36[1].ExternalAccessOps.ArrayMax = (int)((ulonglong)uVar18 >> 0x20);
  *(ulong64 *)pFVar36[1].ResourcesToBegin.AllocatorInstance.InlineData = uVar19;
  uVar23 = *(undefined4 *)&(param_5->VertexShader).field_0x8;
  uVar24 = *(undefined4 *)&(param_5->VertexShader).field_0xc;
  pFVar36[1].ResourcesToBegin.AllocatorInstance.SecondaryData.Data =
       *(FRDGPass ***)&param_5->VertexShader;
  pFVar36[1].ResourcesToBegin.ArrayNum = uVar23;
  pFVar36[1].ResourcesToBegin.ArrayMax = uVar24;
  uVar25 = (param_5->PixelShader).field_0x1;
  uVar26 = (param_5->PixelShader).field_0x2;
  uVar27 = (param_5->PixelShader).field_0x3;
  uVar28 = (param_5->PixelShader).field_0x4;
  uVar29 = (param_5->PixelShader).field_0x5;
  uVar30 = (param_5->PixelShader).field_0x6;
  uVar31 = (param_5->PixelShader).field_0x7;
  ppFVar11 = *(FRDGPass ***)&(param_5->PixelShader).field_0x8;
  pFVar21 = pFVar36 + 1;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[0] = (param_5->PixelShader).field_0x0;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[1] = uVar25;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[2] = uVar26;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[3] = uVar27;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[4] = uVar28;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[5] = uVar29;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[6] = uVar30;
  (pFVar21->ResourcesToEnd).AllocatorInstance.InlineData[7] = uVar31;
  pFVar36[1].ResourcesToEnd.AllocatorInstance.SecondaryData.Data = ppFVar11;
  *(FViewInfo **)&pFVar36[1].ResourcesToEnd.ArrayNum = param_5->View;
  *(int *)&pFVar36[1].PrologueBarriersToBegin = param_5->ViewIndex;
  *(TIntPoint<int>_u_0 *)((longlong)&pFVar36[1].PrologueBarriersToBegin + 4) =
       (param_5->TargetSize).field0_0x0;
  pFVar36[1].EpilogueBarriersToBeginForGraphics =
       *(FRDGBarrierBatchBegin **)&param_5->SetViewportLambda;
  pFVar36[1].EpilogueBarriersToEnd =
       *(FRDGBarrierBatchEnd **)&(param_5->SetViewportLambda).field_0x28;
  *(undefined8 *)&(param_5->SetViewportLambda).field_0x28 = 0;
  ppFVar20 = *(FRDGBarrierBatchBegin ***)&(param_5->SetViewportLambda).field_0x18;
  pFVar36[1].EpilogueBarriersToBeginForAll =
       *(FRDGBarrierBatchBegin **)&(param_5->SetViewportLambda).field_0x10;
  pFVar36[1].SharedEpilogueBarriersToBegin.AllocatorInstance.Data = ppFVar20;
  uVar23 = *(undefined4 *)&(param_5->SetViewportLambda).field_0x24;
  pFVar36[1].SharedEpilogueBarriersToBegin.ArrayNum =
       *(undefined4 *)&(param_5->SetViewportLambda).field_0x20;
  pFVar36[1].SharedEpilogueBarriersToBegin.ArrayMax = uVar23;
  if (pFVar36[1].EpilogueBarriersToBeginForGraphics != (FRDGBarrierBatchBegin *)0x0) {
    *(undefined8 *)&param_5->SetViewportLambda = 0;
  }
  *(FParameters **)&pFVar36[1].ParallelPassSetIndex = param_3;
  ClobberPassOutputs(this,pFVar36);
  iVar34 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar34 == *piVar1) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar34 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar34] = pFVar36;
  (pFVar36->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar36);
  return pFVar36;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FComputeExplicitChunkBounds_CS>'::__l2::<lambda_1>_> @ 14546d8f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FComputeExplicitChunkBounds_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFComputeExplicitChunkBounds_CS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFComputeExplicitChunkBounds_CS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FComputeExplicitChunkBounds_CS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FAnimBankScatterCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FSceneCullingDebugRender_CS>'::__l2::<lambda_1>_> @ 14546da80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FSceneCullingDebugRender_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSceneCullingDebugRender_CS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSceneCullingDebugRender_CS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSceneCullingDebugRender_CS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FNaniteSkinningUpdateChunkCullCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_> @ 14546dc10

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
AddSetupTask<_FSceneCulling::FUpdater::PostSceneUpdate_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
          (FRDGBuilder *this,<lambda_1> *param_1,FPipe *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned___int64> aVar3;
  FUpdater *pFVar4;
  FTaskHandle *pFVar5;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar6;
  atomic<unsigned___int64> aVar7;
  TEventCount<unsigned_int> *pTVar8;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTVar9;
  FViewSceneChangeSet *pFVar10;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar11;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  FTaskBase *pFVar16;
  <lambda_1> *p<Var17;
  int iVar18;
  FTaskBase *pFVar19;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar20;
  int iVar21;
  ETaskPriority EVar22;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  undefined1 local_78 [16];
  atomic<UE::Tasks::Private::FTaskBase_*> local_68;
  atomic<unsigned___int64> aStack_60;
  TEventCount<unsigned_int> *local_58;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTStack_50;
  FViewSceneChangeSet *local_48;
  atomic<UE::Tasks::Private::FTaskBase_*> aStack_40;
  atomic<unsigned___int64> local_38;
  
  pFVar19 = (FTaskBase *)0x0;
  pTVar12 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
            CONCAT71(in_stack_00000029,param_4);
  param_1->__this = (FUpdater *)0x0;
  if (((param_6 == Compile) || (bVar13 = IsImmediateMode(), bVar13)) && (pTVar12->ArrayNum != 0)) {
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar12,(FTimespan)0x7fffffffffffffff);
  }
  aVar6 = param_2->LastTask;
  aVar7 = param_2->TaskCount;
  cVar14 = (this->ParallelSetup).bEnabled;
  bVar13 = (bool)cVar14 == false;
  pTVar8 = (param_2->EmptyEventRef).Object;
  pTVar9 = (TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
            *)(param_2->EmptyEventRef).SharedReferenceCount.ReferenceController;
  pFVar10 = (FViewSceneChangeSet *)param_2->DebugName;
  aVar11 = param_2[1].LastTask;
  aVar3 = param_2[1].TaskCount;
  EVar22 = High;
  if (this->bCompiling != false) {
    cVar14 = this->bParallelCompileEnabled;
  }
  local_68 = aVar6;
  aStack_60 = aVar7;
  local_58 = pTVar8;
  pTStack_50 = pTVar9;
  local_48 = pFVar10;
  aStack_40 = aVar11;
  local_38 = aVar3;
  if ((param_6 == Compile) ||
     ((cVar14 == '\0' &&
      (bVar15 = UE::RDG::
                IsCompleted<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                          (pTVar12), bVar15)))) {
    `FRDGBuilder::
    AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
    ::__l2::<lambda_1>::operator()(&local_68);
  }
  else {
    iVar18 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    if (param_3 == (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar21 = 4;
      if (iVar18 < 4) {
        iVar21 = iVar18;
      }
      if (0 < iVar21) {
        EVar22 = (ETaskPriority)iVar21;
      }
      pFVar16 = FMemory::Malloc(0x140,0x40);
      if (pFVar16 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar16,2,true);
        pFVar16->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar16,L"FRDGBuilder::AddSetupTask",EVar22,bVar13,None)
        ;
        pFVar16[1]._padding_ = (longlong)aVar6;
        pFVar16[1]._padding_ = (longlong)aVar7;
        pFVar16[1]._padding_ = (longlong)pTVar8;
        pFVar16[1]._padding_ = (longlong)pTVar9;
        pFVar16[1]._padding_ = (longlong)pFVar10;
        pFVar16[1]._padding_ = (longlong)aVar11;
        *(atomic<unsigned___int64> *)&pFVar16[1].RefCount = aVar3;
        pFVar16->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar19 = pFVar16;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar19,pTVar12,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar19,0x140);
      p<Var17 = (<lambda_1> *)(local_78 + 8);
    }
    else {
      iVar21 = 4;
      if (iVar18 < 4) {
        iVar21 = iVar18;
      }
      pFVar16 = FMemory::Malloc(0x140,0x40);
      if (pFVar16 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar16,2,true);
        if (0 < iVar21) {
          EVar22 = (ETaskPriority)iVar21;
        }
        pFVar16->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar16,L"FRDGBuilder::AddSetupTask",EVar22,bVar13,None)
        ;
        pFVar16[1]._padding_ = (longlong)aVar6;
        pFVar16[1]._padding_ = (longlong)aVar7;
        pFVar16[1]._padding_ = (longlong)pTVar8;
        pFVar16[1]._padding_ = (longlong)pTVar9;
        pFVar16[1]._padding_ = (longlong)pFVar10;
        pFVar16[1]._padding_ = (longlong)aVar11;
        *(atomic<unsigned___int64> *)&pFVar16[1].RefCount = aVar3;
        pFVar16->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar19 = pFVar16;
      }
      LOCK();
      *(longlong *)&param_3->ArrayNum = *(longlong *)&param_3->ArrayNum + 1;
      UNLOCK();
      LOCK();
      pFVar19->NumLocks = (atomic<unsigned_int>)((int)pFVar19->NumLocks + 1);
      UNLOCK();
      pFVar19->Pipe = (FPipe *)param_3;
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar19,pTVar12,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar19,0x140);
      p<Var17 = (<lambda_1> *)local_78;
    }
    if (param_1 == p<Var17) {
      if (pFVar19 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar19->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar19->_padding_)(pFVar19,1);
        }
      }
    }
    else {
      pFVar4 = param_1->__this;
      param_1->__this = (FUpdater *)pFVar19;
      if (pFVar4 != (FUpdater *)0x0) {
        LOCK();
        pFVar5 = &pFVar4[1].PreUpdateTaskHandle;
        iVar18 = *(int *)&(pFVar5->Pimpl).Reference;
        *(int *)&(pFVar5->Pimpl).Reference = *(int *)&(pFVar5->Pimpl).Reference + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  if (param_1->__this != (FUpdater *)0x0) {
    pTVar20 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar18 = pTVar20->ArrayNum;
    if (iVar18 == pTVar20->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                         (0x808,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
    }
    pTVar20->ArrayNum = iVar18 + 1;
    pFVar5 = (pTVar20->AllocatorInstance).Data;
    pFVar5[iVar18].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar19 = (FTaskBase *)param_1->__this;
    pFVar5[iVar18].Pimpl.Reference = pFVar19;
    if (pFVar19 != (FTaskBase *)0x0) {
      LOCK();
      *(int *)&(pFVar19->RefCount).field_0x0 = *(int *)&(pFVar19->RefCount).field_0x0 + 1;
      UNLOCK();
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_> @ 14546df90

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
AddSetupTask<_FSceneCulling::FUpdater::PreSceneUpdate_::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
          (FRDGBuilder *this,<lambda_1> *param_1,FPipe *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned___int64> aVar3;
  FUpdater *pFVar4;
  FTaskHandle *pFVar5;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  FTaskBase *pFVar10;
  <lambda_1> *p<Var11;
  int iVar12;
  FTaskBase *pFVar13;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar14;
  int iVar15;
  ETaskPriority EVar16;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  atomic<UE::Tasks::Private::FTaskBase_*> local_a8;
  atomic<unsigned___int64> aStack_a0;
  TEventCount<unsigned_int> *local_98;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTStack_90;
  FViewSceneChangeSet *local_88;
  atomic<UE::Tasks::Private::FTaskBase_*> aStack_80;
  undefined1 local_78 [16];
  atomic<UE::Tasks::Private::FTaskBase_*> local_68;
  atomic<unsigned___int64> aStack_60;
  TEventCount<unsigned_int> *local_58;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTStack_50;
  FViewSceneChangeSet *local_48;
  atomic<UE::Tasks::Private::FTaskBase_*> aStack_40;
  atomic<unsigned___int64> local_38;
  
  pFVar13 = (FTaskBase *)0x0;
  pTVar6 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
           CONCAT71(in_stack_00000029,param_4);
  param_1->__this = (FUpdater *)0x0;
  if (((param_6 == Compile) || (bVar7 = IsImmediateMode(), bVar7)) && (pTVar6->ArrayNum != 0)) {
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar6,(FTimespan)0x7fffffffffffffff);
  }
  local_a8 = param_2->LastTask;
  aStack_a0 = param_2->TaskCount;
  cVar8 = (this->ParallelSetup).bEnabled;
  bVar7 = (bool)cVar8 == false;
  local_98 = (param_2->EmptyEventRef).Object;
  pTStack_90 = (TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
                *)(param_2->EmptyEventRef).SharedReferenceCount.ReferenceController;
  local_88 = (FViewSceneChangeSet *)param_2->DebugName;
  aStack_80 = param_2[1].LastTask;
  aVar3 = param_2[1].TaskCount;
  EVar16 = High;
  if (this->bCompiling != false) {
    cVar8 = this->bParallelCompileEnabled;
  }
  local_68 = local_a8;
  aStack_60 = aStack_a0;
  local_58 = local_98;
  pTStack_50 = pTStack_90;
  local_48 = local_88;
  aStack_40 = aStack_80;
  local_38 = aVar3;
  if ((param_6 == Compile) ||
     ((cVar8 == '\0' &&
      (bVar9 = UE::RDG::
               IsCompleted<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                         (pTVar6), bVar9)))) {
    FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_a8,EParallelRenderingThread);
    `FSceneCulling::FUpdater::PreSceneUpdate'::__l5::<lambda_1>::operator()(&local_68);
    FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_a8);
  }
  else {
    iVar12 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    if (param_3 == (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar15 = 4;
      if (iVar12 < 4) {
        iVar15 = iVar12;
      }
      if (0 < iVar15) {
        EVar16 = (ETaskPriority)iVar15;
      }
      pFVar10 = FMemory::Malloc(0x140,0x40);
      if (pFVar10 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::`5'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar10,L"FRDGBuilder::AddSetupTask",EVar16,bVar7,None);
        pFVar10[1]._padding_ = (longlong)local_a8;
        pFVar10[1]._padding_ = (longlong)aStack_a0;
        pFVar10[1]._padding_ = (longlong)local_98;
        pFVar10[1]._padding_ = (longlong)pTStack_90;
        pFVar10[1]._padding_ = (longlong)local_88;
        pFVar10[1]._padding_ = (longlong)aStack_80;
        *(atomic<unsigned___int64> *)&pFVar10[1].RefCount = aVar3;
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::`5'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar13 = pFVar10;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar13,pTVar6,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x140);
      p<Var11 = (<lambda_1> *)(local_78 + 8);
    }
    else {
      iVar15 = 4;
      if (iVar12 < 4) {
        iVar15 = iVar12;
      }
      pFVar10 = FMemory::Malloc(0x140,0x40);
      if (pFVar10 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
        if (0 < iVar15) {
          EVar16 = (ETaskPriority)iVar15;
        }
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::`5'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar10,L"FRDGBuilder::AddSetupTask",EVar16,bVar7,None);
        pFVar10[1]._padding_ = (longlong)local_a8;
        pFVar10[1]._padding_ = (longlong)aStack_a0;
        pFVar10[1]._padding_ = (longlong)local_98;
        pFVar10[1]._padding_ = (longlong)pTStack_90;
        pFVar10[1]._padding_ = (longlong)local_88;
        pFVar10[1]._padding_ = (longlong)aStack_80;
        *(atomic<unsigned___int64> *)&pFVar10[1].RefCount = aVar3;
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::`5'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar13 = pFVar10;
      }
      LOCK();
      *(longlong *)&param_3->ArrayNum = *(longlong *)&param_3->ArrayNum + 1;
      UNLOCK();
      LOCK();
      pFVar13->NumLocks = (atomic<unsigned_int>)((int)pFVar13->NumLocks + 1);
      UNLOCK();
      pFVar13->Pipe = (FPipe *)param_3;
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar13,pTVar6,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x140);
      p<Var11 = (<lambda_1> *)local_78;
    }
    if (param_1 == p<Var11) {
      if (pFVar13 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar13->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
    }
    else {
      pFVar4 = param_1->__this;
      param_1->__this = (FUpdater *)pFVar13;
      if (pFVar4 != (FUpdater *)0x0) {
        LOCK();
        pFVar5 = &pFVar4[1].PreUpdateTaskHandle;
        iVar12 = *(int *)&(pFVar5->Pimpl).Reference;
        *(int *)&(pFVar5->Pimpl).Reference = *(int *)&(pFVar5->Pimpl).Reference + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  if (param_1->__this != (FUpdater *)0x0) {
    pTVar14 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar12 = pTVar14->ArrayNum;
    if (iVar12 == pTVar14->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                         (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
    }
    pTVar14->ArrayNum = iVar12 + 1;
    pFVar5 = (pTVar14->AllocatorInstance).Data;
    pFVar5[iVar12].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar13 = (FTaskBase *)param_1->__this;
    pFVar5[iVar12].Pimpl.Reference = pFVar13;
    if (pFVar13 != (FTaskBase *)0x0) {
      LOCK();
      *(int *)&(pFVar13->RefCount).field_0x0 = *(int *)&(pFVar13->RefCount).field_0x0 + 1;
      UNLOCK();
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::__l19::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_> @ 14546e320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FRDGBuilder::
AddSetupTask<_FSceneInstanceCullingQuery::Dispatch_::__l19::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
          (FRDGBuilder *this,<lambda_1> *param_1,FPipe *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  atomic<UE::Tasks::Private::FTaskBase_*> this_00;
  FSceneInstanceCullingQuery *pFVar1;
  FTaskHandle *pFVar2;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  <lambda_1> *p<Var8;
  int iVar9;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar10;
  int iVar11;
  ETaskPriority EVar12;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  <lambda_1> local_48;
  <lambda_1> local_40;
  FTaskTagScope local_38;
  
  pTVar3 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
           CONCAT71(in_stack_00000029,param_4);
  param_1->__this = (FSceneInstanceCullingQuery *)0x0;
  if (((param_6 == Compile) || (bVar4 = IsImmediateMode(), bVar4)) && (pTVar3->ArrayNum != 0)) {
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar3,(FTimespan)0x7fffffffffffffff);
  }
  cVar5 = (this->ParallelSetup).bEnabled;
  this_00 = param_2->LastTask;
  bVar4 = (bool)cVar5 == false;
  if (this->bCompiling != false) {
    cVar5 = this->bParallelCompileEnabled;
  }
  if ((param_6 == Compile) ||
     ((cVar5 == '\0' &&
      (bVar6 = UE::RDG::
               IsCompleted<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                         (pTVar3), bVar6)))) {
    FTaskTagScope::FTaskTagScope(&local_38,EParallelRenderingThread);
    FSceneInstanceCullingQuery::ComputeResult((FSceneInstanceCullingQuery *)this_00);
    FTaskTagScope::~FTaskTagScope(&local_38);
  }
  else {
    iVar9 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    if (param_3 == (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar11 = 4;
      if (iVar9 < 4) {
        iVar11 = iVar9;
      }
      EVar12 = High;
      if (0 < iVar11) {
        EVar12 = (ETaskPriority)iVar11;
      }
      pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar7 == (FTaskBase *)0x0) {
        pFVar7 = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
        pFVar7->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::`19'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar7,L"FRDGBuilder::AddSetupTask",EVar12,bVar4,None);
        pFVar7[1]._padding_ = (longlong)this_00;
        pFVar7->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::`19'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar7,pTVar3,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
      p<Var8 = &local_40;
    }
    else {
      iVar11 = 4;
      if (iVar9 < 4) {
        iVar11 = iVar9;
      }
      pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar7 == (FTaskBase *)0x0) {
        pFVar7 = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
        EVar12 = High;
        if (0 < iVar11) {
          EVar12 = (ETaskPriority)iVar11;
        }
        pFVar7->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::`19'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar7,L"FRDGBuilder::AddSetupTask",EVar12,bVar4,None);
        pFVar7[1]._padding_ = (longlong)this_00;
        pFVar7->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::`19'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
      }
      LOCK();
      *(longlong *)&param_3->ArrayNum = *(longlong *)&param_3->ArrayNum + 1;
      UNLOCK();
      LOCK();
      pFVar7->NumLocks = (atomic<unsigned_int>)((int)pFVar7->NumLocks + 1);
      UNLOCK();
      pFVar7->Pipe = (FPipe *)param_3;
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar7,pTVar3,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
      p<Var8 = &local_48;
    }
    if (param_1 == p<Var8) {
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        pFVar2 = (FTaskHandle *)&pFVar7->RefCount;
        iVar9 = *(int *)&(pFVar2->Pimpl).Reference;
        *(int *)&(pFVar2->Pimpl).Reference = *(int *)&(pFVar2->Pimpl).Reference + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
    else {
      pFVar1 = param_1->__this;
      param_1->__this = (FSceneInstanceCullingQuery *)pFVar7;
      if (pFVar1 != (FSceneInstanceCullingQuery *)0x0) {
        LOCK();
        pFVar2 = &pFVar1->AsyncTaskHandle;
        iVar9 = *(int *)&(pFVar2->Pimpl).Reference;
        *(int *)&(pFVar2->Pimpl).Reference = *(int *)&(pFVar2->Pimpl).Reference + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)pFVar1->SceneCullingRenderer)(pFVar1,1);
        }
      }
    }
  }
  if (param_1->__this != (FSceneInstanceCullingQuery *)0x0) {
    pTVar10 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar9 = pTVar10->ArrayNum;
    if (iVar9 == pTVar10->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                        (0x808,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    pTVar10->ArrayNum = iVar9 + 1;
    pFVar2 = (pTVar10->AllocatorInstance).Data;
    pFVar2[iVar9].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar7 = (FTaskBase *)param_1->__this;
    pFVar2[iVar9].Pimpl.Reference = pFVar7;
    if (pFVar7 != (FTaskBase *)0x0) {
      LOCK();
      *(int *)&(pFVar7->RefCount).field_0x0 = *(int *)&(pFVar7->RefCount).field_0x0 + 1;
      UNLOCK();
      return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_> @ 14546e630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FTaskHandle __thiscall
FRDGBuilder::
AddSetupTask<_FDeferredShadingSceneRenderer::RenderOcclusion_::__l5::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
          (FRDGBuilder *this,<lambda_2> *param_1,FPipe *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  undefined1 *puVar1;
  TEventCount<unsigned_int> *pTVar2;
  FTaskHandle *pFVar3;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FDeferredShadingSceneRenderer *pFVar8;
  <lambda_2> *p<Var9;
  int iVar10;
  FDeferredShadingSceneRenderer *pFVar11;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar12;
  int iVar13;
  ETaskPriority EVar14;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  undefined1 local_68 [16];
  atomic<UE::Tasks::Private::FTaskBase_*> local_58;
  atomic<unsigned___int64> aStack_50;
  atomic<UE::Tasks::Private::FTaskBase_*> local_48;
  atomic<unsigned___int64> aStack_40;
  TEventCount<unsigned_int> *local_38;
  
  pFVar11 = (FDeferredShadingSceneRenderer *)0x0;
  pTVar4 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
           CONCAT71(in_stack_00000029,param_4);
  param_1->__this = (FDeferredShadingSceneRenderer *)0x0;
  if (((param_6 == Compile) || (bVar5 = IsImmediateMode(), bVar5)) && (pTVar4->ArrayNum != 0)) {
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar4,(FTimespan)0x7fffffffffffffff);
  }
  local_58 = param_2->LastTask;
  aStack_50 = param_2->TaskCount;
  cVar6 = (this->ParallelSetup).bEnabled;
  bVar5 = (bool)cVar6 == false;
  pTVar2 = (param_2->EmptyEventRef).Object;
  EVar14 = High;
  if (this->bCompiling != false) {
    cVar6 = this->bParallelCompileEnabled;
  }
  local_48 = local_58;
  aStack_40 = aStack_50;
  local_38 = pTVar2;
  if ((param_6 == Compile) ||
     ((cVar6 == '\0' &&
      (bVar7 = UE::RDG::
               IsCompleted<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                         (pTVar4), bVar7)))) {
    FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_58,EParallelRenderingThread);
    `FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_2>::operator()(&local_48);
    FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_58);
  }
  else {
    iVar10 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    if (param_3 == (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar13 = 4;
      if (iVar10 < 4) {
        iVar13 = iVar10;
      }
      if (0 < iVar13) {
        EVar14 = (ETaskPriority)iVar13;
      }
      pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar8 != (FDeferredShadingSceneRenderer *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar8,2,true);
        *(undefined ***)&pFVar8->field_0x0 =
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::`5'::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  ((FTaskBase *)pFVar8,L"FRDGBuilder::AddSetupTask",EVar14,bVar5,None);
        *(atomic<UE::Tasks::Private::FTaskBase_*> *)&pFVar8->field_0xd8 = local_58;
        *(atomic<unsigned___int64> *)(&pFVar8->field_0xd8 + 8) = aStack_50;
        *(TEventCount<unsigned_int> **)(&pFVar8->field_0xd8 + 0x10) = pTVar2;
        *(undefined ***)&pFVar8->field_0x0 =
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::`5'::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar11 = pFVar8;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                ((FTaskBase *)pFVar11,pTVar4,true);
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar11,0x100);
      p<Var9 = (<lambda_2> *)(local_68 + 8);
    }
    else {
      iVar13 = 4;
      if (iVar10 < 4) {
        iVar13 = iVar10;
      }
      pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar8 != (FDeferredShadingSceneRenderer *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar8,2,true);
        if (0 < iVar13) {
          EVar14 = (ETaskPriority)iVar13;
        }
        *(undefined ***)&pFVar8->field_0x0 =
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::`5'::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  ((FTaskBase *)pFVar8,L"FRDGBuilder::AddSetupTask",EVar14,bVar5,None);
        *(atomic<UE::Tasks::Private::FTaskBase_*> *)&pFVar8->field_0xd8 = local_58;
        *(atomic<unsigned___int64> *)(&pFVar8->field_0xd8 + 8) = aStack_50;
        *(TEventCount<unsigned_int> **)(&pFVar8->field_0xd8 + 0x10) = pTVar2;
        *(undefined ***)&pFVar8->field_0x0 =
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::`5'::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar11 = pFVar8;
      }
      LOCK();
      *(longlong *)&param_3->ArrayNum = *(longlong *)&param_3->ArrayNum + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar11->field_0x34 = *(int *)&pFVar11->field_0x34 + 1;
      UNLOCK();
      *(TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> **)&pFVar11->field_0x38
           = param_3;
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                ((FTaskBase *)pFVar11,pTVar4,true);
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar11,0x100);
      p<Var9 = (<lambda_2> *)local_68;
    }
    if (param_1 == p<Var9) {
      if (pFVar11 != (FDeferredShadingSceneRenderer *)0x0) {
        LOCK();
        puVar1 = &pFVar11->field_0x30;
        iVar10 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (*(code *)**(undefined8 **)&pFVar11->field_0x0)(pFVar11,1);
        }
      }
    }
    else {
      pFVar8 = param_1->__this;
      param_1->__this = pFVar11;
      if (pFVar8 != (FDeferredShadingSceneRenderer *)0x0) {
        LOCK();
        puVar1 = &pFVar8->field_0x30;
        iVar10 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
        }
      }
    }
  }
  if (param_1->__this != (FDeferredShadingSceneRenderer *)0x0) {
    pTVar12 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar10 = pTVar12->ArrayNum;
    if (iVar10 == pTVar12->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                         (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
    }
    pTVar12->ArrayNum = iVar10 + 1;
    pFVar3 = (pTVar12->AllocatorInstance).Data;
    pFVar3[iVar10].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar11 = param_1->__this;
    pFVar3[iVar10].Pimpl.Reference = (FTaskBase *)pFVar11;
    if (pFVar11 != (FDeferredShadingSceneRenderer *)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)&pFVar11->field_0x30 =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)&pFVar11->field_0x30 + 1);
      UNLOCK();
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// BindForLegacyShaderParameters<FComputeExplicitChunkBounds_CS::FParameters> @ 1454705f0

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
BindForLegacyShaderParameters<FComputeExplicitChunkBounds_CS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FComputeExplicitChunkBounds_CS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FHZBTestPS::FParameters> @ 145470650

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
BindForLegacyShaderParameters<FHZBTestPS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FOcclusionFeedbackPS::FParameters> @ 1454706b0

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
BindForLegacyShaderParameters<FOcclusionFeedbackPS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FOcclusionFeedbackPS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FOcclusionFeedbackVS::FParameters> @ 145470710

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
BindForLegacyShaderParameters<FOcclusionFeedbackVS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FOcclusionFeedbackVS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FSceneCapturePS::FParameters> @ 145470770

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
BindForLegacyShaderParameters<FSceneCapturePS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FSceneCapturePS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FSceneCullingDebugRender_CS::FParameters> @ 1454707d0

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
BindForLegacyShaderParameters<FSceneCullingDebugRender_CS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FSceneCullingDebugRender_CS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClampDim<__int64> @ 145470830

TIntVector3<__int64> * __cdecl
ClampDim<__int64>(TIntVector3<__int64> *__return_storage_ptr__,TIntVector3<__int64> *param_1,
                 long64 param_2,long64 param_3)

{
  long64 lVar1;
  long64 lVar2;
  long64 lVar3;
  
  lVar3 = param_3;
  if ((param_1->field0_0x0)._s_0.Z < param_3) {
    lVar3 = (param_1->field0_0x0)._s_0.Z;
  }
  lVar2 = param_3;
  if ((param_1->field0_0x0)._s_0.Y < param_3) {
    lVar2 = (param_1->field0_0x0)._s_0.Y;
  }
  if ((param_1->field0_0x0)._s_0.X < param_3) {
    param_3 = (param_1->field0_0x0)._s_0.X;
  }
  lVar1 = param_2;
  if (param_2 < param_3) {
    lVar1 = param_3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = lVar1;
  lVar1 = param_2;
  if (param_2 < lVar2) {
    lVar1 = lVar2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = lVar1;
  if (param_2 < lVar3) {
    param_2 = lVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_2;
  return __return_storage_ptr__;
}

// ClearUnusedGraphResources<FComputeExplicitChunkBounds_CS> @ 145470880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FComputeExplicitChunkBounds_CS>
          (TShaderRefBase<FComputeExplicitChunkBounds_CS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FHZBTestPS> @ 145470900

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FHZBTestPS>
          (TShaderRefBase<FHZBTestPS,FShaderMapPointerTable> *param_1,FParameters *param_2,
          initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata();
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

// ClearUnusedGraphResources<FHZBTestPS> @ 145470980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FHZBTestPS>
          (TShaderRefBase<FHZBTestPS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FSceneCullingDebugRender_CS> @ 145470a00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FSceneCullingDebugRender_CS>
          (TShaderRefBase<FSceneCullingDebugRender_CS,FShaderMapPointerTable> *param_1,
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

// CreateStructuredBuffer<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145470e80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
CreateStructuredBuffer<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (FRDGBuilder *param_1,wchar_t *param_2,
          TArray<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGBuffer *pFVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_18 [2];
  
  if (param_3->ArrayNum == 0) {
    pFVar5 = CreateStructuredBuffer
                       (param_1,param_2,8,1,
                        &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                         ::__l2::DummyElement,8,NoCopy);
    return pFVar5;
  }
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x18,0x10);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    puVar6[1] = 0;
    *puVar6 = &
              ___7__TObject_V__TArray_U__TIntVector2_H_Math_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______FRDGAllocator__6B_
    ;
    puVar6[1] = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (TIntVector2<int> *)0x0;
    *(int *)(puVar6 + 2) = param_3->ArrayNum;
    *(int *)((longlong)puVar6 + 0x14) = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
    puVar7 = puVar6;
  }
  local_18[0] = puVar7;
  if (((undefined8 **)param_1->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  pFVar5 = CreateStructuredBuffer
                     (param_1,param_2,8,*(uint *)(puVar7 + 2),(void *)puVar7[1],
                      (ulonglong)(*(uint *)(puVar7 + 2) * 8),NoCopy);
  return pFVar5;
}

// DefaultConstructItems<UE::HLSL::FCellBlockData,int> @ 145471120

void __cdecl DefaultConstructItems<UE::HLSL::FCellBlockData,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<FSceneCulling::FPrimitiveState,int> @ 145471150

void __cdecl DefaultConstructItems<FSceneCulling::FPrimitiveState,int>(void *param_1,int param_2)

{
  uint *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (uint *)((longlong)param_1 + 8);
    do {
      *puVar1 = *puVar1 & 0xfffffff8;
      *(byte *)(puVar1 + 1) = (byte)puVar1[1] & 0xfe;
      puVar1[2] = puVar1[2] | 0xfffffff;
      puVar1[-2] = 0xffffffff;
      puVar1[-1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSceneCullingBuilder::FTempCell,int> @ 145471190

void __cdecl DefaultConstructItems<FSceneCullingBuilder::FTempCell,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0xb0);
    do {
      puVar1[-0x16] = 0xffffffffffffffff;
      puVar1[-0x15] = 0;
      *(undefined2 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)((longlong)puVar1 + -0x9c) = 0;
      *(undefined8 *)((longlong)puVar1 + -0x94) = 0;
      *(undefined4 *)((longlong)puVar1 + -0x8c) = 0;
      *(undefined4 *)(puVar1 + -0x11) = 0x40;
      *(undefined4 *)((longlong)puVar1 + -0x84) = 0xffffffff;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0x20;
      *(undefined4 *)(puVar1 + 2) = 0x40;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
      puVar1[0x13] = 0;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x20;
      puVar1 = puVar1 + 0x2b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FViewOcclusionQueries,int> @ 145471240

void __cdecl DefaultConstructItems<FViewOcclusionQueries,int>(void *param_1,int param_2)

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
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined1 *)(lVar1 + 0x74) = 1;
      lVar1 = lVar1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSceneInstanceCullingQuery::FCullingJob,int> @ 1454712e0

void __cdecl
DestructItems<FSceneInstanceCullingQuery::FCullingJob,int>(FCullingJob *param_1,int param_2)

{
  ForElementType<UE::Math::TPlane<double>_> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->CullingVolume).ConvexVolume.Planes.AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[0x24] != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)pFVar1[0x24]);
      }
      if (*pFVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x4a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSceneCulling::FPrimitiveState,int> @ 145471340

void __cdecl DestructItems<FSceneCulling::FPrimitiveState,int>(FPrimitiveState *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->InstanceSceneDataImmutable).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSceneCullingBuilder::FTempCell,int> @ 145471380

void __cdecl DestructItems<FSceneCullingBuilder::FTempCell,int>(FTempCell *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[0x13].Data != (void *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1[0x13].Data);
      }
      if (pFVar1->Data != (uint *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1->Data);
      }
      pFVar1 = pFVar1 + 0x2b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Emplace<TPairInitializer<FRDGTexture_*_&,`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>_&&>_> @ 1454718e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FRDGTexture_*_&,_UpdateSceneCaptureContent_RenderThread_::__l8::<lambda_1>_&&>_>
          (TSet<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FRDGTexture_*_&,_void___cdecl_UpdateSceneCaptureContent_RenderThread(FRDGBuilder_&,FSceneRenderer_*,FSceneRenderUpdateInputs_const_*,FRenderTarget_*,FTexture_*,TArrayView<FRHICopyTextureInfo_const_,int>,bool,FGenerateMipsParams_const_&,bool,bool)_::_8_::<lambda_1>_&&>
                 *param_1,bool *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_> *pTVar13
  ;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar2 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar2 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar2 = iVar2 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar7 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  pTVar13 = (TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_>
             *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_> *)
      0x0) {
    puVar5 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    puVar1 = (undefined1 *)((longlong)local_38.Pointer + 0x28);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined ***)((longlong)local_38.Pointer + 0x20) =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::`8'::<lambda_1>,0,0>::
          _vftable_;
    *(undefined8 *)puVar1 = *puVar5;
    *puVar5 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = *(undefined4 *)(puVar5 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0x34) = *(undefined4 *)((longlong)puVar5 + 0xc);
    puVar5[1] = 0;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)((longlong)local_38.Pointer + 0x10) =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,void,FRHICommandList_&,int>
           ::Call;
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
    pTVar13 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  uVar8 = ((uint)(*(ulonglong *)pTVar13 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pTVar13 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  bVar6 = TryReplaceExisting(this,uVar8,pTVar13,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)&pTVar13->field_0x44 = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&pTVar13->field_0x40 = *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Enqueue<TRenderCommandTag<`FSceneViewState::Destroy'::__l2::TSTR_FSceneViewState_Destroy311>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145471e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneViewState::Destroy_::__l2::TSTR_FSceneViewState_Destroy311>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSceneViewState::Destroy'::__l2::TSTR_FSceneViewState_Destroy311>::
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
      if (bVar8) goto LAB_145471fb1;
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
    goto LAB_1454721a5;
  }
LAB_145471fb1:
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
LAB_14547208f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14547208f;
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
LAB_1454721a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FScene::UpdateSceneCaptureContents'::__l12::TSTR_ResizeSceneCapture1558>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1454721e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FScene::UpdateSceneCaptureContents_::__l12::TSTR_ResizeSceneCapture1558>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FScene::UpdateSceneCaptureContents'::__l12::TSTR_ResizeSceneCapture1558>
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
      if (bVar8) goto LAB_145472331;
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
    goto LAB_145472525;
  }
LAB_145472331:
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
LAB_14547240f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14547240f;
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
LAB_145472525:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l21::TSTR_SceneRenderBuilder_BeginGroup799>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145472560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l21::TSTR_SceneRenderBuilder_BeginGroup799>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l21::TSTR_SceneRenderBuilder_BeginGroup799>
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
      if (bVar8) goto LAB_1454726b1;
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
    goto LAB_1454728a5;
  }
LAB_1454726b1:
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
LAB_14547278f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14547278f;
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
LAB_1454728a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l2::TSTR_SceneRenderBuilder_End924>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1454728e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l2::TSTR_SceneRenderBuilder_End924>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l2::TSTR_SceneRenderBuilder_End924>
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
      if (bVar8) goto LAB_145472a31;
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
    goto LAB_145472c25;
  }
LAB_145472a31:
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
LAB_145472b0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145472b0f;
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
LAB_145472c25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l28::TSTR_SceneRenderBuilder_EndGroup809>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145472c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l28::TSTR_SceneRenderBuilder_EndGroup809>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l28::TSTR_SceneRenderBuilder_EndGroup809>
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
      if (bVar8) goto LAB_145472db1;
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
    goto LAB_145472fa5;
  }
LAB_145472db1:
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
LAB_145472e8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145472e8f;
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
LAB_145472fa5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l30::TSTR_SceneRenderBuilder_Render829>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145472fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l30::TSTR_SceneRenderBuilder_Render829>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l30::TSTR_SceneRenderBuilder_Render829>
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
      if (bVar8) goto LAB_145473131;
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
    goto LAB_145473325;
  }
LAB_145473131:
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
LAB_14547320f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14547320f;
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
LAB_145473325:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l14::TSTR_ScheduleGPUDebugCrash766>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145473360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l14::TSTR_ScheduleGPUDebugCrash766>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l14::TSTR_ScheduleGPUDebugCrash766>
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
      if (bVar8) goto LAB_1454734b1;
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
    goto LAB_1454736a5;
  }
LAB_1454734b1:
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
LAB_14547358f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14547358f;
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
LAB_1454736a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEach<``FSceneCulling::TestSphere<`FSceneInstanceCullingQuery::ComputeResult'::__l9::FResultConsumer>'::__l4::<lambda_1>::operator()'::__l8::<lambda_1>_> @ 145473d50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::TFootprint<signed_char>::
ForEach<__FSceneCulling::TestSphere<_FSceneInstanceCullingQuery::ComputeResult_::__l9::FResultConsumer>_::__l4::<lambda_1>::operator()_::__l8::<lambda_1>_>
          (TFootprint<signed_char> *this,<lambda_1> *param_1)

{
  uint uVar1;
  TSphere<float> *pTVar2;
  FResultConsumer *pFVar3;
  TArray<UE::HLSL::FPackedCellHeader,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  FSceneInstanceCullResult *this_00;
  FCellChunkDraw *pFVar6;
  code *pcVar7;
  FCellChunkDraw FVar8;
  int *piVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar10 = __real_3f800000;
  cVar16 = (this->Min).field0_0x0._s_0.Z;
  if (cVar16 <= (this->Max).field0_0x0._s_0.Z) {
    do {
      cVar15 = (this->Min).field0_0x0._s_0.Y;
      if (cVar15 <= (this->Max).field0_0x0._s_0.Y) {
        do {
          cVar14 = (this->Min).field0_0x0._s_0.X;
          if (cVar14 <= (this->Max).field0_0x0._s_0.X) {
            do {
              if ((param_1->Block->CoarseCellMask >>
                   ((ulonglong)
                    ((uint)(byte)(cVar14 >> 1) + ((int)(cVar15 >> 1) + (cVar16 >> 1) * 4) * 4 & 0xff
                    ) & 0x3f) & 1) != 0) {
                fVar21 = *param_1->LevelCellSize;
                fVar22 = (float)(int)cVar16;
                fVar18 = (float)(int)cVar14;
                fVar20 = (float)(int)cVar15;
                fVar24 = fVar21 * fVar22;
                fVar19 = fVar21 * fVar18;
                fVar23 = fVar21 * fVar20;
                fVar22 = (fVar22 + fVar10) * fVar21;
                fVar18 = (fVar18 + fVar10) * fVar21;
                fVar21 = (fVar20 + fVar10) * fVar21;
                if (param_1->__this->bTestCellVsQueryBounds != false) {
                  pTVar2 = param_1->BlockLocalSphere;
                  fVar17 = 0.0;
                  fVar20 = (pTVar2->Center).field0_0x0._s_0.X;
                  if ((fVar20 < fVar19) || (fVar19 = fVar18, fVar18 < fVar20)) {
                    fVar17 = (fVar20 - fVar19) * (fVar20 - fVar19);
                  }
                  fVar19 = (pTVar2->Center).field0_0x0._s_0.Y;
                  if ((fVar19 < fVar23) || (fVar23 = fVar21, fVar21 < fVar19)) {
                    fVar17 = fVar17 + (fVar19 - fVar23) * (fVar19 - fVar23);
                  }
                  fVar21 = (pTVar2->Center).field0_0x0._s_0.Z;
                  if ((fVar21 < fVar24) || (fVar24 = fVar22, fVar22 < fVar21)) {
                    fVar17 = fVar17 + (fVar21 - fVar24) * (fVar21 - fVar24);
                  }
                  if (pTVar2->W * pTVar2->W < fVar17) goto LAB_14547401d;
                }
                pFVar3 = param_1->ResultConsumer;
                pTVar4 = pFVar3->CellHeaders;
                uVar13 = param_1->Block->GridOffset + ((int)cVar15 + cVar16 * 8) * 8 + (int)cVar14;
                uVar12 = 0;
                if ((int)uVar13 < pTVar4->ArrayNum) {
                  uVar12 = ~uVar13 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar5 = *(ulonglong *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar13 * 8)
                ;
                uVar13 = (uint)uVar5 & 0x1fffff;
                uVar12 = uVar13 - 1;
                if ((uVar5 & 0x1fffff) == 0) {
                  uVar12 = uVar13;
                }
                if ((uVar5 & 0x1fffff) != 0) {
                  this_00 = pFVar3->CullingResult;
                  piVar9 = &(this_00->CellChunkDraws).ParentInfos.ArrayMax;
                  uVar13 = (this_00->CellChunkDraws).ParentInfos.ArrayNum;
                  uVar1 = pFVar3->ViewGroupId;
                  (this_00->CellChunkDraws).PayloadGenerator.ParentItemOffset = uVar13;
                  if (uVar13 == *piVar9) {
                    uVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FCellChunkDraw>_>
                                       (0x408,&(this_00->CellChunkDraws).ParentInfos.
                                               AllocatorInstance,piVar9);
                    (this_00->CellChunkDraws).ParentInfos.ArrayNum = uVar13;
                  }
                  pFVar6 = (this_00->CellChunkDraws).ParentInfos.AllocatorInstance.Data;
                  (this_00->CellChunkDraws).ParentInfos.ArrayNum = uVar13 + 1;
                  FVar8.ViewGroupId = uVar1;
                  FVar8.ItemChunksOffset = (uint)(uVar5 >> 0x2a);
                  pFVar6[(int)uVar13] = FVar8;
                  FGPUWorkGroupLoadBalancer::
                  Add<TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::FPayloadGenerator>
                            ((FGPUWorkGroupLoadBalancer *)this_00,
                             &(this_00->CellChunkDraws).PayloadGenerator,
                             uVar12 + ((uint)(uVar5 >> 0x15) & 0x1fffff));
                }
              }
LAB_14547401d:
              cVar14 = cVar14 + '\x01';
            } while (cVar14 <= (this->Max).field0_0x0._s_0.X);
          }
          cVar15 = cVar15 + '\x01';
        } while (cVar15 <= (this->Max).field0_0x0._s_0.Y);
      }
      cVar16 = cVar16 + '\x01';
    } while (cVar16 <= (this->Max).field0_0x0._s_0.Z);
  }
  return;
}

// IntCastChecked<signed_char,__int64> @ 1454741b0

schar __cdecl IntCastChecked<signed_char,__int64>(long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  
  if (param_1 != (char)param_1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  return (char)param_1;
}

// ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_> @ 1454742d0

TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> * __cdecl
ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14547436d;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14547436d:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
             (*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145474470;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145474470:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
         param_1;
}

// SetShaderParametersLegacyVS<FRHICommandList,FOcclusionQueryVS,FViewInfo_&> @ 145475730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParametersLegacyVS<FRHICommandList,FOcclusionQueryVS,FViewInfo_&>
          (FRHICommandList *param_1,
          TShaderRefBase<FOcclusionQueryVS,FShaderMapPointerTable> *param_2,FViewInfo *param_3)

{
  FOcclusionQueryVS *this;
  FRHIVertexShader *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  FSceneView *pFVar3;
  TVector4<float>_u_0 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = TShaderRefBase<FOcclusionQueryVS,FShaderMapPointerTable>::GetVertexShader(param_2,true);
  pFVar2 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  this = param_2->ShaderContent;
  local_28._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_28._8_8_ = _UNK_150689648;
  local_18 = ___xmm_3f800000000000000000000000000000;
  uStack_10 = _UNK_150689648;
  if (*(char *)((longlong)&param_3->_padding_ + 6) != '\0') {
    pFVar3 = FSceneView::GetInstancedSceneView((FSceneView *)param_3);
    if (pFVar3 != (FSceneView *)0x0) {
      local_18 = CONCAT44((float)((pFVar3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y -
                                 (double)param_3->_padding_),
                          (float)((pFVar3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X -
                                 (double)param_3->_padding_));
      uStack_10 = CONCAT44(uStack_10._4_4_,
                           (float)((pFVar3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z -
                                  (double)param_3->_padding_));
    }
  }
  FOcclusionQueryVS::SetParametersInternal(this,pFVar2,param_3,(TVector4<float> *)&local_28._s_0);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar1,pFVar2);
  return;
}

// SetShaderValueArray<UE::Math::TVector4<float>_> @ 145475830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderValueArray<UE::Math::TVector4<float>_>
          (FRHIBatchedShaderParameters *param_1,FShaderParameter *param_2,TVector4<float> *param_3,
          uint param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = (uint)param_2->NumBytes + param_5 * -0x10;
  if ((int)(param_4 * 0x10) < (int)uVar1) {
    uVar1 = param_4 * 0x10;
  }
  if (0 < (int)uVar1) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)param_2->BufferIndex,(uint)param_2->BaseIndex + param_5 * 0x10,uVar1,
               param_3);
    return;
  }
  return;
}

// TestSphere<`FSceneInstanceCullingQuery::ComputeResult'::__l9::FResultConsumer> @ 1454759a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneCulling::TestSphere<_FSceneInstanceCullingQuery::ComputeResult_::__l9::FResultConsumer>
          (FSceneCulling *this,TSphere<double> *param_1,FResultConsumer *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  double dVar23;
  int local_res20;
  uint local_158;
  float local_154;
  float local_150 [2];
  ulonglong local_148;
  longlong local_140;
  ForElementType<unsigned_int> local_138;
  TRobinHoodHashMap<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  *local_130;
  longlong local_128;
  longlong local_120;
  TIntVector3<__int64>_u_0 local_118;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  TRobinHoodHashMap<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  *local_b8;
  float *local_b0;
  TSphere<double> *local_a8;
  float *local_a0;
  longlong *local_98;
  FSceneCulling *local_90;
  FResultConsumer *local_88;
  
  fVar9 = __real_3f000000;
  dVar8 = __real_3fe0000000000000;
  iVar21 = 0;
  local_138 = (ForElementType<unsigned_int>)&this->BlockLevelOccupancyMask;
  iVar19 = (this->BlockLevelOccupancyMask).NumBits;
  local_130 = &(this->SpatialHash).HashMap;
  local_148 = 1;
  local_res20 = 0;
  iVar10 = 0;
  if (iVar19 != 0) {
    FVar17 = (this->BlockLevelOccupancyMask).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_138;
    }
    uVar12 = *(uint *)FVar17;
    local_res20 = 0;
    while (uVar12 == 0) {
      local_res20 = local_res20 + 0x20;
      lVar11 = (longlong)iVar21;
      iVar21 = iVar21 + 1;
      iVar10 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_145475a77;
      uVar12 = *(uint *)((uchar *)((longlong)FVar17 + 4) + lVar11 * 4);
    }
    local_148 = (ulonglong)(-uVar12 & uVar12);
    uVar15 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (int)lVar11 + -1 + local_res20;
    if (iVar19 < iVar10) {
      iVar10 = iVar19;
    }
  }
LAB_145475a77:
  if (iVar10 < iVar19) {
    local_158 = 0xffffffff;
    uVar15 = local_148;
    iVar19 = local_res20;
    do {
      local_c8 = iVar10 + -3;
      local_150[0] = (float)(ulonglong)(1L << ((char)local_c8 + 1U & 0x3f));
      dVar2 = (param_1->Center).field0_0x0._s_0.X;
      dVar3 = (param_1->Center).field0_0x0._s_0.Y;
      dVar4 = (param_1->Center).field0_0x0._s_0.Z;
      dVar23 = (this->SpatialHash).RecCellSizes[(longlong)iVar10 + -3];
      dVar6 = (double)(local_150[0] * fVar9) + param_1->W;
      dVar23 = dVar23 + dVar23;
      lVar20 = (longlong)ROUND((dVar2 - dVar6) * dVar23 - dVar8);
      local_f8 = lVar20 >> 1;
      lVar13 = (longlong)ROUND((dVar2 + dVar6) * dVar23 - dVar8);
      lVar20 = lVar20 >> 4;
      local_e0 = lVar13 >> 1;
      lVar16 = (longlong)ROUND((dVar3 - dVar6) * dVar23 - dVar8);
      local_f0 = lVar16 >> 1;
      lVar16 = lVar16 >> 4;
      lVar22 = (longlong)ROUND((dVar4 - dVar6) * dVar23 - dVar8);
      local_e8 = lVar22 >> 1;
      lVar22 = lVar22 >> 4;
      lVar18 = (longlong)ROUND((dVar6 + dVar4) * dVar23 - dVar8);
      lVar11 = (longlong)ROUND((dVar6 + dVar3) * dVar23 - dVar8);
      local_d0 = lVar18 >> 1;
      lVar18 = lVar18 >> 4;
      local_d8 = lVar11 >> 1;
      lVar11 = lVar11 >> 4;
      local_154 = (float)(ulonglong)(1L << ((char)iVar10 + 1U & 0x3f));
      local_b8 = local_130;
      local_b0 = &local_154;
      local_a0 = local_150;
      local_98 = &local_f8;
      local_140 = lVar11;
      local_128 = lVar16;
      local_120 = lVar18;
      local_a8 = param_1;
      local_90 = this;
      local_88 = param_2;
      if (lVar22 <= lVar18) {
        do {
          lVar7 = lVar20;
          lVar14 = lVar16;
          if (lVar16 <= lVar11) {
            do {
              for (; lVar18 = local_120, lVar16 = local_128, local_128 = lVar16, local_120 = lVar18,
                  lVar7 <= lVar13 >> 4; lVar7 = lVar7 + 1) {
                local_118._s_0.X = lVar7;
                local_118._s_0.Y = lVar14;
                local_118._s_0.Z = lVar22;
                local_100 = iVar10;
                `FSceneCulling::
                TestSphere<`FSceneInstanceCullingQuery::ComputeResult'::__l9::FResultConsumer>'::
                __l4::<lambda_1>::operator()(&local_b8,(TLocation<__int64> *)&local_118._s_0);
                lVar11 = local_140;
              }
              lVar14 = lVar14 + 1;
              lVar7 = lVar20;
            } while (lVar14 <= lVar11);
          }
          lVar22 = lVar22 + 1;
          uVar15 = local_148;
          iVar19 = local_res20;
        } while (lVar22 <= lVar18);
      }
      local_158 = local_158 & ~(uint)uVar15;
      iVar5 = *(int *)((longlong)local_138 + 0x18);
      FVar17 = local_138;
      if (*(ForElementType<unsigned_int> *)((longlong)local_138 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_138 + 0x10);
      }
      uVar12 = local_158 & *(uint *)((longlong)FVar17 + (longlong)iVar21 * 4);
      while (uVar12 == 0) {
        iVar19 = iVar19 + 0x20;
        lVar11 = (longlong)iVar21;
        iVar21 = iVar21 + 1;
        iVar10 = iVar5;
        local_res20 = iVar19;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_145475d85;
        uVar12 = *(uint *)((longlong)FVar17 + 4 + lVar11 * 4);
        local_158 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (int)lVar11 + -1 + iVar19;
      local_148 = uVar15;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
LAB_145475d85:
    } while (iVar10 < iVar5);
  }
  return;
}

// ToLevelRelative<3> @ 145475df0

TIntVector3<__int64> * __cdecl
ToLevelRelative<3>(TIntVector3<__int64> *__return_storage_ptr__,TIntVector3<__int64> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X >> 3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y >> 3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z >> 3;
  return __return_storage_ptr__;
}

// ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_> @ 145475e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>
          (TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
           *this,FRDGBuilder *param_1,TArrayView<UE::HLSL::FCellBlockData_const_,int> *param_2,
          <lambda_2> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGEventName *pFVar5;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar6;
  undefined8 *puVar7;
  FRDGEventName local_60;
  <lambda_1> local_48;
  
  if ((param_2->ArrayNum != 0) &&
     ((*(longlong *)&this->field_0x18 == 0 ||
      (*(int *)(*(longlong *)&this->field_0x18 + 0x14) < param_2->ArrayNum)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HostValues.Num() == 0 || PooledBuffer.IsValid() && HostValues.Num() <= int32(PooledBuffer->Desc.NumElements)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0xdb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 != 0) {
    local_48.ReadbackProcessingLambdaType.HostValues.DataPtr = param_2->DataPtr;
    local_48.ReadbackProcessingLambdaType.HostValues.ArrayNum = param_2->ArrayNum;
    local_48.ReadbackProcessingLambdaType.HostValues._12_4_ = *(undefined4 *)&param_2->field_0xc;
    puVar7 = *(undefined8 **)&this->field_0x18;
    local_48.ReadbackProcessingLambdaType.ValueCheckFunc = (<lambda_2>)param_3->__this;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    local_48.SourceBufferRHI = (FRHIBuffer *)puVar7[5];
    local_48.NumBytes = iVar4 << 5;
    pFVar5 = FRDGEventName::FRDGEventName(&local_60,1,L"BufferLockReadbackPass");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar5,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
    pTVar6 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
             ::
             TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                       (this_00,pFVar5,NeverCull,&local_48);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar4 = (param_1->Passes).Array.ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar4 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar4] = (FRDGPass *)pTVar6;
    *(int *)&pTVar6->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar6);
    if (local_60.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
    }
    piVar1 = (int *)(puVar7 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  return;
}

// ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_> @ 145475fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::
ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>
          (TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
           *this,FRDGBuilder *param_1,TArrayView<unsigned_int_const_,int> *param_2,
          <lambda_3> *param_3)

{
  int *piVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGEventName *pFVar6;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [40];
  FRDGEventName local_e0;
  <lambda_3> local_c8;
  uint *local_a0;
  int iStack_98;
  undefined4 uStack_94;
  <lambda_1> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((param_2->ArrayNum != 0) &&
     ((*(longlong *)&this->field_0x18 == 0 ||
      (*(int *)(*(longlong *)&this->field_0x18 + 0x14) < param_2->ArrayNum)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HostValues.Num() == 0 || PooledBuffer.IsValid() && HostValues.Num() <= int32(PooledBuffer->Desc.NumElements)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0xdb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 != 0) {
    `FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>::<lambda_3>(&local_c8,param_3);
    local_a0 = param_2->DataPtr;
    iStack_98 = param_2->ArrayNum;
    uStack_94 = *(undefined4 *)&param_2->field_0xc;
    puVar8 = *(undefined8 **)&this->field_0x18;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    pFVar2 = (FRHIBuffer *)puVar8[5];
    `FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>::<lambda_3>(&local_88,&local_c8);
    local_88.NumBytes = iVar5 * 4;
    local_88.ReadbackProcessingLambdaType.HostValues.DataPtr = local_a0;
    local_88.ReadbackProcessingLambdaType.HostValues.ArrayNum = iStack_98;
    local_88.ReadbackProcessingLambdaType.HostValues._12_4_ = uStack_94;
    local_88.SourceBufferRHI = pFVar2;
    pFVar6 = FRDGEventName::FRDGEventName(&local_e0,1,L"BufferLockReadbackPass");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar6,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
    pTVar7 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
             ::
             TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                       (this_00,pFVar6,NeverCull,&local_88);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar5 = (param_1->Passes).Array.ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar5 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar5] = (FRDGPass *)pTVar7;
    *(int *)&pTVar7->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar7);
    if (local_e0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_88.ReadbackProcessingLambdaType.ValueCheckFunc.FreeChunkBits.AllocatorInstance.
        SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.ReadbackProcessingLambdaType.ValueCheckFunc.FreeChunkBits.
                            AllocatorInstance.SecondaryData);
    }
    piVar1 = (int *)(puVar8 + 1);
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
    if (local_c8.FreeChunkBits.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
    {
      FMemory::Free((void *)local_c8.FreeChunkBits.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_> @ 1454761e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>
          (TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
           *this,FRDGBuilder *param_1,TArrayView<UE::HLSL::FPackedCellHeader_const_,int> *param_2,
          <lambda_4> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGEventName *pFVar5;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar6;
  undefined8 *puVar7;
  FRDGEventName local_60;
  <lambda_1> local_48;
  
  if ((param_2->ArrayNum != 0) &&
     ((*(longlong *)&this->field_0x18 == 0 ||
      (*(int *)(*(longlong *)&this->field_0x18 + 0x14) < param_2->ArrayNum)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HostValues.Num() == 0 || PooledBuffer.IsValid() && HostValues.Num() <= int32(PooledBuffer->Desc.NumElements)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0xdb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 != 0) {
    local_48.ReadbackProcessingLambdaType.HostValues.DataPtr = param_2->DataPtr;
    local_48.ReadbackProcessingLambdaType.HostValues.ArrayNum = param_2->ArrayNum;
    local_48.ReadbackProcessingLambdaType.HostValues._12_4_ = *(undefined4 *)&param_2->field_0xc;
    puVar7 = *(undefined8 **)&this->field_0x18;
    local_48.ReadbackProcessingLambdaType.ValueCheckFunc = (<lambda_4>)param_3->__this;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    local_48.SourceBufferRHI = (FRHIBuffer *)puVar7[5];
    local_48.NumBytes = iVar4 * 8;
    pFVar5 = FRDGEventName::FRDGEventName(&local_60,1,L"BufferLockReadbackPass");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar5,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
    pTVar6 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
             ::
             TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                       (this_00,pFVar5,NeverCull,&local_48);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar4 = (param_1->Passes).Array.ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar4 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar4] = (FRDGPass *)pTVar6;
    *(int *)&pTVar6->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar6);
    if (local_60.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
    }
    piVar1 = (int *)(puVar7 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  return;
}

// ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_> @ 145476390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::RendererPrivateUtils::Implementation::
TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::
ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>
          (TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
           *this,FRDGBuilder *param_1,TArrayView<unsigned_int_const_,int> *param_2,
          <lambda_5> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGEventName *pFVar5;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar6;
  undefined8 *puVar7;
  FRDGEventName local_60;
  <lambda_1> local_48;
  
  if ((param_2->ArrayNum != 0) &&
     ((*(longlong *)&this->field_0x18 == 0 ||
      (*(int *)(*(longlong *)&this->field_0x18 + 0x14) < param_2->ArrayNum)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HostValues.Num() == 0 || PooledBuffer.IsValid() && HostValues.Num() <= int32(PooledBuffer->Desc.NumElements)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                       ,0xdb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 != 0) {
    local_48.ReadbackProcessingLambdaType.HostValues.DataPtr = param_2->DataPtr;
    local_48.ReadbackProcessingLambdaType.HostValues.ArrayNum = param_2->ArrayNum;
    local_48.ReadbackProcessingLambdaType.HostValues._12_4_ = *(undefined4 *)&param_2->field_0xc;
    puVar7 = *(undefined8 **)&this->field_0x18;
    local_48.ReadbackProcessingLambdaType.ValueCheckFunc = (<lambda_5>)param_3->__this;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    local_48.SourceBufferRHI = (FRHIBuffer *)puVar7[5];
    local_48.NumBytes = iVar4 * 4;
    pFVar5 = FRDGEventName::FRDGEventName(&local_60,1,L"BufferLockReadbackPass");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar5,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
    pTVar6 = TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
             ::
             TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
                       (this_00,pFVar5,NeverCull,&local_48);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar4 = (param_1->Passes).Array.ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar4 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar4] = (FRDGPass *)pTVar6;
    *(int *)&pTVar6->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar6);
    if (local_60.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
    }
    piVar1 = (int *)(puVar7 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  return;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>_> @ 145476540

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>_>
          (_Atomic_padded<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
           *param_1)

{
  return (long64 *)param_1;
}

// TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 1454765e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
::
TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  FCellBlockData *pFVar3;
  FRHIBuffer *pFVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar7;
  FRDGParameterStruct local_38;
  
  pFVar6 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents =
       (uchar *)&TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_2>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
                 ::EmptyShaderParameters;
  if ((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FCellBlockData_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_2>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  local_38.Layout.Reference = (pFVar6->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar6;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFCellBlockData_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBUFCellBlockData_HLSL_UE__H____QEAV<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV2_M_____ValidateGPUData_V<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFCellBlockData_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBUFCellBlockData_HLSL_UE__H____QEAV<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  pFVar3 = (param_3->ReadbackProcessingLambdaType).HostValues.DataPtr;
  *(FSceneCullingBuilder **)((longlong)this + 0x180) =
       (param_3->ReadbackProcessingLambdaType).ValueCheckFunc.__this;
  *(FCellBlockData **)((longlong)this + 0x188) = pFVar3;
  pFVar4 = param_3->SourceBufferRHI;
  *(undefined8 *)((longlong)this + 400) =
       *(undefined8 *)&(param_3->ReadbackProcessingLambdaType).HostValues.ArrayNum;
  *(FRHIBuffer **)((longlong)this + 0x198) = pFVar4;
  uVar1 = *(undefined8 *)&param_3->NumBytes;
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFCellBlockData_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBUFCellBlockData_HLSL_UE__H____QEAV<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV1_M_____ValidateGPUData_V<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFCellBlockData_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBUFCellBlockData_HLSL_UE__H____QEAV<lambda_2>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  *(undefined8 *)((longlong)this + 0x1a0) = uVar1;
  *(FEmptyShaderParameters **)((longlong)this + 0x1a8) =
       &TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_2>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
        ::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 1454766e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
::
TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar5;
  FRDGParameterStruct local_38;
  
  pFVar4 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents =
       (uchar *)&TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_3>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
                 ::EmptyShaderParameters;
  if ((pFVar4->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_3>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Layout.Reference = (pFVar4->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar4;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBIH____QEAV<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV2_M_____ValidateGPUData_V<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBIH____QEAV<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  `FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>::<lambda_3>
            ((void *)((longlong)this + 0x180),(<lambda_3> *)param_3);
  uVar2 = *(undefined8 *)&(param_3->ReadbackProcessingLambdaType).HostValues.ArrayNum;
  *(uint **)((longlong)this + 0x1a8) = (param_3->ReadbackProcessingLambdaType).HostValues.DataPtr;
  *(undefined8 *)((longlong)this + 0x1b0) = uVar2;
  *(FRHIBuffer **)((longlong)this + 0x1b8) = param_3->SourceBufferRHI;
  *(uint *)((longlong)this + 0x1c0) = param_3->NumBytes;
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBIH____QEAV<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV1_M_____ValidateGPUData_V<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBIH____QEAV<lambda_3>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  *(FEmptyShaderParameters **)((longlong)this + 0x1c8) =
       &TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_3>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
        ::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 1454767f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
::
TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  FPackedCellHeader *pFVar3;
  FRHIBuffer *pFVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar7;
  FRDGParameterStruct local_38;
  
  pFVar6 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents =
       (uchar *)&TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_4>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
                 ::EmptyShaderParameters;
  if ((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_>(FRDGBuilder_&,TArrayView<UE::HLSL::FPackedCellHeader_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_4>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  local_38.Layout.Reference = (pFVar6->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar6;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFPackedCellHeader_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBUFPackedCellHeader_HLSL_UE__H____QEAV<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV2_M_____ValidateGPUData_V<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFPackedCellHeader_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBUFPackedCellHeader_HLSL_UE__H____QEAV<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  pFVar3 = (param_3->ReadbackProcessingLambdaType).HostValues.DataPtr;
  *(FSceneCullingBuilder **)((longlong)this + 0x180) =
       (param_3->ReadbackProcessingLambdaType).ValueCheckFunc.__this;
  *(FPackedCellHeader **)((longlong)this + 0x188) = pFVar3;
  pFVar4 = param_3->SourceBufferRHI;
  *(undefined8 *)((longlong)this + 400) =
       *(undefined8 *)&(param_3->ReadbackProcessingLambdaType).HostValues.ArrayNum;
  *(FRHIBuffer **)((longlong)this + 0x198) = pFVar4;
  uVar1 = *(undefined8 *)&param_3->NumBytes;
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFPackedCellHeader_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBUFPackedCellHeader_HLSL_UE__H____QEAV<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV1_M_____ValidateGPUData_V<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_UFPackedCellHeader_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBUFPackedCellHeader_HLSL_UE__H____QEAV<lambda_4>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  *(undefined8 *)((longlong)this + 0x1a0) = uVar1;
  *(FEmptyShaderParameters **)((longlong)this + 0x1a8) =
       &TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_4>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
        ::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_> @ 1454768f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
::
TRDGEmptyLambdaPass<_AddBufferLockReadbackPass<_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>_::__l12::<lambda_1>_>_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  uint *puVar3;
  FRHIBuffer *pFVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
  *pTVar7;
  FRDGParameterStruct local_38;
  
  pFVar6 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents =
       (uchar *)&TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_5>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
                 ::EmptyShaderParameters;
  if ((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TRDGEmptyLambdaPass<_void___cdecl_AddBufferLockReadbackPass<_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_>(FRDGBuilder_&,TRefCountPtr<FRDGPooledBuffer>,unsigned_int,_public:_void___cdecl_UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_>(FRDGBuilder_&,TArrayView<unsigned_int_const_,int>,_public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder_&,FSceneUniformBuffer_&)_::_53_::<lambda_5>_&&)_::_12_::<lambda_1>_&&)_::_2_::<lambda_1>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  local_38.Layout.Reference = (pFVar6->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar6;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBIH____QEAV<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV2_M_____ValidateGPUData_V<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBIH____QEAV<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  puVar3 = (param_3->ReadbackProcessingLambdaType).HostValues.DataPtr;
  *(FSceneCullingBuilder **)((longlong)this + 0x180) =
       (param_3->ReadbackProcessingLambdaType).ValueCheckFunc.__this;
  *(uint **)((longlong)this + 0x188) = puVar3;
  pFVar4 = param_3->SourceBufferRHI;
  *(undefined8 *)((longlong)this + 400) =
       *(undefined8 *)&(param_3->ReadbackProcessingLambdaType).HostValues.ArrayNum;
  *(FRHIBuffer **)((longlong)this + 0x198) = pFVar4;
  uVar1 = *(undefined8 *)&param_3->NumBytes;
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1____AddBufferLockReadbackPass_V<lambda_1>__M_____ValidateGPUData_V<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAXAEAVFRDGBuilder__V__TArrayView___CBIH____QEAV<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z___YAXAEAVFRDGBuilder__V__TRefCountPtr_VFRDGPooledBuffer____I__QEAV1_M_____ValidateGPUData_V<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAXAEAVFRDGBuilder__AEAVFSceneUniformBuffer___Z____TPersistentBuffer_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___Implementation_RendererPrivateUtils_UE__QEAAX0V__TArrayView___CBIH____QEAV<lambda_5>__DF___UploadToGPU_FSceneCullingBuilder__QEAAX0AEAVFSceneUniformBuffer___Z__Z__Z___6B_
  ;
  *(undefined8 *)((longlong)this + 0x1a0) = uVar1;
  *(FEmptyShaderParameters **)((longlong)this + 0x1a8) =
       &TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::`53'::<lambda_5>_>'::`12'::<lambda_1>_>'::`2'::<lambda_1>_>
        ::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FSceneRenderer::FenceOcclusionTests'::__l5::<lambda_1>_> @ 1454769f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TRDGEmptyLambdaPass<_public:_void___cdecl_FSceneRenderer::FenceOcclusionTests(FRDGBuilder_&)_::_5_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`FSceneRenderer::FenceOcclusionTests'::__l5::<lambda_1>_>::
TRDGEmptyLambdaPass<_FSceneRenderer::FenceOcclusionTests_::__l5::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FSceneRenderer::FenceOcclusionTests(FRDGBuilder_&)_::_5_::<lambda_1>_>
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
      pTVar4 = (TRDGEmptyLambdaPass<_public:_void___cdecl_FSceneRenderer::FenceOcclusionTests(FRDGBuilder_&)_::_5_::<lambda_1>_>
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
       &TRDGLambdaPass<FEmptyShaderParameters,`FSceneRenderer::FenceOcclusionTests'::`5'::<lambda_1>_>
        ::_vftable_;
  *(FSceneRenderer **)((longlong)this + 0x180) = param_3->__this;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FSceneRenderer::FenceOcclusionTests'::`5'::<lambda_1>_>::_vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x188) = &<lambda_1>_>::EmptyShaderParameters;
  return this;
}

// ~TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,1,0> @ 1454789a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FSceneRenderProcessor::Execute_::__l2::<lambda_5>::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSceneViewState::Destroy'::__l2::<lambda_1>,1,0> @ 1454789c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FSceneViewState::Destroy'::__l2::<lambda_1>,1,0>
::~TFunction_OwnedObject<_FSceneViewState::Destroy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneViewState::Destroy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,1,0> @ 1454789e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSceneRenderProcessor::Cleanup_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,0,0> @ 145478a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UpdateSceneCaptureContent_RenderThread_::__l8::<lambda_1>,0,0>(void *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::`8'::<lambda_1>,0,0>::
        _vftable_;
  lVar3 = *(longlong *)((longlong)this + 8);
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014243e380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_1>,1,1> @ 145478a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FScene::UpdateSceneCaptureContents_::__l12::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`12'::<lambda_1>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,1,0> @ 145478a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FSceneRenderProcessor::Execute_::__l21::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`21'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l30::<lambda_2>,1,1> @ 145478a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l30::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FScene::UpdateSceneCaptureContents_::__l30::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`30'::<lambda_2>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_2>,1,1> @ 145478a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FScene::UpdateSceneCaptureContents_::__l12::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`12'::<lambda_2>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,1,0> @ 145478aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,1,0>::
~TFunction_OwnedObject<_FSceneRenderProcessor::Execute_::__l28::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`28'::<lambda_3>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l32::<lambda_3>,1,1> @ 145478ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l32::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FScene::UpdateSceneCaptureContents_::__l32::<lambda_3>,1,1>(void *this)

{
  FRenderTarget *this_00;
  FRHITexture *pFVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`32'::<lambda_3>,1,1>::_vftable_
  ;
  this_00 = *(FRenderTarget **)((longlong)this + 8);
  if (this_00 != (FRenderTarget *)0x0) {
    if ((FRHIResource *)this_00[8]._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00[8]._padding_);
    }
    pFVar1 = this_00[7].RenderTargetTextureRHI.Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x38))();
    }
    if ((void *)this_00[6]._padding_ != (void *)0x0) {
      FMemory::Free((void *)this_00[6]._padding_);
    }
    FRenderTarget::~FRenderTarget(this_00);
    ::operator_delete(this_00,0x88);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,1,0> @ 145478b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,1,0>::
~TFunction_OwnedObject<_FSceneRenderProcessor::Execute_::__l30::<lambda_4>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`30'::<lambda_4>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,1,0> @ 145478b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,1,0>::
~TFunction_OwnedObject<_FSceneRenderProcessor::Execute_::__l2::<lambda_5>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`2'::<lambda_5>,1,0>::_vftable_;
  return;
}

// operator() @ 14547cc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  void *pvVar1;
  
  pvVar1 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x18),0,
                      *(uint *)((longlong)this + 0x20),RLM_ReadOnly);
  `UE::RendererPrivateUtils::Implementation::
  TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
  ::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>::
  operator()(this,pvVar1);
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x18));
  return;
}

// operator() @ 14547cca0

/* WARNING: Removing unreachable block (ram,0x00014547cda7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  pvVar4 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x38),0,
                      *(uint *)((longlong)this + 0x40),RLM_ReadOnly);
  uVar6 = 0;
  if (0 < *(int *)((longlong)this + 0x30)) {
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar8 + (longlong)pvVar4);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)((longlong)this + 0x30)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar1 != *(int *)(lVar8 + *(longlong *)((longlong)this + 0x28))) {
        uVar5 = uVar6 >> 6;
        if ((*(int *)((longlong)this + 0x20) <= (int)uVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar7 = (longlong)this + 8;
        if (*(longlong *)((longlong)this + 0x18) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x18);
        }
        if ((*(uint *)(lVar7 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7987085491910478081>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                             ,0x901,"GPUValue == HostValue || FreeChunkBits[Index / (64u)]");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (1 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)
                       &`public:___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`53'::<lambda_3>::operator()(int,int,int)const___ptr64'
                        ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < *(int *)((longlong)this + 0x30));
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x38));
  return;
}

// operator() @ 14547ce60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  piVar5 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x18),0,
                      *(uint *)((longlong)this + 0x20),RLM_ReadOnly);
  uVar7 = 0;
  piVar6 = piVar5;
  if (0 < *(int *)((longlong)this + 0x10)) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar8 = (int *)((longlong)piVar6 + (*(longlong *)((longlong)this + 8) - (longlong)piVar5));
      iVar1 = *piVar8;
      if (iVar1 != 0) {
        if ((*piVar6 != iVar1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUValue.Packed0 == HostValue.Packed0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                               ,0x90e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((piVar6[1] != piVar8[1]) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUValue.Packed1 == HostValue.Packed1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                               ,0x90f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 2;
    } while ((int)uVar7 < *(int *)((longlong)this + 0x10));
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x18));
  return;
}

// operator() @ 14547cfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  longlong lVar7;
  
  pvVar5 = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x18),0,
                      *(uint *)((longlong)this + 0x20),RLM_ReadOnly);
  uVar6 = 0;
  if (0 < *(int *)((longlong)this + 0x10)) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(lVar7 + (longlong)pvVar5);
      uVar4 = 0;
      if ((int)uVar6 < *(int *)((longlong)this + 0x10)) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((iVar1 != *(int *)(lVar7 + *(longlong *)((longlong)this + 8))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("GPUValue == HostValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                             ,0x915,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < *(int *)((longlong)this + 0x10));
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,*(FRHIBuffer **)((longlong)this + 0x18));
  return;
}

// operator() @ 14547d440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId928,"FSceneRenderProcessor::DeleteSceneRenderers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
               ,0x3a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId928);
  }
  lVar3 = *(longlong *)this;
  plVar5 = *(longlong **)(lVar3 + 8);
  iVar2 = *(int *)(lVar3 + 0x10);
  plVar1 = plVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x10) != iVar2) {
      `TCheckedPointerIterator<FSceneRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (plVar5 == plVar1) break;
    puVar4 = (undefined8 *)*plVar5;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    plVar5 = plVar5 + 1;
  }
  if (*(FSceneRenderProcessor **)this != (FSceneRenderProcessor *)0x0) {
    FSceneRenderProcessor::_scalar_deleting_destructor_(*(FSceneRenderProcessor **)this,1);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14548d6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  IRHICommandContext *pIVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong in_stack_ffffffffffffffc8;
  ulonglong in_stack_ffffffffffffffd0;
  
  uVar11 = (ulonglong)*(int *)((longlong)this + 8);
  uVar8 = 0;
  if (param_2 < *(int *)((longlong)this + 8)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    in_stack_ffffffffffffffc8 = (longlong)param_2;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_stack_ffffffffffffffd0 = uVar11;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)this;
  lVar12 = (longlong)param_2 * 0x3c;
  iVar1 = *(int *)(lVar12 + lVar5);
  iVar2 = *(int *)(lVar12 + 4 + lVar5);
  iVar3 = *(int *)(lVar12 + 0x18 + lVar5);
  iVar4 = *(int *)(lVar12 + 0x1c + lVar5);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar10;
    *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &___7FRHICommandSetScissorRect__6B_;
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
  }
  else {
    pIVar9 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar9->_padding_ + 0x1b0))
              (pIVar9,0,0,0,in_stack_ffffffffffffffc8 & 0xffffffff00000000,
               in_stack_ffffffffffffffd0 & 0xffffffff00000000);
  }
  FRHICommandList::SetViewport
            (param_1,(float)iVar3,(float)iVar4,0.0,(float)(iVar1 + iVar3),(float)(iVar2 + iVar4),
             __real_3f800000);
  return;
}

// operator() @ 14548db20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`CopySceneCaptureComponentToTarget'::__l4::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  undefined8 uVar6;
  TIntPoint<int>_u_0 *pTVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_1a8 [32];
  undefined4 local_138 [2];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_130;
  FGraphicsPipelineStateInitializer local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_118.BoundShaderState.VertexDeclarationRHI = *(FRHIVertexDeclaration **)((longlong)this + 8);
  local_118.BoundShaderState.VertexShaderRHI = *(FRHIVertexShader **)((longlong)this + 0x10);
  local_118.BoundShaderState.PixelShaderRHI = *(FRHIPixelShader **)((longlong)this + 0x18);
  local_118.BoundShaderState.MeshShaderRHI = *(FRHIMeshShader **)((longlong)this + 0x20);
  local_118.BoundShaderState.AmplificationShaderRHI =
       *(FRHIAmplificationShader **)((longlong)this + 0x28);
  local_118.BoundShaderState.GeometryShaderRHI = *(FRHIGeometryShader **)((longlong)this + 0x30);
  local_118.BoundShaderState.WorkGraphMeshShaderRHI =
       *(FRHIWorkGraphShader **)((longlong)this + 0x38);
  local_118.BlendState = *(FRHIBlendState **)((longlong)this + 0x40);
  local_118.RasterizerState = *(FRHIRasterizerState **)((longlong)this + 0x48);
  local_118.DepthStencilState = *(FRHIDepthStencilState **)((longlong)this + 0x50);
  local_118.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       *(FRHISamplerState **)((longlong)this + 0x58);
  local_118.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       *(FRHISamplerState **)((longlong)this + 0x60);
  local_118._96_8_ = *(undefined8 *)((longlong)this + 0x68);
  local_118.RenderTargetFormats.Elements = *(uchar (*) [8])((longlong)this + 0x70);
  local_118.RenderTargetFlags.Elements[2] = *(ETextureCreateFlags *)((longlong)this + 0x88);
  local_118.RenderTargetFlags.Elements[3] = *(ETextureCreateFlags *)((longlong)this + 0x90);
  local_118.RenderTargetFlags.Elements[0] = *(ETextureCreateFlags *)((longlong)this + 0x78);
  local_118.RenderTargetFlags.Elements[1] = *(ETextureCreateFlags *)((longlong)this + 0x80);
  local_118.RenderTargetFlags.Elements[4] = *(ETextureCreateFlags *)((longlong)this + 0x98);
  local_118.RenderTargetFlags.Elements[5] = *(ETextureCreateFlags *)((longlong)this + 0xa0);
  local_118.RenderTargetFlags.Elements[6] = *(ETextureCreateFlags *)((longlong)this + 0xa8);
  local_118.RenderTargetFlags.Elements[7] = *(ETextureCreateFlags *)((longlong)this + 0xb0);
  local_118._176_8_ = *(undefined8 *)((longlong)this + 0xb8);
  local_118.DepthStencilTargetFlag = *(ETextureCreateFlags *)((longlong)this + 0xc0);
  local_118._192_8_ = *(undefined8 *)((longlong)this + 200);
  local_118._200_8_ = *(undefined8 *)((longlong)this + 0xd0);
  local_118._208_8_ = *(undefined8 *)((longlong)this + 0xd8);
  local_118.StatePrecachePSOHash = *(ulong64 *)((longlong)this + 0xe0);
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_118);
  SetGraphicsPipelineState(param_2,&local_118,0,CheckApply,true);
  pvVar1 = *(void **)this;
  pFVar4 = TShaderRefBase<FSceneCapturePS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FSceneCapturePS,FShaderMapPointerTable> *)
                      ((longlong)this + 0xf8),true);
  pFVar5 = FSceneCapturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_130.ShaderContent = *(FShader **)((longlong)this + 0xf8);
  local_130.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x100);
  ValidateShaderParameters(&local_130,pFVar5,pvVar1);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0xf8),pFVar5,pvVar1);
  if (*(void **)((longlong)this + 0x120) != (void *)0x0) {
    local_138[0] = *(undefined4 *)((longlong)this + 0x110);
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x120));
    pcVar2 = *(code **)((longlong)this + 0x120);
    plVar8 = (longlong *)((longlong)this + 0x130);
    if (*(longlong **)((longlong)this + 0x148) != (longlong *)0x0) {
      plVar8 = *(longlong **)((longlong)this + 0x148);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar2)(uVar6,param_2,local_138);
  }
  local_130.ShaderContent = *(FShader **)((longlong)this + 0xe8);
  lVar3 = *(longlong *)((longlong)this + 0x108);
  local_130.ShaderMap = *(FShaderMapBase **)((longlong)this + 0xf0);
  if (*(char *)(*(longlong *)(lVar3 + 8) + 200) == '\0') {
    pTVar7 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
  }
  else {
    pTVar7 = (TIntPoint<int>_u_0 *)(*(longlong *)(lVar3 + 8) + 0x1c8);
  }
  fVar9 = (float)(*(int *)(lVar3 + 0x1c3c) - *(int *)(lVar3 + 0x1c34));
  fVar12 = (float)(*(int *)(lVar3 + 0x1c38) - *(int *)(lVar3 + 0x1c30));
  fVar11 = (float)*(int *)(lVar3 + 0x1c34);
  fVar10 = (float)*(int *)(lVar3 + 0x1c30);
  DrawRectangle(param_2,fVar10,fVar11,fVar12,fVar9,fVar10,fVar11,fVar12,fVar9,
                (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)this + 0x114))->_s_0,
                (TIntPoint<int>)pTVar7->_s_0,&local_130,EDRF_UseTriangleOptimization,1);
  return;
}

// `scalar_deleting_destructor' @ 14548f730

void * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::_scalar_deleting_destructor_
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548f790

void * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
::_scalar_deleting_destructor_
          (TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548f7f0

void * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::_scalar_deleting_destructor_
          (TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548f850

void * __thiscall
UE::RendererPrivateUtils::Implementation::
TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
::_scalar_deleting_destructor_
          (TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadData).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UploadData).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548f8b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548f910

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548f970

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::__l19::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14548f9e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14548fa50

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fa90

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fad0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::__l19::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fb10

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fb90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FSceneViewState::Destroy'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneViewState::Destroy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::`8'::<lambda_1>,0,0>::
        _vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`12'::<lambda_1>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`21'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l30::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`30'::<lambda_2>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`12'::<lambda_2>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`28'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l32::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRenderTarget *this_00;
  FRHITexture *pFVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::`32'::<lambda_3>,1,1>::_vftable_
  ;
  this_00 = *(FRenderTarget **)((longlong)this + 8);
  if (this_00 != (FRenderTarget *)0x0) {
    if ((FRHIResource *)this_00[8]._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00[8]._padding_);
    }
    pFVar1 = this_00[7].RenderTargetTextureRHI.Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x38))();
    }
    if ((void *)this_00[6]._padding_ != (void *)0x0) {
      FMemory::Free((void *)this_00[6]._padding_);
    }
    FRenderTarget::~FRenderTarget(this_00);
    ::operator_delete(this_00,0x88);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fe40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`30'::<lambda_4>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fe80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`2'::<lambda_5>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548fec0

void * __thiscall
FRDGAllocator::TObject<FRDGBlackboard::TStruct<FSceneCaptureViewportSetterMap>_>::
_scalar_deleting_destructor_
          (TObject<FRDGBlackboard::TStruct<FSceneCaptureViewportSetterMap>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Alloc).Struct.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Alloc).Struct.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Alloc).Struct);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548ff20

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
TObject<FSceneRenderProcessor::FGroupNode>::_scalar_deleting_destructor_
          (TObject<FSceneRenderProcessor::FGroupNode> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFGroupNode_FSceneRenderProcessor_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  if (*(void **)(this + 3) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 3));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548ff70

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
TObject<FSceneRenderProcessor::FRenderNode>::_scalar_deleting_destructor_
          (TObject<FSceneRenderProcessor::FRenderNode> *this,uint param_1)

{
  TObject<FSceneRenderProcessor::FRenderNode> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFRenderNode_FSceneRenderProcessor_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  if (*(longlong *)(this + 4) != 0) {
    pTVar1 = this + 5;
    if (*(TObject<FSceneRenderProcessor::FRenderNode> **)&this[6].field_0x8 !=
        (TObject<FSceneRenderProcessor::FRenderNode> *)0x0) {
      pTVar1 = *(TObject<FSceneRenderProcessor::FRenderNode> **)&this[6].field_0x8;
    }
    (**(code **)(*(longlong *)pTVar1 + 0x10))();
  }
  if (*(void **)&this[2].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[2].field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14548ffe0

void * __thiscall
FRDGAllocator::
TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>::FUploadData>
::_scalar_deleting_destructor_
          (TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>::FUploadData>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Alloc).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Alloc).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490040

void * __thiscall
FRDGAllocator::
TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>::FUploadData>
::_scalar_deleting_destructor_
          (TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>::FUploadData>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Alloc).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Alloc).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454900a0

void * __thiscall
FRDGAllocator::
TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>::FUploadData>
::_scalar_deleting_destructor_
          (TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>::FUploadData>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Alloc).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Alloc).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490100

void * __thiscall
FRDGAllocator::
TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>::FUploadData>
::_scalar_deleting_destructor_
          (TObject<UE::RendererPrivateUtils::Implementation::TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>::FUploadData>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Alloc).ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Alloc).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490160

void * __thiscall
FRDGAllocator::
TObject<TArray<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::_scalar_deleting_destructor_
          (TObject<TArray<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,uint param_1)

{
  TIntVector2<int> *pTVar1;
  
  pTVar1 = (this->Alloc).AllocatorInstance.Data;
  if (pTVar1 != (TIntVector2<int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454901b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
FRDGAllocator::
TObject<TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::_scalar_deleting_destructor_
          (TObject<TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
           *this,uint param_1)

{
  FViewOcclusionQueries *pFVar1;
  
  pFVar1 = (this->Alloc).AllocatorInstance.SecondaryData.Data;
  if (pFVar1 == (FViewOcclusionQueries *)0x0) {
    pFVar1 = (FViewOcclusionQueries *)&this->Alloc;
  }
  DestructItems<FViewOcclusionQueries,int>(pFVar1,(this->Alloc).ArrayNum);
  pFVar1 = (this->Alloc).AllocatorInstance.SecondaryData.Data;
  if (pFVar1 != (FViewOcclusionQueries *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490220

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490280

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x1a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1a0));
  }
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
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490300

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490360

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454903c0

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FSceneRenderer::FenceOcclusionTests'::__l5::<lambda_1>_>_>::
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

// `scalar_deleting_destructor' @ 145490420

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
TObject<TUniqueFunction<void___cdecl(void)>_>::_scalar_deleting_destructor_
          (TObject<TUniqueFunction<void___cdecl(void)>_> *this,uint param_1)

{
  TObject<TUniqueFunction<void___cdecl(void)>_> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TObject_V__TUniqueFunction___A6AXXZ_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  if (*(longlong *)(this + 1) != 0) {
    pTVar1 = this + 2;
    if (*(TObject<TUniqueFunction<void___cdecl(void)>_> **)&this[3].field_0x8 !=
        (TObject<TUniqueFunction<void___cdecl(void)>_> *)0x0) {
      pTVar1 = *(TObject<TUniqueFunction<void___cdecl(void)>_> **)&this[3].field_0x8;
    }
    (**(code **)(*(longlong *)pTVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490480

void * __thiscall
FRDGAllocator::TObject<FHZBOcclusionUpdateTexturesParameters>::_scalar_deleting_destructor_
          (TObject<FHZBOcclusionUpdateTexturesParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454904b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FComputeExplicitChunkBounds_CS::FParameters>::_scalar_deleting_destructor_
          (TObject<FComputeExplicitChunkBounds_CS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454904e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FHZBTestPS::FParameters>::_scalar_deleting_destructor_
          (TObject<FHZBTestPS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490510

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSceneCapturePS::FParameters>::_scalar_deleting_destructor_
          (TObject<FSceneCapturePS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSceneCullingDebugRender_CS::FParameters>::_scalar_deleting_destructor_
          (TObject<FSceneCullingDebugRender_CS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSceneInstanceCullResult>::_scalar_deleting_destructor_
          (TObject<FSceneInstanceCullResult> *this,uint param_1)

{
  uint *puVar1;
  FCellChunkDraw *pFVar2;
  void *pvVar3;
  
  puVar1 = (this->Alloc).ChunkCullViewGroupIds.AllocatorInstance.Data;
  if (puVar1 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar1);
  }
  pFVar2 = (this->Alloc).CellChunkDraws.ParentInfos.AllocatorInstance.Data;
  if (pFVar2 != (FCellChunkDraw *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  pvVar3 = (void *)(this->Alloc).CellChunkDraws._padding_;
  if (pvVar3 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pvVar3);
  }
  pvVar3 = (void *)(this->Alloc).CellChunkDraws._padding_;
  if (pvVar3 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pvVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454905e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSceneInstanceCullingQuery>::_scalar_deleting_destructor_
          (TObject<FSceneInstanceCullingQuery> *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FCullingJob *pFVar4;
  FViewDrawGroup *pFVar5;
  
  pFVar3 = (this->Alloc).AsyncTaskHandle.Pimpl.Reference;
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
  DestructItems<FSceneInstanceCullingQuery::FCullingJob,int>
            ((this->Alloc).CullingJobs.AllocatorInstance.Data,(this->Alloc).CullingJobs.ArrayNum);
  pFVar4 = (this->Alloc).CullingJobs.AllocatorInstance.Data;
  if (pFVar4 != (FCullingJob *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar4);
  }
  pFVar5 = (this->Alloc).ViewDrawGroups.AllocatorInstance.Data;
  if (pFVar5 != (FViewDrawGroup *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490660

void * __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454906c0

void * __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x198) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x198));
  }
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
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490740

void * __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454907a0

void * __thiscall
TRDGEmptyLambdaPass<`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490800

void * __thiscall
TRDGEmptyLambdaPass<`FSceneRenderer::FenceOcclusionTests'::__l5::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 145490860

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_2>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454908c0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x198) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x198));
  }
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
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490940

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_4>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454909a0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`AddBufferLockReadbackPass<`UE::RendererPrivateUtils::Implementation::TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>::ValidateGPUData<`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_5>_>'::__l12::<lambda_1>_>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490a00

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FSceneRenderer::FenceOcclusionTests'::__l5::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 145490a60

void * __thiscall
TRDGLambdaPass<FHZBOcclusionUpdateTexturesParameters,`FHZBOcclusionTester::Submit'::__l13::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (*(void **)((longlong)this + 0x180));
  }
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
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490ae0

void * __thiscall
TRDGLambdaPass<FHZBTestPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FHZBTestPS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 145490b40

void * __thiscall
TRDGLambdaPass<FSceneCapturePS::FParameters,`CopySceneCaptureComponentToTarget'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x2a0) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x2b0);
    if (*(longlong **)((longlong)this + 0x2c8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x2c8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
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
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490bd0

void * __thiscall
TRDGLambdaPass<FRenderTargetParameters,`FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_4>_>
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

// `scalar_deleting_destructor' @ 145490c30

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FComputeExplicitChunkBounds_CS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 145490c90

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FSceneCullingDebugRender_CS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 145490cf0

void * __thiscall
FRDGBlackboard::TStruct<FSceneCaptureViewportSetterMap>::_scalar_deleting_destructor_
          (TStruct<FSceneCaptureViewportSetterMap> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Struct).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Struct).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Struct);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490d50

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation::
_scalar_deleting_destructor_(FAllocation *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490d80

void * __thiscall
`FScene::UpdateSceneCaptureContents'::__l32::FCubeFaceRenderTarget::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x80) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x80));
  }
  if (*(longlong **)((longlong)this + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x78) + 0x38))();
  }
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  FRenderTarget::~FRenderTarget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490df0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FCustomRenderPassBase::_scalar_deleting_destructor_(FCustomRenderPassBase *this,uint param_1)

{
  ~FCustomRenderPassBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FOcclusionFeedback::_scalar_deleting_destructor_(FOcclusionFeedback *this,uint param_1)

{
  FRHIResource *this_00;
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FOcclusionFeedback::FOcclusionBatch> FVar3;
  longlong lVar4;
  FOcclusionBuffer *pFVar5;
  
  this->_padding_ = (longlong)&___7FOcclusionFeedback__6B_;
  this_00 = (FRHIResource *)(this->OcclusionVertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  (this->LatestOcclusionResults).HashSize = 0;
  FVar1 = (this->LatestOcclusionResults).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FPrimitiveOcclusionHistoryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveOcclusionHistoryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LatestOcclusionResults).Elements);
  pFVar5 = (FOcclusionBuffer *)&this->CurrentBufferIndex;
  lVar4 = 3;
  do {
    pFVar2 = pFVar5[-1].BatchedPrimitives.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar4 != 0);
  FVar3 = (this->BatchOcclusionQueries).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490f10

void * __thiscall
FSceneCaptureCustomRenderPassUserData::_scalar_deleting_destructor_
          (FSceneCaptureCustomRenderPassUserData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CaptureActorName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICustomRenderPassUserData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490f60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FSceneCapturePass::_scalar_deleting_destructor_(FSceneCapturePass *this,uint param_1)

{
  FCustomRenderPassBase::~FCustomRenderPassBase((FCustomRenderPassBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490fa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FSceneCulling::_scalar_deleting_destructor_(FSceneCulling *this,uint param_1)

{
  ~FSceneCulling(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x578);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145490fe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FSceneCullingRenderer::_scalar_deleting_destructor_(FSceneCullingRenderer *this,uint param_1)

{
  *(undefined ***)this = &___7ISceneExtensionRenderer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145491020

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
FSceneRenderProcessor::_scalar_deleting_destructor_(FSceneRenderProcessor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FOp *pFVar2;
  FViewInfo **ppFVar3;
  FViewFamilyInfo **ppFVar4;
  FSceneRenderer **ppFVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  
  pFVar1 = (this->RenderState).FullPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->RenderState).GroupEvent.Event.bIsSet != false) {
    if ((this->RenderState).GroupEvent.Event.TypedValue.Node.Node != (FRHIBreadcrumbNode *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Node",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                         ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar6)();
        return pvVar8;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->RenderState).GroupEvent.Event.TypedValue.Node.AllocatorRef.
               SharedReferenceCount.ReferenceController);
  }
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
  ~TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>(&this->Allocator);
  pFVar2 = (this->Ops).AllocatorInstance.Data;
  if (pFVar2 != (FOp *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar2);
  }
  ppFVar3 = (this->ActiveViews).AllocatorInstance.Data;
  if (ppFVar3 != (FViewInfo **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppFVar3);
  }
  ppFVar4 = (this->ActiveViewFamilies).AllocatorInstance.Data;
  if (ppFVar4 != (FViewFamilyInfo **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppFVar4);
  }
  ppFVar5 = (this->ActiveRenderers).AllocatorInstance.Data;
  if (ppFVar5 != (FSceneRenderer **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppFVar5);
  }
  ppFVar5 = (this->Renderers).AllocatorInstance.Data;
  if (ppFVar5 != (FSceneRenderer **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppFVar5);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145491100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FSceneCulling::FUpdater::_scalar_deleting_destructor_(FUpdater *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  this->_padding_ = (longlong)&___7FUpdater_FSceneCulling__6B_;
  pFVar3 = (this->PreUpdateTaskHandle).Pimpl.Reference;
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
  this->_padding_ = (longlong)&___7ISceneExtensionUpdater__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145491170

void * __thiscall
ICustomRenderPass::_scalar_deleting_destructor_(ICustomRenderPass *this,uint param_1)

{
  *this = (ICustomRenderPass)&___7ICustomRenderPass__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454911b0

void * __thiscall
ICustomRenderPassUserData::_scalar_deleting_destructor_
          (ICustomRenderPassUserData *this,uint param_1)

{
  *this = (ICustomRenderPassUserData)&___7ICustomRenderPassUserData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1454911f0

void * __thiscall
ISceneRenderBuilder::_scalar_deleting_destructor_(ISceneRenderBuilder *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AllocateOcclusionTests @ 145493280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
AllocateOcclusionTests
          (FScene *param_1,
          TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *param_2,TArrayView<FViewInfo,int> *param_3,
          TArrayView<FVisibleLightInfo_const_,int> *param_4)

{
  ulonglong uVar1;
  double dVar2;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  FSceneViewState *this;
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar4;
  uint *puVar5;
  FProjectedShadowInfo *pFVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FRHIRenderQuery *pFVar14;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  FVisibleLightInfo *pFVar20;
  FViewInfo *pFVar21;
  uint *puVar22;
  uchar *puVar23;
  int *piVar24;
  uint uVar25;
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar26;
  bool bVar27;
  float fVar28;
  uint local_110;
  FProjectedShadowInfo *local_108;
  FRHIRenderQuery *local_100;
  FProjectedShadowInfo *local_f8;
  FRHIRenderQuery *local_f0;
  FProjectedShadowInfo *local_e8;
  FRHIRenderQuery *local_e0;
  FProjectedShadowInfo *local_d8;
  FRHIRenderQuery *local_d0;
  FViewInfo *local_c8;
  FPlanarReflectionSceneProxy *local_c0;
  FRHIRenderQuery *local_b8;
  Type local_b0;
  int *local_a8;
  longlong local_a0;
  int local_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FSceneRenderer_AllocateOcclusionTests");
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1074,"FSceneRenderer_AllocateOcclusionTests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
               ,0x432);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1074);
  }
  local_b0 = *(Type *)&param_1->field_0x8;
  iVar11 = FOcclusionQueryHelpers::GetNumBufferedFrames(local_b0);
  iVar13 = param_3->ArrayNum;
  piVar24 = &param_2->ArrayNum;
  bVar10 = false;
  local_a8 = piVar24;
  iVar12 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FViewOcclusionQueries>_>
                     (0x88,8,iVar13,&param_2->AllocatorInstance,piVar24,&param_2->ArrayMax);
  pTVar3 = (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(param_2->AllocatorInstance).SecondaryData.Data;
  pTVar15 = param_2;
  if (pTVar3 != (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar15 = pTVar3;
  }
  DefaultConstructItems<FViewOcclusionQueries,int>
            ((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 0x88,iVar13);
  local_110 = 0;
  if (0 < iVar13) {
    local_a0 = 0;
    do {
      uVar25 = 0;
      if ((int)local_110 < iVar13) {
        uVar25 = ~local_110 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar18 = local_a0;
      pFVar21 = param_3->DataPtr + local_a0;
      local_c8 = pFVar21;
      if ((*(char *)((longlong)&pFVar21->_padding_ + 7) == '\0') || ((int)pFVar21->_padding_ != 2))
      {
        uVar25 = 0;
        if ((int)local_110 < *piVar24) {
          uVar25 = ~local_110 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar3 = (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(param_2->AllocatorInstance).SecondaryData.Data;
        this = (FSceneViewState *)pFVar21->_padding_;
        lVar16 = pFVar21->_padding_;
        pTVar15 = param_2;
        if (pTVar3 != (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar15 = pTVar3;
        }
        puVar23 = (pTVar15->AllocatorInstance).InlineData + lVar18 * 0x88;
        piVar24 = local_a8;
        if ((this != (FSceneViewState *)0x0) && (pFVar21->bDisableQuerySubmissions == 0)) {
          uVar17 = (int)this->PendingPrevFrameNumber % iVar11;
          uVar25 = 0;
          if ((int)uVar17 < (this->ShadowOcclusionQueryMaps).ArrayNum) {
            uVar25 = ~uVar17 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar4 = (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData;
          dVar2 = *(double *)(lVar16 + 0x88);
          fVar28 = (float)dVar2;
          FVar26 = (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                    )&this->ShadowOcclusionQueryMaps;
          if (FVar4 != (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                        )0x0) {
            FVar26 = FVar4;
          }
          FSceneViewState::TrimOcclusionHistory
                    (this,fVar28,(float)(dVar2 - (double)GEngine->PrimitiveProbablyVisibleTime),
                     fVar28,this->OcclusionFrameCounter);
          TSet<TTuple<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>,FDefaultSetAllocator>
                   *)((longlong)(int)uVar17 * 0x50 + (longlong)FVar26));
          if (1 < (int)local_b0) {
            local_70 = &param_1->Lights;
            local_98 = 0;
            uVar25 = *(uint *)&(param_1->Lights).field_0x28;
            puStack_90 = &(param_1->Lights).field_0x10;
            uStack_94 = 1;
            uStack_84 = 0;
            iStack_80 = 0;
            if (uVar25 != 0) {
              puVar5 = *(uint **)&(param_1->Lights).field_0x20;
              puVar22 = (uint *)puStack_90;
              if (puVar5 != (uint *)0x0) {
                puVar22 = puVar5;
              }
              uVar17 = *puVar22;
              iStack_80 = 0;
              local_98 = 0;
              while (uVar17 == 0) {
                iStack_80 = iStack_80 + 0x20;
                lVar18 = (longlong)local_98;
                local_98 = local_98 + 1;
                if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < local_98)
                goto LAB_14549360b;
                uVar17 = puVar22[lVar18 + 1];
              }
              uStack_94 = -uVar17 & uVar17;
              uVar1 = (ulonglong)uStack_94 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              local_78 = (int)lVar18;
              uStack_84 = local_78 + -1 + iStack_80;
              if ((int)uVar25 < (int)uStack_84) {
LAB_14549360b:
                uStack_84 = uVar25;
              }
            }
            local_88 = 0xffffffff;
            local_68._padding_ = CONCAT44(uStack_94,local_98);
            local_68.CurrentBitIndex = uStack_84;
            local_68.UnvisitedBitMask = 0xffffffff;
            local_68._28_4_ = uStack_7c;
            local_68.BaseBitIndex = iStack_80;
            uVar17 = uStack_84;
            local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_90;
            if ((int)uStack_84 < (int)uVar25) {
              do {
                uVar25 = 0;
                if ((int)uVar17 < param_4->ArrayNum) {
                  uVar25 = ~uVar17 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar9 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar25 = 0;
                pFVar20 = param_4->DataPtr + (int)uVar17;
                iVar13 = (pFVar20->AllProjectedShadows).ArrayNum;
                if (0 < iVar13) {
                  lVar18 = 0;
                  do {
                    uVar17 = 0;
                    if ((int)uVar25 < iVar13) {
                      uVar17 = ~uVar25 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar21 = local_c8;
                    pFVar6 = *(FProjectedShadowInfo **)
                              (lVar18 + (longlong)
                                        (pFVar20->AllProjectedShadows).AllocatorInstance.Data);
                    if ((((pFVar6->DependentView == (FViewInfo *)0x0) ||
                         (pFVar6->DependentView == local_c8)) &&
                        (pFVar6->CacheMode != SDCM_StaticPrimitivesOnly)) &&
                       ((pFVar6->VirtualShadowMapPerLightCacheEntry).Object ==
                        (FVirtualShadowMapPerLightCacheEntry *)0x0)) {
                      bVar9 = FProjectedShadowInfo::IsWholeScenePointLightShadow(pFVar6);
                      if (bVar9) {
                        bVar9 = AllocateProjectedShadowOcclusionQuery
                                          (pFVar21,pFVar6,iVar11,SOQ_LightInfluenceSphere,&local_100
                                          );
                        if (bVar9) {
                          local_108 = pFVar6;
                          if (((*(FProjectedShadowInfo ***)puVar23 <= &local_108) &&
                              (&local_108 <
                               *(FProjectedShadowInfo ***)puVar23 + *(int *)(puVar23 + 0xc))) &&
                             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar10)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar13 = *(int *)(puVar23 + 8);
                          if (iVar13 == *(int *)(puVar23 + 0xc)) {
                            iVar13 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_const_*>_>
                                               (0x808,(ForElementType<FProjectedShadowInfo_const_*>
                                                       *)puVar23,(int *)(puVar23 + 0xc));
                          }
                          *(int *)(puVar23 + 8) = iVar13 + 1;
                          *(FProjectedShadowInfo **)(*(longlong *)puVar23 + (longlong)iVar13 * 8) =
                               local_108;
                          if (((*(FRHIRenderQuery ***)(puVar23 + 0x40) <= &local_100) &&
                              (&local_100 <
                               *(FRHIRenderQuery ***)(puVar23 + 0x40) + *(int *)(puVar23 + 0x4c)))
                             && (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar10)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar13 = *(int *)(puVar23 + 0x48);
                          if (iVar13 == *(int *)(puVar23 + 0x4c)) {
                            iVar13 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>_>
                                               (0x808,(ForElementType<FRHIRenderQuery_*> *)
                                                      (puVar23 + 0x40),(int *)(puVar23 + 0x4c));
                          }
                          lVar19 = (longlong)iVar13;
                          *(int *)(puVar23 + 0x48) = iVar13 + 1;
                          lVar16 = *(longlong *)(puVar23 + 0x40);
                          pFVar14 = local_100;
                          goto LAB_145493ba7;
                        }
                      }
                      else {
                        bVar9 = FProjectedShadowInfo::IsWholeSceneDirectionalShadow(pFVar6);
                        if (bVar9) {
                          if (((GOcclusionCullCascadedShadowMaps != 0) &&
                              (0 < (pFVar6->CascadeSettings).ShadowSplitIndex)) &&
                             (bVar9 = AllocateProjectedShadowOcclusionQuery
                                                (pFVar21,pFVar6,iVar11,SOQ_None,&local_f0), bVar9))
                          {
                            local_f8 = pFVar6;
                            if (((*(FProjectedShadowInfo ***)(puVar23 + 0x10) <= &local_f8) &&
                                (&local_f8 <
                                 *(FProjectedShadowInfo ***)(puVar23 + 0x10) +
                                 *(int *)(puVar23 + 0x1c))) &&
                               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar10)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            iVar13 = *(int *)(puVar23 + 0x18);
                            if (iVar13 == *(int *)(puVar23 + 0x1c)) {
                              iVar13 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_const_*>_>
                                                 (0x808,(
                                                  ForElementType<FProjectedShadowInfo_const_*> *)
                                                  (puVar23 + 0x10),(int *)(puVar23 + 0x1c));
                            }
                            *(int *)(puVar23 + 0x18) = iVar13 + 1;
                            *(FProjectedShadowInfo **)
                             (*(longlong *)(puVar23 + 0x10) + (longlong)iVar13 * 8) = local_f8;
                            if (((*(FRHIRenderQuery ***)(puVar23 + 0x50) <= &local_f0) &&
                                (&local_f0 <
                                 *(FRHIRenderQuery ***)(puVar23 + 0x50) + *(int *)(puVar23 + 0x5c)))
                               && (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                      (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar10)) {
                              pcVar7 = (code *)swi(3);
                              (*pcVar7)();
                              return;
                            }
                            iVar13 = *(int *)(puVar23 + 0x58);
                            if (iVar13 == *(int *)(puVar23 + 0x5c)) {
                              iVar13 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>_>
                                                 (0x808,(ForElementType<FRHIRenderQuery_*> *)
                                                        (puVar23 + 0x50),(int *)(puVar23 + 0x5c));
                            }
                            lVar19 = (longlong)iVar13;
                            *(int *)(puVar23 + 0x58) = iVar13 + 1;
                            lVar16 = *(longlong *)(puVar23 + 0x50);
                            pFVar14 = local_f0;
LAB_145493ba7:
                            *(FRHIRenderQuery **)(lVar16 + lVar19 * 8) = pFVar14;
                            bVar10 = true;
                          }
                        }
                        else if (((pFVar6->bPreShadow == 0) &&
                                 (bVar9 = FProjectedShadowInfo::SubjectsVisible(pFVar6,pFVar21),
                                 !bVar9)) &&
                                (bVar9 = AllocateProjectedShadowOcclusionQuery
                                                   (pFVar21,pFVar6,iVar11,
                                                    SOQ_NearPlaneVsShadowFrustum,&local_e0), bVar9))
                        {
                          local_e8 = pFVar6;
                          if (((*(FProjectedShadowInfo ***)(puVar23 + 0x20) <= &local_e8) &&
                              (&local_e8 <
                               *(FProjectedShadowInfo ***)(puVar23 + 0x20) +
                               *(int *)(puVar23 + 0x2c))) &&
                             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar10)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar13 = *(int *)(puVar23 + 0x28);
                          if (iVar13 == *(int *)(puVar23 + 0x2c)) {
                            iVar13 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_const_*>_>
                                               (0x808,(ForElementType<FProjectedShadowInfo_const_*>
                                                       *)(puVar23 + 0x20),(int *)(puVar23 + 0x2c));
                          }
                          *(int *)(puVar23 + 0x28) = iVar13 + 1;
                          *(FProjectedShadowInfo **)
                           (*(longlong *)(puVar23 + 0x20) + (longlong)iVar13 * 8) = local_e8;
                          if (((*(FRHIRenderQuery ***)(puVar23 + 0x60) <= &local_e0) &&
                              (&local_e0 <
                               *(FRHIRenderQuery ***)(puVar23 + 0x60) + *(int *)(puVar23 + 0x6c)))
                             && (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar10)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          iVar13 = *(int *)(puVar23 + 0x68);
                          if (iVar13 == *(int *)(puVar23 + 0x6c)) {
                            iVar13 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>_>
                                               (0x808,(ForElementType<FRHIRenderQuery_*> *)
                                                      (puVar23 + 0x60),(int *)(puVar23 + 0x6c));
                          }
                          lVar19 = (longlong)iVar13;
                          *(int *)(puVar23 + 0x68) = iVar13 + 1;
                          lVar16 = *(longlong *)(puVar23 + 0x60);
                          pFVar14 = local_e0;
                          goto LAB_145493ba7;
                        }
                      }
                    }
                    iVar13 = (pFVar20->AllProjectedShadows).ArrayNum;
                    uVar25 = uVar25 + 1;
                    lVar18 = lVar18 + 8;
                  } while ((int)uVar25 < iVar13);
                }
                uVar25 = 0;
                if (0 < (pFVar20->OccludedPerObjectShadows).ArrayNum) {
                  lVar18 = 0;
                  do {
                    uVar17 = 0;
                    if ((int)uVar25 < (pFVar20->OccludedPerObjectShadows).ArrayNum) {
                      uVar17 = ~uVar25 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar6 = *(FProjectedShadowInfo **)
                              (lVar18 + (longlong)
                                        (pFVar20->OccludedPerObjectShadows).AllocatorInstance.Data);
                    bVar9 = AllocateProjectedShadowOcclusionQuery
                                      (local_c8,pFVar6,iVar11,SOQ_NearPlaneVsShadowFrustum,&local_d0
                                      );
                    if (bVar9) {
                      local_d8 = pFVar6;
                      if (((*(FProjectedShadowInfo ***)(puVar23 + 0x20) <= &local_d8) &&
                          (&local_d8 <
                           *(FProjectedShadowInfo ***)(puVar23 + 0x20) + *(int *)(puVar23 + 0x2c)))
                         && (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar10)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iVar13 = *(int *)(puVar23 + 0x28);
                      if (iVar13 == *(int *)(puVar23 + 0x2c)) {
                        iVar13 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_const_*>_>
                                           (0x808,(ForElementType<FProjectedShadowInfo_const_*> *)
                                                  (puVar23 + 0x20),(int *)(puVar23 + 0x2c));
                      }
                      *(int *)(puVar23 + 0x28) = iVar13 + 1;
                      *(FProjectedShadowInfo **)
                       (*(longlong *)(puVar23 + 0x20) + (longlong)iVar13 * 8) = local_d8;
                      if (((*(FRHIRenderQuery ***)(puVar23 + 0x60) <= &local_d0) &&
                          (&local_d0 <
                           *(FRHIRenderQuery ***)(puVar23 + 0x60) + *(int *)(puVar23 + 0x6c))) &&
                         (bVar10 = FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar10)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iVar13 = *(int *)(puVar23 + 0x68);
                      if (iVar13 == *(int *)(puVar23 + 0x6c)) {
                        iVar13 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>_>
                                           (0x808,(ForElementType<FRHIRenderQuery_*> *)
                                                  (puVar23 + 0x60),(int *)(puVar23 + 0x6c));
                      }
                      bVar10 = true;
                      *(int *)(puVar23 + 0x68) = iVar13 + 1;
                      *(FRHIRenderQuery **)(*(longlong *)(puVar23 + 0x60) + (longlong)iVar13 * 8) =
                           local_d0;
                    }
                    uVar25 = uVar25 + 1;
                    lVar18 = lVar18 + 8;
                  } while ((int)uVar25 < (pFVar20->OccludedPerObjectShadows).ArrayNum);
                }
                local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
                pFVar21 = local_c8;
                uVar17 = local_68.CurrentBitIndex;
              } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
            }
            if (((*(char *)((longlong)&pFVar21->_padding_ + 5) == '\0') &&
                ((char)pFVar21->_padding_ == '\0')) &&
               (*(char *)((longlong)&pFVar21->_padding_ + 4) == '\0')) {
              uVar25 = 0;
              if (0 < (param_1->PlanarReflections).ArrayNum) {
                lVar18 = 0;
                do {
                  uVar17 = 0;
                  if ((int)uVar25 < (param_1->PlanarReflections).ArrayNum) {
                    uVar17 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar9 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  local_c0 = *(FPlanarReflectionSceneProxy **)
                              ((param_1->PlanarReflections).AllocatorInstance.Data + lVar18);
                  bVar9 = AllocatePlanarReflectionOcclusionQuery
                                    (pFVar21,local_c0,iVar11 + 1,&local_b8);
                  if (bVar9) {
                    if (((*(FPlanarReflectionSceneProxy ***)(puVar23 + 0x30) <= &local_c0) &&
                        (&local_c0 <
                         *(FPlanarReflectionSceneProxy ***)(puVar23 + 0x30) +
                         *(int *)(puVar23 + 0x3c))) &&
                       (bVar10 = FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar13 = *(int *)(puVar23 + 0x38);
                    if (iVar13 == *(int *)(puVar23 + 0x3c)) {
                      iVar13 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPlanarReflectionSceneProxy_const_*>_>
                                         (0x808,(ForElementType<FPlanarReflectionSceneProxy_const_*>
                                                 *)(puVar23 + 0x30),(int *)(puVar23 + 0x3c));
                    }
                    *(int *)(puVar23 + 0x38) = iVar13 + 1;
                    *(FPlanarReflectionSceneProxy **)
                     (*(longlong *)(puVar23 + 0x30) + (longlong)iVar13 * 8) = local_c0;
                    if (((*(FRHIRenderQuery ***)(puVar23 + 0x70) <= &local_b8) &&
                        (&local_b8 <
                         *(FRHIRenderQuery ***)(puVar23 + 0x70) + *(int *)(puVar23 + 0x7c))) &&
                       (bVar10 = FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar13 = *(int *)(puVar23 + 0x78);
                    if (iVar13 == *(int *)(puVar23 + 0x7c)) {
                      iVar13 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>_>
                                         (0x808,(ForElementType<FRHIRenderQuery_*> *)
                                                (puVar23 + 0x70),(int *)(puVar23 + 0x7c));
                    }
                    *(int *)(puVar23 + 0x78) = iVar13 + 1;
                    bVar10 = true;
                    *(FRHIRenderQuery **)(*(longlong *)(puVar23 + 0x70) + (longlong)iVar13 * 8) =
                         local_b8;
                  }
                  uVar25 = uVar25 + 1;
                  lVar18 = lVar18 + 8;
                } while ((int)uVar25 < (param_1->PlanarReflections).ArrayNum);
              }
            }
          }
          if ((((pFVar21->IndividualOcclusionQueries).NumBatchedPrimitives == 0) &&
              ((pFVar21->GroupedOcclusionQueries).NumBatchedPrimitives == 0)) &&
             (puVar23[0x80] == '\0')) {
            bVar8 = 0;
          }
          else {
            bVar8 = 1;
          }
          bVar10 = (bool)(bVar10 | bVar8);
          lVar18 = local_a0;
          piVar24 = local_a8;
        }
      }
      local_a0 = lVar18 + 1;
      local_110 = local_110 + 1;
      iVar13 = param_3->ArrayNum;
    } while ((int)local_110 < iVar13);
    if (bVar10) goto LAB_145494083;
  }
  pTVar3 = (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(param_2->AllocatorInstance).SecondaryData.Data;
  pTVar15 = param_2;
  if (pTVar3 != (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar15 = pTVar3;
  }
  DestructItems<FViewOcclusionQueries,int>((FViewOcclusionQueries *)pTVar15,param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FViewOcclusionQueries>_>
              (0x88,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
LAB_145494083:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AllocatePlanarReflectionOcclusionQuery @ 1454940b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __cdecl
AllocatePlanarReflectionOcclusionQuery
          (FViewInfo *param_1,FPlanarReflectionSceneProxy *param_2,int param_3,
          FRHIRenderQuery **param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  FRHIRenderQueryPool *pFVar5;
  FRHIResource *this;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  TVector4<double> *pTVar11;
  FIndividualOcclusionHistory *this_00;
  FConvexVolume *this_01;
  TRefCountPtr<FRHIRenderQuery> this_02;
  FRHIPooledRenderQuery *pFVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  TRefCountPtr<FRHIRenderQuery> local_128;
  FRHIRenderQueryPool *local_120;
  FRHIPooledRenderQuery local_118;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  TVector4<double> local_98 [3];
  
  dVar17 = __real_3fe0000000000000;
  lVar4 = param_1->_padding_;
  this_01 = (FConvexVolume *)param_1->_padding_;
  bVar13 = false;
  if (this_01 == (FConvexVolume *)0x0) {
    this_01 = (FConvexVolume *)&param_1->_padding_;
  }
  dVar16 = (param_2->WorldBounds).Min.field0_0x0._s_0.X;
  dVar18 = (param_2->WorldBounds).Max.field0_0x0._s_0.Y;
  dVar1 = (param_2->WorldBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (param_2->WorldBounds).Min.field0_0x0._s_0.Z;
  local_108._s_0.X =
       ((param_2->WorldBounds).Max.field0_0x0._s_0.X - dVar16) * __real_3fe0000000000000;
  local_f0._s_0.X =
       (dVar16 + (param_2->WorldBounds).Max.field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_108._s_0.Z =
       ((param_2->WorldBounds).Max.field0_0x0._s_0.Z - dVar2) * __real_3fe0000000000000;
  auVar19._0_8_ = (dVar2 + (param_2->WorldBounds).Max.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  auVar19._8_8_ = 0;
  local_108._s_0.Y = (dVar18 - dVar1) * __real_3fe0000000000000;
  local_f0._s_0.Y = (dVar1 + dVar18) * __real_3fe0000000000000;
  local_f0._s_0.Z = auVar19._0_8_;
  bVar9 = FConvexVolume::IntersectBox
                    (this_01,(TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0);
  dVar16 = __real_3ff0000000000000;
  if (bVar9) {
    dVar18 = (param_2->WorldBounds).Min.field0_0x0._s_0.Y;
    dVar8 = (param_2->WorldBounds).Max.field0_0x0._s_0.Y - dVar18;
    dVar1 = (param_2->WorldBounds).Min.field0_0x0._s_0.X;
    dVar15 = (param_2->WorldBounds).Max.field0_0x0._s_0.X - dVar1;
    dVar2 = (param_2->WorldBounds).Min.field0_0x0._s_0.Z;
    dVar14 = (param_2->WorldBounds).Max.field0_0x0._s_0.Z - dVar2;
    local_c0 = dVar15 * dVar17;
    local_b8 = dVar8 * dVar17;
    local_b0 = dVar14 * dVar17;
    local_d8._s_0.X = dVar1 + local_c0;
    local_d8._s_0.Y = dVar18 + local_b8;
    local_d8._s_0.Z = dVar2 + local_b0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (dVar8 * dVar8 + dVar15 * dVar15 + dVar14 * dVar14) * __real_3fd0000000000000;
    auVar19 = sqrtpd(auVar19,auVar7);
    local_a8 = auVar19._0_8_;
    if (*(char *)((longlong)&param_1->_padding_ + 1) == '\0') {
      if ((double)param_1->_padding_ <= __real_3ff0000000000000 &&
          __real_3ff0000000000000 != (double)param_1->_padding_) {
        bVar13 = local_a8 < __real_4290000000000000;
      }
      else {
        dVar17 = local_a8 * (double)param_1->_padding_;
        pTVar11 = FSceneView::WorldToScreen
                            ((FSceneView *)param_1,local_98,(TVector<double> *)&local_d8._s_0);
        bVar13 = (pTVar11->field0_0x0)._s_0.Z - dVar17 < dVar16;
      }
    }
    else {
      dVar16 = local_b8 * (double)param_1->_padding_;
      dVar18 = local_c0 * (double)param_1->_padding_;
      dVar17 = local_b0 * (double)param_1->_padding_;
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      bVar13 = (local_d8._s_0.Y * (double)param_1->_padding_ +
                local_d8._s_0.X * (double)param_1->_padding_ +
               local_d8._s_0.Z * (double)param_1->_padding_) - (double)param_1->_padding_ <
               (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar17,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
  }
  uVar3 = *(uint *)(lVar4 + 0x4f8);
  this_00 = TMapBase<int,FIndividualOcclusionHistory,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,FIndividualOcclusionHistory,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>_>
                        *)(lVar4 + 0x550),param_2->PlanarReflectionId,&param_2->PlanarReflectionId);
  pFVar12 = this_00->PendingOcclusionQuery + ((longlong)(int)uVar3 % (longlong)param_3 & 0xffffffff)
  ;
  pFVar5 = pFVar12->QueryPool;
  if (pFVar5 != (FRHIRenderQueryPool *)0x0) {
    if ((pFVar12->Query).Reference == (FRHIRenderQuery *)0x0) goto LAB_1454943b6;
    (**(code **)(*(longlong *)pFVar5 + 0x18))(pFVar5,pFVar12);
    pFVar12->QueryPool = (FRHIRenderQueryPool *)0x0;
  }
  if (((pFVar12->Query).Reference != (FRHIRenderQuery *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!Query.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x9c9,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
LAB_1454943b6:
  if (bVar13 == false) {
    local_118.Query.Reference = (FRHIRenderQuery *)0x0;
    local_118.QueryPool = (FRHIRenderQueryPool *)0x0;
    FIndividualOcclusionHistory::SetCurrentQuery(this_00,uVar3,&local_118,param_3);
    bVar9 = IsInParallelRenderingThread();
    if ((!bVar9) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x9ce,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    if (local_118.QueryPool != (FRHIRenderQueryPool *)0x0) {
      if ((FRHIResource *)local_118.Query.Reference == (FRHIResource *)0x0) {
        return false;
      }
      (**(code **)(*(longlong *)local_118.QueryPool + 0x18))(local_118.QueryPool,&local_118);
      local_118.QueryPool = (FRHIRenderQueryPool *)0x0;
    }
    if ((FRHIResource *)local_118.Query.Reference == (FRHIResource *)0x0) {
      return false;
    }
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("!Query.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9c9,L"");
    this_02.Reference = local_118.Query.Reference;
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  else {
    (**(code **)(**(longlong **)(lVar4 + 400) + 0x10))(*(longlong **)(lVar4 + 400),&local_128);
    *param_4 = local_128.Reference;
    if (pFVar12 != (FRHIPooledRenderQuery *)&local_128) {
      this = (FRHIResource *)(pFVar12->Query).Reference;
      (pFVar12->Query).Reference = local_128.Reference;
      local_128.Reference = (FRHIRenderQuery *)0x0;
      if (this != (FRHIResource *)0x0) {
        FRHIResource::Release(this);
      }
    }
    pFVar12->QueryPool = local_120;
    this_00->PendingOcclusionQueryFrames[(longlong)(int)uVar3 % (longlong)param_3 & 0xffffffff] =
         uVar3;
    bVar9 = IsInParallelRenderingThread();
    if ((!bVar9) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x9ce,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    if (local_120 != (FRHIRenderQueryPool *)0x0) {
      if ((FRHIResource *)local_128.Reference == (FRHIResource *)0x0) {
        return bVar13;
      }
      (**(code **)(*(longlong *)local_120 + 0x18))(local_120,&local_128);
      local_120 = (FRHIRenderQueryPool *)0x0;
    }
    if ((FRHIResource *)local_128.Reference == (FRHIResource *)0x0) {
      return bVar13;
    }
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("!Query.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9c9,L"");
    this_02.Reference = local_128.Reference;
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  if ((FRHIResource *)this_02.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02.Reference);
  }
  return bVar13;
}

// AllocateProjectedShadowOcclusionQuery @ 145494590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __cdecl
AllocateProjectedShadowOcclusionQuery
          (FViewInfo *param_1,FProjectedShadowInfo *param_2,int param_3,
          EShadowOcclusionQueryIntersectionMode param_4,FRHIRenderQuery **param_5)

{
  FLightSceneProxy *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res20 [2];
  undefined1 local_98 [24];
  FProjectedShadowKey *local_80;
  undefined1 *local_78;
  TVector<double>_u_0 local_70;
  FProjectedShadowKey local_58;
  undefined1 local_40 [40];
  
  bVar4 = true;
  if (param_4 == SOQ_LightInfluenceSphere) {
    pFVar1 = param_2->LightSceneInfo->Proxy;
    pdVar8 = (double *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,local_40);
    fVar13 = (float)(*pdVar8 + (double)param_1->_padding_);
    fVar14 = (float)((double)param_1->_padding_ + pdVar8[1]);
    fVar12 = (float)((double)param_1->_padding_ + pdVar8[2]);
    fVar11 = (float)pdVar8[3] * __real_3f8483ee +
             *(float *)&param_1->_padding_ + *(float *)&param_1->_padding_;
    if ((fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12 <= fVar11 * fVar11) ||
       (__real_3ff0000000000000 < (double)param_1->_padding_ ||
        __real_3ff0000000000000 == (double)param_1->_padding_)) {
      bVar4 = false;
    }
  }
  else {
    if (param_4 != SOQ_NearPlaneVsShadowFrustum) goto LAB_1454946d7;
    local_res20[0] = *(float *)&param_1->_padding_ * __real_3fddb3d7;
    local_70._s_0.Y = (double)param_1->_padding_ + (param_2->PreShadowTranslation).field0_0x0._s_0.Y
    ;
    local_70._s_0.X = (param_2->PreShadowTranslation).field0_0x0._s_0.X + (double)param_1->_padding_
    ;
    local_70._s_0.Z = (double)param_1->_padding_ + (param_2->PreShadowTranslation).field0_0x0._s_0.Z
    ;
    bVar4 = FConvexVolume::IntersectSphere
                      (&param_2->ReceiverInnerFrustum,(TVector<double> *)&local_70._s_0,local_res20)
    ;
    bVar4 = !bVar4;
  }
  if (bVar4 == false) {
    return false;
  }
LAB_1454946d7:
  lVar2 = param_1->_padding_;
  FSceneViewState::FProjectedShadowKey::FProjectedShadowKey(&local_58,param_2);
  uVar9 = *(int *)(lVar2 + 0x484) % param_3;
  uVar7 = 0;
  if ((int)uVar9 < *(int *)(lVar2 + 0x188)) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  lVar10 = *(longlong *)(lVar2 + 0x180);
  (**(code **)(**(longlong **)(lVar2 + 400) + 0x10))(*(longlong **)(lVar2 + 400),local_98 + 8);
  if (lVar10 == 0) {
    lVar10 = lVar2 + 0x40;
  }
  *param_5 = (FRHIRenderQuery *)local_98._8_8_;
  local_80 = &local_58;
  local_78 = local_98 + 8;
  TSet<TTuple<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FSceneViewState::FProjectedShadowKey_const_&,FRHIPooledRenderQuery_&&>_>
            ((TSet<TTuple<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>,FDefaultSetAllocator>
              *)((longlong)(int)uVar9 * 0x50 + lVar10),
             (TPairInitializer<FSceneViewState::FProjectedShadowKey_const_&,FRHIPooledRenderQuery_&&>
              *)local_98,(bool *)&local_80);
  FRHIPooledRenderQuery::~FRHIPooledRenderQuery((FRHIPooledRenderQuery *)(local_98 + 8));
  return bVar4;
}

// BeginOcclusionTests @ 145495a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
BeginOcclusionTests(FRHICommandList *param_1,FViewInfo *param_2,FViewOcclusionQueries *param_3,
                   Type param_4,uint param_5,FGraphicsPipelineStateInitializer *param_6)

{
  FProjectedShadowInfo **ppFVar1;
  FPlanarReflectionSceneProxy **ppFVar2;
  FRHIRenderQuery **ppFVar3;
  byte bVar4;
  FGlobalShaderMap *pFVar5;
  undefined8 uVar6;
  FPlanarReflectionSceneProxy *pFVar7;
  FRHIRenderQuery *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  FRHIBuffer *this;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_BeginOcclusionTestsTime> FVar21;
  FRHIBreadcrumbAllocator *pFVar22;
  FRHIBreadcrumbNode *pFVar23;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar24;
  FRHIRasterizerState *pFVar25;
  FSceneView *pFVar26;
  IRHICommandContext *pIVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  FShaderType *pFVar30;
  FName FVar31;
  FRHIVertexShader *pFVar32;
  atomic<FRHIShader_*> aVar33;
  FRHIBatchedShaderParameters *pFVar34;
  FRHICommandBase *pFVar35;
  int iVar36;
  ulonglong uVar37;
  longlong *plVar38;
  FRHIBreadcrumbScope *this_00;
  FName FVar39;
  int iVar40;
  FRHIGPUMask FVar41;
  longlong lVar42;
  int iVar43;
  uint uVar44;
  FProjectedShadowInfo **ppFVar45;
  FPlanarReflectionSceneProxy **ppFVar46;
  FRHIRenderQuery **ppFVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStackY_7b8 [32];
  uint local_748;
  undefined1 local_744;
  undefined1 local_743;
  undefined1 local_742;
  undefined1 local_741;
  undefined1 local_740;
  undefined1 local_73f [3];
  uint local_73c;
  FRHIGraphicsShader *local_738;
  Type local_730;
  FShaderMapResource *local_728;
  FName local_720;
  FViewInfo *local_718;
  FRHIBuffer *local_710;
  FColor_u_0 local_708 [2];
  FRHICommandListBase *local_700;
  longlong local_6f8;
  uint local_6f0;
  uint uStack_6ec;
  uint local_6e8;
  uint uStack_6e4;
  uint local_6e0;
  uint uStack_6dc;
  FName local_6d8;
  uint local_6d0;
  uint uStack_6cc;
  TShaderRefBase<FOcclusionQueryVS,FShaderMapPointerTable> local_6c8;
  FName local_6b8;
  undefined8 local_6a8;
  undefined8 local_698;
  undefined8 local_688;
  undefined8 local_678;
  uint local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  int iStack_65c;
  wchar_t *local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined8 uStack_640;
  undefined8 local_638;
  double local_630;
  double local_628;
  double local_620;
  double local_618;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_5f8 [2];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_5d8;
  TVector4<float>_u_0 local_5c8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  float local_5a0;
  undefined8 local_59c;
  float local_594;
  undefined8 local_590;
  float local_588;
  undefined8 local_584;
  float local_57c;
  undefined8 local_578;
  float local_570;
  FRHIBreadcrumbScope local_568;
  char local_558;
  FRHIBreadcrumbScope local_550;
  char local_540;
  FRHIBreadcrumbScope local_538;
  char local_528;
  undefined8 local_520;
  float local_518;
  undefined8 local_514;
  float local_50c;
  undefined8 local_508;
  float local_500;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_4f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_4e8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_4d8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_4c8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_4b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_4a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_498;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_488;
  undefined1 local_478 [8];
  FName local_470;
  undefined1 local_468 [8];
  FRHIBreadcrumbScope local_460;
  undefined1 local_450;
  FRHIBreadcrumbScope local_448;
  undefined1 local_438;
  FRHIBreadcrumbScope local_430;
  undefined1 local_420;
  FRHIBreadcrumbScope local_418;
  undefined1 local_408;
  FRHIBreadcrumbScope local_400;
  undefined1 local_3f0;
  FRHIBreadcrumbScope local_3e8;
  undefined1 local_3d8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_3d0;
  FString local_3c0;
  FString local_3b0;
  ulonglong local_3a0;
  undefined8 uStack_398;
  wchar_t *local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  uint uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  uint uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  uint uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  uint uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  uint uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  uint uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  uint uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  uint uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  uint uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  FGraphicsPipelineStateInitializer local_248;
  undefined1 local_168 [48];
  FRHICommandListBase *local_138;
  FRHIBuffer *local_130;
  void *local_128;
  undefined1 local_118 [48];
  FRHICommandListBase *local_e8;
  FRHIBuffer *local_e0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  local_730 = param_4;
  local_718 = param_2;
  local_700 = (FRHICommandListBase *)param_1;
  if (((param_1->field_0x29b & 2) == 0) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList.IsInsideRenderPass()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                          ,0x4d3,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar21 = StatPtr_STAT_BeginOcclusionTestsTime;
  if (StatPtr_STAT_BeginOcclusionTestsTime ==
      (FThreadSafeStaticStat<FStat_STAT_BeginOcclusionTestsTime>)0x0) {
    pFVar20 = FName::FName(&local_470,"STAT_BeginOcclusionTestsTime");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_BeginOcclusionTestsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginOcclusionTestsTime,*pFVar20,
                        L"BeginOcclusionTests","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar13 = false;
  bVar10 = false;
  local_6b8.ComparisonIndex.Value = 0;
  local_6b8.Number = 0;
  FVar39 = *(FName *)FVar21;
  bVar12 = false;
  bVar14 = false;
  if ((FVar39.ComparisonIndex.Value.Value == 0) && (FVar39.Number == 0)) {
LAB_145495bf4:
    bVar10 = bVar14;
    bVar13 = bVar12;
    bVar12 = false;
    local_720 = local_6b8;
    FVar39 = local_6b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_708[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_708[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar13 = false;
      bVar10 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_6d8.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_6d8.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_6d8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                   ,0x4d5);
        bVar13 = true;
        bVar10 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145495bf4;
    local_720 = FVar39;
    FThreadStats::AddMessage(FVar39,CycleScopeStart);
    bVar12 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    local_258 = 0;
    uStack_254 = 0;
    Desc._12_8_ = ZEXT48(uStack_25c);
    Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
    Desc._padding_._4_4_ = 0;
    Desc._padding_ = (longlong)u_BeginOcclusionT;
    Desc._padding_._0_4_ = 0x4d6;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
    Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    Desc.TraceGpuSpecId = 0;
    Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``BeginOcclusionTests'::__l14::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&_TSS0);
  }
  local_3d0._Myfirst._Val = &Desc;
  pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar23 = FRHIBreadcrumbAllocator::
            AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                      (pFVar22,&local_3d0);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_538,(FRHIComputeCommandList *)param_1,pFVar23);
  FVar41.GPUMask = *(uint *)&param_1->field_0x29c;
  local_528 = '\x01';
  local_73c = FVar41.GPUMask;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)param_1,(FRHIGPUMask)(uint)param_2->_padding_);
  local_248.RenderTargetsEnabled = 0;
  local_248.RenderTargetFormats.Elements[0] = '\0';
  local_248.RenderTargetFormats.Elements[1] = '\0';
  local_248.RenderTargetFormats.Elements[2] = '\0';
  local_248.RenderTargetFormats.Elements[3] = '\0';
  local_248.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_248.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_248.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_248.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_248.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_248.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_248.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_248.BlendState = (FRHIBlendState *)0x0;
  local_248.RasterizerState = (FRHIRasterizerState *)0x0;
  local_248.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_248.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_248.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_248.RenderTargetFlags.Elements[0] = None;
  local_248.RenderTargetFlags.Elements[1] = None;
  local_248.RenderTargetFlags.Elements[2] = None;
  local_248.RenderTargetFlags.Elements[3] = None;
  local_248.RenderTargetFlags.Elements[4] = None;
  local_248.RenderTargetFlags.Elements[5] = None;
  local_248.RenderTargetFlags.Elements[6] = None;
  local_248.RenderTargetFlags.Elements[7] = None;
  local_248.RenderTargetFormats.Elements[4] = '\0';
  local_248.RenderTargetFormats.Elements[5] = '\0';
  local_248.RenderTargetFormats.Elements[6] = '\0';
  local_248.RenderTargetFormats.Elements[7] = '\0';
  local_248.DepthStencilTargetFormat = PF_Unknown;
  local_248.DepthStencilTargetFlag = None;
  local_248.DepthTargetLoadAction = ENoAction;
  local_248.DepthTargetStoreAction = ENoAction;
  local_248.StencilTargetLoadAction = ENoAction;
  local_248.StencilTargetStoreAction = ENoAction;
  local_248.DepthStencilAccess.Value = DepthNop;
  local_248.NumSamples = 0;
  local_248.SubpassHint = None;
  local_248.SubpassIndex = '\0';
  local_248.ConservativeRasterization = Disabled;
  local_248.bDepthBounds = false;
  local_248.MultiViewCount = '\0';
  local_248.bHasFragmentDensityAttachment = false;
  local_248.bAllowVariableRateShading = true;
  local_248.ShadingRate = VRSSR_1x1;
  local_248.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_248.StatePrecachePSOHash = 0;
  if (param_6 == (FGraphicsPipelineStateInitializer *)0x0) {
    FRHICommandList::ApplyCachedRenderTargets(param_1,&local_248);
    local_248.BlendState =
         TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_248.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_248.PrimitiveType = PT_TriangleList;
    pTVar24 = GetVertexDeclarationFVector3();
    local_248.BoundShaderState.VertexDeclarationRHI = pTVar24->Reference;
    param_6 = &local_248;
  }
  pFVar25 = TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
            ::StaticResource.StateRHI.Reference;
  if ((char)param_2->_padding_ != '\0') {
    pFVar25 = TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource.StateRHI.Reference;
  }
  param_6->RasterizerState = pFVar25;
  bVar14 = FSceneView::IsInstancedStereoPass((FSceneView *)param_2);
  if (bVar14) {
    if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
      uVar37 = *(ulonglong *)&(param_2->ViewRectWithSecondaryViews).field0_0x0;
      uVar29 = *(undefined8 *)((longlong)&(param_2->ViewRectWithSecondaryViews).field0_0x0 + 8);
      local_6e8 = param_5;
      iVar15 = (int)((longlong)
                     ((ulonglong)(uint)((int)uVar37 >> 0x1f) << 0x20 | uVar37 & 0xffffffff) /
                    (longlong)(int)param_5);
      local_678._4_4_ = (int)(uVar37 >> 0x20);
      uStack_6e4 = param_5;
      local_678 = CONCAT44(local_678._4_4_ / (int)param_5,iVar15);
      iVar16 = (int)((param_5 - 1) + (int)((ulonglong)uVar29 >> 0x20)) / (int)param_5;
      iVar18 = (int)((param_5 - 1) + (int)uVar29) / (int)param_5;
      if (iVar16 < 1) {
        iVar16 = 1;
      }
      uVar29 = local_678;
      if (iVar18 < 1) {
        iVar18 = 1;
      }
      goto LAB_1454961ca;
    }
    uVar37 = *(ulonglong *)&(param_2->ViewRect).field0_0x0;
    uVar29 = *(undefined8 *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
    local_6d0 = param_5;
    iVar15 = (int)((longlong)((ulonglong)(uint)((int)uVar37 >> 0x1f) << 0x20 | uVar37 & 0xffffffff)
                  / (longlong)(int)param_5);
    local_698._4_4_ = (int)(uVar37 >> 0x20);
    uStack_6cc = param_5;
    local_6f0 = param_5;
    uStack_6ec = param_5;
    local_698 = CONCAT44(local_698._4_4_ / (int)param_5,iVar15);
    iVar40 = (int)((param_5 - 1) + (int)((ulonglong)uVar29 >> 0x20)) / (int)param_5;
    iVar43 = (int)((param_5 - 1) + (int)uVar29) / (int)param_5;
    pFVar26 = FSceneView::GetInstancedSceneView((FSceneView *)local_718);
    uVar37 = *(ulonglong *)(pFVar26 + 1);
    iVar18 = (int)((longlong)((ulonglong)(uint)((int)uVar37 >> 0x1f) << 0x20 | uVar37 & 0xffffffff)
                  / (longlong)(int)param_5);
    local_6a8._4_4_ = (int)(uVar37 >> 0x20);
    iVar16 = local_6a8._4_4_ / (int)uStack_6ec;
    local_6a8 = CONCAT44(iVar16,iVar18);
    iVar36 = (int)((uStack_6ec - 1) + (int)((ulonglong)pFVar26[1].Family >> 0x20)) / (int)uStack_6ec
    ;
    iVar17 = (int)((param_5 - 1) + (int)pFVar26[1].Family) / (int)param_5;
    if (iVar36 < 1) {
      iVar36 = 1;
    }
    if (iVar40 < 1) {
      iVar40 = 1;
    }
    if (iVar17 < 1) {
      iVar17 = 1;
    }
    if (iVar43 < 1) {
      iVar43 = 1;
    }
    uVar37 = (ulonglong)local_698 >> 0x20;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar28 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x38,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar28;
      *(undefined8 **)&param_1->field_0x30 = puVar28 + 1;
      puVar28[1] = 0;
      *puVar28 = &___7FRHICommandSetStereoViewport__6B_;
      *(float *)(puVar28 + 2) = (float)iVar15;
      *(float *)((longlong)puVar28 + 0x14) = (float)iVar18;
      *(float *)(puVar28 + 3) = (float)(int)uVar37;
      *(float *)((longlong)puVar28 + 0x1c) = (float)iVar16;
      *(float *)((longlong)puVar28 + 0x24) = (float)iVar43;
      *(float *)(puVar28 + 5) = (float)iVar17;
      *(float *)((longlong)puVar28 + 0x2c) = (float)iVar40;
      *(float *)(puVar28 + 6) = (float)iVar36;
      *(undefined4 *)(puVar28 + 4) = 0;
      *(undefined4 *)((longlong)puVar28 + 0x34) = 0x3f800000;
      param_2 = local_718;
    }
    else {
      pIVar27 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar27->_padding_ + 0x1a8))(pIVar27);
      param_2 = local_718;
    }
  }
  else {
    uVar37 = *(ulonglong *)&(param_2->ViewRect).field0_0x0;
    uVar29 = *(undefined8 *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
    local_6e0 = param_5;
    iVar15 = (int)((longlong)((ulonglong)(uint)((int)uVar37 >> 0x1f) << 0x20 | uVar37 & 0xffffffff)
                  / (longlong)(int)param_5);
    local_688._4_4_ = (int)(uVar37 >> 0x20);
    uStack_6dc = param_5;
    local_688 = CONCAT44(local_688._4_4_ / (int)param_5,iVar15);
    iVar16 = (int)((param_5 - 1) + (int)((ulonglong)uVar29 >> 0x20)) / (int)param_5;
    iVar18 = (int)((param_5 - 1) + (int)uVar29) / (int)param_5;
    if (iVar16 < 1) {
      iVar16 = 1;
    }
    uVar29 = local_688;
    if (iVar18 < 1) {
      iVar18 = 1;
    }
LAB_1454961ca:
    FRHICommandList::SetViewport
              (param_1,(float)iVar15,(float)(int)((ulonglong)uVar29 >> 0x20),0.0,(float)iVar18,
               (float)iVar16,__real_3f800000);
  }
  pFVar5 = param_2->ShaderMap;
  pFVar30 = (FShaderType *)FOcclusionQueryVS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar5,&local_5d8,pFVar30,0);
  if ((FOcclusionQueryVS *)local_5d8.ShaderContent == (FOcclusionQueryVS *)0x0) {
    FVar31 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_478);
    FName::ToString((FName *)FVar31,&local_3c0);
    FOcclusionQueryVS::GetStaticType();
    bVar14 = FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FOcclusionQueryVS::GetStaticType();
  local_6c8.ShaderContent = (FOcclusionQueryVS *)local_5d8.ShaderContent;
  local_6c8.ShaderMap = local_5d8.ShaderMap;
  pFVar32 = TShaderRefBase<FOcclusionQueryVS,FShaderMapPointerTable>::GetVertexShader
                      (&local_6c8,true);
  (param_6->BoundShaderState).VertexShaderRHI = pFVar32;
  if ((*(uint *)(param_2->_padding_ + 0x5c) & 0x20000000) != 0) {
    pFVar5 = param_2->ShaderMap;
    pFVar30 = (FShaderType *)FOcclusionQueryPS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar5,local_5f8,pFVar30,0);
    if ((FRHIGraphicsShader *)local_5f8[0].ShaderContent == (FRHIGraphicsShader *)0x0) {
      FVar31 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_468);
      FName::ToString((FName *)FVar31,&local_3b0);
      FOcclusionQueryPS::GetStaticType();
      bVar14 = FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FOcclusionQueryPS::GetStaticType();
    aVar33 = (atomic<FRHIShader_*>)0x0;
    local_738 = (FRHIGraphicsShader *)local_5f8[0].ShaderContent;
    if ((FRHIGraphicsShader *)local_5f8[0].ShaderContent != (FRHIGraphicsShader *)0x0) {
      local_728 = ((local_5f8[0].ShaderMap)->Resource).Reference;
      if ((local_728 == (FShaderMapResource *)0x0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      aVar33 = (local_728->RHIShaders).Ptr[*(int *)&local_738->field_0xd4];
      if ((aVar33 == (atomic<FRHIShader_*>)0x0) &&
         (aVar33 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (local_728,*(int *)&local_738->field_0xd4,true),
         aVar33 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          local_728 = (FShaderMapResource *)CONCAT44(local_728._4_4_,*(int *)&local_738->field_0xd4)
          ;
          if (((local_5f8[0].ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("PointerTable",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x9b4,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FShader::GetType((FShader *)local_738,(local_5f8[0].ShaderMap)->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FOcclusionQueryPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar33 = (atomic<FRHIShader_*>)0x0;
      }
    }
    (param_6->BoundShaderState).PixelShaderRHI = (FRHIPixelShader *)aVar33;
    param_6->BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  SetGraphicsPipelineState(param_1,param_6,0,CheckApply,true);
  if (1 < (int)local_730) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      Desc._padding_._0_4_ = 0x50f;
      local_358 = 0;
      uStack_354 = 0;
      Desc._12_8_ = ZEXT48(uStack_35c);
      Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
      Desc._padding_._4_4_ = 0;
      Desc._padding_ = (longlong)u_ShadowFrustumQu;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
      Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      Desc.TraceGpuSpecId = 0;
      Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``BeginOcclusionTests'::__l38::<lambda_2>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&_TSS0);
    }
    local_4f8._Myfirst._Val = &Desc;
    pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar23 = FRHIBreadcrumbAllocator::
              AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                        (pFVar22,&local_4f8);
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_568,(FRHIComputeCommandList *)param_1,pFVar23);
    fVar48 = __real_3f8483ee;
    uVar11 = _UNK_150689648;
    uVar29 = ___xmm_3f800000000000000000000000000000;
    local_558 = '\x01';
    uVar44 = 0;
    if (0 < (param_3->LocalLightQueries).ArrayNum) {
      lVar42 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar44 < (param_3->LocalLightQueries).ArrayNum) {
          uVar19 = ~uVar44 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar6 = *(undefined8 *)
                 (lVar42 + (longlong)(param_3->LocalLightQueries).AllocatorInstance.Data);
        uVar19 = 0;
        if ((int)uVar44 < (param_3->LocalLightQueryInfos).ArrayNum) {
          uVar19 = ~uVar44 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar38 = *(longlong **)
                   (*(longlong *)
                     (*(longlong *)
                       ((longlong)(param_3->LocalLightQueryInfos).AllocatorInstance.Data + lVar42) +
                     0xb70) + 0x28);
        (**(code **)(*plVar38 + 0x10))(plVar38,&local_630);
        (**(code **)(GDynamicRHI->_padding_ + 0x278))(GDynamicRHI,param_1,uVar6);
        local_738 = (FRHIGraphicsShader *)
                    TShaderRefBase<FOcclusionQueryVS,FShaderMapPointerTable>::GetVertexShader
                              (&local_6c8,true);
        pFVar34 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
        local_5c8._s_0.X = (float)(local_630 + (double)param_2->_padding_);
        local_5c8._s_0.Y = (float)(local_628 + (double)param_2->_padding_);
        local_5c8._s_0.Z = (float)(local_620 + (double)param_2->_padding_);
        local_5c8._s_0.W = (float)local_618 * fVar48;
        local_5b8 = uVar29;
        uStack_5b0 = uVar11;
        if (*(char *)((longlong)&param_2->_padding_ + 6) != '\0') {
          pFVar26 = FSceneView::GetInstancedSceneView((FSceneView *)param_2);
          if (pFVar26 == (FSceneView *)0x0) {
            local_5b8 = CONCAT44(local_5c8._s_0.Y,local_5c8._s_0.X);
            uStack_5b0 = CONCAT44(local_5c8._s_0.W,local_5c8._s_0.Z);
          }
          else {
            local_5b8 = CONCAT44((float)(local_628 +
                                        (pFVar26->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y
                                        ),(float)(local_630 +
                                                 (pFVar26->ViewMatrices).PreViewTranslation.
                                                 field0_0x0._s_0.X));
            uStack_5b0 = CONCAT44((float)local_618 * fVar48,
                                  (float)(local_620 +
                                         (pFVar26->ViewMatrices).PreViewTranslation.field0_0x0._s_0.
                                         Z));
          }
        }
        FOcclusionQueryVS::SetParametersInternal
                  (local_6c8.ShaderContent,pFVar34,param_2,(TVector4<float> *)&local_5c8._s_0);
        FRHICommandList::SetBatchedShaderParameters(param_1,local_738,pFVar34);
        StencilingGeometry::DrawVectorSphere(param_1);
        (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,param_1,uVar6);
        uVar44 = uVar44 + 1;
        lVar42 = lVar42 + 8;
      } while ((int)uVar44 < (param_3->LocalLightQueries).ArrayNum);
      FVar39 = local_720;
      FVar41.GPUMask = local_73c;
      if (local_558 == '\0') goto LAB_1454968d7;
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_568);
  }
LAB_1454968d7:
  iVar15 = (param_3->CSMQueries).ArrayNum * 6 +
           ((param_3->ReflectionQueries).ArrayNum + (param_3->ShadowQueries).ArrayNum) * 8;
  local_738 = (FRHIGraphicsShader *)CONCAT44(local_738._4_4_,iVar15);
  if (iVar15 != 0) {
    local_668 = iVar15 * 0xc;
    iStack_65c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_664 = 0;
    local_658 = L"ViewOcclusionTests";
    bVar4 = param_1->field_0x6a;
    uStack_660 = 0x4004;
    uStack_650 = 0;
    uStack_640 = 0;
    local_648 = 8;
    uStack_644 = 3;
    local_638 = 0;
    local_748 = 0;
    local_3a0 = (ulonglong)local_668;
    uStack_398 = CONCAT44(iStack_65c,0x4004);
    local_380 = 0x300000008;
    local_390 = L"ViewOcclusionTests";
    uStack_388 = 0;
    local_370 = 0;
    uStack_378 = 0;
    if (((bVar4 != 0) && ((bVar4 & bVar4 - 1) != 0)) &&
       (bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x2a5,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (param_1->field_0x6a == '\0') {
      FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_118,param_1);
      FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_118,param_1);
    }
    FRHIBufferInitializer::FRHIBufferInitializer
              ((FRHIBufferInitializer *)local_168,(FRHIBufferInitializer *)local_118);
    if ((local_e8 != (FRHICommandListBase *)0x0) && (local_e0 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_118);
    }
    if (local_118._0_8_ != 0) {
      plVar38 = (longlong *)(local_118 + 0x10);
      if ((longlong *)local_118._40_8_ != (longlong *)0x0) {
        plVar38 = (longlong *)local_118._40_8_;
      }
      (**(code **)(*plVar38 + 0x10))();
    }
    ppFVar45 = (param_3->CSMQueryInfos).AllocatorInstance.Data;
    iVar15 = (param_3->CSMQueryInfos).ArrayNum;
    ppFVar1 = ppFVar45 + iVar15;
    while( true ) {
      if ((param_3->CSMQueryInfos).ArrayNum != iVar15) {
        local_744 = 0;
        `TCheckedPointerIterator<FProjectedShadowInfo_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_744);
      }
      if (ppFVar45 == ppFVar1) break;
      PrepareDirectionalLightShadowOcclusionQuery
                (&local_748,(TRHIBufferInitializer<UE::Math::TVector<float>_> *)local_168,param_2,
                 *ppFVar45);
      ppFVar45 = ppFVar45 + 1;
    }
    ppFVar45 = (param_3->ShadowQueryInfos).AllocatorInstance.Data;
    iVar15 = (param_3->ShadowQueryInfos).ArrayNum;
    ppFVar1 = ppFVar45 + iVar15;
    while( true ) {
      if ((param_3->ShadowQueryInfos).ArrayNum != iVar15) {
        local_743 = 0;
        `TCheckedPointerIterator<FProjectedShadowInfo_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_743);
      }
      param_1 = (FRHICommandList *)local_700;
      if (ppFVar45 == ppFVar1) break;
      PrepareProjectedShadowOcclusionQuery
                (&local_748,(TRHIBufferInitializer<UE::Math::TVector<float>_> *)local_168,param_2,
                 *ppFVar45);
      ppFVar45 = ppFVar45 + 1;
    }
    ppFVar46 = (param_3->ReflectionQueryInfos).AllocatorInstance.Data;
    iVar15 = (param_3->ReflectionQueryInfos).ArrayNum;
    local_748 = local_748 + 2;
    ppFVar2 = ppFVar46 + iVar15;
    while( true ) {
      if ((param_3->ReflectionQueryInfos).ArrayNum != iVar15) {
        local_742 = 0;
        `TCheckedPointerIterator<FPlanarReflectionSceneProxy_const_*_const,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_742);
      }
      if (ppFVar46 == ppFVar2) break;
      pFVar7 = *ppFVar46;
      fVar49 = (float)((double)param_2->_padding_ + (pFVar7->WorldBounds).Min.field0_0x0._s_0.X);
      fVar50 = (float)((double)param_2->_padding_ + (pFVar7->WorldBounds).Min.field0_0x0._s_0.Y);
      local_594 = (float)((double)param_2->_padding_ + (pFVar7->WorldBounds).Min.field0_0x0._s_0.Z);
      fVar51 = (float)((double)param_2->_padding_ + (pFVar7->WorldBounds).Max.field0_0x0._s_0.X);
      fVar48 = (float)((double)param_2->_padding_ + (pFVar7->WorldBounds).Max.field0_0x0._s_0.Y);
      local_5a0 = (float)((double)param_2->_padding_ + (pFVar7->WorldBounds).Max.field0_0x0._s_0.Z);
      *(ulonglong *)((longlong)local_128 + (ulonglong)(local_748 - 2) * 0xc) =
           CONCAT44(fVar50,fVar49);
      *(float *)((longlong)local_128 + (ulonglong)(local_748 - 2) * 0xc + 8) = local_594;
      local_578 = CONCAT44(fVar50,fVar49);
      local_520 = CONCAT44(fVar50,fVar49);
      *(ulonglong *)((longlong)local_128 + (ulonglong)(local_748 - 1) * 0xc) =
           CONCAT44(fVar50,fVar49);
      *(float *)((longlong)local_128 + (ulonglong)(local_748 - 1) * 0xc + 8) = local_5a0;
      local_584 = CONCAT44(fVar48,fVar49);
      *(ulonglong *)((longlong)local_128 + (ulonglong)local_748 * 0xc) = CONCAT44(fVar48,fVar49);
      *(float *)((longlong)local_128 + (ulonglong)local_748 * 0xc + 8) = local_594;
      local_514 = CONCAT44(fVar48,fVar49);
      *(ulonglong *)((longlong)local_128 + (ulonglong)(local_748 + 1) * 0xc) =
           CONCAT44(fVar48,fVar49);
      *(float *)((longlong)local_128 + (ulonglong)(local_748 + 1) * 0xc + 8) = local_5a0;
      local_508 = CONCAT44(fVar50,fVar51);
      *(ulonglong *)((longlong)local_128 + (ulonglong)(local_748 + 2) * 0xc) =
           CONCAT44(fVar50,fVar51);
      *(float *)((longlong)local_128 + (ulonglong)(local_748 + 2) * 0xc + 8) = local_594;
      local_5a8 = CONCAT44(fVar50,fVar51);
      *(ulonglong *)((longlong)local_128 + (ulonglong)(local_748 + 3) * 0xc) =
           CONCAT44(fVar50,fVar51);
      *(float *)((longlong)local_128 + (ulonglong)(local_748 + 3) * 0xc + 8) = local_5a0;
      local_59c = CONCAT44(fVar48,fVar51);
      *(ulonglong *)((longlong)local_128 + (ulonglong)(local_748 + 4) * 0xc) =
           CONCAT44(fVar48,fVar51);
      *(float *)((longlong)local_128 + (ulonglong)(local_748 + 4) * 0xc + 8) = local_594;
      uVar44 = local_748 + 5;
      local_748 = local_748 + 8;
      local_590 = CONCAT44(fVar48,fVar51);
      ppFVar46 = ppFVar46 + 1;
      *(ulonglong *)((longlong)local_128 + (ulonglong)uVar44 * 0xc) = CONCAT44(fVar48,fVar51);
      *(float *)((longlong)local_128 + (ulonglong)uVar44 * 0xc + 8) = local_5a0;
      local_588 = local_5a0;
      local_57c = local_594;
      local_570 = local_594;
      local_518 = local_5a0;
      local_50c = local_5a0;
      local_500 = local_594;
    }
    FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_168);
    local_6f8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(local_6f8 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      Desc._padding_._0_4_ = 0x53d;
      local_338 = 0;
      uStack_334 = 0;
      Desc._12_8_ = ZEXT48(uStack_33c);
      Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
      Desc._padding_._4_4_ = 0;
      Desc._padding_ = (longlong)u_ShadowFrustumQu;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
      Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      Desc.TraceGpuSpecId = 0;
      Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``BeginOcclusionTests'::__l65::<lambda_3>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&_TSS0);
    }
    local_4e8._Myfirst._Val = &Desc;
    pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar23 = FRHIBreadcrumbAllocator::
              AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                        (pFVar22,&local_4e8);
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_460,(FRHIComputeCommandList *)param_1,pFVar23);
    local_450 = 1;
    SetShaderParametersLegacyVS<FRHICommandList,FOcclusionQueryVS,FViewInfo_&>
              (param_1,&local_6c8,param_2);
    FRHICommandList::SetStreamSource(param_1,0,local_710,0);
    iVar15 = (param_3->CSMQueries).ArrayNum;
    uVar37 = (ulonglong)iVar15;
    ppFVar47 = (param_3->CSMQueries).AllocatorInstance.Data;
    local_728 = (FShaderMapResource *)CONCAT44(local_728._4_4_,iVar15);
    local_748 = 0;
    ppFVar3 = ppFVar47 + uVar37;
    while( true ) {
      uVar44 = local_748;
      if ((param_3->CSMQueries).ArrayNum != (int)uVar37) {
        local_741 = 0;
        `TCheckedPointerIterator<FRHIRenderQuery_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_741);
      }
      uVar19 = local_748;
      if (ppFVar47 == ppFVar3) break;
      local_700 = (FRHICommandListBase *)*ppFVar47;
      (**(code **)(GDynamicRHI->_padding_ + 0x278))(GDynamicRHI,param_1,local_700);
      if ((GRHICommandList.bLatchedBypass == false) ||
         ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
        pFVar35 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
        ((FRHICommandListBase *)param_1)->NumCommands =
             ((FRHICommandListBase *)param_1)->NumCommands + 1;
        *((FRHICommandListBase *)param_1)->CommandLink = pFVar35;
        ((FRHICommandListBase *)param_1)->CommandLink = &pFVar35->Next;
        pFVar35->Next = (FRHICommandBase *)0x0;
        pFVar35->_padding_ = (longlong)&___7FRHICommandDrawPrimitive__6B_;
        *(uint *)&pFVar35[1]._padding_ = uVar19;
        *(undefined4 *)((longlong)&pFVar35[1]._padding_ + 4) = 2;
        *(undefined4 *)&pFVar35[1].Next = 1;
      }
      else {
        pIVar27 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar27->_padding_ + 0x1e0))(pIVar27,uVar19,2);
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,param_1,local_700);
      uVar37 = (ulonglong)local_728 & 0xffffffff;
      ppFVar47 = ppFVar47 + 1;
      local_748 = uVar19 + 6;
    }
    ppFVar47 = (param_3->ShadowQueries).AllocatorInstance.Data;
    iVar15 = (param_3->ShadowQueries).ArrayNum;
    ppFVar3 = ppFVar47 + iVar15;
    while( true ) {
      if ((param_3->ShadowQueries).ArrayNum != iVar15) {
        local_740 = 0;
        `TCheckedPointerIterator<FRHIRenderQuery_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_740);
      }
      if (ppFVar47 == ppFVar3) break;
      pFVar8 = *ppFVar47;
      (**(code **)(GDynamicRHI->_padding_ + 0x278))(GDynamicRHI,param_1,pFVar8);
      FRHICommandList::DrawIndexedPrimitive
                (param_1,(FRHIBuffer *)GCubeIndexBuffer._32_8_,uVar44,0,8,0,0xc,1);
      uVar44 = uVar44 + 8;
      (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,param_1,pFVar8);
      ppFVar47 = ppFVar47 + 1;
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_460);
    FVar39 = local_720;
    FVar41.GPUMask = local_73c;
    if (1 < (int)local_730) {
      if ((*(int *)(local_6f8 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        Desc._padding_._0_4_ = 0x551;
        Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
        local_318 = 0;
        uStack_314 = 0;
        Desc._12_8_ = ZEXT48(uStack_31c);
        Desc._padding_._4_4_ = 0;
        Desc._padding_ = (longlong)u_PlanarReflectio;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
        Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        Desc.TraceGpuSpecId = 0;
        Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``BeginOcclusionTests'::__l83::<lambda_4>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&_TSS0);
      }
      local_4d8._Myfirst._Val = &Desc;
      pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar23 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                          (pFVar22,&local_4d8);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_550,(FRHIComputeCommandList *)param_1,pFVar23)
      ;
      ppFVar47 = (param_3->ReflectionQueries).AllocatorInstance.Data;
      iVar15 = (param_3->ReflectionQueries).ArrayNum;
      local_540 = '\x01';
      ppFVar3 = ppFVar47 + iVar15;
      while( true ) {
        if ((param_3->ReflectionQueries).ArrayNum != iVar15) {
          local_73f[0] = 0;
          `TCheckedPointerIterator<FRHIRenderQuery_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_73f);
        }
        FVar39 = local_720;
        FVar41.GPUMask = local_73c;
        if (ppFVar47 == ppFVar3) break;
        pFVar8 = *ppFVar47;
        (**(code **)(GDynamicRHI->_padding_ + 0x278))(GDynamicRHI,param_1,pFVar8);
        FRHICommandList::DrawIndexedPrimitive
                  (param_1,(FRHIBuffer *)GCubeIndexBuffer._32_8_,uVar44,0,8,0,0xc,1);
        uVar44 = uVar44 + 8;
        local_748 = uVar44;
        (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,param_1,pFVar8);
        if (((uint)local_738 < uVar44) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("BaseVertexOffset <= NumVertices",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                                ,0x555,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        ppFVar47 = ppFVar47 + 1;
      }
      if (local_540 != '\0') {
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_550);
      }
    }
    this = local_710;
    if (((local_710 != (FRHIBuffer *)0x0) &&
        (local_710 = (FRHIBuffer *)0x0, this != (FRHIBuffer *)0x0)) &&
       (FRHIResource::Release((FRHIResource *)this), local_710 != (FRHIBuffer *)0x0)) {
      FRHIResource::Release((FRHIResource *)local_710);
    }
    if ((local_138 != (FRHICommandListBase *)0x0) && (local_130 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_168);
    }
    param_2 = local_718;
    if (local_168._0_8_ != 0) {
      plVar38 = (longlong *)(local_168 + 0x10);
      if ((longlong *)local_168._40_8_ != (longlong *)0x0) {
        plVar38 = (longlong *)local_168._40_8_;
      }
      (**(code **)(*plVar38 + 0x10))();
      param_2 = local_718;
    }
  }
  if (param_3->bFlushQueries != false) {
    SetShaderParametersLegacyVS<FRHICommandList,FOcclusionQueryVS,FViewInfo_&>
              (param_1,&local_6c8,param_2);
    lVar42 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (GOcclusionQueryDispatchOrder == 0) {
      if ((*(int *)(lVar42 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        local_2f8 = 0;
        uStack_2f4 = 0;
        Desc._12_8_ = ZEXT48(uStack_2fc);
        Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
        Desc._padding_._4_4_ = 0;
        Desc._padding_ = (longlong)u_GroupedQueries;
        Desc._padding_._0_4_ = 0x563;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
        Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        Desc.TraceGpuSpecId = 0;
        Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``BeginOcclusionTests'::__l106::<lambda_5>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&_TSS0);
      }
      local_4c8._Myfirst._Val = &Desc;
      pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar23 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                          (pFVar22,&local_4c8);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_448,(FRHIComputeCommandList *)param_1,pFVar23)
      ;
      local_438 = 1;
      FOcclusionQueryBatcher::Flush(&param_2->GroupedOcclusionQueries,param_1);
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_448);
      if ((*(int *)(lVar42 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        local_2d8 = 0;
        uStack_2d4 = 0;
        Desc._12_8_ = ZEXT48(uStack_2dc);
        Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
        Desc._padding_._4_4_ = 0;
        Desc._padding_._0_4_ = 0x567;
        Desc._padding_ = (longlong)u_IndividualQueri;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
        Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        Desc.TraceGpuSpecId = 0;
        Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``BeginOcclusionTests'::__l112::<lambda_6>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&_TSS0);
      }
      local_4b8._Myfirst._Val = &Desc;
      pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar23 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                          (pFVar22,&local_4b8);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_430,(FRHIComputeCommandList *)param_1,pFVar23)
      ;
      local_420 = 1;
      FOcclusionQueryBatcher::Flush(&param_2->IndividualOcclusionQueries,param_1);
      this_00 = &local_430;
    }
    else {
      if ((*(int *)(lVar42 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        local_2b8 = 0;
        uStack_2b4 = 0;
        Desc._12_8_ = ZEXT48(uStack_2bc);
        Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
        Desc._padding_._4_4_ = 0;
        Desc._padding_._0_4_ = 0x56e;
        Desc._padding_ = (longlong)u_IndividualQueri;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
        Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        Desc.TraceGpuSpecId = 0;
        Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``BeginOcclusionTests'::__l120::<lambda_7>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&_TSS0);
      }
      local_4a8._Myfirst._Val = &Desc;
      pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar23 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                          (pFVar22,&local_4a8);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_418,(FRHIComputeCommandList *)param_1,pFVar23)
      ;
      local_408 = 1;
      FOcclusionQueryBatcher::Flush(&param_2->IndividualOcclusionQueries,param_1);
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_418);
      if ((*(int *)(lVar42 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        local_298 = 0;
        uStack_294 = 0;
        Desc._12_8_ = ZEXT48(uStack_29c);
        Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
        Desc._padding_._4_4_ = 0;
        Desc._padding_ = (longlong)u_GroupedQueries;
        Desc._padding_._0_4_ = 0x572;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
        Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        Desc.TraceGpuSpecId = 0;
        Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``BeginOcclusionTests'::__l126::<lambda_8>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&_TSS0);
      }
      local_498._Myfirst._Val = &Desc;
      pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar23 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                          (pFVar22,&local_498);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_400,(FRHIComputeCommandList *)param_1,pFVar23)
      ;
      local_3f0 = 1;
      FOcclusionQueryBatcher::Flush(&param_2->GroupedOcclusionQueries,param_1);
      this_00 = &local_400;
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(this_00);
    if (((local_730 == ES3_1) && (param_2->ViewState != (FSceneViewState *)0x0)) &&
       ((int)(param_2->ViewState->OcclusionFeedback)._padding_ != -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        Desc._padding_._0_4_ = 0x57a;
        Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
        Desc._padding_ = (longlong)u_IndividualQueri;
        local_278 = 0;
        uStack_274 = 0;
        Desc._12_8_ = ZEXT48(uStack_27c);
        Desc._padding_._4_4_ = 0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
        Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        Desc.TraceGpuSpecId = 0;
        Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``BeginOcclusionTests'[::G]::<lambda_9>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&_TSS0);
      }
      local_488._Myfirst._Val = &Desc;
      pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar23 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                          (pFVar22,&local_488);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_3e8,(FRHIComputeCommandList *)param_1,pFVar23)
      ;
      local_3d8 = 1;
      FOcclusionFeedback::SubmitOcclusionDraws
                (&param_2->ViewState->OcclusionFeedback,param_1,param_2);
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_3e8);
    }
  }
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar41);
  if (local_528 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_538);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar39,CycleScopeEnd);
  }
  return;
}

// BeginOcclusionTests @ 1454978f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
BeginOcclusionTests(FRHICommandList *param_1,TArrayView<FViewInfo,int> *param_2,Type param_3,
                   TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *param_4,uint param_5)

{
  int iVar1;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  FRHICommandList *this;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_BeginOcclusionTestsTime> FVar11;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar14;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FViewInfo *pFVar18;
  longlong lVar19;
  undefined1 auStackY_268 [32];
  uint local_200;
  uint uStack_1fc;
  FColor_u_0 local_1f8;
  Type local_1f4;
  FName local_1f0;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_1e8;
  FName local_1e0;
  FName local_1d8;
  FRHICommandList *local_1c8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22,int>_const_*,std::tuple<int_&>_>
  local_1c0;
  FRHIBreadcrumbScope local_1b0;
  undefined1 local_1a0;
  FRHIBreadcrumbScope local_198;
  char local_188;
  FName local_180;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_178;
  uint uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1f4 = param_3;
  local_1e8 = param_4;
  local_1c8 = param_1;
  if (((param_1->field_0x29b & 2) == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("RHICmdList.IsInsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                         ,0x587,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = param_2->ArrayNum;
  if ((param_4->ArrayNum != iVar1) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("QueriesPerView.Num() == Views.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                         ,0x588,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar11 = StatPtr_STAT_BeginOcclusionTestsTime;
  if (StatPtr_STAT_BeginOcclusionTestsTime ==
      (FThreadSafeStaticStat<FStat_STAT_BeginOcclusionTestsTime>)0x0) {
    pFVar10 = FName::FName(&local_180,"STAT_BeginOcclusionTestsTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_BeginOcclusionTestsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginOcclusionTestsTime,*pFVar10,
                        L"BeginOcclusionTests","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar6 = false;
  bVar4 = false;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  bVar5 = false;
  bVar7 = false;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar9 == 0)) {
LAB_145497adb:
    bVar4 = bVar7;
    bVar6 = bVar5;
    bVar5 = false;
    local_1e0 = local_1d8;
    FVar17 = local_1d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar4 = true;
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f0.ComparisonIndex.Value = FVar16.Value;
        local_1f0.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                   ,0x58a);
        bVar6 = true;
        bVar4 = true;
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145497adb;
    local_200 = FVar16.Value;
    uStack_1fc = uVar9;
    local_1e0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    local_158 = 0;
    uStack_154 = 0;
    Desc._12_8_ = ZEXT48(uStack_15c);
    Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
    Desc._padding_._4_4_ = 0;
    Desc._padding_ = (longlong)u_BeginOcclusionT;
    Desc._padding_._0_4_ = 0x58b;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
    Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    Desc.TraceGpuSpecId = 0;
    Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``BeginOcclusionTests'::__l21::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&_TSS0);
  }
  local_178._Myfirst._Val = &Desc;
  pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar13 = FRHIBreadcrumbAllocator::
            AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                      (pFVar12,&local_178);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_198,(FRHIComputeCommandList *)param_1,pFVar13);
  local_188 = '\x01';
  local_128.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_128.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_128.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_128.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_128.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_128.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_128.BlendState = (FRHIBlendState *)0x0;
  local_128.RasterizerState = (FRHIRasterizerState *)0x0;
  local_128.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_128.RenderTargetFlags.Elements[0] = None;
  local_128.RenderTargetFlags.Elements[1] = None;
  local_128.RenderTargetFlags.Elements[2] = None;
  local_128.RenderTargetFlags.Elements[3] = None;
  local_128.RenderTargetFlags.Elements[4] = None;
  local_128.RenderTargetFlags.Elements[5] = None;
  local_128.RenderTargetFlags.Elements[6] = None;
  local_128.RenderTargetFlags.Elements[7] = None;
  local_128.RenderTargetsEnabled = 0;
  local_128.RenderTargetFormats.Elements[0] = '\0';
  local_128.RenderTargetFormats.Elements[1] = '\0';
  local_128.RenderTargetFormats.Elements[2] = '\0';
  local_128.RenderTargetFormats.Elements[3] = '\0';
  local_128.RenderTargetFormats.Elements[4] = '\0';
  local_128.RenderTargetFormats.Elements[5] = '\0';
  local_128.RenderTargetFormats.Elements[6] = '\0';
  local_128.RenderTargetFormats.Elements[7] = '\0';
  local_128.DepthStencilTargetFormat = PF_Unknown;
  local_128.DepthStencilTargetFlag = None;
  local_128.DepthTargetLoadAction = ENoAction;
  local_128.DepthTargetStoreAction = ENoAction;
  local_128.StencilTargetLoadAction = ENoAction;
  local_128.StencilTargetStoreAction = ENoAction;
  local_128.DepthStencilAccess.Value = DepthNop;
  local_128.NumSamples = 0;
  local_128.SubpassHint = None;
  local_128.SubpassIndex = '\0';
  local_128.ConservativeRasterization = Disabled;
  local_128.bDepthBounds = false;
  local_128.MultiViewCount = '\0';
  local_128.bHasFragmentDensityAttachment = false;
  local_128.bAllowVariableRateShading = true;
  local_128.ShadingRate = VRSSR_1x1;
  local_128.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_128.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_1,&local_128);
  local_128.BlendState =
       TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.PrimitiveType = PT_TriangleList;
  pTVar14 = GetVertexDeclarationFVector3();
  this = local_1c8;
  local_200 = 0;
  local_128.BoundShaderState.VertexDeclarationRHI = pTVar14->Reference;
  if (0 < iVar1) {
    do {
      uVar9 = local_200;
      uVar8 = 0;
      if ((int)local_200 < iVar1) {
        uVar8 = ~local_200 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar18 = param_2->DataPtr + (int)uVar9;
      if ((*(char *)((longlong)&pFVar18->_padding_ + 7) == '\0') || ((int)pFVar18->_padding_ != 2))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
          local_138 = 0;
          uStack_134 = 0;
          Desc._12_8_ = ZEXT48(uStack_13c);
          Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
          Desc._padding_._4_4_ = 0;
          Desc._padding_ = (longlong)u_ViewOcclusionTe;
          Desc._padding_._0_4_ = 0x59e;
          Desc._padding_ = (longlong)u_ViewOcclusionTe;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
          Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          Desc.TraceGpuSpecId = 0;
          Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(``BeginOcclusionTests'::__l31::<lambda_2>::operator()<int_&>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&_TSS0);
        }
        local_1c0._padding_ = (longlong)&local_200;
        local_1c0._Myfirst._Val = &Desc;
        pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)this);
        pFVar13 = FRHIBreadcrumbAllocator::
                  AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22,int>,int_&>
                            (pFVar12,&local_1c0);
        FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_1b0,(FRHIComputeCommandList *)this,pFVar13);
        lVar19 = (longlong)(int)local_200;
        local_1a0 = 1;
        uVar9 = 0;
        if ((int)local_200 < local_1e8->ArrayNum) {
          uVar9 = ~local_200 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(local_1e8->AllocatorInstance).SecondaryData.Data;
        pTVar15 = local_1e8;
        if (pTVar2 != (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar15 = pTVar2;
        }
        BeginOcclusionTests(this,pFVar18,
                            (FViewOcclusionQueries *)
                            ((pTVar15->AllocatorInstance).InlineData + lVar19 * 0x88),local_1f4,
                            param_5,&local_128);
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1b0);
      }
      local_200 = local_200 + 1;
    } while ((int)local_200 < iVar1);
    FVar17 = local_1e0;
    if (local_188 == '\0') goto LAB_145497f0c;
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_198);
LAB_145497f0c:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// BuildOrthoMatrix @ 1454982a0

void __cdecl
BuildOrthoMatrix(TIntPoint<int> param_1,float param_2,int param_3,int param_4,int param_5,
                TMatrix<double> *param_6)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = param_2 * __real_3f000000;
  fVar10 = ((float)param_1.field0_0x0._4_4_ * fVar11) / (float)param_1.field0_0x0._0_4_;
  if (param_3 == -1) {
    dVar5 = __real_3ff0000000000000;
    if (fVar10 != 0.0) {
      dVar5 = __real_3ff0000000000000 / (double)fVar10;
    }
    dVar4 = __real_3ff0000000000000;
    if (fVar11 != 0.0) {
      dVar4 = __real_3ff0000000000000 / (double)fVar11;
    }
    param_6->M[0][0] = dVar4;
    param_6->M[0][1] = 0.0;
    param_6->M[0][2] = 0.0;
    param_6->M[0][3] = 0.0;
    param_6->M[1][0] = 0.0;
    param_6->M[1][1] = dVar5;
    param_6->M[1][2] = 0.0;
    param_6->M[1][3] = 0.0;
    param_6->M[2][0] = 0.0;
    param_6->M[2][1] = 0.0;
    param_6->M[2][2] = -3.814697265625e-06;
    param_6->M[2][3] = 0.0;
    param_6->M[3][0] = 0.0;
    param_6->M[3][1] = 0.0;
    param_6->M[3][2] = 1.0;
    param_6->M[3][3] = 1.0;
  }
  else {
    if ((param_4 == 0) || (param_5 == 0)) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InNumXTiles != 0 && InNumYTiles != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                         ,0x21b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_4 == 0) || (param_5 == 0)) {
        param_6->M[0][0] = 0.0;
        param_6->M[0][1] = 0.0;
        param_6->M[0][2] = 0.0;
        param_6->M[0][3] = 0.0;
        param_6->M[1][0] = 0.0;
        param_6->M[1][1] = 0.0;
        param_6->M[1][2] = 0.0;
        param_6->M[1][3] = 0.0;
        param_6->M[2][0] = 0.0;
        param_6->M[2][1] = 0.0;
        param_6->M[2][2] = 0.0;
        param_6->M[2][3] = 0.0;
        param_6->M[3][0] = 0.0;
        param_6->M[3][1] = 0.0;
        param_6->M[3][2] = 0.0;
        param_6->M[3][3] = 0.0;
        return;
      }
    }
    fVar6 = (float)(param_3 / param_4) * param_2 * (__real_3f800000 / (float)param_5);
    fVar7 = (__real_3f800000 / (float)param_4) * param_2;
    fVar8 = (__real_3f800000 / (float)param_5) * param_2;
    fVar11 = (float)(param_3 % param_4) * param_2 * (__real_3f800000 / (float)param_4) - fVar11;
    fVar3 = __real_3f800000 / fVar7;
    fVar9 = __real_3f800000 / fVar8;
    param_6->M[0][0] = (double)(fVar3 + fVar3);
    param_6->M[0][1] = 0.0;
    param_6->M[0][2] = 0.0;
    param_6->M[0][3] = 0.0;
    param_6->M[1][0] = 0.0;
    param_6->M[1][1] = (double)(fVar9 + fVar9);
    param_6->M[1][2] = 0.0;
    param_6->M[1][3] = 0.0;
    param_6->M[2][0] = 0.0;
    param_6->M[2][1] = 0.0;
    param_6->M[2][2] = -3.814697265625e-06;
    param_6->M[2][3] = 0.0;
    param_6->M[3][0] =
         (double)(float)((uint)((fVar7 + fVar11 + fVar11) * fVar3) ^
                        __xmm_80000000800000008000000080000000);
    param_6->M[3][1] = (double)(((fVar8 - (fVar10 - fVar6)) + (fVar6 - fVar10)) * fVar9);
    param_6->M[3][2] = 1.0;
    param_6->M[3][3] = 1.0;
  }
  return;
}

// BuildProjectionMatrix @ 145498540

void __cdecl
BuildProjectionMatrix(TIntPoint<int> param_1,float param_2,float param_3,TMatrix<double> *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  TReversedZPerspectiveMatrix<double> *pTVar3;
  TReversedZPerspectiveMatrix<double> local_88;
  
  dVar2 = (double)param_3;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  pTVar3 = UE::Math::TReversedZPerspectiveMatrix<double>::TReversedZPerspectiveMatrix<double>
                     (&local_88,(double)param_2,(double)param_2,__real_3ff0000000000000,
                      (double)((float)param_1.field0_0x0._0_4_ / (float)param_1.field0_0x0._4_4_),
                      dVar2,auVar1._8_8_);
  dVar2 = *(double *)&pTVar3->field_0x8;
  param_4->M[0][0] = *(double *)pTVar3;
  param_4->M[0][1] = dVar2;
  dVar2 = *(double *)&pTVar3->field_0x18;
  param_4->M[0][2] = *(double *)&pTVar3->field_0x10;
  param_4->M[0][3] = dVar2;
  dVar2 = *(double *)&pTVar3->field_0x28;
  param_4->M[1][0] = *(double *)&pTVar3->field_0x20;
  param_4->M[1][1] = dVar2;
  dVar2 = *(double *)&pTVar3->field_0x38;
  param_4->M[1][2] = *(double *)&pTVar3->field_0x30;
  param_4->M[1][3] = dVar2;
  dVar2 = *(double *)&pTVar3->field_0x48;
  param_4->M[2][0] = *(double *)&pTVar3->field_0x40;
  param_4->M[2][1] = dVar2;
  dVar2 = *(double *)&pTVar3->field_0x58;
  param_4->M[2][2] = *(double *)&pTVar3->field_0x50;
  param_4->M[2][3] = dVar2;
  dVar2 = *(double *)&pTVar3->field_0x68;
  param_4->M[3][0] = *(double *)&pTVar3->field_0x60;
  param_4->M[3][1] = dVar2;
  dVar2 = *(double *)&pTVar3->field_0x78;
  param_4->M[3][2] = *(double *)&pTVar3->field_0x70;
  param_4->M[3][3] = dVar2;
  return;
}

// BuildProjectionMatrixMaintainYFOV @ 1454985f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
BuildProjectionMatrixMaintainYFOV
          (TIntPoint<int> param_1,Type param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,TMatrix<double> *param_8)

{
  double dVar1;
  TReversedZPerspectiveMatrix<double> *pTVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined1 auStackY_1f8 [32];
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TReversedZPerspectiveMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1b8.M[2][0] = 0.0;
  local_1b8.M[2][1] = 0.0;
  local_1b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[0][1] = _UNK_150689518;
  local_1b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1b8.M[1][1] = _UNK_15061cbc8;
  local_1b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[2][3] = _UNK_150689518;
  local_1b8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1b8.M[3][3] = _UNK_15061cbc8;
  local_1b8.M[3][1] = (double)param_7;
  fVar5 = (float)param_1.field0_0x0._0_4_ / (float)param_1.field0_0x0._4_4_;
  local_1b8.M[0][2] = 0.0;
  local_1b8.M[0][3] = 0.0;
  local_1b8.M[1][2] = 0.0;
  local_1b8.M[1][3] = 0.0;
  local_1b8.M[3][0] = (double)param_6;
  if (param_2 == Orthographic) {
    dVar4 = (double)((param_4 * __real_3f000000) / fVar5);
    dVar3 = (double)(param_4 * __real_3f000000);
    dVar1 = __real_3ff0000000000000;
    if (dVar4 != 0.0) {
      dVar1 = __real_3ff0000000000000 / dVar4;
    }
    dVar4 = __real_3ff0000000000000;
    if (dVar3 != 0.0) {
      dVar4 = __real_3ff0000000000000 / dVar3;
    }
    param_8->M[0][0] = dVar4;
    param_8->M[0][1] = 0.0;
    param_8->M[0][2] = 0.0;
    param_8->M[0][3] = 0.0;
    param_8->M[1][0] = 0.0;
    param_8->M[1][1] = dVar1;
    param_8->M[1][2] = 0.0;
    param_8->M[1][3] = 0.0;
    param_8->M[2][0] = 0.0;
    param_8->M[2][1] = 0.0;
    param_8->M[2][2] = -9.094947017729282e-13;
    param_8->M[2][3] = 0.0;
    param_8->M[3][0] = 0.0;
    param_8->M[3][1] = 0.0;
    param_8->M[3][2] = 1.0;
    param_8->M[3][3] = 1.0;
  }
  else {
    pTVar2 = UE::Math::TReversedZPerspectiveMatrix<double>::TReversedZPerspectiveMatrix<double>
                       (&local_b8,(double)param_3,(double)param_3,__real_3ff0000000000000,
                        (double)fVar5,(double)param_5,(double)param_5);
    VectorMatrixMultiply(&local_138,(TMatrix<double> *)pTVar2,&local_1b8);
    param_8->M[0][0] = local_138.M[0][0];
    param_8->M[0][1] = local_138.M[0][1];
    param_8->M[0][2] = local_138.M[0][2];
    param_8->M[0][3] = local_138.M[0][3];
    param_8->M[1][0] = local_138.M[1][0];
    param_8->M[1][1] = local_138.M[1][1];
    param_8->M[1][2] = local_138.M[1][2];
    param_8->M[1][3] = local_138.M[1][3];
    param_8->M[2][0] = local_138.M[2][0];
    param_8->M[2][1] = local_138.M[2][1];
    param_8->M[2][2] = local_138.M[2][2];
    param_8->M[2][3] = local_138.M[2][3];
    param_8->M[3][0] = local_138.M[3][0];
    param_8->M[3][1] = local_138.M[3][1];
    param_8->M[3][2] = local_138.M[3][2];
    param_8->M[3][3] = local_138.M[3][3];
  }
  return;
}

// CleanupSceneRenderer @ 145498fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl CleanupSceneRenderer(FSceneRenderer *param_1)

{
  FParallelMeshDrawCommandPass **ppFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FParallelMeshDrawCommandPass **ppFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId704,"CleanupSceneRenderer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
               ,0x2c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId704);
  }
  ppFVar4 = (param_1->DispatchedShadowDepthPasses).AllocatorInstance.Data;
  iVar3 = (param_1->DispatchedShadowDepthPasses).ArrayNum;
  ppFVar1 = ppFVar4 + iVar3;
  while( true ) {
    if ((param_1->DispatchedShadowDepthPasses).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FParallelMeshDrawCommandPass_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (ppFVar4 == ppFVar1) break;
    FParallelMeshDrawCommandPass::Cleanup(*ppFVar4);
    ppFVar4 = ppFVar4 + 1;
  }
  pFVar5 = (param_1->AllViews).AllocatorInstance.Data;
  iVar3 = (param_1->AllViews).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->AllViews).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FViewInfo_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar2) break;
    FViewInfo::Cleanup(*(FViewInfo **)pFVar5);
    pFVar5 = pFVar5 + 8;
  }
  FViewSnapshotCache::Destroy(&ViewSnapshotCache::Cache);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopySceneCaptureComponentToTarget @ 14549a110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014549b1b9) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
CopySceneCaptureComponentToTarget
          (FRDGBuilder *param_1,FMinimalSceneTextures *param_2,FRDGTexture *param_3,
          FRDGTexture *param_4,FSceneViewFamily *param_5,
          TArray<FViewInfo_const_*,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  FViewInfo *pFVar4;
  FGlobalShaderMap *pFVar5;
  FShaderMapResource *pFVar6;
  FStruct *pFVar7;
  FRDGTexture *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  FShader *this;
  FShaderMapBase *pFVar18;
  FShader *this_00;
  FShaderMapBase *pFVar19;
  FParameters *pFVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  Type TVar24;
  int iVar25;
  FRDGScope *this_01;
  FRHIBreadcrumbAllocator *this_02;
  FRHIBreadcrumbNode *pFVar26;
  undefined8 *puVar27;
  FShaderParametersMetadata *pFVar28;
  FSceneTextureShaderParameters *pFVar29;
  TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *pTVar30;
  FShaderType *pFVar31;
  FName FVar32;
  atomic<FRHIShader_*> aVar33;
  atomic<FRHIShader_*> aVar34;
  longlong *plVar35;
  FRDGEventName *pFVar36;
  FStaticShaderPlatform FVar37;
  EShaderPlatform EVar38;
  uint uVar39;
  longlong *plVar40;
  void *_Buf1;
  FStruct FVar41;
  void *_Buf2;
  TIntPoint<int>_u_0 TVar42;
  ulonglong uVar43;
  ERenderTargetLoadAction EVar44;
  undefined1 auStackY_4e8 [32];
  ESceneCaptureSource local_494;
  uint local_490;
  FRDGTexture *local_488;
  uint local_480;
  undefined8 *local_478;
  FSceneViewFamily *local_470;
  FRDGBuilder *local_468;
  FViewInfo *local_460;
  TArray<FViewInfo_const_*,TSizedDefaultAllocator<32>_> *local_458;
  longlong local_450;
  longlong local_448;
  FMinimalSceneTextures *local_440;
  FRenderTargetBinding local_438;
  TIntVector3<int>_u_0 local_420;
  TIntPoint<int>_u_0 local_414;
  int local_40c;
  TIntPoint<int>_u_0 local_408;
  int local_400;
  undefined8 local_3fc;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined4 local_3e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_3e0;
  char local_3d0;
  void *local_3c0 [3];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_398;
  FParameters *local_388;
  FRDGTexture *local_380;
  FRHIVertexDeclaration *local_378;
  atomic<FRHIShader_*> aStack_370;
  atomic<FRHIShader_*> local_368;
  FRHIMeshShader *pFStack_360;
  FRHIAmplificationShader *local_358;
  FRHIGeometryShader *pFStack_350;
  FRHIWorkGraphShader *local_348;
  FRHIBlendState *pFStack_340;
  FRHIRasterizerState *local_338;
  FRHIDepthStencilState *pFStack_330;
  FRHISamplerState *local_328;
  FRHISamplerState *pFStack_320;
  EPrimitiveType local_318;
  uint uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  ETextureCreateFlags local_308;
  ETextureCreateFlags EStack_300;
  ETextureCreateFlags local_2f8;
  ETextureCreateFlags EStack_2f0;
  ETextureCreateFlags local_2e8;
  ETextureCreateFlags EStack_2e0;
  ETextureCreateFlags local_2d8;
  ETextureCreateFlags EStack_2d0;
  EPixelFormat local_2c8;
  undefined7 uStack_2c7;
  ETextureCreateFlags EStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  ulong64 uStack_2a0;
  TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *local_298;
  EUniformBufferBindingFlags EStack_290;
  undefined7 uStack_28f;
  FString local_288;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,ESceneCaptureSource>_const_*,std::tuple<ESceneCaptureSource_&>_>
  local_278;
  longlong local_268;
  EUniformBufferBindingFlags EStack_260;
  undefined7 uStack_25f;
  FString local_258;
  FString local_248;
  undefined1 local_238 [20];
  uint uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  FRDGEventName local_210;
  FSceneTextureShaderParameters local_1f8;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined1 local_1a8 [240];
  FShaderMapBase *local_b8;
  FShader *local_b0;
  FShaderMapBase *local_a8;
  FViewInfo *local_a0;
  uint local_98;
  TIntPoint<int>_u_0 local_94;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_338 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource.StateRHI.Reference;
  pFStack_330 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                ::StaticResource.StateRHI.Reference;
  local_470 = param_5;
  local_458 = param_6;
  local_480 = 0;
  local_378 = (FRHIVertexDeclaration *)0x0;
  aStack_370 = (atomic<FRHIShader_*>)0x0;
  local_368 = (atomic<FRHIShader_*>)0x0;
  pFStack_360 = (FRHIMeshShader *)0x0;
  local_358 = (FRHIAmplificationShader *)0x0;
  pFStack_350 = (FRHIGeometryShader *)0x0;
  local_348 = (FRHIWorkGraphShader *)0x0;
  pFStack_340 = (FRHIBlendState *)0x0;
  local_328 = (FRHISamplerState *)0x0;
  pFStack_320 = (FRHISamplerState *)0x0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  local_308 = None;
  EStack_300 = None;
  local_2f8 = None;
  EStack_2f0 = None;
  local_2e8 = None;
  EStack_2e0 = None;
  local_2d8 = None;
  EStack_2d0 = None;
  local_2c8 = PF_Unknown;
  EStack_2c0 = None;
  local_2b8._0_1_ = ENoAction;
  local_2b8._1_1_ = ENoAction;
  local_2b8._2_1_ = ENoAction;
  local_2b8._3_1_ = ENoAction;
  local_2b8._4_4_ = DepthNop;
  uStack_2b0._0_2_ = 0;
  uStack_2b0._2_1_ = None;
  uStack_2b0._3_1_ = '\0';
  uStack_2b0._4_1_ = Disabled;
  uStack_2b0._5_1_ = false;
  uStack_2b0._6_1_ = '\0';
  uStack_2b0._7_1_ = false;
  local_2a8 = 1;
  uStack_2a0 = 0;
  local_488 = param_3;
  local_468 = param_1;
  local_440 = param_2;
  local_380 = param_4;
  TVar24 = FSceneViewFamily::GetFeatureLevel(param_5);
  FVar37.Platform = SP_NumPlatforms;
  if (TVar24 != Num) {
    FVar37.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar24];
  }
  bVar21 = IsForwardShadingEnabled(FVar37);
  local_448 = (longlong)param_6->ArrayNum;
  local_490 = 0;
  if (0 < local_448) {
    local_450 = 0;
    do {
      lVar13 = local_450;
      uVar39 = 0;
      if ((int)local_490 < param_6->ArrayNum) {
        uVar39 = ~local_490 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = *(FViewInfo **)((param_6->AllocatorInstance).Data + lVar13 * 8);
      local_460 = pFVar4;
      if ((FCustomRenderPassBase *)pFVar4->_padding_ == (FCustomRenderPassBase *)0x0) {
        local_494 = param_5->SceneCaptureSource;
      }
      else {
        local_494 = FCustomRenderPassBase::GetSceneCaptureSource
                              ((FCustomRenderPassBase *)pFVar4->_padding_);
      }
      if ((bVar21) && (local_494 - SCS_Normal < 2)) {
        local_494 = SCS_SceneColorHDR;
LAB_14549a313:
        cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
        local_3d0 = '\0';
        if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
            local_220 = 0;
            uStack_21c = 0;
            Desc._12_8_ = ZEXT48(uStack_224);
            Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
            Desc._padding_._4_4_ = 0;
            Desc._padding_._0_4_ = 0x10c;
            Desc._padding_ = (longlong)u_CaptureSceneCom;
            Desc._padding_ = (longlong)u_CaptureSceneCom;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
            Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            Desc.TraceGpuSpecId = 0;
            Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```CopySceneCaptureComponentToTarget'::__l15::Desc::
                   operator()<enum_ESceneCaptureSource_&>'::__l3::<lambda_1>::
                   operator()<enum_ESceneCaptureSource_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&_TSS0);
          }
          local_278._padding_ = (longlong)&local_494;
          local_278._Myfirst._Val = &Desc;
          local_3e0.State = (FRDGScopeState *)param_1;
          this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)this_01;
          uVar43 = (ulonglong)(this_01->Impl).Impl.TypeIndex;
          local_3e0.Scope = this_01;
          if ((3 < uVar43) &&
             (bVar22 = FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar43])(&this_01->Impl);
          this_02 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pFVar26 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,enum_ESceneCaptureSource>,enum_ESceneCaptureSource_&>
                              (this_02,&local_278);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&this_01->Impl,(FRDGScopeState *)param_1,pFVar26);
          (this_01->Impl).Impl.TypeIndex = '\x02';
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
          }
          local_3d0 = '\x01';
          param_5 = local_470;
          param_3 = local_488;
        }
        if (local_494 == SCS_SceneColorHDR) {
          if (param_5->SceneCaptureCompositeMode == SCCM_Composite) {
            EVar44 = ELoad;
            pFStack_340 = TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                          ::StaticResource.StateRHI.Reference;
          }
          else {
            if (param_5->SceneCaptureCompositeMode != SCCM_Additive) goto LAB_14549a470;
            EVar44 = ELoad;
            pFStack_340 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                          ::StaticResource.StateRHI.Reference;
          }
        }
        else {
LAB_14549a470:
          EVar44 = ENoAction;
          pFStack_340 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                        ::StaticResource.StateRHI.Reference;
        }
        bVar22 = PlatformRequires128bitRT((param_3->Desc).field_0x33);
        TVar24 = FSceneViewFamily::GetFeatureLevel(param_5);
        if (TVar24 == Num) {
          EVar38 = SP_NumPlatforms;
        }
        else {
          EVar38 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar24];
        }
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar38].bContainsValidPlatformInfo == 0) &&
           (bVar23 = FDebug::CheckVerifyFailedImpl2
                               ("IsValid(Platform)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                ,0xe2,L""), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar39 = 7;
        TVar24 = FGenericDataDrivenShaderPlatformInfo::Infos[EVar38].MaxFeatureLevel;
        switch(local_494) {
        case SCS_SceneColorHDR:
          uVar39 = 0;
          break;
        case SCS_SceneColorHDRNoAlpha:
          uVar39 = 1;
          break;
        default:
          bVar23 = FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                              ,0x9e,L"SceneCaptureSource not implemented.");
          if (bVar23) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          break;
        case SCS_SceneColorSceneDepth:
          uVar39 = 2;
          break;
        case SCS_SceneDepth:
          uVar39 = 3;
          break;
        case SCS_DeviceDepth:
          uVar39 = 4;
          break;
        case SCS_Normal:
          uVar39 = 5;
          break;
        case SCS_BaseColor:
          uVar39 = 6;
        }
        if ((TVar24 == ES3_1) && (uVar39 - 5 < 2)) {
          uVar39 = 0;
        }
        puVar27 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x150,0x10);
        if (puVar27 == (undefined8 *)0x0) {
          puVar27 = (undefined8 *)0x0;
          bVar23 = FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar23) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar27 + 3) = 1;
          *puVar27 = &___7__TObject_VFParameters_FSceneCapturePS___FRDGAllocator__6B_;
          *(undefined1 *)(puVar27 + 5) = 1;
          puVar27[2] = 0;
          puVar27[4] = 0;
          puVar27[6] = 0;
          puVar27[8] = 0;
          *(undefined1 *)(puVar27 + 7) = 1;
          *(undefined1 *)(puVar27 + 9) = 1;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar27 + 10));
        }
        local_478 = puVar27;
        if ((((undefined8 **)param_1->_padding_ <= &local_478) &&
            (&local_478 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar23 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar25 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar25 == *piVar1) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        *(int *)&param_1->_padding_ = iVar25 + 1;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar25 * 8) = local_478;
        local_388 = (FParameters *)(puVar27 + 2);
        pFVar28 = FViewUniformShaderParameters::GetStructMetadata();
        local_268 = pFVar4->_padding_;
        EStack_260 = Static;
        if (pFVar28->BindingFlags != StaticAndShader) {
          EStack_260 = pFVar28->BindingFlags;
        }
        *(longlong *)&((FParameters *)(puVar27 + 2))->View = local_268;
        puVar27[3] = CONCAT71(uStack_25f,EStack_260);
        TVar24 = FSceneViewFamily::GetFeatureLevel(local_470);
        pFVar29 = FMinimalSceneTextures::GetSceneTextureShaderParameters
                            (local_440,&local_1f8,TVar24);
        uVar10 = *(undefined8 *)&(pFVar29->SceneTextures).field_0x8;
        uVar11 = *(undefined8 *)&pFVar29->MobileSceneTextures;
        uVar12 = *(undefined8 *)&(pFVar29->MobileSceneTextures).field_0x8;
        puVar27[4] = *(undefined8 *)&pFVar29->SceneTextures;
        puVar27[5] = uVar10;
        puVar27[6] = uVar11;
        puVar27[7] = uVar12;
        bVar23 = Substrate::IsSubstrateEnabled();
        if (bVar23) {
          pTVar30 = Substrate::CreatePublicGlobalUniformBuffer
                              (param_1,pFVar4->SubstrateViewData->SceneData);
          pFVar28 = FSubstratePublicGlobalUniformParameters::GetStructMetadata();
          EStack_290 = Static;
          if (pFVar28->BindingFlags != StaticAndShader) {
            EStack_290 = pFVar28->BindingFlags;
          }
          puVar27[8] = pTVar30;
          puVar27[9] = CONCAT71(uStack_28f,EStack_290);
          local_298 = pTVar30;
        }
        local_438.Texture = local_488;
        local_438.ArraySlice = -1;
        local_438.ResolveTexture = (FRDGTexture *)0x0;
        local_438.MipIndex = '\0';
        local_438.LoadAction = EVar44;
        bVar23 = FRenderTargetBinding::Validate(&local_438);
        if ((!bVar23) &&
           (bVar23 = FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x216,L""), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar27[10] = local_438.Texture;
        puVar27[0xb] = local_438.ResolveTexture;
        puVar27[0xc] = CONCAT44(local_438._20_4_,
                                CONCAT22(local_438.ArraySlice,
                                         CONCAT11(local_438.MipIndex,local_438.LoadAction)));
        pFVar5 = pFVar4->ShaderMap;
        pFVar31 = (FShaderType *)FScreenVS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar5,&local_3a8,pFVar31,0);
        if (local_3a8.ShaderContent == (FShader *)0x0) {
          FVar32 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_238);
          FName::ToString((FName *)FVar32,&local_258);
          FScreenVS::GetStaticType();
          bVar23 = FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          if (bVar23) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        FScreenVS::GetStaticType();
        pFVar18 = local_3a8.ShaderMap;
        this = local_3a8.ShaderContent;
        pFVar5 = local_460->ShaderMap;
        if ((6 < uVar39) &&
           (bVar23 = FDebug::CheckVerifyFailedImpl2
                               ("PermutationId < PermutationCount && PermutationId >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                                ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar23)
           ) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar31 = (FShaderType *)FSceneCapturePS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar5,&local_398,pFVar31,(uint)bVar22 * 7 + uVar39);
        if (local_398.ShaderContent == (FShader *)0x0) {
          FVar32 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3c0);
          FName::ToString((FName *)FVar32,&local_248);
          FSceneCapturePS::GetStaticType();
          bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (bVar22) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        FSceneCapturePS::GetStaticType();
        pFVar19 = local_398.ShaderMap;
        this_00 = local_398.ShaderContent;
        aVar34 = (atomic<FRHIShader_*>)0x0;
        local_378 = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
        aVar33 = aVar34;
        if (this != (FShader *)0x0) {
          pFVar6 = (pFVar18->Resource).Reference;
          if ((pFVar6 == (FShaderMapResource *)0x0) &&
             (bVar22 = FDebug::CheckVerifyFailedImpl2
                                 ("Resource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x426,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          aVar33 = (pFVar6->RHIShaders).Ptr[this->ResourceIndex];
          if ((aVar33 == (atomic<FRHIShader_*>)0x0) &&
             (aVar33 = (atomic<FRHIShader_*>)
                       FShaderMapResource::CreateShaderOrCrash(pFVar6,this->ResourceIndex,true),
             aVar33 == (atomic<FRHIShader_*>)0x0)) {
            if (4 < (byte)LogShaders._0_1_) {
              if ((pFVar18->PointerTable == (FShaderMapPointerTable *)0x0) &&
                 (bVar22 = FDebug::CheckVerifyFailedImpl2
                                     ("PointerTable",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                      ,0x9b4,L""), bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FShader::GetType(this,pFVar18->PointerTable);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)
                         &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                          ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
            }
            aVar33 = (atomic<FRHIShader_*>)0x0;
          }
        }
        aStack_370 = aVar33;
        if (this_00 != (FShader *)0x0) {
          pFVar6 = (pFVar19->Resource).Reference;
          if ((pFVar6 == (FShaderMapResource *)0x0) &&
             (bVar22 = FDebug::CheckVerifyFailedImpl2
                                 ("Resource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x426,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          aVar34 = (pFVar6->RHIShaders).Ptr[this_00->ResourceIndex];
          if ((aVar34 == (atomic<FRHIShader_*>)0x0) &&
             (aVar34 = (atomic<FRHIShader_*>)
                       FShaderMapResource::CreateShaderOrCrash(pFVar6,this_00->ResourceIndex,true),
             aVar34 == (atomic<FRHIShader_*>)0x0)) {
            if (4 < (byte)LogShaders._0_1_) {
              if ((pFVar19->PointerTable == (FShaderMapPointerTable *)0x0) &&
                 (bVar22 = FDebug::CheckVerifyFailedImpl2
                                     ("PointerTable",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                      ,0x9b4,L""), bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FShader::GetType(this_00,pFVar19->PointerTable);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)
                         &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSceneCapturePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                          ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
            }
            aVar34 = (atomic<FRHIShader_*>)0x0;
          }
        }
        pFVar4 = local_460;
        local_318 = PT_TriangleList;
        if (*(char *)(local_460->_padding_ + 0x318) == '\0') {
          if ((*(char *)((longlong)&local_460->_padding_ + 1) == '\0') || (local_448 != 6)) {
            TVar42._s_0.Y =
                 *(int *)((longlong)&local_460->_padding_ + 4) -
                 *(int *)((longlong)&local_460->_padding_ + 4);
            TVar42._s_0.X = (int)local_460->_padding_ - (int)local_460->_padding_;
          }
          else {
            TVar42 = *(TIntPoint<int>_u_0 *)&(local_488->Desc).field_0x24;
          }
        }
        else {
          iVar25 = (int)local_460->_padding_;
          iVar3 = (local_488->VisualizeTextureExtent).field0_0x0._s_0.X;
          TVar42 = *(TIntPoint<int>_u_0 *)&(local_488->Desc).field_0x24;
          if (iVar25 < iVar3) {
            iVar25 = iVar3;
          }
          iVar3 = (local_488->VisualizeTextureExtent).field0_0x0._s_0.Y;
          (local_488->VisualizeTextureExtent).field0_0x0._s_0.X = iVar25;
          iVar25 = *(int *)((longlong)&local_460->_padding_ + 4);
          if (iVar25 < iVar3) {
            iVar25 = iVar3;
          }
          (local_488->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar25;
        }
        local_1d8 = 0;
        plStack_1b0 = (longlong *)0x0;
        local_368 = aVar34;
        if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
            ::__l2::Index == 0xffffffff) {
          FRDGBlackboard::GetTypeName
                    (&local_288,L"FSceneCaptureViewportSetterMap",
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                     ,0xdd);
          `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
          ::__l2::Index = FRDGBlackboard::AllocateIndex(&local_288);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
        }
        uVar39 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
                 ::__l2::Index;
        if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
                 ::__l2::Index < (local_468->Blackboard).Blackboard.ArrayNum) {
          if (((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
                    ::__l2::Index < 0) &&
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
          pFVar7 = (local_468->Blackboard).Blackboard.AllocatorInstance.Data[(int)uVar39];
          if ((pFVar7 != (FStruct *)0x0) && (pFVar7 + 1 != (FStruct *)0x0)) {
            uVar39 = ((uint)((ulonglong)local_488 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_488 >> 4)) * -0x7a143595;
            uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
            if (*(int *)(pFVar7 + 2) != *(int *)&pFVar7[7].field_0x4) {
              FVar41 = (FStruct)(pFVar7 + 8);
              if (pFVar7[9] != (FStruct)0x0) {
                FVar41 = pFVar7[9];
              }
              iVar25 = *(int *)((longlong)FVar41 +
                               (ulonglong)(*(int *)(pFVar7 + 10) - 1U & (uVar39 >> 0x10 ^ uVar39)) *
                               4);
              if (iVar25 != -1) {
                do {
                  plVar35 = (longlong *)((longlong)iVar25 * 0x50 + (longlong)pFVar7[1]);
                  if ((FRDGTexture *)*plVar35 == local_488) goto LAB_14549acdc;
                  iVar25 = (int)plVar35[8];
                } while (iVar25 != -1);
              }
            }
            plVar35 = (longlong *)0x0;
LAB_14549acdc:
            plVar40 = plVar35 + 2;
            if (plVar35 == (longlong *)0x0) {
              plVar40 = (longlong *)0x0;
            }
            if (plVar40 != (longlong *)0x0) {
              lVar13 = *plVar40;
              lVar14 = plVar40[1];
              lVar15 = plVar40[2];
              lVar16 = plVar40[3];
              lVar17 = plVar40[4];
              plVar35 = (longlong *)plVar40[5];
              *plVar40 = local_1d8;
              plVar40[1] = lStack_1d0;
              plVar40[2] = local_1c8;
              plVar40[3] = lStack_1c0;
              plVar40[4] = local_1b8;
              plVar40[5] = (longlong)plStack_1b0;
              local_1d8 = lVar13;
              lStack_1d0 = lVar14;
              local_1c8 = lVar15;
              lStack_1c0 = lVar16;
              local_1b8 = lVar17;
              plStack_1b0 = plVar35;
            }
          }
        }
        pFVar20 = local_388;
        uVar39 = local_480;
        local_1a8._0_8_ = local_388;
        local_1a8._8_8_ = local_378;
        local_1a8._16_8_ = aStack_370;
        local_1a8._24_8_ = local_368;
        local_1a8._32_8_ = pFStack_360;
        local_1a8._40_8_ = local_358;
        local_1a8._48_8_ = pFStack_350;
        local_1a8._56_8_ = local_348;
        local_1a8._64_8_ = pFStack_340;
        local_1a8._72_8_ = local_338;
        local_1a8._80_8_ = pFStack_330;
        local_1a8._108_4_ = uStack_314;
        local_1a8._104_4_ = local_318;
        local_1a8[0x74] = (undefined1)uStack_30c;
        local_1a8[0x75] = uStack_30c._1_1_;
        local_1a8[0x76] = uStack_30c._2_1_;
        local_1a8[0x77] = uStack_30c._3_1_;
        local_1a8[0x70] = (undefined1)uStack_310;
        local_1a8[0x71] = uStack_310._1_1_;
        local_1a8[0x72] = uStack_310._2_1_;
        local_1a8[0x73] = uStack_310._3_1_;
        local_1a8._88_8_ = local_328;
        local_1a8._96_8_ = pFStack_320;
        local_1a8._120_8_ = local_308;
        local_1a8._128_8_ = EStack_300;
        local_1a8._136_8_ = local_2f8;
        local_1a8._144_8_ = EStack_2f0;
        local_1a8._152_8_ = local_2e8;
        local_1a8._160_8_ = EStack_2e0;
        local_1a8._185_7_ = uStack_2c7;
        local_1a8[0xb8] = local_2c8;
        local_1a8._168_8_ = local_2d8;
        local_1a8._176_8_ = EStack_2d0;
        local_1a8._192_8_ = EStack_2c0;
        local_1a8._220_4_ = uStack_2a4;
        local_1a8[0xd8] = (bool)(undefined1)local_2a8;
        local_1a8[0xd9] = local_2a8._1_1_;
        local_1a8._218_2_ = (FGraphicsPipelineStateInitializer_u_210)local_2a8._2_2_;
        local_1a8[200] = (ERenderTargetLoadAction)local_2b8;
        local_1a8[0xc9] = local_2b8._1_1_;
        local_1a8[0xca] = local_2b8._2_1_;
        local_1a8[0xcb] = local_2b8._3_1_;
        local_1a8._204_4_ = local_2b8._4_4_;
        local_1a8._208_2_ = (ushort)uStack_2b0;
        local_1a8[0xd2] = uStack_2b0._2_1_;
        local_1a8[0xd3] = uStack_2b0._3_1_;
        local_1a8[0xd4] = uStack_2b0._4_1_;
        local_1a8[0xd5] = uStack_2b0._5_1_;
        local_1a8[0xd6] = uStack_2b0._6_1_;
        local_1a8[0xd7] = uStack_2b0._7_1_;
        local_1a8._224_8_ = uStack_2a0;
        local_b0 = this_00;
        local_a0 = pFVar4;
        local_88 = local_1d8;
        local_60 = plStack_1b0;
        plStack_1b0 = (longlong *)0x0;
        local_1d8 = 0;
        local_1a8._232_8_ = this;
        local_b8 = pFVar18;
        local_a8 = pFVar19;
        local_98 = local_490;
        local_78 = local_1c8;
        lStack_70 = lStack_1c0;
        local_68 = local_1b8;
        local_94 = TVar42;
        pFVar36 = FRDGEventName::FRDGEventName(&local_210,L"View(%d)");
        pFVar28 = FSceneCapturePS::FParameters::FTypeInfo::GetStructMetadata();
        param_1 = local_468;
        FRDGBuilder::
        AddPassInternal<FSceneCapturePS::FParameters,_CopySceneCaptureComponentToTarget_::__l4::<lambda_2>_>
                  (local_468,pFVar36,pFVar28,pFVar20,Raster,(<lambda_2> *)local_1a8);
        if (((uVar39 & 2) != 0) && (uVar39 = uVar39 & 0xfffffffd, local_3c0[0] != (void *)0x0)) {
          FMemory::Free(local_3c0[0]);
        }
        local_480 = uVar39 & 0xfffffffe;
        if (local_210.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (local_88 != 0) {
          plVar35 = &local_78;
          if (local_60 != (longlong *)0x0) {
            plVar35 = local_60;
          }
          (**(code **)(*plVar35 + 0x10))();
        }
        if (local_1d8 != 0) {
          plVar35 = &local_1c8;
          if (plStack_1b0 != (longlong *)0x0) {
            plVar35 = plStack_1b0;
          }
          (**(code **)(*plVar35 + 0x10))();
        }
        param_5 = local_470;
        param_3 = local_488;
        param_6 = local_458;
        if (local_3d0 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_3e0);
          param_5 = local_470;
          param_3 = local_488;
          param_6 = local_458;
        }
      }
      else if ((local_494 != SCS_FinalColorLDR) && (1 < local_494 - SCS_FinalColorHDR))
      goto LAB_14549a313;
      local_490 = local_490 + 1;
      local_450 = local_450 + 1;
      param_4 = local_380;
      param_2 = local_440;
    } while (local_450 < local_448);
  }
  if (param_4 == (FRDGTexture *)0x0) {
    return;
  }
  if ((param_5->EngineShowFlags).SceneCaptureCopySceneDepth == 0) {
    return;
  }
  pFVar8 = (param_2->Depth).Target;
  if ((((((((pFVar8->Desc).field_0x32 == (param_4->Desc).field_0x32) &&
          (*(longlong *)&pFVar8->Desc == *(longlong *)&param_4->Desc)) &&
         ((pFVar8->Desc).field_0x33 == (param_4->Desc).field_0x33)) &&
        (((pFVar8->Desc).field_0x34 == (param_4->Desc).field_0x34 &&
         (*(int *)&(pFVar8->Desc).field_0x24 == *(int *)&(param_4->Desc).field_0x24)))) &&
       ((*(int *)&(pFVar8->Desc).field_0x28 == *(int *)&(param_4->Desc).field_0x28 &&
        ((*(short *)&(pFVar8->Desc).field_0x2c == *(short *)&(param_4->Desc).field_0x2c &&
         (*(short *)&(pFVar8->Desc).field_0x2e == *(short *)&(param_4->Desc).field_0x2e)))))) &&
      ((pFVar8->Desc).field_0x30 == (param_4->Desc).field_0x30)) &&
     ((((pFVar8->Desc).field_0x31 == (param_4->Desc).field_0x31 &&
       ((pFVar8->Desc).field_0x35 == (param_4->Desc).field_0x35)) &&
      (iVar25 = *(int *)&(pFVar8->Desc).field_0x8, iVar25 == *(int *)&(param_4->Desc).field_0x8))))
  {
    if (iVar25 == 1) {
      if (((*(float *)&(param_4->Desc).field_0xc == *(float *)&(pFVar8->Desc).field_0xc) &&
          (*(float *)&(param_4->Desc).field_0x10 == *(float *)&(pFVar8->Desc).field_0x10)) &&
         (*(float *)&(param_4->Desc).field_0x14 == *(float *)&(pFVar8->Desc).field_0x14)) {
        bVar21 = *(float *)&(param_4->Desc).field_0x18 == *(float *)&(pFVar8->Desc).field_0x18;
LAB_14549b0cf:
        if (bVar21) goto LAB_14549b0d1;
      }
    }
    else if (iVar25 == 2) {
      if (*(float *)&(param_4->Desc).field_0xc == *(float *)&(pFVar8->Desc).field_0xc) {
        bVar21 = *(int *)&(pFVar8->Desc).field_0x10 == *(int *)&(param_4->Desc).field_0x10;
        goto LAB_14549b0cf;
      }
    }
    else {
LAB_14549b0d1:
      if ((*(int *)&(pFVar8->Desc).field_0x20 == *(int *)&(param_4->Desc).field_0x20) &&
         (*(int *)&(pFVar8->Desc).field_0x1c == *(int *)&(param_4->Desc).field_0x1c)) {
        iVar25 = *(int *)&(pFVar8->Desc).field_0x48;
        if (iVar25 == *(int *)&(param_4->Desc).field_0x48) {
          _Buf2 = *(void **)&(param_4->Desc).field_0x40;
          if (_Buf2 == (void *)0x0) {
            _Buf2 = &(param_4->Desc).field_0x38;
          }
          _Buf1 = *(void **)&(pFVar8->Desc).field_0x40;
          if (_Buf1 == (void *)0x0) {
            _Buf1 = &(pFVar8->Desc).field_0x38;
          }
          if ((iVar25 == 0) || (iVar25 = memcmp(_Buf1,_Buf2,(longlong)iVar25), iVar25 == 0))
          goto LAB_14549b150;
        }
      }
    }
  }
  bVar21 = FDebug::CheckVerifyFailedImpl2
                     ("SceneTextures.Depth.Target->Desc == ViewFamilyDepthTexture->Desc",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                      ,0x16c,L"");
  if (bVar21) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14549b150:
  local_40c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_400 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_3fc = 0;
  local_3f4 = 1;
  local_3ec = 0;
  local_3e8 = 1;
  local_414._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  local_414._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  local_408._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  local_408._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  local_420._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_420._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  AddCopyTexturePass(param_1,(param_2->Depth).Target,param_4,(FRHICopyTextureInfo *)&local_420._s_0)
  ;
  return;
}

// CopySceneCaptureComponentToTarget @ 14549b2e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
CopySceneCaptureComponentToTarget
          (FRDGBuilder *param_1,FMinimalSceneTextures *param_2,FRDGTexture *param_3,
          FRDGTexture *param_4,FSceneViewFamily *param_5,TArrayView<FViewInfo_const_,int> *param_6)

{
  code *pcVar1;
  bool bVar2;
  FViewInfo *pFVar3;
  FViewInfo *pFVar4;
  FViewInfo *local_38;
  TArray<FViewInfo_const_*,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  pFVar3 = param_6->DataPtr;
  pFVar4 = pFVar3 + param_6->ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      CopySceneCaptureComponentToTarget(param_1,param_2,param_3,param_4,param_5,&local_30);
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      return;
    }
    local_38 = pFVar3;
    if (((local_30.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) break;
    if (local_30.ArrayNum == local_30.ArrayMax) {
      local_30.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_30.AllocatorInstance,&local_30.ArrayMax);
    }
    pFVar3 = pFVar3 + 1;
    *(FViewInfo **)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8) = local_38;
    local_30.ArrayNum = local_30.ArrayNum + 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CopySceneCaptureComponentToTarget @ 14549b460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
CopySceneCaptureComponentToTarget
          (FRDGBuilder *param_1,FMinimalSceneTextures *param_2,FRDGTexture *param_3,
          FSceneViewFamily *param_4,TArray<FViewInfo_const_*,TSizedDefaultAllocator<32>_> *param_5)

{
  CopySceneCaptureComponentToTarget(param_1,param_2,param_3,(FRDGTexture *)0x0,param_4,param_5);
  return;
}

// CopySceneCaptureComponentToTarget @ 14549b490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
CopySceneCaptureComponentToTarget
          (FRDGBuilder *param_1,FMinimalSceneTextures *param_2,FRDGTexture *param_3,
          FSceneViewFamily *param_4,TArrayView<FViewInfo_const_,int> *param_5)

{
  TArrayView<FViewInfo_const_,int> local_18;
  
  local_18.DataPtr = param_5->DataPtr;
  local_18.ArrayNum = param_5->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_5->field_0xc;
  CopySceneCaptureComponentToTarget(param_1,param_2,param_3,(FRDGTexture *)0x0,param_4,&local_18);
  return;
}

// CopySceneCaptureComponentToTarget @ 14549b4d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
CopySceneCaptureComponentToTarget
          (FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3,FSceneViewFamily *param_4,
          TStridedView<FSceneView_const_,int> *param_5)

{
  EDebugViewShaderMode *pEVar1;
  int iVar2;
  FMinimalSceneTextures *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSceneView *pFVar6;
  undefined4 uStack_2c;
  TArrayView<FViewInfo_const_,int> local_28;
  
  pFVar6 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_5,0);
  if ((pFVar6->bIsViewInfo == false) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("View.bIsViewInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                         ,0x17a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pEVar1 = &pFVar6->Family[1].DebugViewShaderMode;
  if (((pFVar6->Family->bIsViewFamilyInfo == false) || (*(char *)(*(longlong *)pEVar1 + 8) == '\0'))
     && (bVar5 = FDebug::CheckVerifyFailedImpl2
                           ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                            ,0x7c0,
                            L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = *(FMinimalSceneTextures **)pEVar1;
  local_28.DataPtr = (FViewInfo *)TStridedView<FSceneView_const_,int>::GetElementPtr(param_5,0);
  iVar2 = param_5->NumElements;
  if ((iVar2 < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar2;
  CopySceneCaptureComponentToTarget(param_1,pFVar3,param_2,param_3,param_4,&local_28);
  return;
}

// CopySceneCaptureComponentToTarget @ 14549b620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
CopySceneCaptureComponentToTarget
          (FRDGBuilder *param_1,FRDGTexture *param_2,FSceneViewFamily *param_3,
          TStridedView<FSceneView_const_,int> *param_4)

{
  EDebugViewShaderMode *pEVar1;
  undefined4 uVar3;
  FMinimalSceneTextures *pFVar2;
  code *pcVar4;
  FViewInfo *pFVar5;
  longlong lVar6;
  bool bVar7;
  int iStack_2c;
  undefined4 uStack_1c;
  TArrayView<FViewInfo_const_,int> local_18;
  
  uVar3 = param_4->NumElements;
  pFVar5 = (FViewInfo *)param_4->FirstElementPtr;
  lVar6._0_4_ = param_4->BytesBetweenElements;
  lVar6._4_4_ = param_4->NumElements;
  if ((int)uVar3 < 1) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(bool *)((longlong)&pFVar5->_padding_ + 1) == false) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("View.bIsViewInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                       ,0x17a,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pEVar1 = &((FSceneViewFamily *)pFVar5->_padding_)[1].DebugViewShaderMode;
  if ((((FSceneViewFamily *)pFVar5->_padding_)->bIsViewFamilyInfo == false) ||
     (*(char *)(*(longlong *)pEVar1 + 8) == '\0')) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                       ,0x7c0,
                       L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = *(FMinimalSceneTextures **)pEVar1;
  if ((int)lVar6._4_4_ < 1) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (lVar6 < 0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = lVar6._4_4_;
  local_18.DataPtr = pFVar5;
  CopySceneCaptureComponentToTarget(param_1,pFVar2,param_2,(FRDGTexture *)0x0,param_3,&local_18);
  return;
}

// Create @ 14549bb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FViewInfo * __cdecl ViewSnapshotCache::Create(FViewInfo *param_1)

{
  FViewInfo *pFVar1;
  
  pFVar1 = FViewSnapshotCache::Create(&Cache,param_1);
  return pFVar1;
}

// CreateSceneRendererForSceneCapture @ 14549c4d0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FSceneRenderer * __cdecl
CreateSceneRendererForSceneCapture
          (ISceneRenderBuilder *param_1,FScene *param_2,USceneCaptureComponent *param_3,
          FRenderTarget *param_4,TIntRect<int> *param_5,TMatrix<double> *param_6,
          TVector<double> *param_7,TMatrix<double> *param_8,float param_9,float param_10,
          bool param_11,bool param_12,bool param_13,FPostProcessSettings *param_14,float param_15,
          AActor *param_16,int param_17)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  atomic<int> aVar9;
  double dVar10;
  UEngine *pUVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  atomic<int> aVar16;
  int iVar17;
  UClass *pUVar18;
  FSceneRenderer *pFVar19;
  ConstructionValues *pCVar20;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar21;
  FLegacyScreenPercentageDriver *pFVar22;
  FMotionVectorSimulation *this;
  uint uVar23;
  TReferenceControllerBase<1> *pTVar24;
  TReferenceControllerBase<1> *pTVar25;
  ForAnyElementType FVar26;
  USceneCaptureComponent *pUVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  FFinalPostProcessSettings *pFVar30;
  TReferenceControllerBase<1> *pTVar32;
  TReferenceControllerBase<1> *pTVar33;
  void *_Dst;
  ForAnyElementType FVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_668 [32];
  TArray<FSceneView_*,TSizedDefaultAllocator<32>_> local_608;
  undefined1 local_5f8;
  undefined1 local_5f7 [7];
  longlong *local_5f0;
  TReferenceControllerBase<1> *local_5e8;
  int local_5e0;
  undefined1 local_5d8 [16];
  double local_5c8;
  FRenderTarget *local_5c0;
  AActor *local_5b8;
  FPostProcessSettings *local_5b0;
  ISceneRenderBuilder *local_5a8;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> local_5a0;
  FSceneViewExtensionContext local_590;
  TVector<double>_u_0 *local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined1 local_558 [16];
  double local_548;
  double dStack_540;
  double local_538;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_530;
  TArrayView<FSceneCaptureViewInfo_const_,int> local_518;
  TOptional<UE::Math::TTransform<double>_> local_508;
  double local_488;
  FSceneViewFamily local_478;
  TVector<double>_u_0 local_2b8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TIntPoint<int>_u_0 local_198;
  TIntPoint<int>_u_0 local_190;
  double local_160;
  double dStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulonglong uStack_128;
  undefined8 local_120;
  ConstructionValues local_118;
  ulonglong local_78;
  FFinalPostProcessSettings *pFVar31;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_668;
  local_5b0 = param_14;
  local_5b8 = param_16;
  local_5e0 = param_17;
  local_5c0 = param_4;
  local_5a8 = param_1;
  memset(&local_2b8,0,0x160);
  FSceneViewProjectionData::FSceneViewProjectionData((FSceneViewProjectionData *)&local_2b8._s_0);
  dVar10 = __real_3ff0000000000000;
  local_288 = param_6->M[0][2];
  dStack_280 = param_6->M[0][3];
  local_120 = 0;
  bVar13 = false;
  uStack_148 = 0;
  pFVar31 = (FFinalPostProcessSettings *)0x0;
  pFVar30 = (FFinalPostProcessSettings *)0x0;
  local_198._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(param_5->field0_0x0)._s_0.Min.field0_0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_298 = param_6->M[0][0];
  dStack_290 = param_6->M[0][1];
  local_190 = (param_5->field0_0x0)._s_0.Max.field0_0x0;
  local_278 = param_6->M[1][0];
  dStack_270 = param_6->M[1][1];
  local_258 = param_6->M[2][0];
  dStack_250 = param_6->M[2][1];
  local_268 = param_6->M[1][2];
  dStack_260 = param_6->M[1][3];
  local_238 = param_6->M[3][0];
  dStack_230 = param_6->M[3][1];
  local_248 = param_6->M[2][2];
  dStack_240 = param_6->M[2][3];
  local_2b8._s_0.X = (param_7->field0_0x0)._s_0.X;
  local_2b8._s_0.Y = (param_7->field0_0x0)._s_0.Y;
  local_130 = 0xffffffff00000000;
  local_228 = param_6->M[3][2];
  dStack_220 = param_6->M[3][3];
  local_218 = param_8->M[0][0];
  dStack_210 = param_8->M[0][1];
  local_2b8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
  local_1f8 = param_8->M[1][0];
  dStack_1f0 = param_8->M[1][1];
  local_208 = param_8->M[0][2];
  dStack_200 = param_8->M[0][3];
  local_1d8 = param_8->M[2][0];
  dStack_1d0 = param_8->M[2][1];
  local_1e8 = param_8->M[1][2];
  dStack_1e0 = param_8->M[1][3];
  local_1b8 = param_8->M[3][0];
  dStack_1b0 = param_8->M[3][1];
  local_1c8 = param_8->M[2][2];
  dStack_1c0 = param_8->M[2][3];
  local_1a8 = param_8->M[3][2];
  dStack_1a0 = param_8->M[3][3];
  uStack_128 = (ulonglong)(uint)param_10;
  local_160 = local_2b8._s_0.X;
  dStack_158 = local_2b8._s_0.Y;
  local_150 = local_2b8._s_0.Z;
  if (param_3 == (USceneCaptureComponent *)0x0) {
LAB_14549c7e3:
    pUVar27 = (USceneCaptureComponent *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
    iVar17 = (int)pUVar18->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar18->_padding_)) goto LAB_14549c7e3;
    pUVar27 = param_3;
    pFVar30 = pFVar31;
    if (((uint)param_3->_padding_ >> 0x1e & 1) == 0) {
      lVar5 = param_3[3]._padding_;
      if ((dVar10 <= dStack_1a0) && (*(char *)((longlong)&param_3[1]._padding_ + 4) != '\0')) {
        FSceneViewProjectionData::UpdateOrthoPlanes
                  ((FSceneViewProjectionData *)&local_2b8._s_0,
                   *(bool *)((longlong)&param_3[1]._padding_ + 5));
      }
      uVar15 = *(uint *)((longlong)&param_3[3]._padding_ + 4);
      if ((((uVar15 & 0x60) != 0) ||
          ((((char)param_3[3]._padding_ != '\0' &&
            ((bVar4 = (param_3->CaptureSource).Value, bVar4 == 4 ||
             ((bVar4 < 8 && ((0xebU >> (bVar4 & 0x1f) & 1) != 0)))))) &&
           ((param_3[3]._padding_ != 0 ||
            ((param_3[3]._padding_ != 0 || (param_3[3]._padding_ != 0)))))))) && (lVar5 != 0)) {
        bVar12 = USceneCaptureComponent2D::ShouldIgnoreScreenPercentage
                           ((USceneCaptureComponent2D *)param_3);
        bVar13 = false;
        if (!bVar12) {
          bVar13 = true;
        }
      }
      if (((char)uVar15 < '\0') && (lVar5 != 0)) {
        if ((*(int *)(lVar5 + 0x10) < 1) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FSceneRenderer *)(*pcVar7)();
          return pFVar19;
        }
        pFVar30 = (FFinalPostProcessSettings *)(**(longlong **)(lVar5 + 8) + 0x1320);
      }
    }
  }
  local_530.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_530.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pCVar20 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_118,local_5c0,(FSceneInterface *)param_2,&param_3->ShowFlags,
                       &local_530);
  uVar15 = *(uint *)&pCVar20->field_0x80;
  pCVar20->bResolveScene = param_11 ^ 1;
  if ((param_3->bCaptureEveryFrame == 0) && (param_3->bAlwaysPersistRenderingState == false)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 2;
  }
  *(uint *)&pCVar20->field_0x80 = (param_11 ^ 1) << 3 | uVar15 & 0xfffffff5 | uVar23;
  FSceneViewFamilyContext::FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_478,pCVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_118.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_118.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  pUVar11 = GEngine;
  local_590._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  local_590.Viewport = (FViewport *)0x0;
  local_590.bStereoEnabled = false;
  local_590.Scene = (FSceneInterface *)param_2;
  if (((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) &&
     (bVar12 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar19 = (FSceneRenderer *)(*pcVar7)();
    return pFVar19;
  }
  pTVar21 = FSceneViewExtensions::GatherActiveExtensions
                      ((pUVar11->ViewExtensions).Object,&local_5a0,&local_590);
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::operator=
            (&local_478.ViewExtensions,pTVar21);
  DestructItems<TSharedRef<ISceneViewExtension,1>,int>
            ((TSharedRef<ISceneViewExtension,1> *)local_5a0.AllocatorInstance.Data,
             local_5a0.ArrayNum);
  if ((TSharedRef<ISceneViewExtension,1> *)local_5a0.AllocatorInstance.Data !=
      (TSharedRef<ISceneViewExtension,1> *)0x0) {
    FMemory::Free(local_5a0.AllocatorInstance.Data);
  }
  local_568 = &local_2b8;
  uStack_560 = 1;
  local_518._12_4_ = uStack_55c;
  local_518.ArrayNum = 1;
  local_518.DataPtr = (FSceneCaptureViewInfo *)local_568;
  SetupViewFamilyForSceneCapture
            (&local_608,&local_478,param_3,&local_518,param_9,param_11,false,local_5b0,pFVar30,
             param_15,local_5b8,local_5e0);
  local_478.SceneCaptureSource = (ESceneCaptureSource)(param_3->CaptureSource).Value;
  if (bVar13) {
    local_478.EngineShowFlags.ScreenPercentage = *(uint *)(pUVar27[3]._padding_ + 0x4c) >> 0x16;
    plVar6 = *(longlong **)(pUVar27[3]._padding_ + 0x180);
    pFVar22 = (FLegacyScreenPercentageDriver *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_478);
    if (pFVar22 == (FLegacyScreenPercentageDriver *)0x0) goto LAB_14549ca1a;
  }
  else {
    local_478.EngineShowFlags.ScreenPercentage = 0;
    pFVar22 = operator_new(0x18);
    if (pFVar22 == (FLegacyScreenPercentageDriver *)0x0) {
      pFVar22 = (FLegacyScreenPercentageDriver *)0x0;
    }
    else {
      pFVar22 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                          (pFVar22,&local_478,__real_3f800000);
      if (pFVar22 != (FLegacyScreenPercentageDriver *)0x0) goto LAB_14549ca40;
    }
LAB_14549ca1a:
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("InScreenPercentageInterface",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                        ,0xa24,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FSceneRenderer *)(*pcVar7)();
      return pFVar19;
    }
  }
LAB_14549ca40:
  if ((local_478.ScreenPercentageInterface != (ISceneViewFamilyScreenPercentage *)0x0) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("ScreenPercentageInterface == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                          ,0xa25,L"View family already had a screen percentage interface assigned.")
     , bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar19 = (FSceneRenderer *)(*pcVar7)();
    return pFVar19;
  }
  bVar4 = (param_3->CaptureSource).Value;
  if ((bVar4 == 4) || ((byte)(bVar4 - 5) < 3)) {
    bVar13 = false;
  }
  else {
    if ((((param_3->ShowFlags).Lighting != 0) || ((bVar4 & 0xfc) != 0)) || (bVar4 == 2))
    goto LAB_14549cadb;
    bVar13 = true;
  }
  local_478.EngineShowFlags._0_4_ = local_478.EngineShowFlags._0_4_ & 0xfffffffe;
  local_478.EngineShowFlags._4_4_ = local_478.EngineShowFlags._4_4_ & 0xfffdffff;
  local_478.EngineShowFlags._8_4_ = local_478.EngineShowFlags._8_4_ & 0xff7effff;
  local_478.EngineShowFlags._12_4_ = local_478.EngineShowFlags._12_4_ & 0xffff8fff;
  if (!bVar13) {
    local_478.EngineShowFlags._16_4_ = local_478.EngineShowFlags._16_4_ & 0xfffeffff;
  }
LAB_14549cadb:
  local_478.ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)pFVar22;
  if ((pUVar27 != (USceneCaptureComponent *)0x0) && (((uint)pUVar27->_padding_ >> 0x1e & 1) == 0)) {
    if ((local_608.ArrayNum != 1) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Views.Num() == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                            ,999,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FSceneRenderer *)(*pcVar7)();
      return pFVar19;
    }
    this = FMotionVectorSimulation::Get();
    FMotionVectorSimulation::GetPreviousTransform(this,&local_508,(UObject *)pUVar27);
    if (local_508.bIsSet != false) {
      if ((local_608.ArrayNum < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FSceneRenderer *)(*pcVar7)();
        return pFVar19;
      }
      lVar5 = *(longlong *)local_608.AllocatorInstance.Data;
      if (&local_508 != (TOptional<UE::Math::TTransform<double>_> *)(lVar5 + 0xca0)) {
        (((TOptional<UE::Math::TTransform<double>_> *)(lVar5 + 0xca0))->TypedValue).Rotation.XY.
        m128d_f64[0] = local_508.TypedValue.Rotation.XY.m128d_f64[0];
        *(double *)(lVar5 + 0xca8) = local_508.TypedValue.Rotation.XY.m128d_f64[1];
        *(double *)(lVar5 + 0xcb0) = local_508.TypedValue.Rotation.ZW.m128d_f64[0];
        *(double *)(lVar5 + 0xcb8) = local_508.TypedValue.Rotation.ZW.m128d_f64[1];
        *(double *)(lVar5 + 0xcc0) = local_508.TypedValue.Translation.XY.m128d_f64[0];
        *(double *)(lVar5 + 0xcc8) = local_508.TypedValue.Translation.XY.m128d_f64[1];
        *(double *)(lVar5 + 0xcd0) = local_508.TypedValue.Translation.ZW.m128d_f64[0];
        *(double *)(lVar5 + 0xcd8) = local_508.TypedValue.Translation.ZW.m128d_f64[1];
        *(double *)(lVar5 + 0xce0) = local_508.TypedValue.Scale3D.XY.m128d_f64[0];
        *(double *)(lVar5 + 0xce8) = local_508.TypedValue.Scale3D.XY.m128d_f64[1];
        *(double *)(lVar5 + 0xcf0) = local_508.TypedValue.Scale3D.ZW.m128d_f64[0];
        *(double *)(lVar5 + 0xcf8) = local_508.TypedValue.Scale3D.ZW.m128d_f64[1];
        *(undefined1 *)(lVar5 + 0xd00) = 1;
      }
    }
    if (*(char *)((longlong)&pUVar27[3]._padding_ + 4) != '\0') {
      dVar2 = (double)pUVar27[3]._padding_;
      local_5c8 = (double)pUVar27[3]._padding_;
      dVar3 = (double)pUVar27[3]._padding_;
      dVar35 = dVar2 * dVar2 + dVar3 * dVar3 + local_5c8 * local_5c8;
      if (dVar35 == dVar10) {
        dVar2 = (double)pUVar27[3]._padding_;
        dVar3 = (double)pUVar27[3]._padding_;
        uVar37 = SUB84(dVar3,0);
        uVar36 = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_5c8 = (double)pUVar27[3]._padding_;
      }
      else if (__real_3e45798ee0000000 <= dVar35) {
        local_538 = dVar10 / SQRT(dVar35);
        dVar3 = dVar3 * local_538;
        uVar36 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar2 = dVar2 * local_538;
        local_5c8 = local_5c8 * local_538;
        uVar37 = SUB84(dVar3,0);
      }
      else {
        uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        dVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_5c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      }
      local_488 = (double)pUVar27[3]._padding_;
      local_558._8_4_ = uVar37;
      local_558._0_8_ = dVar2;
      local_558._12_4_ = uVar36;
      local_5d8._8_4_ = uVar37;
      local_5d8._0_8_ = dVar2;
      local_5d8._12_4_ = uVar36;
      dStack_540 = (double)pUVar27[3]._padding_ * dVar3 + (double)pUVar27[3]._padding_ * dVar2 +
                   local_488 * local_5c8;
      local_548 = local_5c8;
      if ((local_608.ArrayNum < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FSceneRenderer *)(*pcVar7)();
        return pFVar19;
      }
      lVar5 = *(longlong *)local_608.AllocatorInstance.Data;
      auVar8._8_4_ = uVar37;
      auVar8._0_8_ = dVar2;
      auVar8._12_4_ = uVar36;
      *(undefined1 (*) [16])(lVar5 + 0x1210) = auVar8;
      *(double *)(lVar5 + 0x1220) = local_548;
      *(double *)(lVar5 + 0x1228) = dStack_540;
      if ((local_608.ArrayNum < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FSceneRenderer *)(*pcVar7)();
        return pFVar19;
      }
      *(undefined1 *)(*(longlong *)local_608.AllocatorInstance.Data + 0xf38) = 0;
    }
    pTVar33 = (TReferenceControllerBase<1> *)0x0;
    if ((local_608.ArrayNum < 1) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FSceneRenderer *)(*pcVar7)();
      return pFVar19;
    }
    *(bool *)(*(longlong *)local_608.AllocatorInstance.Data + 0x11cc) = param_12;
    if (param_13) {
      lVar5 = pUVar27[3]._padding_;
      if ((*(int *)(lVar5 + 0x10) < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FSceneRenderer *)(*pcVar7)();
        return pFVar19;
      }
      lVar5 = **(longlong **)(lVar5 + 8);
      uVar37 = *(undefined4 *)(lVar5 + 0x1b90);
      if ((local_608.ArrayNum < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FSceneRenderer *)(*pcVar7)();
        return pFVar19;
      }
      *(undefined4 *)(*(longlong *)local_608.AllocatorInstance.Data + 0x1b90) = uVar37;
      uVar37 = *(undefined4 *)(lVar5 + 0x1b94);
      if ((local_608.ArrayNum < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FSceneRenderer *)(*pcVar7)();
        return pFVar19;
      }
      *(undefined4 *)(*(longlong *)local_608.AllocatorInstance.Data + 0x1b94) = uVar37;
      if ((local_608.ArrayNum < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FSceneRenderer *)(*pcVar7)();
        return pFVar19;
      }
      if ((*(longlong *)(*(longlong *)local_608.AllocatorInstance.Data + 0x10) != 0) &&
         (*(longlong *)(lVar5 + 0x10) != 0)) {
        uVar37 = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x102c);
        if ((local_608.ArrayNum < 1) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FSceneRenderer *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined4 *)
         (*(longlong *)(*(longlong *)local_608.AllocatorInstance.Data + 0x10) + 0x102c) = uVar37;
      }
    }
    pTVar25 = pTVar33;
    pTVar32 = pTVar33;
    if (0 < (int)pUVar27[3]._padding_) {
      do {
        uVar23 = (uint)pTVar25;
        uVar15 = 0;
        if ((int)uVar23 < (int)pUVar27[3]._padding_) {
          uVar15 = ~uVar23 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FSceneRenderer *)(*pcVar7)();
          return pFVar19;
        }
        lVar5 = pUVar27[3]._padding_;
        pTVar25 = *(TReferenceControllerBase<1> **)
                   (&(pTVar32->SharedReferenceCount).field_0x0 + lVar5);
        pTVar24 = pTVar25;
        if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
LAB_14549d025:
          uVar15 = 0;
          if ((int)uVar23 < (int)pUVar27[3]._padding_) {
            uVar15 = ~uVar23 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FSceneRenderer *)(*pcVar7)();
            return pFVar19;
          }
          _Dst = (void *)((longlong)&pTVar32->_padding_ + pUVar27[3]._padding_);
          plVar6 = *(longlong **)((longlong)_Dst + 8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
          iVar17 = ((int)pUVar27[3]._padding_ - uVar23) + -1;
          if (iVar17 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar17 << 4);
          }
          *(int *)&pUVar27[3]._padding_ = (int)pUVar27[3]._padding_ + -1;
          uVar23 = uVar23 - 1;
          pTVar32 = pTVar32 + -1;
          pTVar25 = pTVar24;
        }
        else {
          aVar9 = pTVar25->SharedReferenceCount;
          do {
            pTVar24 = pTVar33;
            if (aVar9 == (atomic<int>)0x0) goto LAB_14549d025;
            LOCK();
            aVar16 = pTVar25->SharedReferenceCount;
            bVar13 = aVar9 == aVar16;
            if (bVar13) {
              pTVar25->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
              aVar16 = aVar9;
            }
            UNLOCK();
            aVar9 = aVar16;
          } while (!bVar13);
          plVar6 = *(longlong **)((longlong)&pTVar32->_padding_ + lVar5);
          pTVar24 = pTVar25;
          if (plVar6 == (longlong *)0x0) goto LAB_14549d025;
          cVar14 = (**(code **)(*plVar6 + 0xa0))(plVar6,&local_590);
          if (cVar14 != '\0') {
            LOCK();
            pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
            UNLOCK();
            local_5f0 = plVar6;
            local_5e8 = pTVar25;
            if ((plVar6 == (longlong *)0x0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar13)) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FSceneRenderer *)(*pcVar7)();
              return pFVar19;
            }
            if (((local_478.ViewExtensions.AllocatorInstance.Data <=
                  (FScriptContainerElement *)&local_5f0) &&
                ((FScriptContainerElement *)&local_5f0 <
                 local_478.ViewExtensions.AllocatorInstance.Data +
                 (longlong)local_478.ViewExtensions.ArrayMax * 0x10)) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FSceneRenderer *)(*pcVar7)();
              return pFVar19;
            }
            if (local_478.ViewExtensions.ArrayNum == local_478.ViewExtensions.ArrayMax) {
              local_478.ViewExtensions.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_478.ViewExtensions.AllocatorInstance,
                              &local_478.ViewExtensions.ArrayMax);
            }
            *(longlong **)
             (local_478.ViewExtensions.AllocatorInstance.Data +
             (longlong)local_478.ViewExtensions.ArrayNum * 0x10) = local_5f0;
            *(TReferenceControllerBase<1> **)
             (local_478.ViewExtensions.AllocatorInstance.Data +
             (longlong)local_478.ViewExtensions.ArrayNum * 0x10 + 8) = local_5e8;
            if (local_5e8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_5e8->SharedReferenceCount =
                   (atomic<int>)((int)local_5e8->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_478.ViewExtensions.ArrayNum = local_478.ViewExtensions.ArrayNum + 1;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_5e8);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        pTVar25 = (TReferenceControllerBase<1> *)(ulonglong)(uVar23 + 1);
        pTVar32 = pTVar32 + 1;
      } while ((int)(uVar23 + 1) < (int)pUVar27[3]._padding_);
    }
    local_478.EngineShowFlags._12_4_ =
         -(uint)(*(char *)((longlong)&pUVar27[3]._padding_ + 1) != '\0') & 0x4000 |
         local_478.EngineShowFlags._12_4_ & 0xffffbfff;
  }
  FVar34.Data = local_608.AllocatorInstance.Data;
  if ((local_608.ArrayNum < 0) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar19 = (FSceneRenderer *)(*pcVar7)();
    return pFVar19;
  }
  iVar17 = local_478.ViewExtensions.ArrayNum;
  pFVar28 = local_478.ViewExtensions.AllocatorInstance.Data +
            (longlong)local_478.ViewExtensions.ArrayNum * 0x10;
  FVar26.Data = local_478.ViewExtensions.AllocatorInstance.Data;
  while( true ) {
    if (local_478.ViewExtensions.ArrayNum != iVar17) {
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_5f8);
    }
    if (FVar26.Data == pFVar28) break;
    (**(code **)**(longlong **)FVar26.Data)(*(longlong **)FVar26.Data,&local_478);
    FVar26.Data = FVar26.Data + 0x10;
  }
  pFVar28 = FVar34.Data + (longlong)local_608.ArrayNum * 8;
  FVar26.Data = local_478.ViewExtensions.AllocatorInstance.Data;
  iVar17 = local_478.ViewExtensions.ArrayNum;
  for (; local_478.ViewExtensions.ArrayNum = iVar17, FVar34.Data != pFVar28;
      FVar34.Data = FVar34.Data + 8) {
    lVar5 = *(longlong *)FVar34.Data;
    pFVar29 = FVar26.Data + (longlong)iVar17 * 0x10;
    local_478.ViewExtensions.AllocatorInstance.Data = FVar26.Data;
    while( true ) {
      if (local_478.ViewExtensions.ArrayNum != iVar17) {
        `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_5f7);
      }
      if (FVar26.Data == pFVar29) break;
      (**(code **)(**(longlong **)FVar26.Data + 8))(*(longlong **)FVar26.Data,&local_478,lVar5);
      FVar26.Data = FVar26.Data + 0x10;
    }
    FVar26.Data = local_478.ViewExtensions.AllocatorInstance.Data;
    iVar17 = local_478.ViewExtensions.ArrayNum;
  }
  pFVar19 = (FSceneRenderer *)(**(code **)((longlong)*local_5a8 + 8))(local_5a8,&local_478);
  if (local_608.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.AllocatorInstance.Data);
  }
  local_590._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_478);
  return pFVar19;
}

// CreateSplitScreenDebugViewFamilies @ 14549dc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
CreateSplitScreenDebugViewFamilies
          (FSceneViewFamily *param_1,TArrayView<FSceneViewFamily_*_const,int> *param_2,
          TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *param_3)

{
  TTypeCompatibleBytes<FSceneViewFamily_*> *pTVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  USceneComponent *pUVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  TTypeCompatibleBytes<FSceneViewFamily_*> TVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *pTVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  Type TVar18;
  FSceneViewFamily *this;
  uchar auVar19 [8];
  ISceneViewFamilyScreenPercentage *pIVar20;
  TRotator<double> *pTVar21;
  FSceneViewState *this_00;
  FSceneView *pFVar22;
  longlong lVar23;
  ulonglong uVar24;
  TTransform<double> *pTVar25;
  uint uVar26;
  uchar auVar27 [8];
  TTypeCompatibleBytes<FSceneViewFamily_*> *pTVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  TConsoleVariableData<float> *pTVar32;
  uchar auVar33 [8];
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  double dVar34;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  uint uVar44;
  uint uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStackY_828 [32];
  undefined1 local_7d8 [8];
  ForElementType<FSceneViewFamily_*> local_7d0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  double local_7a8;
  int local_798;
  undefined1 local_790 [16];
  int local_780;
  TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *local_778;
  undefined8 local_768;
  undefined8 uStack_760;
  double local_758;
  double local_750;
  TArrayView<FSceneViewFamily_*_const,int> *local_748;
  double local_740;
  double dStack_738;
  double local_730;
  TRotator<double> local_728;
  undefined1 local_708 [16];
  double local_6f8;
  TMatrix<double> local_6e8;
  TMatrix<double> local_668;
  longlong local_5e8;
  longlong local_5e0;
  longlong local_5c0;
  longlong local_5b8;
  FSceneViewFamily *local_5b0;
  FSceneViewState *local_5a8;
  AActor *local_590;
  TVector<double>_u_0 local_538;
  double local_520;
  double dStack_518;
  double local_510;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_508;
  ForElementType<FSetElementId> local_4c8;
  int local_4c0;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_4b8 [3];
  ForElementType<FSceneViewFamily_*> local_3f8;
  int local_3e8;
  int local_3e4;
  ForElementType<FSceneViewFamily_*> local_3e0;
  uint local_3d0;
  uint local_3cc;
  ForElementType<FSceneView_const_*_*> local_3c8;
  int local_3b8;
  int local_3b4 [3];
  TMatrix<double> local_3a8;
  TMatrix<double> local_328;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  pTVar7 = CVarSplitScreenDebugMultiViewFamily.Ref;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_828;
  local_778 = param_3;
  local_748 = param_2;
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_798 = pTVar7->ShadowedValue[0];
  local_3cc = 2;
  local_3b4[0] = 2;
  auVar33[0] = '\0';
  auVar33[1] = '\0';
  auVar33[2] = '\0';
  auVar33[3] = '\0';
  auVar33[4] = '\0';
  auVar33[5] = '\0';
  auVar33[6] = '\0';
  auVar33[7] = '\0';
  local_3e4 = 2;
  iVar31 = 2 - (uint)(local_798 != 0);
  local_3d0 = 0;
  local_3b8 = 0;
  local_3e8 = 0;
  lVar29 = (ulonglong)(local_798 != 0) + 1;
  do {
    this = operator_new(0x1b8);
    auVar19 = auVar33;
    if (this != (FSceneViewFamily *)0x0) {
      auVar19 = (uchar  [8])FSceneViewFamily::FSceneViewFamily(this,param_1);
    }
    local_7d0.InlineData[0].Pad = auVar19;
    if (((&local_3e0 <= &local_7d0) && (&local_7d0 < local_3e0.InlineData + (int)local_3cc)) &&
       (bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_3d0 == local_3cc) {
      local_3d0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneViewFamily_*>_>
                            (0x808,&local_3e0,(int *)&local_3cc);
    }
    lVar23 = (longlong)(int)local_3d0;
    local_3d0 = local_3d0 + 1;
    *&local_3e0.InlineData[lVar23].Pad = local_7d0.InlineData[0].Pad;
    pIVar20 = (ISceneViewFamilyScreenPercentage *)
              (**(code **)((longlong)*param_1->ScreenPercentageInterface + 0x10))
                        (param_1->ScreenPercentageInterface,param_1);
    *(ISceneViewFamilyScreenPercentage **)((longlong)local_7d0.InlineData[0].Pad + 0x180) = pIVar20;
    TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *)
               ((longlong)local_7d0.InlineData[0].Pad + 8),iVar31,Default);
    auVar27 = auVar33;
    auVar19 = auVar33;
    do {
      TVar9.Pad = local_7d0.InlineData[0].Pad;
      uVar26 = auVar27._0_4_;
      uVar15 = 0;
      if ((int)uVar26 < *(int *)((longlong)local_7d0.InlineData[0].Pad + 0x10)) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_790._0_8_ =
           (longlong)
           (((TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *)((longlong)TVar9.Pad + 8))->
           AllocatorInstance).Data + (longlong)auVar19 * 8;
      if (((&local_3c8 <= (ForElementType<FSceneView_const_*_*> *)local_790) &&
          (local_790 < local_3c8.InlineData + local_3b4[0])) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_3b8 == local_3b4[0]) {
        local_3b8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneView_const_*_*>_>
                              (0x808,&local_3c8,local_3b4);
      }
      lVar23 = (longlong)local_3b8;
      local_3b8 = local_3b8 + 1;
      *(undefined8 *)local_3c8.InlineData[lVar23].Pad = local_790._0_8_;
      if (((&local_3f8 <= &local_7d0) && (&local_7d0 < local_3f8.InlineData + local_3e4)) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_3e8 == local_3e4) {
        local_3e8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneViewFamily_*>_>
                              (0x808,&local_3f8,&local_3e4);
      }
      auVar27._0_4_ = uVar26 + 1;
      auVar27[4] = '\0';
      auVar27[5] = '\0';
      auVar27[6] = '\0';
      auVar27[7] = '\0';
      auVar19 = (uchar  [8])((longlong)auVar19 + 1);
      lVar23 = (longlong)local_3e8;
      local_3e8 = local_3e8 + 1;
      *&local_3f8.InlineData[lVar23].Pad = local_7d0.InlineData[0].Pad;
    } while ((int)auVar27._0_4_ < iVar31);
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  if (((param_1->Views).ArrayNum < 1) &&
     (bVar14 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = CVarSplitScreenDebugVertical.Ref;
  lVar29 = *(longlong *)(param_1->Views).AllocatorInstance.Data;
  uVar3 = *(undefined8 *)(lVar29 + 0x170);
  uVar4 = *(undefined8 *)(lVar29 + 0x178);
  local_768 = uVar3;
  uStack_760 = uVar4;
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar32 = CVarSplitScreenDebugFOVZoom.Ref;
  iVar31 = pTVar7->ShadowedValue[0];
  local_780 = iVar31;
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = CVarSplitScreenDebugLetterbox.Ref;
  fVar2 = pTVar32->ShadowedValue[0];
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar35 = pTVar8->ShadowedValue[0];
  if (__real_42480000 <= pTVar8->ShadowedValue[0]) {
    fVar35 = __real_42480000;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  if (iVar31 == 0) {
    fVar38 = (float)(uStack_760._4_4_ - local_768._4_4_);
    iVar31 = (int)ROUND(__real_bf000000 - fVar38 * fVar35 * __real_3c23d70a * __real_3e800000) >> 1;
    fVar35 = (fVar38 * fVar2 * __real_3f000000) /
             (float)((uStack_760._4_4_ - local_768._4_4_) + iVar31 * 8);
    fVar38 = fVar2;
  }
  else {
    iVar16 = (int)uVar4 - (int)uVar3;
    fVar38 = (float)iVar16;
    iVar31 = (int)ROUND(__real_bf000000 - fVar38 * fVar35 * __real_3c23d70a * __real_3e800000) >> 1;
    fVar38 = (fVar38 * fVar2 * __real_3f000000) / (float)(iVar16 + iVar31 * 8);
    fVar35 = fVar2;
  }
  uVar44 = (uint)__xmm_80000000000000008000000000000000;
  uVar45 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar24 = 0;
  uVar42 = (undefined4)__real_3ff0000000000000;
  uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar39 = (double)fVar35;
  iVar31 = (iVar31 * -8) / 2;
  local_7d0.InlineData[1].Pad[0] = '\x01';
  local_7d0.InlineData[1].Pad[1] = '\0';
  local_7d0.InlineData[1].Pad[2] = '\0';
  local_7d0.InlineData[1].Pad[3] = '\0';
  dVar41 = (double)fVar38;
  uVar30 = uVar24;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar34 = ___xmm_3ff00000000000000000000000000000;
  dVar46 = _UNK_15061cbc8;
  dVar47 = ___xmm_00000000000000003ff0000000000000;
  dVar48 = _UNK_150689518;
  local_758 = dVar39;
  local_750 = dVar41;
  while( true ) {
    if (((param_1->Views).ArrayNum < 1) &&
       (bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FSceneViewInitOptions::FSceneViewInitOptions
              ((FSceneViewInitOptions *)local_708,
               (FSceneViewInitOptions *)
               (*(longlong *)(param_1->Views).AllocatorInstance.Data + 0x50));
    local_268.M[0][2] = 0.0;
    local_268.M[0][3] = 0.0;
    local_268.M[1][2] = 0.0;
    local_268.M[1][3] = 0.0;
    local_268.M[2][0] = 0.0;
    local_268.M[2][1] = 0.0;
    local_268.M[3][0] = 0.0;
    local_268.M[3][1] = 0.0;
    local_268.M[0][1] = 0.0;
    local_268.M[1][0] = 0.0;
    local_268.M[0][0] = dVar41;
    local_268.M[1][1] = dVar39;
    local_268.M[2][2] = dVar47;
    local_268.M[2][3] = dVar48;
    local_268.M[3][2] = dVar34;
    local_268.M[3][3] = dVar46;
    VectorMatrixMultiply(&local_668,&local_668,&local_268);
    iVar16 = (int)uVar24;
    pTVar32 = CVarSplitScreenDebugRotate0.Ref;
    if (iVar16 != 0) {
      pTVar32 = CVarSplitScreenDebugRotate1.Ref;
    }
    bVar14 = IsInParallelGameThread();
    if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar32->ShadowedValue[0] != 0.0) {
      dVar39 = (double)pTVar32->ShadowedValue[0];
      dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar26,SUB84(dVar39,0) & uVar15)
      ;
      if ((double)CONCAT44(uVar43,uVar42) <= dVar39 && dVar39 != (double)CONCAT44(uVar43,uVar42)) {
        dVar39 = (double)(float)GlobalVectorConstants::DEG_TO_RAD.m128_u64[0];
        dVar41 = (double)(float)((ulonglong)GlobalVectorConstants::DEG_TO_RAD._0_8_ >> 0x20);
        __vdecl_sincos2();
        local_288._8_4_ = SUB84(dVar41,0);
        local_288._0_8_ = dVar39;
        local_288._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        __vdecl_sincos2();
        local_278._8_4_ = SUB84(dVar41,0);
        local_278._0_8_ = dVar39;
        local_278._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        local_3a8.M[0][3] = 0.0;
        local_3a8.M[0][0] = (double)local_288._8_8_ * (double)local_288._0_8_;
        local_3a8.M[1][3] = 0.0;
        local_3a8.M[2][3] = 0.0;
        local_3a8.M[0][1] = (double)local_288._0_8_ * extraout_XMM0_Qb_00;
        local_3a8.M[3][3] = (double)CONCAT44(uVar43,uVar42);
        local_3a8.M[1][0] =
             extraout_XMM0_Qa_02 * extraout_XMM0_Qa_01 * (double)local_288._8_8_ -
             dVar39 * extraout_XMM0_Qb_00;
        local_3a8.M[1][1] =
             extraout_XMM0_Qa_02 * extraout_XMM0_Qa_01 * extraout_XMM0_Qb_00 +
             dVar39 * (double)local_288._8_8_;
        local_3a8.M[2][2] = dVar39 * (double)local_288._0_8_;
        local_3a8.M[2][1] =
             (double)local_288._8_8_ * extraout_XMM0_Qa_02 -
             dVar39 * extraout_XMM0_Qa_01 * extraout_XMM0_Qb_00;
        local_3a8.M[1][2] =
             (double)CONCAT44((uint)((ulonglong)((double)local_288._0_8_ * extraout_XMM0_Qa_02) >>
                                    0x20) ^ uVar45,
                              SUB84((double)local_288._0_8_ * extraout_XMM0_Qa_02,0) ^ uVar44);
        dVar39 = dVar39 * extraout_XMM0_Qa_01 * (double)local_288._8_8_ +
                 extraout_XMM0_Qa_02 * extraout_XMM0_Qb_00;
        local_3a8.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_3a8.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_3a8.M[2][0] =
             (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar45,SUB84(dVar39,0) ^ uVar44);
        local_3a8.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_3a8.M[0][2] = extraout_XMM0_Qa_01;
        VectorMatrixMultiply(&local_168,&local_3a8,&local_6e8);
        pTVar7 = CVarSplitScreenDebugOrbit.Ref;
        local_6e8.M[0][0] = local_168.M[0][0];
        local_6e8.M[0][1] = local_168.M[0][1];
        local_6e8.M[0][2] = local_168.M[0][2];
        local_6e8.M[0][3] = local_168.M[0][3];
        local_6e8.M[1][0] = local_168.M[1][0];
        local_6e8.M[1][1] = local_168.M[1][1];
        local_6e8.M[1][2] = local_168.M[1][2];
        local_6e8.M[1][3] = local_168.M[1][3];
        local_6e8.M[2][0] = local_168.M[2][0];
        local_6e8.M[2][1] = local_168.M[2][1];
        local_6e8.M[2][2] = local_168.M[2][2];
        local_6e8.M[2][3] = local_168.M[2][3];
        local_6e8.M[3][2] = local_168.M[3][2];
        local_6e8.M[3][3] = local_168.M[3][3];
        local_6e8.M[3][0] = local_168.M[3][0];
        local_6e8.M[3][1] = local_168.M[3][1];
        bVar14 = IsInParallelGameThread();
        if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
           (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pTVar7->ShadowedValue[0] != 0) && (local_590 != (AActor *)0x0)) {
          pUVar5 = (local_590->RootComponent).field0_0x0.DebugPtr;
          if (pUVar5 == (USceneComponent *)0x0) {
            pTVar25 = &UE::Math::TTransform<double>::Identity;
          }
          else {
            pTVar25 = &pUVar5->ComponentToWorld;
          }
          local_740 = (pTVar25->Translation).XY.m128d_f64[0];
          dStack_738 = (pTVar25->Translation).XY.m128d_f64[1];
          local_730 = (pTVar25->Translation).ZW.m128d_f64[0];
          dVar41 = (double)local_708._0_8_ - local_740;
          local_6f8 = local_6f8 - local_730;
          dVar34 = (double)local_708._8_8_ - dStack_738;
          auVar40._8_4_ = SUB84(local_6f8,0);
          auVar40._0_8_ = local_6f8;
          auVar40._12_4_ = (int)((ulonglong)local_6f8 >> 0x20);
          uVar42 = (undefined4)__real_3ff0000000000000;
          uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          dVar39 = dVar34 * local_3a8.M[0][1] + dVar41 * local_3a8.M[0][0] +
                   local_6f8 * local_3a8.M[0][2] + local_3a8.M[0][3] * 0.0 + local_740;
          local_7a8 = dVar34 * local_3a8.M[2][1] + dVar41 * local_3a8.M[2][0] +
                      local_6f8 * local_3a8.M[2][2] + local_3a8.M[2][3] * 0.0 + local_730;
          dVar41 = dVar34 * local_3a8.M[1][1] + dVar41 * local_3a8.M[1][0] +
                   auVar40._8_8_ * local_3a8.M[1][2] + local_3a8.M[1][3] * 0.0 + dStack_738;
          uVar44 = (uint)__xmm_80000000000000008000000000000000;
          uVar45 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          uVar36 = SUB84(dVar41,0);
          uVar37 = (undefined4)((ulonglong)dVar41 >> 0x20);
          local_708._8_4_ = uVar36;
          local_708._0_8_ = dVar39;
          local_708._12_4_ = uVar37;
          local_538._8_4_ = uVar36;
          local_538._0_8_ = dVar39;
          local_538._12_4_ = uVar37;
          dVar34 = ___xmm_3ff00000000000000000000000000000;
          dVar46 = _UNK_15061cbc8;
          dVar47 = ___xmm_00000000000000003ff0000000000000;
          dVar48 = _UNK_150689518;
          local_6f8 = local_7a8;
          local_538._s_0.Z = local_7a8;
        }
      }
      else {
        atan((double)CONCAT44(uVar43,uVar42) / local_668.M[0][0]);
        dVar39 = (double)(float)GlobalVectorConstants::DEG_TO_RAD.m128_u64[0];
        dVar41 = (double)(float)((ulonglong)GlobalVectorConstants::DEG_TO_RAD._0_8_ >> 0x20);
        __vdecl_sincos2();
        local_2a8._8_4_ = SUB84(dVar41,0);
        local_2a8._0_8_ = dVar39;
        local_2a8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        __vdecl_sincos2();
        local_298._8_4_ = SUB84(dVar41,0);
        local_298._0_8_ = dVar39;
        local_298._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        local_328.M[0][3] = 0.0;
        local_328.M[0][0] = (double)local_2a8._8_8_ * (double)local_2a8._0_8_;
        local_328.M[1][3] = 0.0;
        local_328.M[2][3] = 0.0;
        local_328.M[0][1] = (double)local_2a8._0_8_ * extraout_XMM0_Qb;
        local_328.M[3][3] = (double)CONCAT44(uVar43,uVar42);
        local_328.M[1][0] =
             extraout_XMM0_Qa_00 * extraout_XMM0_Qa * (double)local_2a8._8_8_ -
             dVar39 * extraout_XMM0_Qb;
        local_328.M[1][1] =
             extraout_XMM0_Qa_00 * extraout_XMM0_Qa * extraout_XMM0_Qb +
             dVar39 * (double)local_2a8._8_8_;
        local_328.M[2][2] = dVar39 * (double)local_2a8._0_8_;
        local_328.M[2][1] =
             (double)local_2a8._8_8_ * extraout_XMM0_Qa_00 -
             dVar39 * extraout_XMM0_Qa * extraout_XMM0_Qb;
        local_328.M[1][2] =
             (double)CONCAT44((uint)((ulonglong)((double)local_2a8._0_8_ * extraout_XMM0_Qa_00) >>
                                    0x20) ^ uVar45,
                              SUB84((double)local_2a8._0_8_ * extraout_XMM0_Qa_00,0) ^ uVar44);
        dVar39 = dVar39 * extraout_XMM0_Qa * (double)local_2a8._8_8_ +
                 extraout_XMM0_Qa_00 * extraout_XMM0_Qb;
        local_328.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_328.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_328.M[2][0] =
             (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar45,SUB84(dVar39,0) ^ uVar44);
        local_328.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        VectorMatrixMultiply(&local_1e8,&local_6e8,&local_328);
        local_6e8.M[0][0] = local_1e8.M[0][0];
        local_6e8.M[0][1] = local_1e8.M[0][1];
        local_6e8.M[0][2] = local_1e8.M[0][2];
        local_6e8.M[0][3] = local_1e8.M[0][3];
        local_6e8.M[1][0] = local_1e8.M[1][0];
        local_6e8.M[1][1] = local_1e8.M[1][1];
        local_6e8.M[1][2] = local_1e8.M[1][2];
        local_6e8.M[1][3] = local_1e8.M[1][3];
        local_6e8.M[2][2] = local_1e8.M[2][2];
        local_6e8.M[2][3] = local_1e8.M[2][3];
        local_6e8.M[2][0] = local_1e8.M[2][0];
        local_6e8.M[2][1] = local_1e8.M[2][1];
        local_6e8.M[3][2] = local_1e8.M[3][2];
        local_6e8.M[3][3] = local_1e8.M[3][3];
        local_6e8.M[3][0] = local_1e8.M[3][0];
        local_6e8.M[3][1] = local_1e8.M[3][1];
      }
      pTVar21 = UE::Math::TMatrix<double>::Rotator(&local_6e8,&local_728);
      local_520 = pTVar21->Pitch;
      dStack_518 = pTVar21->Yaw;
      local_510 = pTVar21->Roll;
      dVar39 = local_758;
      dVar41 = local_750;
      uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar26 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    }
    local_7b8 = (TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *)local_768;
    uVar10 = local_7b8;
    uStack_7b0 = uStack_760;
    uVar11 = uStack_7b0;
    local_7b8._4_4_ = (int)((ulonglong)local_768 >> 0x20);
    uStack_7b0._4_4_ = (int)((ulonglong)uStack_760 >> 0x20);
    if (local_780 == 0) {
      iVar17 = ((int)uVar3 + (int)uVar4) / 2;
      if (iVar16 == 0) {
        uStack_7b0 = CONCAT44(uStack_7b0._4_4_,iVar17);
        local_7b8 = (TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *)uVar10;
      }
      else {
        local_7b8 = (TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *)
                    CONCAT44(local_7b8._4_4_,iVar17);
        uStack_7b0 = uVar11;
      }
      local_7b8 = (TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *)
                  CONCAT44(local_7b8._4_4_ + iVar31,(int)local_7b8);
      uStack_7b0 = CONCAT44(uStack_7b0._4_4_ - iVar31,(int)uStack_7b0);
    }
    else {
      iVar17 = ((int)((ulonglong)uVar4 >> 0x20) + (int)((ulonglong)uVar3 >> 0x20)) / 2;
      local_7b8._0_4_ = (int)local_768;
      uStack_7b0._0_4_ = (int)uStack_760;
      if (iVar16 == 0) {
        local_7b8 = (TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *)
                    CONCAT44(local_7b8._4_4_,(int)local_7b8 + iVar31);
        uStack_7b0 = CONCAT44(iVar17,(int)uStack_7b0 - iVar31);
      }
      else {
        uStack_7b0 = CONCAT44(uStack_7b0._4_4_,(int)uStack_7b0 - iVar31);
        local_7b8 = (TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *)
                    CONCAT44(iVar17,(int)local_7b8 + iVar31);
      }
    }
    local_5e0 = uStack_7b0;
    local_5b8 = uStack_7b0;
    local_5e8 = (longlong)local_7b8;
    local_5c0 = (longlong)local_7b8;
    if ((local_3e8 <= iVar16) &&
       (bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) break;
    local_5b0 = *(FSceneViewFamily **)(local_3f8.InlineData[0].Pad + uVar30);
    if (iVar16 == 1) {
      if (GSecondViewState == (FSceneViewState *)0x0) {
        this_00 = operator_new(0x2b70);
        if (this_00 == (FSceneViewState *)0x0) {
          GSecondViewState = (FSceneViewState *)0x0;
        }
        else {
          TVar18 = FSceneViewFamily::GetFeatureLevel(param_1);
          GSecondViewState = FSceneViewState::FSceneViewState(this_00,TVar18,(FSceneViewState *)0x0)
          ;
        }
      }
      if (((param_1->Views).ArrayNum < 1) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar29 = (**(code **)(**(longlong **)
                              (*(longlong *)(param_1->Views).AllocatorInstance.Data + 0x10) + 8))();
      GSecondViewState->SequencerState = *(ESequencerState *)(lVar29 + 0x2788);
      pTVar7 = CVarSplitScreenDebugLumenScene.Ref;
      bVar14 = IsInParallelGameThread();
      if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
         (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pTVar7->ShadowedValue[0] == 0) {
        pcVar6 = *(code **)(GSecondViewState->_padding_ + 0x108);
        if ((local_3e8 < 2) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*pcVar6)(GSecondViewState,
                  *(undefined8 *)(*(longlong *)(local_3f8.InlineData[0].Pad + uVar30) + 0x40));
      }
      else {
        pcVar6 = *(code **)(GSecondViewState->_padding_ + 0x100);
        if ((local_3e8 < 2) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*pcVar6)(GSecondViewState,
                  *(undefined8 *)(*(longlong *)(local_3f8.InlineData[0].Pad + uVar30) + 0x40));
      }
      local_5a8 = GSecondViewState;
    }
    pFVar22 = operator_new(0x1c30);
    if (pFVar22 == (FSceneView *)0x0) {
      pFVar22 = (FSceneView *)0x0;
    }
    else {
      pFVar22 = FSceneView::FSceneView(pFVar22,(FSceneViewInitOptions *)local_708);
    }
    iVar17 = iVar16;
    if (local_798 != 0) {
      iVar17 = 0;
    }
    pFVar22->PrimaryViewIndex = iVar17;
    if (((param_1->Views).ArrayNum < 1) &&
       (bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FFinalPostProcessSettings::operator=
              (&pFVar22->FinalPostProcessSettings,
               (FFinalPostProcessSettings *)
               (*(longlong *)(param_1->Views).AllocatorInstance.Data + 0x1320));
    if ((local_3b8 <= iVar16) &&
       (bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    **(undefined8 **)(local_3c8.InlineData[0].Pad + uVar30) = pFVar22;
    if ((local_798 != 0) && (iVar16 == 1)) {
      if ((local_3e8 < 2) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar29 = *(longlong *)(local_3f8.InlineData[0].Pad + uVar30);
      *(undefined1 *)(lVar29 + 0xc0) = 1;
      if (1 < GNumExplicitGPUsForRendering) {
        *(undefined1 *)(lVar29 + 0xc4) = 1;
        (pFVar22->GPUMask).GPUMask = local_7d0.InlineData[1].Pad._0_4_;
        pFVar22->bOverrideGPUMask = true;
      }
    }
    if (local_4b8[0]._12_4_ != -1) {
      local_4b8[1]._16_4_ = 0;
      if ((ForElementType<FSetElementId>)local_4b8[1]._8_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_4b8[1]._8_8_);
      }
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_4b8);
    }
    local_4c0 = 0;
    if (local_4c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_4c8);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_508);
    uVar13 = local_3d0;
    pTVar12 = local_778;
    uVar24 = (ulonglong)(iVar16 + 1U);
    local_7d0.InlineData[1].Pad._0_4_ =
         local_7d0.InlineData[1].Pad._0_4_ << 1 | (uint)((int)local_7d0.InlineData[1].Pad._0_4_ < 0)
    ;
    uVar30 = uVar30 + 8;
    if (1 < (int)(iVar16 + 1U)) {
      uVar30 = (ulonglong)(int)local_3d0;
      pTVar28 = local_3e0.InlineData;
      pTVar1 = local_3e0.InlineData + uVar30;
      while( true ) {
        if ((uint)uVar30 != uVar13) {
          local_7d8[0] = 0;
          `TCheckedPointerIterator<FSceneViewFamily_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_7d8);
        }
        if (pTVar28 == pTVar1) break;
        local_790._8_8_ = *(undefined8 *)pTVar28->Pad;
        if (((pTVar12 <= (TArray<FSceneViewFamily_*,TFixedAllocator<2>_> *)(local_790 + 8)) &&
            (local_790 + 8 < (pTVar12->AllocatorInstance).InlineData + pTVar12->ArrayMax)) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar31 = pTVar12->ArrayNum;
        if (iVar31 == pTVar12->ArrayMax) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneViewFamily_*>_>
                             (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
          pTVar12->ArrayNum = iVar31;
        }
        pTVar28 = pTVar28 + 1;
        pTVar12->ArrayNum = iVar31 + 1;
        *(undefined8 *)(pTVar12->AllocatorInstance).InlineData[iVar31].Pad = local_790._8_8_;
        uVar30 = (ulonglong)local_3d0;
      }
      iVar31 = pTVar12->ArrayNum;
      local_7b8 = pTVar12;
      if ((iVar31 < 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_7b0 = CONCAT44(uStack_7b0._4_4_,iVar31);
      local_748->DataPtr = (FSceneViewFamily **)local_7b8;
      *(longlong *)&local_748->ArrayNum = uStack_7b0;
      return;
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Deallocate @ 14549f610

void __cdecl ViewSnapshotCache::Deallocate(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  atomic<void_*> aVar6;
  atomic<void_*> local_18 [2];
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer\\ViewSnapshotCache.cpp"
                       ,0x36,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = ((int)Cache.NumFreeSnapshots - (int)Cache.NumSnapshots) + -2;
  Cache.NumSnapshotsToRemove = 0;
  if (0 < iVar4) {
    Cache.NumSnapshotsToRemove = iVar4;
  }
  LOCK();
  Cache.NumSnapshots = (atomic<int>)0x0;
  UNLOCK();
  while( true ) {
    uVar3 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)&Cache);
    aVar6 = (atomic<void_*>)0x0;
    if (uVar3 != 0) {
      aVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe][uVar3 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
    }
    if (aVar6 == (atomic<void_*>)0x0) break;
    local_18[0] = aVar6;
    if ((Cache.DeallocatedSnapshots.AllocatorInstance.Data <= local_18) &&
       (local_18 <
        (atomic<void_*> *)
        (Cache.DeallocatedSnapshots.AllocatorInstance.Data +
        (longlong)Cache.DeallocatedSnapshots.ArrayMax * 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (Cache.DeallocatedSnapshots.ArrayNum == Cache.DeallocatedSnapshots.ArrayMax) {
      Cache.DeallocatedSnapshots.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&Cache.DeallocatedSnapshots.AllocatorInstance,
                      &Cache.DeallocatedSnapshots.ArrayMax);
    }
    lVar5 = (longlong)Cache.DeallocatedSnapshots.ArrayNum;
    Cache.DeallocatedSnapshots.ArrayNum = Cache.DeallocatedSnapshots.ArrayNum + 1;
    *(atomic<void_*> *)(Cache.DeallocatedSnapshots.AllocatorInstance.Data + lVar5 * 8) = local_18[0]
    ;
  }
  return;
}

// Destroy @ 1454a0790

void __cdecl ViewSnapshotCache::Destroy(void)

{
  FViewSnapshotCache::Destroy(&Cache);
  return;
}

// GetSceneCaptureGroupFlags @ 1454a7de0

ESceneRenderGroupFlags __cdecl GetSceneCaptureGroupFlags(USceneCaptureComponent *param_1)

{
  byte bVar1;
  ESceneRenderGroupFlags EVar2;
  
  bVar1 = param_1->field_0x252;
  EVar2 = None;
  if (param_1->bSuppressGpuCaptureOrDump == '\0') {
    if (param_1->bCaptureGpuNextRender != '\0') {
      EVar2 = GpuCapture;
      bVar1 = bVar1 & 0xfb;
    }
    if ((bVar1 & 8) != 0) {
      EVar2 = EVar2 | GpuDump;
      bVar1 = bVar1 & 0xf7;
    }
  }
  param_1->field_0x252 = bVar1 & 0xef;
  return EVar2;
}

// GetShowOnlyAndHiddenComponents @ 1454a81c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
GetShowOnlyAndHiddenComponents
          (USceneCaptureComponent *param_1,
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *param_2,TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                   *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  code *pcVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  UObject *pUVar11;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar12;
  UClass *pUVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  undefined1 local_res20 [8];
  undefined1 local_168 [4];
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  FPrimitiveComponentId local_120;
  int local_11c;
  int local_118;
  FPrimitiveComponentId local_114;
  FPrimitiveComponentId local_110;
  int local_10c;
  int local_108;
  FPrimitiveComponentId local_104;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FString local_a0 [2];
  undefined4 local_74;
  undefined4 local_54;
  
  if ((param_1 == (USceneCaptureComponent *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("SceneCaptureComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                          ,0x292,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar19 = 0;
  for (iVar14 = iVar19;
      (local_164 = iVar19, -1 < iVar14 && (iVar14 < (param_1->HiddenComponents).ArrayNum));
      iVar14 = iVar14 + 1) {
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((param_1->HiddenComponents).AllocatorInstance.Data +
                                  (longlong)iVar14 * 8));
    if (pUVar11 != (UObject *)0x0) {
      local_160 = *(undefined4 *)&pUVar11[0x14].field_0x24;
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveComponentId>(param_2,&local_120,(bool *)&local_160);
    }
  }
  do {
    iVar14 = 0;
    if ((local_164 < 0) || ((param_1->HiddenActors).ArrayNum <= local_164)) {
      if (param_1->PrimitiveRenderMode == PRM_UseShowOnlyList) {
        (param_3->field0_0x0).TypedValue.HashSize = 0;
        pvVar7 = *(void **)((longlong)&param_3->field0_0x0 + 0x40);
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)param_3);
        *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10) = 0;
        *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x18) = 0;
        *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x38) = 0;
        *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x48) = 0;
        *(undefined8 *)&param_3->field0_0x0 = 0;
        *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = 0;
        *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x28) = 0;
        *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x34) = 0;
        *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x40) = 0;
        iVar19 = iVar14;
        if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) == -1) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        for (; (-1 < iVar19 && (iVar19 < (param_1->ShowOnlyComponents).ArrayNum));
            iVar19 = iVar19 + 1) {
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((param_1->ShowOnlyComponents).AllocatorInstance.Data +
                                        (longlong)iVar19 * 8));
          if (pUVar11 != (UObject *)0x0) {
            if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) == -1) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_158 = *(undefined4 *)&pUVar11[0x14].field_0x24;
            TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            ::Emplace<FPrimitiveComponentId>
                      ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                        *)param_3,&local_110,(bool *)&local_158);
          }
        }
        while ((local_164 = iVar14, -1 < local_164 &&
               (local_164 < (param_1->ShowOnlyActors).ArrayNum))) {
          lVar4 = *(longlong *)
                   ((param_1->ShowOnlyActors).AllocatorInstance.Data + (longlong)local_164 * 8);
          if (lVar4 != 0) {
            pTVar12 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                  *)(lVar4 + 0x248));
            iStack_148 = 0;
            uStack_144 = 1;
            local_130 = 0;
            local_140 = &(pTVar12->Elements).field_0x10;
            iVar14 = *(int *)&(pTVar12->Elements).field_0x28;
            iStack_134 = iStack_148;
            if (iVar14 != 0) {
              puVar5 = *(uint **)&(pTVar12->Elements).field_0x20;
              puVar18 = (uint *)local_140;
              if (puVar5 != (uint *)0x0) {
                puVar18 = puVar5;
              }
              uVar16 = *puVar18;
              iStack_148 = 0;
              local_130 = 0;
              while (uVar16 == 0) {
                iStack_148 = iStack_148 + 1;
                local_130 = local_130 + 0x20;
                iStack_134 = iVar14;
                if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148)
                goto LAB_1454a86e0;
                uVar16 = puVar18[iStack_148];
              }
              uStack_144 = ~(uVar16 - 1) & uVar16;
              uVar2 = (ulonglong)uStack_144 * 2 + 1;
              lVar4 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              local_10c = (int)lVar4;
              iStack_134 = local_10c + -1 + local_130;
              if (iVar14 < iStack_134) {
                iStack_134 = iVar14;
              }
            }
LAB_1454a86e0:
            uVar16 = *(uint *)&(pTVar12->Elements).field_0x28;
            puVar1 = &(pTVar12->Elements).field_0x10;
            uStack_12c = local_54;
            uVar15 = uVar16 & 0xffffffe0;
            iStack_128 = *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34;
            TStack_c8._padding_ = CONCAT44(uStack_144,iStack_148);
            uStack_138 = 0xffffffff;
            TStack_c8.CurrentBitIndex = iStack_134;
            TStack_c8.UnvisitedBitMask = 0xffffffff;
            iVar14 = (int)uVar16 >> 5;
            TStack_c8._28_4_ = local_54;
            TStack_c8.BaseBitIndex = local_130;
            uStack_a8 = CONCAT44(uStack_124,iStack_128);
            local_150 = pTVar12;
            local_d0 = pTVar12;
            TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
            if ((((int)uVar16 < 0) || (*(int *)&(pTVar12->Elements).field_0x28 < (int)uVar16)) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar3 = *(uint *)&(pTVar12->Elements).field_0x28;
            if (uVar16 != uVar3) {
              puVar6 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
              puVar17 = puVar1;
              if (puVar6 != (undefined1 *)0x0) {
                puVar17 = puVar6;
              }
              uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
              while (uVar16 == 0) {
                iVar14 = iVar14 + 1;
                uVar15 = uVar15 + 0x20;
                uVar16 = uVar3;
                if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar14)
                goto LAB_1454a8800;
                uVar16 = *(uint *)(puVar17 + (longlong)iVar14 * 4);
              }
              uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
              lVar4 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              local_108 = (int)lVar4;
              uVar16 = local_108 + -1 + uVar15;
              if ((int)uVar3 < (int)uVar16) {
                uVar16 = uVar3;
              }
            }
LAB_1454a8800:
            while( true ) {
              pTVar9 = local_d0;
              if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34
                  != (int)uStack_a8) {
                local_168[0] = 0;
                `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
              }
              if (((TStack_c8.CurrentBitIndex == uVar16) &&
                  (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                 (pTVar9 == pTVar12)) break;
              lVar4 = *(longlong *)
                       (*(longlong *)&pTVar9->Elements + (longlong)TStack_c8.CurrentBitIndex * 0x10)
              ;
              if (lVar4 != 0) {
                pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
                iVar14 = (int)pUVar13->_padding_;
                if ((iVar14 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar14 * 8) ==
                    &pUVar13->_padding_)) {
                  if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) == -1) &&
                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_154 = *(undefined4 *)(lVar4 + 0x344);
                  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                  ::Emplace<FPrimitiveComponentId>
                            ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                              *)param_3,&local_104,(bool *)&local_154);
                }
              }
              TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
            }
          }
          iVar14 = local_164 + 1;
        }
      }
      else if (((0 < (param_1->ShowOnlyComponents).ArrayNum) ||
               (0 < (param_1->ShowOnlyActors).ArrayNum)) && (bWarned == false)) {
        if (4 < (byte)LogRenderer._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,local_a0,(UObject *)0x0);
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRenderer);
          if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
          }
        }
        bWarned = true;
      }
      return;
    }
    lVar4 = *(longlong *)((param_1->HiddenActors).AllocatorInstance.Data + (longlong)local_164 * 8);
    if (lVar4 != 0) {
      pTVar12 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                            *)(lVar4 + 0x248));
      uStack_144 = 1;
      local_130 = 0;
      local_140 = &(pTVar12->Elements).field_0x10;
      iVar19 = *(int *)&(pTVar12->Elements).field_0x28;
      iStack_134 = 0;
      iStack_148 = iVar14;
      if (iVar19 != 0) {
        puVar5 = *(uint **)&(pTVar12->Elements).field_0x20;
        puVar18 = (uint *)local_140;
        if (puVar5 != (uint *)0x0) {
          puVar18 = puVar5;
        }
        uVar16 = *puVar18;
        local_130 = iVar14;
        while (uVar16 == 0) {
          iStack_148 = iStack_148 + 1;
          local_130 = local_130 + 0x20;
          iStack_134 = iVar19;
          if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148)
          goto LAB_1454a8330;
          uVar16 = puVar18[iStack_148];
        }
        uStack_144 = ~(uVar16 - 1) & uVar16;
        uVar2 = (ulonglong)uStack_144 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_11c = (int)lVar4;
        iStack_134 = local_130 + -1 + local_11c;
        if (iVar19 < iStack_134) {
          iStack_134 = iVar19;
        }
      }
LAB_1454a8330:
      uVar16 = *(uint *)&(pTVar12->Elements).field_0x28;
      puVar1 = &(pTVar12->Elements).field_0x10;
      uStack_12c = local_74;
      uVar15 = uVar16 & 0xffffffe0;
      iStack_128 = *(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34;
      TStack_f8._padding_ = CONCAT44(uStack_144,iStack_148);
      uStack_138 = 0xffffffff;
      TStack_f8.CurrentBitIndex = iStack_134;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_f8._28_4_ = local_74;
      TStack_f8.BaseBitIndex = local_130;
      uStack_d8 = CONCAT44(uStack_124,iStack_128);
      local_150 = pTVar12;
      local_100 = pTVar12;
      TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
      if ((((int)uVar16 < 0) || (*(int *)&(pTVar12->Elements).field_0x28 < (int)uVar16)) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar3 = *(uint *)&(pTVar12->Elements).field_0x28;
      if (uVar16 != uVar3) {
        puVar6 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
        puVar17 = puVar1;
        if (puVar6 != (undefined1 *)0x0) {
          puVar17 = puVar6;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          iVar14 = iVar14 + 1;
          uVar15 = uVar15 + 0x20;
          uVar16 = uVar3;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar14)
          goto LAB_1454a8450;
          uVar16 = *(uint *)(puVar17 + (longlong)iVar14 * 4);
        }
        uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_118 = (int)lVar4;
        uVar16 = local_118 + -1 + uVar15;
        if ((int)uVar3 < (int)uVar16) {
          uVar16 = uVar3;
        }
      }
LAB_1454a8450:
      while( true ) {
        pTVar9 = local_100;
        if (*(int *)&(local_100->Elements).field_0x8 - *(int *)&(local_100->Elements).field_0x34 !=
            (int)uStack_d8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_f8.CurrentBitIndex == uVar16) &&
            (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == pTVar12)) break;
        lVar4 = *(longlong *)
                 (*(longlong *)&pTVar9->Elements + (longlong)TStack_f8.CurrentBitIndex * 0x10);
        if (lVar4 != 0) {
          pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar14 = (int)pUVar13->_padding_;
          if ((iVar14 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar14 * 8) ==
              &pUVar13->_padding_)) {
            local_15c = *(undefined4 *)(lVar4 + 0x344);
            TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            ::Emplace<FPrimitiveComponentId>(param_2,&local_114,(bool *)&local_15c);
          }
        }
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      }
    }
    local_164 = local_164 + 1;
  } while( true );
}

// GetViewStateUniqueID @ 1454aadf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __cdecl GetViewStateUniqueID(FSceneRenderer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (*(int *)&param_1->field_0x18 != 0) {
    if (*(int *)&param_1->field_0x18 < 1) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    if (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x1c40) != 0) {
      if (*(int *)&param_1->field_0x18 < 1) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
      return *(uint *)(*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x1c40) + 0x30);
    }
  }
  return 0;
}

// MobileRequiresStaticMeshUpdateOnLocalLightChange @ 1454ad310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl MobileRequiresStaticMeshUpdateOnLocalLightChange(FStaticShaderPlatform param_1)

{
  bool bVar1;
  
  if (((!FReadOnlyCVARCache::bMobileDeferredShadingValue) || (!FReadOnlyCVARCache::bMobileHDR)) &&
     (0 < FReadOnlyCVARCache::MobileForwardLocalLightsValue)) {
    bVar1 = MobileLocalLightsUseSinglePermutation(param_1.Platform);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// PrepareDirectionalLightShadowOcclusionQuery @ 1454adaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
PrepareDirectionalLightShadowOcclusionQuery
          (uint *param_1,TRHIBufferInitializer<UE::Math::TVector<float>_> *param_2,
          FViewInfo *param_3,FProjectedShadowInfo *param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FViewMatrices *pFVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  
  pFVar9 = FSceneView::GetShadowViewMatrices((FSceneView *)param_3);
  fVar12 = (param_4->CascadeSettings).SplitNear;
  pdVar1 = (pFVar9->ProjectionMatrix).M[3] + 3;
  dVar13 = __real_3ff0000000000000 / (pFVar9->ProjectionMatrix).M[0][0];
  dVar2 = (pFVar9->ProjectionMatrix).M[1][1];
  dVar14 = __real_3fe921fb60000000;
  if (*pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1) {
    dVar14 = atan(dVar13);
  }
  fVar11 = tanf((float)dVar14);
  lVar10 = (longlong)(int)*param_1;
  fVar11 = fVar11 * fVar12;
  dVar5 = (double)fVar12;
  lVar4 = *(longlong *)&param_2->field_0x40;
  dVar7 = (double)fVar11;
  dVar14 = dVar5 * (pFVar9->ViewMatrix).M[0][2];
  dVar6 = dVar5 * (pFVar9->ViewMatrix).M[2][2];
  dVar5 = dVar5 * (pFVar9->ViewMatrix).M[1][2];
  dVar19 = dVar7 * (pFVar9->ViewMatrix).M[0][0];
  dVar8 = dVar7 * (pFVar9->ViewMatrix).M[2][0];
  dVar7 = dVar7 * (pFVar9->ViewMatrix).M[1][0];
  dVar13 = (double)(fVar11 / (float)(dVar13 * dVar2));
  dVar16 = dVar14 + dVar19;
  dVar18 = dVar6 + dVar8;
  dVar2 = dVar13 * (pFVar9->ViewMatrix).M[0][1];
  dVar14 = dVar14 - dVar19;
  dVar17 = dVar5 + dVar7;
  dVar19 = dVar13 * (pFVar9->ViewMatrix).M[2][1];
  dVar6 = dVar6 - dVar8;
  dVar13 = dVar13 * (pFVar9->ViewMatrix).M[1][1];
  dVar5 = dVar5 - dVar7;
  fVar12 = (float)(dVar16 + dVar2);
  fVar21 = (float)(dVar17 + dVar13);
  fVar20 = (float)(dVar18 + dVar19);
  fVar11 = (float)(dVar6 - dVar19);
  *(float *)(lVar4 + lVar10 * 0xc) = fVar12;
  *(float *)(lVar4 + 4 + lVar10 * 0xc) = fVar21;
  *(float *)(lVar4 + 8 + lVar10 * 0xc) = fVar20;
  uVar3 = *param_1;
  lVar4 = *(longlong *)&param_2->field_0x40;
  *(ulonglong *)(lVar4 + (longlong)(int)(uVar3 + 1) * 0xc) =
       CONCAT44((float)(dVar5 + dVar13),(float)(dVar14 + dVar2));
  *(float *)(lVar4 + 8 + (longlong)(int)(uVar3 + 1) * 0xc) = (float)(dVar6 + dVar19);
  uVar3 = *param_1;
  uVar15 = CONCAT44((float)(dVar5 - dVar13),(float)(dVar14 - dVar2));
  lVar4 = *(longlong *)&param_2->field_0x40;
  *(undefined8 *)(lVar4 + (longlong)(int)(uVar3 + 2) * 0xc) = uVar15;
  *(float *)(lVar4 + 8 + (longlong)(int)(uVar3 + 2) * 0xc) = fVar11;
  lVar10 = (longlong)(int)(*param_1 + 3);
  lVar4 = *(longlong *)&param_2->field_0x40;
  *(float *)(lVar4 + lVar10 * 0xc) = fVar12;
  *(float *)(lVar4 + 4 + lVar10 * 0xc) = fVar21;
  *(float *)(lVar4 + 8 + lVar10 * 0xc) = fVar20;
  uVar3 = *param_1;
  lVar4 = *(longlong *)&param_2->field_0x40;
  *(undefined8 *)(lVar4 + (longlong)(int)(uVar3 + 4) * 0xc) = uVar15;
  *(float *)(lVar4 + 8 + (longlong)(int)(uVar3 + 4) * 0xc) = fVar11;
  uVar3 = *param_1;
  lVar4 = *(longlong *)&param_2->field_0x40;
  *(ulonglong *)(lVar4 + (longlong)(int)(uVar3 + 5) * 0xc) =
       CONCAT44((float)(dVar17 - dVar13),(float)(dVar16 - dVar2));
  *(float *)(lVar4 + 8 + (longlong)(int)(uVar3 + 5) * 0xc) = (float)(dVar18 - dVar19);
  *param_1 = *param_1 + 6;
  return;
}

// PrepareProjectedShadowOcclusionQuery @ 1454addb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
PrepareProjectedShadowOcclusionQuery
          (uint *param_1,TRHIBufferInitializer<UE::Math::TVector<float>_> *param_2,
          FViewInfo *param_3,FProjectedShadowInfo *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar7 = __real_bf800000;
  fVar6 = __real_3f800000;
  fVar14 = (float)((double)param_3->_padding_ - (param_4->PreShadowTranslation).field0_0x0._s_0.X);
  uVar10 = 0;
  fVar15 = (float)((double)param_3->_padding_ - (param_4->PreShadowTranslation).field0_0x0._s_0.Y);
  fVar16 = (float)((double)param_3->_padding_ - (param_4->PreShadowTranslation).field0_0x0._s_0.Z);
  do {
    uVar9 = 0;
    do {
      fVar12 = fVar6;
      if (uVar10 != 0) {
        fVar12 = 0.0;
      }
      fVar11 = fVar6;
      if (uVar9 != 0) {
        fVar11 = fVar7;
      }
      lVar1 = *(longlong *)&param_2->field_0x40;
      uVar8 = (ulonglong)((uint)(ushort)((short)uVar9 * 2 + (short)uVar10) + *param_1);
      fVar2 = (param_4->InvReceiverInnerMatrix).M[1][2];
      fVar3 = (param_4->InvReceiverInnerMatrix).M[0][2];
      fVar4 = (param_4->InvReceiverInnerMatrix).M[2][2];
      fVar5 = (param_4->InvReceiverInnerMatrix).M[3][2];
      fVar13 = fVar6 / (fVar11 * (param_4->InvReceiverInnerMatrix).M[1][3] +
                        (param_4->InvReceiverInnerMatrix).M[0][3] * 1.0 +
                        fVar12 * (param_4->InvReceiverInnerMatrix).M[2][3] +
                       (param_4->InvReceiverInnerMatrix).M[3][3] * 1.0);
      *(ulonglong *)(lVar1 + uVar8 * 0xc) =
           CONCAT44(fVar13 * (fVar11 * (param_4->InvReceiverInnerMatrix).M[1][1] +
                              (param_4->InvReceiverInnerMatrix).M[0][1] * 1.0 +
                              fVar12 * (param_4->InvReceiverInnerMatrix).M[2][1] +
                             (param_4->InvReceiverInnerMatrix).M[3][1] * 1.0) + fVar15,
                    fVar13 * (fVar11 * (param_4->InvReceiverInnerMatrix).M[1][0] +
                              (param_4->InvReceiverInnerMatrix).M[0][0] * 1.0 +
                              fVar12 * (param_4->InvReceiverInnerMatrix).M[2][0] +
                             (param_4->InvReceiverInnerMatrix).M[3][0] * 1.0) + fVar14);
      *(float *)(lVar1 + 8 + uVar8 * 0xc) =
           fVar13 * (fVar11 * fVar2 + fVar3 * 1.0 + fVar12 * fVar4 + fVar5 * 1.0) + fVar16;
      fVar12 = fVar6;
      if (uVar10 != 0) {
        fVar12 = 0.0;
      }
      fVar11 = fVar6;
      if (uVar9 != 0) {
        fVar11 = fVar7;
      }
      lVar1 = *(longlong *)&param_2->field_0x40;
      uVar8 = (ulonglong)((uint)(ushort)(((short)uVar9 + 2) * 2 + (short)uVar10) + *param_1);
      uVar9 = uVar9 + 1;
      fVar2 = (param_4->InvReceiverInnerMatrix).M[1][2];
      fVar3 = (param_4->InvReceiverInnerMatrix).M[0][2];
      fVar4 = (param_4->InvReceiverInnerMatrix).M[2][2];
      fVar5 = (param_4->InvReceiverInnerMatrix).M[3][2];
      fVar13 = fVar6 / (fVar11 * (param_4->InvReceiverInnerMatrix).M[1][3] +
                        (param_4->InvReceiverInnerMatrix).M[0][3] * -1.0 +
                        fVar12 * (param_4->InvReceiverInnerMatrix).M[2][3] +
                       (param_4->InvReceiverInnerMatrix).M[3][3] * 1.0);
      *(ulonglong *)(lVar1 + uVar8 * 0xc) =
           CONCAT44(fVar13 * (fVar11 * (param_4->InvReceiverInnerMatrix).M[1][1] +
                              (param_4->InvReceiverInnerMatrix).M[0][1] * -1.0 +
                              fVar12 * (param_4->InvReceiverInnerMatrix).M[2][1] +
                             (param_4->InvReceiverInnerMatrix).M[3][1] * 1.0) + fVar15,
                    fVar13 * (fVar11 * (param_4->InvReceiverInnerMatrix).M[1][0] +
                              (param_4->InvReceiverInnerMatrix).M[0][0] * -1.0 +
                              fVar12 * (param_4->InvReceiverInnerMatrix).M[2][0] +
                             (param_4->InvReceiverInnerMatrix).M[3][0] * 1.0) + fVar14);
      *(float *)(lVar1 + 8 + uVar8 * 0xc) =
           fVar13 * (fVar11 * fVar2 + fVar3 * -1.0 + fVar12 * fVar4 + fVar5 * 1.0) + fVar16;
    } while (uVar9 < 2);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 2);
  *param_1 = *param_1 + 8;
  return;
}

// SetupSceneViewExtensionsForSceneCapture @ 1454b9d40

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
SetupSceneViewExtensionsForSceneCapture
          (FSceneViewFamily *param_1,TArrayView<FSceneView_*_const,int> *param_2)

{
  FSceneView **ppFVar1;
  int iVar2;
  FSceneView *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FSceneView **ppFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->ViewExtensions).ArrayNum;
  pFVar4 = (param_1->ViewExtensions).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->ViewExtensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    (**(code **)**(undefined8 **)pFVar4)(*(undefined8 **)pFVar4,param_1);
    pFVar4 = pFVar4 + 0x10;
  }
  ppFVar6 = param_2->DataPtr;
  ppFVar1 = ppFVar6 + param_2->ArrayNum;
  for (; ppFVar6 != ppFVar1; ppFVar6 = ppFVar6 + 1) {
    iVar2 = (param_1->ViewExtensions).ArrayNum;
    pFVar4 = (param_1->ViewExtensions).AllocatorInstance.Data;
    pFVar3 = *ppFVar6;
    pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((param_1->ViewExtensions).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,param_1,pFVar3);
      pFVar4 = pFVar4 + 0x10;
    }
  }
  return;
}

// SetupViewFamilyForSceneCapture @ 1454b9e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FSceneView_*,TSizedDefaultAllocator<32>_> * __cdecl
SetupViewFamilyForSceneCapture
          (TArray<FSceneView_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSceneViewFamily *param_1,USceneCaptureComponent *param_2,
          TArrayView<FSceneCaptureViewInfo_const_,int> *param_3,float param_4,bool param_5,
          bool param_6,FPostProcessSettings *param_7,FFinalPostProcessSettings *param_8,
          float param_9,AActor *param_10,int param_11)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  FSceneCaptureViewInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined1 uVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  TArray<FSceneView_*,TSizedDefaultAllocator<32>_> *pTVar22;
  longlong lVar23;
  UWorld *pUVar24;
  AWorldSettings *pAVar25;
  UClass *pUVar26;
  FSceneView *this;
  FSceneView *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auStackY_d98 [32];
  FSceneView *local_d48;
  uint local_d40;
  longlong local_d38;
  AActor *local_d30;
  FFinalPostProcessSettings *local_d28;
  FPostProcessSettings *local_d20;
  TArrayView<FSceneCaptureViewInfo_const_,int> *local_d18;
  undefined8 local_d10;
  uint local_d08;
  TVector<double>_u_0 local_cf8;
  TVector<double>_u_0 local_cd8;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 local_b90;
  undefined8 local_b88;
  FSceneViewFamily *local_b80;
  FSceneViewStateInterface *local_b78;
  undefined8 uStack_b70;
  FSceneViewOwner local_b68;
  undefined4 local_b58;
  undefined8 local_b50;
  FLinearColor_u_0 local_b48;
  FLinearColor_u_0 local_b38;
  FLinearColor_u_0 local_b28;
  undefined4 local_b18;
  undefined4 local_b14;
  float local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  ForAnyElementType local_ad8;
  undefined8 local_ad0;
  TBitArray<FDefaultBitArrayAllocator> local_ac8;
  undefined4 local_aa8;
  undefined4 local_aa4;
  void *local_a98;
  undefined4 local_a90;
  ForAnyElementType local_a88;
  undefined4 local_a80;
  int local_a7c;
  TBitArray<FDefaultBitArrayAllocator> local_a78;
  undefined4 local_a58;
  undefined4 local_a54;
  void *local_a48;
  undefined4 local_a40;
  undefined8 local_a38;
  float local_a30;
  float local_a2c;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined2 local_a10;
  undefined4 local_a0c;
  undefined4 local_a08;
  float fStack_a04;
  undefined4 uStack_a00;
  uint uStack_9fc;
  undefined4 local_9f8;
  ushort local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  TVector<double>_u_0 local_9c8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined4 local_988;
  undefined1 local_984;
  undefined4 local_980;
  undefined2 local_97c;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined1 local_964;
  uint local_960;
  undefined1 local_95c;
  undefined4 local_958;
  FPostProcessSettings local_948;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_168;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_d98;
  local_d20 = param_7;
  local_d30 = param_10;
  local_d28 = param_8;
  local_d40 = param_11;
  local_d18 = param_3;
  if ((param_1->ScreenPercentageInterface != (ISceneViewFamilyScreenPercentage *)0x0) &&
     (bVar17 = FDebug::CheckVerifyFailedImpl2
                         ("!ViewFamily.GetScreenPercentageInterface()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                          ,0x2e4,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    pTVar22 = (TArray<FSceneView_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar22;
  }
  if ((((param_11 != -1) && (param_3->ArrayNum != 1)) &&
      ((param_11 != 6 || (param_3->ArrayNum != 6)))) &&
     (bVar17 = FDebug::CheckVerifyFailedImpl2
                         ("CubemapFaceIndex == INDEX_NONE || Views.Num() == 1 || (CubemapFaceIndex == CubeFace_MAX && Views.Num() == CubeFace_MAX)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                          ,0x2e8,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    pTVar22 = (TArray<FSceneView_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar22;
  }
  uVar20 = (**(code **)(param_1->Scene->_padding_ + 0x4e8))();
  uVar28 = param_3->ArrayNum;
  uVar29 = (ulonglong)uVar28;
  param_1->FrameNumber = uVar20;
  param_1->FrameCounter = GFrameCounter;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar29);
  }
  if (0 < (int)uVar28) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar28,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  uVar15 = _UNK_150fabfe8;
  uVar14 = ___xmm_3faaaaabbf8000004a00000000000000;
  uVar13 = _UNK_150fabfd8;
  uVar12 = ___xmm_3f80000042b4000042b4000042b40000;
  uVar11 = _UNK_150ee30d8;
  uVar10 = ___xmm_00000000000000000000000042b40000;
  uVar9 = _UNK_15076b1f8;
  uVar8 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar7 = __real_42c80000;
  fVar6 = __real_3c23d70a;
  uVar20 = 0;
  if (0 < (int)uVar28) {
    local_d38 = 0;
    do {
      uVar28 = 0;
      if ((int)uVar20 < (int)uVar29) {
        uVar28 = ~uVar20 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar17 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        pTVar22 = (TArray<FSceneView_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar22;
      }
      pFVar3 = param_3->DataPtr;
      FSceneViewProjectionData::FSceneViewProjectionData
                ((FSceneViewProjectionData *)&local_cd8._s_0);
      local_b78 = (FSceneViewStateInterface *)0x0;
      uStack_b70 = 0;
      local_b80 = (FSceneViewFamily *)0x0;
      FSceneViewOwner::FSceneViewOwner(&local_b68,(AActor *)0x0);
      lVar30 = local_d38;
      local_a08 = (undefined4)uVar10;
      local_b48 = FLinearColor::Transparent.field0_0x0;
      local_b38 = FLinearColor::Transparent.field0_0x0;
      local_b50 = 0;
      local_b18 = 0;
      local_ad8.Data = (FScriptContainerElement *)0x0;
      local_ad0 = 0;
      local_ac8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_ac8.NumBits = 0;
      local_aa4 = 0;
      local_a98 = (void *)0x0;
      local_a90 = 0;
      local_a88.Data = (FScriptContainerElement *)0x0;
      local_a80 = 0;
      local_a78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_a78.NumBits = 0;
      local_a54 = 0;
      local_a48 = (void *)0x0;
      local_a40 = 0;
      uStack_9fc._1_3_ = (uint3)((ulonglong)uVar11 >> 0x28);
      uStack_9fc = (uint)uStack_9fc._1_3_ << 8;
      local_9f8 = 0;
      local_9f4 = 0;
      local_b28 = FLinearColor::White.field0_0x0;
      local_b08 = 0;
      uStack_b00 = 0;
      local_ae8 = 0;
      uStack_ae0 = 0;
      local_a28 = 0;
      uStack_a20 = 0;
      local_a18 = 0;
      local_b58 = 0xffffffff;
      local_b14 = 0xffffffff;
      local_b10 = 100.0;
      local_af8 = 0;
      uStack_af0 = 0;
      local_ac8.MaxBits = 0x80;
      local_aa8 = 0xffffffff;
      local_a7c = -1;
      local_a78.MaxBits = 0x80;
      local_a58 = 0xffffffff;
      local_a38 = 0xffffffffffffffff;
      local_a30 = 1.0;
      local_a2c = -1.0;
      local_a10 = 0x100;
      local_a0c = 0x42b40000;
      fStack_a04 = 1.0;
      uStack_a00 = 0x3f800000;
      local_9f0 = 0xbf800000;
      local_9ec = 0x3f800000;
      local_9e8 = 0x3f800000;
      local_9d8 = uVar8;
      uStack_9d0 = uVar9;
      local_bb8 = *(undefined8 *)(&pFVar3->field_0x120 + local_d38);
      local_bb0 = *(undefined8 *)(&pFVar3->field_0x128 + local_d38);
      local_b90 = *(undefined8 *)(&pFVar3->field_0x120 + local_d38);
      local_b88 = *(undefined8 *)(&pFVar3->field_0x128 + local_d38);
      local_b80 = param_1;
      FSceneViewOwner::operator=(&local_b68,local_d30);
      puVar2 = (undefined8 *)((longlong)&(pFVar3->ViewLocation).field0_0x0 + lVar30);
      local_b08 = *puVar2;
      uStack_b00 = puVar2[1];
      local_af8 = *(undefined8 *)((longlong)&(pFVar3->ViewLocation).field0_0x0 + lVar30 + 0x10);
      puVar2 = (undefined8 *)((longlong)&(pFVar3->ViewRotation).Pitch + lVar30);
      uStack_af0 = *puVar2;
      local_ae8 = puVar2[1];
      uStack_ae0 = *(undefined8 *)((longlong)&(pFVar3->ViewRotation).Roll + lVar30);
      local_cd8._s_0.X = (double)*(undefined8 *)(&pFVar3->field_0x0 + lVar30);
      local_cd8._s_0.Y = *(double *)((longlong)(&pFVar3->field_0x0 + lVar30) + 8);
      local_cd8._s_0.Z = (double)*(undefined8 *)(&pFVar3->field_0x10 + lVar30);
      local_cb8 = *(undefined8 *)(&pFVar3->field_0x20 + lVar30);
      uStack_cb0 = *(undefined8 *)((longlong)(&pFVar3->field_0x20 + lVar30) + 8);
      local_ca8 = *(undefined8 *)(&pFVar3->field_0x30 + lVar30);
      uStack_ca0 = *(undefined8 *)((longlong)(&pFVar3->field_0x30 + lVar30) + 8);
      local_c98 = *(undefined8 *)(&pFVar3->field_0x40 + lVar30);
      uStack_c90 = *(undefined8 *)((longlong)(&pFVar3->field_0x40 + lVar30) + 8);
      local_c88 = *(undefined8 *)(&pFVar3->field_0x50 + lVar30);
      uStack_c80 = *(undefined8 *)((longlong)(&pFVar3->field_0x50 + lVar30) + 8);
      local_c78 = *(undefined8 *)(&pFVar3->field_0x60 + lVar30);
      uStack_c70 = *(undefined8 *)((longlong)(&pFVar3->field_0x60 + lVar30) + 8);
      local_c68 = *(undefined8 *)(&pFVar3->field_0x70 + lVar30);
      uStack_c60 = *(undefined8 *)((longlong)(&pFVar3->field_0x70 + lVar30) + 8);
      local_c58 = *(undefined8 *)(&pFVar3->field_0x80 + lVar30);
      uStack_c50 = *(undefined8 *)((longlong)(&pFVar3->field_0x80 + lVar30) + 8);
      local_c48 = *(undefined8 *)(&pFVar3->field_0x90 + lVar30);
      uStack_c40 = *(undefined8 *)((longlong)(&pFVar3->field_0x90 + lVar30) + 8);
      local_b48 = FLinearColor::Black.field0_0x0;
      local_a2c = param_4;
      local_b18 = *(undefined4 *)((longlong)&pFVar3->StereoPass + lVar30);
      local_b14 = *(undefined4 *)((longlong)&pFVar3->StereoViewIndex + lVar30);
      local_c38 = *(undefined8 *)(&pFVar3->field_0xa0 + lVar30);
      uStack_c30 = *(undefined8 *)((longlong)(&pFVar3->field_0xa0 + lVar30) + 8);
      local_c28 = *(undefined8 *)(&pFVar3->field_0xb0 + lVar30);
      uStack_c20 = *(undefined8 *)((longlong)(&pFVar3->field_0xb0 + lVar30) + 8);
      local_c18 = *(undefined8 *)(&pFVar3->field_0xc0 + lVar30);
      uStack_c10 = *(undefined8 *)((longlong)(&pFVar3->field_0xc0 + lVar30) + 8);
      local_c08 = *(undefined8 *)(&pFVar3->field_0xd0 + lVar30);
      uStack_c00 = *(undefined8 *)((longlong)(&pFVar3->field_0xd0 + lVar30) + 8);
      local_bf8 = *(undefined8 *)(&pFVar3->field_0xe0 + lVar30);
      uStack_bf0 = *(undefined8 *)((longlong)(&pFVar3->field_0xe0 + lVar30) + 8);
      local_be8 = *(undefined8 *)(&pFVar3->field_0xf0 + lVar30);
      uStack_be0 = *(undefined8 *)((longlong)(&pFVar3->field_0xf0 + lVar30) + 8);
      local_bd8 = *(undefined8 *)(&pFVar3->field_0x100 + lVar30);
      uStack_bd0 = *(undefined8 *)((longlong)(&pFVar3->field_0x100 + lVar30) + 8);
      local_bc8 = *(undefined8 *)(&pFVar3->field_0x110 + lVar30);
      uStack_bc0 = *(undefined8 *)((longlong)(&pFVar3->field_0x110 + lVar30) + 8);
      local_9f8 = CONCAT31(local_9f8._1_3_,1);
      local_9f4 = CONCAT11(local_9f4._1_1_,param_6);
      local_a0c = *(undefined4 *)((longlong)&pFVar3->FOV + lVar30);
      local_a08 = *(undefined4 *)((longlong)&pFVar3->FOV + lVar30);
      lVar23 = (**(code **)(param_1->Scene->_padding_ + 0x410))();
      if (lVar23 != 0) {
        pUVar24 = (UWorld *)(**(code **)(param_1->Scene->_padding_ + 0x410))();
        pAVar25 = UWorld::GetWorldSettings(pUVar24,false,true);
        if (pAVar25 != (AWorldSettings *)0x0) {
          pUVar24 = (UWorld *)(**(code **)(param_1->Scene->_padding_ + 0x410))();
          pAVar25 = UWorld::GetWorldSettings(pUVar24,false,true);
          local_b10 = pAVar25->WorldToMeters;
        }
      }
      if (param_5) {
        (param_1->EngineShowFlags).PostProcessing = 0;
        local_b38 = FLinearColor::Black.field0_0x0;
      }
      if (param_2 != (USceneCaptureComponent *)0x0) {
        uVar28 = uVar20;
        if (local_d40 < 6) {
          uVar28 = local_d40;
        }
        local_b78 = USceneCaptureComponent::GetViewState(param_2,uVar28);
        local_a30 = param_2->LODDistanceFactor;
        if (fVar7 <= param_2->LODDistanceFactor) {
          local_a30 = fVar7;
        }
        if (local_a30 <= fVar6) {
          local_a30 = fVar6;
        }
        uVar18 = (**(code **)(param_2->_padding_ + 0x650))(param_2);
        uVar16 = local_9f8;
        local_9f8._0_2_ = CONCAT11(uVar18,(undefined1)local_9f8);
        if (GRayTracingSceneCaptures == -1) {
          uVar18 = param_2->bUseRayTracingIfEnabled;
        }
        else {
          uVar18 = 0 < GRayTracingSceneCaptures;
        }
        local_9f8 = CONCAT13(SUB41(uVar16,3),CONCAT12(uVar18,(undefined2)local_9f8));
        local_9f4 = CONCAT11((byte)param_2->field_0x252 >> 5,(undefined1)local_9f4) & 0x1ff;
        pUVar26 = Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
        iVar21 = (int)pUVar26->_padding_;
        if (((iVar21 <= *(int *)(param_2->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar21 * 8) ==
             &pUVar26->_padding_)) && (((uint)param_2->_padding_ >> 0x1e & 1) == 0)) {
          local_998 = uVar12;
          uStack_990 = uVar13;
          local_9c8._s_0.X = 0.0;
          local_9c8._s_0.Y = 0.0;
          local_960 = local_960 & 0xfffffffc | 4;
          local_9a8 = 0;
          uStack_9a0 = 0;
          local_9c8._s_0.Z = 0.0;
          uStack_9b0 = 0;
          local_988 = 0x44000000;
          local_984 = 1;
          local_980 = 0;
          local_97c = 0;
          local_978 = uVar14;
          uStack_970 = uVar15;
          local_964 = 0;
          local_95c = 0;
          local_958 = 0;
          FPostProcessSettings::FPostProcessSettings(&local_948);
          local_168 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_158 = 0x3f800000;
          local_154 = 0x3f800000;
          local_148 = uVar8;
          uStack_140 = uVar9;
          local_138 = 0;
          local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          (**(code **)(param_2->_padding_ + 0x668))(param_2,0);
          uVar16 = uStack_990._4_4_;
          uVar28 = local_960 >> 1;
          fStack_a04 = FMinimalViewInfo::CalculateFirstPersonFOVCorrectionFactor
                                 ((FMinimalViewInfo *)&local_9c8._s_0);
          local_d08 = CONCAT31(local_d08._1_3_,(char)uVar28) & 0xffffff01;
          local_d10 = CONCAT44(uVar16,fStack_a04);
          uStack_a00 = uVar16;
          uStack_9fc = local_d08;
          lVar30 = local_d38;
          if (local_948.WeightedBlendables.Array.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_948.WeightedBlendables.Array.AllocatorInstance.Data);
            lVar30 = local_d38;
          }
        }
      }
      this = operator_new(0x1c30);
      pFVar27 = (FSceneView *)0x0;
      if (this != (FSceneView *)0x0) {
        pFVar27 = FSceneView::FSceneView(this,(FSceneViewInitOptions *)&local_cd8._s_0);
      }
      if ((local_d40 == 6) && (uVar20 == 0)) {
        pFVar27->bEyeAdaptationAllViewPixels = true;
      }
      local_d48 = pFVar27;
      if (param_2 != (USceneCaptureComponent *)0x0) {
        GetShowOnlyAndHiddenComponents
                  (param_2,&pFVar27->HiddenPrimitives,&pFVar27->ShowOnlyPrimitives);
      }
      pFVar4 = (param_1->Views).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d48) &&
          ((FScriptContainerElement *)&local_d48 < pFVar4 + (longlong)(param_1->Views).ArrayMax * 8)
          ) && (bVar17 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
        pcVar5 = (code *)swi(3);
        pTVar22 = (TArray<FSceneView_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar22;
      }
      iVar21 = (param_1->Views).ArrayNum;
      if (iVar21 == (param_1->Views).ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(param_1->Views).AllocatorInstance,&(param_1->Views).ArrayMax);
      }
      (param_1->Views).ArrayNum = iVar21 + 1;
      *(FSceneView **)((param_1->Views).AllocatorInstance.Data + (longlong)iVar21 * 8) = local_d48;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d48) &&
          ((FScriptContainerElement *)&local_d48 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar17 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar5 = (code *)swi(3);
        pTVar22 = (TArray<FSceneView_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar22;
      }
      iVar21 = __return_storage_ptr__->ArrayNum;
      if (iVar21 == __return_storage_ptr__->ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar21 + 1;
      *(FSceneView **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar21 * 8) =
           local_d48;
      local_cf8._s_0.X = (double)*(undefined8 *)(&pFVar3->field_0x0 + lVar30);
      local_cf8._s_0.Y = *(double *)((longlong)(&pFVar3->field_0x0 + lVar30) + 8);
      local_cf8._s_0.Z = (double)*(undefined8 *)(&pFVar3->field_0x10 + lVar30);
      FSceneView::StartFinalPostprocessSettings(local_d48,(TVector<double> *)&local_cf8._s_0);
      if (local_d28 == (FFinalPostProcessSettings *)0x0) {
        (local_d48->FinalPostProcessSettings).field_0x3dc = 0;
        (local_d48->FinalPostProcessSettings).field_0x438 = 0;
        *(undefined4 *)&(local_d48->FinalPostProcessSettings).field_0x434 = 0x3f000000;
        if ((param_2 != (USceneCaptureComponent *)0x0) &&
           (cVar19 = (**(code **)(param_2->_padding_ + 0x650))(param_2), cVar19 != '\0')) {
          *(undefined4 *)&(local_d48->FinalPostProcessSettings).field_0x5c8 = 0;
          puVar1 = &(local_d48->FinalPostProcessSettings).field_0x440;
          *puVar1 = *puVar1 & 0xfe;
          puVar1 = &(local_d48->FinalPostProcessSettings).field_0x410;
          *puVar1 = *puVar1 & 0xfe;
        }
      }
      else {
        FFinalPostProcessSettings::operator=(&local_d48->FinalPostProcessSettings,local_d28);
      }
      if (local_d20 != (FPostProcessSettings *)0x0) {
        FSceneView::OverridePostProcessSettings(local_d48,local_d20,param_9);
      }
      FSceneView::EndFinalPostprocessSettings(local_d48,(FSceneViewInitOptions *)&local_cd8._s_0);
      if (param_2 != (USceneCaptureComponent *)0x0) {
        local_d48->ViewLightingChannelMask = (byte)param_2->ViewLightingChannels & 0x1f;
      }
      if (local_a7c != -1) {
        local_a40 = 0;
        if (local_a48 != (void *)0x0) {
          FMemory::Free(local_a48);
        }
        local_a80 = 0;
        if (local_a7c != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&local_a88,0,&local_a7c);
        }
        local_a58 = 0xffffffff;
        local_a54 = 0;
        local_a78.NumBits = 0;
        if (0x80 < (uint)local_a78.MaxBits) {
          local_a78.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a78,0);
        }
        if (local_a78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_a78.AllocatorInstance.SecondaryData);
        }
        if (local_a88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a88.Data);
        }
      }
      local_a90 = 0;
      if (local_a98 != (void *)0x0) {
        FMemory::Free(local_a98);
      }
      bVar17 = local_ad0._4_4_ != 0;
      local_ad0 = (ulonglong)local_ad0._4_4_ << 0x20;
      if (bVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_ad8,0,(int *)((longlong)&local_ad0 + 4));
      }
      local_aa8 = 0xffffffff;
      local_aa4 = 0;
      local_ac8.NumBits = 0;
      if (0x80 < (uint)local_ac8.MaxBits) {
        local_ac8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_ac8,0);
      }
      if (local_ac8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_ac8.AllocatorInstance.SecondaryData);
      }
      if (local_ad8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ad8.Data);
      }
      local_d38 = lVar30 + 0x1a0;
      uVar20 = uVar20 + 1;
      uVar29 = (ulonglong)(uint)local_d18->ArrayNum;
      param_3 = local_d18;
    } while ((int)uVar20 < local_d18->ArrayNum);
  }
  return __return_storage_ptr__;
}

// TrimAllOcclusionHistory @ 1454bd7f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl TrimAllOcclusionHistory(TArrayView<FViewInfo,int> *param_1)

{
  FOcclusion *pFVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  FSceneViewState *pFVar9;
  uint *puVar10;
  undefined8 uVar11;
  Type TVar12;
  longlong lVar13;
  uint *puVar14;
  FViewInfo *pFVar15;
  int iVar16;
  FViewInfo *pFVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator> *local_70
  ;
  FOcclusion *local_68;
  int iStack_60;
  uint uStack_5c;
  undefined1 *local_58;
  undefined4 uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  
  pFVar15 = param_1->DataPtr;
  pFVar17 = pFVar15 + param_1->ArrayNum;
  do {
    if (pFVar15 == pFVar17) {
      return;
    }
    if ((pFVar15->_padding_ != 0) && (pFVar9 = pFVar15->ViewState, pFVar9 != (FSceneViewState *)0x0)
       ) {
      dVar5 = *(double *)(pFVar15->_padding_ + 0x88);
      uVar7 = pFVar9->OcclusionFrameCounter;
      fVar3 = GEngine->PrimitiveProbablyVisibleTime;
      if (uVar7 == ((int)uVar7 / 6 + ((int)uVar7 >> 0x1f) +
                   (int)(((longlong)(int)uVar7 / 6 + ((longlong)(int)uVar7 >> 0x3f) & 0xffffffffU)
                        >> 0x1f)) * 6) {
        bVar6 = *(byte *)((longlong)&pFVar9->_padding_ + 4);
        TVar12 = GMaxRHIFeatureLevel;
        if (bVar6 != 5) {
          TVar12 = (Type)bVar6;
        }
        FOcclusionQueryHelpers::GetNumBufferedFrames(TVar12);
        pFVar1 = &pFVar9->Occlusion;
        iStack_60 = 0;
        iVar8 = *(int *)&(pFVar9->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x28;
        TStack_90.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(pFVar9->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x10;
        local_48 = 0;
        uStack_5c = 1;
        iStack_4c = 0;
        if (iVar8 != 0) {
          puVar10 = *(uint **)&(pFVar9->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x20;
          puVar14 = (uint *)TStack_90.Array;
          if (puVar10 != (uint *)0x0) {
            puVar14 = puVar10;
          }
          uVar7 = *puVar14;
          while (uVar7 == 0) {
            lVar13 = (longlong)iStack_60;
            local_48 = local_48 + 0x20;
            iStack_60 = iStack_60 + 1;
            iStack_4c = iVar8;
            if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_60)
            goto LAB_1454bd92a;
            uVar7 = puVar14[lVar13 + 1];
          }
          uStack_5c = -uVar7 & uVar7;
          uVar2 = (ulonglong)uStack_5c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iStack_4c = local_48 + -1 + (int)lVar13;
          if (iVar8 < iStack_4c) {
            iStack_4c = iVar8;
          }
        }
LAB_1454bd92a:
        uStack_50 = 0xffffffff;
        iStack_44 = TStack_90.CurrentBitIndex;
        TStack_90._padding_ = CONCAT44(uStack_5c,iStack_60);
        uVar11._4_4_ = iStack_4c;
        uVar11._0_4_ = 0xffffffff;
        TStack_90._28_4_ = TStack_90.CurrentBitIndex;
        TStack_90.BaseBitIndex = local_48;
        TStack_90._16_8_ = uVar11;
        local_70 = &pFVar1->PrimitiveOcclusionHistorySet;
        local_68 = pFVar1;
        local_58 = (undefined1 *)TStack_90.Array;
        iVar16 = iStack_4c;
        if (iStack_4c < iVar8) {
          do {
            fVar4 = *(float *)((longlong)iVar16 * 0x68 + 0x48 +
                              *(longlong *)&(pFVar1->PrimitiveOcclusionHistorySet).Elements);
            if ((fVar4 < (float)(dVar5 - (double)fVar3)) || ((float)dVar5 < fVar4)) {
              TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator>
              ::RemoveByIndex(local_70,iVar16);
            }
            TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
            iVar16 = TStack_90.CurrentBitIndex;
          } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
        }
      }
    }
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// UnpackCellHeader @ 1454be880

FCellHeader * __cdecl
UnpackCellHeader(FCellHeader *__return_storage_ptr__,FPackedCellHeader *param_1)

{
  FPackedCellHeader FVar1;
  uint uVar2;
  uint uVar3;
  
  FVar1 = *param_1;
  uVar2 = (uint)((ulonglong)FVar1 >> 0x15) & 0x1fffff;
  __return_storage_ptr__->ItemChunksOffset = FVar1.Packed1 >> 10;
  uVar3 = FVar1.Packed0 & 0x1fffff;
  __return_storage_ptr__->NumStaticChunks = uVar2;
  __return_storage_ptr__->NumDynamicChunks = uVar3;
  __return_storage_ptr__->bIsValid = ((ulonglong)FVar1 & 0x1fffff) != 0;
  if (((ulonglong)FVar1 & 0x1fffff) != 0) {
    uVar3 = uVar3 - 1;
    __return_storage_ptr__->NumDynamicChunks = uVar3;
  }
  __return_storage_ptr__->NumItemChunks = uVar2 + uVar3;
  return __return_storage_ptr__;
}

// UpdateSceneCaptureContent_RenderThread @ 1454be8d0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __cdecl
UpdateSceneCaptureContent_RenderThread
          (FRDGBuilder *param_1,FSceneRenderer *param_2,FSceneRenderUpdateInputs *param_3,
          FRenderTarget *param_4,FTexture *param_5,
          TArrayView<FRHICopyTextureInfo_const_,int> *param_6,bool param_7,
          FGenerateMipsParams *param_8,bool param_9,bool param_10)

{
  FSceneTextures **ppFVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  FRHITexture *pFVar5;
  longlong lVar6;
  FSceneTextures *pFVar7;
  code *pcVar8;
  TArrayView<FRHICopyTextureInfo_const_,int> *pTVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  FRDGTexture *pFVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  TSet<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>,0>,FDefaultSetAllocator>
  *this;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  FRDGTexture *pFVar15;
  FRDGScope *this_02;
  FRHICopyTextureInfo *pFVar16;
  FRHICopyTextureInfo *pFVar17;
  ForElementType<FRHICopyTextureInfo> FVar18;
  uint *puVar19;
  int *piVar20;
  FRDGTexture *local_res8;
  longlong *local_res10;
  FSceneRenderUpdateInputs *local_res18;
  longlong *local_res20;
  undefined3 in_stack_00000049;
  ForElementType<FRHICopyTextureInfo> local_108;
  undefined8 local_100;
  FRHICopyTextureInfo *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  FRDGScope *local_d8;
  undefined1 local_d0;
  TIntRect<int>_u_0 local_c8;
  FRDGTexture **local_b8;
  FRHICopyTextureInfo **local_b0;
  FViewInfo *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_> local_98;
  TArrayView<FViewInfo_const_,int> local_88;
  FGenerateMipsParams local_78;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  iVar3 = *(int *)(*(longlong *)&param_2->field_0x8 + 8);
  local_res18 = param_3;
  puVar12 = (undefined8 *)(**(code **)(param_4->_padding_ + 0x10))(param_4);
  pFVar5 = (FRHITexture *)*puVar12;
  pFVar13 = FRDGBuilder::FindExternalTexture(param_1,pFVar5);
  if (pFVar13 == (FRDGTexture *)0x0) {
    TVar14 = CreateRenderTarget((FRHITexture *)&local_res10,(wchar_t *)pFVar5);
    pFVar13 = FRDGBuilder::RegisterExternalTexture
                        (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x38))();
    }
  }
  pFVar5 = (param_5->TextureRHI).Reference;
  local_res8 = pFVar13;
  pFVar13 = FRDGBuilder::FindExternalTexture(param_1,pFVar5);
  if (pFVar13 == (FRDGTexture *)0x0) {
    TVar14 = CreateRenderTarget((FRHITexture *)&local_res20,(wchar_t *)pFVar5);
    pFVar13 = FRDGBuilder::RegisterExternalTexture
                        (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x38))();
    }
  }
  if (param_9 != false) {
    if ((*(int *)&param_2->field_0x18 < 1) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_c8._s_0.Min.field0_0x0 =
         (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(*(longlong *)&param_2->field_0x10 + 0x380);
    local_c8._s_0.Max.field0_0x0 =
         (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(*(longlong *)&param_2->field_0x10 + 0x388);
    AddClearRenderTargetPass
              (param_1,local_res8,&FLinearColor::Black,(TIntRect<int> *)&local_c8._s_0);
  }
  pTVar9 = param_6;
  iVar4 = param_6->ArrayNum;
  if ((iVar4 < 1) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar16 = pTVar9->DataPtr;
  if (((((pFVar16->Size).field0_0x0._s_0.X !=
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
       ((pFVar16->Size).field0_0x0._s_0.Y != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y
       )) || ((pFVar16->Size).field0_0x0._s_0.Z !=
              UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) &&
     ((cVar2 = (pFVar13->Desc).field_0x32, cVar2 != '\x03' && (cVar2 != '\x04')))) {
    FVar18.Data = (FRHICopyTextureInfo *)0x0;
    local_108.Data = (FRHICopyTextureInfo *)0x0;
    local_100._0_4_ = iVar4;
    if (iVar4 == 0) {
      _param_9 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICopyTextureInfo>_>
                (0x3c,4,iVar4,0,&local_108,iVar4,(int *)((longlong)&local_100 + 4));
      FVar18.Data = local_108.Data;
      memcpy(local_108.Data,pFVar16,(longlong)iVar4 * 0x3c);
      _param_9 = local_100._4_4_;
    }
    iVar4 = (int)local_100;
    this = (TSet<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>,0>,FDefaultSetAllocator>
            *)FRDGBlackboard::GetMutable<FSceneCaptureViewportSetterMap>(&param_1->Blackboard);
    if (this == (TSet<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>,0>,FDefaultSetAllocator>
                 *)0x0) {
      this = (TSet<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>,0>,FDefaultSetAllocator>
              *)FRDGBlackboard::Create<FSceneCaptureViewportSetterMap>(&param_1->Blackboard);
    }
    local_ec = _param_9;
    local_b8 = &local_res8;
    local_108.Data = (FRHICopyTextureInfo *)0x0;
    local_b0 = &local_f8;
    local_100 = 0;
    local_f8 = FVar18.Data;
    local_f0 = iVar4;
    TSet<TTuple<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TFunction<void___cdecl(FRHICommandList_&,int)>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FRDGTexture_*_&,_UpdateSceneCaptureContent_RenderThread_::__l8::<lambda_1>_&&>_>
              (this,(TPairInitializer<FRDGTexture_*_&,_void___cdecl_UpdateSceneCaptureContent_RenderThread(FRDGBuilder_&,FSceneRenderer_*,FSceneRenderUpdateInputs_const_*,FRenderTarget_*,FTexture_*,TArrayView<FRHICopyTextureInfo_const_,int>,bool,FGenerateMipsParams_const_&,bool,bool)_::_8_::<lambda_1>_&&>
                     *)&param_5,(bool *)&local_b8);
    param_3 = local_res18;
    if (local_f8 != (FRHICopyTextureInfo *)0x0) {
      puVar19 = &local_f8[-1].DestMipIndex;
      MemoryTrace_Free((ulong64)puVar19,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar19,FMalloc,true);
      }
      piVar20 = (int *)((longlong)puVar19 - (ulonglong)*puVar19);
      LOCK();
      iVar4 = *piVar20;
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      param_3 = local_res18;
      if (iVar4 == 1) {
        lVar6 = *(longlong *)(piVar20 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar20,0,0);
        if (lVar6 - (longlong)piVar20 == 0x10000) {
          this_01 = FPageAllocator::Get();
          FPageAllocator::Free(this_01,piVar20);
          param_3 = local_res18;
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar20);
          param_3 = local_res18;
        }
      }
    }
  }
  if (param_10 != false) {
    if ((*(int *)&param_2->field_0x18 < 1) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar19 = (uint *)(*(longlong *)&param_2->field_0x10 + 0x24b8);
    *puVar19 = *puVar19 | 0x30;
  }
  if ((4 < (byte)LogSceneCapture._0_1_) &&
     (FSceneCaptureLogUtils::bEnableSceneCaptureLogging != false)) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSceneCapture);
  }
  (**(code **)(*(longlong *)param_2 + 0x40))(param_2,param_1,param_3);
  if (iVar3 < 3) {
    puVar12 = (undefined8 *)(**(code **)(*(longlong *)(param_2->ViewFamily)._padding_ + 0x10))();
    pFVar5 = (FRHITexture *)*puVar12;
    pFVar15 = FRDGBuilder::FindExternalTexture(param_1,pFVar5);
    if (pFVar15 == (FRDGTexture *)0x0) {
      TVar14 = CreateRenderTarget((FRHITexture *)local_e8,(wchar_t *)pFVar5);
      pFVar15 = FRDGBuilder::RegisterExternalTexture
                          (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
      if ((longlong *)local_e8._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_e8._0_8_ + 0x38))();
      }
    }
    ppFVar1 = &(param_2->ViewFamily).SceneTextures;
    if ((((char)(param_2->ViewFamily)._padding_ == '\0') || ((char)(*ppFVar1)->_padding_ == '\0'))
       && (bVar10 = FDebug::CheckVerifyFailedImpl2
                              ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                               ,0x7c0,
                               L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                              ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = *ppFVar1;
    bVar10 = false;
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_d0 = 0;
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        Desc._padding_._0_4_ = 0x1e6;
        Desc._padding_ = (longlong)s_C__Workspace_UnrealEngine_Engin;
        local_58 = 0;
        uStack_54 = 0;
        Desc._12_8_ = ZEXT48(uStack_5c);
        Desc._padding_._4_4_ = 0;
        Desc._padding_ = (longlong)u_CaptureSceneCol;
        Desc._padding_ = (longlong)u_CaptureSceneCol;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
        Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        Desc.TraceGpuSpecId = 0;
        Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```UpdateSceneCaptureContent_RenderThread'::__l41::<lambda_2>::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&_TSS0);
      }
      local_98._Myfirst._Val = &Desc;
      local_e8._8_8_ = param_1;
      this_02 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_02;
      local_d8 = this_02;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>_>
                (&(this_02->Impl).Impl,(FRDGScopeState *)param_1,&local_98);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_02,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_02,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar10 = true;
      local_d0 = 1;
    }
    local_a8 = *(FViewInfo **)&param_2->field_0x10;
    iVar3 = *(int *)&param_2->field_0x18;
    if ((iVar3 < 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_88._8_8_ = CONCAT44(uStack_9c,iVar3);
    local_88.DataPtr = local_a8;
    iStack_a0 = iVar3;
    CopySceneCaptureComponentToTarget
              (param_1,(FMinimalSceneTextures *)pFVar7,pFVar15,(FRDGTexture *)0x0,
               (FSceneViewFamily *)&param_2->ViewFamily,&local_88);
    if (bVar10) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
                ((TRDGEventScopeGuard<FRDGScope_RHI> *)(local_e8 + 8));
    }
  }
  pFVar16 = param_6->DataPtr;
  pFVar17 = pFVar16 + param_6->ArrayNum;
  for (; pFVar16 != pFVar17; pFVar16 = pFVar16 + 1) {
    AddCopyTexturePass(param_1,local_res8,pFVar13,pFVar16);
  }
  if (param_7 != false) {
    local_78.Filter = param_8->Filter;
    local_78.AddressU = param_8->AddressU;
    local_78.AddressV = param_8->AddressV;
    local_78.AddressW = param_8->AddressW;
    FGenerateMips::Execute(param_1,param_2->FeatureLevel,pFVar13,&local_78,AutoDetect);
  }
  FRDGUserValidation::ValidateSetAccessFinal
            (&param_1->UserValidation,(FRDGViewableResource *)pFVar13,SRVMask);
  *(undefined4 *)&pFVar13->_padding_ = 0x70;
  return;
}

// UseDownsampledOcclusionQueries @ 1454c3120

bool __cdecl UseDownsampledOcclusionQueries(void)

{
  return GDownsampledOcclusionQueries != 0;
}

// AsyncTasks'' @ 1503ae200

void __cdecl `dynamic_atexit_destructor_for_'FSceneRenderProcessor::AsyncTasks__(void)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  
  TVar3.Reference = FSceneRenderProcessor::AsyncTasks.Delete.Reference;
  if (FSceneRenderProcessor::AsyncTasks.Delete.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(FSceneRenderProcessor::AsyncTasks.Delete.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar3.Reference)(TVar3.Reference,1);
    }
  }
  TVar3.Reference = FSceneRenderProcessor::AsyncTasks.Cleanup.Reference;
  if (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(FSceneRenderProcessor::AsyncTasks.Cleanup.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001503ae252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)TVar3.Reference)(TVar3.Reference,1);
      return;
    }
  }
  return;
}

// ExtensionRegistration'' @ 1503ae270

void __cdecl `dynamic_atexit_destructor_for_'FSceneCulling::ExtensionRegistration__(void)

{
  FSceneCulling::ExtensionRegistration._0_8_ = &___7ISceneExtensionFactory__6B_;
  return;
}

// GDefaultData'' @ 1503ae290

void __cdecl
`dynamic_atexit_destructor_for_'FSceneCaptureCustomRenderPassUserData::GDefaultData__(void)

{
  if (FSceneCaptureCustomRenderPassUserData::GDefaultData.CaptureActorName.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FSceneCaptureCustomRenderPassUserData::GDefaultData.CaptureActorName.Data.
                  AllocatorInstance.Data);
  }
  FSceneCaptureCustomRenderPassUserData::GDefaultData._padding_ =
       (longlong)&___7ICustomRenderPassUserData__6B_;
  return;
}

// OnCreateRenderThreadResources'' @ 1503ae2c0

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

// OnDestroyRenderThreadResources'' @ 1503ae300

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

// ShaderTypeRegistration'' @ 1503ae340

void __cdecl
`dynamic_atexit_destructor_for_'FComputeExplicitChunkBounds_CS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae350

void __cdecl `dynamic_atexit_destructor_for_'FHZBTestPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae360

void __cdecl `dynamic_atexit_destructor_for_'FHitProxyPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae370

void __cdecl `dynamic_atexit_destructor_for_'FHitProxyVS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae380

void __cdecl `dynamic_atexit_destructor_for_'FOcclusionFeedbackPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae390

void __cdecl `dynamic_atexit_destructor_for_'FOcclusionFeedbackVS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae3a0

void __cdecl `dynamic_atexit_destructor_for_'FOcclusionQueryPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae3b0

void __cdecl `dynamic_atexit_destructor_for_'FOcclusionQueryVS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae3c0

void __cdecl `dynamic_atexit_destructor_for_'FSceneCapturePS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503ae3d0

void __cdecl
`dynamic_atexit_destructor_for_'FSceneCullingDebugRender_CS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 1503ae3e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__07_0A__00_00_0A__0A__00_0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae460

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae4e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_00_0A__0A__03_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae560

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_03_0A__0A__03_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae5e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae660

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__02_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
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
             &TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae6e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
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
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae760

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_00_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae7e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_01_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae860

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae8e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__0A__0A__00__V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,0,0,1>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ae960

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

// `dynamic_atexit_destructor_for_'CVarAllowPrecomputedVisibility'' @ 1503ae9e0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowPrecomputedVisibility__(void)

{
  CVarAllowPrecomputedVisibility._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowPrecomputedVisibility);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCaptureNextSceneCullingUpdate'' @ 1503aea00

void __cdecl _dynamic_atexit_destructor_for__CVarCaptureNextSceneCullingUpdate__(void)

{
  CVarCaptureNextSceneCullingUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCaptureNextSceneCullingUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDownsampledOcclusionQueries'' @ 1503aea20

void __cdecl _dynamic_atexit_destructor_for__CVarDownsampledOcclusionQueries__(void)

{
  CVarDownsampledOcclusionQueries._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDownsampledOcclusionQueries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableComputeBuildHZB'' @ 1503aea40

void __cdecl _dynamic_atexit_destructor_for__CVarEnableComputeBuildHZB__(void)

{
  CVarEnableComputeBuildHZB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableComputeBuildHZB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogCellSizes'' @ 1503aea60

void __cdecl _dynamic_atexit_destructor_for__CVarLogCellSizes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogCellSizes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileEnableOcclusionExtraFrame'' @ 1503aea80

void __cdecl _dynamic_atexit_destructor_for__CVarMobileEnableOcclusionExtraFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMobileEnableOcclusionExtraFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOcclusionCullCascadedShadowMaps'' @ 1503aeaa0

void __cdecl _dynamic_atexit_destructor_for__CVarOcclusionCullCascadedShadowMaps__(void)

{
  CVarOcclusionCullCascadedShadowMaps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarOcclusionCullCascadedShadowMaps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOcclusionFeeback_Blending'' @ 1503aeac0

void __cdecl _dynamic_atexit_destructor_for__CVarOcclusionFeeback_Blending__(void)

{
  CVarOcclusionFeeback_Blending._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOcclusionFeeback_Blending);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOcclusionQueryDispatchOrder'' @ 1503aeae0

void __cdecl _dynamic_atexit_destructor_for__CVarOcclusionQueryDispatchOrder__(void)

{
  CVarOcclusionQueryDispatchOrder._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOcclusionQueryDispatchOrder);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingSceneCaptures'' @ 1503aeb00

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingSceneCaptures__(void)

{
  CVarRayTracingSceneCaptures._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingSceneCaptures);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCaptureAllowRenderInMainRenderer'' @ 1503aeb20

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCaptureAllowRenderInMainRenderer__(void)

{
  CVarSceneCaptureAllowRenderInMainRenderer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSceneCaptureAllowRenderInMainRenderer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCaptureCubeSinglePass'' @ 1503aeb40

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCaptureCubeSinglePass__(void)

{
  CVarSceneCaptureCubeSinglePass._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCaptureCubeSinglePass);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingAsyncQuery'' @ 1503aeb60

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCullingAsyncQuery__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCullingAsyncQuery);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingAsyncUpdate'' @ 1503aeb80

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCullingAsyncUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCullingAsyncUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingDbgPattern'' @ 1503aeba0

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCullingDbgPattern__(void)

{
  CVarSceneCullingDbgPattern._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCullingDbgPattern);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingDebugRenderMode'' @ 1503aebc0

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCullingDebugRenderMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCullingDebugRenderMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingMaxCellSize'' @ 1503aebe0

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCullingMaxCellSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCullingMaxCellSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingMinCellSize'' @ 1503aec00

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCullingMinCellSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCullingMinCellSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingPrecomputed'' @ 1503aec20

void __cdecl _dynamic_atexit_destructor_for__CVarSceneCullingPrecomputed__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneCullingPrecomputed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneCullingUseForceRebuildExplicitChunkBounds'' @ 1503aec40

void __cdecl
_dynamic_atexit_destructor_for__CVarSceneCullingUseForceRebuildExplicitChunkBounds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSceneCullingUseForceRebuildExplicitChunkBounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneRenderCleanUpMode'' @ 1503aec60

void __cdecl _dynamic_atexit_destructor_for__CVarSceneRenderCleanUpMode__(void)

{
  CVarSceneRenderCleanUpMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneRenderCleanUpMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowPrecomputedVisibilityCells'' @ 1503aec80

void __cdecl _dynamic_atexit_destructor_for__CVarShowPrecomputedVisibilityCells__(void)

{
  CVarShowPrecomputedVisibilityCells._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowPrecomputedVisibilityCells)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowRelevantPrecomputedVisibilityCells'' @ 1503aeca0

void __cdecl _dynamic_atexit_destructor_for__CVarShowRelevantPrecomputedVisibilityCells__(void)

{
  CVarShowRelevantPrecomputedVisibilityCells._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShowRelevantPrecomputedVisibilityCells);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSmallFootprintSideThreshold'' @ 1503aecc0

void __cdecl _dynamic_atexit_destructor_for__CVarSmallFootprintSideThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSmallFootprintSideThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugEnable'' @ 1503aece0

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugFOVZoom'' @ 1503aed00

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugFOVZoom__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugFOVZoom);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugLetterbox'' @ 1503aed20

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugLetterbox__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugLetterbox);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugLumenScene'' @ 1503aed40

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugLumenScene__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugLumenScene);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugMultiViewFamily'' @ 1503aed60

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugMultiViewFamily__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSplitScreenDebugMultiViewFamily);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugOrbit'' @ 1503aed80

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugOrbit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugOrbit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugRotate0'' @ 1503aeda0

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugRotate0__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugRotate0);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugRotate1'' @ 1503aedc0

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugRotate1__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugRotate1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplitScreenDebugVertical'' @ 1503aede0

void __cdecl _dynamic_atexit_destructor_for__CVarSplitScreenDebugVertical__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplitScreenDebugVertical);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTreatDynamicInstancedAsUncullable'' @ 1503aee00

void __cdecl _dynamic_atexit_destructor_for__CVarTreatDynamicInstancedAsUncullable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTreatDynamicInstancedAsUncullable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUnbuiltPreviewShadowsInGame'' @ 1503aee20

void __cdecl _dynamic_atexit_destructor_for__CVarUnbuiltPreviewShadowsInGame__(void)

{
  CVarUnbuiltPreviewShadowsInGame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUnbuiltPreviewShadowsInGame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarValidateAllInstanceAllocations'' @ 1503aee40

void __cdecl _dynamic_atexit_destructor_for__CVarValidateAllInstanceAllocations__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarValidateAllInstanceAllocations)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarValidateGPUData'' @ 1503aee60

void __cdecl _dynamic_atexit_destructor_for__CVarValidateGPUData__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarValidateGPUData);
  return;
}

// `dynamic_atexit_destructor_for_'Cache'' @ 1503aee80

void __cdecl ViewSnapshotCache::_dynamic_atexit_destructor_for__Cache__(void)

{
  if (Cache.DeallocatedSnapshots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Cache.DeallocatedSnapshots.AllocatorInstance.Data);
  }
  FLockFreePointerListLIFOBase<FViewInfo,64,1>::~FLockFreePointerListLIFOBase<FViewInfo,64,1>
            ((FLockFreePointerListLIFOBase<FViewInfo,64,1> *)&Cache.FreeSnapshots);
  FLockFreePointerListLIFOBase<FViewInfo,64,1>::~FLockFreePointerListLIFOBase<FViewInfo,64,1>
            ((FLockFreePointerListLIFOBase<FViewInfo,64,1> *)&Cache);
  return;
}

// `dynamic_atexit_destructor_for_'CvarSceneCullingCullChunkViewDistance'' @ 1503aeec0

void __cdecl _dynamic_atexit_destructor_for__CvarSceneCullingCullChunkViewDistance__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarSceneCullingCullChunkViewDistance);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aeee0

void __cdecl
```FHZBOcclusionTester::Submit'::__l7::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aeee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aef00

void __cdecl
```FDeferredShadingSceneRenderer::RenderOcclusion'::__l10::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aef07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aef20

void __cdecl
```FSceneCullingBuilder::UploadToGPU'::__l39::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'::
__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aef27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aef40

void __cdecl
```UpdateSceneCaptureContent_RenderThread'::__l41::<lambda_2>::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aef47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aef60

void __cdecl
```FDeferredShadingSceneRenderer::RenderOcclusion'::__l20::<lambda_3>::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aef67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aef80

void __cdecl
``BeginOcclusionTests'::__l21::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aef87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aefa0

void __cdecl
``BeginOcclusionTests'::__l14::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aefa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aefc0

void __cdecl
``BeginOcclusionTests'::__l38::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aefc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503aefe0

void __cdecl
``FSceneRenderProcessor::FGroupEvent::Begin'::__l12::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503aefe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af000

void __cdecl
``BeginOcclusionTests'::__l65::<lambda_3>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af020

void __cdecl
```FSceneRenderProcessor::Execute'::__l30::<lambda_4>::operator()'::__l12::<lambda_3>::operator()<>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af040

void __cdecl
``BeginOcclusionTests'::__l83::<lambda_4>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af060

void __cdecl
``BeginOcclusionTests'::__l106::<lambda_5>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af080

void __cdecl
``BeginOcclusionTests'::__l112::<lambda_6>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af0a0

void __cdecl
``BeginOcclusionTests'::__l120::<lambda_7>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af0c0

void __cdecl
``BeginOcclusionTests'::__l126::<lambda_8>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af0c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af0e0

void __cdecl
``BeginOcclusionTests'[::G]::<lambda_9>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af100

void __cdecl
``BeginOcclusionTests'::__l31::<lambda_2>::operator()<int_&>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af120

void __cdecl
``FSceneRenderProcessor::FGroupEvent::Begin'::__l8::<lambda_1>::operator()<FString_&>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af140

void __cdecl
```FSceneRenderProcessor::Execute'::__l30::<lambda_4>::operator()'::__l7::<lambda_2>::
operator()<FString_&>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503af160

void __cdecl
```CopySceneCaptureComponentToTarget'::__l15::Desc::operator()<enum_ESceneCaptureSource_&>'::__l3::
<lambda_1>::operator()<enum_ESceneCaptureSource_&>'::__l2::_dynamic_atexit_destructor_for__Desc__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503af167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GLightPrimitiveInteractionAllocator'' @ 1503af180

void __cdecl _dynamic_atexit_destructor_for__GLightPrimitiveInteractionAllocator__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if ((!GIsCriticalError) && (GLightPrimitiveInteractionAllocator.NumLive != 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GIsCriticalError || NumLive == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\AllocatorFixedSizeFreeList.h"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'GOcclusionQueryIndexBuffer'' @ 1503af1d0

void __cdecl _dynamic_atexit_destructor_for__GOcclusionQueryIndexBuffer__(void)

{
  GOcclusionQueryIndexBuffer._0_8_ = &___7__TGlobalResource_VFOcclusionQueryIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GOcclusionQueryIndexBuffer);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&GOcclusionQueryIndexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_BeginOcclusionTests'' @ 1503af210

void __cdecl _dynamic_atexit_destructor_for__GPUStat_BeginOcclusionTests__(void)

{
  GPUStat_BeginOcclusionTests._padding_._0_4_ = 0;
  if (GPUStat_BeginOcclusionTests._padding_ != 0) {
    FMemory::Free((void *)GPUStat_BeginOcclusionTests._padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_BeginOcclusionTests._padding_);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_HZB'' @ 1503af250

void __cdecl _dynamic_atexit_destructor_for__GPUStat_HZB__(void)

{
  GPUStat_HZB._104_4_ = 0;
  if (GPUStat_HZB._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_HZB._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_HZB.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GSceneCullingDbgPattern'' @ 1503af290

void __cdecl _dynamic_atexit_destructor_for__GSceneCullingDbgPattern__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GSceneCullingDbgPattern.Data.AllocatorInstance.Data;
  if (GSceneCullingDbgPattern.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GSceneCullingDbgPattern.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Result'' @ 1503af2b0

void __cdecl
`FSceneCulling::FPrimitiveState::ToString'::__l2::_dynamic_atexit_destructor_for__Result__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Result.Data.AllocatorInstance.Data;
  if (::Result.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Result.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503af2d0

void __cdecl
`FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBOcclusionUpdateTexturesParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503af2f0

void __cdecl
`FComputeExplicitChunkBounds_CS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FComputeExplicitChunkBounds_CS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503af310

void __cdecl
`FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHZBTestPS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503af330

void __cdecl
`FOcclusionFeedbackPS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOcclusionFeedbackPS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503af350

void __cdecl
`FOcclusionFeedbackVS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOcclusionFeedbackVS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503af370

void __cdecl
`FSceneCapturePS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneCapturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503af390

void __cdecl
`FSceneCullingDebugRender_CS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneCullingDebugRender_CS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af3b0

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
`FComputeExplicitChunkBounds_CS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af3d0

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

void __cdecl `FHZBTestPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af3f0

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

void __cdecl `FHitProxyPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af410

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

void __cdecl `FHitProxyVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af430

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
`FOcclusionFeedbackPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af450

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
`FOcclusionFeedbackVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af470

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
`FOcclusionQueryPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af490

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
`FOcclusionQueryVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af4b0

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
`FSceneCapturePS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503af4d0

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
`FSceneCullingDebugRender_CS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_SceneCulling'' @ 1503af4f0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_SceneCulling__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_SceneCulling.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_SceneCulling.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_SceneCulling.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

