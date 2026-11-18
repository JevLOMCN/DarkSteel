// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 447

// HeightmapTextureToActiveComponent'' @ 141078f80

void __cdecl `dynamic_initializer_for_'FLandscapeGroup::HeightmapTextureToActiveComponent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLandscapeGroup::HeightmapTextureToActiveComponent__);
  return;
}

// LandscapeIndexAllocator'' @ 141078fa0

void __cdecl `dynamic_initializer_for_'FLandscapeRenderSystem::LandscapeIndexAllocator__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLandscapeRenderSystem::LandscapeIndexAllocator__);
  return;
}

// OnCreateRenderThreadResources'' @ 141078fc0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 141078fe0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ShaderTypeRegistration'' @ 141079000

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

void __cdecl `dynamic_initializer_for_'FLandscapeGrassWeightPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLandscapeGrassWeightPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMeshMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FLandscapeGrassWeightPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FLandscapeGrassWeightPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141079050

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

void __cdecl `dynamic_initializer_for_'FLandscapeGrassWeightVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLandscapeGrassWeightVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FMeshMaterialShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FLandscapeGrassWeightVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FLandscapeGrassWeightVS::ShaderTypeRegistration__);
  return;
}

// SharedBuffersMap'' @ 1410790a0

void __cdecl `dynamic_initializer_for_'FLandscapeComponentSceneProxy::SharedBuffersMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLandscapeComponentSceneProxy::SharedBuffersMap__);
  return;
}

// StaticResource'' @ 1410790c0

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

// StaticResource'' @ 141079180

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  FRHIResource *local_res8;
  
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
    TVar1 = TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>::CreateRHI();
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIDepthStencilState *)
        &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI) {
      TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)(TVar1.Reference)->_padding_;
      (TVar1.Reference)->_padding_ = 0;
      if (this.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141079240

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
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
             &TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__00_00_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 0x101;
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
    this = TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410793d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
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
             &TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__00_01_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 0x201;
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
    this = TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141079560

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
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
             &TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__00_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 1;
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
    this = TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410796f0

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

// StaticResource'' @ 141079880

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

// StaticResource'' @ 141079a10

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

// StaticResource'' @ 141079ba0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
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
             &TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__0A__00_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 0x100;
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
    this = TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141079d30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
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
             &TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__0A__01_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 0x200;
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
    this = TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141079ec0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
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
             &TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__0A__0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18[0] = 0;
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
    this = TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
    ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHIRasterizerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14107a050

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010101;
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
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14107a1f0

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

// StaticType'' @ 14107a390

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

void __cdecl `dynamic_initializer_for_'FLandscapeFixedGridVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FLandscapeFixedGridVertexFactory::StaticType,L"FLandscapeFixedGridVertexFactory",
             L"/Engine/Private/LandscapeVertexFactory.ush",
             SupportsLandscape|SupportsLumenMeshCards|SupportsPSOPrecaching|SupportsLightmapBaking|
             SupportsRayTracingDynamicGeometry|SupportsRayTracing|SupportsPrimitiveIdStream|
             SupportsCachingMeshDrawCommands|SupportsDynamicLighting|SupportsStaticLighting|
             UsedWithMaterials,ConstructVertexFactoryParameters<FLandscapeFixedGridVertexFactory>,
             GetVertexFactoryParametersLayout<FLandscapeFixedGridVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FLandscapeFixedGridVertexFactory>,
             FLandscapeVertexFactory::GetPSOPrecacheVertexFetchElements,
             FLandscapeVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FLandscapeFixedGridVertexFactory::StaticType__);
  return;
}

// StaticType'' @ 14107a410

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

void __cdecl `dynamic_initializer_for_'FLandscapeVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FLandscapeVertexFactory::StaticType,L"FLandscapeVertexFactory",
             L"/Engine/Private/LandscapeVertexFactory.ush",
             SupportsLandscape|SupportsPSOPrecaching|SupportsLightmapBaking|
             SupportsRayTracingDynamicGeometry|SupportsRayTracing|SupportsPrimitiveIdStream|
             SupportsCachingMeshDrawCommands|SupportsDynamicLighting|SupportsStaticLighting|
             UsedWithMaterials,ConstructVertexFactoryParameters<FLandscapeVertexFactory>,
             GetVertexFactoryParametersLayout<FLandscapeVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FLandscapeVertexFactory>,
             FLandscapeVertexFactory::GetPSOPrecacheVertexFetchElements,
             FLandscapeVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FLandscapeVertexFactory::StaticType__);
  return;
}

// `dynamic_initializer_for_'CLandscapeAllowNanitePerClusterDisplacementDisable'' @ 14107a490

void __cdecl _dynamic_initializer_for__CLandscapeAllowNanitePerClusterDisplacementDisable__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CLandscapeAllowNanitePerClusterDisplacementDisable,
             L"r.Landscape.AllowNanitePerClusterDisplacementDisable",
             &GLandscapeAllowNanitePerClusterDisplacementDisable,
             L"Allow Nanite landscape to disable displcement on individual clusters in the distance."
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
  atexit(_dynamic_atexit_destructor_for__CLandscapeAllowNanitePerClusterDisplacementDisable__);
  return;
}

// `dynamic_initializer_for_'CVarAllowLandscapeShadows'' @ 14107a5e0

void __cdecl _dynamic_initializer_for__CVarAllowLandscapeShadows__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowLandscapeShadows,L"r.AllowLandscapeShadows",&GAllowLandscapeShadows,
             L"Allow Landscape Shadows",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarAllowLandscapeShadows__);
  return;
}

// `dynamic_initializer_for_'CVarAmortizedGroupValidation'' @ 14107a630

void __cdecl UE::Landscape::_dynamic_initializer_for__CVarAmortizedGroupValidation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAmortizedGroupValidation,L"landscape.AmortizedGroupValidation",
             &GAmortizedGroupValidation,
             L"Enables amortized validation of landscape group registrations, to verify that components are registered properly with their landscape group.  Default enabled (1)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAmortizedGroupValidation__);
  return;
}

// `dynamic_initializer_for_'CVarCameraCutTranslationThreshold'' @ 14107a680

void __cdecl _dynamic_initializer_for__CVarCameraCutTranslationThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCameraCutTranslationThreshold,L"grass.GrassMap.CameraCutTranslationThreshold",
             &GGrassMapCameraCutTranslationThreshold,
             L"The maximum camera translation distance in centimeters allowed between two frames before we consider it a camera cut and grass map priorities are immediately recalculated."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCameraCutTranslationThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarDisableLandscapeNaniteGI'' @ 14107a6d0

void __cdecl _dynamic_initializer_for__CVarDisableLandscapeNaniteGI__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableLandscapeNaniteGI,L"r.DisableLandscapeNaniteGI",&GDisableLandscapeNaniteGI,
             L"Disable Landscape Nanite GI",
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
  atexit(_dynamic_atexit_destructor_for__CVarDisableLandscapeNaniteGI__);
  return;
}

// `dynamic_initializer_for_'CVarDumpLandscapeLODs'' @ 14107a820

void __cdecl _dynamic_initializer_for__CVarDumpLandscapeLODs__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnDumpLandscapeLODs;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDumpLandscapeLODs,L"landscape.DumpLODs",
             L"Will dump the current status of LOD value and current texture streaming status. Use the -detailed option to include all LOD-related infos"
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
  atexit(_dynamic_atexit_destructor_for__CVarDumpLandscapeLODs__);
  return;
}

// `dynamic_initializer_for_'CVarForcePatchAllEdges'' @ 14107a960

void __cdecl UE::Landscape::_dynamic_initializer_for__CVarForcePatchAllEdges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForcePatchAllEdges,L"landscape.ForcePatchAllEdges",&GForcePatchAllEdges,
             L"Forces landscape edge patching to patch the edges of every registered landscape component on the next tick.  Default disabled (0)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForcePatchAllEdges__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapAlwaysBuildRuntimeGenerationResources'' @ 14107a9b0

void __cdecl _dynamic_initializer_for__CVarGrassMapAlwaysBuildRuntimeGenerationResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapAlwaysBuildRuntimeGenerationResources,
             L"grass.GrassMap.AlwaysBuildRuntimeGenerationResources",
             &GGrassMapAlwaysBuildRuntimeGenerationResources,
             L"By default we only compile shaders and build resources for runtime generation when runtime generation is enabled.  Set this to 1 to always build them for all platforms, allowing you to toggle runtime generation in a cooked build."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapAlwaysBuildRuntimeGenerationResources__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapCreationPrioritizedMultiplier'' @ 14107aa00

void __cdecl _dynamic_initializer_for__CVarGrassMapCreationPrioritizedMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapCreationPrioritizedMultiplier,L"grass.GrassMap.PrioritizedMultiplier",
             &GGrassMapPrioritizedMultiplier,
             L"Multiplier applied to MaxComponentsStreaming and MaxComponentsRendering when grass creation is prioritized."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapCreationPrioritizedMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapEvictAll'' @ 14107aa50

void __cdecl _dynamic_initializer_for__CVarGrassMapEvictAll__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapEvictAll,L"grass.GrassMap.EvictAll",&GGrassMapEvictAll,
             L"Remove all grass maps. In editor, or if runtime generation is enabled, the grass maps will repopulate automatically."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapEvictAll__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapGuardBandDiscardMultiplier'' @ 14107aaa0

void __cdecl _dynamic_initializer_for__CVarGrassMapGuardBandDiscardMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapGuardBandDiscardMultiplier,L"grass.GrassMap.GuardBandDiscardMultiplier",
             &GGrassMapGuardBandDiscardMultiplier,
             L"Used to control discarding in the grass map runtime generation system. Approximate range, 1-4. Multiplied by the cull distance to control when we discard grass maps."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapGuardBandDiscardMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapGuardBandMultiplier'' @ 14107aaf0

void __cdecl _dynamic_initializer_for__CVarGrassMapGuardBandMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapGuardBandMultiplier,L"grass.GrassMap.GuardBandMultiplier",
             &GGrassMapGuardBandMultiplier,
             L"Used to control discarding in the grass map runtime generation system. Approximate range, 1-4. Multiplied by the cull distance to control when we add grass maps."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapGuardBandMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapMaxComponentsForBlockingUpdate'' @ 14107ab40

void __cdecl _dynamic_initializer_for__CVarGrassMapMaxComponentsForBlockingUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapMaxComponentsForBlockingUpdate,
             L"grass.GrassMap.MaxComponentsForBlockingUpdate",
             &GGrassMapMaxComponentsForBlockingUpdate,
             L"How many landscape components can update simultaneously when running a blocking grass map update (i.e. on editor save)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapMaxComponentsForBlockingUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapMaxComponentsRendering'' @ 14107ab90

void __cdecl _dynamic_initializer_for__CVarGrassMapMaxComponentsRendering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapMaxComponentsRendering,L"grass.GrassMap.MaxComponentsRendering",
             &GGrassMapMaxComponentsRendering,
             L"How many landscape components can be rendering grass maps at once, when using amortized runtime generation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapMaxComponentsRendering__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapMaxComponentsStreaming'' @ 14107abe0

void __cdecl _dynamic_initializer_for__CVarGrassMapMaxComponentsStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapMaxComponentsStreaming,L"grass.GrassMap.MaxComponentsStreaming",
             &GGrassMapMaxComponentsStreaming,
             L"How many landscape components can be streaming their textures at once for grass map renders, when using amortized runtime generation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapMaxComponentsStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapMaxDiscardChecksPerFrame'' @ 14107ac30

void __cdecl _dynamic_initializer_for__CVarGrassMapMaxDiscardChecksPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapMaxDiscardChecksPerFrame,L"grass.GrassMap.MaxDiscardChecksPerFrame",
             &GGrassMapMaxDiscardChecksPerFrame,
             L"How many landscape components are checked if they should discard their grass maps each frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapMaxDiscardChecksPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapRenderEveryFrame'' @ 14107ac80

void __cdecl _dynamic_initializer_for__CVarGrassMapRenderEveryFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapRenderEveryFrame,L"grass.GrassMap.RenderEveryFrame",
             &GGrassMapRenderEveryFrame,
             L"Forces re-rendering the grassmap for the landscape component(s) on any actors with a name containing the given string."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapRenderEveryFrame__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapRenderEveryFrameDelay'' @ 14107acd0

void __cdecl _dynamic_initializer_for__CVarGrassMapRenderEveryFrameDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapRenderEveryFrameDelay,L"grass.GrassMap.RenderEveryFrameDelay",
             &GGrassMapRenderEveryFrameDelay,
             L"When using grass.GrassMap.RenderEveryFrame, delays this many frames in between renders.  Default 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapRenderEveryFrameDelay__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapUseAsyncFetch'' @ 14107ad20

void __cdecl _dynamic_initializer_for__CVarGrassMapUseAsyncFetch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapUseAsyncFetch,L"grass.GrassMap.UseAsyncFetch",&GGrassMapUseAsyncFetch,
             L"Enable async fetch tasks to readback the runtime grass maps from the GPU.  When disabled, it the fetch is performed on the game thread, when enabled it uses an async task instead."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapUseAsyncFetch__);
  return;
}

// `dynamic_initializer_for_'CVarGrassMapUseRuntimeGeneration'' @ 14107ad70

void __cdecl _dynamic_initializer_for__CVarGrassMapUseRuntimeGeneration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrassMapUseRuntimeGeneration,L"grass.GrassMap.UseRuntimeGeneration",
             &GGrassMapUseRuntimeGeneration,
             L"Enable runtime grass map generation to save disk space and runtime memory.  When enabled the grass density maps are not serialized and are built on the fly at runtime."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassMapUseRuntimeGeneration__);
  return;
}

// `dynamic_initializer_for_'CVarInstallEdgeFixup'' @ 14107adc0

void __cdecl UE::Landscape::_dynamic_initializer_for__CVarInstallEdgeFixup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInstallEdgeFixup,L"landscape.InstallEdgeFixup",&GInstallEdgeFixup,
             L"Controls whether edge fixup tracking is installed on landscape heightmap textures.  Default enabled (1)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarInstallEdgeFixup__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation'' @ 14107ae10

void __cdecl
_dynamic_initializer_for__CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation,
             L"landscape.AllowNonNaniteVirtualShadowMapInvalidation",
             &GLandscapeAllowNonNaniteVirtualShadowMapInvalidation,
             L"For non-Nanite landscape, cached virtual shadow map pages need to be invalidated when the vertex morphing introduces a height difference that is too large. This enables or disables this behavior entirely"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeLOD0DistributionOverride'' @ 14107ae60

void __cdecl _dynamic_initializer_for__CVarLandscapeLOD0DistributionOverride__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeLOD0DistributionOverride,L"landscape.OverrideLOD0Distribution",
             &GLandscapeLOD0DistributionOverride,
             L"When > 0, force override the LOD0DistributionSetting property on all landscapes, and ignore r.LandscapeLOD0DistributionScale"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeLOD0DistributionOverride__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeLOD0DistributionScale'' @ 14107afb0

void __cdecl _dynamic_initializer_for__CVarLandscapeLOD0DistributionScale__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeLOD0DistributionScale,L"r.LandscapeLOD0DistributionScale",
             &GLandscapeLOD0DistributionScale,
             L"Multiplier for the landscape LOD0DistributionSetting property",
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeLOD0DistributionScale__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeLOD0ScreenSizeOverride'' @ 14107b100

void __cdecl _dynamic_initializer_for__CVarLandscapeLOD0ScreenSizeOverride__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeLOD0ScreenSizeOverride,L"landscape.OverrideLOD0ScreenSize",
             &GLandscapeLOD0ScreenSizeOverride,
             L"When > 0, force override the landscape LOD0ScreenSize property on all landscapes",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeLOD0ScreenSizeOverride__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeLODBlendRangeOverride'' @ 14107b250

void __cdecl _dynamic_initializer_for__CVarLandscapeLODBlendRangeOverride__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeLODBlendRangeOverride,L"landscape.OverrideLODBlendRange",
             &GLandscapeLODBlendRangeOverride,
             L"When > 0, force the LODBlendRange property on all landscapes",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeLODBlendRangeOverride__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeLODDistributionOverride'' @ 14107b3a0

void __cdecl _dynamic_initializer_for__CVarLandscapeLODDistributionOverride__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeLODDistributionOverride,L"landscape.OverrideLODDistribution",
             &GLandscapeLODDistributionOverride,
             L"When > 0, force override the landscape LODDistributionSetting property on all landscapes, and ignore r.LandscapeLODDistributionScale"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeLODDistributionOverride__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeLODDistributionScale'' @ 14107b4f0

void __cdecl _dynamic_initializer_for__CVarLandscapeLODDistributionScale__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeLODDistributionScale,L"r.LandscapeLODDistributionScale",
             &GLandscapeLODDistributionScale,
             L"Multiplier for the landscape LODDistributionSetting property",
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeLODDistributionScale__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride'' @ 14107b640

void __cdecl
_dynamic_initializer_for__CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride__
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride,
             L"landscape.OverrideNonNaniteVirtualShadowMapConstantDepthBiasOverride",
             &GLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverride,
             L"When > 0, force override the landscape NonNaniteVirtualShadowMapConstantDepthBias property on all landscapes"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(
        _dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride__
        );
  return;
}

// `dynamic_initializer_for_'CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride'' @ 14107b790

void __cdecl
_dynamic_initializer_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride__
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride,
             L"landscape.OverrideNonNaniteVirtualShadowMapInvalidationHeightErrorThreshold",
             &GLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride,
             L"When > 0, force override the landscape NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold property on all landscapes"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(
        _dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride__
        );
  return;
}

// `dynamic_initializer_for_'CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent'' @ 14107b8e0

void __cdecl
_dynamic_initializer_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent,
             L"landscape.NonNaniteVirtualShadowMapInvalidationLODAttenuationExponent",
             &GLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent,
             L"For non-Nanite landscape, controls the shape of the curve of the attenuation of the virtual shadow map pages\' invalidation rate (1 - X^N), where X is the relative LOD value (LODValue/NumMips in the [0,1] range) and N, the CVar"
             ,0x60);
  atexit(
        _dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent__
        );
  return;
}

// `dynamic_initializer_for_'CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride'' @ 14107b930

void __cdecl
_dynamic_initializer_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride__
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride,
             L"landscape.OverrideNonNaniteVirtualShadowMapInvalidationScreenSizeLimit",
             &GLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride,
             L"When > 0, force override the landscape NonNaniteVirtualShadowMapInvalidationScreenSizeLimit property on all landscapes"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(
        _dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride__
        );
  return;
}

// `dynamic_initializer_for_'CVarLandscapeNumRayTracingSectionsPerSubsection'' @ 14107ba80

void __cdecl _dynamic_initializer_for__CVarLandscapeNumRayTracingSectionsPerSubsection__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeNumRayTracingSectionsPerSubsection,
             L"r.RayTracing.Geometry.Landscape.SectionsPerSubsection",&GLandscapeRayTracingSections,
             L"Number of raytracing BLAS sections per landscape sub section - ray tracing sections will be evenly split (needs to be power of 2)"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeNumRayTracingSectionsPerSubsection__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeRayTracingGeometryDetectTextureStreaming'' @ 14107bbc0

