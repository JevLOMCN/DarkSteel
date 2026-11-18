// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 242

// CachedMeshData'' @ 1413c3040

void __cdecl `dynamic_initializer_for_'FARKitMeshData::CachedMeshData__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FARKitMeshData::CachedMeshData__);
  return;
}

// DepthOcclusionOverlayMaterialPath'' @ 1413c3060

void __cdecl
`dynamic_initializer_for_'UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterialPath__
          (void)

{
  ::FString::FString(&UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterialPath,
                     L"/AppleARKit/MI_DepthOcclusionOverlay.MI_DepthOcclusionOverlay");
  atexit(`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::
         DepthOcclusionOverlayMaterialPath__);
  return;
}

// FeatureName'' @ 1413c3090

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// GlobalLock'' @ 1413c30b0

void __cdecl `dynamic_initializer_for_'FARKitMeshData::GlobalLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FARKitMeshData::GlobalLock,4000);
  atexit(`dynamic_atexit_destructor_for_'FARKitMeshData::GlobalLock__);
  return;
}

// MatteOcclusionOverlayMaterialPath'' @ 1413c30e0

void __cdecl
`dynamic_initializer_for_'UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterialPath__
          (void)

{
  ::FString::FString(&UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterialPath,
                     L"/AppleARKit/MI_MatteOcclusionOverlay.MI_MatteOcclusionOverlay");
  atexit(`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::
         MatteOcclusionOverlayMaterialPath__);
  return;
}

// OverlayMaterialPath'' @ 1413c3110

void __cdecl
`dynamic_initializer_for_'UARKitCameraOverlayMaterialLoader::OverlayMaterialPath__(void)

{
  ::FString::FString(&UARKitCameraOverlayMaterialLoader::OverlayMaterialPath,
                     L"/ARUtilities/Materials/M_PassthroughCamera.M_PassthroughCamera");
  atexit(`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::OverlayMaterialPath__);
  return;
}

// SceneDepthColorationMaterialPath'' @ 1413c3140

void __cdecl
`dynamic_initializer_for_'UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterialPath__
          (void)

{
  ::FString::FString(&UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterialPath,
                     L"/ARUtilities/Materials/M_DepthColoration.M_DepthColoration");
  atexit(`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::
         SceneDepthColorationMaterialPath__);
  return;
}

// SceneDepthOcclusionMaterialPath'' @ 1413c3170

void __cdecl
`dynamic_initializer_for_'UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath__(void)

{
  ::FString::FString(&UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath,
                     L"/AppleARKit/M_SceneDepthOcclusion.M_SceneDepthOcclusion");
  atexit(`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::
         SceneDepthOcclusionMaterialPath__);
  return;
}

// ShaderTypeRegistration'' @ 1413c31a0

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

void __cdecl `dynamic_initializer_for_'TARKitCameraOverlayPS<1>::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = TARKitCameraOverlayPS<1>::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&TARKitCameraOverlayPS<1>::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'TARKitCameraOverlayPS<1>::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413c31f0

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

void __cdecl `dynamic_initializer_for_'TARKitCameraOverlayPS<0>::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = TARKitCameraOverlayPS<0>::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&TARKitCameraOverlayPS<0>::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'TARKitCameraOverlayPS<0>::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413c3240

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

void __cdecl `dynamic_initializer_for_'TARKitCameraOverlayVS<1>::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = TARKitCameraOverlayVS<1>::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&TARKitCameraOverlayVS<1>::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'TARKitCameraOverlayVS<1>::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413c3290

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

void __cdecl `dynamic_initializer_for_'TARKitCameraOverlayVS<0>::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = TARKitCameraOverlayVS<0>::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&TARKitCameraOverlayVS<0>::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'TARKitCameraOverlayVS<0>::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413c32e0

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

void __cdecl `dynamic_initializer_for_'FComputeShaderYCbCrToRGB::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FComputeShaderYCbCrToRGB::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FComputeShaderYCbCrToRGB::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FComputeShaderYCbCrToRGB::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1413c3330

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413c33f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__0A__00_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1413c34b0

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

// StaticResource'' @ 1413c3640

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

// StaticResource'' @ 1413c37d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  TRefCountPtr<FRHIRasterizerState> TVar1;
  FRHIResource *local_res8;
  
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
    TVar1 = TStaticRasterizerState<2,0,0,1>::CreateRHI();
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIRasterizerState *)
        &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIRasterizerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// `dynamic_initializer_for_'CVarDebugOverlayMode'' @ 1413c3890

void __cdecl _dynamic_initializer_for__CVarDebugOverlayMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugOverlayMode,L"arkit.DebugOverlayMode",&GDebugOverlayMode,
             L"The debug overlay mode for ARKit:\n0: Disabled (Default)\n1: Show the person segmentation matte texture\n2: Show the person segmentation depth texture\n3: Show the scene depth map texture\n4: Show the scene depth confidence texture\n5: Show coloration of the scene depth data\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugOverlayMode__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreGeoTrackingState'' @ 1413c38e0

void __cdecl _dynamic_initializer_for__CVarIgnoreGeoTrackingState__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIgnoreGeoTrackingState,L"arkit.Debug.IgnoreGeoTrackingState",
             &GIgnoreGeoTrackingState,
             L"This is a debug variable that skips the Geo tracking state check before calling certain APIs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreGeoTrackingState__);
  return;
}

// `dynamic_initializer_for_'CVarReleaseSessionWhenStopped'' @ 1413c3930

void __cdecl _dynamic_initializer_for__CVarReleaseSessionWhenStopped__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarReleaseSessionWhenStopped,L"ar.ARKit.ReleaseSessionWhenStopped",local_res8,
             L"Whether to release the ARKit session object when the AR session is stopped.",0);
  atexit(_dynamic_atexit_destructor_for__CVarReleaseSessionWhenStopped__);
  return;
}

// `dynamic_initializer_for_'CVarSceneDepthBufferBlurAmount'' @ 1413c3980

void __cdecl _dynamic_initializer_for__CVarSceneDepthBufferBlurAmount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSceneDepthBufferBlurAmount,L"arkit.SceneDepthBufferBlurAmount",
             &SceneDepthBufferBlurAmount,
             L"If > 0, the scene depth buffer and confidence map will be applied a gaussian blur whose sigma is this value."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSceneDepthBufferBlurAmount__);
  return;
}

// `dynamic_initializer_for_'CVarSceneDepthBufferSizeScale'' @ 1413c39d0

void __cdecl _dynamic_initializer_for__CVarSceneDepthBufferSizeScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSceneDepthBufferSizeScale,L"arkit.SceneDepthBufferSizeScale",
             &SceneDepthBufferSizeScale,
             L"If > 1, the scene depth buffer and confidence map will be upscaled to have the sizes multiplied by this value."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSceneDepthBufferSizeScale__);
  return;
}

// `dynamic_initializer_for_'FAppleARKitARKitSystemPtr'' @ 1413c3a20

void __cdecl _dynamic_initializer_for__FAppleARKitARKitSystemPtr__(void)

{
  atexit(_dynamic_atexit_destructor_for__FAppleARKitARKitSystemPtr__);
  return;
}

// `dynamic_initializer_for_'LogAppleARKit'' @ 1413c3a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAppleARKit__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAppleARKit,L"LogAppleARKit",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAppleARKit__);
  return;
}

// `dynamic_initializer_for_'LogMrMesh'' @ 1413c3a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMrMesh__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMrMesh,L"LogMrMesh",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogMrMesh__);
  return;
}

// `dynamic_initializer_for_'MeshARTestingExecRegistration'' @ 1413c3ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__MeshARTestingExecRegistration__(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec
            (&MeshARTestingExecRegistration,MeshARTestingExec);
  atexit(_dynamic_atexit_destructor_for__MeshARTestingExecRegistration__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAppleARKit'' @ 1413c3af0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAppleARKit__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AppleARKit";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AppleARKit",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAppleARKitModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ARKitFrameToDelegateDelay'' @ 1413c3b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ARKitFrameToDelegateDelay__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ARKitFrameToDelegateDelay ==
      (FThreadSafeStaticStat<FStat_STAT_ARKitFrameToDelegateDelay>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ARKitFrameToDelegateDelay");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ARKitFrameToDelegateDelay,*pFVar1,
               L"ARKit Frame to Delegate Delay (ms)","STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",
               true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ARKitFrameToRenderDelay'' @ 1413c3bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ARKitFrameToRenderDelay__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ARKitFrameToRenderDelay ==
      (FThreadSafeStaticStat<FStat_STAT_ARKitFrameToRenderDelay>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ARKitFrameToRenderDelay");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ARKitFrameToRenderDelay,*pFVar1,
               L"ARKit Frame to Render Delay (ms)","STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",
               true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ARKitFrameToTextureDelay'' @ 1413c3c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ARKitFrameToTextureDelay__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ARKitFrameToTextureDelay ==
      (FThreadSafeStaticStat<FStat_STAT_ARKitFrameToTextureDelay>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ARKitFrameToTextureDelay");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ARKitFrameToTextureDelay,*pFVar1,
               L"ARKit Frame to Texture Delay (ms)","STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",
               true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ARKitThreads'' @ 1413c3cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ARKitThreads__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ARKitThreads == (FThreadSafeStaticStat<FStat_STAT_ARKitThreads>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ARKitThreads");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ARKitThreads,*pFVar1,L"ARKit CPU %",
               "STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlurImage'' @ 1413c3d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlurImage__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlurImage == (FThreadSafeStaticStat<FStat_STAT_BlurImage>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlurImage");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlurImage,*pFVar1,L"Blur Image",
               "STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAppleARKitSystem_SessionDidAddAnchors'' @ 1413c3e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAppleARKitSystem_SessionDidAddAnchors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAppleARKitSystem_SessionDidAddAnchors ==
      (FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_SessionDidAddAnchors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAppleARKitSystem_SessionDidAddAnchors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAppleARKitSystem_SessionDidAddAnchors,
               *pFVar1,L"SessionDidAddAnchors_DelegateThread","STATGROUP_ARKIT","STATCAT_Advanced",
               L"ARKit",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAppleARKitSystem_SessionDidRemoveAnchors'' @ 1413c3ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAppleARKitSystem_SessionDidRemoveAnchors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAppleARKitSystem_SessionDidRemoveAnchors ==
      (FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_SessionDidRemoveAnchors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAppleARKitSystem_SessionDidRemoveAnchors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAppleARKitSystem_SessionDidRemoveAnchors,
               *pFVar1,L"SessionDidRemoveAnchors_DelegateThread","STATGROUP_ARKIT",
               "STATCAT_Advanced",L"ARKit",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAppleARKitSystem_SessionDidUpdateAnchors'' @ 1413c3f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAppleARKitSystem_SessionDidUpdateAnchors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAppleARKitSystem_SessionDidUpdateAnchors ==
      (FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_SessionDidUpdateAnchors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAppleARKitSystem_SessionDidUpdateAnchors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAppleARKitSystem_SessionDidUpdateAnchors,
               *pFVar1,L"SessionDidUpdateAnchors_DelegateThread","STATGROUP_ARKIT",
               "STATCAT_Advanced",L"ARKit",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAppleARKitSystem_SessionUpdateFrame'' @ 1413c3fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAppleARKitSystem_SessionUpdateFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAppleARKitSystem_SessionUpdateFrame ==
      (FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_SessionUpdateFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAppleARKitSystem_SessionUpdateFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAppleARKitSystem_SessionUpdateFrame,
               *pFVar1,L"SessionDidUpdateFrame_DelegateThread","STATGROUP_ARKIT","STATCAT_Advanced",
               L"ARKit",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAppleARKitSystem_UpdateARKitPerf'' @ 1413c4050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAppleARKitSystem_UpdateARKitPerf__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAppleARKitSystem_UpdateARKitPerf ==
      (FThreadSafeStaticStat<FStat_STAT_FAppleARKitSystem_UpdateARKitPerf>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAppleARKitSystem_UpdateARKitPerf");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAppleARKitSystem_UpdateARKitPerf,*pFVar1,
               L"UpdateARKitPerf","STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GetClassification'' @ 1413c40e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GetClassification__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GetClassification == (FThreadSafeStaticStat<FStat_STAT_GetClassification>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GetClassification");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetClassification,*pFVar1,
               L"Get Classification","STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ScaleImage'' @ 1413c4170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ScaleImage__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ScaleImage == (FThreadSafeStaticStat<FStat_STAT_ScaleImage>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ScaleImage");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ScaleImage,*pFVar1,L"Scale Image",
               "STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateMeshData'' @ 1413c4200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateMeshData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateMeshData == (FThreadSafeStaticStat<FStat_STAT_UpdateMeshData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateMeshData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateMeshData,*pFVar1,L"Update Mesh Data"
               ,"STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateOcclusionTextures'' @ 1413c4290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateOcclusionTextures__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateOcclusionTextures ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateOcclusionTextures>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateOcclusionTextures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateOcclusionTextures,*pFVar1,
               L"Update Occlusion Textures","STATGROUP_ARKIT","STATCAT_Advanced",L"ARKit",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h__Script_AppleARKit_3796795618'' @ 1413c4320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h__Script_AppleARKit_3796795618__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h__Script_AppleARKit_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h__Script_AppleARKit_3983061763'' @ 1413c4360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h__Script_AppleARKit_3983061763__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h__Script_AppleARKit_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h__Script_AppleARKit_2554644787'' @ 1413c43a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h__Script_AppleARKit_2554644787__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitCamera_h__Script_AppleARKit_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h__Script_AppleARKit_2766481933'' @ 1413c43e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h__Script_AppleARKit_2766481933__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h__Script_AppleARKit_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h__Script_AppleARKit_2514766980'' @ 1413c4420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h__Script_AppleARKit_2514766980__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h__Script_AppleARKit_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h__Script_AppleARKit_3239354855'' @ 1413c4460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h__Script_AppleARKit_3239354855__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h__Script_AppleARKit_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h__Script_AppleARKit_3192731664'' @ 1413c44a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h__Script_AppleARKit_3192731664__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h__Script_AppleARKit_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h__Script_AppleARKit_1945754244'' @ 1413c44e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h__Script_AppleARKit_1945754244__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h__Script_AppleARKit_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h__Script_AppleARKit_2454626074'' @ 1413c4520

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h__Script_AppleARKit_2454626074__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h__Script_AppleARKit_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ExternalTextureMaterialExpression_h__Script_AppleARKit_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h__Script_AppleARKit_2102392555'' @ 1413c4570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h__Script_AppleARKit_2102392555__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h__Script_AppleARKit_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h__Script_AppleARKit_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitTextures_h__Script_AppleARKit_1456953429'' @ 1413c45c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitTextures_h__Script_AppleARKit_1456953429__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AppleARKit",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitTextures_h__Script_AppleARKit_Statics
             ::ClassInfo,5,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AppleARKit'' @ 1413c4600

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AppleARKit__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf7015d9;
  local_res8[0].DeclarationsHash = 0x50ac5af5;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AppleARKit,L"/Script/AppleARKit",
             &Z_Registration_Info_UPackage__Script_AppleARKit,local_res8);
  return;
}

// Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbeTexture_NoRegister @ 14cfcac70

UClass * __cdecl Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitEnvironmentCaptureProbeTexture",
               &Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton,
               UAppleARKitEnvironmentCaptureProbeTexture::
               StaticRegisterNativesUAppleARKitEnvironmentCaptureProbeTexture,0x180,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitEnvironmentCaptureProbeTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbeTexture>,local_res8,
               UAREnvironmentCaptureProbeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton;
}

// Z_Construct_UPackage__Script_AppleARKit @ 14cfcb030

UPackage * __cdecl Z_Construct_UPackage__Script_AppleARKit(void)

{
  if (Z_Registration_Info_UPackage__Script_AppleARKit.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AppleARKit.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AppleARKit.OuterSingleton;
}

// Z_Construct_UClass_UAppleARKitCameraVideoTexture @ 14cfcb130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitCameraVideoTexture(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitCameraVideoTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.OuterSingleton;
}

// Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbeTexture @ 14cfcb170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbeTexture(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.OuterSingleton;
}

// Z_Construct_UClass_UAppleARKitOcclusionTexture @ 14cfcb1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitOcclusionTexture(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitOcclusionTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.OuterSingleton;
}

// Z_Construct_UClass_UAppleARKitTextureCameraDepth @ 14cfcb1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitTextureCameraDepth(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitTextureCameraDepth_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.OuterSingleton;
}

// Z_Construct_UClass_UAppleARKitTextureCameraImage @ 14cfcb230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitTextureCameraImage(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitTextureCameraImage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.OuterSingleton;
}

// Z_Construct_UClass_UAppleARKitTimecodeProvider @ 14cfcb2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitTimecodeProvider(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.OuterSingleton;
}

// Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe @ 14cfcb3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.OuterSingleton;
}

// Z_Construct_UClass_UARKitCameraOverlayMaterialLoader @ 14cfcb6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARKitCameraOverlayMaterialLoader(void)

{
  if (Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.OuterSingleton,
               &Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cfcbd50

void * __thiscall
FAppleARKitModule::_scalar_deleting_destructor_(FAppleARKitModule *this,uint param_1)

{
  *this = (FAppleARKitModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UARKitGeoTrackingSupport @ 14cfcbe90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARKitGeoTrackingSupport(void)

{
  if (Z_Registration_Info_UClass_UARKitGeoTrackingSupport.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARKitGeoTrackingSupport.OuterSingleton,
               &Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARKitGeoTrackingSupport.OuterSingleton;
}

// NewStructOps @ 14cfcbed0

void * __cdecl Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAppleARKitCamera,&UE::CoreUObject::Private::Construct<FAppleARKitCamera>,&UE::CoreUObject::Private::ConstructForTests<FAppleARKitCamera>,&UE::CoreUObject::Private::Destruct<FAppleARKitCamera>,&UE::CoreUObject::Private::Copy<FAppleARKitCamera>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UARKitMeshGeometry @ 14cfcbfd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARKitMeshGeometry(void)

{
  if (Z_Registration_Info_UClass_UARKitMeshGeometry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARKitMeshGeometry.OuterSingleton,
               &Z_Construct_UClass_UARKitMeshGeometry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARKitMeshGeometry.OuterSingleton;
}

// NewStructOps @ 14cfcc090

void * __cdecl Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAppleARKitFrame,&UE::CoreUObject::Private::Construct<FAppleARKitFrame>,&UE::CoreUObject::Private::ConstructForTests<FAppleARKitFrame>,&UE::CoreUObject::Private::Destruct<FAppleARKitFrame>,&UE::CoreUObject::Private::Copy<FAppleARKitFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsValid_SetBit @ 14cfcc190

void __cdecl
Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14cfcc1a0

void * __cdecl Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAppleARKitLightEstimate,&UE::CoreUObject::Private::Construct<FAppleARKitLightEstimate>,&UE::CoreUObject::Private::ConstructForTests<FAppleARKitLightEstimate>,&UE::CoreUObject::Private::Destruct<FAppleARKitLightEstimate>,&UE::CoreUObject::Private::Copy<FAppleARKitLightEstimate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera @ 14cfcc1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
         OuterSingleton;
}

// Z_Construct_UEnum_AppleARKit_EARKitTextureType @ 14cfcc220

UEnum * __cdecl Z_Construct_UEnum_AppleARKit_EARKitTextureType(void)

{
  if (Z_Registration_Info_UEnum_EARKitTextureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARKitTextureType.InnerSingleton,
               &Z_Construct_UEnum_AppleARKit_EARKitTextureType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARKitTextureType.InnerSingleton;
}

// EARKitTextureType_StaticEnum @ 14cfcc260

UEnum * __cdecl EARKitTextureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARKitTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UEnum_EARKitTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKit_EARKitTextureType,(UObject *)pUVar1,
                       L"EARKitTextureType");
  }
  return Z_Registration_Info_UEnum_EARKitTextureType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cfcc3b0

void * __thiscall
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UAppleARKitSettings @ 14cfcc560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAppleARKitSettings(void)

{
  if (Z_Registration_Info_UClass_UAppleARKitSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAppleARKitSettings.OuterSingleton,
               &Z_Construct_UClass_UAppleARKitSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAppleARKitSettings.OuterSingleton;
}

// Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType @ 14cfcc5a0

UEnum * __cdecl Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType(void)

{
  if (Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.InnerSingleton,
               &Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.InnerSingleton;
}

// Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType @ 14cfcc5e0

UEnum * __cdecl Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType(void)

{
  if (Z_Registration_Info_UEnum_ELivelinkTrackingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELivelinkTrackingType.InnerSingleton,
               &Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELivelinkTrackingType.InnerSingleton;
}

// EARFaceTrackingFileWriterType_StaticEnum @ 14cfcc620

UEnum * __cdecl EARFaceTrackingFileWriterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType,(UObject *)pUVar1,
                       L"EARFaceTrackingFileWriterType");
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton;
}

// ELivelinkTrackingType_StaticEnum @ 14cfcc660

UEnum * __cdecl ELivelinkTrackingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType,(UObject *)pUVar1,
                       L"ELivelinkTrackingType");
  }
  return Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton;
}

// NewProp_bRequireARKitSupport_SetBit @ 14cfcc6a0

void __cdecl
Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bFaceTrackingLogData_SetBit @ 14cfcc6b0

void __cdecl
Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bFaceTrackingWriteEachFrame_SetBit @ 14cfcc6c0

void __cdecl
Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// NewProp_bShouldWriteCameraImagePerFrame_SetBit @ 14cfcc6d0

void __cdecl
Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b) = 1;
  return;
}

