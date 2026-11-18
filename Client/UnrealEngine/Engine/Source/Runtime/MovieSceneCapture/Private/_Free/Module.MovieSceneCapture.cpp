// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 288

// MovieSceneCaptureUIName'' @ 1410a9600

void __cdecl `dynamic_initializer_for_'UMovieSceneCapture::MovieSceneCaptureUIName__(void)

{
  ::FName::FName(&UMovieSceneCapture::MovieSceneCaptureUIName,L"MovieSceneCaptureUIInstance");
  return;
}

// Singleton'' @ 1410a9620

void __cdecl `dynamic_initializer_for_'FActiveMovieSceneCaptures::Singleton__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FActiveMovieSceneCaptures::Singleton__);
  return;
}

// StaticResource'' @ 1410a9640

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

// StaticResource'' @ 1410a9700

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

// StaticResource'' @ 1410a97c0

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

// StaticResource'' @ 1410a9880

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

// StaticResource'' @ 1410a9a20

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

// `dynamic_initializer_for_'CVarFrameGrabberFrameLatency'' @ 1410a9bc0

void __cdecl _dynamic_initializer_for__CVarFrameGrabberFrameLatency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFrameGrabberFrameLatency,L"framegrabber.framelatency",&GFrameGrabberFrameLatency,
             L"How many frames to wait before reading back a frame. 0 frames will work but cause a performance regression due to CPU and GPU syncing up.\n"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarFrameGrabberFrameLatency__);
  return;
}

// `dynamic_initializer_for_'LogMovieSceneCapture'' @ 1410a9c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMovieSceneCapture__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMovieSceneCapture,L"LogMovieSceneCapture",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMovieSceneCapture__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410a9c50

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMovieSceneCapture'' @ 1410a9c70

void __cdecl _dynamic_initializer_for__ModuleRegistrantMovieSceneCapture__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MovieSceneCapture";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MovieSceneCapture",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMovieSceneCaptureModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnBeginFinalize'' @ 1410a9cc0

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnBeginFinalize__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnBeginFinalize,L"OnBeginFinalize");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnCanFinalize'' @ 1410a9ce0

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnCanFinalize__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnCanFinalize,L"OnCanFinalize");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnCaptureFrame'' @ 1410a9d00

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnCaptureFrame__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnCaptureFrame,L"OnCaptureFrame");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnFinalize'' @ 1410a9d20

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnFinalize__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnFinalize,L"OnFinalize");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnPauseCapture'' @ 1410a9d40

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnPauseCapture__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnPauseCapture,L"OnPauseCapture");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnPixelsReceived'' @ 1410a9d60

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnPixelsReceived__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnPixelsReceived,L"OnPixelsReceived");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnPreTick'' @ 1410a9d80

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnPreTick__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnPreTick,L"OnPreTick");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnSetup'' @ 1410a9da0

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnSetup__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnSetup,L"OnSetup");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnStartCapture'' @ 1410a9dc0

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnStartCapture__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnStartCapture,L"OnStartCapture");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnTick'' @ 1410a9de0

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnTick__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnTick,L"OnTick");
  return;
}

// `dynamic_initializer_for_'NAME_UUserDefinedCaptureProtocol_OnWarmUp'' @ 1410a9e00

void __cdecl _dynamic_initializer_for__NAME_UUserDefinedCaptureProtocol_OnWarmUp__(void)

{
  FName::FName(&NAME_UUserDefinedCaptureProtocol_OnWarmUp,L"OnWarmUp");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h__Script_MovieSceneCapture_2893295414'' @ 1410a9e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h__Script_MovieSceneCapture_2893295414__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h__Script_MovieSceneCapture_2058758933'' @ 1410a9e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h__Script_MovieSceneCapture_2058758933__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h__Script_MovieSceneCapture_4119960581'' @ 1410a9ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h__Script_MovieSceneCapture_4119960581__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h__Script_MovieSceneCapture_993368809'' @ 1410a9ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h__Script_MovieSceneCapture_993368809__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h__Script_MovieSceneCapture_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h__Script_MovieSceneCapture_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureSettings_h__Script_MovieSceneCapture_3491841644'' @ 1410a9f30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureSettings_h__Script_MovieSceneCapture_3491841644__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureSettings_h__Script_MovieSceneCapture_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h__Script_MovieSceneCapture_3392579077'' @ 1410a9f70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h__Script_MovieSceneCapture_3392579077__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h__Script_MovieSceneCapture_2599123093'' @ 1410a9fb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h__Script_MovieSceneCapture_2599123093__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h__Script_MovieSceneCapture_2294214410'' @ 1410a9ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h__Script_MovieSceneCapture_2294214410__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h__Script_MovieSceneCapture_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h__Script_MovieSceneCapture_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h__Script_MovieSceneCapture_1715436101'' @ 1410aa040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h__Script_MovieSceneCapture_1715436101__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h__Script_MovieSceneCapture_2010249216'' @ 1410aa080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h__Script_MovieSceneCapture_2010249216__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h__Script_MovieSceneCapture_2768104264'' @ 1410aa0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h__Script_MovieSceneCapture_2768104264__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h__Script_MovieSceneCapture_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h__Script_MovieSceneCapture_2378381538'' @ 1410aa110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h__Script_MovieSceneCapture_2378381538__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneCapture",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h__Script_MovieSceneCapture_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MovieSceneCapture'' @ 1410aa150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MovieSceneCapture__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x395bdc6b;
  local_res8[0].DeclarationsHash = 0x4050169c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MovieSceneCapture,L"/Script/MovieSceneCapture",
             &Z_Registration_Info_UPackage__Script_MovieSceneCapture,local_res8);
  return;
}

// Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol @ 146bcfd40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol @ 146bcfd80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType @ 146bcfe80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146bd0130

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneCaptureModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieSceneCaptureModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType @ 146bd0160

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelCapture @ 146bd01a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelCapture(void)

{
  if (Z_Registration_Info_UClass_ULevelCapture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelCapture.OuterSingleton,
               &Z_Construct_UClass_ULevelCapture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelCapture.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCapture @ 146bd01e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCapture(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCapture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCapture.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCapture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCapture.OuterSingleton;
}

// NewProp_bUseSeparateProcess_SetBit @ 146bd0220

void __cdecl
Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
  return;
}

// NewProp_bCloseEditorWhenCaptureStarts_SetBit @ 146bd0230

void __cdecl
Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf9) = 1;
  return;
}

// NewProp_bAutoStartCapture_SetBit @ 146bd0240

void __cdecl
Z_Construct_UClass_ULevelCapture_Statics::NewProp_bAutoStartCapture_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x240) = 1;
  return;
}

// `scalar_deleting_destructor' @ 146bd04e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneCaptureModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieSceneCaptureModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bd07d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneCaptureModule::InitializeFromCommandLine'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UVideoCaptureProtocol @ 146bd0800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVideoCaptureProtocol(void)