void __cdecl _dynamic_initializer_for__CVarLandscapeRayTracingGeometryDetectTextureStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeRayTracingGeometryDetectTextureStreaming,
             L"r.RayTracing.Geometry.Landscape.DetectTextureStreaming",
             &GLandscapeRayTracingGeometryDetectTextureStreaming,
             L"If on, update ray tracing geometry when texture streaming state changes. Useful when WorldPositionOffset is used in the landscape material"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeRayTracingGeometryDetectTextureStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold'' @ 14107bc10

void __cdecl
_dynamic_initializer_for__CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold,
             L"r.RayTracing.Geometry.Landscape.FractionalLODUpdateThreshold",
             &GLandscapeRayTracingGeometryFractionalLODUpdateThreshold,
             L"Minimal difference in fractional LOD between latest built/cached ray tracing geometry and latest value used for rendering (default 0)\n0.1 implies a 10% change in the fraction LOD, for instance a change from LOD level 1.1 to 1.2\nLarger values will reduce the number of landscape tile updates, but introduce more error between the ray tracing and raster representations"
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold__
        );
  return;
}

// `dynamic_initializer_for_'CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame'' @ 14107bc60

void __cdecl
_dynamic_initializer_for__CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame,
             L"r.RayTracing.Geometry.Landscape.LODsUpdateEveryFrame",
             &GLandscapeRayTracingGeometryLODsThatUpdateEveryFrame,
             L"If on, LODs that are lower than the specified level will be updated every frame, which can be used to workaround some artifacts caused by texture streaming if you\'re using WorldPositionOffset on the landscape"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeRayTracingVertexLODBias'' @ 14107bcb0

void __cdecl _dynamic_initializer_for__CVarLandscapeRayTracingVertexLODBias__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeRayTracingVertexLODBias,L"r.RayTracing.Geometry.Landscape.LODBias",
             &GLandscapeRayTracingLODBias,
             L"LOD Bias to use when building ray tracing dynamic geometry elements",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0x20
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeRayTracingVertexLODBias__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeRuntimeVirtualTextureRenderWithQuad'' @ 14107be00

void __cdecl _dynamic_initializer_for__CVarLandscapeRuntimeVirtualTextureRenderWithQuad__(void)

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
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeRuntimeVirtualTextureRenderWithQuad,
             L"landscape.RuntimeVirtualTextureRenderWithQuad",
             &GLandscapeRuntimeVirtualTextureRenderWithQuad,
             L"Force whether to use of a single quad when rendering landscape to runtime virtual texture pages\n0 takes setting from landscape, 1 forces on, 2 forces off."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x60);
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
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeRuntimeVirtualTextureRenderWithQuad__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeUseAsyncTasksForLODComputation'' @ 14107bf50

void __cdecl _dynamic_initializer_for__CVarLandscapeUseAsyncTasksForLODComputation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeUseAsyncTasksForLODComputation,
             L"r.LandscapeUseAsyncTasksForLODComputation",&GLandscapeUseAsyncTasksForLODComputation,
             L"Use async tasks for computing per-landscape component LOD biases.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeUseAsyncTasksForLODComputation__);
  return;
}

// `dynamic_initializer_for_'CVarLumenSceneSurfaceCacheCaptureNaniteLandscape'' @ 14107bfa0

void __cdecl _dynamic_initializer_for__CVarLumenSceneSurfaceCacheCaptureNaniteLandscape__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = InvalidateRenderStateForLandscapeNaniteComponents;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLumenSceneSurfaceCacheCaptureNaniteLandscape,
             L"r.LumenScene.SurfaceCache.CaptureNaniteLandscapes",local_res8,
             L"Whether to use Nanite landscape meshes when capturing landscape Lumen cards.",
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
  atexit(_dynamic_atexit_destructor_for__CVarLumenSceneSurfaceCacheCaptureNaniteLandscape__);
  return;
}

// `dynamic_initializer_for_'CVarPatchEdges'' @ 14107c0f0

void __cdecl UE::Landscape::_dynamic_initializer_for__CVarPatchEdges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPatchEdges,L"landscape.PatchEdges",&GPatchEdges,
             L"Controls whether landscape heightmap texture edges are patched to match neighboring heightmaps.  Default enabled (1)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPatchEdges__);
  return;
}

// `dynamic_initializer_for_'CVarPatchStreamingMipEdges'' @ 14107c140

void __cdecl UE::Landscape::_dynamic_initializer_for__CVarPatchStreamingMipEdges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPatchStreamingMipEdges,L"landscape.PatchStreamingMipEdges",
             &GPatchStreamingMipEdges,
             L"Controls whether landscape heightmap texture MIP edges are patched when they stream in.  Default enabled (1)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPatchStreamingMipEdges__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingLandscape'' @ 14107c190

void __cdecl _dynamic_initializer_for__CVarRayTracingLandscape__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingLandscape,L"r.RayTracing.Geometry.Landscape",local_res8,
             L"Include landscapes in ray tracing effects (default = 1 (landscape enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingLandscape__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingLandscapeVertexMask'' @ 14107c1e0

void __cdecl _dynamic_initializer_for__CVarRayTracingLandscapeVertexMask__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnCVarNeedingRenderStateInvalidationChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingLandscapeVertexMask,L"r.RayTracing.Geometry.Landscape.VertexMask",
             local_res8,
             L"If landscape should use vertex mask when building ray tracing dynamic geometry (works only with inline raytracing)"
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
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingLandscapeVertexMask__);
  return;
}

// `dynamic_initializer_for_'CVarRenderCaptureNextGrassmapDraws'' @ 14107c330

void __cdecl _dynamic_initializer_for__CVarRenderCaptureNextGrassmapDraws__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRenderCaptureNextGrassmapDraws,L"grass.GrassMap.RenderCaptureNextDraws",
             &GRenderCaptureNextGrassmapDraws,
             L"Trigger render captures during the next N grassmap draw calls.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderCaptureNextGrassmapDraws__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper263'' @ 14107c380

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper263__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_24>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper263,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper264'' @ 14107c3e0

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

// `dynamic_initializer_for_'DelayedAutoRegisterHelper266'' @ 14107c440

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper266__(void)

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
            (&DelayedAutoRegisterHelper266,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'FLandscapeFixedGridUniformShaderParametersMetadataRegistration'' @ 14107c4a0

void __cdecl
_dynamic_initializer_for__FLandscapeFixedGridUniformShaderParametersMetadataRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FLandscapeFixedGridUniformShaderParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(
        _dynamic_atexit_destructor_for__FLandscapeFixedGridUniformShaderParametersMetadataRegistration__
        );
  return;
}

// `dynamic_initializer_for_'FLandscapeSectionLODUniformParametersMetadataRegistration'' @ 14107c4f0

void __cdecl
_dynamic_initializer_for__FLandscapeSectionLODUniformParametersMetadataRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLandscapeSectionLODUniformParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FLandscapeSectionLODUniformParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(_dynamic_atexit_destructor_for__FLandscapeSectionLODUniformParametersMetadataRegistration__
        );
  return;
}

// `dynamic_initializer_for_'FLandscapeUniformShaderParametersMetadataRegistration'' @ 14107c540

void __cdecl _dynamic_initializer_for__FLandscapeUniformShaderParametersMetadataRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLandscapeUniformShaderParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FLandscapeUniformShaderParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(_dynamic_atexit_destructor_for__FLandscapeUniformShaderParametersMetadataRegistration__);
  return;
}

// `dynamic_initializer_for_'FLandscapeVertexFactoryMVFParametersMetadataRegistration'' @ 14107c590

void __cdecl
_dynamic_initializer_for__FLandscapeVertexFactoryMVFParametersMetadataRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLandscapeVertexFactoryMVFParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FLandscapeVertexFactoryMVFParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(_dynamic_atexit_destructor_for__FLandscapeVertexFactoryMVFParametersMetadataRegistration__)
  ;
  return;
}

// `dynamic_initializer_for_'GGrassMapRenderEveryFrame'' @ 14107c5e0

void __cdecl _dynamic_initializer_for__GGrassMapRenderEveryFrame__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGrassMapRenderEveryFrame__);
  return;
}

// `dynamic_initializer_for_'GLandscapeDebugOptions'' @ 14107c600

void __cdecl _dynamic_initializer_for__GLandscapeDebugOptions__(void)

{
  FLandscapeDebugOptions::FLandscapeDebugOptions(&GLandscapeDebugOptions);
  atexit(_dynamic_atexit_destructor_for__GLandscapeDebugOptions__);
  return;
}

// `dynamic_initializer_for_'GPUStat_LandscapeGrassMaps'' @ 14107c630

void __cdecl _dynamic_initializer_for__GPUStat_LandscapeGrassMaps__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_LandscapeGrassMaps__);
  return;
}

// `dynamic_initializer_for_'GRegisterLandscapeCustomVersion'' @ 14107c650

void __cdecl _dynamic_initializer_for__GRegisterLandscapeCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FLandscapeCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0xb,L"Landscape",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterLandscapeCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LandscapeRenderSystems'' @ 14107c690

void __cdecl _dynamic_initializer_for__LandscapeRenderSystems__(void)

{
  atexit(_dynamic_atexit_destructor_for__LandscapeRenderSystems__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLandscape'' @ 14107c6b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLandscape__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Landscape";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Landscape",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FLandscapeModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_LandscapeResourceNameForDebugging'' @ 14107c700

void __cdecl _dynamic_initializer_for__NAME_LandscapeResourceNameForDebugging__(void)

{
  FName::FName(&NAME_LandscapeResourceNameForDebugging,L"Landscape");
  return;
}

// `dynamic_initializer_for_'RegisterLandscapeGrassWeightPSOCollector'' @ 14107c720

void __cdecl _dynamic_initializer_for__RegisterLandscapeGrassWeightPSOCollector__(void)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  ulonglong uVar4;
  
  pwVar2 = LandscapeGrassWeightMeshPassName;
  RegisterLandscapeGrassWeightPSOCollector.Index = FPSOCollectorCreateManager::PSOCollectorCount[1];
  if (0x3f < (uint)FPSOCollectorCreateManager::PSOCollectorCount[1]) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Index < FPSOCollectorCreateManager::MaxPSOCollectorCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PSOPrecacheMaterial.h"
                       ,0x68,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (ulonglong)RegisterLandscapeGrassWeightPSOCollector.Index;
  FPSOCollectorCreateManager::PSOCollectorCount[1] =
       FPSOCollectorCreateManager::PSOCollectorCount[1] + 1;
  FPSOCollectorCreateManager::PSOCollectors[1][uVar4].CreateFunction =
       CreateLandscapeGrassWeightPSOCollector;
  FPSOCollectorCreateManager::PSOCollectors[1][uVar4].Name = pwVar2;
  atexit(_dynamic_atexit_destructor_for__RegisterLandscapeGrassWeightPSOCollector__);
  return;
}

// `dynamic_initializer_for_'RegisterMobileLandscapeGrassWeightPSOCollector'' @ 14107c7b0

void __cdecl _dynamic_initializer_for__RegisterMobileLandscapeGrassWeightPSOCollector__(void)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  ulonglong uVar4;
  
  pwVar2 = LandscapeGrassWeightMeshPassName;
  RegisterMobileLandscapeGrassWeightPSOCollector.Index =
       FPSOCollectorCreateManager::PSOCollectorCount[0];
  if (0x3f < (uint)FPSOCollectorCreateManager::PSOCollectorCount[0]) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Index < FPSOCollectorCreateManager::MaxPSOCollectorCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PSOPrecacheMaterial.h"
                       ,0x68,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (ulonglong)RegisterMobileLandscapeGrassWeightPSOCollector.Index;
  FPSOCollectorCreateManager::PSOCollectorCount[0] =
       FPSOCollectorCreateManager::PSOCollectorCount[0] + 1;
  FPSOCollectorCreateManager::PSOCollectors[0][uVar4].CreateFunction =
       CreateLandscapeGrassWeightPSOCollector;
  FPSOCollectorCreateManager::PSOCollectors[0][uVar4].Name = pwVar2;
  atexit(_dynamic_atexit_destructor_for__RegisterMobileLandscapeGrassWeightPSOCollector__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PopulateGrassMap'' @ 14107c840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PopulateGrassMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PopulateGrassMap == (FThreadSafeStaticStat<FStat_STAT_PopulateGrassMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PopulateGrassMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PopulateGrassMap,*pFVar1,
               L"Populate GrassMap","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrioritizePendingGrassMaps'' @ 14107c8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrioritizePendingGrassMaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrioritizePendingGrassMaps ==
      (FThreadSafeStaticStat<FStat_STAT_PrioritizePendingGrassMaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrioritizePendingGrassMaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrioritizePendingGrassMaps,*pFVar1,
               L"Prioritize Pending GrassMaps","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RemoveGrassInstances'' @ 14107c960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RemoveGrassInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RemoveGrassInstances ==
      (FThreadSafeStaticStat<FStat_STAT_RemoveGrassInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RemoveGrassInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveGrassInstances,*pFVar1,
               L"Remove Grass Instances","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RenderGrassMap'' @ 14107c9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RenderGrassMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RenderGrassMap == (FThreadSafeStaticStat<FStat_STAT_RenderGrassMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RenderGrassMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderGrassMap,*pFVar1,L"Render GrassMap",
               "STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateComponentGrassMaps'' @ 14107ca80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateComponentGrassMaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateComponentGrassMaps ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateComponentGrassMaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateComponentGrassMaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateComponentGrassMaps,*pFVar1,
               L"Update Component GrassMap ","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h__Script_Landscape_54692972'' @ 14107cb10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h__Script_Landscape_54692972__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h__Script_Landscape_2212519879'' @ 14107cb50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h__Script_Landscape_2212519879__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h__Script_Landscape_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h__Script_Landscape_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h__Script_Landscape_2427322707'' @ 14107cba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h__Script_Landscape_2427322707__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h__Script_Landscape_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h__Script_Landscape_767462820'' @ 14107cbf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h__Script_Landscape_767462820__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h__Script_Landscape_949504075'' @ 14107cc30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h__Script_Landscape_949504075__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h__Script_Landscape_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h__Script_Landscape_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h__Script_Landscape_Statics
             ::EnumInfo,6);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h__Script_Landscape_4256523625'' @ 14107cc80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h__Script_Landscape_4256523625__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister @ 145f662c0

UClass * __cdecl Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeNaniteComponent",
               &Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton,
               ULandscapeNaniteComponent::StaticRegisterNativesULandscapeNaniteComponent,0x680,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeNaniteComponent>,
               InternalVTableHelperCtorCaller<ULandscapeNaniteComponent>,local_res8,
               UStaticMeshComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeHLODBuilder @ 145f66630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeHLODBuilder(void)

{
  if (Z_Registration_Info_UClass_ULandscapeHLODBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeHLODBuilder.OuterSingleton,
               &Z_Construct_UClass_ULandscapeHLODBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeHLODBuilder.OuterSingleton;
}

// Z_Construct_UClass_ULandscapeInfo @ 145f66670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeInfo(void)

{
  if (Z_Registration_Info_UClass_ULandscapeInfo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeInfo.OuterSingleton,
               &Z_Construct_UClass_ULandscapeInfo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeInfo.OuterSingleton;
}

// NewStructOps @ 145f666b0

void * __cdecl Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeInfoLayerSettings,&UE::CoreUObject::Private::Construct<FLandscapeInfoLayerSettings>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeInfoLayerSettings>,&UE::CoreUObject::Private::Destruct<FLandscapeInfoLayerSettings>,&UE::CoreUObject::Private::Copy<FLandscapeInfoLayerSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULandscapeNaniteComponent @ 145f666f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeNaniteComponent(void)

{
  if (Z_Registration_Info_UClass_ULandscapeNaniteComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeNaniteComponent.OuterSingleton,
               &Z_Construct_UClass_ULandscapeNaniteComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeNaniteComponent.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 145f66730

void __cdecl
Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x660) = 1;
  return;
}

// `scalar_deleting_destructor' @ 145f66910

void * __thiscall
ILandscapeModule::_scalar_deleting_destructor_(ILandscapeModule *this,uint param_1)

{
  *this = (ILandscapeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f67030

void * __thiscall
FLandscapeModule::_scalar_deleting_destructor_(FLandscapeModule *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->CreateLandscapeComponentSceneProxyDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneViewExtension).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister @ 145f67090

UClass * __cdecl Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeLayerInfoObject",
               &Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton,
               ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeLayerInfoObject>,
               InternalVTableHelperCtorCaller<ULandscapeLayerInfoObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeLayerInfoObject.InnerSingleton;
}

// Z_Construct_UClass_ALandscapeProxy @ 145f671f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALandscapeProxy(void)

{
  if (Z_Registration_Info_UClass_ALandscapeProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALandscapeProxy.OuterSingleton,
               &Z_Construct_UClass_ALandscapeProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALandscapeProxy.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLandscapeTargetLayerSettings @ 145f67230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeTargetLayerSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeTargetLayerSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeTargetLayerSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeTargetLayerSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeTargetLayerSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeTargetLayerSettings.InnerSingleton;
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

// NewStructOps @ 145f672b0

void * __cdecl Z_Construct_UScriptStruct_FLandscapeTargetLayerSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeTargetLayerSettings,&UE::CoreUObject::Private::Construct<FLandscapeTargetLayerSettings>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeTargetLayerSettings>,&UE::CoreUObject::Private::Destruct<FLandscapeTargetLayerSettings>,&UE::CoreUObject::Private::Copy<FLandscapeTargetLayerSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 145f672f0

void * __cdecl Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeEditorLayerSettings,&UE::CoreUObject::Private::Construct<FLandscapeEditorLayerSettings>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeEditorLayerSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// ELandscapeImportAlphamapType_StaticEnum @ 145f67330

UEnum * __cdecl ELandscapeImportAlphamapType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType,(UObject *)pUVar1,
                       L"ELandscapeImportAlphamapType");
  }
  return Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton;
}

// NewStructOps @ 145f67370

void * __cdecl Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeImportLayerInfo,&UE::CoreUObject::Private::Construct<FLandscapeImportLayerInfo>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeImportLayerInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// ELandscapeLayerPaintingRestriction_StaticEnum @ 145f673b0

UEnum * __cdecl ELandscapeLayerPaintingRestriction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction,
                       (UObject *)pUVar1,L"ELandscapeLayerPaintingRestriction");
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton;
}

// ELandscapeLayerDisplayMode_StaticEnum @ 145f673f0

UEnum * __cdecl ELandscapeLayerDisplayMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode,(UObject *)pUVar1,
                       L"ELandscapeLayerDisplayMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton;
}

// ELandscapeHLODTextureSizePolicy_StaticEnum @ 145f67430

UEnum * __cdecl ELandscapeHLODTextureSizePolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy,(UObject *)pUVar1
                       ,L"ELandscapeHLODTextureSizePolicy");
  }
  return Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton;
}

// ELandscapeHLODMeshSourceLODPolicy_StaticEnum @ 145f67470

