// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSUtility
// Functions: 60

// OnCreateRenderThreadResources'' @ 1413fd350

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 1413fd370

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ShaderTypeRegistration'' @ 1413fd390

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

void __cdecl `dynamic_initializer_for_'FCreateBiasCurrentColorCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FCreateBiasCurrentColorCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FCreateBiasCurrentColorCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FCreateBiasCurrentColorCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413fd3e0

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

void __cdecl `dynamic_initializer_for_'FGBufferResolvePS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGBufferResolvePS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FGBufferResolvePS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FGBufferResolvePS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1413fd430

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

void __cdecl `dynamic_initializer_for_'FVelocityCombineCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FVelocityCombineCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FVelocityCombineCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FVelocityCombineCS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 1413fd480

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

// StaticResource'' @ 1413fd540

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

// StaticResource'' @ 1413fd600

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

// StaticResource'' @ 1413fd7a0

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

// `dynamic_initializer_for_'CVarNGXDLSSDisableSubsurfaceCheckerboard'' @ 1413fd940

void __cdecl _dynamic_initializer_for__CVarNGXDLSSDisableSubsurfaceCheckerboard__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarNGXDLSSDisableSubsurfaceCheckerboard,L"r.NGX.DLSS.DisableSubsurfaceCheckerboard",
             local_res8,L"Skip checkerboard decoding for GBuffer Resolve Pass\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSDisableSubsurfaceCheckerboard__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDLSSUtility'' @ 1413fd990

void __cdecl _dynamic_initializer_for__ModuleRegistrantDLSSUtility__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DLSSUtility";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DLSSUtility",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDLSSUtilityModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion'' @ 1413fd9e0

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

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesLightCache'' @ 1413fda70

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

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking'' @ 1413fdb00

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

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesShadows'' @ 1413fdb90

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

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering'' @ 1413fdc20

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

// `scalar_deleting_destructor' @ 14de057f0

void * __thiscall
FDLSSUtilityModule::_scalar_deleting_destructor_(FDLSSUtilityModule *this,uint param_1)

