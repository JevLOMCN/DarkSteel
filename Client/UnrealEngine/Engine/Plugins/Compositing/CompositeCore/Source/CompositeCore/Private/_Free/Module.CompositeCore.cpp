// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 149

// OnComponentCreatedDelegate'' @ 141447440

void __cdecl
`dynamic_initializer_for_'UHoldoutCompositeComponent::OnComponentCreatedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UHoldoutCompositeComponent::OnComponentCreatedDelegate__);
  return;
}

// ShaderTypeRegistration'' @ 141447460

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

void __cdecl `dynamic_initializer_for_'FCompositeCoreDilateShader::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FCompositeCoreDilateShader::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FCompositeCoreDilateShader::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FCompositeCoreDilateShader::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1414474b0

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
`dynamic_initializer_for_'FCompositeCoreDisplayTransformShader::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FCompositeCoreDisplayTransformShader::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FCompositeCoreDisplayTransformShader::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FCompositeCoreDisplayTransformShader::
         ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141447500

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

void __cdecl `dynamic_initializer_for_'FCompositeCoreMergeShader::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FCompositeCoreMergeShader::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FCompositeCoreMergeShader::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FCompositeCoreMergeShader::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 141447550

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

// StaticResource'' @ 141447610

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

// StaticResource'' @ 1414476d0

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

// StaticResource'' @ 141447870

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

// `dynamic_initializer_for_'CVarCompositeCoreApplyFXAA'' @ 141447a10

void __cdecl _dynamic_initializer_for__CVarCompositeCoreApplyFXAA__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCompositeCoreApplyFXAA,L"CompositeCore.ApplyFXAA",local_res8,
             L"When enabled, the custom render pass automatically applies FXAA.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarCompositeCoreApplyFXAA__);
  return;
}

// `dynamic_initializer_for_'CVarCompositeCoreApplyPreExposure'' @ 141447a60

void __cdecl _dynamic_initializer_for__CVarCompositeCoreApplyPreExposure__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCompositeCoreApplyPreExposure,L"CompositeCore.ApplyPreExposure",local_res8,
             L"When enabled, the scene main render pre-exposure is applied onto separate composited render(s)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarCompositeCoreApplyPreExposure__);
  return;
}

// `dynamic_initializer_for_'CVarCompositeCoreDebugDilationSize'' @ 141447ab0

void __cdecl _dynamic_initializer_for__CVarCompositeCoreDebugDilationSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCompositeCoreDebugDilationSize,L"CompositeCore.Debug.DilationSize",local_res8,
             L"Size of the pixel dilation applied onto the composite custom render pass. 0, 1 & 2 are supported."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompositeCoreDebugDilationSize__);
  return;
}

// `dynamic_initializer_for_'CVarRefreshPrimitivesOnTick'' @ 141447b00

void __cdecl _dynamic_initializer_for__CVarRefreshPrimitivesOnTick__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRefreshPrimitivesOnTick,L"CompositeCore.RefreshPrimitivesOnTick",
             &UE::CompositeCore::GRegisterPrimitivesOnTick,
             L"Refresh primitive registration on every tick. Enabled by default for use cases such as dynamic text 3D.\nRead-only and to be set in a config file (requires restart)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarRefreshPrimitivesOnTick__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FCompositeCoreDilate'' @ 141447b50

void __cdecl _dynamic_initializer_for__GPUStat_FCompositeCoreDilate__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FCompositeCoreDilate__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FCompositeCoreDisplayTransform'' @ 141447b70

void __cdecl _dynamic_initializer_for__GPUStat_FCompositeCoreDisplayTransform__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FCompositeCoreDisplayTransform__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FCompositeCoreFXAA'' @ 141447b90

void __cdecl _dynamic_initializer_for__GPUStat_FCompositeCoreFXAA__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FCompositeCoreFXAA__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FCompositeCoreMerge'' @ 141447bb0

void __cdecl _dynamic_initializer_for__GPUStat_FCompositeCoreMerge__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FCompositeCoreMerge__);
  return;
}

// `dynamic_initializer_for_'LogCompositeCore'' @ 141447bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCompositeCore__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCompositeCore,L"LogCompositeCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCompositeCore__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCompositeCore'' @ 141447c10

void __cdecl _dynamic_initializer_for__ModuleRegistrantCompositeCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CompositeCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CompositeCore",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCompositeCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h__Script_CompositeCore_1028563296'' @ 141447c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h__Script_CompositeCore_1028563296__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CompositeCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSettings_h__Script_CompositeCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h__Script_CompositeCore_1816264193'' @ 141447ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h__Script_CompositeCore_1816264193__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CompositeCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_CompositeCoreSubsystem_h__Script_CompositeCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h__Script_CompositeCore_2096036334'' @ 141447ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h__Script_CompositeCore_2096036334__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CompositeCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_HoldoutCompositeComponent_h__Script_CompositeCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_Passes_CompositeCorePassMergeProxy_h__Script_CompositeCore_4278957404'' @ 141447d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_Passes_CompositeCorePassMergeProxy_h__Script_CompositeCore_4278957404__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CompositeCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_CompositeCore_Source_CompositeCore_Public_Passes_CompositeCorePassMergeProxy_h__Script_CompositeCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CompositeCore'' @ 141447d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CompositeCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7b9c3f73;
  local_res8[0].DeclarationsHash = 0xd0c47a0a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CompositeCore,L"/Script/CompositeCore",
             &Z_Registration_Info_UPackage__Script_CompositeCore,local_res8);
  return;
}

// Z_Construct_UPackage__Script_CompositeCore @ 14ea71070

UPackage * __cdecl Z_Construct_UPackage__Script_CompositeCore(void)