// NewProp_bAdjustThreadPrioritiesDuringARSession_SetBit @ 14cfcc6e0

void __cdecl
Z_Construct_UClass_UAppleARKitSettings_Statics::
NewProp_bAdjustThreadPrioritiesDuringARSession_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
  return;
}

// AddPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread'::__l5::<lambda_1>_> @ 14cfcc840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread_::__l5::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FPostBasePassViewExtensionParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  FAppleARKitXRCamera *pFVar2;
  FSceneView *pFVar3;
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FPostBasePassViewExtensionParameters",L"FPostBasePassViewExtensionParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitSystem.cpp"
                 ,0xb8,0x110,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
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
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Inline);
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFPostBasePassViewExtensionParameters_FAppleARKitXRCamera__V<lambda_1>__4__PostRenderBasePassDeferred_RenderThread_2_EEAAXAEAVFRDGBuilder__AEAVFSceneView__AEBUFRenderTargetBindingSlots__PEAV__TRDGUniformBuffer_VFSceneTextureUniformParameters_____Z___6B_
  ;
  pFVar2 = param_4->__this;
  pFVar3 = param_4->InView;
  *(FPostBasePassViewExtensionParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = param_2;
  pFVar8[1]._padding_ = (longlong)pFVar2;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
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

// AddPassInternal<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread'::__l5::<lambda_1>_> @ 14cfccaf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,_FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread_::__l5::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FPostBasePassViewExtensionParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FAppleARKitXRCamera *pFVar3;
  FSceneView *pFVar4;
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
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Inline);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_VFPostBasePassViewExtensionParameters_FAppleARKitXRCamera__V<lambda_1>__4__PostRenderBasePassDeferred_RenderThread_2_EEAAXAEAVFRDGBuilder__AEAVFSceneView__AEBUFRenderTargetBindingSlots__PEAV__TRDGUniformBuffer_VFSceneTextureUniformParameters_____Z___6B_
  ;
  pFVar3 = param_5->__this;
  pFVar4 = param_5->InView;
  *(FPostBasePassViewExtensionParameters **)&pFVar9[1].FullPathIfDebug.Data.ArrayNum = param_3;
  pFVar9[1]._padding_ = (longlong)pFVar3;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar4;
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