UEnum * __cdecl ELandscapeHLODMeshSourceLODPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy,
                       (UObject *)pUVar1,L"ELandscapeHLODMeshSourceLODPolicy");
  }
  return Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton;
}

// ELandscapeLODFalloff_StaticEnum @ 145f67570

UEnum * __cdecl ELandscapeLODFalloff_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLODFalloff,(UObject *)pUVar1,
                       L"ELandscapeLODFalloff");
  }
  return Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton;
}

// NewStructOps @ 145f675b0

void * __cdecl Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeProxyMaterialOverride,&UE::CoreUObject::Private::Construct<FLandscapeProxyMaterialOverride>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeProxyMaterialOverride>,&UE::CoreUObject::Private::Destruct<FLandscapeProxyMaterialOverride>,&UE::CoreUObject::Private::Copy<FLandscapeProxyMaterialOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULandscapeInfoMap @ 145f675f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeInfoMap(void)

{
  if (Z_Registration_Info_UClass_ULandscapeInfoMap.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeInfoMap.OuterSingleton,
               &Z_Construct_UClass_ULandscapeInfoMap_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeInfoMap.OuterSingleton;
}

// Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections @ 145f67630

UFunction * __cdecl
Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor @ 145f67730

UFunction * __cdecl Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRaiseHeights_SetBit @ 145f67770

void __cdecl
Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bLowerHeights_SetBit @ 145f67780

void __cdecl
Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline @ 145f67790

UFunction * __cdecl Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial @ 145f677d0

UFunction * __cdecl Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor @ 145f67810

UFunction * __cdecl Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_GetLandscapeActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InExportHeightIntoRGChannel_SetBit @ 145f67850

void __cdecl
Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::
NewProp_InExportHeightIntoRGChannel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_InExportLandscapeProxies_SetBit @ 145f67860

void __cdecl
Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::
NewProp_InExportLandscapeProxies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 145f67870

void __cdecl
Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget @ 145f67880

UFunction * __cdecl
Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue @ 145f678c0

UFunction * __cdecl
Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULandscapeLayerInfoObject @ 145f67900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeLayerInfoObject(void)

{
  if (Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton,
               &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton;
}

// ESplineModulationColorMask_StaticEnum @ 145f67940

UEnum * __cdecl ESplineModulationColorMask_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ESplineModulationColorMask,(UObject *)pUVar1,
                       L"ESplineModulationColorMask");
  }
  return Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton;
}

// Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue @ 145f67980

UFunction * __cdecl
Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue @ 145f679c0

UFunction * __cdecl
Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType @ 145f67a00

UFunction * __cdecl Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALandscapeProxy_SetVirtualTextureRenderPassType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableNanite_SetBit @ 145f67a40

void __cdecl Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bEnableNanite_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f0) = 1;
  return;
}

// NewProp_bDisableRuntimeGrassMapGeneration_SetBit @ 145f67a50

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bDisableRuntimeGrassMapGeneration_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x308) = 1;
  return;
}

// NewProp_bUseScalableLODSettings_SetBit @ 145f67a60

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseScalableLODSettings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x458) = 1;
  return;
}

// NewProp_bSetCreateRuntimeVirtualTextureVolumes_SetBit @ 145f67a70

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bSetCreateRuntimeVirtualTextureVolumes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x498) = 1;
  return;
}

// NewProp_bVirtualTextureRenderWithQuad_SetBit @ 145f67a80

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x499) = 1;
  return;
}

// NewProp_bVirtualTextureRenderWithQuadHQ_SetBit @ 145f67a90

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bVirtualTextureRenderWithQuadHQ_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49a) = 1;
  return;
}

// NewProp_CastShadow_SetBit @ 145f67aa0

void __cdecl Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CastShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x574) = *(byte *)((longlong)param_1 + 0x574) | 1;
  return;
}

// NewProp_bCastDynamicShadow_SetBit @ 145f67ab0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastDynamicShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x574) = *(byte *)((longlong)param_1 + 0x574) | 2;
  return;
}

// NewProp_bCastStaticShadow_SetBit @ 145f67ac0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x574) = *(byte *)((longlong)param_1 + 0x574) | 4;
  return;
}

// NewProp_bCastContactShadow_SetBit @ 145f67ad0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastContactShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x576) = *(byte *)((longlong)param_1 + 0x576) | 1;
  return;
}

// NewProp_bCastFarShadow_SetBit @ 145f67ae0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x578) = *(uint *)((longlong)param_1 + 0x578) | 1;
  return;
}

// NewProp_bCastHiddenShadow_SetBit @ 145f67af0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastHiddenShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x57c) = *(byte *)((longlong)param_1 + 0x57c) | 1;
  return;
}

// NewProp_bCastShadowAsTwoSided_SetBit @ 145f67b00

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x580) = *(uint *)((longlong)param_1 + 0x580) | 1;
  return;
}

// NewProp_bAffectDistanceFieldLighting_SetBit @ 145f67b10

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x584) = *(byte *)((longlong)param_1 + 0x584) | 1;
  return;
}

// NewProp_bAffectDynamicIndirectLighting_SetBit @ 145f67b20

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x584) = *(byte *)((longlong)param_1 + 0x584) | 2;
  return;
}

// NewProp_bAffectIndirectLightingWhileHidden_SetBit @ 145f67b30

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectIndirectLightingWhileHidden_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x584) = *(byte *)((longlong)param_1 + 0x584) | 4;
  return;
}

// NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit @ 145f67b40

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::
NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x588) = *(uint *)((longlong)param_1 + 0x588) | 1;
  return;
}

// NewProp_bHoldout_SetBit @ 145f67b50

void __cdecl Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHoldout_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x598) = *(byte *)((longlong)param_1 + 0x598) | 1;
  return;
}

// NewProp_bRenderCustomDepth_SetBit @ 145f67b60

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x59c) = *(uint *)((longlong)param_1 + 0x59c) | 1;
  return;
}

// NewProp_bGenerateOverlapEvents_SetBit @ 145f67b80

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x760) = *(uint *)((longlong)param_1 + 0x760) | 1;
  return;
}

// NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit @ 145f67ba0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x760) = *(uint *)((longlong)param_1 + 0x760) | 2;
  return;
}

// NewProp_bUsedForNavigation_SetBit @ 145f67bb0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x77c) = *(uint *)((longlong)param_1 + 0x77c) | 1;
  return;
}

// NewProp_bFillCollisionUnderLandscapeForNavmesh_SetBit @ 145f67bc0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bFillCollisionUnderLandscapeForNavmesh_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x77c) = *(uint *)((longlong)param_1 + 0x77c) | 2;
  return;
}

// NewProp_bUseDynamicMaterialInstance_SetBit @ 145f67bd0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x781) = 1;
  return;
}

// NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit @ 145f67be0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::
NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x782) = 1;
  return;
}

// NewProp_bHasLayersContent_SetBit @ 145f67bf0

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLayersContent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x783) = 1;
  return;
}

// NewProp_bUseCompressedHeightmapStorage_SetBit @ 145f67c00

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseCompressedHeightmapStorage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x786) = 1;
  return;
}

// NewProp_bStripPhysicsWhenCookedClient_SetBit @ 145f67c10

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedClient_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x787) = 1;
  return;
}

// NewProp_bStripPhysicsWhenCookedServer_SetBit @ 145f67c20

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripPhysicsWhenCookedServer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x788) = 1;
  return;
}

// NewProp_bStripGrassWhenCookedClient_SetBit @ 145f67c30

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedClient_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x789) = 1;
  return;
}

// NewProp_bStripGrassWhenCookedServer_SetBit @ 145f67c40

void __cdecl
Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bStripGrassWhenCookedServer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78a) = 1;
  return;
}

// <lambda_invoker_cdecl> @ 145f67d30

void __cdecl <lambda_24>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FLandscapeVertexFactoryVertexShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 145f67d50

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FLandscapeVertexFactoryPixelShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 145f67d70

void __cdecl <lambda_26>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FLandscapeFixedGridVertexFactoryVertexShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// operator_new<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_> @ 145f67ea0

void * __cdecl
operator_new<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 0x30) {
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
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
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
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x30;
}

// operator<<<unsigned_short,TMemoryImageAllocator<0>_> @ 145f68050

FArchive * __cdecl
operator<<<unsigned_short,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<unsigned_short,TMemoryImageAllocator<0>_> *param_2)

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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x800001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        FVar6 = param_2->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6,(longlong)param_2->ArrayNum * 2);
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

// operator<<<unsigned_int,TMemoryImageAllocator<0>_> @ 145f68060

FArchive * __cdecl
operator<<<unsigned_int,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<unsigned_int,TMemoryImageAllocator<0>_> *param_2)

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

// operator<<<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator> @ 145f68070

FArchive * __cdecl
operator<<<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
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
  
  operator<<<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145f7629e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_145f7629e:
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
        goto LAB_145f7637b;
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
LAB_145f7637b:
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

// operator<<<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145f68080

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        goto LAB_145f6838c;
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
LAB_145f6838c:
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
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pFVar9 + 1);
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
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pFVar11 + 1);
        uVar10 = (int)pFVar9 + 1;
        pFVar9 = (FGuid *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_> @ 145f68610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FRDGBuilder::
AddCommandListSetupTask<_FLandscapeSceneViewExtension::PreRenderView_RenderThread_::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
          (FRDGBuilder *this,<lambda_1> *param_1,FPipe *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *pTVar3;
  FTaskHandle *pFVar4;
  FTaskBase *pFVar5;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FRHICommandListBase *this_00;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this_01;
  <lambda_1> *p<Var10;
  undefined8 *puVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar14;
  ETaskPriority EVar15;
  ERDGSetupTaskWaitPoint EVar16;
  bool bVar17;
  FRHICommandListBase *local_res8;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  undefined1 local_88 [16];
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_78;
  <lambda_1> local_68;
  
  EVar16 = param_6;
  pTVar6 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
           CONCAT71(in_stack_00000029,param_4);
  (param_1->SceneRenderSystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (((param_6 == Compile) || (bVar7 = IsImmediateMode(), bVar7)) && (pTVar6->ArrayNum != 0)) {
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar6,(FTimespan)0x7fffffffffffffff);
  }
  lVar9 = 0x559;
  if (this->bCompiling == false) {
    lVar9 = 0x550;
  }
  if (EVar16 == Compile) {
LAB_145f687c2:
    this_00 = (FRHICommandListBase *)this->_padding_;
    bVar7 = false;
  }
  else {
    if (*(char *)((longlong)&this->_padding_ + lVar9) == '\0') {
      pFVar13 = (pTVar6->AllocatorInstance).Data;
      iVar8 = pTVar6->ArrayNum;
      pFVar2 = pFVar13 + (longlong)iVar8 * 8;
      while( true ) {
        if (pTVar6->ArrayNum != iVar8) {
          `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&param_6);
        }
        if (pFVar13 == pFVar2) goto LAB_145f687c2;
        if ((*(longlong *)pFVar13 != 0) && (*(char *)(*(longlong *)pFVar13 + 0xd0) == '\0')) break;
        pFVar13 = pFVar13 + 8;
      }
    }
    bVar7 = true;
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"CreateCommandList");
    bVar17 = -1 < CpuChannel->Enabled;
    if (bVar17) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId690,"CreateCommandList",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBuilder.inl"
                 ,0x2b2);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId690);
    }
    this_00 = ::operator_new(0x1bb0);
    if (this_00 == (FRHICommandListBase *)0x0) {
      this_00 = (FRHICommandListBase *)0x0;
    }
    else {
      FRHICommandListBase::FRHICommandListBase
                (this_00,(FRHIGPUMask)*(uint *)(this->_padding_ + 0x29c),false);
    }
    local_78.DataPtr = (FQueuedCommandList *)&local_res8;
    local_78.ArrayNum = 1;
    local_res8 = this_00;
    FRHICommandListImmediate::QueueAsyncCommandListSubmit
              ((FRHICommandListImmediate *)this->_padding_,&local_78,Disabled,0);
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  local_68.TaskLambda.SceneRenderSystems.AllocatorInstance.Data =
       *(FScriptContainerElement **)&param_2->LastTask;
  param_2->LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  EVar16 = EVar16 ^ Execute;
  local_68.TaskLambda.SceneRenderSystems.ArrayNum = *(int *)&param_2->TaskCount;
  local_68.TaskLambda.SceneRenderSystems.ArrayMax = *(int *)&(param_2->TaskCount).field_0x4;
  param_2->TaskCount = (atomic<unsigned___int64>)0x0;
  local_68.TaskLambda.LocalLandscapeViewsPtr =
       (TArray<FLandscapeSceneViewExtension::FLandscapeViewData,TSizedDefaultAllocator<32>_> *)
       (param_2->EmptyEventRef).Object;
  local_68.__this = this;
  local_68.RHICmdListTask = (FRHICommandList *)this_00;
  local_68.bAllocateCommandListForTask = bVar7;
  if (bVar7 == false) {
    FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_78,EParallelRenderingThread);
    `FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>::operator()
              (&local_68.TaskLambda,this_00);
    if (local_68.bAllocateCommandListForTask != false) {
      FRHICommandListBase::FinishRecording((FRHICommandListBase *)local_68.RHICmdListTask);
    }
    FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_78);
    goto LAB_145f68962;
  }
  iVar8 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
  EVar15 = High;
  if (param_3 == (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar12 = 4;
    if (iVar8 < 4) {
      iVar12 = iVar8;
    }
    if (0 < iVar12) {
      EVar15 = (ETaskPriority)iVar12;
    }
    this_01 = UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
              ::Create(L"FRDGBuilder::AddCommandListSetupTask",&local_68,EVar15,EVar16,None);
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
              ((FTaskBase *)this_01,pTVar6,true);
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x140);
    p<Var10 = (<lambda_1> *)(local_88 + 8);
  }
  else {
    iVar12 = 4;
    if (iVar8 < 4) {
      iVar12 = iVar8;
    }
    if (0 < iVar12) {
      EVar15 = (ETaskPriority)iVar12;
    }
    this_01 = UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
              ::Create(L"FRDGBuilder::AddCommandListSetupTask",&local_68,EVar15,EVar16,None);
    LOCK();
    *(longlong *)&param_3->ArrayNum = *(longlong *)&param_3->ArrayNum + 1;
    UNLOCK();
    LOCK();
    *(int *)&this_01->field_0x34 = *(int *)&this_01->field_0x34 + 1;
    UNLOCK();
    *(TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> **)&this_01->field_0x38 =
         param_3;
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
              ((FTaskBase *)this_01,pTVar6,true);
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x140);
    p<Var10 = (<lambda_1> *)local_88;
  }
  if (param_1 == p<Var10) {
    if (this_01 ==
        (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
         *)0x0) goto LAB_145f68962;
    LOCK();
    puVar1 = &this_01->field_0x30;
    iVar8 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar8 != 1) goto LAB_145f68962;
    puVar11 = *(undefined8 **)this_01;
  }
  else {
    pTVar3 = (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
              *)(param_1->SceneRenderSystems).AllocatorInstance.Data;
    (param_1->SceneRenderSystems).AllocatorInstance.Data = (FScriptContainerElement *)this_01;
    if (pTVar3 == (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
                   *)0x0) goto LAB_145f68962;
    LOCK();
    puVar1 = &pTVar3->field_0x30;
    iVar8 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar8 != 1) goto LAB_145f68962;
    puVar11 = *(undefined8 **)pTVar3;
    this_01 = pTVar3;
  }
  (*(code *)*puVar11)(this_01,1);
LAB_145f68962:
  if ((param_1->SceneRenderSystems).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    pTVar14 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar8 = pTVar14->ArrayNum;
    if (iVar8 == pTVar14->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                        (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
    }
    pTVar14->ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar14->AllocatorInstance).Data;
    pFVar4[iVar8].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar5 = (FTaskBase *)(param_1->SceneRenderSystems).AllocatorInstance.Data;
    pFVar4[iVar8].Pimpl.Reference = pFVar5;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
      UNLOCK();
    }
  }
  if ((atomic<UE::Tasks::Private::FTaskBase_*>)
      local_68.TaskLambda.SceneRenderSystems.AllocatorInstance.Data !=
      (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free(local_68.TaskLambda.SceneRenderSystems.AllocatorInstance.Data);
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// AddPass<FLandscapeGrassPassParameters,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145f695f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FLandscapeGrassPassParameters,_AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>,_AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FLandscapeGrassPassParameters *param_2,
          ERDGPassFlags param_3,<lambda_1>_conflict *param_4)

{
  int *piVar1;
  undefined8 uVar2;
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar8 = FLandscapeGrassPassParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar8 = (code *)(*pcVar8)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar8 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FLandscapeGrassPassParameters",L"FLandscapeGrassPassParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                 ,0x24,0x180,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_3);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a8,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
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
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Async);
  pFVar7->_padding_ =
       (longlong)
       &TRDGLambdaPass<FLandscapeGrassPassParameters,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::`2'::<lambda_1>,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::`2'::<lambda_1>_>'::`2'::<lambda_1>_>'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar7[1]._padding_ = *(longlong *)param_4;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(param_4 + 8)
  ;
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  pFVar7[1].FullPathIfDebug.Data.ArrayNum = (int)uVar2;
  pFVar7[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  pFVar7[1].Name.EventFormat = *(wchar_t **)(param_4 + 0x18);
  pFVar7[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2
  ;
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

// AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145f6a480

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __cdecl
AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>,_AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRDGBuilder *param_1,undefined8 *param_2,FScene *param_3,FSceneView *param_4,
          FInstanceCullingManager *param_5,FRDGEventName *param_6,ERDGPassFlags *param_7,
          void *param_8,undefined8 *param_9,char param_10)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FLandscapeGrassPassParameters *pFVar7;
  undefined8 *puVar8;
  FLandscapeGrassPassParameters *pFVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 *local_58;
  FSimpleMeshDrawCommandPass *local_50;
  FLandscapeGrassPassParameters *pFStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId72,"AddSimpleMeshPass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\SimpleMeshDrawCommandPass.h"
               ,0x48);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId72);
  }
  pFVar7 = FRDGAllocator::Alloc<FLandscapeGrassPassParameters>((FRDGAllocator *)&param_1->_padding_)
  ;
  lVar10 = 3;
  pFVar9 = pFVar7;
  do {
    uVar3 = param_2[1];
    *(undefined8 *)&pFVar9->View = *param_2;
    *(undefined8 *)&(pFVar9->View).field_0x8 = uVar3;
    uVar3 = param_2[3];
    *(undefined8 *)&pFVar9->Scene = param_2[2];
    *(undefined8 *)&(pFVar9->Scene).field_0x8 = uVar3;
    uVar3 = param_2[5];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).DrawIndirectArgsBuffer = param_2[4];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8 = uVar3;
    uVar3 = param_2[7];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).InstanceIdOffsetBuffer = param_2[6];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).InstanceIdOffsetBuffer.field_0x8 = uVar3;
    uVar3 = param_2[8];
    lVar4 = param_2[9];
    (pFVar9->InstanceCullingDrawParams).InstanceDataByteOffset = (int)uVar3;
    (pFVar9->InstanceCullingDrawParams).IndirectArgsByteOffset = (int)((ulonglong)uVar3 >> 0x20);
    (pFVar9->InstanceCullingDrawParams)._padding_ = lVar4;
    uVar3 = param_2[0xb];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).InstanceCulling = param_2[10];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).InstanceCulling.field_0x8 = uVar3;
    uVar3 = param_2[0xd];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).Scene = param_2[0xc];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).Scene.field_0x8 = uVar3;
    uVar3 = param_2[0xf];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).BatchedPrimitive = param_2[0xe];
    *(undefined8 *)&(pFVar9->InstanceCullingDrawParams).BatchedPrimitive.field_0x8 = uVar3;
    lVar10 = lVar10 + -1;
    pFVar9 = (FLandscapeGrassPassParameters *)&pFVar9->RenderTargets;
    param_2 = param_2 + 0x10;
  } while (lVar10 != 0);
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x220,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *puVar8 = &___7__TObject_VFSimpleMeshDrawCommandPass___FRDGAllocator__6B_;
    FSimpleMeshDrawCommandPass::FSimpleMeshDrawCommandPass
              ((FSimpleMeshDrawCommandPass *)(puVar8 + 2),param_4,param_5,false);
  }
  local_58 = puVar8;
  if ((((undefined8 **)param_1->_padding_ <= &local_58) &&
      (&local_58 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar5 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar6 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_58;
  `FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2
  ::<lambda_1>::operator()(param_8,(FDynamicPassMeshDrawListContext *)(puVar8 + 0x3d));
  if (param_3 != (FScene *)0x0) {
    FSimpleMeshDrawCommandPass::BuildRenderingCommands
              ((FSimpleMeshDrawCommandPass *)(puVar8 + 2),param_1,param_4,param_3,
               &pFVar7->InstanceCullingDrawParams);
  }
  if (param_10 == '\0') {
    pFStack_48 = (FLandscapeGrassPassParameters *)CONCAT44(pFStack_48._4_4_,4);
    *(undefined8 *)&(pFVar7->InstanceCullingDrawParams).DrawIndirectArgsBuffer = 0;
    *(FLandscapeGrassPassParameters **)
     &(pFVar7->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8 = pFStack_48;
  }
  local_40 = *param_9;
  local_38 = param_9[1];
  local_50 = (FSimpleMeshDrawCommandPass *)(puVar8 + 2);
  pFStack_48 = pFVar7;
  FRDGBuilder::
  AddPass<FLandscapeGrassPassParameters,_AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>,_AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
            (param_1,param_6,pFVar7,*param_7,(<lambda_1>_conflict *)&local_50);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CastChecked<ULandscapeInfoMap,UObject> @ 145f6cd40

ULandscapeInfoMap * __cdecl CastChecked<ULandscapeInfoMap,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULandscapeInfoMap>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ULandscapeInfoMap::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULandscapeInfoMap *)param_1;
  }
  pFVar3 = GetTypeName<ULandscapeInfoMap>(&local_28);
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

// ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceConstant>,int> @ 145f6ce00

void __cdecl
ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceConstant>,int>
          (void *param_1,TObjectPtr<UMaterialInstanceConstant> *param_2,int param_3)

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

// ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceDynamic>,int> @ 145f6ce30

void __cdecl
ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceDynamic>,int>
          (void *param_1,TObjectPtr<UMaterialInstanceDynamic> *param_2,int param_3)

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

// ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int> @ 145f6ce60

void __cdecl
ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int>
          (void *param_1,TObjectPtr<UMaterialInterface> *param_2,int param_3)

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

// ConstructItems<FLandscapePerLODMaterialOverride,FLandscapePerLODMaterialOverride,int> @ 145f6ce90

void __cdecl
ConstructItems<FLandscapePerLODMaterialOverride,FLandscapePerLODMaterialOverride,int>
          (void *param_1,FLandscapePerLODMaterialOverride *param_2,int param_3)

{
  UMaterialInterface *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(int *)(lVar2 + (longlong)param_2) = param_2->LODIndex;
      pUVar1 = (param_2->Material).field0_0x0.DebugPtr;
      *(UMaterialInterface **)(lVar2 + 8 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMeshBatch,FMeshBatch,int> @ 145f6cef0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ConstructItems<FMeshBatch,FMeshBatch,int>(void *param_1,FMeshBatch *param_2,int param_3)

{
  undefined1 *puVar1;
  ForElementType<FMeshBatchElement> *pFVar2;
  uint uVar3;
  ForElementType<FMeshBatchElement> *pFVar4;
  uint *puVar5;
  uint *puVar6;
  FMeshBatchElement *pFVar7;
  
  if (param_3 != 0) {
    puVar5 = (uint *)&param_2->field_0xd4;
    puVar6 = (uint *)((longlong)param_1 + 0xd4);
    do {
      puVar6[-0xf] = 0;
      puVar6[-0xe] = 0;
      pFVar7 = *(FMeshBatchElement **)(puVar5 + -0xf);
      uVar3 = puVar5[-0xd];
      puVar6[-0xd] = uVar3;
      if (pFVar7 == (FMeshBatchElement *)0x0) {
        pFVar7 = (FMeshBatchElement *)(puVar5 + -0x35);
      }
      if (uVar3 == 0) {
        puVar6[-0xc] = 1;
      }
      else {
        pFVar2 = (ForElementType<FMeshBatchElement> *)
                 ((longlong)param_1 + (-0xd4 - (longlong)param_2) + (longlong)puVar5);
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                  (0x98,8,uVar3,0,pFVar2,uVar3,(int *)(puVar6 + -0xc));
        pFVar4 = *(ForElementType<FMeshBatchElement> **)(puVar6 + -0xf);
        if (*(ForElementType<FMeshBatchElement> **)(puVar6 + -0xf) ==
            (ForElementType<FMeshBatchElement> *)0x0) {
          pFVar4 = pFVar2;
        }
        ConstructItems<FMeshBatchElement,FMeshBatchElement,int>(pFVar4,pFVar7,uVar3);
      }
      *(undefined8 *)(puVar6 + -0xb) = *(undefined8 *)(puVar5 + -0xb);
      *(undefined8 *)(puVar6 + -9) = *(undefined8 *)(puVar5 + -9);
      *(undefined8 *)(puVar6 + -7) = *(undefined8 *)(puVar5 + -7);
      puVar6[-5] = puVar5[-5];
      puVar6[-4] = puVar5[-4];
      puVar6[-3] = puVar5[-3];
      puVar6[-2] = puVar5[-2];
      *(short *)(puVar6 + -1) = (short)puVar5[-1];
      *(undefined1 *)((longlong)puVar6 + -2) = *(undefined1 *)((longlong)puVar5 + -2);
      uVar3 = (*puVar6 ^ *puVar5) & 1 ^ *puVar6;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 2 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 4 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 8 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x10 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x20 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x40 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x380 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x1c00 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x2000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x4000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x8000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x10000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x20000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x40000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x380000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x400000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x800000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x1000000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x2000000 ^ uVar3;
      *puVar6 = uVar3;
      uVar3 = (uVar3 ^ *puVar5) & 0x4000000 ^ uVar3;
      *puVar6 = uVar3;
      *puVar6 = (uVar3 ^ *puVar5) & 0x8000000 ^ uVar3;
      *(char *)(puVar6 + 1) = (char)puVar5[1];
      puVar1 = (undefined1 *)((longlong)puVar5 + 5);
      puVar5 = puVar5 + 0x38;
      *(undefined1 *)((longlong)puVar6 + 5) = *puVar1;
      puVar6 = puVar6 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructVertexFactoryParameters<FLandscapeFixedGridVertexFactory> @ 145f6d170

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FLandscapeFixedGridVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Pixel:
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

// ConstructVertexFactoryParameters<FLandscapeVertexFactory> @ 145f6d210

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FLandscapeVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Pixel:
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

// CreateUniformBufferImmediate<FLandscapeFixedGridUniformShaderParameters> @ 145f6f4f0

TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters> __cdecl
CreateUniformBufferImmediate<FLandscapeFixedGridUniformShaderParameters>
          (FLandscapeFixedGridUniformShaderParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)&(param_1->LodValues).field0_0x0 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)param_1;
}

// CreateUniformBufferImmediate<FLandscapeUniformShaderParameters> @ 145f6f670

TUniformBufferRef<FLandscapeUniformShaderParameters> __cdecl
CreateUniformBufferImmediate<FLandscapeUniformShaderParameters>
          (FLandscapeUniformShaderParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FLandscapeUniformShaderParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FLandscapeUniformShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FLandscapeUniformShaderParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)param_1 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FLandscapeUniformShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FLandscapeUniformShaderParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FLandscapeUniformShaderParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FLandscapeUniformShaderParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FLandscapeUniformShaderParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FLandscapeUniformShaderParameters>)param_1;
}

// DefaultConstructItems<FByteBuffer2DView,int> @ 145f6f7f0

void __cdecl DefaultConstructItems<FByteBuffer2DView,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FByteBuffer2DView__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLandscapeBatchElementParams,int> @ 145f6f820

void __cdecl DefaultConstructItems<FLandscapeBatchElementParams,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLandscapeRayTracingState,int> @ 145f6f850

void __cdecl DefaultConstructItems<FLandscapeRayTracingState,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      puVar1[-2] = 0xffffffff;
      *(undefined1 *)(puVar1 + -1) = 0xff;
      *puVar1 = 0xc47a0000;
      puVar1[1] = 0xc47a0000;
      puVar1[2] = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLandscapeSectionRayTracingState,int> @ 145f6f8a0

void __cdecl DefaultConstructItems<FLandscapeSectionRayTracingState,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x24;
    do {
      FRenderResource::FRenderResource((FRenderResource *)(lVar1 + -0x24));
      *(undefined ***)(lVar1 + -0x24) = &___7FRayTracingGeometry__6B_;
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined ***)(lVar1 + 0x14) = &___7__TResourceArray_E_0A___6B_;
      *(undefined1 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined4 *)(lVar1 + 0x44) = 0;
      FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
                ((FRayTracingGeometryInitializer *)(lVar1 + 0x4c));
      *(undefined4 *)(lVar1 + 0xbc) = 0xffffffff;
      *(undefined1 *)(lVar1 + 0xc0) = 0xff;
      *(undefined8 *)(lVar1 + 0xc4) = 0;
      *(undefined4 *)(lVar1 + 0xcc) = 0;
      *(undefined8 *)(lVar1 + 0xd0) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0xdc) = 0;
      *(undefined8 *)(lVar1 + 0xe4) = 0;
      *(undefined8 *)(lVar1 + 0xec) = 0;
      *(undefined8 *)(lVar1 + 0xf4) = 0;
      *(undefined8 *)(lVar1 + 0xfc) = 0;
      *(undefined4 *)(lVar1 + 0x104) = 0;
      *(undefined8 *)(lVar1 + 0x10c) = 0;
      lVar1 = lVar1 + 0x138;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,int> @ 145f6f9c0

void __cdecl
DefaultConstructItems<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      FRenderResource::FRenderResource((FRenderResource *)(puVar1 + -5));
      puVar1[-5] = &___7__TUniformBuffer_VFLandscapeFixedGridUniformShaderParameters____6B_;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + -1) = 2;
      puVar1[1] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo,int> @ 145f6fb10