{
  if (Z_Registration_Info_UClass_UVideoCaptureProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVideoCaptureProtocol.OuterSingleton,
               &Z_Construct_UClass_UVideoCaptureProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVideoCaptureProtocol.OuterSingleton;
}

// Z_Construct_UClass_UFrameGrabberProtocol @ 146bd0840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFrameGrabberProtocol(void)

{
  if (Z_Registration_Info_UClass_UFrameGrabberProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFrameGrabberProtocol.OuterSingleton,
               &Z_Construct_UClass_UFrameGrabberProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFrameGrabberProtocol.OuterSingleton;
}

// NewProp_bUseCompression_SetBit @ 146bd0880

void __cdecl
Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UClass_UCompositionGraphCaptureProtocol @ 146bd0f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCompositionGraphCaptureProtocol(void)

{
  if (Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton,
               &Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase @ 146bd0f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.OuterSingleton;
}

// Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut @ 146bd0f90

UEnum * __cdecl Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut(void)

{
  if (Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton,
               &Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCompositionGraphCapturePasses @ 146bd0fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompositionGraphCapturePasses(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompositionGraphCapturePasses.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompositionGraphCapturePasses.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompositionGraphCapturePasses.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompositionGraphCapturePasses.InnerSingleton;
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

// EHDRCaptureGamut_StaticEnum @ 146bd1050

UEnum * __cdecl EHDRCaptureGamut_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut,(UObject *)pUVar1,
                       L"EHDRCaptureGamut");
  }
  return Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton;
}

// NewStructOps @ 146bd1090

void * __cdecl Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompositionGraphCapturePasses,&UE::CoreUObject::Private::Construct<FCompositionGraphCapturePasses>,&UE::CoreUObject::Private::ConstructForTests<FCompositionGraphCapturePasses>,&UE::CoreUObject::Private::Destruct<FCompositionGraphCapturePasses>,&UE::CoreUObject::Private::Copy<FCompositionGraphCapturePasses>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCaptureFramesInHDR_SetBit @ 146bd10d0

void __cdecl
Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bDisableScreenPercentage_SetBit @ 146bd10e0

void __cdecl
Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// `scalar_deleting_destructor' @ 146bd1d90

void * __thiscall
FMovieSceneCaptureModule::_scalar_deleting_destructor_(FMovieSceneCaptureModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneCaptureProtocolBase @ 146bd2070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCaptureProtocolBase(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.OuterSingleton;
}

// Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState @ 146bd20b0

UEnum * __cdecl Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.InnerSingleton,
               &Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FFrameMetrics @ 146bd20f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFrameMetrics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFrameMetrics.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFrameMetrics.InnerSingleton,
               &Z_Construct_UScriptStruct_FFrameMetrics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFrameMetrics.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFrameMetrics.InnerSingleton;
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

// EMovieSceneCaptureProtocolState_StaticEnum @ 146bd2170

UEnum * __cdecl EMovieSceneCaptureProtocolState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState,
                       (UObject *)pUVar1,L"EMovieSceneCaptureProtocolState");
  }
  return Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState @ 146bd2230

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146bd2280

void __cdecl
Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing @ 146bd22b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneCaptureEnvironment @ 146bd24a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCaptureEnvironment(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol @ 146bd24e0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol @ 146bd2520

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime @ 146bd2560

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146bd25a0

void * __cdecl Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFrameMetrics,&UE::CoreUObject::Private::Construct<FFrameMetrics>,&UE::CoreUObject::Private::ConstructForTests<FFrameMetrics>,&UE::CoreUObject::Private::Destruct<FFrameMetrics>,&UE::CoreUObject::Private::Copy<FFrameMetrics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber @ 146bd25e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146bd2620

void __cdecl
Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress @ 146bd2630

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUserDefinedCaptureProtocol @ 146bd2670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserDefinedCaptureProtocol(void)

{
  if (Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.OuterSingleton,
               &Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.OuterSingleton;
}

// Z_Construct_UClass_UUserDefinedImageCaptureProtocol @ 146bd26b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserDefinedImageCaptureProtocol(void)

{
  if (Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.OuterSingleton,
               &Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCapturedPixels @ 146bd26f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCapturedPixels(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCapturedPixels.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCapturedPixels.InnerSingleton,
               &Z_Construct_UScriptStruct_FCapturedPixels_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCapturedPixels.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCapturedPixels.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCapturedPixelsID @ 146bd2770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCapturedPixelsID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCapturedPixelsID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCapturedPixelsID.InnerSingleton,
               &Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCapturedPixelsID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCapturedPixelsID.InnerSingleton;
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

// NewStructOps @ 146bd27f0

void * __cdecl Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCapturedPixelsID,&UE::CoreUObject::Private::Construct<FCapturedPixelsID>,&UE::CoreUObject::Private::ConstructForTests<FCapturedPixelsID>,&UE::CoreUObject::Private::Destruct<FCapturedPixelsID>,&UE::CoreUObject::Private::Copy<FCapturedPixelsID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146bd2830

void * __cdecl Z_Construct_UScriptStruct_FCapturedPixels_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCapturedPixels,&UE::CoreUObject::Private::Construct<FCapturedPixels>,&UE::CoreUObject::Private::ConstructForTests<FCapturedPixels>,&UE::CoreUObject::Private::Destruct<FCapturedPixels>,&UE::CoreUObject::Private::Copy<FCapturedPixels>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename @ 146bd2870

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146bd28b0

void * __thiscall
IMovieSceneCaptureModule::_scalar_deleting_destructor_(IMovieSceneCaptureModule *this,uint param_1)

{
  *this = (IMovieSceneCaptureModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics @ 146bd28f0

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize @ 146bd29b0

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister @ 146bd29f0

UClass * __cdecl Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton,
               UMovieSceneCaptureProtocolBase::StaticRegisterNativesUMovieSceneCaptureProtocolBase,
               0x58,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureProtocolBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister @ 146bd2aa0

UClass * __cdecl Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneImageCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton,
               UMovieSceneImageCaptureProtocolBase::
               StaticRegisterNativesUMovieSceneImageCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneImageCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneImageCaptureProtocolBase>,local_res8,
               UMovieSceneCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister @ 146bd2b60

UClass * __cdecl Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneAudioCaptureProtocolBase",
               &Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton,
               UMovieSceneAudioCaptureProtocolBase::
               StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneAudioCaptureProtocolBase>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioCaptureProtocolBase>,local_res8,
               UMovieSceneCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 146bd2c20

void __cdecl
Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize @ 146bd2c30

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame @ 146bd2c70

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize @ 146bd2cb0

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture @ 146bd2da0

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived @ 146bd2e10

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick @ 146bd2f90

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146bd3090

void __cdecl
Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup @ 146bd30a0

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture @ 146bd30e0

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick @ 146bd3160

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp @ 146bd3260

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCompressedImageSequenceProtocol @ 146bd32a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCompressedImageSequenceProtocol(void)

{
  if (Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton,
               &Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol @ 146bd32e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol(void)

{
  if (Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton,
               &Z_Construct_UClass_UImageSequenceProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_BMP @ 146bd3320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_BMP(void)

{
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton,
               &Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer @ 146bd3360

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UImageSequenceProtocol_EXR @ 146bd33a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_EXR(void)

{
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton,
               &Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_JPG @ 146bd33e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_JPG(void)

{
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton,
               &Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_PNG @ 146bd3420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_PNG(void)

{
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton,
               &Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels @ 146bd3520

UFunction * __cdecl
Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels @ 146bd3560

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol @ 146bd35a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol(void)

{
  if (Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.OuterSingleton,
               &Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase @ 146bd35e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.OuterSingleton;
}

// Z_Construct_UClass_UNullAudioCaptureProtocol @ 146bd3620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNullAudioCaptureProtocol(void)

{
  if (Z_Registration_Info_UClass_UNullAudioCaptureProtocol.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNullAudioCaptureProtocol.OuterSingleton,
               &Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNullAudioCaptureProtocol.OuterSingleton;
}

// Z_Construct_UPackage__Script_MovieSceneCapture @ 146bd3660

UPackage * __cdecl Z_Construct_UPackage__Script_MovieSceneCapture(void)

{
  if (Z_Registration_Info_UPackage__Script_MovieSceneCapture.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MovieSceneCapture.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_MovieSceneCapture.OuterSingleton;
}

// NewProp_bCompressed_SetBit @ 146bd36e0

void __cdecl
Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer @ 146bd3760

UFunction * __cdecl
Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame @ 146bd3800

UFunction * __cdecl
Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCopyImageData_SetBit @ 146bd3840

void __cdecl
Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::
NewProp_bCopyImageData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk @ 146bd3850

UFunction * __cdecl Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneCaptureInterface @ 146bd3890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCaptureInterface(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCaptureInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCaptureInterface.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCaptureInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureInterface.OuterSingleton;
}

// NewProp_bEnableCompression_SetBit @ 146bd38d0

void __cdecl
Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  return;
}

// Z_Construct_UScriptStruct_FCaptureResolution @ 146bd38e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCaptureResolution(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCaptureResolution.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCaptureResolution.InnerSingleton,
               &Z_Construct_UScriptStruct_FCaptureResolution_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCaptureResolution.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCaptureResolution.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneCaptureSettings @ 146bd3960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneCaptureSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCaptureSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneCaptureSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCaptureSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneCaptureSettings.InnerSingleton;
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

// NewStructOps @ 146bd39e0

void * __cdecl Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCaptureResolution,&UE::CoreUObject::Private::Construct<FCaptureResolution>,&UE::CoreUObject::Private::ConstructForTests<FCaptureResolution>,&UE::CoreUObject::Private::Destruct<FCaptureResolution>,&UE::CoreUObject::Private::Copy<FCaptureResolution>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverwriteExisting_SetBit @ 146bd3a80

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bUseRelativeFrameNumbers_SetBit @ 146bd3a90

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::
NewProp_bUseRelativeFrameNumbers_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bUseCustomFrameRate_SetBit @ 146bd3aa0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseCustomFrameRate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bEnableTextureStreaming_SetBit @ 146bd3ab0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bCinematicEngineScalability_SetBit @ 146bd3ac0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::
NewProp_bCinematicEngineScalability_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// NewProp_bCinematicMode_SetBit @ 146bd3ad0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  return;
}

// NewProp_bAllowMovement_SetBit @ 146bd3ae0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 99) = 1;
  return;
}

// NewProp_bAllowTurning_SetBit @ 146bd3af0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return;
}

// NewProp_bShowPlayer_SetBit @ 146bd3b00

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x65) = 1;
  return;
}

// NewProp_bShowHUD_SetBit @ 146bd3b10

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x66) = 1;
  return;
}

// NewProp_bUsePathTracer_SetBit @ 146bd3b20

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x67) = 1;
  return;
}

// NewStructOps @ 146bd3b30

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneCaptureSettings,&UE::CoreUObject::Private::Construct<FMovieSceneCaptureSettings>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneCaptureSettings>,&UE::CoreUObject::Private::Destruct<FMovieSceneCaptureSettings>,&UE::CoreUObject::Private::Copy<FMovieSceneCaptureSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// AddLambda<`FMovieSceneCaptureModule::InitializeFromCommandLine'::__l2::<lambda_1>_> @ 146bd4090

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FMovieSceneCaptureModule::InitializeFromCommandLine_::__l2::<lambda_1>_>
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__InitializeFromCommandLine_FMovieSceneCaptureModule__EEAAPEAVIMovieSceneCaptureInterface__XZ___V__6B_
    ;
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

// ConstructItems<TObjectPtr<UMovieSceneCapture>,TObjectPtr<UMovieSceneCapture>,int> @ 146bd4b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<UMovieSceneCapture>,TObjectPtr<UMovieSceneCapture>,int>
          (void *param_1,TObjectPtr<UMovieSceneCapture> *param_2,int param_3)

{
  TObjectPtr<UMovieSceneCapture> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UMovieSceneCapture>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UMovieSceneCapture>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UMovieSceneCapture *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UMovieSceneCapture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FCapturedFrameData,int> @ 146bd4c00

void __cdecl DestructItems<FCapturedFrameData,int>(FCapturedFrameData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Payload).SharedReferenceCount.ReferenceController);
    pFVar1 = (param_1->ColorBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FFrameGrabber::FResolveSurface,int> @ 146bd4c50

void __cdecl DestructItems<FFrameGrabber::FResolveSurface,int>(FResolveSurface *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Payload).SharedReferenceCount;
    do {
      FViewportSurfaceReader::~FViewportSurfaceReader((FViewportSurfaceReader *)(pFVar1 + 1));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<IFramePayload,1>,int> @ 146bd4c90

void __cdecl
DestructItems<TSharedPtr<IFramePayload,1>,int>(TSharedPtr<IFramePayload,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_>,int> @ 146bd4cd0

void __cdecl
DestructItems<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_>,int>
          (TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_> *param_1,int param_2)

{
  FAVIWriter *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FAVIWriter *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FViewportSurfaceReader::Resize'::__l2::TSTR_CreateCaptureFrameTexture58>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146bd4d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FViewportSurfaceReader::Resize_::__l2::TSTR_CreateCaptureFrameTexture58>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FViewportSurfaceReader::Resize'::__l2::TSTR_CreateCaptureFrameTexture58>
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
      if (bVar8) goto LAB_146bd4e61;
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
    goto LAB_146bd5055;
  }
LAB_146bd4e61:
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
LAB_146bd4f3f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146bd4f3f;
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
LAB_146bd5055:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FFrameGrabber::CaptureThisFrame'::__l2::TSTR_FrameGrabber_AppendFramePayload294>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146bd5090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FFrameGrabber::CaptureThisFrame_::__l2::TSTR_FrameGrabber_AppendFramePayload294>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FFrameGrabber::CaptureThisFrame'::__l2::TSTR_FrameGrabber_AppendFramePayload294>
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
      if (bVar8) goto LAB_146bd51e1;
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
    goto LAB_146bd53d5;
  }
LAB_146bd51e1:
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
LAB_146bd52bf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146bd52bf;
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
LAB_146bd53d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UCompositionGraphCaptureProtocol> @ 146bd5410

void __cdecl InternalConstructor<UCompositionGraphCaptureProtocol>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[2].field_0x2 = 0;
    *(undefined ***)this = &___7UCompositionGraphCaptureProtocol__6B_;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined2 *)(this + 2) = 0;
    this[3].field_0x20 = 1;
  }
  return;
}

// InternalConstructor<UCompressedImageSequenceProtocol> @ 146bd54a0

void __cdecl InternalConstructor<UCompressedImageSequenceProtocol>(FObjectInitializer *param_1)

{
  UImageSequenceProtocol *this;
  
  this = (UImageSequenceProtocol *)param_1->Obj;
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 100;
    this->_padding_ = (longlong)&___7UCompressedImageSequenceProtocol__6B_;
  }
  return;
}

// InternalConstructor<UFrameGrabberProtocol> @ 146bd54e0

void __cdecl InternalConstructor<UFrameGrabberProtocol>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[2].field_0x2 = 0;
    *(undefined ***)this = &___7UFrameGrabberProtocol__6B_;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined2 *)(this + 2) = 0;
    this[2].field_0x8 = 2;
    *(undefined4 *)&this[2].field_0xc = 3;
  }
  return;
}

// InternalConstructor<UImageSequenceProtocol> @ 146bd5540

void __cdecl InternalConstructor<UImageSequenceProtocol>(FObjectInitializer *param_1)

{
  if ((UImageSequenceProtocol *)param_1->Obj != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol((UImageSequenceProtocol *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UImageSequenceProtocol_BMP> @ 146bd5560

void __cdecl InternalConstructor<UImageSequenceProtocol_BMP>(FObjectInitializer *param_1)

{
  UImageSequenceProtocol *this;
  
  this = (UImageSequenceProtocol *)param_1->Obj;
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    this->Format = BMP;
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_BMP__6B_;
  }
  return;
}

// InternalConstructor<UImageSequenceProtocol_EXR> @ 146bd55a0

void __cdecl InternalConstructor<UImageSequenceProtocol_EXR>(FObjectInitializer *param_1)

{
  UImageSequenceProtocol *this;
  
  this = (UImageSequenceProtocol *)param_1->Obj;
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    this->Format = EXR;
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_EXR__6B_;
    *(undefined2 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UImageSequenceProtocol_JPG> @ 146bd55e0

void __cdecl InternalConstructor<UImageSequenceProtocol_JPG>(FObjectInitializer *param_1)

{
  UImageSequenceProtocol *this;
  
  this = (UImageSequenceProtocol *)param_1->Obj;
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 100;
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_JPG__6B_;
    this->Format = JPEG;
  }
  return;
}

// InternalConstructor<UImageSequenceProtocol_PNG> @ 146bd5620

void __cdecl InternalConstructor<UImageSequenceProtocol_PNG>(FObjectInitializer *param_1)

{
  UImageSequenceProtocol *this;
  
  this = (UImageSequenceProtocol *)param_1->Obj;
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 100;
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_PNG__6B_;
    this->Format = PNG;
  }
  return;
}

// InternalConstructor<ULevelCapture> @ 146bd5660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelCapture>(FObjectInitializer *param_1)

{
  UMovieSceneCapture *this;
  
  this = (UMovieSceneCapture *)param_1->Obj;
  if (this != (UMovieSceneCapture *)0x0) {
    UMovieSceneCapture::UMovieSceneCapture(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&ULevelCapture::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULevelCapture::_vftable__for__IMovieSceneCaptureInterface__;
    this->_padding_ = (longlong)&ULevelCapture::_vftable__for__ICaptureProtocolHost__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UMasterAudioSubmixCaptureProtocol> @ 146bd56d0

void __cdecl InternalConstructor<UMasterAudioSubmixCaptureProtocol>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[2].field_0x2 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    this[3].field_0x10 = 0;
    *(undefined2 *)(this + 2) = 0;
    *(undefined ***)this = &___7UMasterAudioSubmixCaptureProtocol__6B_;
    FString::operator=((FString *)&this[2].field_0x8,L"{world}");
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneAudioCaptureProtocolBase> @ 146bd5750

void __cdecl InternalConstructor<UMovieSceneAudioCaptureProtocolBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMovieSceneAudioCaptureProtocolBase__6B_;
    *(undefined2 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[2].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCapture> @ 146bd57a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneCapture>(FObjectInitializer *param_1)

{
  if ((UMovieSceneCapture *)param_1->Obj != (UMovieSceneCapture *)0x0) {
    UMovieSceneCapture::UMovieSceneCapture((UMovieSceneCapture *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneCaptureEnvironment> @ 146bd57c0

void __cdecl InternalConstructor<UMovieSceneCaptureEnvironment>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieSceneCaptureEnvironment__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneCaptureInterface> @ 146bd57f0

void __cdecl InternalConstructor<UMovieSceneCaptureInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneCaptureInterface__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneCaptureProtocolBase> @ 146bd5820

void __cdecl InternalConstructor<UMovieSceneCaptureProtocolBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 2) = 0;
    *(undefined ***)this = &___7UMovieSceneCaptureProtocolBase__6B_;
    this[1].field_0x18 = 0;
    this[2].field_0x2 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneImageCaptureProtocolBase> @ 146bd5870

void __cdecl InternalConstructor<UMovieSceneImageCaptureProtocolBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UMovieSceneImageCaptureProtocolBase__6B_;
    *(undefined2 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[2].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UNullAudioCaptureProtocol> @ 146bd58c0

void __cdecl InternalConstructor<UNullAudioCaptureProtocol>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UNullAudioCaptureProtocol__6B_;
    *(undefined2 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[2].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UUserDefinedCaptureProtocol> @ 146bd5910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UUserDefinedCaptureProtocol>(FObjectInitializer *param_1)

{
  if ((UUserDefinedCaptureProtocol *)param_1->Obj != (UUserDefinedCaptureProtocol *)0x0) {
    UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol
              ((UUserDefinedCaptureProtocol *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UUserDefinedImageCaptureProtocol> @ 146bd5930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UUserDefinedImageCaptureProtocol>(FObjectInitializer *param_1)

{
  UUserDefinedCaptureProtocol *this;
  
  this = (UUserDefinedCaptureProtocol *)param_1->Obj;
  if (this != (UUserDefinedCaptureProtocol *)0x0) {
    UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 3;
    this->_padding_ = (longlong)&___7UUserDefinedImageCaptureProtocol__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 100;
  }
  return;
}

// InternalConstructor<UVideoCaptureProtocol> @ 146bd5980

void __cdecl InternalConstructor<UVideoCaptureProtocol>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[2].field_0x2 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined ***)this = &___7UVideoCaptureProtocol__6B_;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined2 *)(this + 2) = 0;
    this[2].field_0x8 = 2;
    *(undefined4 *)&this[2].field_0xc = 3;
    this[2].field_0x18 = 1;
    *(undefined4 *)&this[2].field_0x1c = 0x42960000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UCompositionGraphCaptureProtocol> @ 146bd59f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCompositionGraphCaptureProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCompositionGraphCaptureProtocol::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UCompositionGraphCaptureProtocol__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCompressedImageSequenceProtocol> @ 146bd5af0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCompressedImageSequenceProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UImageSequenceProtocol *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCompressedImageSequenceProtocol::GetPrivateStaticClass();
  this = (UImageSequenceProtocol *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    this->_padding_ = (longlong)&___7UCompressedImageSequenceProtocol__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFrameGrabberProtocol> @ 146bd5ba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFrameGrabberProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFrameGrabberProtocol::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UFrameGrabberProtocol__6B_;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UImageSequenceProtocol> @ 146bd5c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImageSequenceProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UImageSequenceProtocol *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImageSequenceProtocol::GetPrivateStaticClass();
  pUVar3 = (UImageSequenceProtocol *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UImageSequenceProtocol *)0x0) {
    pUVar3 = UImageSequenceProtocol::UImageSequenceProtocol(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UImageSequenceProtocol_BMP> @ 146bd5d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImageSequenceProtocol_BMP>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UImageSequenceProtocol *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImageSequenceProtocol_BMP::GetPrivateStaticClass();
  this = (UImageSequenceProtocol *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_BMP__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UImageSequenceProtocol_EXR> @ 146bd5db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImageSequenceProtocol_EXR>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UImageSequenceProtocol *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImageSequenceProtocol_EXR::GetPrivateStaticClass();
  this = (UImageSequenceProtocol *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_EXR__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UImageSequenceProtocol_JPG> @ 146bd5e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImageSequenceProtocol_JPG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UImageSequenceProtocol *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImageSequenceProtocol_JPG::GetPrivateStaticClass();
  this = (UImageSequenceProtocol *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_JPG__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UImageSequenceProtocol_PNG> @ 146bd5f10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImageSequenceProtocol_PNG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UImageSequenceProtocol *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImageSequenceProtocol_PNG::GetPrivateStaticClass();
  this = (UImageSequenceProtocol *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UImageSequenceProtocol *)0x0) {
    UImageSequenceProtocol::UImageSequenceProtocol(this,param_1);
    this->_padding_ = (longlong)&___7UImageSequenceProtocol_PNG__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelCapture> @ 146bd5fc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelCapture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneCapture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelCapture::GetPrivateStaticClass();
  this = (UMovieSceneCapture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneCapture *)0x0) {
    UMovieSceneCapture::UMovieSceneCapture(this,param_1);
    this->_padding_ = (longlong)&ULevelCapture::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULevelCapture::_vftable__for__IMovieSceneCaptureInterface__;
    this->_padding_ = (longlong)&ULevelCapture::_vftable__for__ICaptureProtocolHost__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMasterAudioSubmixCaptureProtocol> @ 146bd60a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMasterAudioSubmixCaptureProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMasterAudioSubmixCaptureProtocol::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UMasterAudioSubmixCaptureProtocol__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneAudioCaptureProtocolBase> @ 146bd6160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneAudioCaptureProtocolBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneAudioCaptureProtocolBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneAudioCaptureProtocolBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCapture> @ 146bd6210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneCapture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneCapture *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCapture::GetPrivateStaticClass();
  pUVar3 = (UMovieSceneCapture *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieSceneCapture *)0x0) {
    pUVar3 = UMovieSceneCapture::UMovieSceneCapture(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCaptureEnvironment> @ 146bd62b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCaptureEnvironment>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCaptureEnvironment::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneCaptureEnvironment__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCaptureInterface> @ 146bd6360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCaptureInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCaptureInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneCaptureInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCaptureProtocolBase> @ 146bd6410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCaptureProtocolBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCaptureProtocolBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneCaptureProtocolBase__6B_;
    pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneImageCaptureProtocolBase> @ 146bd64c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneImageCaptureProtocolBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneImageCaptureProtocolBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneImageCaptureProtocolBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNullAudioCaptureProtocol> @ 146bd6570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNullAudioCaptureProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNullAudioCaptureProtocol::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UNullAudioCaptureProtocol__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserDefinedCaptureProtocol> @ 146bd6620

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UUserDefinedCaptureProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserDefinedCaptureProtocol *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserDefinedCaptureProtocol::GetPrivateStaticClass();
  pUVar3 = (UUserDefinedCaptureProtocol *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UUserDefinedCaptureProtocol *)0x0) {
    pUVar3 = UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserDefinedImageCaptureProtocol> @ 146bd66c0

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UUserDefinedImageCaptureProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserDefinedCaptureProtocol *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserDefinedImageCaptureProtocol::GetPrivateStaticClass();
  this = (UUserDefinedCaptureProtocol *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UUserDefinedCaptureProtocol *)0x0) {
    UUserDefinedCaptureProtocol::UUserDefinedCaptureProtocol(this,param_1);
    this->_padding_ = (longlong)&___7UUserDefinedImageCaptureProtocol__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVideoCaptureProtocol> @ 146bd6770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVideoCaptureProtocol>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVideoCaptureProtocol::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UVideoCaptureProtocol__6B_;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UWorld,UWorld_*,0> @ 146bd6830

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
ObjectPtr_Private::IsObjectPtrEqual<UWorld,UWorld_*,0>(TObjectPtr<UWorld> *param_1,UWorld **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UWorld *)0x0) {
    return *param_2 == (UWorld *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IterateOverAvailableMaterials<`FFrameCaptureViewExtension::SetupView'::__l2::FIterator> @ 146bd6850

void __thiscall
FBufferVisualizationData::
IterateOverAvailableMaterials<_FFrameCaptureViewExtension::SetupView_::__l2::FIterator>
          (FBufferVisualizationData *this,FIterator *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FFinalPostProcessSettings *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  longlong lVar10;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar11;
  uint *puVar12;
  undefined8 local_78;
  FBufferVisualizationData *local_70;
  int iStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  FBufferVisualizationData *local_40;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_38;
  
  iVar8 = *(int *)&(this->MaterialMap).field_0x28;
  local_60 = &(this->MaterialMap).field_0x10;
  iStack_68 = 0;
  uStack_64 = 1;
  local_50 = 0;
  iStack_54 = 0;
  if (iVar8 != 0) {
    puVar12 = *(uint **)&(this->MaterialMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)local_60;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar10 = (longlong)iStack_68;
      local_50 = local_50 + 0x20;
      iStack_68 = iStack_68 + 1;
      iStack_54 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_68) goto LAB_146bd68ef;
      uVar3 = puVar12[lVar10 + 1];
    }
    uStack_64 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_64 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_54 = local_50 + -1 + (int)lVar10;
    if (iVar8 < iStack_54) {
      iStack_54 = iVar8;
    }
  }
LAB_146bd68ef:
  uStack_58 = 0xffffffff;
  TStack_38._padding_ = CONCAT44(uStack_64,iStack_68);
  TStack_38.UnvisitedBitMask = 0xffffffff;
  TStack_38._28_4_ = iStack_54;
  TStack_38.BaseBitIndex = local_50;
  local_70 = this;
  iStack_4c = iStack_54;
  local_40 = this;
  TStack_38.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_60;
  TStack_38.CurrentBitIndex = iStack_54;
  if (iStack_54 < iVar8) {
    do {
      lVar10 = (longlong)TStack_38.CurrentBitIndex * 0x40 + *(longlong *)&local_40->MaterialMap;
      local_78 = *(undefined8 *)(lVar10 + 0x28);
      if ((param_1->RenderPasses->ArrayNum == 0) ||
         (bVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                            (param_1->RenderPasses,(FString *)(lVar10 + 8)), bVar7)) {
LAB_146bd698d:
        pFVar4 = param_1->FinalPostProcessSettings;
        pTVar11 = &pFVar4->BufferVisualizationOverviewMaterials;
        pFVar5 = (pTVar11->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar5 + (longlong)(pFVar4->BufferVisualizationOverviewMaterials).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (pFVar4->BufferVisualizationOverviewMaterials).ArrayNum;
        piVar1 = &(pFVar4->BufferVisualizationOverviewMaterials).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar11->AllocatorInstance,piVar1);
        }
        (pFVar4->BufferVisualizationOverviewMaterials).ArrayNum = iVar8 + 1;
        *(undefined8 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_78;
      }
      else {
        this_00 = param_1->RenderPasses;
        pFVar9 = FText::ToString((FText *)(lVar10 + 0x18));
        bVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this_00,pFVar9);
        if (bVar7) goto LAB_146bd698d;
      }
      TStack_38.UnvisitedBitMask = TStack_38.UnvisitedBitMask & ~TStack_38._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_38);
    } while (TStack_38.CurrentBitIndex < (TStack_38.Array)->NumBits);
  }
  return;
}

// NewObject<UMovieSceneAudioCaptureProtocolBase> @ 146bd6a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneAudioCaptureProtocolBase * __cdecl
NewObject<UMovieSceneAudioCaptureProtocolBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
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
  pUVar1 = UMovieSceneAudioCaptureProtocolBase::StaticClass();
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
  pUVar2 = (UMovieSceneAudioCaptureProtocolBase *)
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

// NewObject<UMovieSceneCapture> @ 146bd6b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCapture * __cdecl NewObject<UMovieSceneCapture>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneCapture *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneCapture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneCapture *)
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

// NewObject<UMovieSceneCapture> @ 146bd6c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCapture * __cdecl
NewObject<UMovieSceneCapture>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneCapture *pUVar2;
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
  pUVar1 = UMovieSceneCapture::StaticClass();
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
  pUVar2 = (UMovieSceneCapture *)
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

// NewObject<UMovieSceneImageCaptureProtocolBase> @ 146bd6d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneImageCaptureProtocolBase * __cdecl
NewObject<UMovieSceneImageCaptureProtocolBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneImageCaptureProtocolBase *pUVar2;
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
  pUVar1 = UMovieSceneImageCaptureProtocolBase::StaticClass();
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
  pUVar2 = (UMovieSceneImageCaptureProtocolBase *)
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

// ObjectPtrDecay<TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>_>,TArray<UMovieSceneCapture_*,TSizedDefaultAllocator<32>_>_> @ 146bd6e20

TArray<UMovieSceneCapture_*,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrDecay<TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>_>,TArray<UMovieSceneCapture_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_> *param_1)

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
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneCapture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UMovieSceneCapture_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// SetShaderParametersLegacy<FRHICommandListImmediate,FScreenPS,FRHIPixelShader,FRHISamplerState_*_&,TRefCountPtr<FRHITexture>_const_&> @ 146bd6e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParametersLegacy<FRHICommandListImmediate,FScreenPS,FRHIPixelShader,FRHISamplerState_*_&,TRefCountPtr<FRHITexture>_const_&>
          (FRHICommandListImmediate *param_1,
          TShaderRefBase<FScreenPS,FShaderMapPointerTable> *param_2,FRHIPixelShader *param_3,
          FRHISamplerState **param_4,TRefCountPtr<FRHITexture> *param_5)

{
  longlong *plVar1;
  FScreenPS *pFVar2;
  FRHIBatchedShaderParameters *pFVar3;
  FRHISamplerState *pFVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  uint uStack_2c;
  
  puVar8 = (undefined8 *)0x0;
  puVar6 = *(undefined8 **)&param_1->field_0xc0;
  if (*(undefined8 **)&param_1->field_0xc0 == (undefined8 *)0x0) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x48,0x10);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xb8,0x10);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = *(undefined8 *)&param_1->field_0xc8;
        puVar7[1] = param_1;
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 2),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 7),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 0xc),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 0x11),Small);
        puVar7[0x16] = 0;
        *(undefined8 **)&param_1->field_0xc8 = puVar7;
        puVar8 = puVar7;
      }
      *puVar6 = puVar8;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      puVar6[7] = 0;
      *(undefined4 *)(puVar6 + 8) = 0;
      puVar8 = puVar6;
    }
    *(undefined8 **)&param_1->field_0xc0 = puVar8;
    puVar6 = puVar8;
  }
  if ((0 < *(int *)(puVar6 + 8) + *(int *)(puVar6 + 6) + *(int *)(puVar6 + 4)) &&
     (bVar5 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                        (local_res8), !bVar5)) {
    plVar1 = *(longlong **)&param_1->field_0xc0;
    *(undefined8 *)(*plVar1 + 0xb0) = 0;
    plVar1[1] = 0;
    plVar1[2] = (ulonglong)uStack_2c << 0x20;
    plVar1[3] = 0;
    plVar1[4] = (ulonglong)uStack_2c << 0x20;
    plVar1[5] = 0;
    plVar1[6] = (ulonglong)uStack_2c << 0x20;
    plVar1[7] = 0;
    plVar1[8] = (ulonglong)uStack_2c << 0x20;
  }
  pFVar2 = param_2->ShaderContent;
  pFVar3 = *(FRHIBatchedShaderParameters **)&param_1->field_0xc0;
  pFVar4 = *param_4;
  SetTextureParameter(pFVar3,&pFVar2->InTexture,param_5->Reference);
  SetSamplerParameter(pFVar3,&pFVar2->InTextureSampler,pFVar4);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)param_3,pFVar3);
  return;
}

// StaticEnum<enum_EHDRCaptureGamut> @ 146bd7040

UEnum * __cdecl StaticEnum<enum_EHDRCaptureGamut>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut,(UObject *)pUVar1,
                       L"EHDRCaptureGamut");
  }
  return Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton;
}

// StaticEnum<enum_EMovieSceneCaptureProtocolState> @ 146bd7080

UEnum * __cdecl StaticEnum<enum_EMovieSceneCaptureProtocolState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState,
                       (UObject *)pUVar1,L"EMovieSceneCaptureProtocolState");
  }
  return Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton;
}

// ~TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,1,1> @ 146bd9040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FFrameGrabber::CaptureThisFrame_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::`2'::<lambda_1>,1,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,0,0> @ 146bd9060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FFrameGrabber::OnBackBufferReadyToPresentCallback_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,1,0> @ 146bd9080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FViewportSurfaceReader::Resize_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,0,1> @ 146bd90a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UUserDefinedCaptureProtocol::ResolveBuffer_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::`2'::<lambda_1>,0,1>::
        _vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,0,0> @ 146bd90e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UUserDefinedImageCaptureProtocol::WriteImageToDisk_::__l25::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::`25'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{16}' @ 146bda080

/* [thunk]:public: virtual void * __ptr64 __cdecl FActiveMovieSceneCaptures::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FActiveMovieSceneCaptures::_vector_deleting_destructor__adjustor_16__
          (FActiveMovieSceneCaptures *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FActiveMovieSceneCaptures *)&this[-1].ActiveCaptures,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146bda090

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelCapture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULevelCapture::_vector_deleting_destructor__adjustor_40__(ULevelCapture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULevelCapture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146bda0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneCapture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneCapture::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneCapture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneCapture *)&this[-1].CachedQualityLevels.CPUBenchmarkResults,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146bda0b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda0e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FFrameGrabber,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FFrameGrabber,void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda110

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda140

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1> *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_UFCallPixelHandler_GameThread___00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)&(this->Obj).StreamID.Identifiers.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Obj).StreamID.Identifiers.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Obj).StreamID);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Obj).Pixels.ImageData.SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::`2'::<lambda_1>,1,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::`2'::<lambda_1>,0,1>::
        _vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::`25'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda340

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TImagePixelData<FColor>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TImagePixelData<FColor>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda380

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCaptureProtocolFrameData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FCaptureProtocolFrameData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda3c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFixedTimeStepCaptureStrategy,SharedPointerInternals::DefaultDeleter<FFixedTimeStepCaptureStrategy>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FFixedTimeStepCaptureStrategy,SharedPointerInternals::DefaultDeleter<FFixedTimeStepCaptureStrategy>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda400

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFrameCaptureViewExtension,SharedPointerInternals::DefaultDeleter<FFrameCaptureViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FFrameCaptureViewExtension,SharedPointerInternals::DefaultDeleter<FFrameCaptureViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda440

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImageFrameData,SharedPointerInternals::DefaultDeleter<FImageFrameData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FImageFrameData,SharedPointerInternals::DefaultDeleter<FImageFrameData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda480

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImagePixelData,SharedPointerInternals::DefaultDeleter<FImagePixelData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FImagePixelData,SharedPointerInternals::DefaultDeleter<FImagePixelData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda4c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRealTimeCaptureStrategy,SharedPointerInternals::DefaultDeleter<FRealTimeCaptureStrategy>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRealTimeCaptureStrategy,SharedPointerInternals::DefaultDeleter<FRealTimeCaptureStrategy>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda500

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FVideoFrameData,SharedPointerInternals::DefaultDeleter<FVideoFrameData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FVideoFrameData,SharedPointerInternals::DefaultDeleter<FVideoFrameData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda540

void * __thiscall
FActiveMovieSceneCaptures::_scalar_deleting_destructor_
          (FActiveMovieSceneCaptures *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ActiveCaptures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda5a0

void * __thiscall
FCaptureProtocolFrameData::_scalar_deleting_destructor_
          (FCaptureProtocolFrameData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFramePayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda5e0

void * __thiscall
FFixedTimeStepCaptureStrategy::_scalar_deleting_destructor_
          (FFixedTimeStepCaptureStrategy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ICaptureStrategy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda620

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void * __thiscall
FFrameCaptureViewExtension::_scalar_deleting_destructor_
          (FFrameCaptureViewExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FFrameCaptureViewExtension__6B_;
  if (this->bNeedsCapture != false) {
    this->bNeedsCapture = false;
    IConsoleVariable::Set<int>
              (this->CVarDumpFramesAsHDR,this->RestoreDumpHDR,ECVF_SetByCode,(FName)0x0);
    IConsoleVariable::Set<int>
              (this->CVarHDRCompressionQuality,this->RestoreHDRCompressionQuality,ECVF_SetByCode,
               (FName)0x0);
    IConsoleVariable::Set<int>(this->CVarDumpFrames,0,ECVF_SetByCode,(FName)0x0);
  }
  pFVar1 = (this->OutputFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda6e0

void * __thiscall FImageFrameData::_scalar_deleting_destructor_(FImageFrameData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFramePayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda730

void * __thiscall
FRealTimeCaptureStrategy::_scalar_deleting_destructor_(FRealTimeCaptureStrategy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ICaptureStrategy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda770

void * __thiscall FVideoFrameData::_scalar_deleting_destructor_(FVideoFrameData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFramePayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda7b0

void * __thiscall
ICaptureStrategy::_scalar_deleting_destructor_(ICaptureStrategy *this,uint param_1)

{
  *this = (ICaptureStrategy)&___7ICaptureStrategy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda7f0

void * __thiscall IFramePayload::_scalar_deleting_destructor_(IFramePayload *this,uint param_1)

{
  *this = (IFramePayload)&___7IFramePayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda830

void * __thiscall
IMovieSceneCaptureInterface::_scalar_deleting_destructor_
          (IMovieSceneCaptureInterface *this,uint param_1)

{
  *this = (IMovieSceneCaptureInterface)&___7IMovieSceneCaptureInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UCompositionGraphCaptureProtocol::_scalar_deleting_destructor_
          (UCompositionGraphCaptureProtocol *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7UCompositionGraphCaptureProtocol__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewExtension).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->SceneViewport).WeakReferenceCount.ReferenceController;
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
  pFVar4 = (this->PostProcessingMaterial).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->IncludeRenderPasses).Value.AllocatorInstance.Data,
             (this->IncludeRenderPasses).Value.ArrayNum);
  pFVar4 = (this->IncludeRenderPasses).Value.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda950

void * __thiscall
UCompressedImageSequenceProtocol::_scalar_deleting_destructor_
          (UCompressedImageSequenceProtocol *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCompressedImageSequenceProtocol__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bda9b0

void * __thiscall
UFrameGrabberProtocol::_scalar_deleting_destructor_(UFrameGrabberProtocol *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UFrameGrabberProtocol__6B_;
  TDefaultDelete<FFrameGrabber>::operator()
            ((TDefaultDelete<FFrameGrabber> *)&this->FrameGrabber,(this->FrameGrabber).Ptr);
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdaa40

void * __thiscall
UImageSequenceProtocol::_scalar_deleting_destructor_(UImageSequenceProtocol *this,uint param_1)

{
  ~UImageSequenceProtocol(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdaaa0

void * __thiscall
UImageSequenceProtocol_BMP::_scalar_deleting_destructor_
          (UImageSequenceProtocol_BMP *this,uint param_1)

{
  *(undefined ***)this = &___7UImageSequenceProtocol_BMP__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdab00

void * __thiscall
UImageSequenceProtocol_EXR::_scalar_deleting_destructor_
          (UImageSequenceProtocol_EXR *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UImageSequenceProtocol_EXR__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdab60

void * __thiscall
UImageSequenceProtocol_JPG::_scalar_deleting_destructor_
          (UImageSequenceProtocol_JPG *this,uint param_1)

{
  *(undefined ***)this = &___7UCompressedImageSequenceProtocol__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdabc0

void * __thiscall
UImageSequenceProtocol_PNG::_scalar_deleting_destructor_
          (UImageSequenceProtocol_PNG *this,uint param_1)

{
  *(undefined ***)this = &___7UCompressedImageSequenceProtocol__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdac20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall ULevelCapture::_scalar_deleting_destructor_(ULevelCapture *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCaptureInterface__;
  this->_padding_ = (longlong)&_vftable__for__ICaptureProtocolHost__;
  UMovieSceneCapture::~UMovieSceneCapture((UMovieSceneCapture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdaca0

void * __thiscall
UMasterAudioSubmixCaptureProtocol::_scalar_deleting_destructor_
          (UMasterAudioSubmixCaptureProtocol *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMasterAudioSubmixCaptureProtocol__6B_;
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdad30

void * __thiscall
UMovieSceneAudioCaptureProtocolBase::_scalar_deleting_destructor_
          (UMovieSceneAudioCaptureProtocolBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneCaptureProtocolBase__6B_;
  if (this->field_0x40 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x30);
  }
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

// `scalar_deleting_destructor' @ 146bdada0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UMovieSceneCapture::_scalar_deleting_destructor_(UMovieSceneCapture *this,uint param_1)

{
  ~UMovieSceneCapture(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdae00

void * __thiscall
UMovieSceneCaptureEnvironment::_scalar_deleting_destructor_
          (UMovieSceneCaptureEnvironment *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneCaptureEnvironment__6B_;
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

// `scalar_deleting_destructor' @ 146bdae60

void * __thiscall
UMovieSceneCaptureInterface::_scalar_deleting_destructor_
          (UMovieSceneCaptureInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146bdaec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UMovieSceneCaptureProtocolBase::_scalar_deleting_destructor_
          (UMovieSceneCaptureProtocolBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((this->InitSettings).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->InitSettings).TypedValue.SceneViewport.SharedReferenceCount.
               ReferenceController);
  }
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

// `scalar_deleting_destructor' @ 146bdaf30

void * __thiscall
UMovieSceneImageCaptureProtocolBase::_scalar_deleting_destructor_
          (UMovieSceneImageCaptureProtocolBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneCaptureProtocolBase__6B_;
  if (this->field_0x40 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x30);
  }
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

// `scalar_deleting_destructor' @ 146bdafa0

void * __thiscall
UNullAudioCaptureProtocol::_scalar_deleting_destructor_
          (UNullAudioCaptureProtocol *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneCaptureProtocolBase__6B_;
  if (this->field_0x40 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x30);
  }
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

// `scalar_deleting_destructor' @ 146bdb010

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
UUserDefinedCaptureProtocol::_scalar_deleting_destructor_
          (UUserDefinedCaptureProtocol *this,uint param_1)

{
  ~UUserDefinedCaptureProtocol(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdb070

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
UUserDefinedImageCaptureProtocol::_scalar_deleting_destructor_
          (UUserDefinedImageCaptureProtocol *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UUserDefinedImageCaptureProtocol__6B_;
  UUserDefinedCaptureProtocol::~UUserDefinedCaptureProtocol((UUserDefinedCaptureProtocol *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bdb0d0

void * __thiscall
UVideoCaptureProtocol::_scalar_deleting_destructor_(UVideoCaptureProtocol *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVideoCaptureProtocol__6B_;
  DestructItems<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_>,int>
            ((TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter>_> *)
             (this->AVIWriters).AllocatorInstance.Data,(this->AVIWriters).ArrayNum);
  pFVar1 = (this->AVIWriters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UFrameGrabberProtocol__6B_;
  TDefaultDelete<FFrameGrabber>::operator()
            ((TDefaultDelete<FFrameGrabber> *)&this->_padding_,(FFrameGrabber *)this->_padding_);
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
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

// EmptyLinkFunctionForGeneratedCodeAudioCaptureProtocol @ 146bdd530

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioCaptureProtocol(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCompositionGraphCaptureProtocol @ 146bdd540

void __cdecl EmptyLinkFunctionForGeneratedCodeCompositionGraphCaptureProtocol(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFrameGrabberProtocol @ 146bdd550

void __cdecl EmptyLinkFunctionForGeneratedCodeFrameGrabberProtocol(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIMovieSceneCapture @ 146bdd560

void __cdecl EmptyLinkFunctionForGeneratedCodeIMovieSceneCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImageSequenceProtocol @ 146bdd570

void __cdecl EmptyLinkFunctionForGeneratedCodeImageSequenceProtocol(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelCapture @ 146bdd580

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCapture @ 146bdd590

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureEnvironment @ 146bdd5a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureEnvironment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureProtocolBase @ 146bdd5b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureProtocolBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureSettings @ 146bdd5c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCapture_init @ 146bdd5d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCapture_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUserDefinedCaptureProtocol @ 146bdd5e0

void __cdecl EmptyLinkFunctionForGeneratedCodeUserDefinedCaptureProtocol(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVideoCaptureProtocol @ 146bdd5f0

void __cdecl EmptyLinkFunctionForGeneratedCodeVideoCaptureProtocol(void)

{
  return;
}

// FindAllCaptureProtocolClasses @ 146bde4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UClass_*,TSizedDefaultAllocator<32>_> * __cdecl
FindAllCaptureProtocolClasses(TArray<UClass_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  FName *pFVar9;
  FModuleManager *this;
  IModuleInterface *pIVar10;
  UClass *pUVar11;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong *plVar13;
  ulonglong uVar14;
  FAssetData *this_00;
  longlong lVar15;
  FAssetData *pFVar16;
  undefined1 auStackY_258 [32];
  undefined1 local_1e8 [8];
  TObjectIterator<UClass> local_1e0;
  UClass *local_1c8;
  undefined8 local_1c0;
  FAssetData *local_1b8;
  ulonglong local_1b0;
  FTopLevelAssetPath local_1a8;
  FUObjectCppClassStaticFunctions local_198;
  FName local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  FSoftObjectPath *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  void *local_f8;
  undefined4 local_f0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar9 = FName::FName(&local_190,L"AssetRegistry");
  FVar2 = *pFVar9;
  this = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModuleChecked(this,FVar2);
  local_138._44_4_ = 0x80;
  local_1b8 = (FAssetData *)0x0;
  local_1b0 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_168 = (FSoftObjectPath *)0x0;
  local_160 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_138._32_8_ = 0;
  local_138._40_4_ = 0;
  local_138._52_4_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = 0;
  local_e8._40_4_ = 0;
  local_e8._52_4_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_46 = 0;
  local_44 = 0;
  local_138._48_4_ = 0xffffffff;
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  pUVar11 = UMovieSceneCaptureProtocolBase::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar11,&local_1a8);
  if ((local_148.Data <= &local_1a8) &&
     (&local_1a8 < (FTopLevelAssetPath *)(local_148.Data + (longlong)local_140._4_4_ * 0x10))) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar12;
    }
  }
  iVar5 = (int)local_140;
  if ((int)local_140 == local_140._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_148,(int *)((longlong)&local_140 + 4));
  }
  local_140 = CONCAT44(local_140._4_4_,iVar5 + 1);
  pFVar1 = local_148.Data + (longlong)iVar5 * 0x10;
  *(uint *)pFVar1 = local_1a8.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 4) = local_1a8.PackageName.Number;
  *(uint *)(pFVar1 + 8) = local_1a8.AssetName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 0xc) = local_1a8.AssetName.Number;
  local_48 = CONCAT11(1,(undefined1)local_48);
  plVar13 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x40))(pIVar10);
  (**(code **)(*plVar13 + 0x50))(plVar13,&local_188,&local_1b8,1);
  iVar5 = (int)local_1b0;
  uVar14 = (ulonglong)(int)local_1b0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar16 = local_1b8 + uVar14;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = local_1b8;
  while( true ) {
    if ((int)uVar14 != iVar5) {
      local_1e8[0] = 0;
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1e8);
    }
    if (this_00 == pFVar16) break;
    local_1c8 = FAssetData::GetClass(this_00,No);
    if (local_1c8 != (UClass *)0x0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(UClass **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_1c8;
    }
    uVar14 = local_1b0 & 0xffffffff;
    this_00 = this_00 + 1;
  }
  local_1e0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ObjectArray.ArrayNum = 0;
  local_1e0.ObjectArray.ArrayMax = 0;
  local_1e0.Index = 0xffffffff;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar11 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar11,&local_1e0.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_1e0);
  do {
    lVar15 = (longlong)local_1e0.Index;
    if ((local_1e0.Index < 0) || (local_1e0.ObjectArray.ArrayNum <= local_1e0.Index)) {
      if (local_1e0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.ObjectArray.AllocatorInstance.Data);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98);
      local_a0 = 0;
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8);
      local_f0 = 0;
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138);
      if ((FTopLevelAssetPath *)local_148.Data != (FTopLevelAssetPath *)0x0) {
        FMemory::Free(local_148.Data);
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      DestructItems<FSoftObjectPath,int>(local_168,(int)local_160);
      if (local_168 != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
      DestructItems<FAssetData,int>(local_1b8,(int)local_1b0);
      if (local_1b8 != (FAssetData *)0x0) {
        FMemory::Free(local_1b8);
      }
      return __return_storage_ptr__;
    }
    uVar8 = 0;
    if (local_1e0.Index < local_1e0.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_1e0.Index >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
    }
    lVar15 = *(longlong *)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar15 * 8);
    iVar5 = local_1e0.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton == (UClass *)0x0) {
      local_198.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/MovieSceneCapture",L"MovieSceneCaptureProtocolBase",
                 &Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton,
                 UMovieSceneCaptureProtocolBase::StaticRegisterNativesUMovieSceneCaptureProtocolBase
                 ,0x58,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
                 L"EditorPerProjectUserSettings",InternalConstructor<UMovieSceneCaptureProtocolBase>
                 ,InternalVTableHelperCtorCaller<UMovieSceneCaptureProtocolBase>,&local_198,
                 UObject::StaticClass,UObject::StaticClass);
      iVar5 = local_1e0.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton != (UClass *)0x0)
      goto LAB_146bde926;
    }
    else {
LAB_146bde926:
      iVar6 = (int)(Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton)->
                   _padding_;
      if ((*(int *)(lVar15 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar6 * 8) !=
          &(Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar15 = (longlong)local_1e0.Index;
        uVar8 = 0;
        if (local_1e0.Index < iVar5) {
          uVar8 = (uint)~local_1e0.Index >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          iVar5 = local_1e0.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar15 * 8) +
                      0xd4) & 0x82000001) == 0) {
          lVar15 = (longlong)local_1e0.Index;
          uVar8 = 0;
          if (local_1e0.Index < iVar5) {
            uVar8 = (uint)~local_1e0.Index >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          local_1c0 = *(undefined8 *)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar15 * 8);
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_1c0) &&
              ((FScriptContainerElement *)&local_1c0 <
               pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
               local_1c0;
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_1e0);
  } while( true );
}

// TransitionAndCopyTexture @ 146be99c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
TransitionAndCopyTexture
          (FRHICommandList *param_1,FRHITexture *param_2,FRHITexture *param_3,
          FRHICopyTextureInfo *param_4)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  IRHICommandContext *pIVar6;
  undefined8 *puVar7;
  TArrayView<FRHITransitionInfo_const_,int> *pTVar8;
  undefined4 uStack_14c;
  FRHITransitionInfo local_148;
  FRHITransitionInfo local_118;
  undefined4 local_e8;
  undefined2 local_e4;
  FRHITexture *local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_c0;
  FRHITransitionInfo local_b8;
  undefined4 local_88;
  undefined2 local_84;
  FRHITexture *local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_60;
  FRHITransitionInfo *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  TArrayView<FRHITransitionInfo_const_,int> local_38;
  TArrayView<FRHITransitionInfo_const_,int> local_28;
  
  if ((param_2 == (FRHITexture *)0x0) || (param_3 == (FRHITexture *)0x0)) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("SrcTexture && DstTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x28c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  cVar1 = *(char *)(lVar5 + 0x31);
  lVar5 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  if (cVar1 != *(char *)(lVar5 + 0x31)) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("SrcTexture->GetNumSamples() == DstTexture->GetNumSamples()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x28d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == param_3) {
    local_48.DataPtr = &local_148;
    pTVar8 = &local_48;
    local_48._12_4_ = uStack_14c;
    local_48.ArrayNum = 1;
    local_148._padding_._0_4_ = 0xffffffff;
    local_148._padding_._4_2_ = 0xffff;
    local_148.Type = Texture;
    local_148.AccessBefore = None;
    local_148.AccessAfter = SRVMask;
    local_148.Flags = None;
    local_148.CommitInfo.bIsSet = false;
    local_148.field1_0x8.Texture = param_2;
  }
  else {
    local_38.DataPtr = &local_118;
    local_38._12_4_ = uStack_14c;
    local_38.ArrayNum = 2;
    local_118._padding_._0_4_ = 0xffffffff;
    local_118._padding_._4_2_ = 0xffff;
    local_118.Type = Texture;
    local_118.AccessBefore = None;
    local_118.AccessAfter = CopySrc;
    local_118.Flags = None;
    local_118.CommitInfo.bIsSet = false;
    local_e8 = 0xffffffff;
    local_e4 = 0xffff;
    local_d8 = 1;
    local_d4 = 0;
    local_d0 = 0x2000;
    local_cc = 0;
    local_c0 = 0;
    local_118.field1_0x8.Texture = param_2;
    local_e0 = param_3;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_38,None);
    if ((param_1->field_0x29b & 2) != 0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsOutsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1079,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar7;
      *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &___7FRHICommandCopyTexture__6B_;
      uVar3 = *(undefined8 *)((longlong)&(param_4->Size).field0_0x0 + 8);
      puVar7[2] = *(undefined8 *)&(param_4->Size).field0_0x0;
      puVar7[3] = uVar3;
      uVar3 = *(undefined8 *)&(param_4->DestPosition).field0_0x0;
      puVar7[4] = *(undefined8 *)((longlong)&(param_4->SourcePosition).field0_0x0 + 4);
      puVar7[5] = uVar3;
      uVar3 = *(undefined8 *)&param_4->DestSliceIndex;
      puVar7[6] = *(undefined8 *)((longlong)&(param_4->DestPosition).field0_0x0 + 8);
      puVar7[7] = uVar3;
      puVar7[8] = *(undefined8 *)&param_4->SourceMipIndex;
      *(uint *)(puVar7 + 9) = param_4->NumMips;
      puVar7[10] = param_2;
      puVar7[0xb] = param_3;
    }
    else {
      pIVar6 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar6->_padding_ + 0x260))(pIVar6,param_2,param_3,param_4);
    }
    local_58 = &local_b8;
    uStack_50 = 2;
    pTVar8 = &local_28;
    local_28._12_4_ = uStack_4c;
    local_28.ArrayNum = 2;
    local_b8._padding_._0_4_ = 0xffffffff;
    local_b8._padding_._4_2_ = 0xffff;
    local_b8.Type = Texture;
    local_b8.AccessBefore = CopySrc;
    local_b8.AccessAfter = SRVMask;
    local_b8.Flags = None;
    local_b8.CommitInfo.bIsSet = false;
    local_88 = 0xffffffff;
    local_84 = 0xffff;
    local_78 = 1;
    local_74 = 0x2000;
    local_70 = 0x70;
    local_6c = 0;
    local_60 = 0;
    local_b8.field1_0x8.Texture = param_2;
    local_80 = param_3;
    local_28.DataPtr = local_58;
  }
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,pTVar8,None);
  return;
}

// Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister @ 146bea360

UClass * __cdecl Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"CompositionGraphCaptureProtocol",
               &Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton,
               UCompositionGraphCaptureProtocol::
               StaticRegisterNativesUCompositionGraphCaptureProtocol,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UCompositionGraphCaptureProtocol>,
               InternalVTableHelperCtorCaller<UCompositionGraphCaptureProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.InnerSingleton;
}

// Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister @ 146bea420

UClass * __cdecl Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"CompressedImageSequenceProtocol",
               &Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton,
               UCompressedImageSequenceProtocol::
               StaticRegisterNativesUCompressedImageSequenceProtocol,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UCompressedImageSequenceProtocol>
               ,InternalVTableHelperCtorCaller<UCompressedImageSequenceProtocol>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton;
}

// Z_Construct_UClass_UFrameGrabberProtocol_NoRegister @ 146bea4e0

UClass * __cdecl Z_Construct_UClass_UFrameGrabberProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"FrameGrabberProtocol",
               &Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton,
               UFrameGrabberProtocol::StaticRegisterNativesUFrameGrabberProtocol,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UFrameGrabberProtocol>,
               InternalVTableHelperCtorCaller<UFrameGrabberProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFrameGrabberProtocol.InnerSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister @ 146bea5a0

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_BMP",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton,
               UImageSequenceProtocol_BMP::StaticRegisterNativesUImageSequenceProtocol_BMP,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_BMP>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_BMP>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.InnerSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister @ 146bea660

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_EXR",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton,
               UImageSequenceProtocol_EXR::StaticRegisterNativesUImageSequenceProtocol_EXR,0xe8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_EXR>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_EXR>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.InnerSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister @ 146bea720

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_JPG",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton,
               UImageSequenceProtocol_JPG::StaticRegisterNativesUImageSequenceProtocol_JPG,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_JPG>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_JPG>,local_res8,
               UCompressedImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.InnerSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_NoRegister @ 146bea7e0

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol",
               &Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton,
               UImageSequenceProtocol::StaticRegisterNativesUImageSequenceProtocol,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol>,local_res8,
               UFrameGrabberProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol.InnerSingleton;
}

// Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister @ 146bea8a0

UClass * __cdecl Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"ImageSequenceProtocol_PNG",
               &Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton,
               UImageSequenceProtocol_PNG::StaticRegisterNativesUImageSequenceProtocol_PNG,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UImageSequenceProtocol_PNG>,
               InternalVTableHelperCtorCaller<UImageSequenceProtocol_PNG>,local_res8,
               UCompressedImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.InnerSingleton;
}

// Z_Construct_UClass_ULevelCapture_NoRegister @ 146bea960

UClass * __cdecl Z_Construct_UClass_ULevelCapture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"LevelCapture",
               &Z_Registration_Info_UClass_ULevelCapture.InnerSingleton,
               ULevelCapture::StaticRegisterNativesULevelCapture,0x260,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULevelCapture>,InternalVTableHelperCtorCaller<ULevelCapture>,
               local_res8,UMovieSceneCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelCapture.InnerSingleton;
}

// Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister @ 146beaa20

UClass * __cdecl Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MasterAudioSubmixCaptureProtocol",
               &Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton,
               UMasterAudioSubmixCaptureProtocol::
               StaticRegisterNativesUMasterAudioSubmixCaptureProtocol,0x90,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMasterAudioSubmixCaptureProtocol>,
               InternalVTableHelperCtorCaller<UMasterAudioSubmixCaptureProtocol>,local_res8,
               UMovieSceneAudioCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister @ 146beaae0

UClass * __cdecl Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureEnvironment",
               &Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton,
               UMovieSceneCaptureEnvironment::StaticRegisterNativesUMovieSceneCaptureEnvironment,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCaptureEnvironment>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureEnvironment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister @ 146beab90

UClass * __cdecl Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureInterface",
               &Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton,
               UMovieSceneCaptureInterface::StaticRegisterNativesUMovieSceneCaptureInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCaptureInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureInterface.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCapture_NoRegister @ 146beac50

UClass * __cdecl Z_Construct_UClass_UMovieSceneCapture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCapture",
               &Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton,
               UMovieSceneCapture::StaticRegisterNativesUMovieSceneCapture,0x240,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCapture>,
               InternalVTableHelperCtorCaller<UMovieSceneCapture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton;
}

// Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister @ 146bead00

UClass * __cdecl Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"NullAudioCaptureProtocol",
               &Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton,
               UNullAudioCaptureProtocol::StaticRegisterNativesUNullAudioCaptureProtocol,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UNullAudioCaptureProtocol>,
               InternalVTableHelperCtorCaller<UNullAudioCaptureProtocol>,local_res8,
               UMovieSceneAudioCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullAudioCaptureProtocol.InnerSingleton;
}

// Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister @ 146beadc0

UClass * __cdecl Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"UserDefinedCaptureProtocol",
               &Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton,
               UUserDefinedCaptureProtocol::StaticRegisterNativesUUserDefinedCaptureProtocol,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UUserDefinedCaptureProtocol>,
               InternalVTableHelperCtorCaller<UUserDefinedCaptureProtocol>,local_res8,
               UMovieSceneImageCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.InnerSingleton;
}

// Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister @ 146beae80

UClass * __cdecl Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"UserDefinedImageCaptureProtocol",
               &Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton,
               UUserDefinedImageCaptureProtocol::
               StaticRegisterNativesUUserDefinedImageCaptureProtocol,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UUserDefinedImageCaptureProtocol>
               ,InternalVTableHelperCtorCaller<UUserDefinedImageCaptureProtocol>,local_res8,
               UUserDefinedCaptureProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.InnerSingleton;
}

// Z_Construct_UClass_UVideoCaptureProtocol_NoRegister @ 146beaf40

UClass * __cdecl Z_Construct_UClass_UVideoCaptureProtocol_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"VideoCaptureProtocol",
               &Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton,
               UVideoCaptureProtocol::StaticRegisterNativesUVideoCaptureProtocol,0x80,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UVideoCaptureProtocol>,
               InternalVTableHelperCtorCaller<UVideoCaptureProtocol>,local_res8,
               UFrameGrabberProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVideoCaptureProtocol.InnerSingleton;
}

// IMPLEMENT_MODULE_MovieSceneCapture @ 146bec100

void __cdecl IMPLEMENT_MODULE_MovieSceneCapture(void)

{
  return;
}

// Singleton'' @ 1503df450

void __cdecl `dynamic_atexit_destructor_for_'FActiveMovieSceneCaptures::Singleton__(void)

{
  if (FActiveMovieSceneCaptures::Singleton.Ptr != (FActiveMovieSceneCaptures *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503df464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(FActiveMovieSceneCaptures::Singleton.Ptr)->_padding_)
              (FActiveMovieSceneCaptures::Singleton.Ptr,1);
    return;
  }
  return;
}

// StaticResource'' @ 1503df470

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

// StaticResource'' @ 1503df4f0

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

// StaticResource'' @ 1503df570

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

// StaticResource'' @ 1503df5f0

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

// StaticResource'' @ 1503df670

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

// `dynamic_atexit_destructor_for_'CVarFrameGrabberFrameLatency'' @ 1503df6f0

void __cdecl _dynamic_atexit_destructor_for__CVarFrameGrabberFrameLatency__(void)

{
  CVarFrameGrabberFrameLatency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFrameGrabberFrameLatency);
  return;
}

// `dynamic_atexit_destructor_for_'LogMovieSceneCapture'' @ 1503df710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMovieSceneCapture__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMovieSceneCapture);
  return;
}