{
  *this = (FDLSSUtilityModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AddDrawScreenPass<FGBufferResolvePS> @ 14de05830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
AddDrawScreenPass<FGBufferResolvePS>
          (FRDGBuilder *param_1,FRDGEventName *param_2,FScreenPassViewInfo *param_3,
          FScreenPassTextureViewport *param_4,FScreenPassTextureViewport *param_5,
          TShaderRefBase<FGBufferResolvePS,FShaderMapPointerTable> *param_6,FParameters *param_7,
          EScreenPassDrawFlags param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TRefCountPtr<FRHIBlendState> TVar4;
  TRefCountPtr<FRHIDepthStencilState> TVar5;
  bool bVar6;
  FGlobalShaderMap *this;
  FShaderType *pFVar7;
  FName this_00;
  FShaderParametersMetadata *pFVar8;
  undefined1 local_res18 [8];
  FScreenPassTextureViewport *local_res20;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_188;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_178;
  FShader *local_168;
  FShaderMapBase *pFStack_160;
  FGBufferResolvePS *local_158;
  FShaderMapBase *pFStack_150;
  FRHIBlendState *local_148;
  FRHIDepthStencilState *pFStack_140;
  undefined8 local_138;
  undefined1 uStack_130;
  uint7 uStack_12f;
  FString local_120;
  initializer_list<FRDGResource_*> local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  TIntPoint<int>_u_0 local_e8;
  TIntPoint<int>_u_0 local_e0;
  TIntPoint<int>_u_0 local_d8;
  TIntPoint<int>_u_0 local_d0;
  TIntPoint<int>_u_0 local_c8;
  TIntPoint<int>_u_0 local_c0;
  FShader *local_b8;
  FShaderMapBase *pFStack_b0;
  FGBufferResolvePS *local_a8;
  FShaderMapBase *pFStack_a0;
  FRHIBlendState *local_98;
  FRHIDepthStencilState *pFStack_90;
  undefined8 local_88;
  longlong lStack_80;
  FGBufferResolvePS *local_78;
  FShaderMapBase *pFStack_70;
  FParameters *local_68;
  EScreenPassDrawFlags local_60;
  
  local_res20 = param_4;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3->FeatureLevel]);
  pFVar7 = (FShaderType *)FScreenPassVS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_188,pFVar7,0);
  if (local_188.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    FName::ToString((FName *)this_00,&local_120);
    FScreenPassVS::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FScreenPassVS::GetStaticType();
  TVar5 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI;
  TVar4 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
          ::StaticResource.StateRHI;
  uVar2._0_4_ = param_3->FeatureLevel;
  uVar2._4_4_ = param_3->StereoViewIndex;
  uVar3._0_4_ = param_3->InstanceCount;
  uVar3._4_1_ = param_3->bHMDHiddenAreaMaskActive;
  uVar3._5_3_ = *(undefined3 *)&param_3->field_0xd;
  if ((local_188.ShaderContent == (FShader *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("VertexShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x206,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_6->ShaderContent == (FGBufferResolvePS *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x207,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_7 == (FParameters *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("PixelShaderParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x208,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar8 = FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata();
  local_178.ShaderContent = (FShader *)param_6->ShaderContent;
  local_178.ShaderMap = param_6->ShaderMap;
  ValidateShaderParameters(&local_178,pFVar8,param_7);
  local_108._First = (FRDGResource **)0x0;
  local_108._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_6->ShaderContent,pFVar8,param_7,&local_108);
  local_158 = param_6->ShaderContent;
  pFStack_150 = param_6->ShaderMap;
  local_138 = GFilterVertexDeclaration._32_8_;
  local_e8 = (local_res20->Extent).field0_0x0;
  local_e0 = (local_res20->Rect).field0_0x0._s_0.Min.field0_0x0;
  local_d8 = (local_res20->Rect).field0_0x0._s_0.Max.field0_0x0;
  local_168 = local_188.ShaderContent;
  local_d0 = (param_5->Extent).field0_0x0;
  local_c8 = (param_5->Rect).field0_0x0._s_0.Min.field0_0x0;
  local_c0 = (param_5->Rect).field0_0x0._s_0.Max.field0_0x0;
  pFStack_160 = local_188.ShaderMap;
  local_b8 = local_188.ShaderContent;
  pFStack_b0 = local_188.ShaderMap;
  local_148 = TVar4.Reference;
  pFStack_140 = TVar5.Reference;
  local_98 = TVar4.Reference;
  pFStack_90 = TVar5.Reference;
  uStack_130 = 0;
  local_78 = param_6->ShaderContent;
  pFStack_70 = param_6->ShaderMap;
  local_60 = param_8;
  lStack_80 = (ulonglong)uStack_12f << 8;
  local_68 = param_7;
  local_88 = GFilterVertexDeclaration._32_8_;
  local_f8 = uVar2;
  uStack_f0 = uVar3;
  local_a8 = local_158;
  pFStack_a0 = pFStack_150;
  pFVar8 = FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FGBufferResolvePS::FParameters,_AddDrawScreenPass<FGBufferResolvePS>_::__l2::<lambda_1>_>
            (param_1,param_2,pFVar8,param_7,Raster,(<lambda_1> *)&local_f8);
  return;
}

// AddPass<`FComputeShaderUtils::AddPass<FCreateBiasCurrentColorCS>'::__l2::<lambda_1>_> @ 14de05b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FCreateBiasCurrentColorCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCreateBiasCurrentColorCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCreateBiasCurrentColorCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCreateBiasCurrentColorCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandTextureCopyCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<`FComputeShaderUtils::AddPass<FVelocityCombineCS>'::__l2::<lambda_1>_> @ 14de05c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FVelocityCombineCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFVelocityCombineCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFVelocityCombineCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FVelocityCombineCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandTextureDilationCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<FGBufferResolvePS::FParameters,`AddDrawScreenPass<FGBufferResolvePS>'::__l2::<lambda_1>_> @ 14de06080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FGBufferResolvePS::FParameters,_AddDrawScreenPass<FGBufferResolvePS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  FShaderParametersMetadata *pFVar1;
  FRDGPass *pFVar2;
  
  pFVar1 = FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar2 = AddPassInternal<FGBufferResolvePS::FParameters,_AddDrawScreenPass<FGBufferResolvePS>_::__l2::<lambda_1>_>
                     (this,param_1,pFVar1,param_2,param_3,param_4);
  return pFVar2;
}

// AddPassInternal<FGBufferResolvePS::FParameters,`AddDrawScreenPass<FGBufferResolvePS>'::__l2::<lambda_1>_> @ 14de06350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FGBufferResolvePS::FParameters,_AddDrawScreenPass<FGBufferResolvePS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
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
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x228,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FRDGPass *)(*pcVar3)();
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
       ___7__TRDGLambdaPass_VFParameters_FGBufferResolvePS__V<lambda_1>__1____AddDrawScreenPass_VFGBufferResolvePS____YAXAEAVFRDGBuilder____QEAVFRDGEventName__UFScreenPassViewInfo__AEBVFScreenPassTextureViewport__3AEBV__TShaderRefBase_VFShader__VFShaderMapPointerTable____AEBV__TShaderRefBase_VFGBufferResolvePS__VFShaderMapPointerTable____PEAVFRHIBlendState__PEAVFRHIDepthStencilState__PEAV12_W4EScreenPassDrawFlags___Z___6B_
  ;
  pFVar4 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar10[1]._padding_ = *(longlong *)param_5;
  pFVar10[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar4;
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  pFVar10[1].FullPathIfDebug.Data.ArrayNum = (int)uVar2;
  pFVar10[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].Name.EventFormat = *(wchar_t **)(param_5 + 0x18);
  pFVar10[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(param_5 + 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  pFVar10[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar2;
  pFVar10[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].ParameterStruct.Contents = *(uchar **)(param_5 + 0x30);
  pFVar10[1].ParameterStruct.Layout.Reference = *(FRHIUniformBufferLayout **)(param_5 + 0x38);
  uVar2 = *(undefined8 *)(param_5 + 0x48);
  pFVar10[1].ParameterStruct.Metadata = *(FShaderParametersMetadata **)(param_5 + 0x40);
  pFVar10[1].Flags = (short)uVar2;
  pFVar10[1].TaskMode = (char)((ulonglong)uVar2 >> 0x10);
  pFVar10[1].Pipeline = (char)((ulonglong)uVar2 >> 0x18);
  pFVar10[1].Handle = (TRDGHandle<FRDGPass,unsigned_int>)(int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x50);
  uVar5 = *(undefined8 *)(param_5 + 0x58);
  pFVar10[1].Workload = (int)uVar2;
  pFVar10[1].field9_0x54 = (FRDGPass_u_84)(short)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].field10_0x56 = (FRDGPass_u_86)(char)((ulonglong)uVar2 >> 0x30);
  pFVar10[1].field11_0x57 = (FRDGPass_u_87)(char)((ulonglong)uVar2 >> 0x38);
  pFVar10[1].CrossPipelineProducer = (TRDGHandle<FRDGPass,unsigned_int>)(int)uVar5;
  pFVar10[1].GraphicsForkPass = (TRDGHandle<FRDGPass,unsigned_int>)(int)((ulonglong)uVar5 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x60);
  uVar5 = *(undefined8 *)(param_5 + 0x68);
  pFVar10[1].GraphicsJoinPass = (TRDGHandle<FRDGPass,unsigned_int>)(int)uVar2;
  pFVar10[1].PrologueBarrierPass =
       (TRDGHandle<FRDGPass,unsigned_int>)(int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].EpilogueBarrierPass = (TRDGHandle<FRDGPass,unsigned_int>)(int)uVar5;
  pFVar10[1].NumTransitionsToReserve = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x78);
  pFVar10[1].CrossPipelineConsumers.AllocatorInstance.Data =
       *(TRDGHandle<FRDGPass,unsigned_int> **)(param_5 + 0x70);
  pFVar10[1].CrossPipelineConsumers.ArrayNum = (int)uVar2;
  pFVar10[1].CrossPipelineConsumers.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x88);
  pFVar10[1].Producers.AllocatorInstance.Data = *(FRDGPass ***)(param_5 + 0x80);
  pFVar10[1].Producers.ArrayNum = (int)uVar2;
  pFVar10[1].Producers.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
  pFVar10[1].TextureStates.AllocatorInstance.Data = *(FTextureState **)(param_5 + 0x90);
  *(<lambda_1> *)&pFVar10[1].TextureStates.ArrayNum = param_5[0x98];
  pFVar10[1].BufferStates.AllocatorInstance.Data = (FBufferState *)param_3;
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FCreateBiasCurrentColorCS>'::__l2::<lambda_1>_> @ 14de06560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FCreateBiasCurrentColorCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCreateBiasCurrentColorCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCreateBiasCurrentColorCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCreateBiasCurrentColorCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandTextureCopyCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FVelocityCombineCS>'::__l2::<lambda_1>_> @ 14de066f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FVelocityCombineCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFVelocityCombineCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFVelocityCombineCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FVelocityCombineCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandTextureDilationCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// BindForLegacyShaderParameters<FCreateBiasCurrentColorCS::FParameters> @ 14de06d80

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
BindForLegacyShaderParameters<FCreateBiasCurrentColorCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FCreateBiasCurrentColorCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FGBufferResolvePS::FParameters> @ 14de06de0

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
BindForLegacyShaderParameters<FGBufferResolvePS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FVelocityCombineCS::FParameters> @ 14de06e40

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
BindForLegacyShaderParameters<FVelocityCombineCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<FCreateBiasCurrentColorCS> @ 14de06ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FCreateBiasCurrentColorCS>
          (TShaderRefBase<FCreateBiasCurrentColorCS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FGBufferResolvePS> @ 14de06f20

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
ClearUnusedGraphResources<FGBufferResolvePS>
          (TShaderRefBase<FGBufferResolvePS,FShaderMapPointerTable> *param_1,FParameters *param_2,
          initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata();
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

// ClearUnusedGraphResources<FGBufferResolvePS> @ 14de06fa0

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
ClearUnusedGraphResources<FGBufferResolvePS>
          (TShaderRefBase<FGBufferResolvePS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FVelocityCombineCS> @ 14de07020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FVelocityCombineCS>
          (TShaderRefBase<FVelocityCombineCS,FShaderMapPointerTable> *param_1,
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

// DrawScreenPass<``AddDrawScreenPass<FGBufferResolvePS>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14de070a0

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
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
DrawScreenPass<__AddDrawScreenPass<FGBufferResolvePS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FRHICommandList *param_1,FScreenPassViewInfo *param_2,FScreenPassTextureViewport *param_3
          ,FScreenPassTextureViewport *param_4,FScreenPassPipelineState *param_5,
          EScreenPassDrawFlags param_6,<lambda_1> *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TShaderRefBase<FGBufferResolvePS,FShaderMapPointerTable> *pTVar4;
  FParameters *pFVar5;
  FShaderMapResource *this;
  FShader *this_00;
  FShaderMapBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  IRHICommandContext *pIVar9;
  undefined8 *puVar10;
  atomic<FRHIShader_*> aVar11;
  FShaderParametersMetadata *pFVar12;
  atomic<FRHIShader_*> aVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88 [5];
  
  if (((param_5->VertexShader).ShaderContent == (FShader *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("VertexShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,400,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((param_5->PixelShader).ShaderContent == (FShader *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x191,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_5->BlendState == (FRHIBlendState *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("BlendState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x192,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_5->DepthStencilState == (FRHIDepthStencilState *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("DepthStencilState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x193,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_5->VertexDeclaration == (FRHIVertexDeclaration *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("VertexDeclaration",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x194,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar2 = *(undefined8 *)((longlong)&(param_3->Rect).field0_0x0 + 8);
  aVar13 = (atomic<FRHIShader_*>)0x0;
  uVar3 = *(undefined8 *)&(param_3->Rect).field0_0x0;
  fVar14 = (float)(int)((ulonglong)uVar2 >> 0x20);
  fVar16 = (float)(int)((ulonglong)uVar3 >> 0x20);
  fVar15 = (float)(int)uVar2;
  fVar17 = (float)(int)uVar3;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar10;
    *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar10 + 2) = fVar17;
    *(float *)((longlong)puVar10 + 0x14) = fVar16;
    *(float *)((longlong)puVar10 + 0x1c) = fVar15;
    *(float *)(puVar10 + 4) = fVar14;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  }
  else {
    pIVar9 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar9->_padding_ + 0x1a0))(pIVar9,fVar17,fVar16,0,fVar15,fVar14,__real_3f800000);
  }
  SetScreenPassPipelineState(param_1,param_5);
  pTVar4 = param_7->PixelShader;
  pFVar5 = *param_7->PixelShaderParameters;
  aVar11 = aVar13;
  if (pTVar4->ShaderContent != (FGBufferResolvePS *)0x0) {
    this = (pTVar4->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar1 = *(int *)&pTVar4->ShaderContent->field_0xd4;
    aVar11 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar11 == (atomic<FRHIShader_*>)0x0) &&
        (aVar11 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar11 == (atomic<FRHIShader_*>)0x0)) && (aVar11 = aVar13, 4 < (byte)LogShaders._0_1_)) {
      this_00 = (FShader *)pTVar4->ShaderContent;
      pFVar6 = pTVar4->ShaderMap;
      if ((pFVar6->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FShader::GetType(this_00,pFVar6->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGBufferResolvePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar12 = FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata();
  local_88[0].ShaderContent = (FShader *)pTVar4->ShaderContent;
  local_88[0].ShaderMap = pTVar4->ShaderMap;
  ValidateShaderParameters(local_88,pFVar12,pFVar5);
  SetShaderParameters(param_7->RHICmdList,(FRHIGraphicsShader *)aVar11,
                      (FShaderParameterBindings *)pTVar4->ShaderContent,pFVar12,pFVar5);
  DrawScreenPass_PostSetup(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// operator() @ 14de07900

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

void __thiscall
`AddDrawScreenPass<FGBufferResolvePS>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScreenPassViewInfo local_38;
  <lambda_1> local_28;
  
  local_38._0_8_ = *(undefined8 *)this;
  local_38._8_8_ = *(undefined8 *)((longlong)this + 8);
  local_28.PixelShader =
       (TShaderRefBase<FGBufferResolvePS,FShaderMapPointerTable> *)((longlong)this + 0x80);
  local_28.PixelShaderParameters = (FParameters **)((longlong)this + 0x90);
  local_28.RHICmdList = param_2;
  DrawScreenPass<__AddDrawScreenPass<FGBufferResolvePS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_38,(FScreenPassTextureViewport *)((longlong)this + 0x10),
             (FScreenPassTextureViewport *)((longlong)this + 0x28),
             (FScreenPassPipelineState *)((longlong)this + 0x40),
             *(EScreenPassDrawFlags *)((longlong)this + 0x98),&local_28);
  return;
}

// `scalar_deleting_destructor' @ 14de07bf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FCreateBiasCurrentColorCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FCreateBiasCurrentColorCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de07c20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FGBufferResolvePS::FParameters>::_scalar_deleting_destructor_
          (TObject<FGBufferResolvePS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de07c50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FVelocityCombineCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FVelocityCombineCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de07c80

void * __thiscall
TRDGLambdaPass<FGBufferResolvePS::FParameters,`AddDrawScreenPass<FGBufferResolvePS>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de07ce0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FCreateBiasCurrentColorCS>'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 14de07d40

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FVelocityCombineCS>'::__l2::<lambda_1>_>::
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

// AddBiasCurrentColorPass @ 14de07da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRDGTexture * __cdecl
AddBiasCurrentColorPass
          (FRDGBuilder *param_1,FSceneView *param_2,TIntRect<int> *param_3,FRDGTexture *param_4,
          uint param_5)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  TIntPoint<int> TVar5;
  FRDGTexture *pFVar6;
  FRDGBuilder *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FRDGTexture *pFVar12;
  FParameters *pFVar13;
  FRDGTextureSRV *pFVar14;
  FRDGTextureUAV *pFVar15;
  FGlobalShaderMap *pFVar16;
  FRDGEventName *pFVar17;
  FShaderParametersMetadata *pFVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auStackY_288 [32];
  FRDGTextureSRVDesc local_248;
  TShaderRefBase<FCreateBiasCurrentColorCS,FShaderMapPointerTable> local_230;
  TIntVector3<int>_u_0 local_218;
  int local_208;
  int iStack_204;
  FRDGBuilder *local_200;
  undefined8 local_1f8;
  FSceneView *local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  TIntPoint<int>_u_0 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  TIntPoint<int>_u_0 local_1c0;
  TIntPoint<int>_u_0 local_1b8;
  undefined8 local_1b0;
  TIntPoint<int>_u_0 local_1a8;
  FRDGEventName local_198;
  TVector2<float>_u_0 local_178;
  TVector2<float>_u_0 TStack_170;
  TVector2<float>_u_0 local_168;
  TVector2<float>_u_0 TStack_160;
  TIntPoint<int>_u_0 local_158;
  TIntPoint<int>_u_0 TStack_150;
  TVector2<float>_u_0 local_148;
  TVector2<float>_u_0 TStack_140;
  TVector2<float>_u_0 local_138;
  TVector2<float>_u_0 TStack_130;
  TVector2<float>_u_0 local_128;
  TVector2<float>_u_0 TStack_120;
  TVector2<float>_u_0 local_118;
  TVector2<float>_u_0 TStack_110;
  TVector2<float>_u_0 local_108;
  TVector2<float>_u_0 TStack_100;
  TVector2<float>_u_0 local_f8;
  TVector2<float>_u_0 TStack_f0;
  TIntPoint<int>_u_0 local_e8;
  TIntPoint<int>_u_0 TStack_e0;
  TVector2<float>_u_0 local_d8;
  TVector2<float>_u_0 TStack_d0;
  TVector2<float>_u_0 local_c8;
  TVector2<float>_u_0 TStack_c0;
  TVector2<float>_u_0 local_b8;
  TVector2<float>_u_0 TStack_b0;
  TVector2<float>_u_0 local_a8;
  TVector2<float>_u_0 TStack_a0;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  TVar5.field0_0x0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar9 = *(int *)((longlong)&param_3->field0_0x0 + 0xc) -
          *(int *)((longlong)&param_3->field0_0x0 + 4);
  local_1e0 = (ulonglong)uVar9;
  uVar19 = *(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0;
  local_1e8 = (ulonglong)uVar19;
  local_1f8 = CONCAT44(uVar9,uVar19);
  local_230.ShaderContent = (FCreateBiasCurrentColorCS *)CONCAT44(uVar9,uVar19);
  iVar22 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
  local_208 = uVar19 - iVar22;
  iVar20 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
  iStack_204 = uVar9 - iVar20;
  local_80 = FClearValueBinding::Black.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_74._4_4_ = iStack_204;
  local_74._0_4_ = local_208;
  local_4c = 1;
  local_1a8 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_98._0_8_ = 0x20008;
  local_98._8_8_ = FClearValueBinding::Black._0_8_;
  local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_78 = 0;
  local_6c = 0x10001;
  local_68 = 0x15000101;
  local_64 = 0xff00;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_218._0_8_ = param_3;
  local_200 = param_1;
  local_1f0 = param_2;
  pFVar12 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_98,L"DLSSBiasCurrentColor",None);
  pFVar13 = FRDGBuilder::AllocParameters<FCreateBiasCurrentColorCS::FParameters>(param_1);
  local_248._padding_._2_1_ = (param_4->Desc).field_0x30;
  cVar2 = (param_4->Desc).field_0x32;
  local_248._padding_._1_1_ = 0;
  local_248._padding_._3_1_ = 0;
  local_248._padding_._6_2_ = 0;
  local_248._padding_._0_1_ = 0;
  local_248._padding_._2_1_ = '\0';
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    local_248._padding_._6_2_ = *(undefined2 *)&(param_4->Desc).field_0x2e;
  }
  local_248._padding_._4_2_ = 0;
  local_230.ShaderContent = (FCreateBiasCurrentColorCS *)&param_1->UserValidation;
  local_248._padding_._0_1_ = 0x2c;
  local_248.Texture = param_4;
  FRDGUserValidation::ValidateCreateSRV((FRDGUserValidation *)local_230.ShaderContent,&local_248);
  pFVar6 = local_248.Texture;
  pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
  lVar3 = pFVar6->_padding_;
  *(byte *)&pFVar14->_padding_ = (byte)pFVar14->_padding_ & 0xfe;
  pFVar14->_padding_ = lVar3;
  pFVar14->_padding_ = 0;
  *(undefined1 *)&pFVar14->_padding_ = 1;
  *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0xffffffffffffffff;
  pFVar14->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
  *(undefined1 *)&(pFVar14->Desc)._padding_ = (undefined1)local_248._padding_;
  *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 1) = local_248._padding_._1_1_;
  *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 2) = local_248._padding_._2_1_;
  *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 3) = local_248._padding_._3_1_;
  *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 4) = local_248._padding_._4_2_;
  *(undefined2 *)((longlong)&(pFVar14->Desc)._padding_ + 6) = local_248._padding_._6_2_;
  *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 2) = 0;
  *(undefined1 *)&(pFVar14->Desc)._padding_ = (undefined1)local_248._padding_;
  *(char *)((longlong)&(pFVar14->Desc)._padding_ + 2) = local_248._padding_._2_1_;
  if (local_248._padding_._2_1_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar14->Desc)._padding_ + 1) = local_248._padding_._1_1_;
  }
  piVar1 = &(param_1->Views).Array.ArrayMax;
  (pFVar14->Desc).Texture = local_248.Texture;
  iVar10 = (param_1->Views).Array.ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                       (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
  }
  (param_1->Views).Array.ArrayNum = iVar10 + 1;
  (param_1->Views).Array.AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar14;
  *(int *)((longlong)&pFVar14->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateSRV((FRDGUserValidation *)local_230.ShaderContent,pFVar14);
  pFVar13->StencilTexture = pFVar14;
  iVar10 = (param_4->VisualizeTextureExtent).field0_0x0._s_0.X;
  local_1c8 = *(undefined8 *)(local_218._0_8_ + 8);
  local_1d0 = *(undefined8 *)local_218._0_8_;
  iVar23 = (int)local_1c8;
  iVar11 = iVar23;
  if (iVar23 < iVar10) {
    iVar11 = iVar10;
  }
  iVar10 = (param_4->VisualizeTextureExtent).field0_0x0._s_0.Y;
  (param_4->VisualizeTextureExtent).field0_0x0._s_0.X = iVar11;
  iVar21 = (int)((ulonglong)local_1c8 >> 0x20);
  iVar11 = iVar21;
  if (iVar21 < iVar10) {
    iVar11 = iVar10;
  }
  (param_4->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar11;
  if ((iVar23 == (int)local_1d0) && (iVar21 == (int)((ulonglong)local_1d0 >> 0x20))) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("InTexture.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                       ,0xab,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FRDGTexture *)(*pcVar4)();
      return pFVar12;
    }
  }
  local_1d8 = *(TIntPoint<int>_u_0 *)&(param_4->Desc).field_0x24;
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_178._s_0,
             (FScreenPassTextureViewport *)&local_1d8._s_0);
  pFVar7 = local_200;
  (pFVar13->DepthStencil).Extent.field0_0x0 = local_178;
  (pFVar13->DepthStencil).ExtentInverse.field0_0x0 = TStack_170;
  pFVar13->CustomOffset = param_5;
  (pFVar13->DepthStencil).ScreenPosToViewportScale.field0_0x0 = local_168;
  (pFVar13->DepthStencil).ScreenPosToViewportBias.field0_0x0 = TStack_160;
  (pFVar13->DepthStencil).ViewportMin.field0_0x0 = local_158;
  (pFVar13->DepthStencil).ViewportMax.field0_0x0 = TStack_150;
  (pFVar13->DepthStencil).ViewportSize.field0_0x0 = local_148;
  (pFVar13->DepthStencil).ViewportSizeInverse.field0_0x0 = TStack_140;
  (pFVar13->DepthStencil).UVViewportMin.field0_0x0 = local_138;
  (pFVar13->DepthStencil).UVViewportMax.field0_0x0 = TStack_130;
  (pFVar13->DepthStencil).UVViewportSize.field0_0x0 = local_128;
  (pFVar13->DepthStencil).UVViewportSizeInverse.field0_0x0 = TStack_120;
  (pFVar13->DepthStencil).UVViewportBilinearMin.field0_0x0 = local_118;
  (pFVar13->DepthStencil).UVViewportBilinearMax.field0_0x0 = TStack_110;
  pFVar15 = FRDGBuilder::CreateUAV(local_200,pFVar12,None,PF_Unknown);
  local_1b0 = local_1f8;
  pFVar13->OutBiasCurrentColorTexture = pFVar15;
  if (pFVar12 != (FRDGTexture *)0x0) {
    iVar10 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar23 = (int)local_1f8;
    iVar11 = iVar23;
    if (iVar23 < iVar10) {
      iVar11 = iVar10;
    }
    iVar10 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X = iVar11;
    iVar21 = (int)((ulonglong)local_1f8 >> 0x20);
    iVar11 = iVar21;
    if (iVar21 < iVar10) {
      iVar11 = iVar10;
    }
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar11;
    if ((iVar23 != iVar22) || (iVar21 != iVar20)) goto LAB_14de0819e;
  }
  bVar8 = FDebug::CheckVerifyFailedImpl2
                    ("InTexture.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                     ,0xab,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FRDGTexture *)(*pcVar4)();
    return pFVar12;
  }
LAB_14de0819e:
  local_1c0 = *(TIntPoint<int>_u_0 *)&(pFVar12->Desc).field_0x24;
  local_1b8 = TVar5.field0_0x0;
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_108._s_0,
             (FScreenPassTextureViewport *)&local_1c0._s_0);
  (pFVar13->BiasCurrentColor).Extent.field0_0x0 = local_108;
  (pFVar13->BiasCurrentColor).ExtentInverse.field0_0x0 = TStack_100;
  (pFVar13->BiasCurrentColor).ScreenPosToViewportScale.field0_0x0 = local_f8;
  (pFVar13->BiasCurrentColor).ScreenPosToViewportBias.field0_0x0 = TStack_f0;
  (pFVar13->BiasCurrentColor).ViewportMin.field0_0x0 = local_e8;
  (pFVar13->BiasCurrentColor).ViewportMax.field0_0x0 = TStack_e0;
  (pFVar13->BiasCurrentColor).ViewportSize.field0_0x0 = local_d8;
  (pFVar13->BiasCurrentColor).ViewportSizeInverse.field0_0x0 = TStack_d0;
  (pFVar13->BiasCurrentColor).UVViewportMin.field0_0x0 = local_c8;
  (pFVar13->BiasCurrentColor).UVViewportMax.field0_0x0 = TStack_c0;
  (pFVar13->BiasCurrentColor).UVViewportSize.field0_0x0 = local_b8;
  (pFVar13->BiasCurrentColor).UVViewportSizeInverse.field0_0x0 = TStack_b0;
  (pFVar13->BiasCurrentColor).UVViewportBilinearMin.field0_0x0 = local_a8;
  (pFVar13->BiasCurrentColor).UVViewportBilinearMax.field0_0x0 = TStack_a0;
  pFVar16 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [(int)local_1f0->FeatureLevel]);
  TShaderMapRef<FCreateBiasCurrentColorCS>::TShaderMapRef<FCreateBiasCurrentColorCS>
            ((TShaderMapRef<FCreateBiasCurrentColorCS> *)&local_230,pFVar16);
  iVar10 = (int)local_1e0 - local_1a8._4_4_;
  iVar20 = (int)local_1e8;
  pFVar17 = FRDGEventName::FRDGEventName
                      (&local_198,L"Create BiasCurrentColorMask %s (%dx%d -> %dx%d)");
  pFVar18 = FCreateBiasCurrentColorCS::FParameters::FTypeInfo::GetStructMetadata();
  local_218._s_0.Z = 1;
  iVar20 = (iVar20 - iVar22) + 7;
  iVar10 = iVar10 + 7;
  local_218._s_0.Y = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3;
  local_218._s_0.X = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
  FComputeShaderUtils::AddPass<FCreateBiasCurrentColorCS>
            (pFVar7,pFVar17,Compute,&local_230,pFVar18,pFVar13,(TIntVector3<int> *)&local_218._s_0);
  if (local_198.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return pFVar12;
}

// AddBiasCurrentColorPass @ 14de08350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRDGTexture * __cdecl
AddBiasCurrentColorPass
          (FRDGBuilder *param_1,FSceneView *param_2,TIntRect<int> *param_3,
          FCustomDepthTextures *param_4,uchar param_5)

{
  uint uVar1;
  code *pcVar2;
  TIntPoint<int> TVar3;
  FRDGBuilder *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FRDGTexture *pFVar8;
  FParameters *pFVar9;
  FRDGTexture *pFVar10;
  FRDGTextureUAV *pFVar11;
  FGlobalShaderMap *pFVar12;
  FRDGEventName *pFVar13;
  FShaderParametersMetadata *pFVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auStackY_268 [32];
  int local_228;
  TIntVector3<int>_u_0 local_218;
  FRDGBuilder *local_208;
  FSceneView *local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  TIntPoint<int>_u_0 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  TIntPoint<int>_u_0 local_1d0;
  TIntPoint<int>_u_0 local_1c8;
  undefined8 local_1c0;
  TIntPoint<int>_u_0 local_1b8;
  TShaderRefBase<FCreateBiasCurrentColorCS,FShaderMapPointerTable> local_1a8;
  FRDGEventName local_198;
  TVector2<float>_u_0 local_178;
  TVector2<float>_u_0 TStack_170;
  TVector2<float>_u_0 local_168;
  TVector2<float>_u_0 TStack_160;
  TIntPoint<int>_u_0 local_158;
  TIntPoint<int>_u_0 TStack_150;
  TVector2<float>_u_0 local_148;
  TVector2<float>_u_0 TStack_140;
  TVector2<float>_u_0 local_138;
  TVector2<float>_u_0 TStack_130;
  TVector2<float>_u_0 local_128;
  TVector2<float>_u_0 TStack_120;
  TVector2<float>_u_0 local_118;
  TVector2<float>_u_0 TStack_110;
  TVector2<float>_u_0 local_108;
  TVector2<float>_u_0 TStack_100;
  TVector2<float>_u_0 local_f8;
  TVector2<float>_u_0 TStack_f0;
  TIntPoint<int>_u_0 local_e8;
  TIntPoint<int>_u_0 TStack_e0;
  TVector2<float>_u_0 local_d8;
  TVector2<float>_u_0 TStack_d0;
  TVector2<float>_u_0 local_c8;
  TVector2<float>_u_0 TStack_c0;
  TVector2<float>_u_0 local_b8;
  TVector2<float>_u_0 TStack_b0;
  TVector2<float>_u_0 local_a8;
  TVector2<float>_u_0 TStack_a0;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  TVar3.field0_0x0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar6 = *(int *)((longlong)&param_3->field0_0x0 + 0xc) -
          *(int *)((longlong)&param_3->field0_0x0 + 4);
  local_1f0 = (ulonglong)uVar6;
  uVar15 = *(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0;
  local_1f8 = (ulonglong)uVar15;
  uVar18 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
  local_78 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 1;
  local_1b8 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_98._0_8_ = 0x20008;
  uVar16 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
  local_6c = 0x10001;
  local_80 = FClearValueBinding::Black.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_68 = 0x15000101;
  local_74._4_4_ = uVar6 - uVar16;
  local_74._0_4_ = uVar15 - uVar18;
  local_98._8_8_ = FClearValueBinding::Black._0_8_;
  local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_64 = 0xff00;
  local_208 = param_1;
  local_200 = param_2;
  pFVar8 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_98,L"DLSSBiasCurrentColor",None);
  pFVar9 = FRDGBuilder::AllocParameters<FCreateBiasCurrentColorCS::FParameters>(param_1);
  pFVar10 = param_4->Depth;
  pFVar9->StencilTexture = param_4->Stencil;
  local_1e0 = *(undefined8 *)&param_3->field0_0x0;
  local_1d8 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  if (pFVar10 == (FRDGTexture *)0x0) {
LAB_14de084ef:
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("InTexture.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                       ,0xab,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FRDGTexture *)(*pcVar2)();
      return pFVar10;
    }
  }
  else {
    iVar19 = (pFVar10->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar20 = (int)local_1d8;
    iVar21 = iVar20;
    if (iVar20 < iVar19) {
      iVar21 = iVar19;
    }
    iVar19 = (pFVar10->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar10->VisualizeTextureExtent).field0_0x0._s_0.X = iVar21;
    iVar17 = (int)((ulonglong)local_1d8 >> 0x20);
    iVar21 = iVar17;
    if (iVar17 < iVar19) {
      iVar21 = iVar19;
    }
    (pFVar10->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar21;
    local_228 = (int)local_1e0;
    if ((iVar20 == local_228) && (iVar17 == (int)((ulonglong)local_1e0 >> 0x20)))
    goto LAB_14de084ef;
  }
  local_1e8 = *(TIntPoint<int>_u_0 *)&(pFVar10->Desc).field_0x24;
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_178._s_0,
             (FScreenPassTextureViewport *)&local_1e8._s_0);
  pFVar4 = local_208;
  (pFVar9->DepthStencil).Extent.field0_0x0 = local_178;
  (pFVar9->DepthStencil).ExtentInverse.field0_0x0 = TStack_170;
  pFVar9->CustomOffset = (uint)param_5;
  (pFVar9->DepthStencil).ScreenPosToViewportScale.field0_0x0 = local_168;
  (pFVar9->DepthStencil).ScreenPosToViewportBias.field0_0x0 = TStack_160;
  (pFVar9->DepthStencil).ViewportMin.field0_0x0 = local_158;
  (pFVar9->DepthStencil).ViewportMax.field0_0x0 = TStack_150;
  (pFVar9->DepthStencil).ViewportSize.field0_0x0 = local_148;
  (pFVar9->DepthStencil).ViewportSizeInverse.field0_0x0 = TStack_140;
  (pFVar9->DepthStencil).UVViewportMin.field0_0x0 = local_138;
  (pFVar9->DepthStencil).UVViewportMax.field0_0x0 = TStack_130;
  (pFVar9->DepthStencil).UVViewportSize.field0_0x0 = local_128;
  (pFVar9->DepthStencil).UVViewportSizeInverse.field0_0x0 = TStack_120;
  (pFVar9->DepthStencil).UVViewportBilinearMin.field0_0x0 = local_118;
  (pFVar9->DepthStencil).UVViewportBilinearMax.field0_0x0 = TStack_110;
  pFVar11 = FRDGBuilder::CreateUAV(local_208,pFVar8,None,PF_Unknown);
  pFVar9->OutBiasCurrentColorTexture = pFVar11;
  if (pFVar8 != (FRDGTexture *)0x0) {
    uVar1 = (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.X;
    uVar7 = uVar15;
    if ((int)uVar15 < (int)uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.X = uVar7;
    uVar7 = uVar6;
    if ((int)uVar6 < (int)uVar1) {
      uVar7 = uVar1;
    }
    (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.Y = uVar7;
    if ((uVar15 != uVar18) || (uVar6 != uVar16)) goto LAB_14de0860d;
  }
  bVar5 = FDebug::CheckVerifyFailedImpl2
                    ("InTexture.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                     ,0xab,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FRDGTexture *)(*pcVar2)();
    return pFVar10;
  }
LAB_14de0860d:
  local_1d0 = *(TIntPoint<int>_u_0 *)&(pFVar8->Desc).field_0x24;
  local_1c8 = TVar3.field0_0x0;
  local_1c0 = CONCAT44(uVar6,uVar15);
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_108._s_0,
             (FScreenPassTextureViewport *)&local_1d0._s_0);
  (pFVar9->BiasCurrentColor).Extent.field0_0x0 = local_108;
  (pFVar9->BiasCurrentColor).ExtentInverse.field0_0x0 = TStack_100;
  (pFVar9->BiasCurrentColor).ScreenPosToViewportScale.field0_0x0 = local_f8;
  (pFVar9->BiasCurrentColor).ScreenPosToViewportBias.field0_0x0 = TStack_f0;
  (pFVar9->BiasCurrentColor).ViewportMin.field0_0x0 = local_e8;
  (pFVar9->BiasCurrentColor).ViewportMax.field0_0x0 = TStack_e0;
  (pFVar9->BiasCurrentColor).ViewportSize.field0_0x0 = local_d8;
  (pFVar9->BiasCurrentColor).ViewportSizeInverse.field0_0x0 = TStack_d0;
  (pFVar9->BiasCurrentColor).UVViewportMin.field0_0x0 = local_c8;
  (pFVar9->BiasCurrentColor).UVViewportMax.field0_0x0 = TStack_c0;
  (pFVar9->BiasCurrentColor).UVViewportSize.field0_0x0 = local_b8;
  (pFVar9->BiasCurrentColor).UVViewportSizeInverse.field0_0x0 = TStack_b0;
  (pFVar9->BiasCurrentColor).UVViewportBilinearMin.field0_0x0 = local_a8;
  (pFVar9->BiasCurrentColor).UVViewportBilinearMax.field0_0x0 = TStack_a0;
  pFVar12 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [(int)local_200->FeatureLevel]);
  TShaderMapRef<FCreateBiasCurrentColorCS>::TShaderMapRef<FCreateBiasCurrentColorCS>
            ((TShaderMapRef<FCreateBiasCurrentColorCS> *)&local_1a8,pFVar12);
  iVar21 = (int)local_1f0 - local_1b8._4_4_;
  iVar19 = (int)local_1f8;
  pFVar13 = FRDGEventName::FRDGEventName
                      (&local_198,L"Create BiasCurrentColorMask %s (%dx%d -> %dx%d)");
  pFVar14 = FCreateBiasCurrentColorCS::FParameters::FTypeInfo::GetStructMetadata();
  local_218._s_0.Z = 1;
  iVar19 = (iVar19 - uVar18) + 7;
  local_218._s_0.X = (int)(iVar19 + (iVar19 >> 0x1f & 7U)) >> 3;
  iVar21 = iVar21 + 7;
  local_218._s_0.Y = (int)(iVar21 + (iVar21 >> 0x1f & 7U)) >> 3;
  FComputeShaderUtils::AddPass<FCreateBiasCurrentColorCS>
            (pFVar4,pFVar13,Compute,&local_1a8,pFVar14,pFVar9,(TIntVector3<int> *)&local_218._s_0);
  if (local_198.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return pFVar8;
}

// AddGBufferResolvePass @ 14de087b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FGBufferResolveOutputs * __cdecl
AddGBufferResolvePass
          (FGBufferResolveOutputs *__return_storage_ptr__,FRDGBuilder *param_1,FSceneView *param_2,
          FInputs *param_3,TIntRect<int> *param_4,bool param_5)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  FRenderTargetBindingSlots *pFVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  FParameters *pFVar7;
  FShaderParametersMetadata *pFVar8;
  FRDGTexture *pFVar9;
  FGBufferResolveOutputs *pFVar10;
  FGlobalShaderMap *this;
  FShaderType *pFVar11;
  FName this_00;
  FScreenPassTextureViewportParameters *pFVar12;
  FRDGEventName *pFVar13;
  EUniformBufferBindingFlags EVar14;
  undefined1 auStackY_3f8 [32];
  int local_3b8;
  int iStack_3b4;
  TUniformBufferRef<FViewUniformShaderParameters> local_3a8;
  uint uStack_3a0;
  undefined4 uStack_39c;
  FRenderTargetBinding local_398;
  FRenderTargetBinding local_380;
  FRenderTargetBinding local_368;
  FRenderTargetBinding local_350;
  FRenderTargetBinding local_338;
  TIntPoint<int>_u_0 local_320;
  TIntPoint<int>_u_0 local_318;
  TIntPoint<int>_u_0 local_310;
  TIntPoint<int>_u_0 local_308;
  TIntPoint<int>_u_0 local_300;
  TIntPoint<int>_u_0 local_2f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2e8;
  FString local_2d8;
  TShaderRefBase<FGBufferResolvePS,FShaderMapPointerTable> local_2c8;
  FScreenPassViewInfo local_2b8;
  FSceneTextureShaderParameters local_2a8;
  FRDGEventName local_288;
  FScreenPassTextureViewportParameters local_268;
  FScreenPassTextureViewportParameters local_1f8;
  undefined1 local_188 [24];
  float local_170;
  int local_16c;
  undefined4 local_168;
  TIntPoint<int>_u_0 local_164;
  undefined4 local_15c;
  undefined4 local_158;
  undefined2 local_154;
  void *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [24];
  float local_120;
  int local_11c;
  undefined4 local_118;
  TIntPoint<int>_u_0 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [24];
  float local_d0;
  int local_cc;
  undefined4 local_c8;
  TIntPoint<int>_u_0 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  TIntPoint<int>_u_0 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  __return_storage_ptr__->DiffuseAlbedo = (FRDGTexture *)0x0;
  __return_storage_ptr__->SpecularAlbedo = (FRDGTexture *)0x0;
  __return_storage_ptr__->Normals = (FRDGTexture *)0x0;
  __return_storage_ptr__->Roughness = (FRDGTexture *)0x0;
  __return_storage_ptr__->LinearDepth = (FRDGTexture *)0x0;
  pFVar7 = FRDGAllocator::Alloc<FGBufferResolvePS::FParameters>
                     ((FRDGAllocator *)&param_1->_padding_);
  CreateSceneTextureShaderParameters(&local_2a8,param_1,param_2,All);
  *(undefined8 *)&(pFVar7->SceneTextures).SceneTextures = local_2a8.SceneTextures._0_8_;
  *(undefined8 *)&(pFVar7->SceneTextures).SceneTextures.field_0x8 = local_2a8.SceneTextures._8_8_;
  *(undefined8 *)&(pFVar7->SceneTextures).MobileSceneTextures = local_2a8.MobileSceneTextures._0_8_;
  *(undefined8 *)&(pFVar7->SceneTextures).MobileSceneTextures.field_0x8 =
       local_2a8.MobileSceneTextures._8_8_;
  pFVar8 = FViewUniformShaderParameters::GetStructMetadata();
  local_3a8 = param_2->ViewUniformBuffer;
  EVar14 = Static;
  if (pFVar8->BindingFlags != StaticAndShader) {
    EVar14 = pFVar8->BindingFlags;
  }
  uStack_3a0 = CONCAT31(uStack_3a0._1_3_,EVar14);
  *(TUniformBufferRef<FViewUniformShaderParameters> *)&pFVar7->View = local_3a8;
  *(ulonglong *)&(pFVar7->View).field_0x8 = CONCAT44(uStack_39c,uStack_3a0);
  pFVar7->PreIntegratedGF = *(FRHITexture **)(GSystemTextures._104_8_ + 8);
  pFVar7->PreIntegratedGFSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  local_3b8 = *(int *)((longlong)&param_4->field0_0x0 + 8) - *(int *)&param_4->field0_0x0;
  iStack_3b4 = *(int *)((longlong)&param_4->field0_0x0 + 0xc) -
               *(int *)((longlong)&param_4->field0_0x0 + 4);
  TVar3._s_0.Y = iStack_3b4;
  TVar3._s_0.X = local_3b8;
  if (param_5) {
    local_170 = FClearValueBinding::None.Value.Color[3];
    local_188._0_8_ = 9;
    local_16c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_168 = 0;
    local_188._8_8_ = FClearValueBinding::None._0_8_;
    local_188._16_8_ = FClearValueBinding::None.Value._4_8_;
    local_15c = 0x10001;
    local_158 = 0x1a000101;
    local_154 = 0xff00;
    local_148 = (void *)0x0;
    local_140 = 0;
    local_13c = 1;
    local_164 = TVar3;
    pFVar9 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)local_188,L"DLSS.DiffuseAlbedo",None);
    __return_storage_ptr__->DiffuseAlbedo = pFVar9;
    pFVar9 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)local_188,L"DLSS.SpecularAlbedo",None);
    __return_storage_ptr__->SpecularAlbedo = pFVar9;
    local_398.Texture = __return_storage_ptr__->DiffuseAlbedo;
    local_398.ResolveTexture = (FRDGTexture *)0x0;
    local_398.LoadAction = ENoAction;
    local_398.MipIndex = '\0';
    local_398.ArraySlice = -1;
    bVar6 = FRenderTargetBinding::Validate(&local_398);
    if ((!bVar6) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x216,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FGBufferResolveOutputs *)(*pcVar1)();
      return pFVar10;
    }
    local_380.Texture = __return_storage_ptr__->SpecularAlbedo;
    (pFVar7->RenderTargets).Output.Elements[0].Texture = local_398.Texture;
    (pFVar7->RenderTargets).Output.Elements[0].ResolveTexture = local_398.ResolveTexture;
    (pFVar7->RenderTargets).Output.Elements[0].LoadAction = local_398.LoadAction;
    (pFVar7->RenderTargets).Output.Elements[0].MipIndex = local_398.MipIndex;
    (pFVar7->RenderTargets).Output.Elements[0].ArraySlice = local_398.ArraySlice;
    *(undefined4 *)&(pFVar7->RenderTargets).Output.Elements[0].field_0x14 = local_398._20_4_;
    local_380.ResolveTexture = (FRDGTexture *)0x0;
    local_380.LoadAction = ENoAction;
    local_380.MipIndex = '\0';
    local_380.ArraySlice = -1;
    bVar6 = FRenderTargetBinding::Validate(&local_380);
    if ((!bVar6) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x216,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FGBufferResolveOutputs *)(*pcVar1)();
      return pFVar10;
    }
    (pFVar7->RenderTargets).Output.Elements[1].Texture = local_380.Texture;
    (pFVar7->RenderTargets).Output.Elements[1].ResolveTexture = local_380.ResolveTexture;
    local_98._0_8_ = 9;
    pFVar4 = &pFVar7->RenderTargets;
    (pFVar4->Output).Elements[1].LoadAction = local_380.LoadAction;
    (pFVar4->Output).Elements[1].MipIndex = local_380.MipIndex;
    (pFVar4->Output).Elements[1].ArraySlice = local_380.ArraySlice;
    *(undefined4 *)&(pFVar4->Output).Elements[1].field_0x14 = local_380._20_4_;
    local_80 = FClearValueBinding::None.Value.Color[3];
    local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_78 = 0;
    local_98._8_8_ = FClearValueBinding::None._0_8_;
    local_98._16_8_ = FClearValueBinding::None.Value._4_8_;
    local_6c = 0x10001;
    local_68 = 0xa000101;
    local_64 = 0xff00;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 1;
    local_74 = TVar3;
    local_368.Texture =
         FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_98,L"DLSS.Normal",None);
    __return_storage_ptr__->Normals = local_368.Texture;
    local_368.ResolveTexture = (FRDGTexture *)0x0;
    local_368.LoadAction = ENoAction;
    local_368.MipIndex = '\0';
    local_368.ArraySlice = -1;
    bVar6 = FRenderTargetBinding::Validate(&local_368);
    if ((!bVar6) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x216,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FGBufferResolveOutputs *)(*pcVar1)();
      return pFVar10;
    }
    (pFVar7->RenderTargets).Output.Elements[2].Texture = local_368.Texture;
    (pFVar7->RenderTargets).Output.Elements[2].ResolveTexture = local_368.ResolveTexture;
    local_e8._0_8_ = 9;
    pFVar4 = &pFVar7->RenderTargets;
    (pFVar4->Output).Elements[2].LoadAction = local_368.LoadAction;
    (pFVar4->Output).Elements[2].MipIndex = local_368.MipIndex;
    (pFVar4->Output).Elements[2].ArraySlice = local_368.ArraySlice;
    *(undefined4 *)&(pFVar4->Output).Elements[2].field_0x14 = local_368._20_4_;
    local_d0 = FClearValueBinding::None.Value.Color[3];
    local_cc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_c8 = 0;
    local_e8._8_8_ = FClearValueBinding::None._0_8_;
    local_e8._16_8_ = FClearValueBinding::None.Value._4_8_;
    local_bc = 0x10001;
    local_b8 = 0xd000101;
    local_b4 = 0xff00;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_9c = 1;
    local_c4 = TVar3;
    local_350.Texture =
         FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_e8,L"DLSS.Roughness",None);
    __return_storage_ptr__->Roughness = local_350.Texture;
    local_350.ResolveTexture = (FRDGTexture *)0x0;
    local_350.LoadAction = ENoAction;
    local_350.MipIndex = '\0';
    local_350.ArraySlice = -1;
    bVar6 = FRenderTargetBinding::Validate(&local_350);
    if ((!bVar6) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x216,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FGBufferResolveOutputs *)(*pcVar1)();
      return pFVar10;
    }
    (pFVar7->RenderTargets).Output.Elements[3].Texture = local_350.Texture;
    (pFVar7->RenderTargets).Output.Elements[3].ResolveTexture = local_350.ResolveTexture;
    local_138._0_8_ = 9;
    pFVar4 = &pFVar7->RenderTargets;
    (pFVar4->Output).Elements[3].LoadAction = local_350.LoadAction;
    (pFVar4->Output).Elements[3].MipIndex = local_350.MipIndex;
    (pFVar4->Output).Elements[3].ArraySlice = local_350.ArraySlice;
    *(undefined4 *)&(pFVar4->Output).Elements[3].field_0x14 = local_350._20_4_;
    local_120 = FClearValueBinding::None.Value.Color[3];
    local_11c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_118 = 0;
    local_138._8_8_ = FClearValueBinding::None._0_8_;
    local_138._16_8_ = FClearValueBinding::None.Value._4_8_;
    local_10c = 0x10001;
    local_108 = 0xd000101;
    local_104 = 0xff00;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_ec = 1;
    local_114 = TVar3;
    local_338.Texture =
         FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_138,L"DLSS.Depth",None);
    __return_storage_ptr__->LinearDepth = local_338.Texture;
    local_338.ResolveTexture = (FRDGTexture *)0x0;
    local_338.LoadAction = ENoAction;
    local_338.MipIndex = '\0';
    local_338.ArraySlice = -1;
    bVar6 = FRenderTargetBinding::Validate(&local_338);
    if ((!bVar6) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x216,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FGBufferResolveOutputs *)(*pcVar1)();
      return pFVar10;
    }
    (pFVar7->RenderTargets).Output.Elements[4].Texture = local_338.Texture;
    (pFVar7->RenderTargets).Output.Elements[4].ResolveTexture = local_338.ResolveTexture;
    pFVar4 = &pFVar7->RenderTargets;
    (pFVar4->Output).Elements[4].LoadAction = local_338.LoadAction;
    (pFVar4->Output).Elements[4].MipIndex = local_338.MipIndex;
    (pFVar4->Output).Elements[4].ArraySlice = local_338.ArraySlice;
    *(undefined4 *)&(pFVar4->Output).Elements[4].field_0x14 = local_338._20_4_;
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
  }
  pTVar5 = CVarNGXDLSSDisableSubsurfaceCheckerboard.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar10 = (FGBufferResolveOutputs *)(*pcVar1)();
    return pFVar10;
  }
  bVar6 = pTVar5->ShadowedValue[1];
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2->FeatureLevel]);
  pFVar11 = (FShaderType *)FGBufferResolvePS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_2e8,pFVar11,(-(uint)(bVar6 != false) & 2) + (uint)param_5)
  ;
  if (local_2e8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_3b8);
    FName::ToString((FName *)this_00,&local_2d8);
    FGBufferResolvePS::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FGBufferResolveOutputs *)(*pcVar1)();
      return pFVar10;
    }
  }
  FGBufferResolvePS::GetStaticType();
  local_2c8.ShaderContent = (FGBufferResolvePS *)local_2e8.ShaderContent;
  local_2c8.ShaderMap = local_2e8.ShaderMap;
  local_320 = (param_4->field0_0x0)._s_0.Max.field0_0x0;
  local_318 = (param_4->field0_0x0)._s_0.Min.field0_0x0;
  local_300 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_310 = local_320;
  local_308 = TVar3;
  local_2f8 = TVar3;
  pFVar12 = GetScreenPassTextureViewportParameters
                      (&local_268,(FScreenPassTextureViewport *)&local_320._s_0);
  TVar2 = (pFVar12->ExtentInverse).field0_0x0;
  (pFVar7->InputViewPort).Extent.field0_0x0 = (pFVar12->Extent).field0_0x0;
  (pFVar7->InputViewPort).ExtentInverse.field0_0x0 = TVar2;
  TVar2 = (pFVar12->ScreenPosToViewportBias).field0_0x0;
  (pFVar7->InputViewPort).ScreenPosToViewportScale.field0_0x0 =
       (pFVar12->ScreenPosToViewportScale).field0_0x0;
  (pFVar7->InputViewPort).ScreenPosToViewportBias.field0_0x0 = TVar2;
  TVar3 = (pFVar12->ViewportMax).field0_0x0;
  (pFVar7->InputViewPort).ViewportMin.field0_0x0 = (pFVar12->ViewportMin).field0_0x0;
  (pFVar7->InputViewPort).ViewportMax.field0_0x0 = TVar3;
  TVar2 = (pFVar12->ViewportSizeInverse).field0_0x0;
  (pFVar7->InputViewPort).ViewportSize.field0_0x0 = (pFVar12->ViewportSize).field0_0x0;
  (pFVar7->InputViewPort).ViewportSizeInverse.field0_0x0 = TVar2;
  TVar2 = (pFVar12->UVViewportMax).field0_0x0;
  (pFVar7->InputViewPort).UVViewportMin.field0_0x0 = (pFVar12->UVViewportMin).field0_0x0;
  (pFVar7->InputViewPort).UVViewportMax.field0_0x0 = TVar2;
  TVar2 = (pFVar12->UVViewportSizeInverse).field0_0x0;
  (pFVar7->InputViewPort).UVViewportSize.field0_0x0 = (pFVar12->UVViewportSize).field0_0x0;
  (pFVar7->InputViewPort).UVViewportSizeInverse.field0_0x0 = TVar2;
  TVar2 = (pFVar12->UVViewportBilinearMax).field0_0x0;
  (pFVar7->InputViewPort).UVViewportBilinearMin.field0_0x0 =
       (pFVar12->UVViewportBilinearMin).field0_0x0;
  (pFVar7->InputViewPort).UVViewportBilinearMax.field0_0x0 = TVar2;
  pFVar12 = GetScreenPassTextureViewportParameters
                      (&local_1f8,(FScreenPassTextureViewport *)&local_308._s_0);
  TVar2 = (pFVar12->ExtentInverse).field0_0x0;
  (pFVar7->OutputViewPort).Extent.field0_0x0 = (pFVar12->Extent).field0_0x0;
  (pFVar7->OutputViewPort).ExtentInverse.field0_0x0 = TVar2;
  TVar2 = (pFVar12->ScreenPosToViewportBias).field0_0x0;
  (pFVar7->OutputViewPort).ScreenPosToViewportScale.field0_0x0 =
       (pFVar12->ScreenPosToViewportScale).field0_0x0;
  (pFVar7->OutputViewPort).ScreenPosToViewportBias.field0_0x0 = TVar2;
  TVar3 = (pFVar12->ViewportMax).field0_0x0;
  (pFVar7->OutputViewPort).ViewportMin.field0_0x0 = (pFVar12->ViewportMin).field0_0x0;
  (pFVar7->OutputViewPort).ViewportMax.field0_0x0 = TVar3;
  TVar2 = (pFVar12->ViewportSizeInverse).field0_0x0;
  (pFVar7->OutputViewPort).ViewportSize.field0_0x0 = (pFVar12->ViewportSize).field0_0x0;
  (pFVar7->OutputViewPort).ViewportSizeInverse.field0_0x0 = TVar2;
  TVar2 = (pFVar12->UVViewportMax).field0_0x0;
  (pFVar7->OutputViewPort).UVViewportMin.field0_0x0 = (pFVar12->UVViewportMin).field0_0x0;
  (pFVar7->OutputViewPort).UVViewportMax.field0_0x0 = TVar2;
  TVar2 = (pFVar12->UVViewportSizeInverse).field0_0x0;
  (pFVar7->OutputViewPort).UVViewportSize.field0_0x0 = (pFVar12->UVViewportSize).field0_0x0;
  (pFVar7->OutputViewPort).UVViewportSizeInverse.field0_0x0 = TVar2;
  TVar2 = (pFVar12->UVViewportBilinearMax).field0_0x0;
  (pFVar7->OutputViewPort).UVViewportBilinearMin.field0_0x0 =
       (pFVar12->UVViewportBilinearMin).field0_0x0;
  (pFVar7->OutputViewPort).UVViewportBilinearMax.field0_0x0 = TVar2;
  local_3a8._4_4_ = param_2->StereoViewIndex;
  local_3a8._0_4_ = param_2->FeatureLevel;
  uStack_3a0 = param_2->InstanceFactor;
  uStack_39c = CONCAT31(uStack_39c._1_3_,param_2->bHMDHiddenAreaMaskActive);
  pFVar13 = FRDGEventName::FRDGEventName(&local_288,L"GBufferResolve%s%s%s%s");
  local_2b8._12_4_ = uStack_39c;
  local_2b8.InstanceCount = uStack_3a0;
  local_2b8._0_8_ = local_3a8;
  AddDrawScreenPass<FGBufferResolvePS>
            (param_1,pFVar13,&local_2b8,(FScreenPassTextureViewport *)&local_308._s_0,
             (FScreenPassTextureViewport *)&local_320._s_0,&local_2c8,pFVar7,None);
  if (local_288.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddVelocityCombinePass @ 14de09000

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRDGTexture * __cdecl
AddVelocityCombinePass
          (FRDGBuilder *param_1,FSceneView *param_2,FRDGTexture *param_3,FRDGTexture *param_4,
          FRDGTexture *param_5,TIntRect<int> *param_6,TIntRect<int> *param_7,TVector2<float> param_8
          ,bool param_9)

{
  int *piVar1;
  Type *pTVar2;
  TUniformBufferRef<FViewUniformShaderParameters> TVar3;
  code *pcVar4;
  TIntPoint<int> TVar5;
  FRDGTexture *pFVar6;
  FParameters *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FRDGTexture *pFVar12;
  undefined8 *puVar13;
  FRDGTextureUAV *pFVar14;
  FShaderParametersMetadata *pFVar15;
  FShaderType *pFVar16;
  FName this;
  FRDGEventName *pFVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auStackY_2e8 [32];
  undefined8 *local_298;
  FRDGTexture *local_290;
  int local_288;
  int iStack_284;
  TUniformBufferRef<FViewUniformShaderParameters> local_278;
  EUniformBufferBindingFlags EStack_270;
  undefined7 uStack_26f;
  undefined8 local_268;
  FRDGTexture *local_260;
  FRDGBuilder *local_258;
  TIntVector3<int>_u_0 local_248;
  undefined8 local_238;
  FParameters *local_230;
  ulonglong local_228;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_218;
  TIntPoint<int>_u_0 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  TIntPoint<int>_u_0 local_1f0;
  TIntPoint<int>_u_0 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [8];
  FString local_1d0;
  TIntPoint<int>_u_0 local_1c0;
  TShaderRefBase<FVelocityCombineCS,FShaderMapPointerTable> local_1a8;
  FRDGEventName local_198;
  TVector2<float>_u_0 local_178;
  TVector2<float>_u_0 TStack_170;
  TVector2<float>_u_0 local_168;
  TVector2<float>_u_0 TStack_160;
  TIntPoint<int>_u_0 local_158;
  TIntPoint<int>_u_0 TStack_150;
  TVector2<float>_u_0 local_148;
  TVector2<float>_u_0 TStack_140;
  TVector2<float>_u_0 local_138;
  TVector2<float>_u_0 TStack_130;
  TVector2<float>_u_0 local_128;
  TVector2<float>_u_0 TStack_120;
  TVector2<float>_u_0 local_118;
  TVector2<float>_u_0 TStack_110;
  TVector2<float>_u_0 local_108;
  TVector2<float>_u_0 TStack_100;
  TVector2<float>_u_0 local_f8;
  TVector2<float>_u_0 TStack_f0;
  TIntPoint<int>_u_0 local_e8;
  TIntPoint<int>_u_0 TStack_e0;
  TVector2<float>_u_0 local_d8;
  TVector2<float>_u_0 TStack_d0;
  TVector2<float>_u_0 local_c8;
  TVector2<float>_u_0 TStack_c0;
  TVector2<float>_u_0 local_b8;
  TVector2<float>_u_0 TStack_b0;
  TVector2<float>_u_0 local_a8;
  TVector2<float>_u_0 TStack_a0;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  TVar5.field0_0x0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_260 = param_5;
  if (param_9) {
    uVar19 = *(int *)((longlong)&param_7->field0_0x0 + 0xc) -
             *(int *)((longlong)&param_7->field0_0x0 + 4);
    iVar9 = *(int *)((longlong)&param_7->field0_0x0 + 8) - *(int *)&param_7->field0_0x0;
  }
  else {
    uVar19 = *(int *)((longlong)&param_6->field0_0x0 + 0xc) -
             *(int *)((longlong)&param_6->field0_0x0 + 4);
    iVar9 = *(int *)((longlong)&param_6->field0_0x0 + 8) - *(int *)&param_6->field0_0x0;
  }
  local_78 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_1c0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  iVar21 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
  local_288 = iVar9 - iVar21;
  local_98._0_8_ = 0x20008;
  local_228 = (ulonglong)uVar19;
  iVar20 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
  iStack_284 = uVar19 - iVar20;
  local_80 = FClearValueBinding::Black.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_4c = 1;
  local_74._4_4_ = iStack_284;
  local_74._0_4_ = local_288;
  local_98._8_8_ = FClearValueBinding::Black._0_8_;
  local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_6c = 0x10001;
  local_68 = 0xf000101;
  local_64 = 0xff00;
  local_290 = param_4;
  local_278 = (TUniformBufferRef<FViewUniformShaderParameters>)param_2;
  local_268 = CONCAT44(uVar19,iVar9);
  local_258 = param_1;
  pFVar12 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_98,L"DLSSCombinedVelocity",None);
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x150,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FRDGTexture *)(*pcVar4)();
      return pFVar12;
    }
  }
  else {
    *(undefined1 *)(puVar13 + 0x17) = 1;
    *puVar13 = &___7__TObject_VFParameters_FVelocityCombineCS___FRDGAllocator__6B_;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[0x12] = 0;
    puVar13[0x13] = 0;
    puVar13[0x16] = 0;
    puVar13[0x18] = 0;
    puVar13[0x28] = 0;
  }
  local_298 = puVar13;
  if ((((undefined8 **)param_1->_padding_ <= &local_298) &&
      (&local_298 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FRDGTexture *)(*pcVar4)();
    return pFVar12;
  }
  iVar10 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar10 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar10 * 8) = local_298;
  local_230 = (FParameters *)(puVar13 + 2);
  puVar13[2] = local_290;
  puVar13[3] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  iVar10 = *(int *)&(local_290->Desc).field_0x24;
  if ((((iVar10 != 1) || (*(int *)&(local_290->Desc).field_0x28 != 1)) &&
      ((iVar10 != *(int *)&(param_3->Desc).field_0x24 ||
       (*(int *)&(local_290->Desc).field_0x28 != *(int *)&(param_3->Desc).field_0x28)))) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InVelocityTexture->Desc.Extent == FIntPoint(1, 1) || InVelocityTexture->Desc.Extent == InSceneDepthTexture->Desc.Extent"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSUtility\\Private\\VelocityCombinePass.cpp"
                         ,0x76,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FRDGTexture *)(*pcVar4)();
    return pFVar12;
  }
  local_290 = *(FRDGTexture **)&param_6->field0_0x0;
  local_238 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
  if (param_3 == (FRDGTexture *)0x0) {
LAB_14de09366:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("InTexture.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                       ,0xab,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FRDGTexture *)(*pcVar4)();
      return pFVar12;
    }
  }
  else {
    iVar10 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar22 = (int)local_238;
    iVar11 = iVar22;
    if (iVar22 < iVar10) {
      iVar11 = iVar10;
    }
    iVar10 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (param_3->VisualizeTextureExtent).field0_0x0._s_0.X = iVar11;
    iVar18 = (int)((ulonglong)local_238 >> 0x20);
    iVar11 = iVar18;
    if (iVar18 < iVar10) {
      iVar11 = iVar10;
    }
    (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar11;
    if ((iVar22 == (int)local_290) && (iVar18 == (int)((ulonglong)local_290 >> 0x20)))
    goto LAB_14de09366;
  }
  local_208 = *(TIntPoint<int>_u_0 *)&(param_3->Desc).field_0x24;
  local_200 = local_290;
  local_1f8 = local_238;
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_178._s_0,
             (FScreenPassTextureViewport *)&local_208._s_0);
  pFVar7 = local_230;
  pFVar6 = local_260;
  (local_230->Velocity).Extent.field0_0x0 = local_178;
  (local_230->Velocity).ExtentInverse.field0_0x0 = TStack_170;
  local_230->DepthTexture = param_3;
  (local_230->Velocity).ScreenPosToViewportScale.field0_0x0 = local_168;
  (local_230->Velocity).ScreenPosToViewportBias.field0_0x0 = TStack_160;
  (local_230->Velocity).ViewportMin.field0_0x0 = local_158;
  (local_230->Velocity).ViewportMax.field0_0x0 = TStack_150;
  (local_230->Velocity).ViewportSize.field0_0x0 = local_148;
  (local_230->Velocity).ViewportSizeInverse.field0_0x0 = TStack_140;
  (local_230->Velocity).UVViewportMin.field0_0x0 = local_138;
  (local_230->Velocity).UVViewportMax.field0_0x0 = TStack_130;
  (local_230->Velocity).UVViewportSize.field0_0x0 = local_128;
  (local_230->Velocity).UVViewportSizeInverse.field0_0x0 = TStack_120;
  (local_230->Velocity).UVViewportBilinearMin.field0_0x0 = local_118;
  (local_230->Velocity).UVViewportBilinearMax.field0_0x0 = TStack_110;
  local_230->DepthTextureSampler =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  local_230->AlternateMotionVectorsTexture = local_260;
  pFVar14 = FRDGBuilder::CreateUAV(local_258,pFVar12,None,PF_Unknown);
  pFVar7->OutVelocityCombinedTexture = pFVar14;
  if (pFVar12 != (FRDGTexture *)0x0) {
    iVar10 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar11 = iVar9;
    if (iVar9 < iVar10) {
      iVar11 = iVar10;
    }
    iVar10 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X = iVar11;
    iVar22 = (int)local_228;
    iVar11 = iVar22;
    if (iVar22 < iVar10) {
      iVar11 = iVar10;
    }
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar11;
    if ((iVar9 != iVar21) || (iVar22 != iVar20)) goto LAB_14de094b9;
  }
  bVar8 = FDebug::CheckVerifyFailedImpl2
                    ("InTexture.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                     ,0xab,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FRDGTexture *)(*pcVar4)();
    return pFVar12;
  }
LAB_14de094b9:
  local_1f0 = *(TIntPoint<int>_u_0 *)&(pFVar12->Desc).field_0x24;
  local_1e8 = TVar5.field0_0x0;
  local_1e0 = CONCAT44(uVar19,iVar9);
  GetScreenPassTextureViewportParameters
            ((FScreenPassTextureViewportParameters *)&local_108._s_0,
             (FScreenPassTextureViewport *)&local_1f0._s_0);
  (pFVar7->CombinedVelocity).Extent.field0_0x0 = local_108;
  (pFVar7->CombinedVelocity).ExtentInverse.field0_0x0 = TStack_100;
  (pFVar7->TemporalJitterPixels).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_8.field0_0x0;
  (pFVar7->CombinedVelocity).ScreenPosToViewportScale.field0_0x0 = local_f8;
  (pFVar7->CombinedVelocity).ScreenPosToViewportBias.field0_0x0 = TStack_f0;
  (pFVar7->CombinedVelocity).ViewportMin.field0_0x0 = local_e8;
  (pFVar7->CombinedVelocity).ViewportMax.field0_0x0 = TStack_e0;
  (pFVar7->CombinedVelocity).ViewportSize.field0_0x0 = local_d8;
  (pFVar7->CombinedVelocity).ViewportSizeInverse.field0_0x0 = TStack_d0;
  (pFVar7->CombinedVelocity).UVViewportMin.field0_0x0 = local_c8;
  (pFVar7->CombinedVelocity).UVViewportMax.field0_0x0 = TStack_c0;
  (pFVar7->CombinedVelocity).UVViewportSize.field0_0x0 = local_b8;
  (pFVar7->CombinedVelocity).UVViewportSizeInverse.field0_0x0 = TStack_b0;
  (pFVar7->CombinedVelocity).UVViewportBilinearMin.field0_0x0 = local_a8;
  (pFVar7->CombinedVelocity).UVViewportBilinearMax.field0_0x0 = TStack_a0;
  pFVar15 = FViewUniformShaderParameters::GetStructMetadata();
  EStack_270 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EStack_270 = pFVar15->BindingFlags;
  }
  TVar3 = *(TUniformBufferRef<FViewUniformShaderParameters> *)((longlong)local_278 + 0x18);
  *(TUniformBufferRef<FViewUniformShaderParameters> *)&pFVar7->View = TVar3;
  *(ulonglong *)&(pFVar7->View).field_0x8 = CONCAT71(uStack_26f,EStack_270);
  pTVar2 = (Type *)((longlong)local_278 + 0x1bf8);
  local_278 = TVar3;
  local_278 = (TUniformBufferRef<FViewUniformShaderParameters>)
              GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)*pTVar2]);
  pFVar16 = (FShaderType *)FVelocityCombineCS::GetStaticType();
  FGlobalShaderMap::GetShader
            ((FGlobalShaderMap *)local_278,&local_218,pFVar16,
             (-(uint)(pFVar6 != (FRDGTexture *)0x0) & 2) + (uint)param_9);
  if (local_218.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1d8);
    FName::ToString((FName *)this,&local_1d0);
    FVelocityCombineCS::GetStaticType();
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FRDGTexture *)(*pcVar4)();
      return pFVar12;
    }
  }
  FVelocityCombineCS::GetStaticType();
  iVar20 = local_268._4_4_ - local_1c0._4_4_;
  local_1a8.ShaderContent = (FVelocityCombineCS *)local_218.ShaderContent;
  local_1a8.ShaderMap = local_218.ShaderMap;
  pFVar17 = FRDGEventName::FRDGEventName(&local_198,L"Velocity Combine%s%s (%dx%d -> %dx%d)");
  pFVar15 = FVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata();
  iVar9 = (iVar9 - iVar21) + 7;
  local_248._s_0.Z = 1;
  local_248._s_0.X = (int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3;
  iVar20 = iVar20 + 7;
  local_248._s_0.Y = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
  FComputeShaderUtils::AddPass<FVelocityCombineCS>
            (local_258,pFVar17,Compute,&local_1a8,pFVar15,pFVar7,(TIntVector3<int> *)&local_248._s_0
            );
  if (local_198.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return pFVar12;
}

// IMPLEMENT_MODULE_DLSSUtility @ 14de0dc90

void __cdecl IMPLEMENT_MODULE_DLSSUtility(void)

{
  return;
}

// OnCreateRenderThreadResources'' @ 15045ea80

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

// OnDestroyRenderThreadResources'' @ 15045eac0

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

// ShaderTypeRegistration'' @ 15045eb00

void __cdecl
`dynamic_atexit_destructor_for_'FCreateBiasCurrentColorCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 15045eb10

void __cdecl `dynamic_atexit_destructor_for_'FGBufferResolvePS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 15045eb20

void __cdecl `dynamic_atexit_destructor_for_'FVelocityCombineCS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 15045eb30

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

// StaticResource'' @ 15045ebb0

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

// StaticResource'' @ 15045ec30

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

// StaticResource'' @ 15045ecb0

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

// `dynamic_atexit_destructor_for_'CVarNGXDLSSDisableSubsurfaceCheckerboard'' @ 15045ed30

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSDisableSubsurfaceCheckerboard__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNGXDLSSDisableSubsurfaceCheckerboard);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045ed50

void __cdecl
`FCreateBiasCurrentColorCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCreateBiasCurrentColorCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045ed70

void __cdecl
`FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGBufferResolvePS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045ed90

void __cdecl
`FVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FVelocityCombineCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045edb0

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
`FCreateBiasCurrentColorCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045edd0

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
`FGBufferResolvePS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15045edf0

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
`FVelocityCombineCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