void __cdecl
DestructItems<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo,int>
          (FComponentInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RequestedGrassTypes;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLandscapeBatchElementParams,int> @ 145f6fb50

void __cdecl
DestructItems<FLandscapeBatchElementParams,int>(FLandscapeBatchElementParams *param_1,int param_2)

{
  TRefCountPtr<FRHIUniformBuffer> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->LandscapeSectionLODUniformParameters;
    do {
      if (pTVar1->Reference != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLandscapeRayTracingState,int> @ 145f6fb90

void __cdecl
DestructItems<FLandscapeRayTracingState,int>(FLandscapeRayTracingState *param_1,int param_2)

{
  int iVar1;
  FRHIResource *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TArray<FLandscapeSectionRayTracingState,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    pTVar5 = &param_1->Sections;
    do {
      iVar1 = pTVar5->ArrayNum;
      pFVar3 = (pTVar5->AllocatorInstance).Data;
      pFVar4 = pFVar3 + (longlong)iVar1 * 0x138;
      while( true ) {
        if (pTVar5->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FLandscapeSectionRayTracingState,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar3 == pFVar4) break;
        (**(code **)(*(longlong *)pFVar3 + 0x20))(pFVar3);
        *(undefined4 *)(pFVar3 + 0x118) = 0;
        pFVar2 = *(FRHIResource **)(pFVar3 + 0x100);
        if (pFVar2 != (FRHIResource *)0x0) {
          *(longlong *)(pFVar3 + 0x100) = 0;
          FRHIResource::Release(pFVar2);
        }
        pFVar2 = *(FRHIResource **)(pFVar3 + 0x108);
        if (pFVar2 != (FRHIResource *)0x0) {
          *(longlong *)(pFVar3 + 0x108) = 0;
          FRHIResource::Release(pFVar2);
        }
        pFVar2 = *(FRHIResource **)(pFVar3 + 0x110);
        if (pFVar2 != (FRHIResource *)0x0) {
          *(longlong *)(pFVar3 + 0x110) = 0;
          FRHIResource::Release(pFVar2);
        }
        pFVar3 = pFVar3 + 0x138;
      }
      DestructItems<FLandscapeSectionRayTracingState,int>
                ((FLandscapeSectionRayTracingState *)(pTVar5->AllocatorInstance).Data,
                 pTVar5->ArrayNum);
      pFVar3 = (pTVar5->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pTVar5 = (TArray<FLandscapeSectionRayTracingState,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar5 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLandscapeSectionRayTracingState,int> @ 145f6fca0

void __cdecl
DestructItems<FLandscapeSectionRayTracingState,int>
          (FLandscapeSectionRayTracingState *param_1,int param_2)

{
  FRHIBuffer *this;
  FRWBuffer *this_00;
  
  if (param_2 != 0) {
    this_00 = &param_1->RayTracingDynamicVertexBuffer;
    do {
      this = this_00[1].Buffer.Reference;
      if (this != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
      }
      FRWBuffer::~FRWBuffer(this_00);
      FRayTracingGeometry::~FRayTracingGeometry
                ((FRayTracingGeometry *)&this_00[-6].ClassName.Number);
      this_00 = (FRWBuffer *)&this_00[6].NumBytes;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLandscapeSceneViewExtension::FLandscapeViewData,int> @ 145f6fd00

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
DestructItems<FLandscapeSceneViewExtension::FLandscapeViewData,int>
          (FLandscapeViewData *param_1,int param_2)

{
  longlong *this;
  
  if (param_2 != 0) {
    this = &(param_1->LandscapeIndirection)._padding_;
    do {
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)(this + 4))
      ;
      this[3] = (longlong)&___7FResourceArrayUploadInterface__6B_;
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
      ((TResourceArray<unsigned_int,0> *)(this + -1))->_padding_ =
           (longlong)&___7FResourceArrayUploadInterface__6B_;
      this = this + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,int> @ 145f6fd60

void __cdecl
DestructItems<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,int>
          (TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ =
         (longlong)&___7__TUniformBuffer_VFLandscapeFixedGridUniformShaderParameters____6B_;
    if (param_1->Contents != (uchar *)0x0) {
      FMemory::Free(param_1->Contents);
    }
    if (param_1->UniformBufferRHI !=
        (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->UniformBufferRHI);
    }
    FRenderResource::~FRenderResource((FRenderResource *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int> @ 145f6fdd0

void __cdecl
DestructItems<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int>
          (TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_> *param_1,
          int param_2)

{
  FLandscapeSectionInfo *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FLandscapeSectionInfo *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::TSTR_FCancelAndDestructCommand699>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145f719e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLandscapeGrassWeightExporter::CancelAndSelfDestruct_::__l2::TSTR_FCancelAndDestructCommand699>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::TSTR_FCancelAndDestructCommand699>
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
      if (bVar8) goto LAB_145f71b31;
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
    goto LAB_145f71d25;
  }
LAB_145f71b31:
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
LAB_145f71c0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f71c0f;
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
LAB_145f71d25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::TSTR_FDrawSceneCommand562>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145f71d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter_::__l20::TSTR_FDrawSceneCommand562>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::TSTR_FDrawSceneCommand562>
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
      if (bVar8) goto LAB_145f71eb1;
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
    goto LAB_145f720a5;
  }
LAB_145f71eb1:
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
LAB_145f71f8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f71f8f;
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
LAB_145f720a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::Landscape::SubmitGPUCommands'::__l2::TSTR_FFlushResourcesCommand293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145f720e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::Landscape::SubmitGPUCommands_::__l2::TSTR_FFlushResourcesCommand293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::Landscape::SubmitGPUCommands'::__l2::TSTR_FFlushResourcesCommand293>
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
      if (bVar8) goto LAB_145f72231;
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
    goto LAB_145f72425;
  }
LAB_145f72231:
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
LAB_145f7230f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f7230f;
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
LAB_145f72425:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLandscapeVertexFactory::Copy'::__l2::TSTR_FLandscapeVertexFactoryCopyData3760>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145f72460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLandscapeVertexFactory::Copy_::__l2::TSTR_FLandscapeVertexFactoryCopyData3760>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FLandscapeVertexFactory::Copy'::__l2::TSTR_FLandscapeVertexFactoryCopyData3760>
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
      if (bVar8) goto LAB_145f725b1;
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
    goto LAB_145f727a5;
  }
LAB_145f725b1:
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
LAB_145f7268f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f7268f;
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
LAB_145f727a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTypeName<ULandscapeInfoMap> @ 145f73c20

FString * __cdecl GetTypeName<ULandscapeInfoMap>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ULandscapeInfoMap::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVertexFactoryParametersElementShaderBindings<FLandscapeFixedGridVertexFactory> @ 145f73c60

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
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

void __cdecl
GetVertexFactoryParametersElementShaderBindings<FLandscapeFixedGridVertexFactory>
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
    FLandscapeFixedGridVertexFactoryVertexShaderParameters::GetElementShaderBindings
              ((FLandscapeFixedGridVertexFactoryVertexShaderParameters *)param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_9,param_10,param_11);
    return;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_145f73c8c_caseD_1;
  case SF_Pixel:
    FLandscapeVertexFactoryPixelShaderParameters::GetElementShaderBindings
              ((FLandscapeVertexFactoryPixelShaderParameters *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
    return;
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
switchD_145f73c8c_caseD_1:
    return;
  }
}

// GetVertexFactoryParametersElementShaderBindings<FLandscapeVertexFactory> @ 145f73dc0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
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

void __cdecl
GetVertexFactoryParametersElementShaderBindings<FLandscapeVertexFactory>
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
    FLandscapeVertexFactoryVertexShaderParameters::GetElementShaderBindings
              ((FLandscapeVertexFactoryVertexShaderParameters *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
    return;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_145f73dec_caseD_1;
  case SF_Pixel:
    FLandscapeVertexFactoryPixelShaderParameters::GetElementShaderBindings
              ((FLandscapeVertexFactoryPixelShaderParameters *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
    return;
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
switchD_145f73dec_caseD_1:
    return;
  }
}

// GetVertexFactoryParametersLayout<FLandscapeFixedGridVertexFactory> @ 145f73f20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FLandscapeFixedGridVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_RayHitGroup:
    pFVar3 = FLandscapeFixedGridVertexFactoryVertexShaderParameters::StaticGetTypeLayout();
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_145f73f3d_caseD_1;
  case SF_Pixel:
    pFVar3 = FLandscapeVertexFactoryPixelShaderParameters::StaticGetTypeLayout();
    return pFVar3;
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
switchD_145f73f3d_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// GetVertexFactoryParametersLayout<FLandscapeVertexFactory> @ 145f73fc0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FLandscapeVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_RayHitGroup:
    pFVar3 = FLandscapeVertexFactoryVertexShaderParameters::StaticGetTypeLayout();
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_145f73fdd_caseD_1;
  case SF_Pixel:
    pFVar3 = FLandscapeVertexFactoryPixelShaderParameters::StaticGetTypeLayout();
    return pFVar3;
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
switchD_145f73fdd_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// HeapifyInternal<FLandscapeGrassMapsBuilder::FPendingComponent,int,FIdentityFunctor,TDereferenceWrapper<FLandscapeGrassMapsBuilder::FPendingComponent,TLess<FLandscapeGrassMapsBuilder::FPendingComponent>_>_> @ 145f74060

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
AlgoImpl::
HeapifyInternal<FLandscapeGrassMapsBuilder::FPendingComponent,int,FIdentityFunctor,TDereferenceWrapper<FLandscapeGrassMapsBuilder::FPendingComponent,TLess<FLandscapeGrassMapsBuilder::FPendingComponent>_>_>
          (FPendingComponent *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLandscapeGrassMapsBuilder::FPendingComponent,TLess<FLandscapeGrassMapsBuilder::FPendingComponent>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  double dVar3;
  FComponentState *pFVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar2 = iVar8;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_145f74125:
      if (iVar10 == 0) {
        return;
      }
      iVar7 = iVar10 + -1;
      iVar8 = iVar2 + -2;
      iVar2 = iVar8;
      iVar10 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (param_1[iVar9].PriorityKey <= param_1[(longlong)iVar8 + 2].PriorityKey &&
          param_1[(longlong)iVar8 + 2].PriorityKey != param_1[iVar9].PriorityKey) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    if (param_1[iVar7].PriorityKey < param_1[iVar9].PriorityKey ||
        param_1[iVar7].PriorityKey == param_1[iVar9].PriorityKey) goto LAB_145f74125;
    dVar3 = param_1[iVar9].PriorityKey;
    pFVar4 = param_1[iVar7].State;
    dVar5 = param_1[iVar7].PriorityKey;
    param_1[iVar7].State = param_1[iVar9].State;
    param_1[iVar7].PriorityKey = dVar3;
    param_1[iVar9].State = pFVar4;
    param_1[iVar9].PriorityKey = dVar5;
    iVar8 = iVar9 * 2 + 1;
    iVar7 = iVar9;
  } while( true );
}

// InternalConstructor<ALandscapeProxy> @ 145f74150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<ALandscapeProxy>(FObjectInitializer *param_1)

{
  if ((ALandscapeProxy *)param_1->Obj != (ALandscapeProxy *)0x0) {
    ALandscapeProxy::ALandscapeProxy((ALandscapeProxy *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ULandscapeHLODBuilder> @ 145f74170

void __cdecl InternalConstructor<ULandscapeHLODBuilder>(FObjectInitializer *param_1)

{
  UHLODBuilder *this;
  
  this = (UHLODBuilder *)param_1->Obj;
  if (this != (UHLODBuilder *)0x0) {
    UHLODBuilder::UHLODBuilder(this,param_1);
    *(undefined ***)this = &___7ULandscapeHLODBuilder__6B_;
  }
  return;
}

// InternalConstructor<ULandscapeInfo> @ 145f741a0

void __cdecl InternalConstructor<ULandscapeInfo>(FObjectInitializer *param_1)

{
  if ((ULandscapeInfo *)param_1->Obj != (ULandscapeInfo *)0x0) {
    ULandscapeInfo::ULandscapeInfo((ULandscapeInfo *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ULandscapeInfoMap> @ 145f741c0

void __cdecl InternalConstructor<ULandscapeInfoMap>(FObjectInitializer *param_1)

{
  UObject *this;
  UObject *this_00;
  undefined8 local_res8 [4];
  
  this_00 = param_1->Obj;
  if (this_00 != (UObject *)0x0) {
    UObject::UObject(this_00,param_1);
    *(undefined ***)this_00 = &___7ULandscapeInfoMap__6B_;
    this = this_00 + 3;
    *(undefined8 *)(this_00 + 1) = 0;
    *(undefined8 *)&this_00[1].field_0x8 = 0;
    *(undefined8 *)&this_00[1].field_0x20 = 0;
    *(undefined4 *)(this_00 + 2) = 0;
    *(undefined4 *)&this_00[2].field_0x4 = 0x80;
    *(undefined4 *)&this_00[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this_00[2].field_0xc = 0;
    *(undefined8 *)&this_00[2].field_0x18 = 0;
    *(undefined4 *)&this_00[2].field_0x20 = 0;
    *(int *)&this->field_0x0 = 0;
    *(int *)&this->field_0x4 = 0;
    local_res8[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)local_res8);
  }
  return;
}

// InternalConstructor<ULandscapeLayerInfoObject> @ 145f74230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<ULandscapeLayerInfoObject>(FObjectInitializer *param_1)

{
  UObject *this;
  ForAnyElementType FVar1;
  bool bVar2;
  UClass *this_00;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  FString local_68;
  byte local_58;
  byte local_57;
  byte local_56;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULandscapeLayerInfoObject__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x24 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar2) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0);
      iVar3 = local_68.Data.ArrayNum + -1;
      FVar1.Data = local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.ArrayNum == 0) {
        iVar3 = 0;
        FVar1.Data = (FScriptContainerElement *)L"";
      }
      FSHA1::HashBuffer(FVar1.Data,(longlong)iVar3 * 2,&local_58);
      fVar4 = (float)local_58 * __real_3b808081;
      fVar5 = (float)local_57 * __real_3b808081;
      fVar6 = (float)local_56 * __real_3b808081;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      *(float *)&this[1].field_0x14 = fVar4;
      *(float *)&this[1].field_0x18 = fVar5;
      *(float *)&this[1].field_0x1c = fVar6;
      *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
      this_00 = Z_Construct_UClass_ULandscapeSettings_NoRegister();
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      this[1].field_0x24 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x22;
    }
  }
  return;
}

// InternalConstructor<ULandscapeNaniteComponent> @ 145f743b0

void __cdecl InternalConstructor<ULandscapeNaniteComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UStaticMeshComponent *this;
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 & 0xf7;
    this->_padding_ = (longlong)&ULandscapeNaniteComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&ULandscapeNaniteComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULandscapeNaniteComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&ULandscapeNaniteComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&ULandscapeNaniteComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&ULandscapeNaniteComponent::_vftable__for__IPhysicsComponent__;
    this->bEvaluateWorldPositionOffset = '\0';
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalGetDefaultObject<TResourceArray<unsigned_char,0>_> @ 145f74460

TResourceArray<unsigned_char,0> * __cdecl
InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
      ::__l3::Default.bNeedsCPUAccess = false;
      `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
      ::__l3::Default._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
          ::__l3::Default;
}

// InternalGetDefaultObject<TResourceArray<unsigned_short,0>_> @ 145f74500

TResourceArray<unsigned_short,0> * __cdecl
InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
      ::__l3::Default.bNeedsCPUAccess = false;
      `class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
      ::__l3::Default._padding_ = (longlong)&___7__TResourceArray_G_0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
          ::__l3::Default;
}

// InternalVTableHelperCtorCaller<ALandscapeProxy> @ 145f745a0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ALandscapeProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALandscapeProxy *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALandscapeProxy::GetPrivateStaticClass();
  pAVar3 = (ALandscapeProxy *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (ALandscapeProxy *)0x0) {
    pAVar3 = ALandscapeProxy::ALandscapeProxy(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeHLODBuilder> @ 145f74640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeHLODBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeHLODBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UHLODBuilder::UHLODBuilder((UHLODBuilder *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULandscapeHLODBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeInfo> @ 145f746f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeInfo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeInfo::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULandscapeInfo__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0;
    *(undefined4 *)&pUVar1[7].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0;
    *(undefined4 *)&pUVar1[9].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0x4 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeInfoMap> @ 145f74700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeInfoMap>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeInfoMap::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULandscapeInfoMap__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeLayerInfoObject> @ 145f747e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeLayerInfoObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeLayerInfoObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7ULandscapeLayerInfoObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    pUVar1[1].field_0x24 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeNaniteComponent> @ 145f748a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeNaniteComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeNaniteComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&ULandscapeNaniteComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&ULandscapeNaniteComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULandscapeNaniteComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&ULandscapeNaniteComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&ULandscapeNaniteComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&ULandscapeNaniteComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<unsigned_char,TMemoryImageAllocator<0>_> @ 145f749b0

uint __cdecl
Freeze::IntrinsicAppendHash<unsigned_char,TMemoryImageAllocator<0>_>
          (TArray<unsigned_char,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicAppendHash<unsigned_short,TMemoryImageAllocator<0>_> @ 145f749d0

uint __cdecl
Freeze::IntrinsicAppendHash<unsigned_short,TMemoryImageAllocator<0>_>
          (TArray<unsigned_short,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<unsigned_char,TMemoryImageAllocator<0>_> @ 145f749f0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<unsigned_char,TMemoryImageAllocator<0>_>
          (TArray<unsigned_char,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicGetTargetAlignment<unsigned_short,TMemoryImageAllocator<0>_> @ 145f74a10

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<unsigned_short,TMemoryImageAllocator<0>_>
          (TArray<unsigned_short,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<unsigned_char,TMemoryImageAllocator<0>_> @ 145f74a30

void __cdecl
Freeze::IntrinsicToString<unsigned_char,TMemoryImageAllocator<0>_>
          (TArray<unsigned_char,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicToString<unsigned_short,TMemoryImageAllocator<0>_> @ 145f74aa0

void __cdecl
Freeze::IntrinsicToString<unsigned_short,TMemoryImageAllocator<0>_>
          (TArray<unsigned_short,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<unsigned_short>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicUnfrozenCopy<unsigned_char,TMemoryImageAllocator<0>_> @ 145f74b10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<unsigned_char,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,TArray<unsigned_char,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<unsigned_char,TMemoryImageAllocator<0>_>::SetNumZeroed(param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicUnfrozenCopy<unsigned_short,TMemoryImageAllocator<0>_> @ 145f74ba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<unsigned_short,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,TArray<unsigned_short,TMemoryImageAllocator<0>_> *param_2
          ,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<unsigned_short,TMemoryImageAllocator<0>_>::SetNumZeroed(param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_short>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicWriteMemoryImage<unsigned_char,TMemoryImageAllocator<0>_> @ 145f74c30

void __cdecl
Freeze::IntrinsicWriteMemoryImage<unsigned_char,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,TArray<unsigned_char,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntrinsicWriteMemoryImage<unsigned_short,TMemoryImageAllocator<0>_> @ 145f74cb0

void __cdecl
Freeze::IntrinsicWriteMemoryImage<unsigned_short,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,TArray<unsigned_short,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_short>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IsObjectPtrEqual<ULandscapeComponent,TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,0> @ 145f74d30

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<ULandscapeComponent,TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,0>
          (TObjectPtr<ULandscapeComponent> *param_1,
          TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr> *param_2)

{
  ULandscapeComponent *pUVar1;
  
  pUVar1 = (ULandscapeComponent *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if ((param_1->field0_0x0).DebugPtr == (ULandscapeComponent *)0x0) {
    return pUVar1 == (ULandscapeComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == pUVar1;
}

// IsObjectPtrEqual<ULandscapeHeightmapTextureEdgeFixup,ULandscapeHeightmapTextureEdgeFixup_*,0> @ 145f74d70

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<ULandscapeHeightmapTextureEdgeFixup,ULandscapeHeightmapTextureEdgeFixup_*,0>
          (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *param_1,
          ULandscapeHeightmapTextureEdgeFixup **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
    return *param_2 == (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<ULandscapeInfoMap> @ 145f74ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULandscapeInfoMap * __cdecl
NewObject<ULandscapeInfoMap>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  ULandscapeInfoMap *pUVar2;
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
  pUVar1 = ULandscapeInfoMap::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (ULandscapeInfoMap *)
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

// RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceConstant>,int> @ 145f757a0

void __cdecl
RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceConstant>,int>
          (void *param_1,TObjectPtr<UMaterialInstanceConstant> *param_2,int param_3)

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

// RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceDynamic>,int> @ 145f757d0

void __cdecl
RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceDynamic>,int>
          (void *param_1,TObjectPtr<UMaterialInstanceDynamic> *param_2,int param_3)

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

// RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int> @ 145f75800

void __cdecl
RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int>
          (void *param_1,TObjectPtr<UMaterialInterface> *param_2,int param_3)

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

// StaticEnum<enum_ELandscapeHLODMeshSourceLODPolicy> @ 145f76450

UEnum * __cdecl StaticEnum<enum_ELandscapeHLODMeshSourceLODPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy,
                       (UObject *)pUVar1,L"ELandscapeHLODMeshSourceLODPolicy");
  }
  return Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.OuterSingleton;
}

// StaticEnum<enum_ELandscapeHLODTextureSizePolicy> @ 145f76490

UEnum * __cdecl StaticEnum<enum_ELandscapeHLODTextureSizePolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy,(UObject *)pUVar1
                       ,L"ELandscapeHLODTextureSizePolicy");
  }
  return Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.OuterSingleton;
}

// StaticEnum<enum_ELandscapeImportAlphamapType> @ 145f764d0

UEnum * __cdecl StaticEnum<enum_ELandscapeImportAlphamapType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType,(UObject *)pUVar1,
                       L"ELandscapeImportAlphamapType");
  }
  return Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.OuterSingleton;
}

// StaticEnum<enum_ELandscapeLayerDisplayMode> @ 145f76510

UEnum * __cdecl StaticEnum<enum_ELandscapeLayerDisplayMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode,(UObject *)pUVar1,
                       L"ELandscapeLayerDisplayMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.OuterSingleton;
}

// StaticEnum<enum_ELandscapeLayerPaintingRestriction> @ 145f76550

UEnum * __cdecl StaticEnum<enum_ELandscapeLayerPaintingRestriction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction,
                       (UObject *)pUVar1,L"ELandscapeLayerPaintingRestriction");
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.OuterSingleton;
}

// StaticEnum<enum_ESplineModulationColorMask> @ 145f76590

UEnum * __cdecl StaticEnum<enum_ESplineModulationColorMask>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ESplineModulationColorMask,(UObject *)pUVar1,
                       L"ESplineModulationColorMask");
  }
  return Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton;
}

// StaticEnum<enum_ELandscapeLODFalloff::Type> @ 145f765d0

UEnum * __cdecl StaticEnum<enum_ELandscapeLODFalloff::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLODFalloff,(UObject *)pUVar1,
                       L"ELandscapeLODFalloff");
  }
  return Z_Registration_Info_UEnum_ELandscapeLODFalloff.OuterSingleton;
}

// FThreadSafeStaticStat<`FAsyncFetchTask::GetStatId'::__l2::FStat_FAsyncFetchTask> @ 145f766c0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FAsyncFetchTask::GetStatId(void)const_::_2_::FStat_FAsyncFetchTask>
* __thiscall
FThreadSafeStaticStat<`FAsyncFetchTask::GetStatId'::__l2::FStat_FAsyncFetchTask>::
FThreadSafeStaticStat<_FAsyncFetchTask::GetStatId_::__l2::FStat_FAsyncFetchTask>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FAsyncFetchTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FAsyncFetchTask","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 145f7bde0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FLandscapeModule::OnUpdatePhysicalMaterial_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::<lambda_1>,1,0> @ 145f7be00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FLandscapeGrassWeightExporter::CancelAndSelfDestruct_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLandscapeVertexFactory::Copy'::__l2::<lambda_1>,1,0> @ 145f7be20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeVertexFactory::Copy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLandscapeVertexFactory::Copy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Landscape::SubmitGPUCommands'::__l2::<lambda_1>,1,0> @ 145f7be40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::SubmitGPUCommands'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::Landscape::SubmitGPUCommands_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::SubmitGPUCommands'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::<lambda_1>,1,0> @ 145f7be60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter_::__l20::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::`20'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// operator() @ 145f7e700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  
  iVar2 = *(int *)((longlong)this + 0x1c);
  iVar3 = *(int *)((longlong)this + 0x18);
  iVar4 = *(int *)((longlong)this + 0x14);
  iVar5 = *(int *)((longlong)this + 0x10);
  if ((GRHICommandList.bLatchedBypass) && ((param_2->field_0x29b & 0x20) != 0)) {
    bVar1 = param_2->field_0x6a;
    if ((bVar1 == 0) || ((bVar1 & bVar1 - 1) != 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSingleRHIPipeline(ActivePipelines)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2b0,
                         L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)&param_2->field_0x38 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphicsContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2b1,
                         L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(**(longlong **)&param_2->field_0x38 + 0x1a0))
              (*(longlong **)&param_2->field_0x38,(float)iVar5,(float)iVar4,0,(float)iVar3,
               (float)iVar2,__real_3f800000);
  }
  else {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar8;
    *(undefined8 **)&param_2->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar8 + 2) = (float)iVar5;
    *(float *)((longlong)puVar8 + 0x14) = (float)iVar4;
    *(float *)((longlong)puVar8 + 0x1c) = (float)iVar3;
    *(float *)(puVar8 + 4) = (float)iVar2;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  }
  FSimpleMeshDrawCommandPass::SubmitDraw
            (*(FSimpleMeshDrawCommandPass **)this,param_2,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x20));
  return;
}

// operator() @ 145f7e8a0

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

bool __thiscall
`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::__l2::<lambda_1>_>'::__l2::
<lambda_1>::operator()(void *this,float param_1)

{
  code *pcVar1;
  uint uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  TObjectIterator<ULandscapeHeightfieldCollisionComponent> local_38;
  TObjectIterator<ULandscapeHeightfieldCollisionComponent> local_20;
  
  local_20.Index = 0xffffffff;
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
  GetObjectsOfClass(pUVar7,&local_20.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<ULandscapeHeightfieldCollisionComponent>::Advance(&local_20);
  _Src.Data = local_20.ObjectArray.AllocatorInstance.Data;
  lVar9 = (longlong)local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.ArrayNum = local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_20.ObjectArray.ArrayNum == 0) {
    local_38.ObjectArray.ArrayMax = 0;
    uVar2 = local_20.Index;
    uVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_20.ObjectArray.ArrayNum,&local_38.ObjectArray.ArrayMax);
    memcpy(local_38.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar9 << 3);
    uVar2 = local_20.Index;
    uVar8 = local_20.ObjectArray.ArrayNum;
  }
  while( true ) {
    local_38.Index = uVar2;
    if (uVar2 == uVar8) {
      if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
      }
      if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
      }
      return false;
    }
    uVar6 = 0;
    if ((int)uVar2 < local_38.ObjectArray.ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    UActorComponent::MarkRenderStateDirty
              (*(UActorComponent **)
                (local_38.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
    TObjectIterator<ULandscapeHeightfieldCollisionComponent>::Advance(&local_38);
    uVar2 = local_38.Index;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// `vector_deleting_destructor'`adjustor{640}' @ 145f7fa88

/* [thunk]:protected: virtual void * __ptr64 __cdecl FLandscapeComponentSceneProxy::`vector deleting
   destructor'`adjustor{640}' (unsigned int) __ptr64 */

void * __thiscall
FLandscapeComponentSceneProxy::_vector_deleting_destructor__adjustor_640__
          (FLandscapeComponentSceneProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FLandscapeComponentSceneProxy *)
                      (this[-1].GrassMeshBatch.Elements.AllocatorInstance.InlineData + 0x58),param_1
                     );
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 145f7fa9c

/* [thunk]:public: virtual void * __ptr64 __cdecl ULandscapeNaniteComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
ULandscapeNaniteComponent::_vector_deleting_destructor__adjustor_592__
          (ULandscapeNaniteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULandscapeNaniteComponent *)&this[-1].field_0x430,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 145f7fab0

/* [thunk]:public: virtual void * __ptr64 __cdecl ULandscapeNaniteComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
ULandscapeNaniteComponent::_vector_deleting_destructor__adjustor_600__
          (ULandscapeNaniteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULandscapeNaniteComponent *)&this[-1].field_0x428,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 145f7fac4

/* [thunk]:public: virtual void * __ptr64 __cdecl ULandscapeNaniteComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
ULandscapeNaniteComponent::_vector_deleting_destructor__adjustor_608__
          (ULandscapeNaniteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULandscapeNaniteComponent *)&this[-1].field_0x420,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145f7fad8

/* [thunk]:public: virtual void * __ptr64 __cdecl ULandscapeNaniteComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULandscapeNaniteComponent::_vector_deleting_destructor__adjustor_40__
          (ULandscapeNaniteComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULandscapeNaniteComponent *)&this[-1].ProxyContentId.C,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145f7faf0

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
FAsyncTask<FAsyncFetchTask>::_scalar_deleting_destructor_
          (FAsyncTask<FAsyncFetchTask> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Task).Results.field_0x58 = 0;
  pvVar1 = *(void **)&(this->Task).Results.field_0x50;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&(this->Task).Results);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fb60

void * __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::_scalar_deleting_destructor_
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Indices)._padding_);
  (this->Indices)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fbc0

void * __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::_scalar_deleting_destructor_
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Indices)._padding_);
  (this->Indices)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fc20

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fc50

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fc80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLandscapeDebugOptions,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLandscapeDebugOptions,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fcb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLandscapeModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLandscapeModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fce0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLandscapeModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLandscapeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fd10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLandscapeSceneViewExtension,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLandscapeSceneViewExtension,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fd40

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fd70

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fda0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fdd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fe00

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 145f7fe60

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FLandscapeModule::OnUpdatePhysicalMaterial'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7fee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7ff20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeVertexFactory::Copy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7ff60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::SubmitGPUCommands'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::SubmitGPUCommands'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7ffa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::`20'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f7ffe0

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FLandscapeElementParamArray>::_scalar_deleting_destructor_
          (TObject<FLandscapeElementParamArray> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFLandscapeElementParamArray_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  DestructItems<FLandscapeBatchElementParams,int>
            (*(FLandscapeBatchElementParams **)&this[1].field_0x8,*(int *)(this + 2));
  if (*(void **)&this[1].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[1].field_0x8);
  }
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FLandscapeGrassPassParameters>::_scalar_deleting_destructor_
          (TObject<FLandscapeGrassPassParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80080

void * __thiscall
TRDGLambdaPass<FLandscapeGrassPassParameters,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f800e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLandscapeSceneViewExtension,SharedPointerInternals::DefaultDeleter<FLandscapeSceneViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLandscapeSceneViewExtension,SharedPointerInternals::DefaultDeleter<FLandscapeSceneViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80120

void * __thiscall
TResourceArray<unsigned_char,0>::_scalar_deleting_destructor_
          (TResourceArray<unsigned_char,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80170

void * __thiscall
TResourceArray<unsigned_short,0>::_scalar_deleting_destructor_
          (TResourceArray<unsigned_short,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f801c0

void * __thiscall
TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>::_scalar_deleting_destructor_
          (TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TUniformBuffer_VFLandscapeFixedGridUniformShaderParameters____6B_;
  if (this->Contents != (uchar *)0x0) {
    FMemory::Free(this->Contents);
  }
  if (this->UniformBufferRHI != (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0)
  {
    FRHIResource::Release((FRHIResource *)this->UniformBufferRHI);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80230

void * __thiscall
TUniformBuffer<FLandscapeUniformShaderParameters>::_scalar_deleting_destructor_
          (TUniformBuffer<FLandscapeUniformShaderParameters> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TUniformBuffer_VFLandscapeUniformShaderParameters____6B_;
  if (this->Contents != (uchar *)0x0) {
    FMemory::Free(this->Contents);
  }
  if (this->UniformBufferRHI != (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBufferRHI);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f802a0

void * __thiscall
FLandscapeComponentSceneProxy::_scalar_deleting_destructor_
          (FLandscapeComponentSceneProxy *this,uint param_1)

{
  ~FLandscapeComponentSceneProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f802e0

void * __thiscall
FLandscapeElementParamArray::_scalar_deleting_destructor_
          (FLandscapeElementParamArray *this,uint param_1)

{
  FLandscapeBatchElementParams *pFVar1;
  
  DestructItems<FLandscapeBatchElementParams,int>
            ((this->ElementParams).AllocatorInstance.Data,(this->ElementParams).ArrayNum);
  pFVar1 = (this->ElementParams).AllocatorInstance.Data;
  if (pFVar1 != (FLandscapeBatchElementParams *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80340

void * __thiscall
FLandscapeFixedGridVertexFactory::_scalar_deleting_destructor_
          (FLandscapeFixedGridVertexFactory *this,uint param_1)

{
  *(undefined ***)this = &___7FLandscapeVertexFactory__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80390

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
FLandscapeGrassWeightExporter::_scalar_deleting_destructor_
          (FLandscapeGrassWeightExporter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GrassTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLandscapeGrassWeightExporter_RenderThread::~FLandscapeGrassWeightExporter_RenderThread
            ((FLandscapeGrassWeightExporter_RenderThread *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f803e0

void * __thiscall
FLandscapeGrassWeightExporter_RenderThread::_scalar_deleting_destructor_
          (FLandscapeGrassWeightExporter_RenderThread *this,uint param_1)

{
  ~FLandscapeGrassWeightExporter_RenderThread(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80420

void * __thiscall
FLandscapeGrassWeightExporter_RenderThread_FixLayout::_scalar_deleting_destructor_
          (FLandscapeGrassWeightExporter_RenderThread_FixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80450

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FLandscapeGrassWeightMeshProcessor::_scalar_deleting_destructor_
          (FLandscapeGrassWeightMeshProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPSOCollector__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80490

void * __thiscall
FLandscapeComponentSceneProxy::FLandscapeLCI::_scalar_deleting_destructor_
          (FLandscapeLCI *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IrrelevantLights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FLightCacheInterface__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f804f0

void * __thiscall
FLandscapeMaterialResource::_scalar_deleting_destructor_
          (FLandscapeMaterialResource *this,uint param_1)

{
  FMaterialResource::~FMaterialResource((FMaterialResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80530

void * __thiscall
FLandscapeMeshProxySceneProxy::_scalar_deleting_destructor_
          (FLandscapeMeshProxySceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int>
            ((TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_> *)
             (this->ProxySectionsInfos).AllocatorInstance.Data,(this->ProxySectionsInfos).ArrayNum);
  pFVar1 = (this->ProxySectionsInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStaticMeshSceneProxy::~FStaticMeshSceneProxy((FStaticMeshSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xba0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f805a0

void * __thiscall
FLandscapeNaniteSceneProxy::_scalar_deleting_destructor_
          (FLandscapeNaniteSceneProxy *this,uint param_1)

{
  ForElementType<FPrimitiveComponentId> FVar1;
  
  FVar1 = (this->SourceComponentIds).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FPrimitiveComponentId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  Nanite::FSceneProxy::~FSceneProxy((FSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f805f0

void * __thiscall
FLandscapeProxySectionInfo::_scalar_deleting_destructor_
          (FLandscapeProxySectionInfo *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80620

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
FLandscapeSceneViewExtension::_scalar_deleting_destructor_
          (FLandscapeSceneViewExtension *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7FLandscapeSceneViewExtension__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrameRT,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,this)
  ;
  pFVar3 = (this->LandscapeSetupTask).Pimpl.Reference;
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
  DestructItems<FLandscapeSceneViewExtension::FLandscapeViewData,int>
            ((FLandscapeViewData *)(this->LandscapeViews).AllocatorInstance.Data,
             (this->LandscapeViews).ArrayNum);
  pFVar4 = (this->LandscapeViews).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f806d0

void * __thiscall
FLandscapeSectionInfo::_scalar_deleting_destructor_(FLandscapeSectionInfo *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80700

void * __thiscall
FLandscapeSharedBuffers::_scalar_deleting_destructor_(FLandscapeSharedBuffers *this,uint param_1)

{
  ~FLandscapeSharedBuffers(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80740

void * __thiscall
FLandscapeVertexBuffer::_scalar_deleting_destructor_(FLandscapeVertexBuffer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLandscapeVertexBuffer__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80790

void * __thiscall
FLightCacheInterface::_scalar_deleting_destructor_(FLightCacheInterface *this,uint param_1)

{
  FRHIUniformBuffer *this_00;
  
  this->_padding_ = (longlong)&___7FLightCacheInterface__6B_;
  this_00 = (this->PrecomputedLightingUniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f807e0

void * __thiscall
FRawStaticIndexBuffer16or32Interface::_scalar_deleting_destructor_
          (FRawStaticIndexBuffer16or32Interface *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->SRVValue).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80830

void * __thiscall
FRayTracingGeometry::_scalar_deleting_destructor_(FRayTracingGeometry *this,uint param_1)

{
  ~FRayTracingGeometry(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f80870

void * __thiscall
ULandscapeHLODBuilder::_scalar_deleting_destructor_(ULandscapeHLODBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7ULandscapeHLODBuilder__6B_;
  UHLODBuilder::~UHLODBuilder((UHLODBuilder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f808d0

void * __thiscall
ULandscapeInfoMap::_scalar_deleting_destructor_(ULandscapeInfoMap *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeInfoMap__6B_;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
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

// `scalar_deleting_destructor' @ 145f80960

void * __thiscall
ULandscapeLayerInfoObject::_scalar_deleting_destructor_
          (ULandscapeLayerInfoObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULandscapeLayerInfoObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145f809c0

void * __thiscall
ULandscapeNaniteComponent::_scalar_deleting_destructor_
          (ULandscapeNaniteComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->SourceLandscapeComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x680);
  }
  return this;
}

// AddPerWorldLandscapeData @ 145f81060

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

void __cdecl AddPerWorldLandscapeData(UWorld *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  UObject **local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  UObject *local_c8;
  FName local_c0;
  UWorld *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  this = &param_1->PerModuleDataObjects;
  bVar6 = TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
          FindItemByClass<ULandscapeInfoMap>(this,(ULandscapeInfoMap **)0x0,(int *)0x0,0);
  if (!bVar6) {
    lVar12 = param_1->_padding_;
    local_c0.ComparisonIndex.Value = 0;
    local_c0.Number = 0;
    pUVar8 = GetTransientPackage();
    FVar4 = local_c0;
    if (local_c0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar9 = ULandscapeInfoMap::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar9);
    FVar5 = local_c0;
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_c0.ComparisonIndex = FVar4.ComparisonIndex.Value;
    local_c0.Number = FVar4.Number;
    local_a8._16_4_ = local_c0.ComparisonIndex.Value;
    local_a8._20_4_ = local_c0.Number;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_c0 = FVar5;
    local_a8._8_8_ = pUVar8;
    local_a8._24_4_ = (EObjectFlags)lVar12 & RF_Transactional;
    pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    local_b8[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar10 + 3),(FObjectPtr)local_b8);
    local_c8 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    pFVar2 = (this->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
       (lVar12 = (longlong)(param_1->PerModuleDataObjects).ArrayMax,
       (FScriptContainerElement *)&local_c8 < pFVar2 + lVar12 * 8)) {
      local_e0 = (longlong)(param_1->PerModuleDataObjects).ArrayNum;
      local_d8 = 8;
      local_f8 = &local_c8;
      local_f0 = pFVar2;
      local_e8 = lVar12;
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = (param_1->PerModuleDataObjects).ArrayNum;
    piVar1 = &(param_1->PerModuleDataObjects).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this->AllocatorInstance,piVar1);
    }
    (param_1->PerModuleDataObjects).ArrayNum = iVar7 + 1;
    *(UObject **)((this->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_c8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_c8);
    }
  }
  return;
}

// CreateLandscapeGrassWeightPSOCollector @ 145f878f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

IPSOCollector * __cdecl CreateLandscapeGrassWeightPSOCollector(Type param_1)

{
  FMeshPassProcessor *this;
  
  this = operator_new(0x78);
  if (this != (FMeshPassProcessor *)0x0) {
    FMeshPassProcessor::FMeshPassProcessor
              (this,LandscapeGrassWeightMeshPassName,(FScene *)0x0,param_1,(FSceneView *)0x0,
               (FMeshPassDrawListContext *)0x0);
    this->_padding_ = (longlong)&___7FLandscapeGrassWeightMeshProcessor__6B_;
    *(undefined4 *)&this[1].MeshPassType = 0x11;
    this[1].Scene = (FScene *)0x0;
    *(undefined8 *)&this[1].FeatureLevel = 0;
    this[1].ViewIfDynamicMeshCommand = (FSceneView *)0x0;
    this[1].DrawListContext = (FMeshPassDrawListContext *)0x0;
    this[1]._padding_ =
         (longlong)
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    this[1]._padding_ =
         (longlong)
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (IPSOCollector *)this;
  }
  return (IPSOCollector *)0x0;
}

// DirectionFlagsToString @ 145f8a5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

FString * __cdecl DirectionFlagsToString(FString *__return_storage_ptr__,EDirectionFlags param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  EDirectionFlags EVar4;
  FString *pFVar5;
  void *pvVar6;
  ulong64 uVar7;
  EDirectionIndex EVar8;
  int iVar9;
  undefined1 auStack_108 [32];
  FString *local_e8;
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = __return_storage_ptr__;
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"None");
  }
  else {
    local_d8.Base = local_b8;
    EVar8 = Bottom;
    bVar3 = true;
    local_d8.CurPos = local_b8;
    local_d8.End = (wchar_t *)local_38;
    local_d8.bIsDynamic = false;
    local_d8.bIsExternal = false;
    do {
      EVar4 = UE::Landscape::ToFlag(EVar8);
      if ((param_1 & EVar4) != None) {
        if (bVar3) {
          bVar3 = false;
        }
        else {
          if (local_d8.End < local_d8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
          }
          local_d8.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_d8.CurPos,1,",",1);
        }
        pFVar5 = UE::Landscape::GetDirectionString(EVar8);
        iVar1 = (pFVar5->Data).ArrayNum;
        pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
        iVar9 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar9 = 0;
        }
        uVar7 = (ulong64)iVar9;
        if (local_d8.End < local_d8.CurPos + uVar7) {
          TStringBuilderBase<wchar_t>::Extend(&local_d8,uVar7);
        }
        if (iVar9 != 0) {
          pvVar6 = FGenericPlatformString::Memcpy(local_d8.CurPos,pFVar2,uVar7 * 2);
          local_d8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
        }
      }
      __return_storage_ptr__ = local_e8;
      EVar8 = EVar8 + BottomRight;
    } while (EVar8 != Count);
    if (local_d8.End < local_d8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
    }
    *local_d8.CurPos = L'\0';
    FString::FString(__return_storage_ptr__,local_d8.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeHLODBuilder @ 145f8b740

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeHLODBuilder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeInfo @ 145f8b750

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeInfoMap @ 145f8b760

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeInfoMap(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject @ 145f8b770

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeNaniteComponent @ 145f8b780

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeNaniteComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeProxy @ 145f8b790

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeProxy(void)

{
  return;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 145f922a0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata
          (FLandscapeFixedGridUniformShaderParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FLandscapeFixedGridUniformShaderParameters::GetStructMetadata'::__l2::<lambda_1>::operator()
              (auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FLandscapeFixedGridUniformShaderParameters::zzAppendMemberGetPrev;
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
                 L"FLandscapeFixedGridUniformShaderParameters",
                 L"FLandscapeFixedGridUniformShaderParameters",L"LandscapeFixedGrid",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                 ,0x9c,0x10,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FLandscapeFixedGridUniformShaderParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 145f922b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FLandscapeSectionLODUniformParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FLandscapeSectionLODUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()
              (auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FLandscapeSectionLODUniformParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FLandscapeSectionLODUniformParameters"
                 ,L"FLandscapeSectionLODUniformParameters",L"LandscapeContinuousLODParameters",
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                 ,0x95,0x20,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FLandscapeSectionLODUniformParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 145f922c0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FLandscapeUniformShaderParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FLandscapeUniformShaderParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(auStackX_8)
    ;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FLandscapeUniformShaderParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FLandscapeUniformShaderParameters",
                 L"FLandscapeUniformShaderParameters",L"LandscapeParameters",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                 ,0x74,0x100,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FLandscapeUniformShaderParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 145f922d0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FLandscapeVertexFactoryMVFParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FLandscapeVertexFactoryMVFParameters::GetStructMetadata'::__l2::<lambda_1>::operator()
              (auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FLandscapeVertexFactoryMVFParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FLandscapeVertexFactoryMVFParameters",
                 L"FLandscapeVertexFactoryMVFParameters",L"LandscapeMVF",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                 ,0x8e,0x10,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FLandscapeVertexFactoryMVFParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetTerrainExpandPatchCount @ 145f959c0

float __cdecl
`anonymous_namespace'::GetTerrainExpandPatchCount
          (float param_1,int *param_2,int *param_3,int param_4,int param_5,int *param_6,uint param_7
          )

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  fVar2 = __real_3f800000;
  fVar9 = 0.0;
  if (0.0 < param_1) {
    fVar11 = (float)GPixelFormats[5].BlockSizeX;
    fVar9 = (float)GPixelFormats[5].BlockSizeY;
    if (__real_3f800000 <= param_1) {
      fVar11 = fVar11 / param_1;
      fVar9 = fVar9 / param_1;
    }
    bVar6 = (byte)param_7;
    iVar3 = (int)fVar11 >> (bVar6 & 0x1f);
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    *param_2 = iVar3;
    iVar3 = (int)fVar9 >> (bVar6 & 0x1f);
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    *param_3 = iVar3;
    if (param_1 < fVar2) {
      uVar7 = 0x1000;
      if ((int)((float)param_5 * param_1) < 0x1000) {
        uVar7 = (int)((float)param_5 * param_1);
      }
      *param_6 = uVar7;
      iVar3 = (*param_2 << (bVar6 & 0x1f)) * 2 + param_5;
    }
    else {
      uVar4 = (uint)((float)(param_4 + 1) * param_1);
      uVar7 = 0x1000;
      if ((int)uVar4 < 0x1000) {
        uVar7 = uVar4;
      }
      *param_6 = uVar7;
      iVar3 = (*param_2 << (bVar6 & 0x1f)) * 2 + 1 + param_4;
    }
    iVar5 = (int)((float)iVar3 * param_1);
    iVar8 = 0x1000;
    if (iVar5 < 0x1000) {
      iVar8 = iVar5;
    }
    uVar4 = uVar7;
    if ((int)uVar7 < iVar8) {
      while (uVar1 = uVar4, 0 < (int)uVar1) {
        uVar7 = uVar1;
        uVar4 = uVar1 & ~(-uVar1 & uVar1);
      }
      *param_6 = uVar7 * 2;
      uVar4 = uVar7 * 2;
      if (iVar8 * iVar8 <= (int)(uVar7 * uVar7 * 2)) {
        *param_6 = uVar7;
        uVar4 = uVar7;
      }
    }
    auVar10 = roundps(ZEXT416((uint)((float)iVar3 * param_1)),
                      ZEXT416((uint)(((float)(int)uVar4 / (float)iVar8) * (float)param_4 * param_1))
                      ,1);
    fVar9 = ((auVar10._0_4_ / ((float)param_4 * param_1)) * (float)iVar8) / (float)(int)uVar4;
  }
  return fVar9;
}

// GetViewLodOverride @ 145f96900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __cdecl GetViewLodOverride(FSceneView *param_1,uint param_2)

{
  char cVar1;
  FCustomRenderPassBase *this;
  int iVar2;
  FName *pFVar3;
  ICustomRenderPassUserData *pIVar4;
  uint *puVar5;
  ICustomRenderPassUserData IVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  
  iVar2 = GetCVarForceLOD_AnyThread();
  this = param_1->CustomRenderPass;
  cVar1 = param_1->Family->LandscapeLODOverride;
  iVar8 = (int)cVar1;
  if (cVar1 < '\0') {
    iVar8 = iVar2;
  }
  if (!(BADTYPE)(param_1->Family->EngineShowFlags).LOD) {
    iVar8 = 0;
  }
  if (this != (FCustomRenderPassBase *)0x0) {
    pFVar3 = FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic();
    pIVar4 = FCustomRenderPassBase::GetUserData(this,pFVar3);
    if ((pIVar4 != (ICustomRenderPassUserData *)0x0) &&
       (*(int *)(pIVar4 + 2) != *(int *)&pIVar4[7].field_0x4)) {
      IVar6 = pIVar4[9];
      if (pIVar4[9] == (ICustomRenderPassUserData)0x0) {
        IVar6 = (ICustomRenderPassUserData)(pIVar4 + 8);
      }
      uVar9 = *(uint *)((longlong)IVar6 + (ulonglong)(*(int *)(pIVar4 + 10) - 1U & param_2) * 4);
      if (uVar9 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar9 * 0x10 + (longlong)pIVar4[1]);
          if (*puVar7 == param_2) {
            puVar5 = puVar7 + 1;
            if (puVar7 == (uint *)0x0) {
              puVar5 = (uint *)0x0;
            }
            if (puVar5 == (uint *)0x0) {
              return iVar8;
            }
            return *puVar5;
          }
          uVar9 = puVar7[2];
        } while (uVar9 != 0xffffffff);
      }
    }
  }
  return iVar8;
}

// InvalidateRenderStateForLandscapeNaniteComponents @ 145f97cb0

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

void __cdecl InvalidateRenderStateForLandscapeNaniteComponents(IConsoleVariable *param_1)

{
  code *pcVar1;
  uint uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  TObjectIterator<ULandscapeNaniteComponent> local_38;
  TObjectIterator<ULandscapeNaniteComponent> local_20;
  
  local_20.Index = 0xffffffff;
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = ULandscapeNaniteComponent::StaticClass();
  GetObjectsOfClass(pUVar6,&local_20.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<ULandscapeNaniteComponent>::Advance(&local_20);
  _Src.Data = local_20.ObjectArray.AllocatorInstance.Data;
  lVar8 = (longlong)local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.ArrayNum = local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_20.ObjectArray.ArrayNum == 0) {
    local_38.ObjectArray.ArrayMax = 0;
    uVar2 = local_20.Index;
    uVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_20.ObjectArray.ArrayNum,&local_38.ObjectArray.ArrayMax);
    memcpy(local_38.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
    uVar2 = local_20.Index;
    uVar7 = local_20.ObjectArray.ArrayNum;
  }
  while( true ) {
    local_38.Index = uVar2;
    if (uVar2 == uVar7) {
      if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
      }
      if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar2 < local_38.ObjectArray.ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    UActorComponent::MarkRenderStateDirty
              (*(UActorComponent **)
                (local_38.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
    TObjectIterator<ULandscapeNaniteComponent>::Advance(&local_38);
    uVar2 = local_38.Index;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnCVarNeedingRenderStateInvalidationChanged @ 145f99d40

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

void __cdecl OnCVarNeedingRenderStateInvalidationChanged(IConsoleVariable *param_1)

{
  code *pcVar1;
  uint uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  TObjectIterator<ULandscapeComponent> local_38;
  TObjectIterator<ULandscapeComponent> local_20;
  
  local_20.Index = 0xffffffff;
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_ULandscapeComponent_NoRegister();
  GetObjectsOfClass(pUVar6,&local_20.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<ULandscapeComponent>::Advance(&local_20);
  _Src.Data = local_20.ObjectArray.AllocatorInstance.Data;
  lVar8 = (longlong)local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.ArrayNum = local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_20.ObjectArray.ArrayNum == 0) {
    local_38.ObjectArray.ArrayMax = 0;
    uVar2 = local_20.Index;
    uVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_20.ObjectArray.ArrayNum,&local_38.ObjectArray.ArrayMax);
    memcpy(local_38.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
    uVar2 = local_20.Index;
    uVar7 = local_20.ObjectArray.ArrayNum;
  }
  while( true ) {
    local_38.Index = uVar2;
    if (uVar2 == uVar7) {
      if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
      }
      if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar2 < local_38.ObjectArray.ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    UActorComponent::MarkRenderStateDirty
              (*(UActorComponent **)
                (local_38.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
    TObjectIterator<ULandscapeComponent>::Advance(&local_38);
    uVar2 = local_38.Index;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnDumpLandscapeLODs @ 145f99eb0

void __cdecl OnDumpLandscapeLODs(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  GVarDumpLandscapeLODsDetails = false;
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(int *)(pFVar4 + 8) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)pFVar4;
    }
    bVar2 = FParse::Param(pwVar3,L"detailed");
    if (bVar2) {
      GVarDumpLandscapeLODsDetails = true;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  if (GVarDumpLandscapeLODsCurrentFrame == 0) {
    GVarDumpLandscapeLODsCurrentFrame = GFrameNumberRenderThread + 3;
  }
  return;
}

// ShouldCacheLandscapeGrassShaders @ 145fa2e60

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

bool __cdecl ShouldCacheLandscapeGrassShaders(FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  FVertexFactoryType *pFVar6;
  FHashedName local_res8;
  FName local_res10;
  
  uVar1 = (ushort)param_1->_padding_;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (((int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel < 3) ||
     ((param_1->_padding_ & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((GGrassMapAlwaysBuildRuntimeGenerationResources != 0) ||
     ((GGrassEnable != 0 && ((bVar3 || (GGrassMapUseRuntimeGeneration != 0)))))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pFVar5 = FName::FName(&local_res10,L"FLandscapeFixedGridVertexFactory",FNAME_Find);
  FHashedName::FHashedName(&local_res8,pFVar5);
  pFVar6 = FindVertexFactoryType(&local_res8);
  if ((((param_1->_padding_ & 0x80000002) != 0) && (param_1->VertexFactoryType == pFVar6)) &&
     (bVar3)) {
    return true;
  }
  return false;
}

// WorldCreationEventFunction @ 145fa8e40

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

void __cdecl WorldCreationEventFunction(UWorld *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  UObject **ppUStack_f8;
  FScriptContainerElement *pFStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  UObject *pUStack_c8;
  FName FStack_c0;
  UWorld *apUStack_b8 [2];
  undefined1 auStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  this = &param_1->PerModuleDataObjects;
  bVar6 = TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
          FindItemByClass<ULandscapeInfoMap>(this,(ULandscapeInfoMap **)0x0,(int *)0x0,0);
  if (!bVar6) {
    lVar12 = param_1->_padding_;
    FStack_c0.ComparisonIndex.Value = 0;
    FStack_c0.Number = 0;
    pUVar8 = GetTransientPackage();
    FVar4 = FStack_c0;
    if (FStack_c0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar9 = ULandscapeInfoMap::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_a8,pUVar9);
    FVar5 = FStack_c0;
    auStack_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_a8._56_8_ = (UPackage *)0x0;
    FStack_c0.ComparisonIndex = FVar4.ComparisonIndex.Value;
    FStack_c0.Number = FVar4.Number;
    auStack_a8._16_4_ = FStack_c0.ComparisonIndex.Value;
    auStack_a8._20_4_ = FStack_c0.Number;
    auStack_a8._40_8_ = (UObject *)0x0;
    auStack_a8[0x20] = false;
    FStack_c0 = FVar5;
    auStack_a8._8_8_ = pUVar8;
    auStack_a8._24_4_ = (EObjectFlags)lVar12 & RF_Transactional;
    pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_a8);
    if (auStack_a8._64_8_ != 0) {
      plVar11 = (longlong *)(auStack_a8 + 0x50);
      if ((longlong *)auStack_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)auStack_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    apUStack_b8[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar10 + 3),(FObjectPtr)apUStack_b8);
    pUStack_c8 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    pFVar2 = (this->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&pUStack_c8) &&
       (lVar12 = (longlong)(param_1->PerModuleDataObjects).ArrayMax,
       (FScriptContainerElement *)&pUStack_c8 < pFVar2 + lVar12 * 8)) {
      lStack_e0 = (longlong)(param_1->PerModuleDataObjects).ArrayNum;
      uStack_d8 = 8;
      ppUStack_f8 = &pUStack_c8;
      pFStack_f0 = pFVar2;
      lStack_e8 = lVar12;
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = (param_1->PerModuleDataObjects).ArrayNum;
    piVar1 = &(param_1->PerModuleDataObjects).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this->AllocatorInstance,piVar1);
    }
    (param_1->PerModuleDataObjects).ArrayNum = iVar7 + 1;
    *(UObject **)((this->AllocatorInstance).Data + (longlong)iVar7 * 8) = pUStack_c8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStack_c8);
    }
  }
  return;
}

// WorldDestroyEventFunction @ 145fa8e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl WorldDestroyEventFunction(UWorld *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  byte bVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar11;
  
  iVar1 = (param_1->PerModuleDataObjects).ArrayNum;
  if (iVar1 == 0) {
    return;
  }
  uVar7 = 0;
  pFVar3 = (param_1->PerModuleDataObjects).AllocatorInstance.Data;
  lVar4 = *(longlong *)pFVar3;
  uVar11 = uVar7;
  uVar13 = uVar7;
  if (lVar4 != 0) {
    pUVar6 = ULandscapeInfoMap::StaticClass();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      bVar8 = 0;
      goto LAB_145fa8ed0;
    }
  }
  bVar8 = 1;
LAB_145fa8ed0:
  do {
    uVar9 = (uint)uVar11;
    uVar10 = uVar9;
    do {
      uVar7 = uVar7 + 1;
      uVar10 = uVar10 + 1;
      if ((longlong)iVar1 <= (longlong)uVar7) break;
      lVar4 = *(longlong *)(pFVar3 + uVar7 * 8);
      if (lVar4 == 0) {
LAB_145fa8f10:
        bVar5 = 1;
      }
      else {
        pUVar6 = ULandscapeInfoMap::StaticClass();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) goto LAB_145fa8f10;
        bVar5 = 0;
      }
    } while (bVar8 == bVar5);
    if (bVar8 != 0) {
      uVar12 = (uint)uVar13;
      if (uVar12 != uVar9) {
        memmove(pFVar3 + (longlong)(int)uVar12 * 8,pFVar3 + (longlong)(int)uVar9 * 8,
                (longlong)(int)(uVar10 - uVar9) << 3);
      }
      uVar13 = (ulonglong)(uVar12 + (uVar10 - uVar9));
    }
    bVar8 = bVar8 ^ 1;
    uVar11 = (ulonglong)uVar10;
    if ((longlong)iVar1 <= (longlong)uVar7) {
      (param_1->PerModuleDataObjects).ArrayNum = (int)uVar13;
      return;
    }
  } while( true );
}

// WorldDuplicateEventFunction @ 145fa8fa0

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

void __cdecl
WorldDuplicateEventFunction
          (UWorld *param_1,bool param_2,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_3,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  uint uVar7;
  uint local_res8 [2];
  ULandscapeInfoMap *local_30;
  UWorld *local_28 [2];
  
  bVar4 = TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
          FindItemByClass<ULandscapeInfoMap>
                    (&param_1->PerModuleDataObjects,&local_30,(int *)local_res8,0);
  if (!bVar4) {
    AddPerWorldLandscapeData(param_1);
    return;
  }
  pUVar5 = StaticDuplicateObject
                     ((UObject *)local_30,(UObject *)local_30->_padding_,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = ULandscapeInfoMap::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_145fa9044;
  }
  pUVar5 = (UObject *)0x0;
LAB_145fa9044:
  local_28[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar5 + 3),(FObjectPtr)local_28);
  uVar7 = 0;
  if ((int)local_res8[0] < (param_1->PerModuleDataObjects).ArrayNum) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_1->PerModuleDataObjects).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pFVar2 + (longlong)(int)local_res8[0] * 8) = pUVar5;
  return;
}

// Z_Construct_UClass_ALandscapeProxy_NoRegister @ 145fa9140

UClass * __cdecl Z_Construct_UClass_ALandscapeProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ALandscapeProxy::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeProxy",
               &Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton,
               ALandscapeProxy::StaticRegisterNativesALandscapeProxy,0x7f0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscapeProxy>,InternalVTableHelperCtorCaller<ALandscapeProxy>,
               local_res8,APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeProxy.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeHLODBuilder_NoRegister @ 145fa9200

UClass * __cdecl Z_Construct_UClass_ULandscapeHLODBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHLODBuilder",
               &Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton,
               ULandscapeHLODBuilder::StaticRegisterNativesULandscapeHLODBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Editor",
               InternalConstructor<ULandscapeHLODBuilder>,
               InternalVTableHelperCtorCaller<ULandscapeHLODBuilder>,local_res8,
               UHLODBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeInfoMap_NoRegister @ 145fa92c0

UClass * __cdecl Z_Construct_UClass_ULandscapeInfoMap_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULandscapeInfoMap::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeInfoMap",
               &Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton,
               ULandscapeInfoMap::StaticRegisterNativesULandscapeInfoMap,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeInfoMap>,
               InternalVTableHelperCtorCaller<ULandscapeInfoMap>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeInfoMap.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeInfo_NoRegister @ 145fa9370

UClass * __cdecl Z_Construct_UClass_ULandscapeInfo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeInfo",
               &Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton,
               ULandscapeInfo::StaticRegisterNativesULandscapeInfo,0x210,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeInfo>,InternalVTableHelperCtorCaller<ULandscapeInfo>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy @ 145fa9420

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeHLODMeshSourceLODPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeHLODMeshSourceLODPolicy.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy @ 145fa9460

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeHLODTextureSizePolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeHLODTextureSizePolicy.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType @ 145fa94a0

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeImportAlphamapType.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeLODFalloff @ 145fa94e0

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeLODFalloff(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeLODFalloff.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeLODFalloff.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeLODFalloff.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode @ 145fa9520

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerDisplayMode.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction @ 145fa9560

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerPaintingRestriction.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ESplineModulationColorMask @ 145fa95a0

UEnum * __cdecl Z_Construct_UEnum_Landscape_ESplineModulationColorMask(void)

{
  if (Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings @ 145fa95e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeEditorLayerSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeEditorLayerSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeEditorLayerSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeEditorLayerSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLandscapeImportLayerInfo @ 145fa9660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeImportLayerInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeImportLayerInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeImportLayerInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeImportLayerInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeImportLayerInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings @ 145fa96e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeInfoLayerSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeInfoLayerSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeInfoLayerSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeInfoLayerSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride @ 145fa9760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeProxyMaterialOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeProxyMaterialOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeProxyMaterialOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeProxyMaterialOverride.InnerSingleton;
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

// IMPLEMENT_MODULE_Landscape @ 145facb90

void __cdecl IMPLEMENT_MODULE_Landscape(void)

{
  return;
}

// HeightmapTextureToActiveComponent'' @ 1503d4e40

void __cdecl
`dynamic_atexit_destructor_for_'FLandscapeGroup::HeightmapTextureToActiveComponent__(void)

{
  FLandscapeGroup::HeightmapTextureToActiveComponent._72_4_ = 0;
  if (FLandscapeGroup::HeightmapTextureToActiveComponent._64_8_ != 0) {
    FMemory::Free((void *)FLandscapeGroup::HeightmapTextureToActiveComponent._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FLandscapeGroup::HeightmapTextureToActiveComponent);
  return;
}

// LandscapeIndexAllocator'' @ 1503d4e80

void __cdecl `dynamic_atexit_destructor_for_'FLandscapeRenderSystem::LandscapeIndexAllocator__(void)

{
  ForElementType<unsigned_int> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = FLandscapeRenderSystem::LandscapeIndexAllocator.AllocatorInstance.SecondaryData;
  if (FLandscapeRenderSystem::LandscapeIndexAllocator.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    return;
  }
  if (FLandscapeRenderSystem::LandscapeIndexAllocator.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
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

// OnCreateRenderThreadResources'' @ 1503d4ea0

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

// OnDestroyRenderThreadResources'' @ 1503d4ee0

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

// ShaderTypeRegistration'' @ 1503d4f20

void __cdecl `dynamic_atexit_destructor_for_'FLandscapeGrassWeightPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503d4f30

void __cdecl `dynamic_atexit_destructor_for_'FLandscapeGrassWeightVS::ShaderTypeRegistration__(void)

{
  return;
}

// SharedBuffersMap'' @ 1503d4f40

void __cdecl `dynamic_atexit_destructor_for_'FLandscapeComponentSceneProxy::SharedBuffersMap__(void)

{
  FLandscapeComponentSceneProxy::SharedBuffersMap._72_4_ = 0;
  if (FLandscapeComponentSceneProxy::SharedBuffersMap._64_8_ != 0) {
    FMemory::Free((void *)FLandscapeComponentSceneProxy::SharedBuffersMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeSharedBuffers_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeSharedBuffers_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeSharedBuffers_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FLandscapeComponentSceneProxy::SharedBuffersMap);
  return;
}

// StaticResource'' @ 1503d4f80

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

// StaticResource'' @ 1503d5000

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

// StaticResource'' @ 1503d5080

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__00_00_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503d5100

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__00_01_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503d5180

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__00_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503d5200

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

// StaticResource'' @ 1503d5280

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

// StaticResource'' @ 1503d5300

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

// StaticResource'' @ 1503d5380

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__0A__00_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503d5400

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__0A__01_0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503d5480

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__0A__0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
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
             &TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503d5500

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503d5580

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

// StaticType'' @ 1503d5600

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

void __cdecl `dynamic_atexit_destructor_for_'FLandscapeFixedGridVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FLandscapeFixedGridVertexFactory::StaticType);
  return;
}

// StaticType'' @ 1503d5620

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

void __cdecl `dynamic_atexit_destructor_for_'FLandscapeVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FLandscapeVertexFactory::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'AllowedShaderTypes'' @ 1503d5640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FLandscapeMaterialResource::GetAllowedShaderTypesInThumbnailRender'::__l2::
_dynamic_atexit_destructor_for__AllowedShaderTypes__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _AllowedShaderTypes;
  if (_AllowedShaderTypes == (void *)0x0) {
    return;
  }
  if (_AllowedShaderTypes != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'CLandscapeAllowNanitePerClusterDisplacementDisable'' @ 1503d5660

void __cdecl
_dynamic_atexit_destructor_for__CLandscapeAllowNanitePerClusterDisplacementDisable__(void)

{
  CLandscapeAllowNanitePerClusterDisplacementDisable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CLandscapeAllowNanitePerClusterDisplacementDisable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowLandscapeShadows'' @ 1503d5680

void __cdecl _dynamic_atexit_destructor_for__CVarAllowLandscapeShadows__(void)

{
  CVarAllowLandscapeShadows._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowLandscapeShadows);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAmortizedGroupValidation'' @ 1503d56a0

void __cdecl UE::Landscape::_dynamic_atexit_destructor_for__CVarAmortizedGroupValidation__(void)

{
  CVarAmortizedGroupValidation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAmortizedGroupValidation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCameraCutTranslationThreshold'' @ 1503d56c0

void __cdecl _dynamic_atexit_destructor_for__CVarCameraCutTranslationThreshold__(void)

{
  CVarCameraCutTranslationThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCameraCutTranslationThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableLandscapeNaniteGI'' @ 1503d56e0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableLandscapeNaniteGI__(void)

{
  CVarDisableLandscapeNaniteGI._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableLandscapeNaniteGI);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpLandscapeLODs'' @ 1503d5700

void __cdecl _dynamic_atexit_destructor_for__CVarDumpLandscapeLODs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpLandscapeLODs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForcePatchAllEdges'' @ 1503d5720

void __cdecl UE::Landscape::_dynamic_atexit_destructor_for__CVarForcePatchAllEdges__(void)

{
  CVarForcePatchAllEdges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForcePatchAllEdges);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapAlwaysBuildRuntimeGenerationResources'' @ 1503d5740

void __cdecl
_dynamic_atexit_destructor_for__CVarGrassMapAlwaysBuildRuntimeGenerationResources__(void)

{
  CVarGrassMapAlwaysBuildRuntimeGenerationResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGrassMapAlwaysBuildRuntimeGenerationResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapCreationPrioritizedMultiplier'' @ 1503d5760

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapCreationPrioritizedMultiplier__(void)

{
  CVarGrassMapCreationPrioritizedMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGrassMapCreationPrioritizedMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapEvictAll'' @ 1503d5780

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapEvictAll__(void)

{
  CVarGrassMapEvictAll._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapEvictAll);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapGuardBandDiscardMultiplier'' @ 1503d57a0

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapGuardBandDiscardMultiplier__(void)

{
  CVarGrassMapGuardBandDiscardMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGrassMapGuardBandDiscardMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapGuardBandMultiplier'' @ 1503d57c0

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapGuardBandMultiplier__(void)

{
  CVarGrassMapGuardBandMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapGuardBandMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapMaxComponentsForBlockingUpdate'' @ 1503d57e0

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapMaxComponentsForBlockingUpdate__(void)

{
  CVarGrassMapMaxComponentsForBlockingUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGrassMapMaxComponentsForBlockingUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapMaxComponentsRendering'' @ 1503d5800

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapMaxComponentsRendering__(void)

{
  CVarGrassMapMaxComponentsRendering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapMaxComponentsRendering)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapMaxComponentsStreaming'' @ 1503d5820

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapMaxComponentsStreaming__(void)

{
  CVarGrassMapMaxComponentsStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapMaxComponentsStreaming)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapMaxDiscardChecksPerFrame'' @ 1503d5840

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapMaxDiscardChecksPerFrame__(void)

{
  CVarGrassMapMaxDiscardChecksPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGrassMapMaxDiscardChecksPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapRenderEveryFrame'' @ 1503d5860

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapRenderEveryFrame__(void)

{
  CVarGrassMapRenderEveryFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapRenderEveryFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapRenderEveryFrameDelay'' @ 1503d5880

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapRenderEveryFrameDelay__(void)

{
  CVarGrassMapRenderEveryFrameDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapRenderEveryFrameDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapUseAsyncFetch'' @ 1503d58a0

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapUseAsyncFetch__(void)

{
  CVarGrassMapUseAsyncFetch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapUseAsyncFetch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrassMapUseRuntimeGeneration'' @ 1503d58c0

void __cdecl _dynamic_atexit_destructor_for__CVarGrassMapUseRuntimeGeneration__(void)

{
  CVarGrassMapUseRuntimeGeneration._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassMapUseRuntimeGeneration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInstallEdgeFixup'' @ 1503d58e0

void __cdecl UE::Landscape::_dynamic_atexit_destructor_for__CVarInstallEdgeFixup__(void)

{
  CVarInstallEdgeFixup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInstallEdgeFixup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation'' @ 1503d5900

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation__(void)

{
  CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeAllowNonNaniteVirtualShadowMapInvalidation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeLOD0DistributionOverride'' @ 1503d5920

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeLOD0DistributionOverride__(void)

{
  CVarLandscapeLOD0DistributionOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeLOD0DistributionOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeLOD0DistributionScale'' @ 1503d5940

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeLOD0DistributionScale__(void)

{
  CVarLandscapeLOD0DistributionScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeLOD0DistributionScale)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeLOD0ScreenSizeOverride'' @ 1503d5960

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeLOD0ScreenSizeOverride__(void)

{
  CVarLandscapeLOD0ScreenSizeOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeLOD0ScreenSizeOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeLODBlendRangeOverride'' @ 1503d5980

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeLODBlendRangeOverride__(void)

{
  CVarLandscapeLODBlendRangeOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeLODBlendRangeOverride)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeLODDistributionOverride'' @ 1503d59a0

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeLODDistributionOverride__(void)

{
  CVarLandscapeLODDistributionOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeLODDistributionOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeLODDistributionScale'' @ 1503d59c0

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeLODDistributionScale__(void)

{
  CVarLandscapeLODDistributionScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeLODDistributionScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride'' @ 1503d59e0

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride__
          (void)

{
  CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverrideOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride'' @ 1503d5a00

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride__
          (void)

{
  CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent'' @ 1503d5a20

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent__
          (void)

{
  CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride'' @ 1503d5a40

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride__
          (void)

{
  CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeNumRayTracingSectionsPerSubsection'' @ 1503d5a60

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeNumRayTracingSectionsPerSubsection__(void)

{
  CVarLandscapeNumRayTracingSectionsPerSubsection._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeNumRayTracingSectionsPerSubsection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeRayTracingGeometryDetectTextureStreaming'' @ 1503d5a80

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeRayTracingGeometryDetectTextureStreaming__(void)

{
  CVarLandscapeRayTracingGeometryDetectTextureStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeRayTracingGeometryDetectTextureStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold'' @ 1503d5aa0

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold__(void)

{
  CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeRayTracingGeometryFractionalLODUpdateThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame'' @ 1503d5ac0

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame__(void)

{
  CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeRayTracingGeometryLODsThatUpdateEveryFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeRayTracingVertexLODBias'' @ 1503d5ae0

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeRayTracingVertexLODBias__(void)

{
  CVarLandscapeRayTracingVertexLODBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeRayTracingVertexLODBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeRuntimeVirtualTextureRenderWithQuad'' @ 1503d5b00

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeRuntimeVirtualTextureRenderWithQuad__(void)

{
  CVarLandscapeRuntimeVirtualTextureRenderWithQuad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeRuntimeVirtualTextureRenderWithQuad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeUseAsyncTasksForLODComputation'' @ 1503d5b20

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeUseAsyncTasksForLODComputation__(void)

{
  CVarLandscapeUseAsyncTasksForLODComputation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeUseAsyncTasksForLODComputation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLumenSceneSurfaceCacheCaptureNaniteLandscape'' @ 1503d5b40

void __cdecl
_dynamic_atexit_destructor_for__CVarLumenSceneSurfaceCacheCaptureNaniteLandscape__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLumenSceneSurfaceCacheCaptureNaniteLandscape);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPatchEdges'' @ 1503d5b60

void __cdecl UE::Landscape::_dynamic_atexit_destructor_for__CVarPatchEdges__(void)

{
  CVarPatchEdges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPatchEdges);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPatchStreamingMipEdges'' @ 1503d5b80

void __cdecl UE::Landscape::_dynamic_atexit_destructor_for__CVarPatchStreamingMipEdges__(void)

{
  CVarPatchStreamingMipEdges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPatchStreamingMipEdges);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingLandscape'' @ 1503d5ba0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingLandscape__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingLandscape);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingLandscapeVertexMask'' @ 1503d5bc0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingLandscapeVertexMask__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingLandscapeVertexMask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderCaptureNextGrassmapDraws'' @ 1503d5be0

void __cdecl _dynamic_atexit_destructor_for__CVarRenderCaptureNextGrassmapDraws__(void)

{
  CVarRenderCaptureNextGrassmapDraws._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderCaptureNextGrassmapDraws)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'ComponentsToRemoveFoliageInstances'' @ 1503d5c00

void __cdecl
`FLandscapeGrassMapsBuilder::UpdateTrackedComponents'::__l2::
_dynamic_atexit_destructor_for__ComponentsToRemoveFoliageInstances__(void)

{
  ComponentsToRemoveFoliageInstances.HashSize = 0;
  if (ComponentsToRemoveFoliageInstances.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ComponentsToRemoveFoliageInstances.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ComponentsToRemoveFoliageInstances.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503d5c40

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

// `dynamic_atexit_destructor_for_'Default'' @ 1503d5c70

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_short,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_short,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503d5ca0

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

// `dynamic_atexit_destructor_for_'Default'' @ 1503d5cd0

void __cdecl
`InternalGetDefaultObject<TResourceArray<float,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<float,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<float,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<float,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<float,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503d5d00

void __cdecl
``FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l7
::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503d5d07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 1503d5d20

void __cdecl
`ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate'::__l2::
_dynamic_atexit_destructor_for__Dummy__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &`public:_virtual_class_TDelegate<class_FPrimitiveSceneProxy*___ptr64___cdecl(ULandscapeComponent*___ptr64),FDefaultDelegateUserPolicy>_const&___ptr64___cdecl_ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(void)const___ptr64'
              ::__l2::Dummy,(FWriteAccessScope *)&local_28);
  if ((DAT_15519a058 != 0) && (DAT_15519a050 != (undefined8 *)0x0)) {
    (**(code **)*DAT_15519a050)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&DAT_15519a050,0,0,0x10);
    DAT_15519a058 = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (DAT_15519a050 != (undefined8 *)0x0) {
    FMemory::Free(DAT_15519a050);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &`public:_virtual_class_TDelegate<class_FPrimitiveSceneProxy*___ptr64___cdecl(ULandscapeComponent*___ptr64),FDefaultDelegateUserPolicy>_const&___ptr64___cdecl_ILandscapeModule::GetCreateLandscapeComponentSceneProxyDelegate(void)const___ptr64'
              ::__l2::Dummy);
  return;
}

// `dynamic_atexit_destructor_for_'ExcludedShaderTypes'' @ 1503d5dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FLandscapeMaterialResource::GetExcludedShaderTypesInThumbnailRender'::__l2::
_dynamic_atexit_destructor_for__ExcludedShaderTypes__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ExcludedShaderTypes;
  if (_ExcludedShaderTypes == (void *)0x0) {
    return;
  }
  if (_ExcludedShaderTypes != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'FLandscapeFixedGridUniformShaderParametersMetadataRegistration'' @ 1503d5de0

void __cdecl
_dynamic_atexit_destructor_for__FLandscapeFixedGridUniformShaderParametersMetadataRegistration__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FLandscapeSectionLODUniformParametersMetadataRegistration'' @ 1503d5df0

void __cdecl
_dynamic_atexit_destructor_for__FLandscapeSectionLODUniformParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FLandscapeUniformShaderParametersMetadataRegistration'' @ 1503d5e00

void __cdecl
_dynamic_atexit_destructor_for__FLandscapeUniformShaderParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FLandscapeVertexFactoryMVFParametersMetadataRegistration'' @ 1503d5e10

void __cdecl
_dynamic_atexit_destructor_for__FLandscapeVertexFactoryMVFParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GGrassMapRenderEveryFrame'' @ 1503d5e20

void __cdecl _dynamic_atexit_destructor_for__GGrassMapRenderEveryFrame__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GGrassMapRenderEveryFrame.Data.AllocatorInstance.Data;
  if (GGrassMapRenderEveryFrame.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GGrassMapRenderEveryFrame.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GLandscapeDebugOptions'' @ 1503d5e40

void __cdecl _dynamic_atexit_destructor_for__GLandscapeDebugOptions__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GLandscapeDebugOptions.StaticConsoleCommand);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GLandscapeDebugOptions.PatchesConsoleCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_LandscapeGrassMaps'' @ 1503d5e70

void __cdecl _dynamic_atexit_destructor_for__GPUStat_LandscapeGrassMaps__(void)

{
  GPUStat_LandscapeGrassMaps._104_4_ = 0;
  if (GPUStat_LandscapeGrassMaps._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_LandscapeGrassMaps._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_LandscapeGrassMaps.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterLandscapeCustomVersion'' @ 1503d5eb0

void __cdecl _dynamic_atexit_destructor_for__GRegisterLandscapeCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterLandscapeCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LandscapeRenderSystems'' @ 1503d5ed0

void __cdecl _dynamic_atexit_destructor_for__LandscapeRenderSystems__(void)

{
  LandscapeRenderSystems._72_4_ = 0;
  if (LandscapeRenderSystems._64_8_ != 0) {
    FMemory::Free((void *)LandscapeRenderSystems._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeRenderSystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeRenderSystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeRenderSystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&LandscapeRenderSystems);
  return;
}

// `dynamic_atexit_destructor_for_'RegisterLandscapeGrassWeightPSOCollector'' @ 1503d5f10

void __cdecl _dynamic_atexit_destructor_for__RegisterLandscapeGrassWeightPSOCollector__(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)RegisterLandscapeGrassWeightPSOCollector.Index;
  uVar2 = (ulonglong)RegisterLandscapeGrassWeightPSOCollector.ShadingPath;
  FPSOCollectorCreateManager::PSOCollectors[uVar2][uVar1].CreateFunction =
       (_func___cdecl_IPSOCollector_ptr_Type *)0x0;
  FPSOCollectorCreateManager::PSOCollectors[uVar2][uVar1].Name = (wchar_t *)0x0;
  return;
}

// `dynamic_atexit_destructor_for_'RegisterMobileLandscapeGrassWeightPSOCollector'' @ 1503d5f40

void __cdecl _dynamic_atexit_destructor_for__RegisterMobileLandscapeGrassWeightPSOCollector__(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)RegisterMobileLandscapeGrassWeightPSOCollector.Index;
  uVar2 = (ulonglong)RegisterMobileLandscapeGrassWeightPSOCollector.ShadingPath;
  FPSOCollectorCreateManager::PSOCollectors[uVar2][uVar1].CreateFunction =
       (_func___cdecl_IPSOCollector_ptr_Type *)0x0;
  FPSOCollectorCreateManager::PSOCollectors[uVar2][uVar1].Name = (wchar_t *)0x0;
  return;
}

// `dynamic_atexit_destructor_for_'ShaderTypes'' @ 1503d5f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FLandscapeMaterialResource::GetGPULightmassShaderTypes'::__l2::
_dynamic_atexit_destructor_for__ShaderTypes__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ShaderTypes;
  if (_ShaderTypes == (void *)0x0) {
    return;
  }
  if (_ShaderTypes != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderTypes'' @ 1503d5f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FLandscapeMaterialResource::GetGrassShaderTypes'::__l2::
_dynamic_atexit_destructor_for__ShaderTypes__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ShaderTypes;
  if (_ShaderTypes == (void *)0x0) {
    return;
  }
  if (_ShaderTypes != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderTypes'' @ 1503d5fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FLandscapeMaterialResource::GetLumenCardShaderTypes'::__l2::
_dynamic_atexit_destructor_for__ShaderTypes__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ShaderTypes;
  if (_ShaderTypes == (void *)0x0) {
    return;
  }
  if (_ShaderTypes != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderTypes'' @ 1503d5fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FLandscapeMaterialResource::GetRasterizeShaderTypes'::__l2::
_dynamic_atexit_destructor_for__ShaderTypes__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ShaderTypes;
  if (_ShaderTypes == (void *)0x0) {
    return;
  }
  if (_ShaderTypes != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderTypes'' @ 1503d5ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FLandscapeMaterialResource::GetRuntimeVirtualTextureShaderTypes'::__l2::
_dynamic_atexit_destructor_for__ShaderTypes__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ShaderTypes;
  if (_ShaderTypes == (void *)0x0) {
    return;
  }
  if (_ShaderTypes != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d6010

void __cdecl
`FLandscapeFixedGridUniformShaderParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d6030

void __cdecl
`FLandscapeSectionLODUniformParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d6050

void __cdecl
`FLandscapeUniformShaderParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d6070

void __cdecl
`FLandscapeVertexFactoryMVFParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d6090

void __cdecl
`FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FLandscapeGrassPassParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d60b0

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
`FLandscapeGrassWeightPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d60d0

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
`FLandscapeGrassWeightVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StreamingStatesToProcess'' @ 1503d60f0

void __cdecl
`FLandscapeGrassMapsBuilder::UpdateTrackedComponents'::__l2::
_dynamic_atexit_destructor_for__StreamingStatesToProcess__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StreamingStatesToProcess.AllocatorInstance.Data;
  if (StreamingStatesToProcess.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StreamingStatesToProcess.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 1504df890

bool __thiscall
`TNonNullPtr<FLandscapeGrassWeightExporter>::operator->'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3336850153431630034>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3336850153431630034>,
                       &`public:___cdecl_`public:_class_FLandscapeGrassWeightExporter*___ptr64___cdecl_TNonNullPtr<FLandscapeGrassWeightExporter>::operator->(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