// BindForLegacyShaderParameters<FARKitPostProcessMaterialParameters> @ 14cfcdb20

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
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FARKitPostProcessMaterialParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FARKitPostProcessMaterialParameters::zzAppendMemberGetPrev;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_38);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FARKitPostProcessMaterialParameters",L"FARKitPostProcessMaterialParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKit\\Private\\AppleARKitVideoOverlay.cpp"
                 ,0x7e,0x680,&local_38,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_38.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      atexit(`FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_4);
  return;
}

// BindForLegacyShaderParameters<FComputeShaderYCbCrToRGB::FParameters> @ 14cfcdca0

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
BindForLegacyShaderParameters<FComputeShaderYCbCrToRGB::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FComputeShaderYCbCrToRGB::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ConstructItems<FARPose2D,FARPose2D,int> @ 14cfcdd00

void __cdecl ConstructItems<FARPose2D,FARPose2D,int>(void *param_1,FARPose2D *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x20);
    piVar5 = &(param_2->SkeletonDefinition).ParentIndices.ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -6);
      *(int *)((longlong)piVar5 + (longlong)param_1 + (-0x20 - (longlong)param_2)) = piVar5[-8];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar5[-4];
      pvVar3 = *(void **)(piVar5 + -6);
      piVar4[-4] = iVar2;
      if (iVar2 == 0) {
        piVar4[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar1,iVar2,piVar4 + -3);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 3);
      }
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      iVar2 = *piVar5;
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->AllocatorInstance).Data;
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar4 + -2),iVar2,piVar4 + 1);
        memcpy(((ForAnyElementType *)(piVar4 + -2))->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar4[2] = 0;
      piVar4[3] = 0;
      iVar2 = piVar5[4];
      pvVar3 = *(void **)(piVar5 + 2);
      piVar4[4] = iVar2;
      if (iVar2 == 0) {
        piVar4[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,(ForAnyElementType *)(piVar4 + 2),iVar2,piVar4 + 5);
        memcpy(((ForAnyElementType *)(piVar4 + 2))->Data,pvVar3,(longlong)iVar2 << 4);
      }
      piVar4[6] = 0;
      piVar4[7] = 0;
      iVar2 = piVar5[8];
      pvVar3 = *(void **)(piVar5 + 6);
      piVar4[8] = iVar2;
      if (iVar2 == 0) {
        piVar4[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,(ForAnyElementType *)(piVar4 + 6),iVar2,piVar4 + 9);
        memcpy(((ForAnyElementType *)(piVar4 + 6))->Data,pvVar3,(longlong)iVar2);
      }
      piVar4 = piVar4 + 0x12;
      piVar5 = piVar5 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// GetModularInterface<IAppleARKitFaceSupport> @ 14cfcdfb0

IAppleARKitFaceSupport * __cdecl GetModularInterface<IAppleARKitFaceSupport>(void)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  IAppleARKitFaceSupport *pIVar4;
  
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"AppleARKitFaceSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  lVar3 = (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                           ::__l2::FeatureName,0);
  pIVar4 = (IAppleARKitFaceSupport *)0x0;
  if (lVar3 != 0) {
    pIVar4 = (IAppleARKitFaceSupport *)(lVar3 + -8);
  }
  return pIVar4;
}

// InternalConstructor<UARKitCameraOverlayMaterialLoader> @ 14cfce060

void __cdecl InternalConstructor<UARKitCameraOverlayMaterialLoader>(FObjectInitializer *param_1)

{
  UObject *this;
  ulonglong uVar1;
  wchar_t *pwVar2;
  int *piVar3;
  wchar_t *pwVar4;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  uVar1 = (ulonglong)_tls_index;
  *(undefined ***)this = &___7UARKitCameraOverlayMaterialLoader__6B_;
  pwVar4 = L"";
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c);
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pwVar2 = L"";
      if (UARKitCameraOverlayMaterialLoader::OverlayMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)
                 UARKitCameraOverlayMaterialLoader::OverlayMaterialPath.Data.AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::DefaultOverlayMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__DefaultOverlayMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::DefaultOverlayMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::DefaultOverlayMaterialRef.Object.field0_0x0);
  }
  *(TObjectPtr<UMaterialInterface>_u_0 *)&this[1].field_0x0 =
       (FObjectPtr)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::DefaultOverlayMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pwVar2 = L"";
      if (UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)
                 UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterialPath.Data.
                 AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::DepthOcclusionOverlayMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__DepthOcclusionOverlayMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::DepthOcclusionOverlayMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::DepthOcclusionOverlayMaterialRef.Object.field0_0x0);
  }
  *(TObjectPtr<UMaterialInterface>_u_0 *)&this[1].field_0x8 =
       (FObjectPtr)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::DepthOcclusionOverlayMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pwVar2 = L"";
      if (UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)
                 UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterialPath.Data.
                 AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::MatteOcclusionOverlayMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__MatteOcclusionOverlayMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::MatteOcclusionOverlayMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::MatteOcclusionOverlayMaterialRef.Object.field0_0x0);
  }
  *(TObjectPtr<UMaterialInterface>_u_0 *)&this[1].field_0x10 =
       (FObjectPtr)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::MatteOcclusionOverlayMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_3__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_3__ == -1) {
      pwVar2 = L"";
      if (UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)
                 UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath.Data.
                 AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::SceneDepthOcclusionMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__SceneDepthOcclusionMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::SceneDepthOcclusionMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::SceneDepthOcclusionMaterialRef.Object.field0_0x0);
  }
  *(TObjectPtr<UMaterialInterface>_u_0 *)&this[1].field_0x18 =
       (FObjectPtr)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::SceneDepthOcclusionMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_4__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_4__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_4__ == -1) {
      if (UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterialPath.Data.ArrayNum != 0) {
        pwVar4 = (wchar_t *)
                 UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterialPath.Data.
                 AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::SceneDepthColorationMaterialRef,pwVar4,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__SceneDepthColorationMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_4__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::SceneDepthColorationMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::SceneDepthColorationMaterialRef.Object.field0_0x0);
  }
  *(TObjectPtr<UMaterialInterface>_u_0 *)&this[1].field_0x20 =
       (FObjectPtr)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::SceneDepthColorationMaterialRef.Object.field0_0x0;
  return;
}

// InternalConstructor<UARKitGeoTrackingSupport> @ 14cfce080

void __cdecl InternalConstructor<UARKitGeoTrackingSupport>(FObjectInitializer *param_1)

{
  UARGeoTrackingSupport *this;
  
  this = (UARGeoTrackingSupport *)param_1->Obj;
  if (this != (UARGeoTrackingSupport *)0x0) {
    UARGeoTrackingSupport::UARGeoTrackingSupport(this,param_1);
    *(undefined ***)this = &___7UARKitGeoTrackingSupport__6B_;
  }
  return;
}

// InternalConstructor<UARKitMeshGeometry> @ 14cfce0b0

void __cdecl InternalConstructor<UARKitMeshGeometry>(FObjectInitializer *param_1)

{
  UARMeshGeometry *this;
  
  this = (UARMeshGeometry *)param_1->Obj;
  if (this != (UARMeshGeometry *)0x0) {
    UARMeshGeometry::UARMeshGeometry(this);
    *(undefined ***)this = &___7UARKitMeshGeometry__6B_;
  }
  return;
}

// InternalConstructor<UAppleARKitCameraVideoTexture> @ 14cfce0e0

void __cdecl InternalConstructor<UAppleARKitCameraVideoTexture>(FObjectInitializer *param_1)

{
  UARTextureCameraImage *this;
  
  this = (UARTextureCameraImage *)param_1->Obj;
  if (this != (UARTextureCameraImage *)0x0) {
    UARTextureCameraImage::UARTextureCameraImage(this,param_1);
    this->field_0x116 = this->field_0x116 & 0xfe;
    *(undefined ***)this = &UAppleARKitCameraVideoTexture::_vftable__for__UStreamableRenderAsset__;
    *(undefined ***)&this->field_0xe0 =
         &UAppleARKitCameraVideoTexture::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0xe8 =
         &UAppleARKitCameraVideoTexture::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)(this + 1) = &___7UAppleARKitCameraVideoTexture__6B_;
  }
  return;
}

// InternalConstructor<UAppleARKitEnvironmentCaptureProbe> @ 14cfce140

void __cdecl InternalConstructor<UAppleARKitEnvironmentCaptureProbe>(FObjectInitializer *param_1)

{
  UAREnvironmentCaptureProbe *this;
  
  this = (UAREnvironmentCaptureProbe *)param_1->Obj;
  if (this != (UAREnvironmentCaptureProbe *)0x0) {
    UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe(this);
    *(undefined ***)this = &___7UAppleARKitEnvironmentCaptureProbe__6B_;
    *(undefined8 *)&this->field_0x178 = 0;
  }
  return;
}

// InternalConstructor<UAppleARKitEnvironmentCaptureProbeTexture> @ 14cfce180

void __cdecl
InternalConstructor<UAppleARKitEnvironmentCaptureProbeTexture>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAREnvironmentCaptureProbeTexture *this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FGuid *pFVar6;
  FGuid local_18;
  
  this = (UAREnvironmentCaptureProbeTexture *)param_1->Obj;
  if (this != (UAREnvironmentCaptureProbeTexture *)0x0) {
    UAREnvironmentCaptureProbeTexture::UAREnvironmentCaptureProbeTexture(this,param_1);
    this->_padding_ =
         (longlong)
         &UAppleARKitEnvironmentCaptureProbeTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)
         &UAppleARKitEnvironmentCaptureProbeTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UAppleARKitEnvironmentCaptureProbeTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = (longlong)&___7UAppleARKitEnvironmentCaptureProbeTexture__6B_;
    pFVar6 = FGuid::NewGuid(&local_18);
    uVar2 = pFVar6->A;
    uVar3 = pFVar6->B;
    uVar4 = pFVar6->C;
    uVar5 = pFVar6->D;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    (this->ExternalTextureGuid).A = uVar2;
    (this->ExternalTextureGuid).B = uVar3;
    (this->ExternalTextureGuid).C = uVar4;
    (this->ExternalTextureGuid).D = uVar5;
  }
  return;
}

// InternalConstructor<UAppleARKitOcclusionTexture> @ 14cfce200

void __cdecl InternalConstructor<UAppleARKitOcclusionTexture>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UARTexture *this;
  
  this = (UARTexture *)param_1->Obj;
  if (this != (UARTexture *)0x0) {
    UARTexture::UARTexture(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    this->_padding_ =
         (longlong)&UAppleARKitOcclusionTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UAppleARKitOcclusionTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAppleARKitOcclusionTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = (longlong)&___7UAppleARKitOcclusionTexture__6B_;
  }
  return;
}

// InternalConstructor<UAppleARKitSettings> @ 14cfce260

void __cdecl InternalConstructor<UAppleARKitSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(this + 1));
    this[1].field_0x8 = 1;
    *(undefined ***)this = &UAppleARKitSettings::_vftable__for__UObject__;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
    *(undefined ***)(this + 1) = &UAppleARKitSettings::_vftable__for__FSelfRegisteringExec__;
    *(undefined4 *)&this[2].field_0x10 = 0x55;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0x2b67;
    FName::FName((FName *)&this[2].field_0x1c,"iPhoneXFaceAR");
    FName::FName((FName *)&this[2].field_0x24,"PoseTracking");
    *(undefined2 *)&this[3].field_0x4 = 0;
    *(undefined4 *)&this[3].field_0x8 = 0x2f;
    *(undefined4 *)&this[3].field_0xc = 0x2d;
    FString::FString((FString *)&this[3].field_0x10,L"/Script/AppleARKit.AppleARKitTimecodeProvider"
                    );
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[3].field_0x20,4000);
  }
  return;
}

// InternalConstructor<UAppleARKitTextureCameraDepth> @ 14cfce340

void __cdecl InternalConstructor<UAppleARKitTextureCameraDepth>(FObjectInitializer *param_1)

{
  UARTextureCameraDepth *this;
  longlong lVar1;
  FGuid *pFVar2;
  FGuid local_18;
  
  this = (UARTextureCameraDepth *)param_1->Obj;
  if (this != (UARTextureCameraDepth *)0x0) {
    UARTextureCameraDepth::UARTextureCameraDepth(this,param_1);
    this->_padding_ =
         (longlong)&UAppleARKitTextureCameraDepth::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UAppleARKitTextureCameraDepth::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAppleARKitTextureCameraDepth::_vftable__for__IInterface_AsyncCompilation__;
    pFVar2 = FGuid::NewGuid(&local_18);
    lVar1 = *(longlong *)&pFVar2->C;
    this->_padding_ = *(longlong *)pFVar2;
    this->_padding_ = lVar1;
  }
  return;
}

// InternalConstructor<UAppleARKitTextureCameraImage> @ 14cfce3a0

void __cdecl InternalConstructor<UAppleARKitTextureCameraImage>(FObjectInitializer *param_1)

{
  UARTextureCameraImage *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  this = (UARTextureCameraImage *)param_1->Obj;
  if (this != (UARTextureCameraImage *)0x0) {
    UARTextureCameraImage::UARTextureCameraImage(this,param_1);
    *(undefined ***)this = &UAppleARKitTextureCameraImage::_vftable__for__UStreamableRenderAsset__;
    *(undefined ***)&this->field_0xe0 =
         &UAppleARKitTextureCameraImage::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0xe8 =
         &UAppleARKitTextureCameraImage::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)(this + 1) = &___7UAppleARKitTextureCameraImage__6B_;
    pFVar5 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar5->A;
    uVar2 = pFVar5->B;
    uVar3 = pFVar5->C;
    uVar4 = pFVar5->D;
    this->field_0x116 = this->field_0x116 & 0xfe;
    *(uint *)&this->field_0x158 = uVar1;
    *(uint *)&this->field_0x15c = uVar2;
    *(uint *)&this->field_0x160 = uVar3;
    *(uint *)&this->field_0x164 = uVar4;
  }
  return;
}

// InternalConstructor<UAppleARKitTimecodeProvider> @ 14cfce420

void __cdecl InternalConstructor<UAppleARKitTimecodeProvider>(FObjectInitializer *param_1)

{
  UTimecodeProvider *this;
  FObjectInitializer *pFVar1;
  
  this = (UTimecodeProvider *)param_1->Obj;
  if (this != (UTimecodeProvider *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UTimecodeProvider::UTimecodeProvider(this,pFVar1);
    this->_padding_ = (longlong)&___7UAppleARKitTimecodeProvider__6B_;
    *(undefined4 *)&this[1]._padding_ = 0x3c;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UDEPRECATED_MaterialExpressionARKitPassthroughCamera> @ 14cfce470

void __cdecl
InternalConstructor<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>
          (FObjectInitializer *param_1)

{
  UMaterialExpression *this;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UDEPRECATED_MaterialExpressionARKitPassthroughCamera__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UARKitCameraOverlayMaterialLoader> @ 14cfce4d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UARKitCameraOverlayMaterialLoader>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARKitCameraOverlayMaterialLoader::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARKitCameraOverlayMaterialLoader__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARKitGeoTrackingSupport> @ 14cfce590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARKitGeoTrackingSupport>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARKitGeoTrackingSupport::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UARGeoTrackingSupport::UARGeoTrackingSupport((UARGeoTrackingSupport *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARKitGeoTrackingSupport__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARKitMeshGeometry> @ 14cfce640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARKitMeshGeometry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARMeshGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARKitMeshGeometry::GetPrivateStaticClass();
  this = (UARMeshGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARMeshGeometry *)0x0) {
    UARMeshGeometry::UARMeshGeometry(this,param_1);
    *(undefined ***)this = &___7UARKitMeshGeometry__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitCameraVideoTexture> @ 14cfce6f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitCameraVideoTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTextureCameraImage *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitCameraVideoTexture::GetPrivateStaticClass();
  this = (UARTextureCameraImage *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTextureCameraImage *)0x0) {
    UARTextureCameraImage::UARTextureCameraImage(this,param_1);
    *(undefined ***)this = &UAppleARKitCameraVideoTexture::_vftable__for__UStreamableRenderAsset__;
    *(undefined ***)&this->field_0xe0 =
         &UAppleARKitCameraVideoTexture::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0xe8 =
         &UAppleARKitCameraVideoTexture::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)(this + 1) = &___7UAppleARKitCameraVideoTexture__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbe> @ 14cfce7d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbe>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAREnvironmentCaptureProbe *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitEnvironmentCaptureProbe::GetPrivateStaticClass();
  this = (UAREnvironmentCaptureProbe *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAREnvironmentCaptureProbe *)0x0) {
    UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe(this,param_1);
    *(undefined ***)this = &___7UAppleARKitEnvironmentCaptureProbe__6B_;
    *(undefined8 *)&this->field_0x178 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbeTexture> @ 14cfce890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAREnvironmentCaptureProbeTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitEnvironmentCaptureProbeTexture::GetPrivateStaticClass();
  this = (UAREnvironmentCaptureProbeTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAREnvironmentCaptureProbeTexture *)0x0) {
    UAREnvironmentCaptureProbeTexture::UAREnvironmentCaptureProbeTexture(this,param_1);
    this->_padding_ =
         (longlong)
         &UAppleARKitEnvironmentCaptureProbeTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)
         &UAppleARKitEnvironmentCaptureProbeTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UAppleARKitEnvironmentCaptureProbeTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = (longlong)&___7UAppleARKitEnvironmentCaptureProbeTexture__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitOcclusionTexture> @ 14cfce970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitOcclusionTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitOcclusionTexture::GetPrivateStaticClass();
  this = (UARTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTexture *)0x0) {
    UARTexture::UARTexture(this,param_1);
    this->_padding_ =
         (longlong)&UAppleARKitOcclusionTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UAppleARKitOcclusionTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAppleARKitOcclusionTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = (longlong)&___7UAppleARKitOcclusionTexture__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitSettings> @ 14cfcea50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAppleARKitSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(pUVar1 + 1));
    *(undefined ***)pUVar1 = &UAppleARKitSettings::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)(pUVar1 + 1) = &UAppleARKitSettings::_vftable__for__FSelfRegisteringExec__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[3].field_0x20,4000);
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UAppleARKitTextureCameraDepth> @ 14cfceb40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitTextureCameraDepth>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTextureCameraDepth *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitTextureCameraDepth::GetPrivateStaticClass();
  this = (UARTextureCameraDepth *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTextureCameraDepth *)0x0) {
    UARTextureCameraDepth::UARTextureCameraDepth(this,param_1);
    this->_padding_ =
         (longlong)&UAppleARKitTextureCameraDepth::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UAppleARKitTextureCameraDepth::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAppleARKitTextureCameraDepth::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitTextureCameraImage> @ 14cfcec10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitTextureCameraImage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTextureCameraImage *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitTextureCameraImage::GetPrivateStaticClass();
  this = (UARTextureCameraImage *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTextureCameraImage *)0x0) {
    UARTextureCameraImage::UARTextureCameraImage(this,param_1);
    *(undefined ***)this = &UAppleARKitTextureCameraImage::_vftable__for__UStreamableRenderAsset__;
    *(undefined ***)&this->field_0xe0 =
         &UAppleARKitTextureCameraImage::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0xe8 =
         &UAppleARKitTextureCameraImage::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)(this + 1) = &___7UAppleARKitTextureCameraImage__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAppleARKitTimecodeProvider> @ 14cfcecf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAppleARKitTimecodeProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTimecodeProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAppleARKitTimecodeProvider::GetPrivateStaticClass();
  this = (UTimecodeProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTimecodeProvider *)0x0) {
    UTimecodeProvider::UTimecodeProvider(this,param_1);
    this->_padding_ = (longlong)&___7UAppleARKitTimecodeProvider__6B_;
    *(undefined4 *)&this[1]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_MaterialExpressionARKitPassthroughCamera> @ 14cfcedb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_MaterialExpressionARKitPassthroughCamera::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UDEPRECATED_MaterialExpressionARKitPassthroughCamera__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UARTrackedGeometry,UARTrackedGeometry_*,0> @ 14cfcee80

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UARTrackedGeometry,UARTrackedGeometry_*,0>
          (TObjectPtr<UARTrackedGeometry> *param_1,UARTrackedGeometry **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UARTrackedGeometry *)0x0) {
    return *param_2 == (UARTrackedGeometry *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UARBasicLightEstimate> @ 14cfceea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARBasicLightEstimate * __cdecl NewObject<UARBasicLightEstimate>(UObject *param_1)

{
  UClass *pUVar1;
  UARBasicLightEstimate *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UARBasicLightEstimate_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UARBasicLightEstimate *)
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

// NewObject<UARPin> @ 14cfcef40

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

UARPin * __cdecl NewObject<UARPin>(UObject *param_1)

{
  UClass *pUVar1;
  UARPin *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UARPin_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UARPin *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UARTrackedPoint> @ 14cfcefe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARTrackedPoint * __cdecl NewObject<UARTrackedPoint>(UObject *param_1)

{
  UClass *pUVar1;
  UARTrackedPoint *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UARTrackedPoint_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UARTrackedPoint *)
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

// ObjectPtrDecay<TArray<TObjectPtr<UARPin>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UARPin>,TSizedDefaultAllocator<32>_>_>,TArray<UARPin_*,TSizedDefaultAllocator<32>_>_> @ 14cfcf080

TArray<UARPin_*,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrDecay<TArray<TObjectPtr<UARPin>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UARPin>,TSizedDefaultAllocator<32>_>_>,TArray<UARPin_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UARPin>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UARPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UARPin_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// StaticEnum<enum_EARFaceTrackingFileWriterType> @ 14cfcf2a0

UEnum * __cdecl StaticEnum<enum_EARFaceTrackingFileWriterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType,(UObject *)pUVar1,
                       L"EARFaceTrackingFileWriterType");
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton;
}

// StaticEnum<enum_EARKitTextureType> @ 14cfcf2e0

UEnum * __cdecl StaticEnum<enum_EARKitTextureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARKitTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UEnum_EARKitTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKit_EARKitTextureType,(UObject *)pUVar1,
                       L"EARKitTextureType");
  }
  return Z_Registration_Info_UEnum_EARKitTextureType.OuterSingleton;
}

// StaticEnum<enum_ELivelinkTrackingType> @ 14cfcf320

UEnum * __cdecl StaticEnum<enum_ELivelinkTrackingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType,(UObject *)pUVar1,
                       L"ELivelinkTrackingType");
  }
  return Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{360}' @ 14cfd1904

/* [thunk]:public: virtual void * __ptr64 __cdecl FAppleARKitSystem::`vector deleting
   destructor'`adjustor{360}' (unsigned int) __ptr64 */

void * __thiscall
FAppleARKitSystem::_vector_deleting_destructor__adjustor_360__(FAppleARKitSystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAppleARKitSystem *)&this[-1].TrackedGeometryGroups.field_0x40,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{112}' @ 14cfd1918

/* [thunk]:public: virtual void * __ptr64 __cdecl FAppleARKitSystem::`vector deleting
   destructor'`adjustor{112}' (unsigned int) __ptr64 */

void * __thiscall
FAppleARKitSystem::_vector_deleting_destructor__adjustor_112__(FAppleARKitSystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAppleARKitSystem *)this[-1].FrameLock.CriticalSection.Opaque2,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14cfd1928

/* [thunk]:public: virtual void * __ptr64 __cdecl FAppleARKitXRCamera::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAppleARKitXRCamera::_vector_deleting_destructor__adjustor_8__
          (FAppleARKitXRCamera *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FAppleARKitXRCamera *)&this[-1].ThreadPriority,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{368}' @ 14cfd1938

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitCameraVideoTexture::`vector deleting
   destructor'`adjustor{368}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitCameraVideoTexture::_vector_deleting_destructor__adjustor_368__
          (UAppleARKitCameraVideoTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitCameraVideoTexture *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cfd194c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitCameraVideoTexture::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitCameraVideoTexture::_vector_deleting_destructor__adjustor_224__
          (UAppleARKitCameraVideoTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitCameraVideoTexture *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cfd1960

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitCameraVideoTexture::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitCameraVideoTexture::_vector_deleting_destructor__adjustor_232__
          (UAppleARKitCameraVideoTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitCameraVideoTexture *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{376}' @ 14cfd1974

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitEnvironmentCaptureProbeTexture::`vector
   deleting destructor'`adjustor{376}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::_vector_deleting_destructor__adjustor_376__
          (UAppleARKitEnvironmentCaptureProbeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitEnvironmentCaptureProbeTexture *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cfd1988

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitEnvironmentCaptureProbeTexture::`vector
   deleting destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::_vector_deleting_destructor__adjustor_224__
          (UAppleARKitEnvironmentCaptureProbeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitEnvironmentCaptureProbeTexture *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cfd199c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitEnvironmentCaptureProbeTexture::`vector
   deleting destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::_vector_deleting_destructor__adjustor_232__
          (UAppleARKitEnvironmentCaptureProbeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitEnvironmentCaptureProbeTexture *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{368}' @ 14cfd19b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitOcclusionTexture::`vector deleting
   destructor'`adjustor{368}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitOcclusionTexture::_vector_deleting_destructor__adjustor_368__
          (UAppleARKitOcclusionTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitOcclusionTexture *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cfd19c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitOcclusionTexture::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitOcclusionTexture::_vector_deleting_destructor__adjustor_224__
          (UAppleARKitOcclusionTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitOcclusionTexture *)&this[-1].field_0x98,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cfd19d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitOcclusionTexture::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitOcclusionTexture::_vector_deleting_destructor__adjustor_232__
          (UAppleARKitOcclusionTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitOcclusionTexture *)&this[-1].field_0x90,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cfd19ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitSettings::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitSettings::_vector_deleting_destructor__adjustor_40__
          (UAppleARKitSettings *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAppleARKitSettings *)&this[-1].CriticalSection,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cfd19fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitTextureCameraDepth::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitTextureCameraDepth::_vector_deleting_destructor__adjustor_224__
          (UAppleARKitTextureCameraDepth *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitTextureCameraDepth *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cfd1a10

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitTextureCameraDepth::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitTextureCameraDepth::_vector_deleting_destructor__adjustor_232__
          (UAppleARKitTextureCameraDepth *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitTextureCameraDepth *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{368}' @ 14cfd1a24

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitTextureCameraImage::`vector deleting
   destructor'`adjustor{368}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitTextureCameraImage::_vector_deleting_destructor__adjustor_368__
          (UAppleARKitTextureCameraImage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitTextureCameraImage *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cfd1a38

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitTextureCameraImage::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitTextureCameraImage::_vector_deleting_destructor__adjustor_224__
          (UAppleARKitTextureCameraImage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitTextureCameraImage *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cfd1a4c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAppleARKitTextureCameraImage::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UAppleARKitTextureCameraImage::_vector_deleting_destructor__adjustor_232__
          (UAppleARKitTextureCameraImage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAppleARKitTextureCameraImage *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cfd1a60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAppleARKitVideoOverlay::FAppleARKitVideoOverlay'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1a90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAppleARKitModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1ac0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAppleARKitSystem,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1af0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1b50

void * __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1bc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters>::
_scalar_deleting_destructor_
          (TObject<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1c30

void * __thiscall
TRDGLambdaPass<FAppleARKitXRCamera::FPostBasePassViewExtensionParameters,`FAppleARKitXRCamera::PostRenderBasePassDeferred_RenderThread'::__l5::<lambda_1>_>
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
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1c90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppleARKitXRCamera,SharedPointerInternals::DefaultDeleter<FAppleARKitXRCamera>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAppleARKitXRCamera,SharedPointerInternals::DefaultDeleter<FAppleARKitXRCamera>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1cd0

void * __thiscall
FARKitCameraVideoResource::_scalar_deleting_destructor_
          (FARKitCameraVideoResource *this,uint param_1)

{
  FRHITexture *pFVar1;
  FRHIUnorderedAccessView *this_00;
  
  this->_padding_ = (longlong)&___7FARKitCameraVideoResource__6B_;
  pFVar1 = (this->VideoTextureCbCr).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->VideoTextureY).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this_00 = (this->DecodedTextureUAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DecodedTextureLock);
  pFVar1 = (this->DecodedTextureRef).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1d80

void * __thiscall FARKitMeshData::_scalar_deleting_destructor_(FARKitMeshData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FARKitMeshData__6B_;
  pFVar1 = (this->AccumulatedNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DummyColorData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DummyUVData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Classifications).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TangentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBrickDataReceipt_IMRMesh__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1e30

void * __thiscall
FARKitTextureResource::_scalar_deleting_destructor_(FARKitTextureResource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1e90

void * __thiscall
FARSystemSupportBase::_scalar_deleting_destructor_(FARSystemSupportBase *this,uint param_1)

{
  IARSystemSupport::~IARSystemSupport((IARSystemSupport *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1ed0

void * __thiscall
FAppleARKitSystem::_scalar_deleting_destructor_(FAppleARKitSystem *this,uint param_1)

{
  ~FAppleARKitSystem(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1f10

void * __thiscall
FAppleARKitVideoOverlay::_scalar_deleting_destructor_(FAppleARKitVideoOverlay *this,uint param_1)

{
  ~FAppleARKitVideoOverlay(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1f50

void * __thiscall
FAppleARKitXRCamera::_scalar_deleting_destructor_(FAppleARKitXRCamera *this,uint param_1)

{
  FAppleARKitVideoOverlay::~FAppleARKitVideoOverlay(&this->VideoOverlay);
  this->_padding_ = (longlong)&FDefaultXRCamera::_vftable__for__IXRCamera__;
  this->_padding_ = (longlong)&FDefaultXRCamera::_vftable__for__FHMDSceneViewExtension__;
  FLateUpdateManager::~FLateUpdateManager((FLateUpdateManager *)&this->_padding_);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd1fd0

void * __thiscall
IARSystemSupport::_scalar_deleting_destructor_(IARSystemSupport *this,uint param_1)

{
  ~IARSystemSupport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2010

void * __thiscall
IAppleImageInterface::_scalar_deleting_destructor_(IAppleImageInterface *this,uint param_1)

{
  *this = (IAppleImageInterface)&___7IAppleImageInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2050

void * __thiscall
UARKitCameraOverlayMaterialLoader::_scalar_deleting_destructor_
          (UARKitCameraOverlayMaterialLoader *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UARKitCameraOverlayMaterialLoader__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd20b0

void * __thiscall
UARKitGeoTrackingSupport::_scalar_deleting_destructor_(UARKitGeoTrackingSupport *this,uint param_1)

{
  *(undefined ***)this = &___7UARKitGeoTrackingSupport__6B_;
  UARGeoTrackingSupport::~UARGeoTrackingSupport((UARGeoTrackingSupport *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2110

void * __thiscall
UARKitMeshGeometry::_scalar_deleting_destructor_(UARKitMeshGeometry *this,uint param_1)

{
  *(undefined ***)this = &___7UARKitMeshGeometry__6B_;
  UARMeshGeometry::~UARMeshGeometry((UARMeshGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2170

void * __thiscall
UAppleARKitCameraVideoTexture::_scalar_deleting_destructor_
          (UAppleARKitCameraVideoTexture *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7IAppleImageInterface__6B_;
  UARTextureCameraImage::~UARTextureCameraImage((UARTextureCameraImage *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2200

void * __thiscall
UAppleARKitEnvironmentCaptureProbe::_scalar_deleting_destructor_
          (UAppleARKitEnvironmentCaptureProbe *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAppleARKitEnvironmentCaptureProbe__6B_;
  UAREnvironmentCaptureProbe::~UAREnvironmentCaptureProbe((UAREnvironmentCaptureProbe *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2260

void * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::_scalar_deleting_destructor_
          (UAppleARKitEnvironmentCaptureProbeTexture *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x178 = &___7IAppleImageInterface__6B_;
  UAREnvironmentCaptureProbeTexture::~UAREnvironmentCaptureProbeTexture
            ((UAREnvironmentCaptureProbeTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd22f0

void * __thiscall
UAppleARKitOcclusionTexture::_scalar_deleting_destructor_
          (UAppleARKitOcclusionTexture *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7IAppleImageInterface__6B_;
  UARTexture::~UARTexture((UARTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2380

void * __thiscall
UAppleARKitSettings::_scalar_deleting_destructor_(UAppleARKitSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->ARKitTimecodeProvider).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LivelinkTrackingTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FaceTrackingLogDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2440

void * __thiscall
UAppleARKitTextureCameraDepth::_scalar_deleting_destructor_
          (UAppleARKitTextureCameraDepth *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  UARTextureCameraDepth::~UARTextureCameraDepth((UARTextureCameraDepth *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd24c0

void * __thiscall
UAppleARKitTextureCameraImage::_scalar_deleting_destructor_
          (UAppleARKitTextureCameraImage *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7IAppleImageInterface__6B_;
  UARTextureCameraImage::~UARTextureCameraImage((UARTextureCameraImage *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd2550

void * __thiscall
UAppleARKitTimecodeProvider::_scalar_deleting_destructor_
          (UAppleARKitTimecodeProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAppleARKitTimecodeProvider__6B_;
  UTimecodeProvider::~UTimecodeProvider((UTimecodeProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfd25b0

void * __thiscall
UDEPRECATED_MaterialExpressionARKitPassthroughCamera::_scalar_deleting_destructor_
          (UDEPRECATED_MaterialExpressionARKitPassthroughCamera *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDEPRECATED_MaterialExpressionARKitPassthroughCamera__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// CreateAppleARKitSystem @ 14cfd3700

TSharedPtr<FAppleARKitSystem,1> * __cdecl
AppleARKitSupport::CreateAppleARKitSystem(TSharedPtr<FAppleARKitSystem,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FAppleARKitSystem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeARKitGeoTrackingSupport @ 14cfd4c90

void __cdecl EmptyLinkFunctionForGeneratedCodeARKitGeoTrackingSupport(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARKitTrackables @ 14cfd4ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeARKitTrackables(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitCamera @ 14cfd4cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitCamera(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitFrame @ 14cfd4cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitFrame(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitLightEstimate @ 14cfd4cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitLightEstimate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitSettings @ 14cfd4ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitTextures @ 14cfd4cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitTextures(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitTimecodeProvider @ 14cfd4d00

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitTimecodeProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitTrackable @ 14cfd4d10

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitTrackable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKitVideoOverlay @ 14cfd4d20

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKitVideoOverlay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAppleARKit_init @ 14cfd4d30

void __cdecl EmptyLinkFunctionForGeneratedCodeAppleARKit_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExternalTextureMaterialExpression @ 14cfd4d40

void __cdecl EmptyLinkFunctionForGeneratedCodeExternalTextureMaterialExpression(void)

{
  return;
}

// MeshARTestingExec @ 14cfd9e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

bool __cdecl MeshARTestingExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int iVar1;
  code *pcVar2;
  __m128d _Var3;
  __m128d _Var4;
  __m128d _Var5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  AAROriginActor *pAVar16;
  UClass *pUVar17;
  UMRMeshComponent *this;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStackY_278 [32];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_228;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_218;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  wchar_t *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_188;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> local_178;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  double local_128 [2];
  double local_118 [2];
  undefined1 local_108 [128];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1f0 = param_2;
  bVar13 = FParse::Command(&local_1f0,L"ARKIT",true);
  if ((bVar13) && (bVar13 = FParse::Command(&local_1f0,L"MRMESH",true), bVar13)) {
    pAVar16 = AAROriginActor::GetOriginActor();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar16,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar17 = Z_Construct_UClass_UMRMeshComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_108,pUVar17);
    local_108._8_8_ = pAVar16;
    this = (UMRMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
    if (local_108._64_8_ != 0) {
      plVar19 = (longlong *)(local_108 + 0x50);
      if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_108._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    UActorComponent::RegisterComponent((UActorComponent *)this);
    UMRMeshComponent::SetUseWireframe(this,true);
    _Var12 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    _Var7 = UE::Math::TTransform<double>::Identity.Translation.XY;
    _Var5 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    _Var3 = UE::Math::TTransform<double>::Identity.Rotation.XY;
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = 0;
    local_218.ArrayMax = 0;
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,&local_218.AllocatorInstance,0,&local_218.ArrayMax);
    local_1d8 = 0;
    local_1e8 = ___xmm_40590000000000004059000000000000;
    uStack_1e0 = _UNK_1512468d8;
    if (((local_218.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e8) &&
        ((FScriptContainerElement *)&local_1e8 <
         local_218.AllocatorInstance.Data + (longlong)local_218.ArrayMax * 0x18)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    iVar15 = local_218.ArrayNum;
    if (local_218.ArrayNum == local_218.ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_218.AllocatorInstance,&local_218.ArrayMax);
    }
    iVar1 = iVar15 + 1;
    local_1c0 = 0;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)iVar15 * 0x18) = local_1e8;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 8) = uStack_1e0;
    uStack_1c8 = _UNK_15076c8a8;
    local_1d0 = ___xmm_c0590000000000004059000000000000;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 0x10) = local_1d8;
    local_218.ArrayNum = iVar1;
    if (((local_218.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d0) &&
        ((FScriptContainerElement *)&local_1d0 <
         local_218.AllocatorInstance.Data + (longlong)local_218.ArrayMax * 0x18)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_218.ArrayNum == local_218.ArrayMax) {
      local_218.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_218.AllocatorInstance,&local_218.ArrayMax);
    }
    iVar15 = local_218.ArrayNum + 1;
    local_1a8 = 0;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)local_218.ArrayNum * 0x18) =
         local_1d0;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)local_218.ArrayNum * 0x18 + 8) =
         uStack_1c8;
    uStack_1b0 = _UNK_1518ecdd8;
    local_1b8 = ___xmm_c059000000000000c059000000000000;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)local_218.ArrayNum * 0x18 + 0x10) =
         local_1c0;
    local_218.ArrayNum = iVar15;
    if (((local_218.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1b8) &&
        ((FScriptContainerElement *)&local_1b8 <
         local_218.AllocatorInstance.Data + (longlong)local_218.ArrayMax * 0x18)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_218.ArrayNum == local_218.ArrayMax) {
      local_218.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_218.AllocatorInstance,&local_218.ArrayMax);
    }
    iVar15 = local_218.ArrayNum + 1;
    local_190 = 0;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)local_218.ArrayNum * 0x18) =
         local_1b8;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)local_218.ArrayNum * 0x18 + 8) =
         uStack_1b0;
    uStack_198 = _UNK_151d21688;
    local_1a0 = ___xmm_4059000000000000c059000000000000;
    *(undefined8 *)(local_218.AllocatorInstance.Data + (longlong)local_218.ArrayNum * 0x18 + 0x10) =
         local_1a8;
    local_218.ArrayNum = iVar15;
    if (((local_218.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a0) &&
        ((FScriptContainerElement *)&local_1a0 <
         local_218.AllocatorInstance.Data + (longlong)local_218.ArrayMax * 0x18)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_218.ArrayNum == local_218.ArrayMax) {
      local_218.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_218.AllocatorInstance,&local_218.ArrayMax);
    }
    lVar18 = (longlong)local_218.ArrayNum;
    local_218.ArrayNum = local_218.ArrayNum + 1;
    *(undefined8 *)(local_218.AllocatorInstance.Data + lVar18 * 0x18) = local_1a0;
    *(undefined8 *)(local_218.AllocatorInstance.Data + lVar18 * 0x18 + 8) = uStack_198;
    *(undefined8 *)(local_218.AllocatorInstance.Data + lVar18 * 0x18 + 0x10) = local_190;
    local_228.ArrayNum = 0;
    if (local_228.ArrayMax < 6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,&local_228.AllocatorInstance,0,&local_228.ArrayMax);
    }
    local_208 = 0;
    if (((local_228.AllocatorInstance.Data <= (FScriptContainerElement *)&local_208) &&
        ((FScriptContainerElement *)&local_208 <
         local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 4)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_228.ArrayNum == local_228.ArrayMax) {
      local_228.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_228.AllocatorInstance,&local_228.ArrayMax);
    }
    iVar15 = local_228.ArrayNum + 1;
    local_204 = 1;
    *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 4) = local_208
    ;
    local_228.ArrayNum = iVar15;
    if (((local_228.AllocatorInstance.Data <= (FScriptContainerElement *)&local_204) &&
        ((FScriptContainerElement *)&local_204 <
         local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 4)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_228.ArrayNum == local_228.ArrayMax) {
      local_228.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_228.AllocatorInstance,&local_228.ArrayMax);
    }
    iVar15 = local_228.ArrayNum + 1;
    local_200 = 2;
    *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 4) = local_204
    ;
    local_228.ArrayNum = iVar15;
    if (((local_228.AllocatorInstance.Data <= (FScriptContainerElement *)&local_200) &&
        ((FScriptContainerElement *)&local_200 <
         local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 4)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_228.ArrayNum == local_228.ArrayMax) {
      local_228.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_228.AllocatorInstance,&local_228.ArrayMax);
    }
    iVar15 = local_228.ArrayNum + 1;
    local_1fc = 2;
    *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 4) = local_200
    ;
    local_228.ArrayNum = iVar15;
    if (((local_228.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1fc) &&
        ((FScriptContainerElement *)&local_1fc <
         local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 4)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_228.ArrayNum == local_228.ArrayMax) {
      local_228.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_228.AllocatorInstance,&local_228.ArrayMax);
    }
    iVar15 = local_228.ArrayNum + 1;
    local_1f8 = 3;
    *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 4) = local_1fc
    ;
    local_228.ArrayNum = iVar15;
    if (((local_228.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f8) &&
        ((FScriptContainerElement *)&local_1f8 <
         local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 4)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_228.ArrayNum == local_228.ArrayMax) {
      local_228.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_228.AllocatorInstance,&local_228.ArrayMax);
    }
    iVar15 = local_228.ArrayNum + 1;
    local_1f4 = 0;
    *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 4) = local_1f8
    ;
    local_228.ArrayNum = iVar15;
    if (((local_228.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f4) &&
        ((FScriptContainerElement *)&local_1f4 <
         local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 4)) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar14 = (*pcVar2)();
      return (bool)uVar14;
    }
    if (local_228.ArrayNum == local_228.ArrayMax) {
      local_228.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_228.AllocatorInstance,&local_228.ArrayMax);
    }
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 4) = local_1f4
    ;
    _Var11 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    _Var8 = UE::Math::TTransform<double>::Identity.Translation.XY;
    _Var6 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    _Var4 = UE::Math::TTransform<double>::Identity.Rotation.XY;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] = _Var10.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] = _Var10.m128d_f64[1];
    local_158._s_0.X = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_158._s_0.Y = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_158._s_0.Z = (double)_Var12.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] = _Var3.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1] = _Var3.m128d_f64[1];
    local_128[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_128[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0] = _Var5.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1] = _Var5.m128d_f64[1];
    local_118[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_118[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] = _Var7.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] = _Var7.m128d_f64[1];
    local_140._s_0.X = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_140._s_0.Y = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_140._s_0.Z = (double)_Var9.m128d_f64[0];
    UE::Math::TTransform<double>::Identity.Rotation.XY = _Var4;
    UE::Math::TTransform<double>::Identity.Rotation.ZW = _Var6;
    UE::Math::TTransform<double>::Identity.Translation.XY = _Var8;
    UE::Math::TTransform<double>::Identity.Scale3D.XY = _Var11;
    local_228.ArrayNum = local_228.ArrayNum + 1;
    UMRMeshComponent::UpdateMesh
              (this,(TVector<double> *)&local_140._s_0,(TQuat<double> *)local_128,
               (TVector<double> *)&local_158._s_0,&local_218,&local_228,&local_168,&local_178,
               &local_188);
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  return bVar13;
}

// Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_NoRegister @ 14cfdfd70

UClass * __cdecl Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitCameraOverlayMaterialLoader",
               &Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton,
               UARKitCameraOverlayMaterialLoader::
               StaticRegisterNativesUARKitCameraOverlayMaterialLoader,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARKitCameraOverlayMaterialLoader>,
               InternalVTableHelperCtorCaller<UARKitCameraOverlayMaterialLoader>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton;
}

// Z_Construct_UClass_UARKitGeoTrackingSupport_NoRegister @ 14cfdfe20

UClass * __cdecl Z_Construct_UClass_UARKitGeoTrackingSupport_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitGeoTrackingSupport",
               &Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton,
               UARKitGeoTrackingSupport::StaticRegisterNativesUARKitGeoTrackingSupport,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UARKitGeoTrackingSupport>,
               InternalVTableHelperCtorCaller<UARKitGeoTrackingSupport>,local_res8,
               UARGeoTrackingSupport::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton;
}

// Z_Construct_UClass_UARKitMeshGeometry_NoRegister @ 14cfdfee0

UClass * __cdecl Z_Construct_UClass_UARKitMeshGeometry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitMeshGeometry",
               &Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton,
               UARKitMeshGeometry::StaticRegisterNativesUARKitMeshGeometry,0x160,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UARKitMeshGeometry>,
               InternalVTableHelperCtorCaller<UARKitMeshGeometry>,local_res8,
               UARMeshGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitCameraVideoTexture_NoRegister @ 14cfdffa0

UClass * __cdecl Z_Construct_UClass_UAppleARKitCameraVideoTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitCameraVideoTexture",
               &Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton,
               UAppleARKitCameraVideoTexture::StaticRegisterNativesUAppleARKitCameraVideoTexture,
               0x178,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitCameraVideoTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitCameraVideoTexture>,local_res8,
               UARTextureCameraImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_NoRegister @ 14cfe0060

UClass * __cdecl Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitEnvironmentCaptureProbe",
               &Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton,
               UAppleARKitEnvironmentCaptureProbe::
               StaticRegisterNativesUAppleARKitEnvironmentCaptureProbe,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitEnvironmentCaptureProbe>,
               InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbe>,local_res8,
               UAREnvironmentCaptureProbe::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitOcclusionTexture_NoRegister @ 14cfe0120

UClass * __cdecl Z_Construct_UClass_UAppleARKitOcclusionTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitOcclusionTexture",
               &Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton,
               UAppleARKitOcclusionTexture::StaticRegisterNativesUAppleARKitOcclusionTexture,0x178,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitOcclusionTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitOcclusionTexture>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitSettings_NoRegister @ 14cfe01e0

UClass * __cdecl Z_Construct_UClass_UAppleARKitSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitSettings",
               &Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton,
               UAppleARKitSettings::StaticRegisterNativesUAppleARKitSettings,0xc0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitSettings>,
               InternalVTableHelperCtorCaller<UAppleARKitSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitTextureCameraDepth_NoRegister @ 14cfe0290

UClass * __cdecl Z_Construct_UClass_UAppleARKitTextureCameraDepth_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTextureCameraDepth",
               &Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton,
               UAppleARKitTextureCameraDepth::StaticRegisterNativesUAppleARKitTextureCameraDepth,
               0x178,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitTextureCameraDepth>,
               InternalVTableHelperCtorCaller<UAppleARKitTextureCameraDepth>,local_res8,
               UARTextureCameraDepth::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitTextureCameraImage_NoRegister @ 14cfe0350

UClass * __cdecl Z_Construct_UClass_UAppleARKitTextureCameraImage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTextureCameraImage",
               &Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton,
               UAppleARKitTextureCameraImage::StaticRegisterNativesUAppleARKitTextureCameraImage,
               0x178,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitTextureCameraImage>,
               InternalVTableHelperCtorCaller<UAppleARKitTextureCameraImage>,local_res8,
               UARTextureCameraImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton;
}

// Z_Construct_UClass_UAppleARKitTimecodeProvider_NoRegister @ 14cfe0410

UClass * __cdecl Z_Construct_UClass_UAppleARKitTimecodeProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTimecodeProvider",
               &Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton,
               UAppleARKitTimecodeProvider::StaticRegisterNativesUAppleARKitTimecodeProvider,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitTimecodeProvider>,
               InternalVTableHelperCtorCaller<UAppleARKitTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_NoRegister @ 14cfe04d0

UClass * __cdecl
Z_Construct_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"MaterialExpressionARKitPassthroughCamera",
               &Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
                InnerSingleton,
               UDEPRECATED_MaterialExpressionARKitPassthroughCamera::
               StaticRegisterNativesUDEPRECATED_MaterialExpressionARKitPassthroughCamera,0xe0,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>,
               InternalVTableHelperCtorCaller<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
         InnerSingleton;
}

// Z_Construct_UScriptStruct_FAppleARKitCamera @ 14cfe0590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAppleARKitCamera(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitCamera.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAppleARKitCamera.InnerSingleton,
               &Z_Construct_UScriptStruct_FAppleARKitCamera_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAppleARKitCamera.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAppleARKitCamera.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAppleARKitFrame @ 14cfe0610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAppleARKitFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitFrame.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAppleARKitFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAppleARKitFrame.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAppleARKitFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAppleARKitLightEstimate @ 14cfe0690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAppleARKitLightEstimate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLightEstimate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAppleARKitLightEstimate.InnerSingleton,
               &Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLightEstimate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAppleARKitLightEstimate.InnerSingleton;
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

// IMPLEMENT_MODULE_AppleARKit @ 14cfe1830

void __cdecl IMPLEMENT_MODULE_AppleARKit(void)

{
  return;
}

// CachedMeshData'' @ 150454d40

void __cdecl `dynamic_atexit_destructor_for_'FARKitMeshData::CachedMeshData__(void)

{
  FARKitMeshData::CachedMeshData._72_4_ = 0;
  if (FARKitMeshData::CachedMeshData._64_8_ != 0) {
    FMemory::Free((void *)FARKitMeshData::CachedMeshData._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FARKitMeshData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FARKitMeshData::CachedMeshData);
  return;
}

// DepthOcclusionOverlayMaterialPath'' @ 150454d80

void __cdecl
`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::
DepthOcclusionOverlayMaterialPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterialPath.Data.
               AllocatorInstance.Data;
  if (UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterialPath.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UARKitCameraOverlayMaterialLoader::DepthOcclusionOverlayMaterialPath.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
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

// GlobalLock'' @ 150454da0

void __cdecl `dynamic_atexit_destructor_for_'FARKitMeshData::GlobalLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150454da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FARKitMeshData::GlobalLock);
  return;
}

// MatteOcclusionOverlayMaterialPath'' @ 150454dc0

void __cdecl
`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::
MatteOcclusionOverlayMaterialPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterialPath.Data.
               AllocatorInstance.Data;
  if (UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterialPath.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UARKitCameraOverlayMaterialLoader::MatteOcclusionOverlayMaterialPath.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
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

// OverlayMaterialPath'' @ 150454de0

void __cdecl
`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::OverlayMaterialPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UARKitCameraOverlayMaterialLoader::OverlayMaterialPath.Data.AllocatorInstance.Data;
  if (UARKitCameraOverlayMaterialLoader::OverlayMaterialPath.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UARKitCameraOverlayMaterialLoader::OverlayMaterialPath.Data.AllocatorInstance.Data !=
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

// SceneDepthColorationMaterialPath'' @ 150454e00

void __cdecl
`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::
SceneDepthColorationMaterialPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterialPath.Data.
               AllocatorInstance.Data;
  if (UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterialPath.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UARKitCameraOverlayMaterialLoader::SceneDepthColorationMaterialPath.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
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

// SceneDepthOcclusionMaterialPath'' @ 150454e20

void __cdecl
`dynamic_atexit_destructor_for_'UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath.Data.
               AllocatorInstance.Data;
  if (UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath.Data.AllocatorInstance.Data
      == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UARKitCameraOverlayMaterialLoader::SceneDepthOcclusionMaterialPath.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
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

// ShaderTypeRegistration'' @ 150454e40

void __cdecl
`dynamic_atexit_destructor_for_'TARKitCameraOverlayPS<1>::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150454e50

void __cdecl
`dynamic_atexit_destructor_for_'TARKitCameraOverlayPS<0>::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150454e60

void __cdecl
`dynamic_atexit_destructor_for_'TARKitCameraOverlayVS<1>::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150454e70

void __cdecl
`dynamic_atexit_destructor_for_'TARKitCameraOverlayVS<0>::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150454e80

void __cdecl
`dynamic_atexit_destructor_for_'FComputeShaderYCbCrToRGB::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 150454e90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__06_0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150454f10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__03_04_0A__0A__00_0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
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
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150454f90

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

// StaticResource'' @ 150455010

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

// StaticResource'' @ 150455090

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

// `dynamic_atexit_destructor_for_'CVarDebugOverlayMode'' @ 150455110

void __cdecl _dynamic_atexit_destructor_for__CVarDebugOverlayMode__(void)

{
  CVarDebugOverlayMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugOverlayMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreGeoTrackingState'' @ 150455130

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreGeoTrackingState__(void)

{
  CVarIgnoreGeoTrackingState._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreGeoTrackingState);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReleaseSessionWhenStopped'' @ 150455150

void __cdecl _dynamic_atexit_destructor_for__CVarReleaseSessionWhenStopped__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReleaseSessionWhenStopped);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneDepthBufferBlurAmount'' @ 150455170

void __cdecl _dynamic_atexit_destructor_for__CVarSceneDepthBufferBlurAmount__(void)

{
  CVarSceneDepthBufferBlurAmount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneDepthBufferBlurAmount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneDepthBufferSizeScale'' @ 150455190

void __cdecl _dynamic_atexit_destructor_for__CVarSceneDepthBufferSizeScale__(void)

{
  CVarSceneDepthBufferSizeScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSceneDepthBufferSizeScale);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultOverlayMaterialRef'' @ 1504551b0

void __cdecl
`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
_dynamic_atexit_destructor_for__DefaultOverlayMaterialRef__(void)

{
  `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
  ::__l2::DefaultOverlayMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject
            ((FGCObject *)
             &`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
              ::__l2::DefaultOverlayMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'DepthOcclusionOverlayMaterialRef'' @ 1504551d0

void __cdecl
`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
_dynamic_atexit_destructor_for__DepthOcclusionOverlayMaterialRef__(void)

{
  `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
  ::__l2::DepthOcclusionOverlayMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject
            ((FGCObject *)
             &`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
              ::__l2::DepthOcclusionOverlayMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504551f0

void __cdecl
``FAppleARKitVideoOverlay::RenderVideoOverlayWithMaterial'::__l10::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504551f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150455210

void __cdecl
``FAppleARKitVideoOverlay::RenderVideoOverlayWithMaterial'::__l15::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150455217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'FAppleARKitARKitSystemPtr'' @ 150455230

void __cdecl _dynamic_atexit_destructor_for__FAppleARKitARKitSystemPtr__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController = FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController;
  if (FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000150455253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogAppleARKit'' @ 150455260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAppleARKit__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAppleARKit);
  return;
}

// `dynamic_atexit_destructor_for_'LogMrMesh'' @ 150455280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMrMesh__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMrMesh);
  return;
}

// `dynamic_atexit_destructor_for_'MatteOcclusionOverlayMaterialRef'' @ 1504552a0

void __cdecl
`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
_dynamic_atexit_destructor_for__MatteOcclusionOverlayMaterialRef__(void)

{
  `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
  ::__l2::MatteOcclusionOverlayMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject
            ((FGCObject *)
             &`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
              ::__l2::MatteOcclusionOverlayMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'MeshARTestingExecRegistration'' @ 1504552c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__MeshARTestingExecRegistration__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec
            ((FSelfRegisteringExec *)&MeshARTestingExecRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'ModuleKeyName'' @ 1504552e0

void __cdecl
`FAppleARKitModule::GetModuleKeyName'::__l2::_dynamic_atexit_destructor_for__ModuleKeyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ModuleKeyName.Data.AllocatorInstance.Data;
  if (ModuleKeyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ModuleKeyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SceneDepthColorationMaterialRef'' @ 150455300

void __cdecl
`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
_dynamic_atexit_destructor_for__SceneDepthColorationMaterialRef__(void)

{
  `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
  ::__l2::SceneDepthColorationMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject
            ((FGCObject *)
             &`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
              ::__l2::SceneDepthColorationMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'SceneDepthOcclusionMaterialRef'' @ 150455320

void __cdecl
`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
_dynamic_atexit_destructor_for__SceneDepthOcclusionMaterialRef__(void)

{
  `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
  ::__l2::SceneDepthOcclusionMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject
            ((FGCObject *)
             &`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
              ::__l2::SceneDepthOcclusionMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150455340

void __cdecl
`FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FARKitPostProcessMaterialParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150455360

void __cdecl
`FComputeShaderYCbCrToRGB::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FComputeShaderYCbCrToRGB::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150455380

void __cdecl
`FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FAppleARKitXRCamera::FPostBasePassViewExtensionParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1504553a0

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
`TARKitCameraOverlayPS<1>::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1504553c0

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
`TARKitCameraOverlayPS<0>::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1504553e0

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
`TARKitCameraOverlayVS<1>::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150455400

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
`TARKitCameraOverlayVS<0>::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150455420

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
`FComputeShaderYCbCrToRGB::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