{
  if (Z_Registration_Info_UPackage__Script_CompositeCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CompositeCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CompositeCore.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ea71270

void * __thiscall
FCompositeCoreModule::_scalar_deleting_destructor_(FCompositeCoreModule *this,uint param_1)

{
  *this = (FCompositeCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UCompositeCorePluginSettings @ 14ea71370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCompositeCorePluginSettings(void)

{
  if (Z_Registration_Info_UClass_UCompositeCorePluginSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCompositeCorePluginSettings.OuterSingleton,
               &Z_Construct_UClass_UCompositeCorePluginSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCompositeCorePluginSettings.OuterSingleton;
}

// NewProp_bApplyPreExposure_SetBit @ 14ea713b0

void __cdecl
Z_Construct_UClass_UCompositeCorePluginSettings_Statics::NewProp_bApplyPreExposure_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bApplyFXAA_SetBit @ 14ea713c0

void __cdecl
Z_Construct_UClass_UCompositeCorePluginSettings_Statics::NewProp_bApplyFXAA_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 2;
  return;
}

// Z_Construct_UClass_UCompositeCoreSubsystem @ 14ea713d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCompositeCoreSubsystem(void)

{
  if (Z_Registration_Info_UClass_UCompositeCoreSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCompositeCoreSubsystem.OuterSingleton,
               &Z_Construct_UClass_UCompositeCoreSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCompositeCoreSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UCompositeCoreSubsystem_RegisterPrimitive @ 14ea71410

UFunction * __cdecl Z_Construct_UFunction_UCompositeCoreSubsystem_RegisterPrimitive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCompositeCoreSubsystem_RegisterPrimitive_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCompositeCoreSubsystem_UnregisterPrimitive @ 14ea71450

UFunction * __cdecl Z_Construct_UFunction_UCompositeCoreSubsystem_UnregisterPrimitive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCompositeCoreSubsystem_UnregisterPrimitive_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ECompositeCoreMergeOp_StaticEnum @ 14ea71490

UEnum * __cdecl ECompositeCoreMergeOp_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECompositeCoreMergeOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CompositeCore();
    Z_Registration_Info_UEnum_ECompositeCoreMergeOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CompositeCore_ECompositeCoreMergeOp,(UObject *)pUVar1,
                       L"ECompositeCoreMergeOp");
  }
  return Z_Registration_Info_UEnum_ECompositeCoreMergeOp.OuterSingleton;
}

// Z_Construct_UClass_UHoldoutCompositeComponent @ 14ea71590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHoldoutCompositeComponent(void)

{
  if (Z_Registration_Info_UClass_UHoldoutCompositeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHoldoutCompositeComponent.OuterSingleton,
               &Z_Construct_UClass_UHoldoutCompositeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHoldoutCompositeComponent.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14ea715d0

void __cdecl
Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled @ 14ea715e0

UFunction * __cdecl Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnabled_SetBit @ 14ea71620

void __cdecl
Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::NewProp_bInEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled @ 14ea71630

UFunction * __cdecl Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14ea71670

void __cdecl
Z_Construct_UClass_UHoldoutCompositeComponent_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x250) = 1;
  return;
}

// AddDrawScreenPass<FCompositeCoreDisplayTransformShader> @ 14ea719e0

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
AddDrawScreenPass<FCompositeCoreDisplayTransformShader>
          (FRDGBuilder *param_1,FRDGEventName *param_2,FScreenPassViewInfo *param_3,
          FScreenPassTextureViewport *param_4,FScreenPassTextureViewport *param_5,
          TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable> *param_6,
          FParameters *param_7,EScreenPassDrawFlags param_8)

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
  FCompositeCoreDisplayTransformShader *local_158;
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
  FCompositeCoreDisplayTransformShader *local_a8;
  FShaderMapBase *pFStack_a0;
  FRHIBlendState *local_98;
  FRHIDepthStencilState *pFStack_90;
  undefined8 local_88;
  longlong lStack_80;
  FCompositeCoreDisplayTransformShader *local_78;
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
  if ((param_6->ShaderContent == (FCompositeCoreDisplayTransformShader *)0x0) &&
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
  pFVar8 = FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata();
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
  pFVar8 = FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FCompositeCoreDisplayTransformShader::FParameters,_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>_::__l2::<lambda_1>_>
            (param_1,param_2,pFVar8,param_7,Raster,(<lambda_1> *)&local_f8);
  return;
}

// AddPass<`FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>'::__l2::<lambda_1>_> @ 14ea71f60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
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
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
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
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCompositeCoreDilateShader___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCompositeCoreDilateShader__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCompositeCoreDilateShader__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
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

// AddPass<FCompositeCoreDisplayTransformShader::FParameters,`AddDrawScreenPass<FCompositeCoreDisplayTransformShader>'::__l2::<lambda_1>_> @ 14ea72350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FCompositeCoreDisplayTransformShader::FParameters,_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  FShaderParametersMetadata *pFVar1;
  FRDGPass *pFVar2;
  
  pFVar1 = FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata();
  pFVar2 = AddPassInternal<FCompositeCoreDisplayTransformShader::FParameters,_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>_::__l2::<lambda_1>_>
                     (this,param_1,pFVar1,param_2,param_3,param_4);
  return pFVar2;
}

// AddPass<FCompositeCoreMergeShader::FParameters,`FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>'::__l2::<lambda_1>_> @ 14ea723c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FCompositeCoreMergeShader::FParameters,_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FParameters *param_2,ERDGPassFlags param_3,
          <lambda_1>_conflict *param_4)

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
  
  pFVar8 = FCompositeCoreMergeShader::FParameters::FTypeInfo::GetStructMetadata();
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
       ___7__TRDGLambdaPass_VFParameters_FCompositeCoreMergeShader__V<lambda_1>__1____AddFullscreenPass_VFCompositeCoreMergeShader___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCompositeCoreMergeShader__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
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

// AddPassInternal<FCompositeCoreDisplayTransformShader::FParameters,`AddDrawScreenPass<FCompositeCoreDisplayTransformShader>'::__l2::<lambda_1>_> @ 14ea72590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FCompositeCoreDisplayTransformShader::FParameters,_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_VFParameters_FCompositeCoreDisplayTransformShader__V<lambda_1>__1____AddDrawScreenPass_VFCompositeCoreDisplayTransformShader____YAXAEAVFRDGBuilder____QEAVFRDGEventName__UFScreenPassViewInfo__AEBVFScreenPassTextureViewport__3AEBV__TShaderRefBase_VFShader__VFShaderMapPointerTable____AEBV__TShaderRefBase_VFCompositeCoreDisplayTransformShader__VFShaderMapPointerTable____PEAVFRHIBlendState__PEAVFRHIDepthStencilState__PEAV12_W4EScreenPassDrawFlags___Z___6B_
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

// AddPassInternal<FCompositeCoreMergeShader::FParameters,`FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>'::__l2::<lambda_1>_> @ 14ea727a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FCompositeCoreMergeShader::FParameters,_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

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
       ___7__TRDGLambdaPass_VFParameters_FCompositeCoreMergeShader__V<lambda_1>__1____AddFullscreenPass_VFCompositeCoreMergeShader___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFCompositeCoreMergeShader__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>'::__l2::<lambda_1>_> @ 14ea72970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
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
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
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
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCompositeCoreDilateShader___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCompositeCoreDilateShader__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCompositeCoreDilateShader__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
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

// BinarySearchBy<TArray<TTuple<int,UE::CompositeCore::FPassTexture>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14ea72ed0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,UE::CompositeCore::FPassTexture>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,UE::CompositeCore::FPassTexture>,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x28) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x28) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,TSizedDefaultAllocator<32>_>,unsigned_int,TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_> @ 14ea72f50

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,TSizedDefaultAllocator<32>_>,unsigned_int,TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_>
          (TArray<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,TSizedDefaultAllocator<32>_>
           *param_1,uint *param_2,FKeyForward param_3,TLess<unsigned_int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(uint *)(pFVar2 + (longlong)iVar4 * 0x10) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(uint *)(pFVar2 + (longlong)iVar5 * 0x10) <= *param_2))
  {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,TSizedDefaultAllocator<32>_>,unsigned_int,TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_> @ 14ea72fd0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,TSizedDefaultAllocator<32>_>,unsigned_int,TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_>
          (TArray<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,uint *param_2,FKeyForward param_3,TLess<unsigned_int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(uint *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(uint *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>,TSizedDefaultAllocator<32>_>,FCompositeCorePassProxy_const_*,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>::FKeyForward,TLess<FCompositeCorePassProxy_const_*>_> @ 14ea73050

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>,TSizedDefaultAllocator<32>_>,FCompositeCorePassProxy_const_*,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>::FKeyForward,TLess<FCompositeCorePassProxy_const_*>_>
          (TArray<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>,TSizedDefaultAllocator<32>_>
           *param_1,FCompositeCorePassProxy **param_2,FKeyForward param_3,
          TLess<FCompositeCorePassProxy_const_*> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(FCompositeCorePassProxy **)(pFVar2 + (longlong)iVar4 * 0x28) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(FCompositeCorePassProxy **)(pFVar2 + (longlong)iVar5 * 0x28) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,enum_ISceneViewExtension::EPostProcessingPass,TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>::FKeyForward,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_> @ 14ea730d0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,enum_ISceneViewExtension::EPostProcessingPass,TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>::FKeyForward,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
          (TArray<TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,EPostProcessingPass *param_2,FKeyForward param_3,
          TLess<ISceneViewExtension::EPostProcessingPass_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(EPostProcessingPass *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(EPostProcessingPass *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BindForLegacyShaderParameters<FCompositeCoreDilateShader::FParameters> @ 14ea73150

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
BindForLegacyShaderParameters<FCompositeCoreDilateShader::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FCompositeCoreDilateShader::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FCompositeCoreDisplayTransformShader::FParameters> @ 14ea731b0

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
BindForLegacyShaderParameters<FCompositeCoreDisplayTransformShader::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FCompositeCoreMergeShader::FParameters> @ 14ea73210

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
BindForLegacyShaderParameters<FCompositeCoreMergeShader::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FCompositeCoreMergeShader::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<FCompositeCoreDilateShader> @ 14ea73270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
ClearUnusedGraphResources<FCompositeCoreDilateShader>
          (TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FCompositeCoreDisplayTransformShader> @ 14ea732f0

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
ClearUnusedGraphResources<FCompositeCoreDisplayTransformShader>
          (TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable> *param_1,
          FParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata();
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

// ClearUnusedGraphResources<FCompositeCoreDisplayTransformShader> @ 14ea73370

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
ClearUnusedGraphResources<FCompositeCoreDisplayTransformShader>
          (TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<FCompositeCoreMergeShader> @ 14ea733f0

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
ClearUnusedGraphResources<FCompositeCoreMergeShader>
          (TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable> *param_1,
          FParameters *param_2,initializer_list<FRDGResource_*> *param_3)

{
  FShaderParametersMetadata *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  pFVar1 = FCompositeCoreMergeShader::FParameters::FTypeInfo::GetStructMetadata();
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

// ClearUnusedGraphResources<FCompositeCoreMergeShader> @ 14ea73470

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
ClearUnusedGraphResources<FCompositeCoreMergeShader>
          (TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable> *param_1,
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

// ConstructItems<UE::CompositeCore::FPassTexture,UE::CompositeCore::FPassTexture,int> @ 14ea734f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
ConstructItems<UE::CompositeCore::FPassTexture,UE::CompositeCore::FPassTexture,int>
          (void *param_1,FPassTexture *param_2,int param_3)

{
  TIntPoint<int>_u_0 *pTVar1;
  TIntPoint<int>_u_0 *pTVar2;
  
  if (param_3 != 0) {
    pTVar1 = (TIntPoint<int>_u_0 *)((longlong)param_1 + 0x10);
    pTVar2 = &(param_2->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
    do {
      pTVar1[-2] = *(TIntPoint<int>_u_0 *)
                    ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pTVar1);
      pTVar1[-1] = pTVar2[-1];
      *pTVar1 = *pTVar2;
      pTVar1[1] = pTVar2[1];
      param_3 = param_3 + -1;
      pTVar1 = pTVar1 + 4;
      pTVar2 = pTVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,int> @ 14ea73540

void __cdecl
ConstructItems<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,int>
          (void *param_1,
          TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>
          *param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar2 = param_2->TypeIndex;
      lVar1 = lVar5 + (longlong)param_2;
      *(byte *)(lVar1 + 8) = bVar2;
      if ((2 < bVar2) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[bVar2])(lVar1,param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::CompositeCore::FPassTexture,int> @ 14ea736e0

void __cdecl DefaultConstructItems<UE::CompositeCore::FPassTexture,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined2 *)(lVar1 + 0xc) = 0;
      *(undefined1 *)(lVar1 + 0xe) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int> @ 14ea73740

void __cdecl
DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
          (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)&param_1->field_0x8;
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x38))();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int> @ 14ea73780

void __cdecl
DestructItems<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,int> @ 14ea737c0

void __cdecl
DestructItems<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,int>
          (TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_> *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)&param_1->field_0x8;
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x38))();
      }
      plVar1 = plVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int> @ 14ea73800

void __cdecl
DestructItems<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int>
          (TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int> @ 14ea73840

void __cdecl
DestructItems<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DrawScreenPass<``AddDrawScreenPass<FCompositeCoreDisplayTransformShader>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14ea73b70

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
DrawScreenPass<__AddDrawScreenPass<FCompositeCoreDisplayTransformShader>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FRHICommandList *param_1,FScreenPassViewInfo *param_2,FScreenPassTextureViewport *param_3
          ,FScreenPassTextureViewport *param_4,FScreenPassPipelineState *param_5,
          EScreenPassDrawFlags param_6,<lambda_1> *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable> *pTVar4;
  FParameters *pFVar5;
  FShaderMapResource *this;
  FShader *this_00;
  FShaderMapBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  atomic<FRHIShader_*> aVar9;
  FShaderParametersMetadata *pFVar10;
  atomic<FRHIShader_*> aVar11;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  
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
  uVar3 = *(undefined8 *)&(param_3->Rect).field0_0x0;
  FRHICommandList::SetViewport
            (param_1,(float)(int)uVar3,(float)(int)((ulonglong)uVar3 >> 0x20),0.0,(float)(int)uVar2,
             (float)(int)((ulonglong)uVar2 >> 0x20),__real_3f800000);
  SetScreenPassPipelineState(param_1,param_5);
  aVar11 = (atomic<FRHIShader_*>)0x0;
  pTVar4 = param_7->PixelShader;
  pFVar5 = *param_7->PixelShaderParameters;
  aVar9 = aVar11;
  if (pTVar4->ShaderContent != (FCompositeCoreDisplayTransformShader *)0x0) {
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
    aVar9 = (this->RHIShaders).Ptr[iVar1];
    if (((aVar9 == (atomic<FRHIShader_*>)0x0) &&
        (aVar9 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this,iVar1,true),
        aVar9 == (atomic<FRHIShader_*>)0x0)) && (aVar9 = aVar11, 4 < (byte)LogShaders._0_1_)) {
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
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  pFVar10 = FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata();
  local_48.ShaderContent = (FShader *)pTVar4->ShaderContent;
  local_48.ShaderMap = pTVar4->ShaderMap;
  ValidateShaderParameters(&local_48,pFVar10,pFVar5);
  SetShaderParameters(param_7->RHICmdList,(FRHIGraphicsShader *)aVar9,
                      (FShaderParameterBindings *)pTVar4->ShaderContent,pFVar10,pFVar5);
  DrawScreenPass_PostSetup(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// Enqueue<TRenderCommandTag<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork142>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ea748e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FCompositeCoreSceneViewExtension::SetRenderWork_GameThread_::__l2::TSTR_CopyCompositeCoreRenderWork142>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork142>
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
      if (bVar8) goto LAB_14ea74a31;
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
    goto LAB_14ea74c25;
  }
LAB_14ea74a31:
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
LAB_14ea74b0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea74b0f;
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
LAB_14ea74c25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork180>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ea74c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread_::__l2::TSTR_CopyCompositeCoreRenderWork180>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork180>
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
      if (bVar8) goto LAB_14ea74db1;
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
    goto LAB_14ea74fa5;
  }
LAB_14ea74db1:
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
LAB_14ea74e8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea74e8f;
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
LAB_14ea74fa5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindLastByPredicate<`FCompositeCoreSceneViewExtension::PostProcessWork_RenderThread'::__l2::<lambda_1>_> @ 14ea75090

int __thiscall
TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FCompositeCoreSceneViewExtension::PostProcessWork_RenderThread_::__l2::<lambda_1>_>
          (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar8 = pFVar1 + (longlong)param_2 * 8;
  do {
    do {
      if (pFVar8 == pFVar1) {
        return -1;
      }
      plVar2 = *(longlong **)(pFVar8 + -8);
      pFVar8 = pFVar8 + -8;
    } while (plVar2 == (longlong *)0x0);
    pFVar6 = UE::CompositeCore::FMergePassProxy::GetTypeNameStatic();
    pFVar7 = (FName *)(**(code **)(*plVar2 + 8))(plVar2);
  } while (*pFVar7 != *pFVar6);
  return (int)((longlong)pFVar8 - (longlong)pFVar1 >> 3);
}

// InternalConstructor<UCompositeCorePluginSettings> @ 14ea752d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UCompositeCorePluginSettings>(FObjectInitializer *param_1)

{
  longlong *plVar1;
  UDeveloperSettings *this;
  FObjectInitializer *pFVar2;
  int iVar3;
  undefined1 auStackY_168 [32];
  TStringView<wchar_t> TStack_128;
  FString FStack_118;
  FSoftObjectPath FStack_108;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FSoftObjectPath FStack_b8;
  FSoftObjectPath FStack_98;
  FSoftObjectPath FStack_78;
  FSoftObjectPath FStack_58;
  FSoftObjectPath FStack_38;
  ulonglong uStack_18;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this == (UDeveloperSettings *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar2 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings(this,pFVar2);
  *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
  this->_padding_ = (longlong)&___7UCompositeCorePluginSettings__6B_;
  plVar1 = &this[1]._padding_;
  FString::FString(&FStack_118,"/Script/Engine.CapsuleComponent");
  FStack_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_b8.AssetPath.PackageName.Number = 0;
  FStack_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_b8.AssetPath.AssetName.Number = 0;
  FStack_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.SubPathString.Data.ArrayNum = 0;
  FStack_b8.SubPathString.Data.ArrayMax = 0;
  iVar3 = 0;
  TStack_128.Size = FStack_118.Data.ArrayNum + -1;
  if (FStack_118.Data.ArrayNum == 0) {
    TStack_128.Size = iVar3;
  }
  TStack_128.DataPtr = (wchar_t *)FStack_118.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&FStack_b8,&TStack_128);
  FString::FString((FString *)&FStack_108,"/Script/Engine.BillboardComponent");
  FStack_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_98.AssetPath.PackageName.Number = 0;
  FStack_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_98.AssetPath.AssetName.Number = 0;
  FStack_98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_98.SubPathString.Data.ArrayNum = 0;
  FStack_98.SubPathString.Data.ArrayMax = 0;
  TStack_128.Size = FStack_108.AssetPath.AssetName.ComparisonIndex.Value - 1;
  if (FStack_108.AssetPath.AssetName.ComparisonIndex.Value == 0) {
    TStack_128.Size = iVar3;
  }
  TStack_128.DataPtr = (wchar_t *)FStack_108.AssetPath.PackageName;
  FSoftObjectPath::SetPath(&FStack_98,&TStack_128);
  FString::FString(&FStack_c8,"/Script/Engine.ArrowComponent");
  FStack_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_78.AssetPath.PackageName.Number = 0;
  FStack_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_78.AssetPath.AssetName.Number = 0;
  FStack_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_78.SubPathString.Data.ArrayNum = 0;
  FStack_78.SubPathString.Data.ArrayMax = 0;
  TStack_128.Size = FStack_c8.Data.ArrayNum + -1;
  if (FStack_c8.Data.ArrayNum == 0) {
    TStack_128.Size = iVar3;
  }
  TStack_128.DataPtr = (wchar_t *)FStack_c8.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&FStack_78,&TStack_128);
  FString::FString(&FStack_d8,"/Script/Engine.DrawFrustumComponent");
  FStack_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_58.AssetPath.PackageName.Number = 0;
  FStack_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_58.AssetPath.AssetName.Number = 0;
  FStack_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.SubPathString.Data.ArrayNum = 0;
  FStack_58.SubPathString.Data.ArrayMax = 0;
  TStack_128.Size = FStack_d8.Data.ArrayNum + -1;
  if (FStack_d8.Data.ArrayNum == 0) {
    TStack_128.Size = iVar3;
  }
  TStack_128.DataPtr = (wchar_t *)FStack_d8.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&FStack_58,&TStack_128);
  FString::FString(&FStack_e8,"/Script/Engine.LineBatchComponent");
  FStack_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_38.AssetPath.PackageName.Number = 0;
  FStack_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_38.AssetPath.AssetName.Number = 0;
  FStack_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.SubPathString.Data.ArrayNum = 0;
  FStack_38.SubPathString.Data.ArrayMax = 0;
  TStack_128.Size = FStack_e8.Data.ArrayNum + -1;
  if (FStack_e8.Data.ArrayNum == 0) {
    TStack_128.Size = 0;
  }
  TStack_128.DataPtr = (wchar_t *)FStack_e8.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&FStack_38,&TStack_128);
  *plVar1 = 0;
  *(undefined4 *)&this[1]._padding_ = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,5,0,(ForAnyElementType *)plVar1,5,(int *)((longlong)&this[1]._padding_ + 4));
  ConstructItems<FSoftClassPath,FSoftClassPath,int>((void *)*plVar1,(FSoftClassPath *)&FStack_b8,5);
  if (FStack_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
  }
  if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
  }
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  if (FStack_108.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)FStack_108.AssetPath.PackageName);
  }
  if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
  }
  plVar1 = &this[1]._padding_;
  FString::FString(&FStack_118,"/Script/Text3D.Text3DComponent");
  FStack_108.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_108.AssetPath.PackageName.Number = 0;
  FStack_108.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_108.AssetPath.AssetName.Number = 0;
  FStack_108.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_108.SubPathString.Data.ArrayNum = 0;
  FStack_108.SubPathString.Data.ArrayMax = 0;
  iVar3 = FStack_118.Data.ArrayNum + -1;
  if (FStack_118.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  TStack_128.Size = iVar3;
  TStack_128.DataPtr = (wchar_t *)FStack_118.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&FStack_108,&TStack_128);
  *plVar1 = 0;
  *(undefined4 *)&this[1]._padding_ = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)plVar1,1,(int *)((longlong)&this[1]._padding_ + 4));
  ConstructItems<FSoftClassPath,FSoftClassPath,int>((void *)*plVar1,(FSoftClassPath *)&FStack_108,1)
  ;
  if (FStack_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
  }
  this[1].CategoryName.ComparisonIndex.Value = 0x65;
  this[1].SectionName.ComparisonIndex = 0;
  this[1].SectionName.Number = 0;
  this[2]._padding_ = 0;
  *(undefined1 *)&this[2]._padding_ = 1;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  *(undefined1 *)&this[2]._padding_ = 1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[2].CategoryName,4000);
  return;
}

// InternalConstructor<UCompositeCoreSubsystem> @ 14ea752f0

void __cdecl InternalConstructor<UCompositeCoreSubsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this);
    this->_padding_ = (longlong)&UCompositeCoreSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UCompositeCoreSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UHoldoutCompositeComponent> @ 14ea75340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UHoldoutCompositeComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UHoldoutCompositeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UHoldoutCompositeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UHoldoutCompositeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    if (UE::CompositeCore::GRegisterPrimitivesOnTick != false) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
      *pbVar1 = *pbVar1 | 7;
      pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
      *pbVar1 = *pbVar1 | 0x80;
      pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
      *pbVar1 = *pbVar1 | 8;
      *(undefined1 *)&this->_padding_ = 5;
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UCompositeCorePluginSettings> @ 14ea753b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCompositeCorePluginSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCompositeCorePluginSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UCompositeCorePluginSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[2].CategoryName,4000);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCompositeCoreSubsystem> @ 14ea754a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCompositeCoreSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCompositeCoreSubsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&UCompositeCoreSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UCompositeCoreSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHoldoutCompositeComponent> @ 14ea75560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UHoldoutCompositeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHoldoutCompositeComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&UHoldoutCompositeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UHoldoutCompositeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UHoldoutCompositeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// LowerBoundInternal<TTuple<int,UE::CompositeCore::FPassTexture>_const_,int,int,TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14ea75630

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,UE::CompositeCore::FPassTexture>_const_,int,int,TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,UE::CompositeCore::FPassTexture> *param_1,int param_2,int *param_3,
          FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>_const_,int,unsigned_int,TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_> @ 14ea75680

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>_const_,int,unsigned_int,TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_>
          (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *param_1,int param_2,
          uint *param_3,FKeyForward param_4,TLess<unsigned_int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>_const_,int,unsigned_int,TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_> @ 14ea756d0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>_const_,int,unsigned_int,TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_>
          (TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_> *param_1,int param_2,
          uint *param_3,FKeyForward param_4,TLess<unsigned_int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>_const_,int,unsigned_int,TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_> @ 14ea75730

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>_const_,int,unsigned_int,TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::FKeyForward,TLess<unsigned_int_const_>_>
          (TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
           *param_1,int param_2,uint *param_3,FKeyForward param_4,TLess<unsigned_int_const_> param_5
          )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>_const_,int,FCompositeCorePassProxy_const_*,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>::FKeyForward,TLess<FCompositeCorePassProxy_const_*>_> @ 14ea75780

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_>_const_,int,FCompositeCorePassProxy_const_*,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>::FKeyForward,TLess<FCompositeCorePassProxy_const_*>_>
          (TTuple<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_> *param_1,
          int param_2,FCompositeCorePassProxy **param_3,FKeyForward param_4,
          TLess<FCompositeCorePassProxy_const_*> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(FCompositeCorePassProxy **)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,enum_ISceneViewExtension::EPostProcessingPass,TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>::FKeyForward,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_> @ 14ea757d0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,enum_ISceneViewExtension::EPostProcessingPass,TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>::FKeyForward,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
          (TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,EPostProcessingPass *param_3,FKeyForward param_4,
          TLess<ISceneViewExtension::EPostProcessingPass_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(EPostProcessingPass *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// StaticEnum<enum_ECompositeCoreMergeOp> @ 14ea75990

UEnum * __cdecl StaticEnum<enum_ECompositeCoreMergeOp>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECompositeCoreMergeOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CompositeCore();
    Z_Registration_Info_UEnum_ECompositeCoreMergeOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CompositeCore_ECompositeCoreMergeOp,(UObject *)pUVar1,
                       L"ECompositeCoreMergeOp");
  }
  return Z_Registration_Info_UEnum_ECompositeCoreMergeOp.OuterSingleton;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FCompositeCoreDilateShader> @ 14ea759d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FCompositeCoreDilateShader>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FCompositeCoreDilateShader *pFVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  void *_Dst;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 local_res20 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    if (0 < *(int *)&param_1->field_0xd8) {
      local_res20[0] = 0;
      bVar7 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                        (local_res20);
      if (!bVar7) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
    }
    pFVar4 = param_2->ShaderContent;
    puVar1 = &param_1->field_0xd0;
    if ((*(short *)&pFVar4->field_0x54 != -1) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar11 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar11 & 1) != 0) {
      puVar11 = &pFVar4->field_0x10 + ((longlong)puVar11 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar12 = puVar11 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pbVar12 + -2 == puVar11 + (longlong)iVar3 * 4) break;
      if ((pbVar12[1] == 7) || ((pbVar12[1] - 0xe & 0xfb) == 0)) {
        iVar8 = *(int *)&param_1->field_0xd8;
        bVar2 = *pbVar12;
        if (iVar8 == *(int *)&param_1->field_0xdc) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar8 + 1;
        lVar5 = *(longlong *)puVar1;
        *(ushort *)(lVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        *(undefined1 *)(lVar5 + (longlong)iVar8 * 4 + 2) = 1;
      }
      pbVar12 = pbVar12 + 4;
    }
    iVar3 = *(int *)&param_1->field_0xd8;
    if (0 < iVar3) {
      _Src = *(void **)puVar1;
      local_68 = _Src;
      iStack_60 = iVar3;
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar10;
          *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
          _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)iVar3 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar3 << 2);
          puVar10[1] = 0;
          *puVar10 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
          puVar10[3] = _Dst;
          puVar10[4] = CONCAT44(uStack_4c,iVar3);
          puVar10[2] = param_3;
          local_58 = _Dst;
          iStack_50 = iVar3;
        }
        else {
          pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          local_48 = (undefined4)local_68;
          uStack_44 = local_68._4_4_;
          iStack_40 = iStack_60;
          uStack_3c = uStack_5c;
          (**(code **)(pIVar9->_padding_ + 0xa8))(pIVar9,param_3,&local_48);
        }
      }
      *(undefined4 *)&param_1->field_0xd8 = 0;
      if (*(int *)&param_1->field_0xdc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)puVar1,0,(int *)&param_1->field_0xdc);
      }
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,1,0> @ 14ea77190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea771ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,1,1> @ 14ea771d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FCompositeCoreSceneViewExtension::SetRenderWork_GameThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0xb0);
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
  CompositeCore::FRenderWork::~FRenderWork((FRenderWork *)((longlong)this + 8));
  return;
}

// operator() @ 14ea77770

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
`AddDrawScreenPass<FCompositeCoreDisplayTransformShader>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScreenPassViewInfo local_38;
  <lambda_1> local_28;
  
  local_38._0_8_ = *(undefined8 *)this;
  local_38._8_8_ = *(undefined8 *)((longlong)this + 8);
  local_28.PixelShader =
       (TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable> *)
       ((longlong)this + 0x80);
  local_28.PixelShaderParameters = (FParameters **)((longlong)this + 0x90);
  local_28.RHICmdList = param_2;
  DrawScreenPass<__AddDrawScreenPass<FCompositeCoreDisplayTransformShader>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_38,(FScreenPassTextureViewport *)((longlong)this + 0x10),
             (FScreenPassTextureViewport *)((longlong)this + 0x28),
             (FScreenPassPipelineState *)((longlong)this + 0x40),
             *(EScreenPassDrawFlags *)((longlong)this + 0x98),&local_28);
  return;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14ea780ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UCompositeCoreSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UCompositeCoreSubsystem::_vector_deleting_destructor__adjustor_56__
          (UCompositeCoreSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCompositeCoreSubsystem *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ea780fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UHoldoutCompositeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UHoldoutCompositeComponent::_vector_deleting_destructor__adjustor_40__
          (UHoldoutCompositeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UHoldoutCompositeComponent *)&this[-1].field_0x238,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ea78110

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78140

void * __thiscall
TCommonDelegateInstanceState<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
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

// `scalar_deleting_destructor' @ 14ea781e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0xb0);
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
  CompositeCore::FRenderWork::~FRenderWork((FRenderWork *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78260

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<UE::CompositeCore::FMergePassProxy>::_scalar_deleting_destructor_
          (TObject<UE::CompositeCore::FMergePassProxy> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFMergePassProxy_CompositeCore_UE_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)&this[1].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[1].field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea782b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FCompositeCoreDilateShader::FParameters>::_scalar_deleting_destructor_
          (TObject<FCompositeCoreDilateShader::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea782e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FCompositeCoreDisplayTransformShader::FParameters>::
_scalar_deleting_destructor_
          (TObject<FCompositeCoreDisplayTransformShader::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78310

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FCompositeCoreMergeShader::FParameters>::_scalar_deleting_destructor_
          (TObject<FCompositeCoreMergeShader::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78340

void * __thiscall
TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`AddDrawScreenPass<FCompositeCoreDisplayTransformShader>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14ea783a0

void * __thiscall
TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14ea78400

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 14ea78460

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCompositeCoreSceneViewExtension,SharedPointerInternals::DefaultDeleter<FCompositeCoreSceneViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCompositeCoreSceneViewExtension,SharedPointerInternals::DefaultDeleter<FCompositeCoreSceneViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea784a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FCompositeCoreCustomRenderPass::_scalar_deleting_destructor_
          (FCompositeCoreCustomRenderPass *this,uint param_1)

{
  FCustomRenderPassBase::~FCustomRenderPassBase((FCustomRenderPassBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea784e0

void * __thiscall
FCompositeCorePassProxy::_scalar_deleting_destructor_(FCompositeCorePassProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PassDeclaredInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78530

void * __thiscall
FCompositeCoreSceneViewExtension::_scalar_deleting_destructor_
          (FCompositeCoreSceneViewExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7FCompositeCoreSceneViewExtension__6B_;
  DestructItems<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int>
            ((TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
              *)(this->CachedOutputsPerView_RenderThread).Pairs.AllocatorInstance.Data,
             (this->CachedOutputsPerView_RenderThread).Pairs.ArrayNum);
  pFVar1 = (this->CachedOutputsPerView_RenderThread).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->SceneCapturesUpdateQueue).AllocatorInstance.Data;
  if (pTVar2 != (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar2);
  }
  (this->AllowedViewModes).HashSize = 0;
  FVar3 = (this->AllowedViewModes).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AllowedViewModes);
  if ((this->RenderWork_RenderThread).bIsSet != false) {
    UE::CompositeCore::FRenderWork::~FRenderWork(&(this->RenderWork_RenderThread).TypedValue);
  }
  DestructItems<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,int>
            ((TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_> *)
             (this->CustomRenderTargetPerView_RenderThread).Pairs.AllocatorInstance.Data,
             (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum);
  pFVar1 = (this->CustomRenderTargetPerView_RenderThread).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
            ((TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
             (this->ExternalInputs_RenderThread).Pairs.AllocatorInstance.Data,
             (this->ExternalInputs_RenderThread).Pairs.ArrayNum);
  pFVar1 = (this->ExternalInputs_RenderThread).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CompositePrimitives).HashSize = 0;
  FVar3 = (this->CompositePrimitives).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CompositePrimitives).Elements);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78660

void * __thiscall
UE::CompositeCore::FFXAAPassProxy::_scalar_deleting_destructor_(FFXAAPassProxy *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea786b0

void * __thiscall
UE::CompositeCore::FMergePassProxy::_scalar_deleting_destructor_(FMergePassProxy *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78700

void * __thiscall
UCompositeCorePluginSettings::_scalar_deleting_destructor_
          (UCompositeCorePluginSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCompositeCorePluginSettings__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedAllowedComponentClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedDisabledPrimitiveClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)(this->AllowedComponentClasses).AllocatorInstance.Data,
             (this->AllowedComponentClasses).ArrayNum);
  pFVar1 = (this->AllowedComponentClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)(this->DisabledPrimitiveClasses).AllocatorInstance.Data,
             (this->DisabledPrimitiveClasses).ArrayNum);
  pFVar1 = (this->DisabledPrimitiveClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea787d0

void * __thiscall
UCompositeCoreSubsystem::_scalar_deleting_destructor_(UCompositeCoreSubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CompositeCoreViewExtension).SharedReferenceCount.ReferenceController);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea78850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UHoldoutCompositeComponent::_scalar_deleting_destructor_
          (UHoldoutCompositeComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x260);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCompositeCorePassMergeProxy @ 14ea7d1c0

void __cdecl EmptyLinkFunctionForGeneratedCodeCompositeCorePassMergeProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCompositeCoreSettings @ 14ea7d1d0

void __cdecl EmptyLinkFunctionForGeneratedCodeCompositeCoreSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCompositeCoreSubsystem @ 14ea7d1e0

void __cdecl EmptyLinkFunctionForGeneratedCodeCompositeCoreSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCompositeCore_init @ 14ea7d1f0

void __cdecl EmptyLinkFunctionForGeneratedCodeCompositeCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHoldoutCompositeComponent @ 14ea7d200

void __cdecl EmptyLinkFunctionForGeneratedCodeHoldoutCompositeComponent(void)

{
  return;
}

// Z_Construct_UClass_UCompositeCorePluginSettings_NoRegister @ 14ea83f40

UClass * __cdecl Z_Construct_UClass_UCompositeCorePluginSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"CompositeCorePluginSettings",
               &Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton,
               UCompositeCorePluginSettings::StaticRegisterNativesUCompositeCorePluginSettings,0xc0,
               8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCompositeCorePluginSettings>,
               InternalVTableHelperCtorCaller<UCompositeCorePluginSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCorePluginSettings.InnerSingleton;
}

// Z_Construct_UClass_UCompositeCoreSubsystem_NoRegister @ 14ea84000

UClass * __cdecl Z_Construct_UClass_UCompositeCoreSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"CompositeCoreSubsystem",
               &Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton,
               UCompositeCoreSubsystem::StaticRegisterNativesUCompositeCoreSubsystem,0x58,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCompositeCoreSubsystem>,
               InternalVTableHelperCtorCaller<UCompositeCoreSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UHoldoutCompositeComponent_NoRegister @ 14ea840c0

UClass * __cdecl Z_Construct_UClass_UHoldoutCompositeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"HoldoutCompositeComponent",
               &Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton,
               UHoldoutCompositeComponent::StaticRegisterNativesUHoldoutCompositeComponent,0x260,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHoldoutCompositeComponent>,
               InternalVTableHelperCtorCaller<UHoldoutCompositeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton;
}

// Z_Construct_UEnum_CompositeCore_ECompositeCoreMergeOp @ 14ea84180

UEnum * __cdecl Z_Construct_UEnum_CompositeCore_ECompositeCoreMergeOp(void)

{
  if (Z_Registration_Info_UEnum_ECompositeCoreMergeOp.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECompositeCoreMergeOp.InnerSingleton,
               &Z_Construct_UEnum_CompositeCore_ECompositeCoreMergeOp_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECompositeCoreMergeOp.InnerSingleton;
}

// IMPLEMENT_MODULE_CompositeCore @ 14ea86920

void __cdecl IMPLEMENT_MODULE_CompositeCore(void)

{
  return;
}

// OnComponentCreatedDelegate'' @ 15046e0c0

void __cdecl
`dynamic_atexit_destructor_for_'UHoldoutCompositeComponent::OnComponentCreatedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UHoldoutCompositeComponent::OnComponentCreatedDelegate._8_8_,
             UHoldoutCompositeComponent::OnComponentCreatedDelegate._16_4_);
  if (UHoldoutCompositeComponent::OnComponentCreatedDelegate._8_8_ != 0) {
    FMemory::Free((void *)UHoldoutCompositeComponent::OnComponentCreatedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UHoldoutCompositeComponent::OnComponentCreatedDelegate
            );
  return;
}

// ShaderTypeRegistration'' @ 15046e100

void __cdecl
`dynamic_atexit_destructor_for_'FCompositeCoreDilateShader::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 15046e110

void __cdecl
`dynamic_atexit_destructor_for_'FCompositeCoreDisplayTransformShader::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 15046e120

void __cdecl
`dynamic_atexit_destructor_for_'FCompositeCoreMergeShader::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 15046e130

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

// StaticResource'' @ 15046e1b0

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

// StaticResource'' @ 15046e230

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

// StaticResource'' @ 15046e2b0

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

// `dynamic_atexit_destructor_for_'CVarCompositeCoreApplyFXAA'' @ 15046e330

void __cdecl _dynamic_atexit_destructor_for__CVarCompositeCoreApplyFXAA__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompositeCoreApplyFXAA);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompositeCoreApplyPreExposure'' @ 15046e350

void __cdecl _dynamic_atexit_destructor_for__CVarCompositeCoreApplyPreExposure__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompositeCoreApplyPreExposure);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompositeCoreDebugDilationSize'' @ 15046e370

void __cdecl _dynamic_atexit_destructor_for__CVarCompositeCoreDebugDilationSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompositeCoreDebugDilationSize)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarRefreshPrimitivesOnTick'' @ 15046e390

void __cdecl _dynamic_atexit_destructor_for__CVarRefreshPrimitivesOnTick__(void)

{
  CVarRefreshPrimitivesOnTick._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRefreshPrimitivesOnTick);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultRenderWork'' @ 15046e3b0

void __cdecl
`UE::CompositeCore::FRenderWork::GetDefault'::__l2::
_dynamic_atexit_destructor_for__DefaultRenderWork__(void)

{
  if (DefaultRenderWork.SceneCapturesUpdateQueue.AllocatorInstance.Data !=
      (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (DefaultRenderWork.SceneCapturesUpdateQueue.AllocatorInstance.Data);
  }
  DefaultRenderWork.AllowedViewModes.HashSize = 0;
  if (DefaultRenderWork.AllowedViewModes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)DefaultRenderWork.AllowedViewModes.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&DefaultRenderWork.AllowedViewModes);
  TDefaultDelete<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_>::
  operator()((TDefaultDelete<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_>
              *)&DefaultRenderWork.FrameAllocator,DefaultRenderWork.FrameAllocator.Ptr);
  DestructItems<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
              *)DefaultRenderWork.FramePasses.Pairs.AllocatorInstance.Data,
             DefaultRenderWork.FramePasses.Pairs.ArrayNum);
  if (DefaultRenderWork.FramePasses.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(DefaultRenderWork.FramePasses.Pairs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
              *)DefaultRenderWork.PreprocessingPasses.Pairs.AllocatorInstance.Data,
             DefaultRenderWork.PreprocessingPasses.Pairs.ArrayNum);
  if (DefaultRenderWork.PreprocessingPasses.Pairs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultRenderWork.PreprocessingPasses.Pairs.AllocatorInstance.Data);
  }
  if (DefaultRenderWork.ExternalInputs.AllocatorInstance.Data != (FExternalTexture *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (DefaultRenderWork.ExternalInputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046e470

void __cdecl
```UE::CompositeCore::FFXAAPassProxy::Add'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046e477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046e490

void __cdecl
```UE::CompositeCore::Private::AddDilatePass'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046e497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046e4b0

void __cdecl
```UE::CompositeCore::Private::AddDisplayTransformPass'::__l7::Desc::operator()<>'::__l3::<lambda_1>
::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046e4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046e4d0

void __cdecl
```UE::CompositeCore::FMergePassProxy::Add'::__l14::<lambda_1>::
operator()<wchar_t_const_*_const_&,int,int>'::__l3::<lambda_2>::
operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046e4d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'FXAAPassProxy'' @ 15046e4f0

void __cdecl
`FCompositeCoreSceneViewExtension::PrePostProcessPass_RenderThread'::__l5::
_dynamic_atexit_destructor_for__FXAAPassProxy__(void)

{
  longlong lVar1;
  FLowLevelMemTracker *this;
  
  lVar1 = FXAAPassProxy._padding_;
  if (FXAAPassProxy._padding_ == 0) {
    return;
  }
  if (FXAAPassProxy._padding_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)lVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,lVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FCompositeCoreDilate'' @ 15046e510

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FCompositeCoreDilate__(void)

{
  GPUStat_FCompositeCoreDilate._104_4_ = 0;
  if (GPUStat_FCompositeCoreDilate._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FCompositeCoreDilate._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FCompositeCoreDilate.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FCompositeCoreDisplayTransform'' @ 15046e550

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FCompositeCoreDisplayTransform__(void)

{
  GPUStat_FCompositeCoreDisplayTransform._104_4_ = 0;
  if (GPUStat_FCompositeCoreDisplayTransform._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FCompositeCoreDisplayTransform._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FCompositeCoreDisplayTransform.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FCompositeCoreFXAA'' @ 15046e590

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FCompositeCoreFXAA__(void)

{
  GPUStat_FCompositeCoreFXAA._104_4_ = 0;
  if (GPUStat_FCompositeCoreFXAA._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FCompositeCoreFXAA._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FCompositeCoreFXAA.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FCompositeCoreMerge'' @ 15046e5d0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FCompositeCoreMerge__(void)

{
  GPUStat_FCompositeCoreMerge._104_4_ = 0;
  if (GPUStat_FCompositeCoreMerge._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FCompositeCoreMerge._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FCompositeCoreMerge.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'LogCompositeCore'' @ 15046e610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCompositeCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCompositeCore);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046e630

void __cdecl
`FCompositeCoreMergeShader::FInputPassTextureParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCompositeCoreMergeShader::FInputPassTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046e650

void __cdecl
`FCompositeCoreDilateShader::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCompositeCoreDilateShader::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046e670

void __cdecl
`FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCompositeCoreDisplayTransformShader::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046e690

void __cdecl
`FCompositeCoreMergeShader::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCompositeCoreMergeShader::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15046e6b0

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
`FCompositeCoreDilateShader::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15046e6d0

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
`FCompositeCoreDisplayTransformShader::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 15046e6f0

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
`FCompositeCoreMergeShader::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

