// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 282

// ActiveSyncs'' @ 141043bf0

void __cdecl `dynamic_initializer_for_'FD3D11GPUFence::ActiveSyncs__(void)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  FD3D11GPUFence::ActiveSyncs.Head = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Event.Reference = (FBaseGraphTask *)0x0;
    (pTVar1->Item).Query.Reference = (ID3D11Query *)0x0;
    FD3D11GPUFence::ActiveSyncs.Head = pTVar1;
  }
  FD3D11GPUFence::ActiveSyncs.Tail = FD3D11GPUFence::ActiveSyncs.Head;
  atexit(`dynamic_atexit_destructor_for_'FD3D11GPUFence::ActiveSyncs__);
  return;
}

// StaticResource'' @ 141043c40

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

// StaticResource'' @ 141043d00

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
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
             &TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__00_06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_18 = 0x7000701;
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
    this = TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
    ::StaticResource.StateRHI.Reference = local_res10;
    local_res10 = (FRHIDepthStencilState *)0x0;
    if (this.Reference != (FRHIDepthStencilState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141043e90

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

// StaticResource'' @ 141044020

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

// `dynamic_initializer_for_'CVarAMDDisableAsyncTextureCreation'' @ 1410440e0

void __cdecl _dynamic_initializer_for__CVarAMDDisableAsyncTextureCreation__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAMDDisableAsyncTextureCreation,L"r.AMDDisableAsyncTextureCreation",local_res8,
             L"If true, uses synchronous texture creation on AMD hardware (workaround for driver bug)\nChanges will only take effect in new game/editor instances - can\'t be changed at runtime.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAMDDisableAsyncTextureCreation__);
  return;
}

// `dynamic_initializer_for_'CVarAMDUseMultiThreadedDevice'' @ 141044130

void __cdecl _dynamic_initializer_for__CVarAMDUseMultiThreadedDevice__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAMDUseMultiThreadedDevice,L"r.AMDD3D11MultiThreadedDevice",local_res8,
             L"If true, creates a multithreaded D3D11 device on AMD hardware (workaround for driver bug)\nChanges will only take effect in new game/editor instances - can\'t be changed at runtime.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAMDUseMultiThreadedDevice__);
  return;
}

// `dynamic_initializer_for_'CVarAllowUAVFlushExt'' @ 141044180

void __cdecl _dynamic_initializer_for__CVarAllowUAVFlushExt__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowUAVFlushExt,L"r.D3D11.AutoFlushUAV",local_res8,
             L"If enabled, use NVAPI (Nvidia), AGS (AMD) or Intel Extensions (Intel) to not flush between dispatches/draw calls 1: on (default)\n 0: off"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarAllowUAVFlushExt__);
  return;
}

// `dynamic_initializer_for_'CVarD3D11AbsoluteTimeQueryTimeoutValue'' @ 1410441d0

void __cdecl _dynamic_initializer_for__CVarD3D11AbsoluteTimeQueryTimeoutValue__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D11AbsoluteTimeQueryTimeoutValue,L"r.D3D11.AbsoluteTimeQueryTimeoutValue",
             &GD3D11AbsoluteTimeQueryTimeoutValue,
             L"Set the timeout value, in seconds, to wait for a D3D11 absolute time query.",0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D11AbsoluteTimeQueryTimeoutValue__);
  return;
}

// `dynamic_initializer_for_'CVarD3D11QueryTimeoutValue'' @ 141044220

void __cdecl _dynamic_initializer_for__CVarD3D11QueryTimeoutValue__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D11QueryTimeoutValue,L"r.D3D11.QueryTimeoutValue",&GD3D11QueryTimeoutValue,
             L"Set the timeout value, in seconds, to wait for a D3D11 query. This value does not apply to absolute time queries (which are controlled by r.D3D11.AbsoluteTimeQueryTimeoutValue)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D11QueryTimeoutValue__);
  return;
}

// `dynamic_initializer_for_'CVarD3D11UseD24'' @ 141044270

void __cdecl _dynamic_initializer_for__CVarD3D11UseD24__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D11UseD24,L"r.D3D11.Depth24Bit",local_res8,
             L"0: Use 32-bit float depth buffer\n1: Use 24-bit fixed point depth buffer(default)\n",
             4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D11UseD24__);
  return;
}

// `dynamic_initializer_for_'CVarD3D11ZeroBufferSizeInMB'' @ 1410442c0

void __cdecl _dynamic_initializer_for__CVarD3D11ZeroBufferSizeInMB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D11ZeroBufferSizeInMB,L"d3d11.ZeroBufferSizeInMB",local_res8,
             L"The D3D11 RHI needs a static allocation of zeroes to use when streaming textures asynchronously. It should be large enough to support the largest mipmap you need to stream. The default is 4MB."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D11ZeroBufferSizeInMB__);
  return;
}

// `dynamic_initializer_for_'CVarD3DUniformPoolRecycleDepth'' @ 141044310

void __cdecl _dynamic_initializer_for__CVarD3DUniformPoolRecycleDepth__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3DUniformPoolRecycleDepth,L"r.d3d.uniformbufferrecycledepth",
             &GD3DUniformPoolRecycleDepth,
             L"Number of frames before recycling freed uniform buffers .\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarD3DUniformPoolRecycleDepth__);
  return;
}

// `dynamic_initializer_for_'CVarD3DUseAllowTearing'' @ 141044360

void __cdecl _dynamic_initializer_for__CVarD3DUseAllowTearing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3DUseAllowTearing,L"r.D3D11.UseAllowTearing",&GD3D11UseAllowTearing,
             L"Enable new dxgi flip mode with d3d11",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarD3DUseAllowTearing__);
  return;
}

// `dynamic_initializer_for_'CVarDX11ReduceRTVRebinds'' @ 1410443b0

void __cdecl _dynamic_initializer_for__CVarDX11ReduceRTVRebinds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDX11ReduceRTVRebinds,L"r.DX11.ReduceRTVRebinds",&GDX11ReduceRTVRebinds,
             L"Reduce # of SetRenderTargetCalls.",4);
  atexit(_dynamic_atexit_destructor_for__CVarDX11ReduceRTVRebinds__);
  return;
}

// `dynamic_initializer_for_'CVarLogDx11RTRebinds'' @ 141044400

void __cdecl _dynamic_initializer_for__CVarLogDx11RTRebinds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogDx11RTRebinds,L"r.DX11.LogRTRebinds",&GLogDX11RTRebinds,
             L"Log # of rebinds of RTs per frame",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogDx11RTRebinds__);
  return;
}

// `dynamic_initializer_for_'CVarMaxFeatureSetLimit'' @ 141044450

void __cdecl RHIConsoleVariables::_dynamic_initializer_for__CVarMaxFeatureSetLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxFeatureSetLimit,L"RHI.FeatureSetLimit",&MaxFeatureSetLimit,
             L"If set to 10, limit D3D RHI to D3D10 feature level. Otherwise, it will use default. Changing this at run-time has no effect. (default is -1)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxFeatureSetLimit__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSyncCounter'' @ 1410444a0

void __cdecl RHIConsoleVariables::_dynamic_initializer_for__CVarMaxSyncCounter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSyncCounter,L"RHI.MaxSyncCounter",&MaxSyncCounter,
             L"Maximum sync counter to smooth out vsync transitions.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSyncCounter__);
  return;
}

// `dynamic_initializer_for_'CVarMaximumFrameLatency'' @ 1410444f0

void __cdecl RHIConsoleVariables::_dynamic_initializer_for__CVarMaximumFrameLatency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaximumFrameLatency,L"RHI.MaximumFrameLatency",&MaximumFrameLatency,
             L"Number of frames that can be queued for render.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMaximumFrameLatency__);
  return;
}

// `dynamic_initializer_for_'CVarNVidiaTimestampWorkaround'' @ 141044540

void __cdecl _dynamic_initializer_for__CVarNVidiaTimestampWorkaround__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNVidiaTimestampWorkaround,L"r.NVIDIATimestampWorkaround",local_res8,
             L"If true we disable timestamps on pre-maxwell hardware (workaround for driver bug)\n",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarNVidiaTimestampWorkaround__);
  return;
}

// `dynamic_initializer_for_'CVarRefreshPercentageBeforePresent'' @ 141044590

void __cdecl
RHIConsoleVariables::_dynamic_initializer_for__CVarRefreshPercentageBeforePresent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRefreshPercentageBeforePresent,L"RHI.RefreshPercentageBeforePresent",
             &RefreshPercentageBeforePresent,
             L"The percentage of the refresh period to wait before presenting.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRefreshPercentageBeforePresent__);
  return;
}

// `dynamic_initializer_for_'CVarSyncRefreshThreshold'' @ 1410445e0

void __cdecl RHIConsoleVariables::_dynamic_initializer_for__CVarSyncRefreshThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSyncRefreshThreshold,L"RHI.SyncRefreshThreshold",&SyncRefreshThreshold,
             L"Threshold for time above which vsync will be disabled as a percentage of the refresh rate."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSyncRefreshThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarSyncThreshold'' @ 141044630

void __cdecl RHIConsoleVariables::_dynamic_initializer_for__CVarSyncThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSyncThreshold,L"RHI.SyncThreshold",&SyncThreshold,
             L"Number of consecutive \'fast\' frames before vsync is enabled.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSyncThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarSyncWithDWM'' @ 141044680

void __cdecl RHIConsoleVariables::_dynamic_initializer_for__CVarSyncWithDWM__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSyncWithDWM,L"RHI.SyncWithDWM",&bSyncWithDWM,
             L"If true, synchronize with the desktop window manager for vblank.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSyncWithDWM__);
  return;
}

// `dynamic_initializer_for_'CVarTargetRefreshRate'' @ 1410446d0

void __cdecl RHIConsoleVariables::_dynamic_initializer_for__CVarTargetRefreshRate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTargetRefreshRate,L"RHI.TargetRefreshRate",&TargetRefreshRate,
             L"If non-zero, the display will never update more often than the target refresh rate (in Hz)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTargetRefreshRate__);
  return;
}

// `dynamic_initializer_for_'CVarUnbindResourcesBetweenDrawsInDX11'' @ 141044720

void __cdecl _dynamic_initializer_for__CVarUnbindResourcesBetweenDrawsInDX11__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUnbindResourcesBetweenDrawsInDX11,L"r.UnbindResourcesBetweenDrawsInDX11",
             &GUnbindResourcesBetweenDrawsInDX11,
             L"Unbind resources between material changes in DX11.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUnbindResourcesBetweenDrawsInDX11__);
  return;
}

// `dynamic_initializer_for_'FD3DDumpLiveObjectsCommand'' @ 141044770

void __cdecl _dynamic_initializer_for__FD3DDumpLiveObjectsCommand__(void)

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
    puVar1[3] = FD3D11DumpLiveObjects;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FD3DDumpLiveObjectsCommand,L"r.d3d11.dumpliveobjects",
             L"When using -d3ddebug will dump a list of live d3d objects.  Mostly for finding leaks."
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
  atexit(_dynamic_atexit_destructor_for__FD3DDumpLiveObjectsCommand__);
  return;
}

// `dynamic_initializer_for_'GCVarUseSharedKeyedMutex'' @ 1410448b0

void __cdecl _dynamic_initializer_for__GCVarUseSharedKeyedMutex__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarUseSharedKeyedMutex,L"r.D3D11.UseSharedKeyMutex",local_res8,
             L"If 1, BUF_Shared vertex / index buffer and TexCreate_Shared texture will be created\nwith the D3D11_RESOURCE_MISC_SHARED_KEYEDMUTEX flag instead of D3D11_RESOURCE_MISC_SHARED (default).\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarUseSharedKeyedMutex__);
  return;
}

// `dynamic_initializer_for_'GD3D11DebugCvar'' @ 141044900

void __cdecl _dynamic_initializer_for__GD3D11DebugCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GD3D11DebugCvar,L"r.D3D11.EnableD3DDebug",local_res8,
             L"0 to disable d3ddebug layer (default)\n1 to enable error logging (-d3ddebug) \n2 to enable error & warning logging (-d3dlogwarnings)\n3 to enable breaking on errors & warnings (-d3dbreakonwarning)\n4 to enable CONTINUING on errors (-d3dcontinueonerrors)\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GD3D11DebugCvar__);
  return;
}

// `dynamic_initializer_for_'GSamplerStateCache'' @ 141044950

void __cdecl _dynamic_initializer_for__GSamplerStateCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSamplerStateCache__);
  return;
}

// `dynamic_initializer_for_'GSamplerStateCacheCS'' @ 141044970

void __cdecl _dynamic_initializer_for__GSamplerStateCacheCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GSamplerStateCacheCS,4000);
  atexit(_dynamic_atexit_destructor_for__GSamplerStateCacheCS__);
  return;
}

// `dynamic_initializer_for_'GVertexDeclarationCache'' @ 1410449a0

void __cdecl _dynamic_initializer_for__GVertexDeclarationCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GVertexDeclarationCache__);
  return;
}

// `dynamic_initializer_for_'LogD3D11RHI'' @ 1410449c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogD3D11RHI__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogD3D11RHI,L"LogD3D11RHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogD3D11RHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantD3D11RHI'' @ 141044a00

void __cdecl _dynamic_initializer_for__ModuleRegistrantD3D11RHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "D3D11RHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"D3D11RHI",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FD3D11DynamicRHIModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SafeUniformBufferPools'' @ 141044a50

void __cdecl _dynamic_initializer_for__SafeUniformBufferPools__(void)

{
  atexit(_dynamic_atexit_destructor_for__SafeUniformBufferPools__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11CleanUniformBufferTime'' @ 141044a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11CleanUniformBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11CleanUniformBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11CleanUniformBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11CleanUniformBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11CleanUniformBufferTime,*pFVar1,
               L"Clean uniform buffer pool","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11ClearShaderResourceTime'' @ 141044b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11ClearShaderResourceTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11ClearShaderResourceTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11ClearShaderResourceTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11ClearShaderResourceTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11ClearShaderResourceTime,*pFVar1,
               L"Clear shader resources","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11CopyTextureTime'' @ 141044b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11CopyTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11CopyTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11CopyTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11CopyTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11CopyTextureTime,*pFVar1,
               L"CopyTexture time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11CreateBoundShaderStateTime'' @ 141044c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11CreateBoundShaderStateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11CreateBoundShaderStateTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11CreateBoundShaderStateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11CreateBoundShaderStateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11CreateBoundShaderStateTime,*pFVar1,
               L"CreateBoundShaderState time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11CreateTextureTime'' @ 141044cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11CreateTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11CreateTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11CreateTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11CreateTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11CreateTextureTime,*pFVar1,
               L"CreateTexture time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11CustomPresentTime'' @ 141044d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11CustomPresentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11CustomPresentTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11CustomPresentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11CustomPresentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11CustomPresentTime,*pFVar1,
               L"CustomPresent time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11FreeUniformBufferMemory'' @ 141044dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11FreeUniformBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11FreeUniformBufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11FreeUniformBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11FreeUniformBufferMemory,*pFVar1,
               L"Uniform buffer pool memory","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11GlobalConstantBufferUpdateTime'' @ 141044e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11GlobalConstantBufferUpdateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11GlobalConstantBufferUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11GlobalConstantBufferUpdateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11GlobalConstantBufferUpdateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11GlobalConstantBufferUpdateTime,
               *pFVar1,L"Global Constant buffer update time","STATGROUP_D3D11RHI","STATCAT_Advanced"
               ,L"D3D11RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11LockTextureTime'' @ 141044ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11LockTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11LockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11LockTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11LockTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11LockTextureTime,*pFVar1,
               L"LockTexture time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11NewBoundShaderStateTime'' @ 141044f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11NewBoundShaderStateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11NewBoundShaderStateTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11NewBoundShaderStateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11NewBoundShaderStateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NewBoundShaderStateTime,*pFVar1,
               L"New bound shader state time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11NumBoundShaderState'' @ 141045010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11NumBoundShaderState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11NumBoundShaderState ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11NumBoundShaderState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11NumBoundShaderState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NumBoundShaderState,*pFVar1,
               L"Num Bound Shader State","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11NumFreeUniformBuffers'' @ 1410450a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11NumFreeUniformBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11NumFreeUniformBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11NumFreeUniformBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NumFreeUniformBuffers,*pFVar1,
               L"Uniform buffer pool num free","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11NumImmutableUniformBuffers'' @ 141045130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11NumImmutableUniformBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11NumImmutableUniformBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11NumImmutableUniformBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11NumImmutableUniformBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NumImmutableUniformBuffers,*pFVar1,
               L"Immutable Uniform buffers","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true
               ,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11PresentTime'' @ 1410451c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11PresentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11PresentTime == (FThreadSafeStaticStat<FStat_STAT_D3D11PresentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11PresentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11PresentTime,*pFVar1,L"Present time",
               "STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11RenderTargetCommits'' @ 141045250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11RenderTargetCommits__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11RenderTargetCommits ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11RenderTargetCommits>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11RenderTargetCommits");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11RenderTargetCommits,*pFVar1,
               L"RenderTargetCommit","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11RenderTargetCommitsUAV'' @ 1410452e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11RenderTargetCommitsUAV__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11RenderTargetCommitsUAV ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11RenderTargetCommitsUAV>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11RenderTargetCommitsUAV");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11RenderTargetCommitsUAV,*pFVar1,
               L"RenderTargetCommitUAV","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11TexturePoolMemory'' @ 141045370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11TexturePoolMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11TexturePoolMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11TexturePoolMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11TexturePoolMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11TexturePoolMemory,*pFVar1,
               L"Texture object pool memory","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11TexturesAllocated'' @ 141045400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11TexturesAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11TexturesAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11TexturesAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11TexturesAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11TexturesAllocated,*pFVar1,
               L"Textures Allocated","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11TexturesReleased'' @ 141045490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11TexturesReleased__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11TexturesReleased ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11TexturesReleased>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11TexturesReleased");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11TexturesReleased,*pFVar1,
               L"Textures Released","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11UnlockTextureTime'' @ 141045520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11UnlockTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11UnlockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11UnlockTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11UnlockTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11UnlockTextureTime,*pFVar1,
               L"UnlockTexture time","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D11UpdateUniformBufferTime'' @ 1410455b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D11UpdateUniformBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D11UpdateUniformBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11UpdateUniformBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D11UpdateUniformBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11UpdateUniformBufferTime,*pFVar1,
               L"Update uniform buffer","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UniformBufferPool'' @ 141045640

void __cdecl _dynamic_initializer_for__UniformBufferPool__(void)

{
  atexit(_dynamic_atexit_destructor_for__UniformBufferPool__);
  return;
}

// `scalar_deleting_destructor' @ 14595a360

void * __thiscall
FD3D11DynamicRHIModule::_scalar_deleting_destructor_(FD3D11DynamicRHIModule *this,uint param_1)

{
  IDXGIAdapter *pIVar1;
  
  pIVar1 = (this->ChosenAdapter).DXGIAdapter.Reference;
  if (pIVar1 != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// operator<<<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> @ 14595a450

FArchive * __cdecl
operator<<<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  uVar11 = 0;
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
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar14 = uVar11;
          uVar13 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar10 = (uint)uVar11;
              uVar8 = 0;
              if ((int)uVar10 < (int)uVar13) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar12 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar12,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar12);
                }
              }
              else {
                *(undefined4 *)pFVar12 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              operator<<(param_1,(FParameterAllocation *)(pFVar12 + 4));
              uVar11 = (ulonglong)(uVar10 + 1);
              uVar14 = uVar14 + 0xc;
              uVar13 = param_2->ArrayNum;
            } while ((int)(uVar10 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0xc;
              DefaultConstructItems<FShaderCodeVendorExtension,int>(pFVar12,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar12,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar12);
                }
              }
              else {
                *(uint *)pFVar12 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              operator<<(param_1,(FParameterAllocation *)(pFVar12 + 4));
              uVar13 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar13;
            } while ((int)uVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ApplyStaticUniformBuffers<`FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11ComputeShader>'::__l5::<lambda_1>_> @ 14595a540

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11ComputeShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  uVar9 = uVar8;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar1 = *(byte *)(uVar9 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar5 = 0;
        if ((int)uVar7 < (int)param_1->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar2,bVar1,*(uint *)(param_1->_padding_ + uVar9 * 4));
        if (pFVar2 != (FRHIUniformBuffer *)0x0) {
          FD3D11DynamicRHI::BindUniformBuffer<5>(param_3->__this,uVar7,pFVar2);
        }
      }
      iVar6 = (int)param_1->_padding_;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  return;
}

// ApplyStaticUniformBuffers<`FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11GeometryShader>'::__l5::<lambda_1>_> @ 14595a740

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11GeometryShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  uVar9 = uVar8;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar1 = *(byte *)(uVar9 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar5 = 0;
        if ((int)uVar7 < (int)param_1->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar2,bVar1,*(uint *)(param_1->_padding_ + uVar9 * 4));
        if (pFVar2 != (FRHIUniformBuffer *)0x0) {
          FD3D11DynamicRHI::BindUniformBuffer<4>(param_3->__this,uVar7,pFVar2);
        }
      }
      iVar6 = (int)param_1->_padding_;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  return;
}

// ApplyStaticUniformBuffers<`FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11PixelShader>'::__l5::<lambda_1>_> @ 14595a940

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11PixelShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  uVar9 = uVar8;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar1 = *(byte *)(uVar9 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar5 = 0;
        if ((int)uVar7 < (int)param_1->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar2,bVar1,*(uint *)(param_1->_padding_ + uVar9 * 4));
        if (pFVar2 != (FRHIUniformBuffer *)0x0) {
          FD3D11DynamicRHI::BindUniformBuffer<3>(param_3->__this,uVar7,pFVar2);
        }
      }
      iVar6 = (int)param_1->_padding_;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  return;
}

// ApplyStaticUniformBuffers<`FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11VertexShader>'::__l5::<lambda_1>_> @ 14595ab40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FD3D11DynamicRHI::ApplyStaticUniformBuffers<FD3D11VertexShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  uVar9 = uVar8;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar1 = *(byte *)(uVar9 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar5 = 0;
        if ((int)uVar7 < (int)param_1->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar2,bVar1,*(uint *)(param_1->_padding_ + uVar9 * 4));
        if (pFVar2 != (FRHIUniformBuffer *)0x0) {
          FD3D11DynamicRHI::BindUniformBuffer<0>(param_3->__this,uVar7,pFVar2);
        }
      }
      iVar6 = (int)param_1->_padding_;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  return;
}

// ClearUAVShader_T<1,1,4,0> @ 14595bdf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<1,1,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,int (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<1,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<1,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<1,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<1,TClearReplacementBase<1,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader(param_1,param_3 + 7 >> 3,param_4 + 7 >> 3,param_5);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<1,2,4,0> @ 14595c170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<1,2,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,uint (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<1,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<1,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<1,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<1,TClearReplacementBase<2,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader(param_1,param_3 + 7 >> 3,param_4 + 7 >> 3,param_5);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<1,0,4,0> @ 14595c4f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<1,0,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,float (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<1,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<1,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<1,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<1,TClearReplacementBase<0,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader(param_1,param_3 + 7 >> 3,param_4 + 7 >> 3,param_5);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<2,1,4,0> @ 14595c870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<2,1,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,int (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<2,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<2,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<2,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<2,TClearReplacementBase<1,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader(param_1,param_3 + 7 >> 3,param_4 + 7 >> 3,param_5);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<2,2,4,0> @ 14595cbf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<2,2,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,uint (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<2,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<2,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<2,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<2,TClearReplacementBase<2,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader(param_1,param_3 + 7 >> 3,param_4 + 7 >> 3,param_5);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<2,0,4,0> @ 14595cf70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<2,0,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,float (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<2,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<2,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<2,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<2,TClearReplacementBase<0,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader(param_1,param_3 + 7 >> 3,param_4 + 7 >> 3,param_5);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<3,1,4,0> @ 14595d2f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<3,1,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,int (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<3,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<3,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<3,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<3,TClearReplacementBase<1,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,param_3 + 3 >> 2,param_4 + 3 >> 2,param_5 + 3 >> 2);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<3,2,4,0> @ 14595d670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<3,2,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,uint (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<3,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<3,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<3,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<3,TClearReplacementBase<2,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,param_3 + 3 >> 2,param_4 + 3 >> 2,param_5 + 3 >> 2);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<3,0,4,0> @ 14595d9f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<3,0,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,float (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<3,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<3,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<3,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<3,TClearReplacementBase<0,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_50 = param_5;
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,param_3 + 3 >> 2,param_4 + 3 >> 2,param_5 + 3 >> 2);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<5,1,4,0> @ 14595dd70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<5,1,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,int (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<5,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<5,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<5,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<5,TClearReplacementBase<1,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar11 = (uint)*(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x200);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<5,2,4,0> @ 14595e100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<5,2,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,uint (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<5,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<5,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<5,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<5,TClearReplacementBase<2,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar11 = (uint)*(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x200);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<5,0,4,0> @ 14595e490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<5,0,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,float (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<5,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<5,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<5,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<5,TClearReplacementBase<0,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar11 = (uint)*(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x200);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<0,1,4,0> @ 14595e820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<0,1,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,int (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<0,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<0,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<0,TClearReplacementBase<1,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<0,TClearReplacementBase<1,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar11 = (uint)*(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x40);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<0,2,4,0> @ 14595ebb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<0,2,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,uint (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<0,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<0,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<0,TClearReplacementBase<2,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<0,TClearReplacementBase<2,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar11 = (uint)*(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x40);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<0,0,4,0> @ 14595ef40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearUAVShader_T<0,0,4,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,float (*param_6) [4])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<0,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<0,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<0,TClearReplacementBase<0,4,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<0,TClearReplacementBase<0,4,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar11 = (uint)*(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x40);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ConstructItems<FDisplayInformation,FDisplayInformation,int> @ 14595f2d0

void __cdecl
ConstructItems<FDisplayInformation,FDisplayInformation,int>
          (void *param_1,FDisplayInformation *param_2,int param_3)

{
  undefined1 *puVar1;
  bool *pbVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x10);
    pbVar2 = &param_2->bHDRSupported;
    do {
      *(undefined8 *)(puVar1 + -0x10) =
           *(undefined8 *)(puVar1 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(pbVar2 + -8);
      *puVar1 = *pbVar2;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x14;
      pbVar2 = pbVar2 + 0x14;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPooledUniformBuffer,FPooledUniformBuffer,int> @ 14595f310

void __cdecl
ConstructItems<FPooledUniformBuffer,FPooledUniformBuffer,int>
          (void *param_1,FPooledUniformBuffer *param_2,int param_3)

{
  uint uVar1;
  ID3D11Buffer *pIVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar3 = &param_2->FrameFreed;
    puVar4 = (uint *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)((longlong)puVar3 + (longlong)param_1 + (-0xc - (longlong)param_2)) = 0;
      pIVar2 = (((FPooledUniformBuffer *)(puVar3 + -3))->Buffer).Reference;
      *(ID3D11Buffer **)((longlong)puVar3 + (longlong)param_1 + (-0xc - (longlong)param_2)) = pIVar2
      ;
      if (pIVar2 != (ID3D11Buffer *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))();
      }
      puVar4[-1] = puVar3[-1];
      uVar1 = *puVar3;
      puVar3 = puVar3 + 4;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TRefCountPtr<ID3D11RenderTargetView>,TRefCountPtr<ID3D11RenderTargetView>,int> @ 14595f3a0

void __cdecl
ConstructItems<TRefCountPtr<ID3D11RenderTargetView>,TRefCountPtr<ID3D11RenderTargetView>,int>
          (void *param_1,TRefCountPtr<ID3D11RenderTargetView> *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      plVar1 = *(longlong **)(lVar2 + (longlong)param_1);
      *(longlong **)param_1 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FShaderCodeVendorExtension,int> @ 14595f410

void __cdecl DefaultConstructItems<FShaderCodeVendorExtension,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 6;
    do {
      *(undefined8 *)(lVar1 + -6) = 0;
      *(undefined4 *)(lVar1 + 2) = 0x80000;
      lVar1 = lVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPooledUniformBuffer,int> @ 14595f440

void __cdecl DestructItems<FPooledUniformBuffer,int>(FPooledUniformBuffer *param_1,int param_2)

{
  ID3D11Buffer *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Buffer).Reference;
    if (pIVar1 != (ID3D11Buffer *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FWinD3D11ConstantBuffer::FSubBuffer,int> @ 14595f480

void __cdecl DestructItems<FWinD3D11ConstantBuffer::FSubBuffer,int>(FSubBuffer *param_1,int param_2)

{
  ID3D11Buffer *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Buffer).Reference;
    if (pIVar1 != (ID3D11Buffer *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<ID3D11RenderTargetView>,int> @ 14595f4c0

void __cdecl
DestructItems<TRefCountPtr<ID3D11RenderTargetView>,int>
          (TRefCountPtr<ID3D11RenderTargetView> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (ID3D11RenderTargetView *)0x0) {
      (**(code **)((longlong)*param_1->Reference + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FD3D11Viewport::FD3D11Viewport'::__l2::TSTR_FD3D11Viewport295>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1459606d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FD3D11Viewport::FD3D11Viewport_::__l2::TSTR_FD3D11Viewport295>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  FRenderCommandTag *pFVar16;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar17;
  undefined8 uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar19;
  FTaskBase *this_02;
  FName FVar20;
  FNameEntryId FVar21;
  FNameEntryId FVar22;
  uint local_res10;
  uint uStackX_14;
  ETaskPriority local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar16 = (FRenderCommandTag *)
            TRenderCommandTag<`FD3D11Viewport::FD3D11Viewport'::__l2::TSTR_FD3D11Viewport295>::Get()
  ;
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar16->SpecId,pFVar16->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar16->SpecId);
  }
  bVar14 = IsInRenderingThread();
  if ((!bVar14) && ((GIsThreadedRendering != false || (bVar14 = IsInGameThread(), !bVar14)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar14 = IsInGameThread(), bVar14 &&
        (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar14)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
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
             &
             ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
        ;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar16;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar9 = param_1->field_0x2c;
      uVar10 = param_1->field_0x2d;
      uVar11 = *(undefined2 *)&param_1->field_0x2e;
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&param_1->field_0x28;
      this_02[1].ExtendedPriority = uVar9;
      this_02[1].TaskTriggered = (atomic<bool>)uVar10;
      this_02[1]._padding_ = uVar11;
      *(undefined8 *)&param_1->field_0x28 = 0;
      uVar12 = *(undefined4 *)&param_1->field_0x18;
      uVar13 = *(undefined4 *)&param_1->field_0x1c;
      this_02[1]._padding_ = *(longlong *)&param_1->field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar12;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar13;
      this_02[1].Pipe = *(FPipe **)&param_1->field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,
                 (EExtendedTaskPriority *)&local_res10);
      UE::Tasks::Private::FTaskBase::Init
                (this_02,L"GraphTask",local_res18[0],(EExtendedTaskPriority)local_res10,None);
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
      EnqueueAndLaunch(&Instance,param_1,pFVar16);
    }
    goto LAB_145960af8;
  }
  pTVar4 = (pFVar16->StatId).StatIdPtr;
  FVar22.Value = 0;
  bVar14 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar20 = *(FName *)&pTVar4->Name;
  FVar21 = FVar20.ComparisonIndex.Value;
  uVar15 = FVar20.Number;
  if ((FVar21.Value == 0) && (uVar15 == 0)) {
LAB_1459609e2:
    bVar6 = false;
    FVar20 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar14 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar21.Value;
        local_68.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar14 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1459609e2;
    local_res10 = FVar21.Value;
    uStackX_14 = uVar15;
    local_58 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
    FVar22.Value = local_58.ComparisonIndex.Value;
  }
  pFVar17 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  plVar19 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar19 = *(longlong **)&param_1->field_0x28;
  }
  uVar18 = (**(code **)(*plVar19 + 8))();
  (*pcVar5)(uVar18,pFVar17);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar22.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
LAB_145960af8:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_2>_> @ 145960b30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FTracker *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  ERHIAccess EVar10;
  ulonglong uVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar11 = (ulonglong)param_2;
  uVar3 = param_3[uVar11];
  if (uVar3 != 0) {
    uVar8 = param_3[uVar3];
    puVar9 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FRHIShaderResourceView **)(pFVar4 + (ulonglong)(uVar8 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FRHIShaderResourceView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar10 = SRVCompute;
        }
        else {
          EVar10 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar10 = SRVGraphicsPixel;
          }
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_60,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        uStack_e4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_a8._4_4_ = uStack_10c;
        local_a8.Type = Assert;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_60._padding_;
        local_a8.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_60._padding_._4_1_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_60._padding_._5_3_;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_60._padding_
        ;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_60._padding_._4_4_;
        local_a8.field1_0x8._36_4_ = uStack_e4;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_a8);
        uVar11 = (ulonglong)(uint)param_2;
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView(param_4->Shader,uVar8 & 0xff,pFVar5);
      }
      FD3D11ResourceBinder<3>::SetSRV(param_4->Binder,pFVar5,(uchar)uVar8);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_2>_> @ 145960da0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FTracker *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  ERHIAccess EVar10;
  ulonglong uVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar11 = (ulonglong)param_2;
  uVar3 = param_3[uVar11];
  if (uVar3 != 0) {
    uVar8 = param_3[uVar3];
    puVar9 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FRHIShaderResourceView **)(pFVar4 + (ulonglong)(uVar8 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FRHIShaderResourceView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar10 = SRVCompute;
        }
        else {
          EVar10 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar10 = SRVGraphicsPixel;
          }
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_60,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        uStack_e4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_a8._4_4_ = uStack_10c;
        local_a8.Type = Assert;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_60._padding_;
        local_a8.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_60._padding_._4_1_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_60._padding_._5_3_;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_60._padding_
        ;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_60._padding_._4_4_;
        local_a8.field1_0x8._36_4_ = uStack_e4;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_a8);
        uVar11 = (ulonglong)(uint)param_2;
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView(param_4->Shader,uVar8 & 0xff,pFVar5);
      }
      FD3D11ResourceBinder<4>::SetSRV(param_4->Binder,pFVar5,(uchar)uVar8);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_2>_> @ 145961010

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FTracker *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  ERHIAccess EVar10;
  ulonglong uVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar11 = (ulonglong)param_2;
  uVar3 = param_3[uVar11];
  if (uVar3 != 0) {
    uVar8 = param_3[uVar3];
    puVar9 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FRHIShaderResourceView **)(pFVar4 + (ulonglong)(uVar8 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FRHIShaderResourceView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar10 = SRVCompute;
        }
        else {
          EVar10 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar10 = SRVGraphicsPixel;
          }
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_60,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        uStack_e4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_a8._4_4_ = uStack_10c;
        local_a8.Type = Assert;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_60._padding_;
        local_a8.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_60._padding_._4_1_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_60._padding_._5_3_;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_60._padding_
        ;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_60._padding_._4_4_;
        local_a8.field1_0x8._36_4_ = uStack_e4;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_a8);
        uVar11 = (ulonglong)(uint)param_2;
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView(param_4->Shader,uVar8 & 0xff,pFVar5);
      }
      FD3D11ResourceBinder<5>::SetSRV(param_4->Binder,pFVar5,(uchar)uVar8);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_2>_> @ 145961280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FTracker *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  ERHIAccess EVar10;
  ulonglong uVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar11 = (ulonglong)param_2;
  uVar3 = param_3[uVar11];
  if (uVar3 != 0) {
    uVar8 = param_3[uVar3];
    puVar9 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FRHIShaderResourceView **)(pFVar4 + (ulonglong)(uVar8 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FRHIShaderResourceView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar10 = SRVCompute;
        }
        else {
          EVar10 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar10 = SRVGraphicsPixel;
          }
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_60,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        uStack_e4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_a8._4_4_ = uStack_10c;
        local_a8.Type = Assert;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_60._padding_;
        local_a8.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_60._padding_._4_1_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_60._padding_._5_3_;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_60._padding_
        ;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_60._padding_._4_4_;
        local_a8.field1_0x8._36_4_ = uStack_e4;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_a8);
        uVar11 = (ulonglong)(uint)param_2;
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView(param_4->Shader,uVar8 & 0xff,pFVar5);
      }
      FD3D11ResourceBinder<0>::SetSRV(param_4->Binder,pFVar5,(uchar)uVar8);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_1>_> @ 1459614f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<3>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *pFVar4;
  FTracker *this;
  code *pcVar5;
  bool bVar6;
  FResourceIdentity *pFVar7;
  ERHIAccess EVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar3 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar10 = param_3[param_2];
  if (uVar10 != 0) {
    puVar9 = param_3 + (ulonglong)uVar10 + 1;
    uVar10 = param_3[uVar10];
    do {
      pFVar4 = *(FRHITexture **)(pFVar3 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar4 == (FRHITexture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar8 = SRVCompute;
        }
        else {
          EVar8 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar8 = SRVGraphicsPixel;
          }
        }
        pFVar7 = RHIValidation::FTextureResource::GetViewIdentity
                           ((FTextureResource *)&pFVar4->_padding_,&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar7->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar7->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar7->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar7->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar7->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar8;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (pFVar4->LastRenderTime).LastRenderTime) {
        (pFVar4->LastRenderTime).LastRenderTime = (double)*param_4->CurrentTimeForTextureTimes;
      }
      FD3D11ResourceBinder<3>::SetTexture(param_4->Binder,pFVar4,(uchar)uVar10);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_1>_> @ 145961790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<4>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *pFVar4;
  FTracker *this;
  code *pcVar5;
  bool bVar6;
  FResourceIdentity *pFVar7;
  ERHIAccess EVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar3 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar10 = param_3[param_2];
  if (uVar10 != 0) {
    puVar9 = param_3 + (ulonglong)uVar10 + 1;
    uVar10 = param_3[uVar10];
    do {
      pFVar4 = *(FRHITexture **)(pFVar3 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar4 == (FRHITexture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar8 = SRVCompute;
        }
        else {
          EVar8 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar8 = SRVGraphicsPixel;
          }
        }
        pFVar7 = RHIValidation::FTextureResource::GetViewIdentity
                           ((FTextureResource *)&pFVar4->_padding_,&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar7->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar7->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar7->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar7->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar7->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar8;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (pFVar4->LastRenderTime).LastRenderTime) {
        (pFVar4->LastRenderTime).LastRenderTime = (double)*param_4->CurrentTimeForTextureTimes;
      }
      FD3D11ResourceBinder<4>::SetTexture(param_4->Binder,pFVar4,(uchar)uVar10);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_1>_> @ 145961a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<5>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *pFVar4;
  FTracker *this;
  code *pcVar5;
  bool bVar6;
  FResourceIdentity *pFVar7;
  ERHIAccess EVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar3 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar10 = param_3[param_2];
  if (uVar10 != 0) {
    puVar9 = param_3 + (ulonglong)uVar10 + 1;
    uVar10 = param_3[uVar10];
    do {
      pFVar4 = *(FRHITexture **)(pFVar3 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar4 == (FRHITexture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar8 = SRVCompute;
        }
        else {
          EVar8 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar8 = SRVGraphicsPixel;
          }
        }
        pFVar7 = RHIValidation::FTextureResource::GetViewIdentity
                           ((FTextureResource *)&pFVar4->_padding_,&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar7->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar7->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar7->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar7->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar7->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar8;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (pFVar4->LastRenderTime).LastRenderTime) {
        (pFVar4->LastRenderTime).LastRenderTime = (double)*param_4->CurrentTimeForTextureTimes;
      }
      FD3D11ResourceBinder<5>::SetTexture(param_4->Binder,pFVar4,(uchar)uVar10);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_1>_> @ 145961cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D11ResourceBinder<0>,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *pFVar4;
  FTracker *this;
  code *pcVar5;
  bool bVar6;
  FResourceIdentity *pFVar7;
  ERHIAccess EVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar3 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar10 = param_3[param_2];
  if (uVar10 != 0) {
    puVar9 = param_3 + (ulonglong)uVar10 + 1;
    uVar10 = param_3[uVar10];
    do {
      pFVar4 = *(FRHITexture **)(pFVar3 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar4 == (FRHITexture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar8 = SRVCompute;
        }
        else {
          EVar8 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar8 = SRVGraphicsPixel;
          }
        }
        pFVar7 = RHIValidation::FTextureResource::GetViewIdentity
                           ((FTextureResource *)&pFVar4->_padding_,&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar7->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar7->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar7->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar7->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar7->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar8;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (pFVar4->LastRenderTime).LastRenderTime) {
        (pFVar4->LastRenderTime).LastRenderTime = (double)*param_4->CurrentTimeForTextureTimes;
      }
      FD3D11ResourceBinder<0>::SetTexture(param_4->Binder,pFVar4,(uchar)uVar10);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// HeapSortInternal<IHeadMountedDisplayModule_*,int,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_> @ 145961f70

void __cdecl
AlgoImpl::
HeapSortInternal<IHeadMountedDisplayModule_*,int,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
          (IHeadMountedDisplayModule **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>
          param_4)

{
  IHeadMountedDisplayModule *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
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
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_145962098:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pIVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pIVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  pIVar1 = param_1[iVar4];
                  fVar10 = IHeadMountedDisplayModule::GetModulePriority
                                     (param_1[(longlong)iVar7 + 2]);
                  fVar11 = IHeadMountedDisplayModule::GetModulePriority(pIVar1);
                  if (fVar11 < fVar10) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                pIVar1 = param_1[iVar4];
                fVar10 = IHeadMountedDisplayModule::GetModulePriority(param_1[iVar9]);
                fVar11 = IHeadMountedDisplayModule::GetModulePriority(pIVar1);
                if (fVar10 <= fVar11) break;
                pIVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pIVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      pIVar1 = param_1[iVar6];
      fVar10 = IHeadMountedDisplayModule::GetModulePriority(param_1[(longlong)iVar5 + 2]);
      fVar11 = IHeadMountedDisplayModule::GetModulePriority(pIVar1);
      if (fVar11 < fVar10) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pIVar1 = param_1[iVar6];
    fVar10 = IHeadMountedDisplayModule::GetModulePriority(param_1[iVar4]);
    fVar11 = IHeadMountedDisplayModule::GetModulePriority(pIVar1);
    if (fVar10 <= fVar11) goto LAB_145962098;
    pIVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pIVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<D3D11_INPUT_ELEMENT_DESC,int,FIdentityFunctor,`FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey'::__l2::FCompareDesc> @ 1459621a0

void __cdecl
AlgoImpl::
HeapSortInternal<D3D11_INPUT_ELEMENT_DESC,int,FIdentityFunctor,_FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey_::__l2::FCompareDesc>
          (D3D11_INPUT_ELEMENT_DESC *param_1,int param_2,FIdentityFunctor param_3,
          FCompareDesc param_4)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  DXGI_FORMAT_conflict DVar4;
  D3D11_INPUT_CLASSIFICATION DVar5;
  uint uVar6;
  uint uVar7;
  DXGI_FORMAT_conflict DVar8;
  uint uVar9;
  uint uVar10;
  D3D11_INPUT_CLASSIFICATION DVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  D3D11_INPUT_ELEMENT_DESC *pDVar17;
  int iVar18;
  D3D11_INPUT_ELEMENT_DESC *pDVar19;
  D3D11_INPUT_ELEMENT_DESC *pDVar20;
  int iVar21;
  int iVar22;
  
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
  iVar21 = iVar15;
  iVar22 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_1459622d4:
      if (iVar22 == 0) {
        iVar15 = param_2 + -1;
        lVar16 = (longlong)iVar15;
        if (0 < iVar15) {
          pDVar17 = param_1 + lVar16;
          do {
            uVar3 = pDVar17->SemanticIndex;
            DVar4 = pDVar17->Format;
            pcVar2 = param_1->SemanticName;
            uVar7 = param_1->SemanticIndex;
            DVar8 = param_1->Format;
            uVar9 = param_1->InputSlot;
            uVar10 = param_1->AlignedByteOffset;
            DVar11 = param_1->InputSlotClass;
            uVar12 = param_1->InstanceDataStepRate;
            param_1->SemanticName = pDVar17->SemanticName;
            param_1->SemanticIndex = uVar3;
            param_1->Format = DVar4;
            uVar3 = pDVar17->AlignedByteOffset;
            DVar5 = pDVar17->InputSlotClass;
            uVar6 = pDVar17->InstanceDataStepRate;
            param_1->InputSlot = pDVar17->InputSlot;
            param_1->AlignedByteOffset = uVar3;
            param_1->InputSlotClass = DVar5;
            param_1->InstanceDataStepRate = uVar6;
            pDVar17->SemanticName = pcVar2;
            pDVar17->SemanticIndex = uVar7;
            pDVar17->Format = DVar8;
            pDVar17->InputSlot = uVar9;
            pDVar17->AlignedByteOffset = uVar10;
            pDVar17->InputSlotClass = DVar11;
            pDVar17->InstanceDataStepRate = uVar12;
            iVar21 = 0;
            if (1 < iVar15) {
              do {
                iVar22 = iVar21 * 2;
                iVar14 = iVar22 + 1;
                if (iVar22 + 2 < iVar15) {
                  if (param_1[(longlong)iVar22 + 2].InputSlot * 0xffff +
                      param_1[(longlong)iVar22 + 2].AlignedByteOffset <
                      param_1[iVar14].InputSlot * 0xffff + param_1[iVar14].AlignedByteOffset) {
                    iVar14 = iVar22;
                  }
                  iVar14 = iVar14 + 1;
                }
                pDVar20 = param_1 + iVar21;
                pDVar19 = param_1 + iVar14;
                if (pDVar19->InputSlot * 0xffff + pDVar19->AlignedByteOffset <=
                    pDVar20->InputSlot * 0xffff + pDVar20->AlignedByteOffset) break;
                uVar3 = pDVar19->SemanticIndex;
                DVar4 = pDVar19->Format;
                pcVar2 = pDVar20->SemanticName;
                uVar7 = pDVar20->SemanticIndex;
                DVar8 = pDVar20->Format;
                uVar9 = pDVar20->InputSlot;
                uVar10 = pDVar20->AlignedByteOffset;
                DVar11 = pDVar20->InputSlotClass;
                uVar12 = pDVar20->InstanceDataStepRate;
                pDVar20->SemanticName = pDVar19->SemanticName;
                pDVar20->SemanticIndex = uVar3;
                pDVar20->Format = DVar4;
                uVar3 = pDVar19->AlignedByteOffset;
                DVar5 = pDVar19->InputSlotClass;
                uVar6 = pDVar19->InstanceDataStepRate;
                pDVar20->InputSlot = pDVar19->InputSlot;
                pDVar20->AlignedByteOffset = uVar3;
                pDVar20->InputSlotClass = DVar5;
                pDVar20->InstanceDataStepRate = uVar6;
                pDVar19->SemanticName = pcVar2;
                pDVar19->SemanticIndex = uVar7;
                pDVar19->Format = DVar8;
                pDVar19->InputSlot = uVar9;
                pDVar19->AlignedByteOffset = uVar10;
                pDVar19->InputSlotClass = DVar11;
                pDVar19->InstanceDataStepRate = uVar12;
                iVar21 = iVar14;
              } while (iVar14 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar16 = lVar16 + -1;
            pDVar17 = pDVar17 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar14 = iVar22 + -1;
      iVar15 = iVar21 + -2;
      iVar21 = iVar15;
      iVar22 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar18 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      if (param_1[(longlong)iVar15 + 2].InputSlot * 0xffff +
          param_1[(longlong)iVar15 + 2].AlignedByteOffset <
          param_1[iVar18].InputSlot * 0xffff + param_1[iVar18].AlignedByteOffset) {
        iVar18 = iVar15;
      }
      iVar18 = iVar18 + 1;
    }
    pDVar19 = param_1 + iVar14;
    pDVar17 = param_1 + iVar18;
    if (pDVar17->InputSlot * 0xffff + pDVar17->AlignedByteOffset <=
        pDVar19->InputSlot * 0xffff + pDVar19->AlignedByteOffset) goto LAB_1459622d4;
    uVar3 = pDVar17->SemanticIndex;
    DVar4 = pDVar17->Format;
    iVar15 = iVar18 * 2 + 1;
    pcVar2 = pDVar19->SemanticName;
    uVar7 = pDVar19->SemanticIndex;
    DVar8 = pDVar19->Format;
    uVar9 = pDVar19->InputSlot;
    uVar10 = pDVar19->AlignedByteOffset;
    DVar11 = pDVar19->InputSlotClass;
    uVar12 = pDVar19->InstanceDataStepRate;
    pDVar19->SemanticName = pDVar17->SemanticName;
    pDVar19->SemanticIndex = uVar3;
    pDVar19->Format = DVar4;
    uVar3 = pDVar17->AlignedByteOffset;
    DVar5 = pDVar17->InputSlotClass;
    uVar6 = pDVar17->InstanceDataStepRate;
    pDVar19->InputSlot = pDVar17->InputSlot;
    pDVar19->AlignedByteOffset = uVar3;
    pDVar19->InputSlotClass = DVar5;
    pDVar19->InstanceDataStepRate = uVar6;
    pDVar17->SemanticName = pcVar2;
    pDVar17->SemanticIndex = uVar7;
    pDVar17->Format = DVar8;
    pDVar17->InputSlot = uVar9;
    pDVar17->AlignedByteOffset = uVar10;
    pDVar17->InputSlotClass = DVar11;
    pDVar17->InstanceDataStepRate = uVar12;
    iVar14 = iVar18;
  } while( true );
}

// IID_PPV_ARGS_Helper<IDXGIDevice> @ 145962410

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIDevice>(IDXGIDevice **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIFactory5> @ 145962420

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIFactory5>(IDXGIFactory5 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIOutput6> @ 145962430

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIOutput6>(IDXGIOutput6 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGISwapChain3> @ 145962440

void ** __cdecl IID_PPV_ARGS_Helper<IDXGISwapChain3>(IDXGISwapChain3 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGISwapChain> @ 145962450

void ** __cdecl IID_PPV_ARGS_Helper<IDXGISwapChain>(IDXGISwapChain **param_1)

{
  return param_1;
}

// IntroSortInternal<IHeadMountedDisplayModule_*,int,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_> @ 145962ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<IHeadMountedDisplayModule_*,int,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
          (IHeadMountedDisplayModule **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>
          param_4)

{
  IHeadMountedDisplayModule *pIVar1;
  int iVar2;
  IHeadMountedDisplayModule **ppIVar3;
  IHeadMountedDisplayModule **ppIVar4;
  IHeadMountedDisplayModule ***pppIVar5;
  IHeadMountedDisplayModule **ppIVar6;
  IHeadMountedDisplayModule **ppIVar7;
  IHeadMountedDisplayModule **ppIVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_3a8 [32];
  int local_388;
  IHeadMountedDisplayModule ***local_380;
  int local_368;
  undefined4 uStack_364;
  IHeadMountedDisplayModule **local_358;
  IHeadMountedDisplayModule **local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar9 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar9;
    memset(local_340,0,0x2e8);
    pppIVar5 = &local_358;
    do {
      ppIVar6 = pppIVar5[1];
      ppIVar4 = *pppIVar5;
      local_388 = *(int *)(pppIVar5 + 2);
      uStack_364 = *(undefined4 *)((longlong)pppIVar5 + 0x14);
      iVar2 = (int)((longlong)ppIVar6 - (longlong)ppIVar4 >> 3) + 1;
      ppIVar3 = ppIVar4;
      local_380 = pppIVar5;
      local_368 = local_388;
      if (local_388 != 0) {
LAB_145962b92:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppIVar7 = ppIVar6 + 1;
          pIVar1 = ppIVar3[iVar2 >> 1];
          ppIVar3[iVar2 >> 1] = *ppIVar3;
          *ppIVar3 = pIVar1;
          ppIVar4 = ppIVar3;
LAB_145962bc0:
          ppIVar4 = ppIVar4 + 1;
          if (ppIVar4 <= ppIVar6) goto code_r0x000145962bc9;
          goto LAB_145962be5;
        }
        for (; ppIVar7 = ppIVar3, ppIVar4 = ppIVar3, ppIVar3 < ppIVar6; ppIVar6 = ppIVar6 + -1) {
          while (ppIVar4 = ppIVar4 + 1, ppIVar4 <= ppIVar6) {
            pIVar1 = *ppIVar4;
            fVar9 = IHeadMountedDisplayModule::GetModulePriority(*ppIVar7);
            fVar10 = IHeadMountedDisplayModule::GetModulePriority(pIVar1);
            if (fVar10 < fVar9) {
              ppIVar7 = ppIVar4;
            }
          }
          pIVar1 = *ppIVar7;
          *ppIVar7 = *ppIVar6;
          *ppIVar6 = pIVar1;
          pppIVar5 = local_380;
        }
        goto LAB_145962ccb;
      }
LAB_145962cba:
      HeapSortInternal<IHeadMountedDisplayModule_*,int,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                (ppIVar4,iVar2,param_3,param_4);
LAB_145962ccb:
      pppIVar5 = pppIVar5 + -3;
    } while (&local_358 <= pppIVar5);
  }
  return;
code_r0x000145962bc9:
  pIVar1 = *ppIVar4;
  fVar9 = IHeadMountedDisplayModule::GetModulePriority(*ppIVar3);
  fVar10 = IHeadMountedDisplayModule::GetModulePriority(pIVar1);
  if (fVar9 <= fVar10) goto LAB_145962bc0;
LAB_145962be5:
  do {
    ppIVar8 = ppIVar7;
    ppIVar7 = ppIVar8 + -1;
    if (ppIVar7 <= ppIVar3) break;
    pIVar1 = *ppIVar3;
    fVar9 = IHeadMountedDisplayModule::GetModulePriority(*ppIVar7);
    fVar10 = IHeadMountedDisplayModule::GetModulePriority(pIVar1);
  } while (fVar9 <= fVar10);
  if (ppIVar4 <= ppIVar7) {
    pIVar1 = *ppIVar4;
    *ppIVar4 = *ppIVar7;
    *ppIVar7 = pIVar1;
    goto LAB_145962bc0;
  }
  pIVar1 = *ppIVar3;
  *ppIVar3 = *ppIVar7;
  local_388 = local_388 + -1;
  *ppIVar7 = pIVar1;
  if ((longlong)((longlong)ppIVar7 + (-8 - (longlong)ppIVar3) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppIVar6 - (longlong)ppIVar4 & 0xfffffffffffffff8U)) {
    if (ppIVar4 < ppIVar6) {
      *pppIVar5 = ppIVar4;
      pppIVar5[1] = ppIVar6;
      *(int *)(pppIVar5 + 2) = local_388;
      pppIVar5 = pppIVar5 + 3;
      local_380 = pppIVar5;
    }
    if (ppIVar7 <= ppIVar3 + 1) goto LAB_145962ccb;
    ppIVar6 = ppIVar8 + -2;
    ppIVar4 = ppIVar3;
  }
  else {
    if (ppIVar3 + 1 < ppIVar7) {
      *pppIVar5 = ppIVar3;
      pppIVar5[1] = ppIVar8 + -2;
      *(int *)(pppIVar5 + 2) = local_388;
      pppIVar5 = pppIVar5 + 3;
      local_380 = pppIVar5;
    }
    if (ppIVar6 <= ppIVar4) goto LAB_145962ccb;
  }
  iVar2 = (int)((longlong)ppIVar6 - (longlong)ppIVar4 >> 3) + 1;
  ppIVar3 = ppIVar4;
  if (local_388 == 0) goto LAB_145962cba;
  goto LAB_145962b92;
}

// IntroSortInternal<D3D11_INPUT_ELEMENT_DESC,int,FIdentityFunctor,`FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey'::__l2::FCompareDesc> @ 145962da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<D3D11_INPUT_ELEMENT_DESC,int,FIdentityFunctor,_FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey_::__l2::FCompareDesc>
          (D3D11_INPUT_ELEMENT_DESC *param_1,int param_2,FIdentityFunctor param_3,
          FCompareDesc param_4)

{
  D3D11_INPUT_ELEMENT_DESC *pDVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  DXGI_FORMAT_conflict DVar6;
  D3D11_INPUT_CLASSIFICATION DVar7;
  uint uVar8;
  uint uVar9;
  DXGI_FORMAT_conflict DVar10;
  uint uVar11;
  uint uVar12;
  D3D11_INPUT_CLASSIFICATION DVar13;
  uint uVar14;
  int iVar15;
  D3D11_INPUT_ELEMENT_DESC *pDVar16;
  D3D11_INPUT_ELEMENT_DESC **ppDVar17;
  D3D11_INPUT_ELEMENT_DESC *pDVar18;
  D3D11_INPUT_ELEMENT_DESC *pDVar19;
  D3D11_INPUT_ELEMENT_DESC *pDVar20;
  D3D11_INPUT_ELEMENT_DESC *pDVar21;
  D3D11_INPUT_ELEMENT_DESC *pDVar22;
  float fVar23;
  undefined1 auStack_378 [48];
  D3D11_INPUT_ELEMENT_DESC *local_348;
  D3D11_INPUT_ELEMENT_DESC *local_338;
  D3D11_INPUT_ELEMENT_DESC *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar23 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar23;
    memset(local_320,0,0x2e8);
    ppDVar17 = &local_338;
    do {
      pDVar20 = ppDVar17[1];
      pDVar22 = *ppDVar17;
      pDVar1 = ppDVar17[2];
      iVar15 = (int)((longlong)pDVar20 - (longlong)pDVar22 >> 5) + 1;
      local_348._0_4_ = (int)pDVar1;
      pDVar21 = pDVar22;
      if ((int)local_348 != 0) {
LAB_145962e50:
        if (8 < iVar15) {
          uVar5 = pDVar21->SemanticIndex;
          DVar6 = pDVar21->Format;
          pDVar18 = pDVar20 + 1;
          pDVar22 = pDVar21 + iVar15 / 2;
          pcVar4 = pDVar22->SemanticName;
          uVar9 = pDVar22->SemanticIndex;
          DVar10 = pDVar22->Format;
          uVar11 = pDVar22->InputSlot;
          uVar12 = pDVar22->AlignedByteOffset;
          DVar13 = pDVar22->InputSlotClass;
          uVar14 = pDVar22->InstanceDataStepRate;
          pDVar22->SemanticName = pDVar21->SemanticName;
          pDVar22->SemanticIndex = uVar5;
          pDVar22->Format = DVar6;
          uVar5 = pDVar21->AlignedByteOffset;
          DVar7 = pDVar21->InputSlotClass;
          uVar8 = pDVar21->InstanceDataStepRate;
          pDVar22->InputSlot = pDVar21->InputSlot;
          pDVar22->AlignedByteOffset = uVar5;
          pDVar22->InputSlotClass = DVar7;
          pDVar22->InstanceDataStepRate = uVar8;
          pDVar21->SemanticName = pcVar4;
          pDVar21->SemanticIndex = uVar9;
          pDVar21->Format = DVar10;
          pDVar21->InputSlot = uVar11;
          pDVar21->AlignedByteOffset = uVar12;
          pDVar21->InputSlotClass = DVar13;
          pDVar21->InstanceDataStepRate = uVar14;
          pDVar22 = pDVar21;
LAB_145962e90:
          pDVar16 = pDVar22;
          pDVar22 = pDVar16 + 1;
          if (pDVar22 <= pDVar20) goto code_r0x000145962e9c;
          goto LAB_145962ec0;
        }
        for (; pDVar22 = pDVar21, pDVar1 = pDVar21, pDVar21 < pDVar20; pDVar20 = pDVar20 + -1) {
          while (pDVar18 = pDVar22, pDVar1 = pDVar1 + 1, pDVar1 <= pDVar20) {
            pDVar22 = pDVar1;
            if (pDVar1->InputSlot * 0xffff + pDVar1->AlignedByteOffset <=
                pDVar18->InputSlot * 0xffff + pDVar18->AlignedByteOffset) {
              pDVar22 = pDVar18;
            }
          }
          pcVar4 = pDVar18->SemanticName;
          uVar9 = pDVar18->SemanticIndex;
          DVar10 = pDVar18->Format;
          uVar11 = pDVar18->InputSlot;
          uVar12 = pDVar18->AlignedByteOffset;
          DVar13 = pDVar18->InputSlotClass;
          uVar14 = pDVar18->InstanceDataStepRate;
          uVar5 = pDVar20->SemanticIndex;
          DVar6 = pDVar20->Format;
          pDVar18->SemanticName = pDVar20->SemanticName;
          pDVar18->SemanticIndex = uVar5;
          pDVar18->Format = DVar6;
          uVar5 = pDVar20->AlignedByteOffset;
          DVar7 = pDVar20->InputSlotClass;
          uVar8 = pDVar20->InstanceDataStepRate;
          pDVar18->InputSlot = pDVar20->InputSlot;
          pDVar18->AlignedByteOffset = uVar5;
          pDVar18->InputSlotClass = DVar7;
          pDVar18->InstanceDataStepRate = uVar8;
          pDVar20->SemanticName = pcVar4;
          pDVar20->SemanticIndex = uVar9;
          pDVar20->Format = DVar10;
          pDVar20->InputSlot = uVar11;
          pDVar20->AlignedByteOffset = uVar12;
          pDVar20->InputSlotClass = DVar13;
          pDVar20->InstanceDataStepRate = uVar14;
        }
        goto LAB_145962fbb;
      }
LAB_145962fa9:
      local_348 = pDVar1;
      HeapSortInternal<D3D11_INPUT_ELEMENT_DESC,int,FIdentityFunctor,_FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey_::__l2::FCompareDesc>
                (pDVar22,iVar15,param_3,param_4);
LAB_145962fbb:
      ppDVar17 = ppDVar17 + -3;
    } while (&local_338 <= ppDVar17);
  }
  return;
code_r0x000145962e9c:
  if (pDVar16[1].InputSlot * 0xffff + pDVar16[1].AlignedByteOffset <=
      pDVar21->InputSlot * 0xffff + pDVar21->AlignedByteOffset) goto LAB_145962e90;
LAB_145962ec0:
  do {
    pDVar19 = pDVar18;
    pDVar18 = pDVar19 + -1;
    if (pDVar18 <= pDVar21) break;
  } while (pDVar21->InputSlot * 0xffff + pDVar21->AlignedByteOffset <=
           pDVar19[-1].InputSlot * 0xffff + pDVar19[-1].AlignedByteOffset);
  uVar2 = pDVar19[-1].SemanticIndex;
  uVar3 = pDVar19[-1].Format;
  if (pDVar22 <= pDVar18) {
    pcVar4 = pDVar22->SemanticName;
    uVar9 = pDVar16[1].SemanticIndex;
    DVar6 = pDVar16[1].Format;
    uVar11 = pDVar16[1].InputSlot;
    uVar12 = pDVar16[1].AlignedByteOffset;
    DVar13 = pDVar16[1].InputSlotClass;
    uVar14 = pDVar16[1].InstanceDataStepRate;
    pDVar22->SemanticName = pDVar18->SemanticName;
    pDVar16[1].SemanticIndex = uVar2;
    pDVar16[1].Format = uVar3;
    uVar5 = pDVar19[-1].AlignedByteOffset;
    DVar7 = pDVar19[-1].InputSlotClass;
    uVar8 = pDVar19[-1].InstanceDataStepRate;
    pDVar16[1].InputSlot = pDVar19[-1].InputSlot;
    pDVar16[1].AlignedByteOffset = uVar5;
    pDVar16[1].InputSlotClass = DVar7;
    pDVar16[1].InstanceDataStepRate = uVar8;
    pDVar18->SemanticName = pcVar4;
    pDVar19[-1].SemanticIndex = uVar9;
    pDVar19[-1].Format = DVar6;
    pDVar19[-1].InputSlot = uVar11;
    pDVar19[-1].AlignedByteOffset = uVar12;
    pDVar19[-1].InputSlotClass = DVar13;
    pDVar19[-1].InstanceDataStepRate = uVar14;
    goto LAB_145962e90;
  }
  pcVar4 = pDVar21->SemanticName;
  uVar9 = pDVar21->SemanticIndex;
  DVar6 = pDVar21->Format;
  uVar11 = pDVar21->InputSlot;
  uVar12 = pDVar21->AlignedByteOffset;
  DVar13 = pDVar21->InputSlotClass;
  uVar14 = pDVar21->InstanceDataStepRate;
  pDVar21->SemanticName = pDVar18->SemanticName;
  pDVar21->SemanticIndex = uVar2;
  pDVar21->Format = uVar3;
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = pDVar19[-1].AlignedByteOffset;
  DVar7 = pDVar19[-1].InputSlotClass;
  uVar8 = pDVar19[-1].InstanceDataStepRate;
  pDVar21->InputSlot = pDVar19[-1].InputSlot;
  pDVar21->AlignedByteOffset = uVar5;
  pDVar21->InputSlotClass = DVar7;
  pDVar21->InstanceDataStepRate = uVar8;
  pDVar18->SemanticName = pcVar4;
  pDVar19[-1].SemanticIndex = uVar9;
  pDVar19[-1].Format = DVar6;
  pDVar19[-1].InputSlot = uVar11;
  pDVar19[-1].AlignedByteOffset = uVar12;
  pDVar19[-1].InputSlotClass = DVar13;
  pDVar19[-1].InstanceDataStepRate = uVar14;
  if ((longlong)((longlong)pDVar18 + (-0x20 - (longlong)pDVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pDVar20 - (longlong)pDVar22 & 0xffffffffffffffe0U)) {
    if (pDVar22 < pDVar20) {
      *ppDVar17 = pDVar22;
      ppDVar17[1] = pDVar20;
      *(int *)(ppDVar17 + 2) = (int)local_348;
      ppDVar17 = ppDVar17 + 3;
    }
    if (pDVar18 <= pDVar21 + 1) goto LAB_145962fbb;
    pDVar20 = pDVar19 + -2;
    pDVar22 = pDVar21;
  }
  else {
    if (pDVar21 + 1 < pDVar18) {
      *ppDVar17 = pDVar21;
      ppDVar17[1] = pDVar19 + -2;
      *(int *)(ppDVar17 + 2) = (int)local_348;
      ppDVar17 = ppDVar17 + 3;
    }
    if (pDVar20 <= pDVar22) goto LAB_145962fbb;
  }
  iVar15 = (int)((longlong)pDVar20 - (longlong)pDVar22 >> 5) + 1;
  pDVar21 = pDVar22;
  if ((int)local_348 == 0) goto LAB_145962fa9;
  goto LAB_145962e50;
}

// ReadShaderOptionalData<FD3D11ComputeShader> @ 145963080

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ReadShaderOptionalData<FD3D11ComputeShader>(FShaderCodeReader *param_1,FD3D11ComputeShader *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uchar *puVar8;
  char *pcVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_res10 [2];
  int local_res18 [2];
  byte *local_res20;
  FString local_1c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8 [2];
  FArchiveState local_198;
  uchar *local_108;
  undefined8 local_100;
  longlong local_f8;
  char local_f0;
  FArchiveState local_e8;
  uchar *local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  
  pbVar7 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  local_res20 = pbVar7;
  if ((pbVar7 == (byte *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("PackedResourceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                         ,0x13,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar14 = 0;
  *(undefined2 *)((longlong)&param_2->_padding_ + 2) = 0;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ResourceMasks,'\x04');
  if (puVar8 != (uchar *)0x0) {
    *(undefined2 *)((longlong)&param_2->_padding_ + 2) = *(undefined2 *)puVar8;
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  pcVar9 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_1c8,pcVar9);
  plVar1 = &param_2->_padding_;
  if ((FString *)plVar1 != &local_1c8) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_1c8.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_1c8.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_1c8.Data.ArrayMax;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  local_res10[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res10);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res10[0], 0 < local_res10[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar8;
    local_f8 = lVar12;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_1b8);
    if (((int)param_2->_padding_ != 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                           ,0x26,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < local_1b8.ArrayNum) {
      plVar1 = &param_2->_padding_;
      uVar15 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar5 = 0;
        if ((int)uVar13 < local_1b8.ArrayNum) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(local_1b8.AllocatorInstance.Data + uVar15 + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)(local_1b8.AllocatorInstance.Data + uVar15);
        }
        pFVar10 = FName::FName(local_1a8,pwVar11);
        if ((((FName *)*plVar1 <= pFVar10) &&
            (pFVar10 < (FName *)*plVar1 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)param_2->_padding_;
        if (iVar6 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar1,
                             (int *)((longlong)&param_2->_padding_ + 4));
        }
        *(int *)&param_2->_padding_ = iVar6 + 1;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x10;
        *(FName *)(*plVar1 + (longlong)iVar6 * 8) = *pFVar10;
      } while ((int)(uVar13 + 1) < local_1b8.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
    pbVar7 = local_res20;
  }
  local_res18[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_res18);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res18[0], 0 < local_res18[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar8;
    local_48 = lVar12;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&param_2->_padding_
              );
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ShaderModel6,'\x01');
  if ((puVar8 == (uchar *)0x0) || (*puVar8 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)((longlong)&param_2->_padding_ + 1) = uVar4;
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  return;
}

// ReadShaderOptionalData<FD3D11GeometryShader> @ 1459634e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ReadShaderOptionalData<FD3D11GeometryShader>
          (FShaderCodeReader *param_1,FD3D11GeometryShader *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uchar *puVar8;
  char *pcVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_res10 [2];
  int local_res18 [2];
  byte *local_res20;
  FString local_1c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8 [2];
  FArchiveState local_198;
  uchar *local_108;
  undefined8 local_100;
  longlong local_f8;
  char local_f0;
  FArchiveState local_e8;
  uchar *local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  
  pbVar7 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  local_res20 = pbVar7;
  if ((pbVar7 == (byte *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("PackedResourceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                         ,0x13,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar14 = 0;
  *(undefined2 *)((longlong)&param_2->_padding_ + 2) = 0;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ResourceMasks,'\x04');
  if (puVar8 != (uchar *)0x0) {
    *(undefined2 *)((longlong)&param_2->_padding_ + 2) = *(undefined2 *)puVar8;
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  pcVar9 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_1c8,pcVar9);
  plVar1 = &param_2->_padding_;
  if ((FString *)plVar1 != &local_1c8) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_1c8.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_1c8.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_1c8.Data.ArrayMax;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  local_res10[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res10);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res10[0], 0 < local_res10[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar8;
    local_f8 = lVar12;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_1b8);
    if (((int)param_2->_padding_ != 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                           ,0x26,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < local_1b8.ArrayNum) {
      plVar1 = &param_2->_padding_;
      uVar15 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar5 = 0;
        if ((int)uVar13 < local_1b8.ArrayNum) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(local_1b8.AllocatorInstance.Data + uVar15 + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)(local_1b8.AllocatorInstance.Data + uVar15);
        }
        pFVar10 = FName::FName(local_1a8,pwVar11);
        if ((((FName *)*plVar1 <= pFVar10) &&
            (pFVar10 < (FName *)*plVar1 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)param_2->_padding_;
        if (iVar6 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar1,
                             (int *)((longlong)&param_2->_padding_ + 4));
        }
        *(int *)&param_2->_padding_ = iVar6 + 1;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x10;
        *(FName *)(*plVar1 + (longlong)iVar6 * 8) = *pFVar10;
      } while ((int)(uVar13 + 1) < local_1b8.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
    pbVar7 = local_res20;
  }
  local_res18[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_res18);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res18[0], 0 < local_res18[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar8;
    local_48 = lVar12;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&param_2->_padding_
              );
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ShaderModel6,'\x01');
  if ((puVar8 == (uchar *)0x0) || (*puVar8 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)((longlong)&param_2->_padding_ + 1) = uVar4;
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  return;
}

// ReadShaderOptionalData<FD3D11PixelShader> @ 145963940

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ReadShaderOptionalData<FD3D11PixelShader>(FShaderCodeReader *param_1,FD3D11PixelShader *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uchar *puVar8;
  char *pcVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_res10 [2];
  int local_res18 [2];
  byte *local_res20;
  FString local_1c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8 [2];
  FArchiveState local_198;
  uchar *local_108;
  undefined8 local_100;
  longlong local_f8;
  char local_f0;
  FArchiveState local_e8;
  uchar *local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  
  pbVar7 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  local_res20 = pbVar7;
  if ((pbVar7 == (byte *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("PackedResourceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                         ,0x13,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar14 = 0;
  *(undefined2 *)((longlong)&param_2->_padding_ + 2) = 0;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ResourceMasks,'\x04');
  if (puVar8 != (uchar *)0x0) {
    *(undefined2 *)((longlong)&param_2->_padding_ + 2) = *(undefined2 *)puVar8;
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  pcVar9 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_1c8,pcVar9);
  plVar1 = &param_2->_padding_;
  if ((FString *)plVar1 != &local_1c8) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_1c8.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_1c8.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_1c8.Data.ArrayMax;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  local_res10[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res10);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res10[0], 0 < local_res10[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar8;
    local_f8 = lVar12;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_1b8);
    if (((int)param_2->_padding_ != 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                           ,0x26,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < local_1b8.ArrayNum) {
      plVar1 = &param_2->_padding_;
      uVar15 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar5 = 0;
        if ((int)uVar13 < local_1b8.ArrayNum) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(local_1b8.AllocatorInstance.Data + uVar15 + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)(local_1b8.AllocatorInstance.Data + uVar15);
        }
        pFVar10 = FName::FName(local_1a8,pwVar11);
        if ((((FName *)*plVar1 <= pFVar10) &&
            (pFVar10 < (FName *)*plVar1 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)param_2->_padding_;
        if (iVar6 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar1,
                             (int *)((longlong)&param_2->_padding_ + 4));
        }
        *(int *)&param_2->_padding_ = iVar6 + 1;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x10;
        *(FName *)(*plVar1 + (longlong)iVar6 * 8) = *pFVar10;
      } while ((int)(uVar13 + 1) < local_1b8.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
    pbVar7 = local_res20;
  }
  local_res18[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_res18);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res18[0], 0 < local_res18[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar8;
    local_48 = lVar12;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&param_2->_padding_
              );
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ShaderModel6,'\x01');
  if ((puVar8 == (uchar *)0x0) || (*puVar8 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)((longlong)&param_2->_padding_ + 1) = uVar4;
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  return;
}

// ReadShaderOptionalData<FD3D11VertexShader> @ 145963da0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ReadShaderOptionalData<FD3D11VertexShader>(FShaderCodeReader *param_1,FD3D11VertexShader *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uchar *puVar8;
  char *pcVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_res10 [2];
  int local_res18 [2];
  byte *local_res20;
  FString local_1c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8 [2];
  FArchiveState local_198;
  uchar *local_108;
  undefined8 local_100;
  longlong local_f8;
  char local_f0;
  FArchiveState local_e8;
  uchar *local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  
  pbVar7 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  local_res20 = pbVar7;
  if ((pbVar7 == (byte *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("PackedResourceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                         ,0x13,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar14 = 0;
  *(undefined2 *)((longlong)&param_2->_padding_ + 2) = 0;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ResourceMasks,'\x04');
  if (puVar8 != (uchar *)0x0) {
    *(undefined2 *)((longlong)&param_2->_padding_ + 2) = *(undefined2 *)puVar8;
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  pcVar9 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_1c8,pcVar9);
  plVar1 = &param_2->_padding_;
  if ((FString *)plVar1 != &local_1c8) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_1c8.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_1c8.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_1c8.Data.ArrayMax;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  local_res10[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res10);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res10[0], 0 < local_res10[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar8;
    local_f8 = lVar12;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_1b8);
    if (((int)param_2->_padding_ != 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                           ,0x26,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < local_1b8.ArrayNum) {
      plVar1 = &param_2->_padding_;
      uVar15 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar5 = 0;
        if ((int)uVar13 < local_1b8.ArrayNum) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(local_1b8.AllocatorInstance.Data + uVar15 + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)(local_1b8.AllocatorInstance.Data + uVar15);
        }
        pFVar10 = FName::FName(local_1a8,pwVar11);
        if ((((FName *)*plVar1 <= pFVar10) &&
            (pFVar10 < (FName *)*plVar1 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)param_2->_padding_;
        if (iVar6 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar1,
                             (int *)((longlong)&param_2->_padding_ + 4));
        }
        *(int *)&param_2->_padding_ = iVar6 + 1;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x10;
        *(FName *)(*plVar1 + (longlong)iVar6 * 8) = *pFVar10;
      } while ((int)(uVar13 + 1) < local_1b8.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
    pbVar7 = local_res20;
  }
  local_res18[0] = 0;
  puVar8 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_res18);
  if ((puVar8 != (uchar *)0x0) && (lVar12 = (longlong)local_res18[0], 0 < local_res18[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar8;
    local_48 = lVar12;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&param_2->_padding_
              );
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  *(byte *)&param_2->_padding_ = *pbVar7 & 1;
  puVar8 = FShaderCodeReader::FindOptionalData(param_1,ShaderModel6,'\x01');
  if ((puVar8 == (uchar *)0x0) || (*puVar8 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)((longlong)&param_2->_padding_ + 1) = uVar4;
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  return;
}

// SetShaderValue<int_[4]> @ 1459684f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderValue<int_[4]>
          (FRHIBatchedShaderParameters *param_1,FShaderParameter *param_2,int (*param_3) [4],
          uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2->NumBytes + param_4 * -0x10;
  if (0x10 < (int)uVar1) {
    uVar1 = 0x10;
  }
  if (0 < (int)uVar1) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)param_2->BufferIndex,(uint)param_2->BaseIndex + param_4 * 0x10,uVar1,
               param_3);
  }
  return;
}

// SetShaderValue<unsigned_int_[4]> @ 145968540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderValue<unsigned_int_[4]>
          (FRHIBatchedShaderParameters *param_1,FShaderParameter *param_2,uint (*param_3) [4],
          uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2->NumBytes + param_4 * -0x10;
  if (0x10 < (int)uVar1) {
    uVar1 = 0x10;
  }
  if (0 < (int)uVar1) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)param_2->BufferIndex,(uint)param_2->BaseIndex + param_4 * 0x10,uVar1,
               param_3);
  }
  return;
}

// SetShaderValue<float_[4]> @ 145968590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderValue<float_[4]>
          (FRHIBatchedShaderParameters *param_1,FShaderParameter *param_2,float (*param_3) [4],
          uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2->NumBytes + param_4 * -0x10;
  if (0x10 < (int)uVar1) {
    uVar1 = 0x10;
  }
  if (0 < (int)uVar1) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)param_2->BufferIndex,(uint)param_2->BaseIndex + param_4 * 0x10,uVar1,
               param_3);
  }
  return;
}

// SetupD3D11TextureCommonDesc<D3D11_TEXTURE2D_DESC> @ 14596aa00

ED3D11TextureCreateViewFlags __cdecl
SetupD3D11TextureCommonDesc<D3D11_TEXTURE2D_DESC>
          (D3D11_TEXTURE2D_DESC *param_1,FRHITextureDesc *param_2,DXGI_FORMAT_conflict param_3)

{
  EPixelFormat EVar1;
  uint uVar2;
  uint uVar3;
  ETextureCreateFlags EVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  ED3D11TextureCreateViewFlags EVar10;
  int iVar11;
  ED3D11TextureCreateViewFlags EVar12;
  byte bVar13;
  uint uVar14;
  D3D11_USAGE DVar15;
  byte bVar16;
  D3D11_USAGE DVar17;
  
  param_1->Width = 0;
  param_1->Height = 0;
  param_1->MipLevels = 0;
  param_1->ArraySize = 0;
  DVar17 = D3D11_USAGE_DEFAULT;
  param_1->Format = DXGI_FORMAT_UNKNOWN;
  (param_1->SampleDesc).Count = 0;
  *(undefined8 *)&(param_1->SampleDesc).Quality = 0;
  param_1->BindFlags = 0;
  param_1->CPUAccessFlags = 0;
  param_1->MiscFlags = 0;
  uVar14 = 0;
  if ((param_2->Dimension == TextureCube) || (param_2->Dimension == TextureCubeArray)) {
    uVar14 = 4;
  }
  uVar2 = (param_2->Extent).field0_0x0._s_0.X;
  bVar16 = param_2->NumMips;
  uVar3 = (param_2->Extent).field0_0x0._s_0.Y;
  EVar1 = param_2->Format;
  bVar7 = param_2->NumSamples;
  EVar4 = param_2->Flags;
  if (((uVar2 == 0) || (uVar3 == 0)) || (bVar16 == 0)) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("SizeX > 0 && SizeY > 0 && NumMips > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       ,0x11d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar10 = (*pcVar5)();
      return EVar10;
    }
  }
  if (bVar7 < 9) {
    if (bVar7 != 1) goto LAB_14596aad7;
  }
  else {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("ActualMSAAQuality != 0xffffffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       ,0x126,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar10 = (*pcVar5)();
      return EVar10;
    }
LAB_14596aad7:
    if ((EVar4 >> 0x19 & 1) != 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("NumSamples == 1 || !EnumHasAnyFlags(Flags, ETextureCreateFlags::Shared)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x127,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
  }
  if ((EVar4 >> 0x13 & 1) == 0) {
    bVar7 = 1;
    DVar15 = DVar17;
  }
  else {
    if ((EVar4 & (ShaderResource|DepthStencilTargetable|RenderTargetable)) != None) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ShaderResource)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x12d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    bVar7 = 0;
    DVar17 = D3D11_USAGE_STAGING;
    DVar15 = 0x20000;
  }
  if ((EVar4 & CPUWritable) != None) {
    DVar15 = 0x10000;
    DVar17 = D3D11_USAGE_STAGING;
  }
  param_1->Usage = DVar17;
  param_1->CPUAccessFlags = DVar15;
  bVar13 = 0;
  if ((EVar4 & CPUWritable) == None) {
    bVar13 = bVar7;
  }
  param_1->MiscFlags = uVar14;
  param_1->Width = uVar2;
  param_1->Height = uVar3;
  param_1->MipLevels = (uint)bVar16;
  param_1->Format = param_3;
  param_1->BindFlags = (uint)bVar13 << 3;
  if ((EVar1 == PF_NV12) || (EVar1 == PF_P010)) {
    bVar13 = 0;
  }
  bVar16 = 0;
  if ((EVar4 >> 0xf & 1) == 0) {
    bVar16 = bVar13;
  }
  if ((EVar4 >> 0x19 & 1) != 0) {
    iVar11 = (**(code **)(*(longlong *)GCVarUseSharedKeyedMutex._padding_ + 200))();
    if (iVar11 == 0) {
      uVar14 = param_1->MiscFlags | 2;
    }
    else {
      uVar14 = param_1->MiscFlags | 0x100;
    }
    param_1->MiscFlags = uVar14;
  }
  bVar8 = false;
  bVar6 = false;
  if ((EVar4 & RenderTargetable) == None) {
    if ((EVar4 & DepthStencilTargetable) != None) {
      if ((EVar4 & (ResolveTargetable|RenderTargetable)) != None) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::ResolveTargetable)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                           ,0x16b,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          EVar10 = (*pcVar5)();
          return EVar10;
        }
      }
      param_1->BindFlags = param_1->BindFlags | 0x40;
      bVar6 = true;
      goto LAB_14596ac24;
    }
    if ((EVar4 & ResolveTargetable) == None) goto LAB_14596ac24;
    if ((EVar4 & (DepthStencilTargetable|RenderTargetable)) != None) {
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::DepthStencilTargetable)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x171,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    if (((EVar1 - PF_DepthStencil & 0xf6) == 0) && (EVar1 != PF_A16B16G16R16)) {
      param_1->BindFlags = param_1->BindFlags | 0x40;
      bVar6 = true;
      goto LAB_14596ac24;
    }
  }
  else if ((EVar4 & (DepthStencilTargetable|ResolveTargetable)) != None) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ResolveTargetable)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       ,0x165,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      EVar10 = (*pcVar5)();
      return EVar10;
    }
  }
  param_1->BindFlags = param_1->BindFlags | 0x20;
  bVar8 = true;
LAB_14596ac24:
  if ((EVar1 == PF_NV12) || (EVar1 == PF_P010)) {
    bVar8 = false;
  }
  if ((EVar4 >> 0x11 & 1) != 0) {
    param_1->BindFlags = param_1->BindFlags | 0x80;
  }
  if ((bVar6) && ((EVar4 & ShaderResource) == None)) {
    param_1->BindFlags = param_1->BindFlags & 0xfffffff7;
    bVar16 = 0;
  }
  EVar10 = bVar16 != 0 | RTV;
  if (!bVar8) {
    EVar10 = (uint)(bVar16 != 0);
  }
  EVar12 = EVar10 | DSV;
  if (!bVar6) {
    EVar12 = EVar10;
  }
  return EVar12;
}

// SetupD3D11TextureCommonDesc<D3D11_TEXTURE3D_DESC> @ 14596ad20

ED3D11TextureCreateViewFlags __cdecl
SetupD3D11TextureCommonDesc<D3D11_TEXTURE3D_DESC>
          (D3D11_TEXTURE3D_DESC *param_1,FRHITextureDesc *param_2,DXGI_FORMAT_conflict param_3)

{
  EPixelFormat EVar1;
  uint uVar2;
  uint uVar3;
  ETextureCreateFlags EVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  ED3D11TextureCreateViewFlags EVar10;
  int iVar11;
  ED3D11TextureCreateViewFlags EVar12;
  byte bVar13;
  uint uVar14;
  D3D11_USAGE DVar15;
  byte bVar16;
  D3D11_USAGE DVar17;
  
  param_1->Width = 0;
  param_1->Height = 0;
  param_1->Depth = 0;
  param_1->MipLevels = 0;
  DVar17 = D3D11_USAGE_DEFAULT;
  param_1->Format = DXGI_FORMAT_UNKNOWN;
  param_1->Usage = D3D11_USAGE_DEFAULT;
  param_1->BindFlags = 0;
  param_1->CPUAccessFlags = 0;
  param_1->MiscFlags = 0;
  uVar14 = 0;
  if ((param_2->Dimension == TextureCube) || (param_2->Dimension == TextureCubeArray)) {
    uVar14 = 4;
  }
  uVar2 = (param_2->Extent).field0_0x0._s_0.X;
  bVar16 = param_2->NumMips;
  uVar3 = (param_2->Extent).field0_0x0._s_0.Y;
  EVar1 = param_2->Format;
  bVar7 = param_2->NumSamples;
  EVar4 = param_2->Flags;
  if (((uVar2 == 0) || (uVar3 == 0)) || (bVar16 == 0)) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("SizeX > 0 && SizeY > 0 && NumMips > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       ,0x11d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar10 = (*pcVar5)();
      return EVar10;
    }
  }
  if (bVar7 < 9) {
    if (bVar7 != 1) goto LAB_14596adf3;
  }
  else {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("ActualMSAAQuality != 0xffffffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       ,0x126,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar10 = (*pcVar5)();
      return EVar10;
    }
LAB_14596adf3:
    if ((EVar4 >> 0x19 & 1) != 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("NumSamples == 1 || !EnumHasAnyFlags(Flags, ETextureCreateFlags::Shared)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x127,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
  }
  if ((EVar4 >> 0x13 & 1) == 0) {
    bVar7 = 1;
    DVar15 = DVar17;
  }
  else {
    if ((EVar4 & (ShaderResource|DepthStencilTargetable|RenderTargetable)) != None) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ShaderResource)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x12d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    bVar7 = 0;
    DVar17 = D3D11_USAGE_STAGING;
    DVar15 = 0x20000;
  }
  if ((EVar4 & CPUWritable) != None) {
    DVar15 = 0x10000;
    DVar17 = D3D11_USAGE_STAGING;
  }
  param_1->Usage = DVar17;
  param_1->CPUAccessFlags = DVar15;
  bVar13 = 0;
  if ((EVar4 & CPUWritable) == None) {
    bVar13 = bVar7;
  }
  param_1->MiscFlags = uVar14;
  param_1->Width = uVar2;
  param_1->Height = uVar3;
  param_1->MipLevels = (uint)bVar16;
  param_1->Format = param_3;
  param_1->BindFlags = (uint)bVar13 << 3;
  if ((EVar1 == PF_NV12) || (EVar1 == PF_P010)) {
    bVar13 = 0;
  }
  bVar16 = 0;
  if ((EVar4 >> 0xf & 1) == 0) {
    bVar16 = bVar13;
  }
  if ((EVar4 >> 0x19 & 1) != 0) {
    iVar11 = (**(code **)(*(longlong *)GCVarUseSharedKeyedMutex._padding_ + 200))();
    if (iVar11 == 0) {
      uVar14 = param_1->MiscFlags | 2;
    }
    else {
      uVar14 = param_1->MiscFlags | 0x100;
    }
    param_1->MiscFlags = uVar14;
  }
  bVar8 = false;
  bVar6 = false;
  if ((EVar4 & RenderTargetable) == None) {
    if ((EVar4 & DepthStencilTargetable) != None) {
      if ((EVar4 & (ResolveTargetable|RenderTargetable)) != None) {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::ResolveTargetable)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                           ,0x16b,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          EVar10 = (*pcVar5)();
          return EVar10;
        }
      }
      param_1->BindFlags = param_1->BindFlags | 0x40;
      bVar6 = true;
      goto LAB_14596af40;
    }
    if ((EVar4 & ResolveTargetable) == None) goto LAB_14596af40;
    if ((EVar4 & (DepthStencilTargetable|RenderTargetable)) != None) {
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::DepthStencilTargetable)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                         ,0x171,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    if (((EVar1 - PF_DepthStencil & 0xf6) == 0) && (EVar1 != PF_A16B16G16R16)) {
      param_1->BindFlags = param_1->BindFlags | 0x40;
      bVar6 = true;
      goto LAB_14596af40;
    }
  }
  else if ((EVar4 & (DepthStencilTargetable|ResolveTargetable)) != None) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(Flags, ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ResolveTargetable)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       ,0x165,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      EVar10 = (*pcVar5)();
      return EVar10;
    }
  }
  param_1->BindFlags = param_1->BindFlags | 0x20;
  bVar8 = true;
LAB_14596af40:
  if ((EVar1 == PF_NV12) || (EVar1 == PF_P010)) {
    bVar8 = false;
  }
  if ((EVar4 >> 0x11 & 1) != 0) {
    param_1->BindFlags = param_1->BindFlags | 0x80;
  }
  if ((bVar6) && ((EVar4 & ShaderResource) == None)) {
    param_1->BindFlags = param_1->BindFlags & 0xfffffff7;
    bVar16 = 0;
  }
  EVar10 = bVar16 != 0 | RTV;
  if (!bVar8) {
    EVar10 = (uint)(bVar16 != 0);
  }
  EVar12 = EVar10 | DSV;
  if (!bVar6) {
    EVar12 = EVar10;
  }
  return EVar12;
}

// __builtin_array_init_helper<INTCExtensionVersion> @ 14596b040

void __cdecl
__builtin_array_init_helper<INTCExtensionVersion>(INTCExtensionVersion *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 0xc);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,1,0> @ 14596e520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FD3D11Viewport::FD3D11Viewport_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::__l2::<lambda_1>,0,0> @ 14596e540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FD3D11DynamicRHI::RHIEndRenderPass_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>,1,1> @ 14596e560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FD3D11DynamicRHI::RHICreateTextureInitializer_::__l24::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::`24'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(FRHIResource **)((longlong)this + 0x10) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>,1,1> @ 14596e5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FD3D11DynamicRHI::RHICreateBufferInitializer_::__l30::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::`30'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014596e5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,1,0> @ 14596e5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,1,0>
::
~TFunction_OwnedObject<_UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer_::__l1::<lambda_24_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// ~TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,1,0> @ 14596e610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,1,0>
::
~TFunction_OwnedObject<_UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer_::__l1::<lambda_26_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_26_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// ~TFunction_OwnedObject<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,1,0> @ 14596e630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,1,0>
::
~TFunction_OwnedObject<_UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer_::__l1::<lambda_27_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_27_>__0___0FDefaultLayoutTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K__QEAV__TUniqueFunction___A6A_AV__TRefCountPtr_VFRHITexture____AEAVFRHICommandListBase___Z___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// operator<< @ 14596fbc0

FArchive * __cdecl operator<<(FArchive *param_1,FParameterAllocation *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int *piVar3;
  EShaderParameterType *pEVar4;
  uint local_res8 [2];
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->BufferIndex);
    }
  }
  else {
    param_2->BufferIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->BaseIndex;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->Size;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(param_2->bBound != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      param_2->bBound = local_res8[0] != 0;
    }
  }
  else {
    param_2->bBound = *piVar3 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar4 = (EShaderParameterType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar4 + 1 <= (EShaderParameterType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Type = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Type,1);
  return param_1;
}

// operator== @ 14596fd80

bool __cdecl operator==(FD3D11VertexDeclarationKey *param_1,FD3D11VertexDeclarationKey *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->VertexElements).ArrayNum;
  if (iVar1 == (param_2->VertexElements).ArrayNum) {
    if ((iVar1 != 0) && (iVar1 = memcmp(param_1,param_2,(longlong)iVar1 << 5), iVar1 != 0)) {
      return false;
    }
    iVar1 = memcmp(param_1->StreamStrides,param_2->StreamStrides,0x22);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// `vector_deleting_destructor'`adjustor{32}' @ 145970c80

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D11ConstantBuffer::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FD3D11ConstantBuffer::_vector_deleting_destructor__adjustor_32__
          (FD3D11ConstantBuffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D11ConstantBuffer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 145970c90

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D11DynamicRHI::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FD3D11DynamicRHI::_vector_deleting_destructor__adjustor_24__(FD3D11DynamicRHI *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FD3D11DynamicRHI *)&this[-1].Adapter.DXGIAdapterDesc.AdapterLuid,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 145970ca0

/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D11ShaderResourceView::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
FD3D11ShaderResourceView::_vector_deleting_destructor__adjustor_48__
          (FD3D11ShaderResourceView *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D11ShaderResourceView *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145970cb0

/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D11Texture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FD3D11Texture::_vector_deleting_destructor__adjustor_40__(FD3D11Texture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D11Texture *)this[-1].DepthStencilViews,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 145970cc0

/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D11UnorderedAccessView::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
FD3D11UnorderedAccessView::_vector_deleting_destructor__adjustor_48__
          (FD3D11UnorderedAccessView *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D11UnorderedAccessView *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 145970cd0

/* [thunk]:public: virtual void * __ptr64 __cdecl FWinD3D11ConstantBuffer::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FWinD3D11ConstantBuffer::_vector_deleting_destructor__adjustor_32__
          (FWinD3D11ConstantBuffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWinD3D11ConstantBuffer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145970ce0

void * __thiscall
TBoundShaderStateHistory<10000,1>::_scalar_deleting_destructor_
          (TBoundShaderStateHistory<10000,1> *this,uint param_1)

{
  ~TBoundShaderStateHistory<10000,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::`24'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(FRHIResource **)((longlong)this + 0x10) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::`30'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x28))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_26_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_27_>__0___0FDefaultLayoutTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K__QEAV__TUniqueFunction___A6A_AV__TRefCountPtr_VFRHITexture____AEAVFRHICommandListBase___Z___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970f50

void * __thiscall
TGlobalResource<TBoundShaderStateHistory<10000,1>,1>::_scalar_deleting_destructor_
          (TGlobalResource<TBoundShaderStateHistory<10000,1>,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_V__TBoundShaderStateHistory__0CHBA__00___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>
            ((TBoundShaderStateHistory<10000,1> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970fa0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<`FD3D11GPUFence::Wait'::__l5::FDebugScope,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145970fe0

void * __thiscall
FD3D11BlendState::_scalar_deleting_destructor_(FD3D11BlendState *this,uint param_1)

{
  ID3D11BlendState *pIVar1;
  
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11BlendState *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971030

void * __thiscall
FD3D11BoundShaderState::_scalar_deleting_destructor_(FD3D11BoundShaderState *this,uint param_1)

{
  ~FD3D11BoundShaderState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971070

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FD3D11Buffer::_scalar_deleting_destructor_(FD3D11Buffer *this,uint param_1)

{
  ID3D11Buffer *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FLLMPauseScope local_18;
  
  pIVar1 = (this->Resource).Reference;
  this->_padding_ = (longlong)&___7FD3D11Buffer__6B_;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    UE::RHICore::UpdateGlobalBufferStats
              ((FRHIBufferDesc *)&this->_padding_,-(ulonglong)(uint)this->_padding_);
    FLLMPauseScope::FLLMPauseScope
              (&local_18,GraphicsPlatform,false,-(ulonglong)(uint)this->_padding_,Platform,None);
    MemoryTrace_Free((ulong64)pIVar1,1,0);
    FLLMPauseScope::~FLLMPauseScope(&local_18);
  }
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Public\\D3D11Resources.h"
                       ,0x88,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971180

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D11ComputeShader::_scalar_deleting_destructor_(FD3D11ComputeShader *this,uint param_1)

{
  ID3D11ComputeShader *pIVar1;
  
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11ComputeShader *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459711f0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FD3D11ConstantBuffer::_scalar_deleting_destructor_(FD3D11ConstantBuffer *this,uint param_1)

{
  ~FD3D11ConstantBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971230

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FD3D11DepthStencilState::_scalar_deleting_destructor_(FD3D11DepthStencilState *this,uint param_1)

{
  ID3D11DepthStencilState *pIVar1;
  
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11DepthStencilState *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971280

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FD3D11DynamicRHI::_scalar_deleting_destructor_(FD3D11DynamicRHI *this,uint param_1)

{
  ~FD3D11DynamicRHI(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x17ef0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459712c0

void * __thiscall FD3D11GPUFence::_scalar_deleting_destructor_(FD3D11GPUFence *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  pFVar3 = (this->Event).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971320

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D11GeometryShader::_scalar_deleting_destructor_(FD3D11GeometryShader *this,uint param_1)

{
  ID3D11GeometryShader *pIVar1;
  
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11GeometryShader *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971390

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D11PixelShader::_scalar_deleting_destructor_(FD3D11PixelShader *this,uint param_1)

{
  ID3D11PixelShader *pIVar1;
  
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11PixelShader *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971400

void * __thiscall
FD3D11PlatformCommandList::_scalar_deleting_destructor_
          (FD3D11PlatformCommandList *this,uint param_1)

{
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar1;
  
  pTVar1 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)&this->field_0x28;
  if (*(TSharedRef<FRHIBreadcrumbAllocator,1> **)&this->field_0x28 ==
      (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
    pTVar1 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&this->field_0x8;
  }
  DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>(pTVar1,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971470

void * __thiscall
FD3D11RasterizerState::_scalar_deleting_destructor_(FD3D11RasterizerState *this,uint param_1)

{
  ID3D11RasterizerState *pIVar1;
  
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11RasterizerState *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459714c0

void * __thiscall
FD3D11RenderQuery_RHI::_scalar_deleting_destructor_(FD3D11RenderQuery_RHI *this,uint param_1)

{
  FD3D11RenderQuery::Unlink((FD3D11RenderQuery *)&this->_padding_);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971520

void * __thiscall
FD3D11SamplerState::_scalar_deleting_destructor_(FD3D11SamplerState *this,uint param_1)

{
  ID3D11SamplerState *pIVar1;
  
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11SamplerState *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971570

void * __thiscall
FD3D11ShaderResourceView::_scalar_deleting_destructor_(FD3D11ShaderResourceView *this,uint param_1)

{
  ID3D11ShaderResourceView *pIVar1;
  
  pIVar1 = (this->View).Reference;
  if (pIVar1 != (ID3D11ShaderResourceView *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FD3D11View__6B_;
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971610

void * __thiscall
FD3D11StagingBuffer::_scalar_deleting_destructor_(FD3D11StagingBuffer *this,uint param_1)

{
  ID3D11Buffer *pIVar1;
  
  this->_padding_ = (longlong)&___7FD3D11StagingBuffer__6B_;
  pIVar1 = (this->StagedRead).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    (this->StagedRead).Reference = (ID3D11Buffer *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->StagedRead).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971690

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */

void * __thiscall
FD3D11StateCacheBase::_scalar_deleting_destructor_(FD3D11StateCacheBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FD3D11StateCacheBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459716d0

void * __thiscall FD3D11Texture::_scalar_deleting_destructor_(FD3D11Texture *this,uint param_1)

{
  ~FD3D11Texture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971710

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FD3D11UniformBuffer::_scalar_deleting_destructor_(FD3D11UniformBuffer *this,uint param_1)

{
  ~FD3D11UniformBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971750

void * __thiscall
FD3D11UnorderedAccessView::_scalar_deleting_destructor_
          (FD3D11UnorderedAccessView *this,uint param_1)

{
  ID3D11UnorderedAccessView *pIVar1;
  
  pIVar1 = (this->View).Reference;
  if (pIVar1 != (ID3D11UnorderedAccessView *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FD3D11View__6B_;
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459717f0

void * __thiscall
FD3D11VertexDeclaration::_scalar_deleting_destructor_(FD3D11VertexDeclaration *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971830

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D11VertexShader::_scalar_deleting_destructor_(FD3D11VertexShader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ID3D11VertexShader *pIVar2;
  
  pFVar1 = (this->Code).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Resource).Reference;
  if (pIVar2 != (ID3D11VertexShader *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459718b0

void * __thiscall FD3D11View::_scalar_deleting_destructor_(FD3D11View *this,uint param_1)

{
  *(undefined ***)this = &___7FD3D11View__6B_;
  if (*(longlong *)&this->field_0x8 != 0) {
    *(undefined8 *)(*(longlong *)&this->field_0x8 + 0x10) = *(undefined8 *)&this->field_0x10;
  }
  if (*(undefined8 **)&this->field_0x10 != (undefined8 *)0x0) {
    **(undefined8 **)&this->field_0x10 = *(undefined8 *)&this->field_0x8;
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971910

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FD3D11Viewport::_scalar_deleting_destructor_(FD3D11Viewport *this,uint param_1)

{
  ~FD3D11Viewport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971950

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UE::RHICore::FInvalidBuffer::_scalar_deleting_destructor_(FInvalidBuffer *this,uint param_1)

{
  RHIValidation::FResource::~FResource((FResource *)&this->field_0x28);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459719a0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FWinD3D11ConstantBuffer::_scalar_deleting_destructor_(FWinD3D11ConstantBuffer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FWinD3D11ConstantBuffer::FSubBuffer,int>
            ((FSubBuffer *)(this->SubBuffers).AllocatorInstance.Data,(this->SubBuffers).ArrayNum);
  pFVar1 = (this->SubBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FD3D11ConstantBuffer::~FD3D11ConstantBuffer((FD3D11ConstantBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145971a00

void * __thiscall
ID3D11DynamicRHI::_scalar_deleting_destructor_(ID3D11DynamicRHI *this,uint param_1)

{
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// ApplyBC7SoftwareAdapterWorkaround @ 145971ec0

void __cdecl ApplyBC7SoftwareAdapterWorkaround(bool param_1,D3D11_TEXTURE2D_DESC *param_2)

{
  if ((((param_1) && (param_2->Format == DXGI_FORMAT_BC7_TYPELESS)) &&
      (param_2->Usage == D3D11_USAGE_DEFAULT)) &&
     (((param_2->MipLevels == 1 && (param_2->ArraySize == 1)) && (param_2->CPUAccessFlags == 0)))) {
    param_2->MiscFlags = param_2->MiscFlags | 2;
  }
  return;
}

// ApplyVendorExtensions @ 145971ef0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ApplyVendorExtensions
          (ID3D11Device *param_1,EShaderFrequency param_2,FD3D11ShaderData *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  
  if (param_3->bIsSm6Shader != false) {
    return false;
  }
  pFVar5 = (param_3->VendorExtensions).AllocatorInstance.Data;
  iVar2 = (param_3->VendorExtensions).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0xc;
  do {
    while( true ) {
      if ((param_3->VendorExtensions).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar5 == pFVar1) {
        return true;
      }
      iVar3 = *(int *)pFVar5;
      if (iVar3 == 0x10de) break;
      if (iVar3 == 0x1002) {
        bVar4 = IsRHIDeviceAMD();
      }
      else {
        if (iVar3 != 0x8086) goto LAB_145971fa2;
        bVar4 = IsRHIDeviceIntel();
      }
      if (bVar4 == false) {
        return false;
      }
LAB_145971fa2:
      pFVar5 = pFVar5 + 0xc;
    }
    bVar4 = IsRHIDeviceNVIDIA();
    if (!bVar4) {
      return false;
    }
    if (pFVar5[10] != (FScriptContainerElement)0x4) goto LAB_145971fa2;
    NvAPI_D3D11_SetNvShaderExtnSlot(param_1,*(undefined2 *)(pFVar5 + 6));
    pFVar5 = pFVar5 + 0xc;
    *param_4 = true;
  } while( true );
}

// CheckD3D11StoredMessages @ 1459730e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl CheckD3D11StoredMessages(void)

{
  ID3D11Device *pIVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  bool bVar8;
  void *pvVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined1 auStackY_1a8 [32];
  longlong *local_178;
  void *local_170;
  longlong *local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  bool bVar9;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pvVar5 = (void *)0x0;
  local_168[0] = (longlong *)0x0;
  bVar9 = false;
  bVar8 = false;
  pIVar1 = (GD3D11RHI->Direct3DDevice).Reference;
  iVar3 = (**(code **)*pIVar1)(pIVar1,&_GUID_79cf2233_7536_4948_9d36_1e4692dc5760,local_168);
  if (iVar3 < 0) {
    VerifyD3D11Result(iVar3,
                      "GD3D11RHI->GetDevice()->QueryInterface(__uuidof(ID3D11Debug), (void**)DebugDevice.GetInitReference())"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                      ,0x94,(GD3D11RHI->Direct3DDevice).Reference);
  }
  if (local_168[0] != (longlong *)0x0) {
    local_178 = (longlong *)0x0;
    pIVar1 = (GD3D11RHI->Direct3DDevice).Reference;
    iVar3 = (**(code **)*pIVar1)(pIVar1,&_GUID_6543dbb6_1b48_42f5_ab82_e97ec74326f6,&local_178);
    bVar8 = bVar9;
    if (-1 < iVar3) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        pwVar7 = FCommandLine::Get();
        bBreakOnWarning = FParse::Param(pwVar7,L"d3dbreakonwarning");
        _Init_thread_footer(&_TSS0);
      }
      uVar4 = (**(code **)(*local_178 + 0x48))();
      pvVar10 = pvVar5;
      if (0 < (int)uVar4) {
        uVar12 = (ulonglong)uVar4;
        pvVar11 = pvVar5;
        do {
          local_170 = (void *)0x0;
          (**(code **)(*local_178 + 0x28))(local_178,pvVar11,0,&local_170);
          if (pvVar10 < local_170) {
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            pvVar5 = FMemory::Malloc((ulong64)local_170,0);
            pvVar10 = local_170;
          }
          if (pvVar5 != (void *)0x0) {
            (**(code **)(*local_178 + 0x28))(local_178,pvVar11,pvVar5,&local_170);
            iVar3 = *(int *)((longlong)pvVar5 + 4);
            if ((iVar3 == 0) || (iVar3 == 1)) {
              if (1 < (byte)LogD3D11RHI._0_1_) {
                pcVar2 = *(char **)((longlong)pvVar5 + 0x10);
                local_158._padding_ = 0;
                if (pcVar2 == (char *)0x0) {
                  local_158.Ptr = (wchar_t *)0x0;
                  local_158.StringLength = 0;
                }
                else {
                  sVar6 = strlen(pcVar2);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,pcVar2,(int)sVar6,Yes);
                }
                UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
LAB_1459733d8:
              bVar8 = true;
            }
            else if (iVar3 == 2) {
              if (2 < (byte)LogD3D11RHI._0_1_) {
                pcVar2 = *(char **)((longlong)pvVar5 + 0x10);
                local_158._padding_ = 0;
                if (pcVar2 == (char *)0x0) {
                  local_158.Ptr = (wchar_t *)0x0;
                  local_158.StringLength = 0;
                }
                else {
                  sVar6 = strlen(pcVar2);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,pcVar2,(int)sVar6,Yes);
                }
                UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
              }
              if (bBreakOnWarning != false) goto LAB_1459733d8;
            }
            else if (4 < (byte)LogD3D11RHI._0_1_) {
              pcVar2 = *(char **)((longlong)pvVar5 + 0x10);
              local_158._padding_ = 0;
              if (pcVar2 == (char *)0x0) {
                local_158.Ptr = (wchar_t *)0x0;
                local_158.StringLength = 0;
              }
              else {
                sVar6 = strlen(pcVar2);
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,pcVar2,(int)sVar6,Yes);
              }
              UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
            }
          }
          pvVar11 = (void *)((longlong)pvVar11 + 1);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      (**(code **)(*local_178 + 0x20))();
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
    }
    if (local_178 != (longlong *)0x0) {
      (**(code **)(*local_178 + 0x10))();
    }
    if (local_168[0] != (longlong *)0x0) {
      (**(code **)(*local_168[0] + 0x10))();
    }
  }
  return bVar8;
}

// ConvertDXGIToFColor @ 1459762b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::ConvertDXGIToFColor
          (DXGI_FORMAT_conflict param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,
          FColor *param_6,FReadSurfaceDataFlags *param_7)

{
  uchar *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  uchar uVar5;
  ushort uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  undefined1 uVar13;
  FColor_u_0 FVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uchar *puVar18;
  int iVar19;
  ushort *puVar20;
  FColor_u_0 *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  FFloat3Packed *this;
  FFloat3PackedSE *this_00;
  uint *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  FColor_u_0 local_res8;
  undefined4 local_178;
  FColor_u_0 local_174;
  FLinearColor_u_0 local_170;
  FColor_u_0 local_160;
  FColor_u_0 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  FColor_u_0 local_150;
  FColor local_14c;
  FColor_u_0 local_148;
  FLinearColor_u_0 local_144;
  FLinearColor_u_0 local_130;
  FLinearColor_u_0 local_120;
  FLinearColor_u_0 local_110;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  int iStack_e4;
  undefined1 local_d8 [160];
  
  fVar30 = __real_37800080;
  fVar11 = __real_437f0000;
  fVar10 = __real_3dcccccd;
  fVar33 = __real_33800000;
  fVar9 = __real_3f000000;
  uVar24 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  uVar23 = (ulonglong)param_2;
  bVar12 = param_7->bLinearToGamma;
  local_res8._s_0.B = bVar12;
  switch(param_1) {
  case DXGI_FORMAT_R32G32B32A32_FLOAT:
    ConvertRawR32G32B32A32DataToFColor(param_2,param_3,param_4,param_5,param_6,bVar12);
    return true;
  default:
    return false;
  case DXGI_FORMAT_R16G16B16A16_FLOAT:
    ConvertRawR16G16B16A16FDataToFColor(param_2,param_3,param_4,param_5,param_6,bVar12);
    return true;
  case DXGI_FORMAT_R16G16B16A16_UNORM:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        puVar20 = (ushort *)(param_4 + uVar24 * param_5);
        pFVar21 = &param_6[uVar24 * param_2].field0_0x0;
        uVar27 = uVar23;
        if (param_2 != 0) {
          do {
            local_110._s_0.R = (float)*puVar20 * fVar30;
            local_110._s_0.G = (float)puVar20[1] * fVar30;
            local_110._s_0.A = (float)puVar20[3] * fVar30;
            local_110._s_0.B = (float)puVar20[2] * fVar30;
            if (bVar12 == false) {
              if (local_110._s_0.B <= 0.0) {
                local_110._s_0.B = 0.0;
              }
              if (local_110._s_0.G <= 0.0) {
                local_110._s_0.G = 0.0;
              }
              if (local_110._s_0.R <= 0.0) {
                local_110._s_0.R = 0.0;
              }
              if (local_110._s_0.A <= 0.0) {
                local_110._s_0.A = 0.0;
              }
              if (fVar8 <= local_110._s_0.B) {
                local_110._s_0.B = fVar8;
              }
              if (fVar8 <= local_110._s_0.G) {
                local_110._s_0.G = fVar8;
              }
              if (fVar8 <= local_110._s_0.R) {
                local_110._s_0.R = fVar8;
              }
              if (fVar8 <= local_110._s_0.A) {
                local_110._s_0.A = fVar8;
              }
              local_160._s_0.G = (char)(int)(local_110._s_0.G * fVar11 + fVar9);
              local_160._s_0.B = (char)(int)(local_110._s_0.B * fVar11 + fVar9);
              local_160._s_0.R = (char)(int)(local_110._s_0.R * fVar11 + fVar9);
              local_160._s_0.A = (char)(int)(local_110._s_0.A * fVar11 + fVar9);
            }
            else {
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_110._s_0);
            }
            puVar20 = puVar20 + 4;
            *pFVar21 = local_160;
            pFVar21 = pFVar21 + 1;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R32G8X24_TYPELESS:
    auVar3._0_4_ = param_7->CubeFace;
    auVar3._4_4_ = param_7->CompressionMode;
    auVar3[8] = param_7->bLinearToGamma;
    auVar3._9_3_ = *(undefined3 *)&param_7->field_0x9;
    auVar3._12_4_ = param_7->MaxDepthRange;
    uVar22 = 0;
    if (param_3 != 0) {
      local_d8._0_16_ = auVar3;
      do {
        pFVar21 = &param_6[uVar22 * param_2].field0_0x0;
        if (param_2 != 0) {
          lVar26 = (ulonglong)(param_5 * uVar22) - (longlong)pFVar21;
          uVar27 = uVar23;
          if (local_d8[8] == '\0') {
            local_144._s_0.A = 0.0;
            do {
              fVar33 = *(float *)(param_4 + lVar26 + (longlong)pFVar21);
              if (fVar8 <= fVar33) {
                fVar33 = fVar8;
              }
              local_144._s_0.R =
                   (float)((uint)((fVar8 / (float)auVar3._12_4_) / (fVar33 * fVar10 - fVar10)) &
                          uVar24);
              if (fVar8 <= local_144._s_0.R) {
                local_144._s_0.R = fVar8;
              }
              fVar33 = local_144._s_0.R;
              if (local_144._s_0.R <= 0.0) {
                fVar33 = 0.0;
              }
              if (fVar8 <= fVar33) {
                fVar33 = fVar8;
              }
              local_174._s_0.G = (uchar)(int)(fVar33 * fVar11 + fVar9);
              local_174._s_0.B = local_174._s_0.G;
              local_174._s_0.R = local_174._s_0.G;
              local_174._s_0.A = 0;
              *pFVar21 = local_174;
              pFVar21 = pFVar21 + 1;
              if (2 < (byte)LogRHI._0_1_) {
                local_144._s_0.G = local_144._s_0.R;
                local_144._s_0.B = local_144._s_0.R;
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u_CPU_read_of_R32_15105c6f0,
                           (FLogCategoryBase *)&LogRHI);
              }
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          else {
            do {
              fVar33 = *(float *)(param_4 + lVar26 + (longlong)pFVar21);
              if (fVar8 <= fVar33) {
                fVar33 = fVar8;
              }
              local_144._s_0.A = 0.0;
              local_144._s_0.R =
                   (float)((uint)((fVar8 / (float)auVar3._12_4_) / (fVar33 * fVar10 - fVar10)) &
                          uVar24);
              if (fVar8 <= local_144._s_0.R) {
                local_144._s_0.R = fVar8;
              }
              local_144._s_0.G = local_144._s_0.R;
              local_144._s_0.B = local_144._s_0.R;
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_144._s_0);
              *pFVar21 = local_174;
              pFVar21 = pFVar21 + 1;
              if (2 < (byte)LogRHI._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u_CPU_read_of_R32_15105c6f0,
                           (FLogCategoryBase *)&LogRHI);
              }
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R10G10B10A2_UNORM:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        puVar25 = (uint *)(param_4 + uVar24 * param_5);
        if (param_2 != 0) {
          local_154 = 0xffaa5500;
          lVar26 = (ulonglong)(uVar24 * param_2) * 4 - (longlong)puVar25;
          uVar27 = uVar23;
          do {
            uVar22 = *puVar25;
            puVar25 = puVar25 + 1;
            iVar16 = (uVar22 >> 0x14 & 0x3ff) * 0xff;
            iVar19 = (uVar22 >> 10 & 0x3ff) * 0xff;
            iVar17 = (uVar22 & 0x3ff) * 0xff;
            *(uint *)((longlong)param_6 + lVar26 + -4 + (longlong)puVar25) =
                 CONCAT13(*(undefined1 *)((longlong)&local_154 + (ulonglong)(uVar22 >> 0x1e)),
                          CONCAT12((char)(iVar17 + 0x200 + (iVar17 + 0x200U >> 10) >> 10),
                                   CONCAT11((char)(iVar19 + 0x200 + (iVar19 + 0x200U >> 10) >> 10),
                                            (char)(iVar16 + (iVar16 + 0x200U >> 10) + 0x200 >> 10)))
                         );
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R11G11B10_FLOAT:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        this = (FFloat3Packed *)(param_4 + uVar24 * param_5);
        if (param_2 != 0) {
          lVar26 = ((ulonglong)(param_2 * uVar24) * 4 - (longlong)this) + (longlong)param_6;
          uVar27 = uVar23;
          if (bVar12 == false) {
            do {
              FFloat3Packed::ToLinearColor(this,(FLinearColor *)&local_130._s_0);
              uVar28 = local_130._s_0.B;
              if (local_130._s_0.B <= 0.0) {
                uVar28 = 0.0;
              }
              uVar31 = local_130._s_0.G;
              if (local_130._s_0.G <= 0.0) {
                uVar31 = 0.0;
              }
              if (fVar8 <= (float)uVar28) {
                uVar28 = fVar8;
              }
              if (fVar8 <= (float)uVar31) {
                uVar31 = fVar8;
              }
              param_7._0_1_ = (undefined1)(int)((float)uVar28 * fVar11 + fVar9);
              uVar28 = local_130._s_0.R;
              if (local_130._s_0.R <= 0.0) {
                uVar28 = 0.0;
              }
              if (fVar8 <= (float)uVar28) {
                uVar28 = fVar8;
              }
              uVar29 = local_130._s_0.A;
              if (local_130._s_0.A <= 0.0) {
                uVar29 = 0.0;
              }
              param_7._1_1_ = (undefined1)(int)((float)uVar31 * fVar11 + fVar9);
              if (fVar8 <= (float)uVar29) {
                uVar29 = fVar8;
              }
              param_7._2_1_ = (undefined1)(int)((float)uVar28 * fVar11 + fVar9);
              param_7._3_1_ = (undefined1)(int)((float)uVar29 * fVar11 + fVar9);
              *(uint *)(lVar26 + (longlong)this) =
                   CONCAT13(param_7._3_1_,
                            CONCAT12(param_7._2_1_,CONCAT11(param_7._1_1_,param_7._0_1_)));
              this = this + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          else {
            do {
              FFloat3Packed::ToLinearColor(this,(FLinearColor *)&local_130._s_0);
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_130._s_0);
              *(uint *)(lVar26 + (longlong)this) =
                   CONCAT13(param_7._3_1_,
                            CONCAT12(param_7._2_1_,CONCAT11(param_7._1_1_,param_7._0_1_)));
              this = this + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R8G8B8A8_TYPELESS:
  case DXGI_FORMAT_R8G8B8A8_UNORM:
  case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          puVar18 = param_4 + uVar24 * param_5;
          uVar27 = uVar23;
          do {
            local_158 = CONCAT13(puVar18[3],CONCAT12(*puVar18,CONCAT11(puVar18[1],puVar18[2])));
            *(undefined4 *)
             (puVar18 + 4 +
             (longlong)param_6 +
             (((ulonglong)(uVar24 * param_2) * 4 - (ulonglong)(uVar24 * param_5)) -
             (longlong)param_4) + -4) = local_158;
            uVar27 = uVar27 - 1;
            puVar18 = puVar18 + 4;
          } while (uVar27 != 0);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R16G16_UNORM:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          local_150.Bits = 0xff000000;
          pFVar21 = &param_6[uVar24 * param_2].field0_0x0;
          puVar20 = (ushort *)(param_4 + uVar24 * param_5);
          uVar27 = uVar23;
          do {
            local_150.Bits =
                 (uint)CONCAT12(local_150._3_1_,
                                CONCAT11((char)((*puVar20 + 0x81) * 0xff >> 0x10),
                                         (char)((*(ushort *)
                                                  (param_4 + (((ulonglong)(uVar24 * param_5) +
                                                              (ulonglong)(uVar24 * param_2) * -4) -
                                                             (longlong)param_6) + 2 +
                                                  (longlong)pFVar21) + 0x81) * 0xff >> 0x10))) << 8;
            *pFVar21 = local_150;
            uVar27 = uVar27 - 1;
            pFVar21 = pFVar21 + 1;
            puVar20 = puVar20 + 2;
          } while (uVar27 != 0);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R24G8_TYPELESS:
    auVar2._0_4_ = param_7->CubeFace;
    auVar2._4_4_ = param_7->CompressionMode;
    auVar2[8] = param_7->bLinearToGamma;
    auVar2._9_3_ = *(undefined3 *)&param_7->field_0x9;
    auVar2._12_4_ = param_7->MaxDepthRange;
    uVar28._0_1_ = param_7->bOutputStencil;
    uVar28._1_1_ = param_7->MipLevel;
    uVar28._2_2_ = *(undefined2 *)&param_7->field_0x12;
    iStack_e4 = param_7->ArrayIndex;
    uVar22 = 0;
    if (param_3 != 0) {
      local_f8 = auVar2;
      local_e8 = uVar28;
      do {
        pFVar21 = &param_6[uVar22 * param_2].field0_0x0;
        if (param_2 != 0) {
          if (local_f8[8] == '\0') {
            uVar15 = 0;
            puVar25 = (uint *)param_4;
            if (3 < param_2) {
              uVar15 = (param_2 - 4 >> 2) + 1;
              uVar27 = (ulonglong)uVar15;
              uVar15 = uVar15 * 4;
              do {
                if ((undefined1)uVar28 == '\0') {
                  fVar30 = (float)(*puVar25 & 0xffffff) * fVar33;
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  fVar30 = (float)((uint)((fVar8 / (float)auVar2._12_4_) /
                                         (fVar30 * fVar10 - fVar10)) & uVar24);
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  if (fVar30 <= 0.0) {
                    fVar30 = 0.0;
                  }
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  local_res8._s_0.G = (uchar)(int)(fVar30 * fVar11 + fVar9);
                  local_res8._s_0.B = local_res8._s_0.G;
                  local_res8._s_0.R = local_res8._s_0.G;
                  local_res8._s_0.A = 0;
                  FVar14 = local_res8;
                }
                else {
                  uVar13 = *(undefined1 *)((longlong)puVar25 + 3);
                  FVar14.Bits = CONCAT12(uVar13,CONCAT11(uVar13,uVar13)) | 0xff000000;
                }
                pFVar21->Bits = (uint)FVar14;
                if ((undefined1)uVar28 == '\0') {
                  fVar30 = (float)(puVar25[1] & 0xffffff) * fVar33;
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  fVar30 = (float)((uint)((fVar8 / (float)auVar2._12_4_) /
                                         (fVar30 * fVar10 - fVar10)) & uVar24);
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  if (fVar30 <= 0.0) {
                    fVar30 = 0.0;
                  }
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  local_res8._s_0.G = (uchar)(int)(fVar30 * fVar11 + fVar9);
                  local_res8._s_0.B = local_res8._s_0.G;
                  local_res8._s_0.R = local_res8._s_0.G;
                  local_res8._s_0.A = 0;
                  FVar14 = local_res8;
                }
                else {
                  uVar13 = *(undefined1 *)((longlong)puVar25 + 7);
                  FVar14.Bits = CONCAT12(uVar13,CONCAT11(uVar13,uVar13)) | 0xff000000;
                }
                pFVar21[1].Bits = (uint)FVar14;
                if ((undefined1)uVar28 == '\0') {
                  fVar30 = (float)(puVar25[2] & 0xffffff) * fVar33;
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  fVar30 = (float)((uint)((fVar8 / (float)auVar2._12_4_) /
                                         (fVar30 * fVar10 - fVar10)) & uVar24);
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  if (fVar30 <= 0.0) {
                    fVar30 = 0.0;
                  }
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  local_res8._s_0.G = (uchar)(int)(fVar30 * fVar11 + fVar9);
                  local_res8._s_0.B = local_res8._s_0.G;
                  local_res8._s_0.R = local_res8._s_0.G;
                  local_res8._s_0.A = 0;
                  FVar14 = local_res8;
                }
                else {
                  uVar13 = *(undefined1 *)((longlong)puVar25 + 0xb);
                  FVar14.Bits = CONCAT12(uVar13,CONCAT11(uVar13,uVar13)) | 0xff000000;
                }
                pFVar21[2].Bits = (uint)FVar14;
                if ((undefined1)uVar28 == '\0') {
                  fVar30 = (float)(puVar25[3] & 0xffffff) * fVar33;
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  fVar30 = (float)((uint)((fVar8 / (float)auVar2._12_4_) /
                                         (fVar30 * fVar10 - fVar10)) & uVar24);
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  if (fVar30 <= 0.0) {
                    fVar30 = 0.0;
                  }
                  if (fVar8 <= fVar30) {
                    fVar30 = fVar8;
                  }
                  local_res8._s_0.G = (uchar)(int)(fVar30 * fVar11 + fVar9);
                  local_res8._s_0.B = local_res8._s_0.G;
                  local_res8._s_0.R = local_res8._s_0.G;
                  local_res8._s_0.A = 0;
                  FVar14 = local_res8;
                }
                else {
                  uVar13 = *(undefined1 *)((longlong)puVar25 + 0xf);
                  FVar14.Bits = CONCAT12(uVar13,CONCAT11(uVar13,uVar13)) | 0xff000000;
                }
                pFVar21[3].Bits = (uint)FVar14;
                puVar25 = puVar25 + 4;
                pFVar21 = pFVar21 + 4;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
              if (param_2 <= uVar15) goto LAB_145976de7;
            }
            lVar26 = (longlong)pFVar21 - (longlong)puVar25;
            uVar27 = (ulonglong)(param_2 - uVar15);
            do {
              if ((undefined1)uVar28 == '\0') {
                fVar30 = (float)(*puVar25 & 0xffffff) * fVar33;
                if (fVar8 <= fVar30) {
                  fVar30 = fVar8;
                }
                fVar30 = (float)((uint)((fVar8 / (float)auVar2._12_4_) / (fVar30 * fVar10 - fVar10))
                                & uVar24);
                if (fVar8 <= fVar30) {
                  fVar30 = fVar8;
                }
                if (fVar30 <= 0.0) {
                  fVar30 = 0.0;
                }
                if (fVar8 <= fVar30) {
                  fVar30 = fVar8;
                }
                local_res8._s_0.G = (uchar)(int)(fVar30 * fVar11 + fVar9);
                local_res8._s_0.B = local_res8._s_0.G;
                local_res8._s_0.R = local_res8._s_0.G;
                local_res8._s_0.A = 0;
                FVar14 = local_res8;
              }
              else {
                uVar13 = *(undefined1 *)((longlong)puVar25 + 3);
                FVar14.Bits = CONCAT12(uVar13,CONCAT11(uVar13,uVar13)) | 0xff000000;
              }
              ((FColor_u_0 *)(lVar26 + (longlong)puVar25))->Bits = (uint)FVar14;
              puVar25 = puVar25 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          else {
            uVar27 = uVar23;
            do {
              if ((undefined1)uVar28 == '\0') {
                local_170._s_0.A = 0.0;
                fVar30 = (float)(*(uint *)(param_4 + ((ulonglong)(uVar22 * param_2) * -4 -
                                                     (longlong)param_6) + (longlong)pFVar21) &
                                0xffffff) * fVar33;
                if (fVar8 <= fVar30) {
                  fVar30 = fVar8;
                }
                local_170._s_0.R =
                     (float)((uint)((fVar8 / (float)auVar2._12_4_) / (fVar30 * fVar10 - fVar10)) &
                            uVar24);
                if (fVar8 <= local_170._s_0.R) {
                  local_170._s_0.R = fVar8;
                }
                local_170._s_0.G = local_170._s_0.R;
                local_170._s_0.B = local_170._s_0.R;
                FLinearColor::ToFColorSRGB((FLinearColor *)&local_170._s_0);
                FVar14 = local_res8;
              }
              else {
                bVar4 = (param_4 + ((ulonglong)(uVar22 * param_2) * -4 - (longlong)param_6) + 3)
                        [(longlong)pFVar21];
                FVar14.Bits = (uint)bVar4 << 8 | (uint)bVar4 << 0x10 | (uint)bVar4 | 0xff000000;
              }
              *pFVar21 = FVar14;
              pFVar21 = pFVar21 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
        }
LAB_145976de7:
        uVar22 = uVar22 + 1;
        if (param_3 <= uVar22) {
          return true;
        }
      } while( true );
    }
    break;
  case DXGI_FORMAT_R8G8_UNORM:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        puVar18 = param_4 + uVar24 * param_5;
        if (param_2 != 0) {
          local_148.Bits = 0xff000000;
          pFVar21 = &param_6[uVar24 * param_2].field0_0x0;
          uVar27 = uVar23;
          do {
            puVar1 = puVar18 + 1;
            uVar5 = *puVar18;
            puVar18 = puVar18 + 2;
            local_148.Bits = (uint)CONCAT12(local_148._3_1_,CONCAT11(uVar5,*puVar1)) << 8;
            *pFVar21 = local_148;
            uVar27 = uVar27 - 1;
            pFVar21 = pFVar21 + 1;
          } while (uVar27 != 0);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
    }
    break;
  case DXGI_FORMAT_R16_TYPELESS:
  case DXGI_FORMAT_R16_UNORM:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        puVar20 = (ushort *)(param_4 + uVar24 * param_5);
        if (param_2 != 0) {
          local_15c.Bits = 0xff000000;
          pFVar21 = &param_6[uVar24 * param_2].field0_0x0;
          uVar27 = uVar23;
          do {
            FVar14 = local_15c;
            uVar6 = *puVar20;
            puVar20 = puVar20 + 1;
            local_15c._s_0.G = (uchar)((uVar6 + 0x81) * 0xff >> 0x10);
            local_15c._s_0.B = local_15c._s_0.G;
            local_15c._3_1_ = FVar14._s_0.A;
            local_15c._s_0.R = local_15c._s_0.G;
            *pFVar21 = local_15c;
            uVar27 = uVar27 - 1;
            pFVar21 = pFVar21 + 1;
          } while (uVar27 != 0);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R8_UNORM:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        puVar18 = param_4 + uVar24 * param_5;
        pFVar21 = &param_6[uVar24 * param_2].field0_0x0;
        uVar27 = uVar23;
        if (param_2 != 0) {
          do {
            local_14c.field0_0x0._s_0.G = *puVar18;
            puVar18 = puVar18 + 1;
            local_14c.field0_0x0._s_0.B = local_14c.field0_0x0._s_0.G;
            local_14c.field0_0x0._s_0.R = local_14c.field0_0x0._s_0.G;
            local_14c.field0_0x0._s_0.A = local_14c.field0_0x0._s_0.G;
            *pFVar21 = local_14c.field0_0x0;
            uVar27 = uVar27 - 1;
            pFVar21 = pFVar21 + 1;
          } while (uVar27 != 0);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
    uVar24 = 0;
    if (param_3 != 0) {
      do {
        this_00 = (FFloat3PackedSE *)(param_4 + uVar24 * param_5);
        if (param_2 != 0) {
          lVar26 = ((ulonglong)(param_2 * uVar24) * 4 - (longlong)this_00) + (longlong)param_6;
          uVar27 = uVar23;
          if (bVar12 == false) {
            do {
              FFloat3PackedSE::ToLinearColor(this_00,(FLinearColor *)&local_120._s_0);
              uVar28 = local_120._s_0.B;
              if (local_120._s_0.B <= 0.0) {
                uVar28 = 0.0;
              }
              uVar31 = local_120._s_0.G;
              if (local_120._s_0.G <= 0.0) {
                uVar31 = 0.0;
              }
              if (fVar8 <= (float)uVar28) {
                uVar28 = fVar8;
              }
              if (fVar8 <= (float)uVar31) {
                uVar31 = fVar8;
              }
              uVar29 = local_120._s_0.R;
              if (local_120._s_0.R <= 0.0) {
                uVar29 = 0.0;
              }
              if (fVar8 <= (float)uVar29) {
                uVar29 = fVar8;
              }
              uVar32 = local_120._s_0.A;
              if (local_120._s_0.A <= 0.0) {
                uVar32 = 0.0;
              }
              if (fVar8 <= (float)uVar32) {
                uVar32 = fVar8;
              }
              local_178 = CONCAT13((char)(int)((float)uVar32 * fVar11 + fVar9),
                                   CONCAT12((char)(int)((float)uVar29 * fVar11 + fVar9),
                                            CONCAT11((char)(int)((float)uVar31 * fVar11 + fVar9),
                                                     (char)(int)((float)uVar28 * fVar11 + fVar9))));
              *(undefined4 *)(lVar26 + (longlong)this_00) = local_178;
              this_00 = this_00 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          else {
            do {
              FFloat3PackedSE::ToLinearColor(this_00,(FLinearColor *)&local_120._s_0);
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_120._s_0);
              *(undefined4 *)(lVar26 + (longlong)this_00) = local_178;
              this_00 = this_00 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return true;
    }
    break;
  case DXGI_FORMAT_B8G8R8A8_UNORM:
  case DXGI_FORMAT_B8G8R8A8_TYPELESS:
  case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    uVar24 = param_2 * 4;
    if (uVar24 == param_5) {
      memcpy(param_6,param_4,(ulonglong)(param_2 * param_3) << 2);
      return true;
    }
    if ((param_5 <= uVar24) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SrcPitch > DstPitch",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHISurfaceDataConversion.h"
                            ,0x5b,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    uVar22 = 0;
    if (param_3 != 0) {
      do {
        memcpy(param_6 + uVar22 * param_2,param_4 + uVar22 * param_5,(ulonglong)uVar24);
        uVar22 = uVar22 + 1;
      } while (uVar22 < param_3);
      return true;
    }
  }
  return true;
}

// ConvertRAWSurfaceDataToFLinearColor @ 1459773a0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
`anonymous_namespace'::ConvertRAWSurfaceDataToFLinearColor
          (EPixelFormat param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,
          FLinearColor *param_6,FReadSurfaceDataFlags *param_7)

{
  ushort *puVar1;
  float *pfVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FLinearColor *pFVar9;
  ushort *puVar10;
  float *pfVar11;
  float *pfVar12;
  FFloat3Packed *this;
  FLinearColor *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  FReadSurfaceDataFlags local_c8;
  FReadSurfaceDataFlags local_a8;
  FReadSurfaceDataFlags local_88;
  FReadSurfaceDataFlags local_68;
  FLinearColor local_48 [2];
  
  fVar17 = __real_37800080;
  uVar15 = (ulonglong)param_2;
  if ((param_1 == PF_G16) || (param_1 == PF_R16_UINT)) {
    uVar14 = 0;
    if (param_3 == 0) {
      return true;
    }
    do {
      uVar8 = 0;
      pFVar13 = param_6 + uVar14 * param_2;
      puVar10 = (ushort *)(param_4 + uVar14 * param_5);
      if (3 < param_2) {
        uVar8 = (param_2 - 4 >> 2) + 1;
        uVar15 = (ulonglong)uVar8;
        uVar8 = uVar8 * 4;
        pfVar12 = &pFVar13[1].field0_0x0._s_0.B;
        do {
          fVar18 = (float)*puVar10 * fVar17;
          (pFVar13->field0_0x0)._s_0.R = fVar18;
          pFVar13 = pFVar13 + 4;
          pfVar12[-5] = fVar18;
          pfVar12[-4] = fVar18;
          pfVar12[-3] = 1.0;
          fVar18 = (float)puVar10[1] * fVar17;
          ((FLinearColor_u_0_s_0 *)(pfVar12 + -2))->R = fVar18;
          pfVar12[-1] = fVar18;
          *pfVar12 = fVar18;
          pfVar12[1] = 1.0;
          fVar18 = (float)puVar10[2] * fVar17;
          pfVar12[2] = fVar18;
          pfVar12[3] = fVar18;
          pfVar12[4] = fVar18;
          pfVar12[5] = 1.0;
          puVar1 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          fVar18 = (float)*puVar1 * fVar17;
          pfVar12[6] = fVar18;
          pfVar12[7] = fVar18;
          pfVar12[8] = fVar18;
          pfVar12[9] = 1.0;
          uVar15 = uVar15 - 1;
          pfVar12 = pfVar12 + 0x10;
        } while (uVar15 != 0);
      }
      if (uVar8 < param_2) {
        uVar15 = (ulonglong)(param_2 - uVar8);
        pfVar12 = &(pFVar13->field0_0x0)._s_0.B;
        do {
          uVar3 = *puVar10;
          puVar10 = puVar10 + 1;
          fVar18 = (float)uVar3 * fVar17;
          ((FLinearColor_u_0_s_0 *)(pfVar12 + -2))->R = fVar18;
          pfVar12[-1] = fVar18;
          *pfVar12 = fVar18;
          pfVar12[1] = 1.0;
          uVar15 = uVar15 - 1;
          pfVar12 = pfVar12 + 4;
        } while (uVar15 != 0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_3);
    return true;
  }
  if ((byte)(param_1 - PF_R16F) < 2) {
    uVar14 = 0;
    if (param_3 == 0) {
      return true;
    }
    do {
      puVar10 = (ushort *)(param_4 + uVar14 * param_5);
      pFVar13 = param_6 + uVar14 * param_2;
      uVar16 = uVar15;
      if (param_2 != 0) {
        do {
          fVar17 = FGenericPlatformMath::LoadHalf(puVar10);
          (pFVar13->field0_0x0)._s_0.R = fVar17;
          puVar10 = puVar10 + 1;
          (pFVar13->field0_0x0)._s_0.G = fVar17;
          (pFVar13->field0_0x0)._s_0.B = fVar17;
          (pFVar13->field0_0x0)._s_0.A = 1.0;
          pFVar13 = pFVar13 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_3);
    return true;
  }
  if (param_1 == PF_R8G8B8A8) {
    ConvertRawR8G8B8A8DataToFLinearColor(param_2,param_3,param_4,param_5,param_6);
    return true;
  }
  if (param_1 == PF_B8G8R8A8) {
    ConvertRawB8G8R8A8DataToFLinearColor(param_2,param_3,param_4,param_5,param_6);
    return true;
  }
  if (param_1 == PF_A2B10G10R10) {
    ConvertRawA2B10G10R10DataToFLinearColor(param_2,param_3,param_4,param_5,param_6);
    return true;
  }
  if (param_1 == PF_FloatRGBA) {
    local_c8.CubeFace = param_7->CubeFace;
    local_c8.CompressionMode = param_7->CompressionMode;
    local_c8.bLinearToGamma = param_7->bLinearToGamma;
    local_c8._9_3_ = *(undefined3 *)&param_7->field_0x9;
    local_c8.MaxDepthRange = param_7->MaxDepthRange;
    local_c8.bOutputStencil = param_7->bOutputStencil;
    local_c8.MipLevel = param_7->MipLevel;
    local_c8._18_2_ = *(undefined2 *)&param_7->field_0x12;
    local_c8.ArrayIndex = param_7->ArrayIndex;
    local_c8.GPUIndex = param_7->GPUIndex;
    ConvertRawR16G16B16A16FDataToFLinearColor(param_2,param_3,param_4,param_5,param_6,&local_c8);
    return true;
  }
  if ((param_1 == PF_FloatRGB) || (param_1 == PF_FloatR11G11B10)) {
    if ((GPixelFormats[param_1].BlockBytes != 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GPixelFormats[Format].BlockBytes == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHISurfaceDataConversion.h"
                           ,0x32d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    uVar14 = 0;
    if (param_3 == 0) {
      return true;
    }
    do {
      this = (FFloat3Packed *)(param_4 + uVar14 * param_5);
      pFVar13 = param_6 + uVar14 * param_2;
      uVar16 = uVar15;
      if (param_2 != 0) {
        do {
          pFVar9 = FFloat3Packed::ToLinearColor(this,local_48);
          this = this + 1;
          uVar5 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
          *(undefined8 *)&pFVar13->field0_0x0 = *(undefined8 *)&pFVar9->field0_0x0;
          *(undefined8 *)((longlong)&pFVar13->field0_0x0 + 8) = uVar5;
          uVar16 = uVar16 - 1;
          pFVar13 = pFVar13 + 1;
        } while (uVar16 != 0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_3);
    return true;
  }
  if (param_1 == PF_A32B32G32R32F) {
    local_a8.CubeFace = param_7->CubeFace;
    local_a8.CompressionMode = param_7->CompressionMode;
    local_a8.bLinearToGamma = param_7->bLinearToGamma;
    local_a8._9_3_ = *(undefined3 *)&param_7->field_0x9;
    local_a8.MaxDepthRange = param_7->MaxDepthRange;
    local_a8.bOutputStencil = param_7->bOutputStencil;
    local_a8.MipLevel = param_7->MipLevel;
    local_a8._18_2_ = *(undefined2 *)&param_7->field_0x12;
    local_a8.ArrayIndex = param_7->ArrayIndex;
    local_a8.GPUIndex = param_7->GPUIndex;
    ConvertRawR32G32B32A32DataToFLinearColor(param_2,param_3,param_4,param_5,param_6,&local_a8);
    return true;
  }
  if (param_1 == PF_D24) {
LAB_145977aa0:
    local_68.CubeFace = param_7->CubeFace;
    local_68.CompressionMode = param_7->CompressionMode;
    local_68.bLinearToGamma = param_7->bLinearToGamma;
    local_68._9_3_ = *(undefined3 *)&param_7->field_0x9;
    local_68.MaxDepthRange = param_7->MaxDepthRange;
    local_68.bOutputStencil = param_7->bOutputStencil;
    local_68.MipLevel = param_7->MipLevel;
    local_68._18_2_ = *(undefined2 *)&param_7->field_0x12;
    local_68.ArrayIndex = param_7->ArrayIndex;
    local_68.GPUIndex = param_7->GPUIndex;
    ConvertRawR24G8DataToFLinearColor(param_2,param_3,param_4,param_5,param_6,&local_68);
  }
  else {
    if ((param_1 == PF_X24_G8) || (param_1 == PF_DepthStencil)) {
      if (GPixelFormats[param_1].BlockBytes == 4) goto LAB_145977aa0;
      if (((param_1 == PF_X24_G8) || (param_1 == PF_DepthStencil)) &&
         (4 < GPixelFormats[param_1].BlockBytes)) {
        local_88.CubeFace = param_7->CubeFace;
        local_88.CompressionMode = param_7->CompressionMode;
        local_88.bLinearToGamma = param_7->bLinearToGamma;
        local_88._9_3_ = *(undefined3 *)&param_7->field_0x9;
        local_88.MaxDepthRange = param_7->MaxDepthRange;
        local_88.bOutputStencil = param_7->bOutputStencil;
        local_88.MipLevel = param_7->MipLevel;
        local_88._18_2_ = *(undefined2 *)&param_7->field_0x12;
        local_88.ArrayIndex = param_7->ArrayIndex;
        local_88.GPUIndex = param_7->GPUIndex;
        ConvertRawDepthStencil64DataToFLinearColor
                  (param_2,param_3,param_4,param_5,param_6,&local_88);
        return true;
      }
    }
    if (param_1 == PF_A16B16G16R16) {
      ConvertRawR16G16B16A16DataToFLinearColor(param_2,param_3,param_4,param_5,param_6);
    }
    else if (param_1 == PF_G16R16) {
      uVar14 = 0;
      if (param_3 != 0) {
        do {
          uVar8 = 0;
          pFVar13 = param_6 + uVar14 * param_2;
          puVar10 = (ushort *)(param_4 + uVar14 * param_5);
          if (3 < param_2) {
            uVar8 = (param_2 - 4 >> 2) + 1;
            uVar15 = (ulonglong)uVar8;
            uVar8 = uVar8 * 4;
            pfVar12 = &pFVar13[1].field0_0x0._s_0.B;
            do {
              uVar3 = puVar10[1];
              (pFVar13->field0_0x0)._s_0.R = (float)*puVar10 * fVar17;
              pFVar13 = pFVar13 + 4;
              pfVar12[-5] = (float)uVar3 * fVar17;
              pfVar12[-4] = 0.0;
              pfVar12[-3] = 1.0;
              uVar3 = puVar10[3];
              ((FLinearColor_u_0_s_0 *)(pfVar12 + -2))->R = (float)puVar10[2] * fVar17;
              pfVar12[-1] = (float)uVar3 * fVar17;
              *pfVar12 = 0.0;
              pfVar12[1] = 1.0;
              uVar3 = puVar10[5];
              pfVar12[2] = (float)puVar10[4] * fVar17;
              pfVar12[3] = (float)uVar3 * fVar17;
              pfVar12[4] = 0.0;
              pfVar12[5] = 1.0;
              uVar3 = puVar10[7];
              puVar1 = puVar10 + 6;
              puVar10 = puVar10 + 8;
              pfVar12[6] = (float)*puVar1 * fVar17;
              pfVar12[7] = (float)uVar3 * fVar17;
              pfVar12[8] = 0.0;
              pfVar12[9] = 1.0;
              uVar15 = uVar15 - 1;
              pfVar12 = pfVar12 + 0x10;
            } while (uVar15 != 0);
          }
          if (uVar8 < param_2) {
            uVar15 = (ulonglong)(param_2 - uVar8);
            pfVar12 = &(pFVar13->field0_0x0)._s_0.B;
            do {
              uVar3 = puVar10[1];
              ((FLinearColor_u_0_s_0 *)(pfVar12 + -2))->R = (float)*puVar10 * fVar17;
              pfVar12[-1] = (float)uVar3 * fVar17;
              *pfVar12 = 0.0;
              pfVar12[1] = 1.0;
              uVar15 = uVar15 - 1;
              puVar10 = puVar10 + 2;
              pfVar12 = pfVar12 + 4;
            } while (uVar15 != 0);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < param_3);
      }
    }
    else if (param_1 == PF_G16R16F) {
      uVar14 = 0;
      if (param_3 != 0) {
        do {
          puVar10 = (ushort *)(param_4 + uVar14 * param_5);
          pFVar13 = param_6 + uVar14 * param_2;
          uVar16 = uVar15;
          if (param_2 != 0) {
            do {
              fVar17 = FGenericPlatformMath::LoadHalf(puVar10 + 1);
              fVar18 = FGenericPlatformMath::LoadHalf(puVar10);
              (pFVar13->field0_0x0)._s_0.R = fVar18;
              puVar10 = puVar10 + 2;
              (pFVar13->field0_0x0)._s_0.G = fVar17;
              (pFVar13->field0_0x0)._s_0.B = 0.0;
              (pFVar13->field0_0x0)._s_0.A = 1.0;
              pFVar13 = pFVar13 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < param_3);
      }
    }
    else if (param_1 == PF_G32R32F) {
      uVar14 = 0;
      if (param_3 != 0) {
        do {
          uVar8 = 0;
          pFVar13 = param_6 + uVar14 * param_2;
          pfVar12 = (float *)(param_4 + uVar14 * param_5);
          if (3 < param_2) {
            uVar8 = (param_2 - 4 >> 2) + 1;
            uVar15 = (ulonglong)uVar8;
            uVar8 = uVar8 * 4;
            pfVar11 = &pFVar13[1].field0_0x0._s_0.B;
            do {
              fVar17 = pfVar12[1];
              (pFVar13->field0_0x0)._s_0.R = *pfVar12;
              pFVar13 = pFVar13 + 4;
              pfVar11[-5] = fVar17;
              pfVar11[-4] = 0.0;
              pfVar11[-3] = 1.0;
              fVar17 = pfVar12[3];
              ((FLinearColor_u_0_s_0 *)(pfVar11 + -2))->R = pfVar12[2];
              pfVar11[-1] = fVar17;
              *pfVar11 = 0.0;
              pfVar11[1] = 1.0;
              fVar17 = pfVar12[5];
              pfVar11[2] = pfVar12[4];
              pfVar11[3] = fVar17;
              pfVar11[4] = 0.0;
              pfVar11[5] = 1.0;
              fVar17 = pfVar12[7];
              pfVar2 = pfVar12 + 6;
              pfVar12 = pfVar12 + 8;
              pfVar11[6] = *pfVar2;
              pfVar11[7] = fVar17;
              pfVar11[8] = 0.0;
              pfVar11[9] = 1.0;
              uVar15 = uVar15 - 1;
              pfVar11 = pfVar11 + 0x10;
            } while (uVar15 != 0);
          }
          if (uVar8 < param_2) {
            uVar15 = (ulonglong)(param_2 - uVar8);
            pfVar11 = &(pFVar13->field0_0x0)._s_0.B;
            do {
              fVar17 = pfVar12[1];
              fVar18 = *pfVar12;
              pfVar12 = pfVar12 + 2;
              ((FLinearColor_u_0_s_0 *)(pfVar11 + -2))->R = fVar18;
              pfVar11[-1] = fVar17;
              *pfVar11 = 0.0;
              pfVar11[1] = 1.0;
              uVar15 = uVar15 - 1;
              pfVar11 = pfVar11 + 4;
            } while (uVar15 != 0);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < param_3);
      }
    }
    else {
      if (param_1 != PF_R32_FLOAT) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHISurfaceDataConversion.h"
                           ,0x392,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        return false;
      }
      uVar14 = 0;
      if (param_3 != 0) {
        do {
          uVar8 = 0;
          pFVar13 = param_6 + uVar14 * param_2;
          pfVar12 = (float *)(param_4 + uVar14 * param_5);
          if (3 < param_2) {
            uVar8 = (param_2 - 4 >> 2) + 1;
            uVar15 = (ulonglong)uVar8;
            uVar8 = uVar8 * 4;
            pfVar11 = &pFVar13[1].field0_0x0._s_0.B;
            do {
              (pFVar13->field0_0x0)._s_0.R = *pfVar12;
              pFVar13 = pFVar13 + 4;
              *(undefined8 *)(pfVar11 + -5) = 0;
              pfVar11[-3] = 1.0;
              ((FLinearColor_u_0_s_0 *)(pfVar11 + -2))->R = pfVar12[1];
              *(undefined8 *)(pfVar11 + -1) = 0;
              pfVar11[1] = 1.0;
              pfVar11[2] = pfVar12[2];
              *(undefined8 *)(pfVar11 + 3) = 0;
              pfVar11[5] = 1.0;
              pfVar2 = pfVar12 + 3;
              pfVar12 = pfVar12 + 4;
              pfVar11[6] = *pfVar2;
              *(undefined8 *)(pfVar11 + 7) = 0;
              pfVar11[9] = 1.0;
              uVar15 = uVar15 - 1;
              pfVar11 = pfVar11 + 0x10;
            } while (uVar15 != 0);
          }
          if (uVar8 < param_2) {
            pfVar11 = &(pFVar13->field0_0x0)._s_0.B;
            uVar15 = (ulonglong)(param_2 - uVar8);
            do {
              fVar17 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              ((FLinearColor_u_0_s_0 *)(pfVar11 + -2))->R = fVar17;
              *(undefined8 *)(pfVar11 + -1) = 0;
              pfVar11[1] = 1.0;
              pfVar11 = pfVar11 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < param_3);
      }
    }
  }
  return true;
}

// ConvertRawA2B10G10R10DataToFLinearColor @ 145977da0

void __cdecl
`anonymous_namespace'::ConvertRawA2B10G10R10DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FLinearColor *pFVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  
  fVar3 = __real_3a802008;
  fVar2 = __real_3eaaaaab;
  if (param_2 != 0) {
    uVar9 = 0;
    do {
      uVar4 = 0;
      pFVar5 = param_5 + uVar9 * param_1;
      puVar8 = (uint *)(param_3 + uVar9 * param_4);
      if (3 < param_1) {
        uVar4 = (param_1 - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        pfVar6 = &pFVar5[1].field0_0x0._s_0.B;
        do {
          uVar1 = *puVar8;
          (pFVar5->field0_0x0)._s_0.R = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[-5] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          pfVar6[-4] = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[-3] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar1 = puVar8[1];
          ((FLinearColor_u_0_s_0 *)(pfVar6 + -2))->R = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[-1] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          *pfVar6 = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[1] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar1 = puVar8[2];
          pfVar6[2] = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[3] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          pfVar6[4] = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[5] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar1 = puVar8[3];
          pFVar5 = pFVar5 + 4;
          puVar8 = puVar8 + 4;
          pfVar6[6] = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[7] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          pfVar6[8] = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[9] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar7 = uVar7 - 1;
          pfVar6 = pfVar6 + 0x10;
        } while (uVar7 != 0);
      }
      if (uVar4 < param_1) {
        uVar7 = (ulonglong)(param_1 - uVar4);
        pfVar6 = &(pFVar5->field0_0x0)._s_0.B;
        do {
          uVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          ((FLinearColor_u_0_s_0 *)(pfVar6 + -2))->R = (float)(uVar4 & 0x3ff) * fVar3;
          pfVar6[-1] = (float)(uVar4 >> 10 & 0x3ff) * fVar3;
          *pfVar6 = (float)(uVar4 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[1] = (float)(uVar4 >> 0x1e) * fVar2;
          uVar7 = uVar7 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar7 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_2);
  }
  return;
}

// ConvertRawB8G8R8A8DataToFLinearColor @ 1459780b0

void __cdecl
`anonymous_namespace'::ConvertRawB8G8R8A8DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  float *pfVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  
  fVar5 = __real_3b808081;
  if (param_2 != 0) {
    uVar11 = 0;
    do {
      uVar6 = 0;
      pFVar7 = param_5 + uVar11 * param_1;
      pbVar9 = param_3 + uVar11 * param_4;
      if (3 < param_1) {
        uVar6 = (param_1 - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar6;
        uVar6 = uVar6 * 4;
        pfVar8 = &pFVar7[1].field0_0x0._s_0.B;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          fVar3 = FLinearColor::sRGBToLinearTable[*pbVar9];
          bVar4 = pbVar9[3];
          (pFVar7->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[pbVar9[2]];
          pFVar7 = pFVar7 + 4;
          pfVar8[-5] = fVar2;
          pfVar8[-4] = fVar3;
          pfVar8[-3] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[5]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[4]];
          bVar4 = pbVar9[7];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[6]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[9]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[8]];
          bVar4 = pbVar9[0xb];
          pfVar8[2] = FLinearColor::sRGBToLinearTable[pbVar9[10]];
          pfVar8[3] = fVar2;
          pfVar8[4] = fVar3;
          pfVar8[5] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[0xd]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[0xc]];
          bVar4 = pbVar9[0xf];
          pbVar1 = pbVar9 + 0xe;
          pbVar9 = pbVar9 + 0x10;
          pfVar8[6] = FLinearColor::sRGBToLinearTable[*pbVar1];
          pfVar8[7] = fVar2;
          pfVar8[8] = fVar3;
          pfVar8[9] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar10 != 0);
      }
      if (uVar6 < param_1) {
        uVar10 = (ulonglong)(param_1 - uVar6);
        pfVar8 = &(pFVar7->field0_0x0)._s_0.B;
        pbVar9 = pbVar9 + 1;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[*pbVar9];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[-1]];
          bVar4 = pbVar9[2];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 4;
          pbVar9 = pbVar9 + 4;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// ConvertRawDepthStencil64DataToFLinearColor @ 1459782e0

void __cdecl
`anonymous_namespace'::ConvertRawDepthStencil64DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5,
          FReadSurfaceDataFlags *param_6)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = __real_3dcccccd;
  fVar4 = __real_3b808081;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_3f800000;
  if (param_2 != 0) {
    uVar11 = 0;
    do {
      uVar6 = 0;
      pFVar7 = param_5 + uVar11 * param_1;
      pfVar9 = (float *)(param_3 + uVar11 * param_4);
      if (param_1 < 4) {
        if (param_1 != 0) {
          fVar13 = param_6->MaxDepthRange;
          goto LAB_1459784bb;
        }
      }
      else {
        fVar13 = param_6->MaxDepthRange;
        pfVar8 = &pFVar7[1].field0_0x0._s_0.B;
        uVar6 = (param_1 - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar6;
        uVar6 = uVar6 * 4;
        do {
          bVar1 = *(byte *)(pfVar9 + 1);
          fVar12 = *pfVar9;
          if (fVar2 <= *pfVar9) {
            fVar12 = fVar2;
          }
          fVar12 = (float)((uint)(fVar2 / ((fVar12 * fVar5 - fVar5) * fVar13)) & uVar3);
          if (fVar2 <= fVar12) {
            fVar12 = fVar2;
          }
          (pFVar7->field0_0x0)._s_0.R = fVar12;
          pfVar8[-5] = (float)bVar1 * fVar4;
          pFVar7 = pFVar7 + 4;
          *(undefined8 *)(pfVar8 + -4) = 0;
          bVar1 = *(byte *)(pfVar9 + 3);
          fVar12 = pfVar9[2];
          if (fVar2 <= pfVar9[2]) {
            fVar12 = fVar2;
          }
          fVar12 = (float)((uint)(fVar2 / ((fVar12 * fVar5 - fVar5) * fVar13)) & uVar3);
          if (fVar2 <= fVar12) {
            fVar12 = fVar2;
          }
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = fVar12;
          pfVar8[-1] = (float)bVar1 * fVar4;
          *(undefined8 *)pfVar8 = 0;
          bVar1 = *(byte *)(pfVar9 + 5);
          fVar12 = pfVar9[4];
          if (fVar2 <= pfVar9[4]) {
            fVar12 = fVar2;
          }
          fVar12 = (float)((uint)(fVar2 / ((fVar12 * fVar5 - fVar5) * fVar13)) & uVar3);
          if (fVar2 <= fVar12) {
            fVar12 = fVar2;
          }
          pfVar8[2] = fVar12;
          pfVar8[3] = (float)bVar1 * fVar4;
          *(undefined8 *)(pfVar8 + 4) = 0;
          bVar1 = *(byte *)(pfVar9 + 7);
          fVar12 = pfVar9[6];
          if (fVar2 <= pfVar9[6]) {
            fVar12 = fVar2;
          }
          pfVar9 = pfVar9 + 8;
          fVar12 = (float)((uint)(fVar2 / ((fVar12 * fVar5 - fVar5) * fVar13)) & uVar3);
          if (fVar2 <= fVar12) {
            fVar12 = fVar2;
          }
          pfVar8[6] = fVar12;
          pfVar8[7] = (float)bVar1 * fVar4;
          *(undefined8 *)(pfVar8 + 8) = 0;
          pfVar8 = pfVar8 + 0x10;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if (uVar6 < param_1) {
LAB_1459784bb:
          pfVar8 = &(pFVar7->field0_0x0)._s_0.B;
          uVar10 = (ulonglong)(param_1 - uVar6);
          do {
            bVar1 = *(byte *)(pfVar9 + 1);
            fVar12 = *pfVar9;
            if (fVar2 <= *pfVar9) {
              fVar12 = fVar2;
            }
            pfVar9 = pfVar9 + 2;
            fVar12 = (float)((uint)(fVar2 / ((fVar12 * fVar5 - fVar5) * fVar13)) & uVar3);
            if (fVar2 <= fVar12) {
              fVar12 = fVar2;
            }
            ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = fVar12;
            pfVar8[-1] = (float)bVar1 * fVar4;
            *(undefined8 *)pfVar8 = 0;
            pfVar8 = pfVar8 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// ConvertRawR16G16B16A16DataToFLinearColor @ 145978550

void __cdecl
`anonymous_namespace'::ConvertRawR16G16B16A16DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  uint uVar6;
  ushort *puVar7;
  FLinearColor *pFVar8;
  ulonglong uVar9;
  FLinearColor *pFVar10;
  uint uVar11;
  
  fVar5 = __real_37800080;
  if (param_2 != 0) {
    uVar11 = 0;
    do {
      uVar6 = 0;
      pFVar8 = param_5 + uVar11 * param_1;
      puVar7 = (ushort *)(param_3 + uVar11 * param_4);
      if (3 < param_1) {
        uVar6 = (param_1 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar6;
        uVar6 = uVar6 * 4;
        pFVar10 = pFVar8 + 2;
        do {
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          (pFVar8->field0_0x0)._s_0.R = (float)*puVar7 * fVar5;
          (pFVar8->field0_0x0)._s_0.G = (float)uVar2 * fVar5;
          (pFVar8->field0_0x0)._s_0.B = (float)uVar3 * fVar5;
          (pFVar8->field0_0x0)._s_0.A = (float)uVar4 * fVar5;
          uVar2 = puVar7[5];
          uVar3 = puVar7[6];
          uVar4 = puVar7[7];
          pFVar10[-1].field0_0x0._s_0.R = (float)puVar7[4] * fVar5;
          pFVar10[-1].field0_0x0._s_0.G = (float)uVar2 * fVar5;
          pFVar10[-1].field0_0x0._s_0.B = (float)uVar3 * fVar5;
          pFVar10[-1].field0_0x0._s_0.A = (float)uVar4 * fVar5;
          uVar2 = puVar7[9];
          uVar3 = puVar7[10];
          uVar4 = puVar7[0xb];
          (pFVar10->field0_0x0)._s_0.R = (float)puVar7[8] * fVar5;
          (pFVar10->field0_0x0)._s_0.G = (float)uVar2 * fVar5;
          (pFVar10->field0_0x0)._s_0.B = (float)uVar3 * fVar5;
          (pFVar10->field0_0x0)._s_0.A = (float)uVar4 * fVar5;
          puVar1 = puVar7 + 0xc;
          uVar2 = puVar7[0xd];
          uVar3 = puVar7[0xe];
          uVar4 = puVar7[0xf];
          pFVar8 = pFVar8 + 4;
          puVar7 = puVar7 + 0x10;
          pFVar10[1].field0_0x0._s_0.R = (float)*puVar1 * fVar5;
          pFVar10[1].field0_0x0._s_0.G = (float)uVar2 * fVar5;
          pFVar10[1].field0_0x0._s_0.B = (float)uVar3 * fVar5;
          pFVar10[1].field0_0x0._s_0.A = (float)uVar4 * fVar5;
          uVar9 = uVar9 - 1;
          pFVar10 = pFVar10 + 4;
        } while (uVar9 != 0);
      }
      if (uVar6 < param_1) {
        uVar9 = (ulonglong)(param_1 - uVar6);
        puVar7 = puVar7 + 2;
        do {
          uVar2 = puVar7[-1];
          uVar3 = *puVar7;
          uVar4 = puVar7[1];
          (pFVar8->field0_0x0)._s_0.R = (float)puVar7[-2] * fVar5;
          (pFVar8->field0_0x0)._s_0.G = (float)uVar2 * fVar5;
          (pFVar8->field0_0x0)._s_0.B = (float)uVar3 * fVar5;
          (pFVar8->field0_0x0)._s_0.A = (float)uVar4 * fVar5;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 4;
          pFVar8 = pFVar8 + 1;
        } while (uVar9 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// ConvertRawR16G16B16A16FDataToFColor @ 145978800

void __cdecl
`anonymous_namespace'::ConvertRawR16G16B16A16FDataToFColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FColor *param_5,bool param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ushort *puVar5;
  ushort *puVar6;
  FColor_u_0 *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  FColor_u_0 local_res10;
  double local_118;
  FLinearColor_u_0 local_f0 [11];
  
  uVar8 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = (undefined4)__real_3ff0000000000000;
  uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  local_118 = 0.0;
  uVar11 = 0;
  uVar9 = (ulonglong)param_1;
  uVar15 = uVar26;
  uVar20 = uVar28;
  uVar18 = uVar26;
  uVar23 = uVar28;
  uVar16 = uVar26;
  uVar21 = uVar28;
  uVar17 = uVar26;
  uVar22 = uVar28;
  if (param_2 != 0) {
    do {
      puVar6 = (ushort *)(param_3 + uVar11 * param_4);
      if (param_1 != 0) {
        puVar5 = puVar6 + 2;
        uVar10 = uVar9;
        do {
          fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
          dVar19 = (double)fVar12;
          if ((double)CONCAT44(uVar31,uVar30) <= dVar19) {
            dVar19 = (double)CONCAT44(uVar31,uVar30);
          }
          uVar30 = SUB84(dVar19,0);
          uVar31 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + -1);
          dVar19 = (double)fVar12;
          if ((double)CONCAT44(uVar35,uVar34) <= dVar19) {
            dVar19 = (double)CONCAT44(uVar35,uVar34);
          }
          uVar34 = SUB84(dVar19,0);
          uVar35 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5);
          local_118 = (double)fVar12;
          if ((double)CONCAT44(uVar25,uVar24) <= local_118) {
            local_118 = (double)CONCAT44(uVar25,uVar24);
          }
          uVar24 = SUB84(local_118,0);
          uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
          dVar19 = (double)fVar12;
          if ((double)CONCAT44(uVar33,uVar32) <= dVar19) {
            dVar19 = (double)CONCAT44(uVar33,uVar32);
          }
          uVar32 = SUB84(dVar19,0);
          uVar33 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
          dVar19 = (double)fVar12;
          if (dVar19 <= (double)CONCAT44(uVar20,uVar15)) {
            dVar19 = (double)CONCAT44(uVar20,uVar15);
          }
          uVar15 = SUB84(dVar19,0);
          uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + -1);
          dVar19 = (double)fVar12;
          if (dVar19 <= (double)CONCAT44(uVar21,uVar16)) {
            dVar19 = (double)CONCAT44(uVar21,uVar16);
          }
          uVar16 = SUB84(dVar19,0);
          uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5);
          dVar19 = (double)fVar12;
          if (dVar19 <= (double)CONCAT44(uVar22,uVar17)) {
            dVar19 = (double)CONCAT44(uVar22,uVar17);
          }
          uVar17 = SUB84(dVar19,0);
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
          puVar6 = puVar6 + 4;
          dVar19 = (double)fVar12;
          puVar5 = puVar5 + 4;
          if (dVar19 <= (double)CONCAT44(uVar23,uVar18)) {
            dVar19 = (double)CONCAT44(uVar23,uVar18);
          }
          uVar18 = SUB84(dVar19,0);
          uVar23 = (undefined4)((ulonglong)dVar19 >> 0x20);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
    dVar19 = (double)CONCAT44(uVar25,uVar24);
    local_res10.Bits = param_2;
    do {
      puVar6 = (ushort *)(param_3 + uVar8 * param_4);
      pFVar7 = &param_5[uVar8 * param_1].field0_0x0;
      if (param_1 != 0) {
        dVar2 = (double)CONCAT44(uVar28,uVar26) /
                ((double)CONCAT44(uVar21,uVar16) - (double)CONCAT44(uVar35,uVar34));
        dVar3 = (double)CONCAT44(uVar28,uVar26) / ((double)CONCAT44(uVar22,uVar17) - dVar19);
        dVar4 = (double)CONCAT44(uVar28,uVar26) /
                ((double)CONCAT44(uVar23,uVar18) - (double)CONCAT44(uVar33,uVar32));
        dVar1 = (double)CONCAT44(uVar28,uVar26) /
                ((double)CONCAT44(uVar20,uVar15) - (double)CONCAT44(uVar31,uVar30));
        uVar10 = uVar9;
        if (param_6) {
          do {
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
            local_f0[0]._0_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar31,uVar30)) * dVar1);
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            local_f0[0]._4_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar35,uVar34)) * dVar2);
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 2);
            local_f0[0]._8_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar25,uVar24)) * dVar3);
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 3);
            local_f0[0]._12_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar33,uVar32)) * dVar4);
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_f0[0]._s_0);
            puVar6 = puVar6 + 4;
            *pFVar7 = local_res10;
            pFVar7 = pFVar7 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        else {
          do {
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
            fVar29 = (float)(((double)fVar12 - (double)CONCAT44(uVar31,uVar30)) * dVar1);
            local_f0[0]._0_4_ = fVar29;
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            fVar27 = (float)(((double)fVar12 - (double)CONCAT44(uVar35,uVar34)) * dVar2);
            local_f0[0]._4_4_ = fVar27;
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 2);
            fVar12 = (float)(((double)fVar12 - (double)CONCAT44(uVar25,uVar24)) * dVar3);
            local_f0[0]._8_4_ = fVar12;
            fVar13 = FGenericPlatformMath::LoadHalf(puVar6 + 3);
            puVar6 = puVar6 + 4;
            local_f0[0]._12_4_ =
                 (undefined4)(((double)fVar13 - (double)CONCAT44(uVar33,uVar32)) * dVar4);
            fVar13 = 0.0;
            if (fVar12 <= 0.0) {
              fVar12 = fVar13;
            }
            if (fVar27 <= 0.0) {
              fVar27 = fVar13;
            }
            if (fVar29 <= 0.0) {
              fVar29 = fVar13;
            }
            fVar14 = (float)local_f0[0]._12_4_;
            if ((float)local_f0[0]._12_4_ <= 0.0) {
              fVar14 = fVar13;
            }
            if (__real_3f800000 <= fVar12) {
              fVar12 = __real_3f800000;
            }
            if (__real_3f800000 <= fVar27) {
              fVar27 = __real_3f800000;
            }
            if (__real_3f800000 <= fVar29) {
              fVar29 = __real_3f800000;
            }
            if (__real_3f800000 <= fVar14) {
              fVar14 = __real_3f800000;
            }
            uVar24 = SUB84(local_118,0);
            uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
            local_res10._s_0.G = (char)(int)(fVar27 * __real_437f0000 + __real_3f000000);
            local_res10._s_0.B = (char)(int)(fVar12 * __real_437f0000 + __real_3f000000);
            local_res10._s_0.R = (char)(int)(fVar29 * __real_437f0000 + __real_3f000000);
            local_res10._s_0.A = (char)(int)(fVar14 * __real_437f0000 + __real_3f000000);
            *pFVar7 = local_res10;
            pFVar7 = pFVar7 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar26 = (undefined4)__real_3ff0000000000000;
          uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  return;
}

// ConvertRawR16G16B16A16FDataToFLinearColor @ 145978d20

void __cdecl
`anonymous_namespace'::ConvertRawR16G16B16A16FDataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5,
          FReadSurfaceDataFlags *param_6)

{
  double dVar1;
  FLinearColor *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  
  dVar1 = __real_3ff0000000000000;
  uVar4 = 0;
  uVar7 = (ulonglong)param_1;
  if (param_6->CompressionMode == RCM_MinMax) {
    if (param_2 != 0) {
      do {
        pFVar2 = param_5 + uVar4 * param_1;
        puVar5 = (ushort *)(param_3 + uVar4 * param_4);
        uVar3 = uVar7;
        if (param_1 != 0) {
          do {
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
            fVar9 = FGenericPlatformMath::LoadHalf(puVar5 + 2);
            fVar10 = FGenericPlatformMath::LoadHalf(puVar5 + 3);
            fVar11 = FGenericPlatformMath::LoadHalf(puVar5);
            (pFVar2->field0_0x0)._s_0.R = fVar11;
            puVar5 = puVar5 + 4;
            (pFVar2->field0_0x0)._s_0.G = fVar8;
            (pFVar2->field0_0x0)._s_0.B = fVar9;
            (pFVar2->field0_0x0)._s_0.A = fVar10;
            pFVar2 = pFVar2 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_2);
    }
  }
  else {
    uVar26 = 0;
    uVar28 = 0;
    uVar21 = 0;
    uVar23 = 0;
    uVar4 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar15 = SUB84(__real_3ff0000000000000,0);
    uVar20 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_e0 = __real_3ff0000000000000;
    local_e8 = __real_3ff0000000000000;
    local_f0 = __real_3ff0000000000000;
    local_f8 = __real_3ff0000000000000;
    uVar33 = 0;
    uVar34 = 0;
    local_100 = 0.0;
    local_108 = 0.0;
    param_6._0_4_ = 0;
    uVar12 = uVar15;
    uVar17 = uVar20;
    uVar13 = uVar15;
    uVar18 = uVar20;
    uVar14 = uVar15;
    uVar19 = uVar20;
    if (param_2 != 0) {
      do {
        puVar5 = (ushort *)(param_3 + uVar4 * param_4);
        if (param_1 != 0) {
          puVar6 = puVar5 + 2;
          uVar3 = uVar7;
          do {
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5);
            dVar16 = (double)fVar8;
            if ((double)CONCAT44(uVar32,uVar31) <= dVar16) {
              dVar16 = (double)CONCAT44(uVar32,uVar31);
            }
            uVar31 = SUB84(dVar16,0);
            uVar32 = (undefined4)((ulonglong)dVar16 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + -1);
            local_100 = (double)fVar8;
            if ((double)CONCAT44(uVar28,uVar26) <= local_100) {
              local_100 = (double)CONCAT44(uVar28,uVar26);
            }
            uVar26 = SUB84(local_100,0);
            uVar28 = (undefined4)((ulonglong)local_100 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6);
            local_108 = (double)fVar8;
            if ((double)CONCAT44(uVar23,uVar21) <= local_108) {
              local_108 = (double)CONCAT44(uVar23,uVar21);
            }
            uVar21 = SUB84(local_108,0);
            uVar23 = (undefined4)((ulonglong)local_108 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            dVar16 = (double)fVar8;
            if ((double)CONCAT44(uVar34,uVar33) <= dVar16) {
              dVar16 = (double)CONCAT44(uVar34,uVar33);
            }
            uVar33 = SUB84(dVar16,0);
            uVar34 = (undefined4)((ulonglong)dVar16 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5);
            local_e0 = (double)fVar8;
            if (local_e0 <= (double)CONCAT44(uVar17,uVar12)) {
              local_e0 = (double)CONCAT44(uVar17,uVar12);
            }
            uVar12 = SUB84(local_e0,0);
            uVar17 = (undefined4)((ulonglong)local_e0 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + -1);
            local_e8 = (double)fVar8;
            if (local_e8 <= (double)CONCAT44(uVar18,uVar13)) {
              local_e8 = (double)CONCAT44(uVar18,uVar13);
            }
            uVar13 = SUB84(local_e8,0);
            uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6);
            local_f0 = (double)fVar8;
            if (local_f0 <= (double)CONCAT44(uVar19,uVar14)) {
              local_f0 = (double)CONCAT44(uVar19,uVar14);
            }
            uVar14 = SUB84(local_f0,0);
            uVar19 = (undefined4)((ulonglong)local_f0 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            puVar5 = puVar5 + 4;
            local_f8 = (double)fVar8;
            puVar6 = puVar6 + 4;
            if (local_f8 <= (double)CONCAT44(uVar20,uVar15)) {
              local_f8 = (double)CONCAT44(uVar20,uVar15);
            }
            uVar15 = SUB84(local_f8,0);
            uVar20 = (undefined4)((ulonglong)local_f8 >> 0x20);
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_2);
      do {
        pFVar2 = param_5 + (uint)param_6 * param_1;
        puVar5 = (ushort *)(param_3 + (uint)param_6 * param_4);
        uVar29 = (undefined4)((ulonglong)local_100 >> 0x20);
        uVar24 = (undefined4)((ulonglong)local_108 >> 0x20);
        if (param_1 != 0) {
          uVar3 = uVar7;
          uVar22 = uVar21;
          uVar25 = uVar23;
          uVar27 = uVar26;
          uVar30 = uVar28;
          do {
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
            fVar9 = FGenericPlatformMath::LoadHalf(puVar5 + 2);
            fVar10 = FGenericPlatformMath::LoadHalf(puVar5 + 3);
            fVar11 = FGenericPlatformMath::LoadHalf(puVar5);
            puVar5 = puVar5 + 4;
            (pFVar2->field0_0x0)._s_0.R =
                 (float)(((double)fVar11 - (double)CONCAT44(uVar32,uVar31)) *
                        (dVar1 / ((double)CONCAT44(uVar17,uVar12) - (double)CONCAT44(uVar32,uVar31))
                        ));
            (pFVar2->field0_0x0)._s_0.G =
                 (float)(((double)fVar8 - (double)CONCAT44(uVar30,uVar27)) *
                        (dVar1 / ((double)CONCAT44(uVar18,uVar13) - (double)CONCAT44(uVar28,uVar26))
                        ));
            (pFVar2->field0_0x0)._s_0.B =
                 (float)(((double)fVar9 - (double)CONCAT44(uVar25,uVar22)) *
                        (dVar1 / ((double)CONCAT44(uVar19,uVar14) - (double)CONCAT44(uVar23,uVar21))
                        ));
            (pFVar2->field0_0x0)._s_0.A =
                 (float)(((double)fVar10 - (double)CONCAT44(uVar34,uVar33)) *
                        (dVar1 / ((double)CONCAT44(uVar20,uVar15) - (double)CONCAT44(uVar34,uVar33))
                        ));
            pFVar2 = pFVar2 + 1;
            uVar3 = uVar3 - 1;
            uVar22 = SUB84(local_108,0);
            uVar25 = uVar24;
            uVar27 = SUB84(local_100,0);
            uVar30 = uVar29;
          } while (uVar3 != 0);
        }
        param_6._0_4_ = (uint)param_6 + 1;
        uVar15 = SUB84(local_f8,0);
        uVar20 = (undefined4)((ulonglong)local_f8 >> 0x20);
        uVar14 = SUB84(local_f0,0);
        uVar19 = (undefined4)((ulonglong)local_f0 >> 0x20);
        uVar13 = SUB84(local_e8,0);
        uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
        uVar12 = SUB84(local_e0,0);
        uVar17 = (undefined4)((ulonglong)local_e0 >> 0x20);
        uVar21 = SUB84(local_108,0);
        uVar23 = uVar24;
        uVar26 = SUB84(local_100,0);
        uVar28 = uVar29;
      } while ((uint)param_6 < param_2);
    }
  }
  return;
}

// ConvertRawR24G8DataToFLinearColor @ 1459791c0

void __cdecl
`anonymous_namespace'::ConvertRawR24G8DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5,
          FReadSurfaceDataFlags *param_6)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  FLinearColor *pFVar8;
  float *pfVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  fVar6 = __real_3dcccccd;
  fVar5 = __real_3b808081;
  fVar4 = __real_33800000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_3f800000;
  if (param_2 != 0) {
    uVar12 = 0;
    do {
      uVar7 = 0;
      pFVar8 = param_5 + uVar12 * param_1;
      puVar10 = (uint *)param_3;
      if (param_1 < 4) {
        if (param_1 != 0) {
          fVar14 = param_6->MaxDepthRange;
          goto LAB_1459793db;
        }
      }
      else {
        fVar14 = param_6->MaxDepthRange;
        pfVar9 = &pFVar8[1].field0_0x0._s_0.B;
        uVar7 = (param_1 - 4 >> 2) + 1;
        uVar11 = (ulonglong)uVar7;
        uVar7 = uVar7 * 4;
        do {
          bVar1 = *(byte *)((longlong)puVar10 + 3);
          fVar13 = (float)(*puVar10 & 0xffffff) * fVar4;
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          fVar13 = (float)((uint)(fVar2 / ((fVar13 * fVar6 - fVar6) * fVar14)) & uVar3);
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          (pFVar8->field0_0x0)._s_0.R = fVar13;
          pfVar9[-5] = (float)bVar1 * fVar5;
          *(undefined8 *)(pfVar9 + -4) = 0;
          bVar1 = *(byte *)((longlong)puVar10 + 7);
          fVar13 = (float)(puVar10[1] & 0xffffff) * fVar4;
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          fVar13 = (float)((uint)(fVar2 / ((fVar13 * fVar6 - fVar6) * fVar14)) & uVar3);
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          ((FLinearColor_u_0_s_0 *)(pfVar9 + -2))->R = fVar13;
          pfVar9[-1] = (float)bVar1 * fVar5;
          *(undefined8 *)pfVar9 = 0;
          bVar1 = *(byte *)((longlong)puVar10 + 0xb);
          fVar13 = (float)(puVar10[2] & 0xffffff) * fVar4;
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          fVar13 = (float)((uint)(fVar2 / ((fVar13 * fVar6 - fVar6) * fVar14)) & uVar3);
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          pfVar9[2] = fVar13;
          pfVar9[3] = (float)bVar1 * fVar5;
          *(undefined8 *)(pfVar9 + 4) = 0;
          bVar1 = *(byte *)((longlong)puVar10 + 0xf);
          pFVar8 = pFVar8 + 4;
          fVar13 = (float)(puVar10[3] & 0xffffff) * fVar4;
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          fVar13 = (float)((uint)(fVar2 / ((fVar13 * fVar6 - fVar6) * fVar14)) & uVar3);
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          pfVar9[6] = fVar13;
          pfVar9[7] = (float)bVar1 * fVar5;
          *(undefined8 *)(pfVar9 + 8) = 0;
          pfVar9 = pfVar9 + 0x10;
          puVar10 = puVar10 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if (uVar7 < param_1) {
LAB_1459793db:
          pfVar9 = &(pFVar8->field0_0x0)._s_0.B;
          uVar11 = (ulonglong)(param_1 - uVar7);
          do {
            bVar1 = *(byte *)((longlong)puVar10 + 3);
            uVar7 = *puVar10;
            puVar10 = puVar10 + 1;
            fVar13 = (float)(uVar7 & 0xffffff) * fVar4;
            if (fVar2 <= fVar13) {
              fVar13 = fVar2;
            }
            fVar13 = (float)((uint)(fVar2 / ((fVar13 * fVar6 - fVar6) * fVar14)) & uVar3);
            if (fVar2 <= fVar13) {
              fVar13 = fVar2;
            }
            ((FLinearColor_u_0_s_0 *)(pfVar9 + -2))->R = fVar13;
            pfVar9[-1] = (float)bVar1 * fVar5;
            *(undefined8 *)pfVar9 = 0;
            pfVar9 = pfVar9 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_2);
  }
  return;
}

// ConvertRawR32G32B32A32DataToFColor @ 145979480

void __cdecl
`anonymous_namespace'::ConvertRawR32G32B32A32DataToFColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FColor *param_5,bool param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float *pfVar23;
  FColor_u_0 *pFVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  FColor_u_0 local_res10;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  float local_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  
  fVar21 = __real_437f0000;
  fVar20 = __real_3f800000;
  uVar27 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  local_110 = __real_3ff0000000000000;
  local_120 = 0.0;
  local_128 = 0.0;
  uVar25 = 0;
  _local_100 = 0.0;
  local_108 = 0.0;
  local_118 = __real_3ff0000000000000;
  local_f0 = __real_3ff0000000000000;
  local_e8 = __real_3ff0000000000000;
  dVar38 = __real_3ff0000000000000;
  dVar34 = __real_3ff0000000000000;
  dVar36 = __real_3ff0000000000000;
  dVar30 = __real_3ff0000000000000;
  if (param_2 != 0) {
    do {
      uVar22 = 0;
      pfVar23 = (float *)(param_3 + uVar25 * param_4);
      if (3 < param_1) {
        uVar22 = (param_1 - 4 >> 2) + 1;
        uVar26 = (ulonglong)uVar22;
        uVar22 = uVar22 * 4;
        do {
          pfVar1 = pfVar23 + 3;
          fVar40 = *pfVar23;
          pfVar2 = pfVar23 + 4;
          pfVar3 = pfVar23 + 8;
          pfVar4 = pfVar23 + 0xc;
          pfVar5 = pfVar23 + 1;
          pfVar6 = pfVar23 + 5;
          pfVar7 = pfVar23 + 9;
          pfVar8 = pfVar23 + 0xd;
          pfVar9 = pfVar23 + 2;
          pfVar10 = pfVar23 + 6;
          pfVar11 = pfVar23 + 10;
          pfVar12 = pfVar23 + 0xe;
          pfVar13 = pfVar23 + 7;
          pfVar14 = pfVar23 + 0xb;
          pfVar15 = pfVar23 + 0xf;
          pfVar23 = pfVar23 + 0x10;
          dVar28 = (double)*pfVar1;
          dVar37 = (double)*pfVar4;
          dVar34 = (double)*pfVar11;
          dVar36 = (double)*pfVar9;
          dVar30 = (double)fVar40;
          dVar38 = (double)*pfVar5;
          dVar31 = dVar30;
          if (local_120 <= dVar30) {
            dVar31 = local_120;
          }
          if (dVar30 <= local_118) {
            dVar30 = local_118;
          }
          dVar39 = (double)*pfVar2;
          dVar41 = (double)*pfVar3;
          if (dVar39 <= dVar31) {
            dVar31 = dVar39;
          }
          dVar17 = (double)*pfVar6;
          if (dVar41 <= dVar31) {
            dVar31 = dVar41;
          }
          dVar16 = (double)*pfVar7;
          local_120 = dVar31;
          if (dVar37 <= dVar31) {
            local_120 = dVar37;
          }
          dVar35 = (double)*pfVar8;
          dVar31 = dVar38;
          if (local_128 <= dVar38) {
            dVar31 = local_128;
          }
          if (dVar38 <= local_110) {
            dVar38 = local_110;
          }
          dVar18 = (double)*pfVar10;
          if (dVar17 <= dVar31) {
            dVar31 = dVar17;
          }
          dVar33 = (double)*pfVar12;
          if (dVar16 <= dVar31) {
            dVar31 = dVar16;
          }
          dVar19 = (double)*pfVar13;
          local_128 = dVar31;
          if (dVar35 <= dVar31) {
            local_128 = dVar35;
          }
          dVar31 = (double)*pfVar14;
          uVar29 = dVar36;
          if ((double)_local_100 <= dVar36) {
            uVar29 = _local_100;
          }
          if (dVar36 <= local_f0) {
            dVar36 = local_f0;
          }
          dVar32 = (double)*pfVar15;
          if (dVar18 <= (double)uVar29) {
            uVar29 = dVar18;
          }
          if (dVar36 <= dVar18) {
            dVar36 = dVar18;
          }
          if (dVar34 <= (double)uVar29) {
            uVar29 = dVar34;
          }
          if (dVar36 <= dVar34) {
            dVar36 = dVar34;
          }
          dVar34 = dVar28;
          if (dVar28 <= local_e8) {
            dVar34 = local_e8;
          }
          _local_100 = uVar29;
          if (dVar33 <= (double)uVar29) {
            _local_100 = dVar33;
          }
          if (dVar36 <= dVar33) {
            dVar36 = dVar33;
          }
          if (dVar34 <= dVar19) {
            dVar34 = dVar19;
          }
          if (local_108 <= dVar28) {
            dVar28 = local_108;
          }
          if (dVar34 <= dVar31) {
            dVar34 = dVar31;
          }
          if (dVar19 <= dVar28) {
            dVar28 = dVar19;
          }
          if (dVar34 <= dVar32) {
            dVar34 = dVar32;
          }
          if (dVar31 <= dVar28) {
            dVar28 = dVar31;
          }
          local_108 = dVar28;
          if (dVar32 <= dVar28) {
            local_108 = dVar32;
          }
          if (dVar30 <= dVar39) {
            dVar30 = dVar39;
          }
          if (dVar30 <= dVar41) {
            dVar30 = dVar41;
          }
          if (dVar30 <= dVar37) {
            dVar30 = dVar37;
          }
          if (dVar38 <= dVar17) {
            dVar38 = dVar17;
          }
          if (dVar38 <= dVar16) {
            dVar38 = dVar16;
          }
          if (dVar38 <= dVar35) {
            dVar38 = dVar35;
          }
          uVar26 = uVar26 - 1;
          local_118 = dVar30;
          local_110 = dVar38;
          local_f0 = dVar36;
          local_e8 = dVar34;
        } while (uVar26 != 0);
        uVar42 = SUB84(local_120,0);
        uVar43 = (undefined4)((ulonglong)local_120 >> 0x20);
        uVar44 = SUB84(local_128,0);
        uVar45 = (undefined4)((ulonglong)local_128 >> 0x20);
        uVar46 = (undefined4)_local_100;
        uVar47 = (undefined4)((ulonglong)_local_100 >> 0x20);
        uVar48 = SUB84(local_108,0);
        uVar49 = (undefined4)((ulonglong)local_108 >> 0x20);
      }
      if (uVar22 < param_1) {
        pfVar23 = pfVar23 + 2;
        uVar26 = (ulonglong)(param_1 - uVar22);
        dVar28 = dVar36;
        dVar31 = dVar34;
        dVar37 = dVar30;
        do {
          pfVar1 = pfVar23 + -2;
          pfVar2 = pfVar23 + -1;
          fVar40 = *pfVar23;
          pfVar3 = pfVar23 + 1;
          pfVar23 = pfVar23 + 4;
          local_120 = (double)*pfVar1;
          _local_100 = (undefined8)fVar40;
          dVar30 = local_120;
          if (local_120 <= dVar37) {
            dVar30 = dVar37;
          }
          if ((double)CONCAT44(uVar43,uVar42) <= local_120) {
            local_120 = (double)CONCAT44(uVar43,uVar42);
          }
          dVar34 = (double)*pfVar3;
          uVar42 = SUB84(local_120,0);
          uVar43 = (undefined4)((ulonglong)local_120 >> 0x20);
          dVar36 = (double)_local_100;
          if ((double)_local_100 <= dVar28) {
            dVar36 = dVar28;
          }
          if ((double)CONCAT44(uVar47,uVar46) <= (double)_local_100) {
            _local_100 = CONCAT44(uVar47,uVar46);
          }
          dVar38 = (double)*pfVar2;
          uVar46 = (undefined4)_local_100;
          uVar47 = (undefined4)((ulonglong)_local_100 >> 0x20);
          local_128 = dVar38;
          if ((double)CONCAT44(uVar45,uVar44) <= dVar38) {
            local_128 = (double)CONCAT44(uVar45,uVar44);
          }
          if (dVar38 <= local_110) {
            dVar38 = local_110;
          }
          uVar44 = SUB84(local_128,0);
          uVar45 = (undefined4)((ulonglong)local_128 >> 0x20);
          local_108 = dVar34;
          if ((double)CONCAT44(uVar49,uVar48) <= dVar34) {
            local_108 = (double)CONCAT44(uVar49,uVar48);
          }
          if (dVar34 <= dVar31) {
            dVar34 = dVar31;
          }
          uVar48 = SUB84(local_108,0);
          uVar49 = (undefined4)((ulonglong)local_108 >> 0x20);
          uVar26 = uVar26 - 1;
          dVar28 = dVar36;
          dVar31 = dVar34;
          dVar37 = dVar30;
          local_118 = dVar30;
          local_110 = dVar38;
          local_f0 = dVar36;
          local_e8 = dVar34;
        } while (uVar26 != 0);
      }
      uVar25 = uVar25 + 1;
      fVar40 = __real_3f000000;
    } while (uVar25 < param_2);
    do {
      pfVar23 = (float *)(param_3 + uVar27 * param_4);
      pFVar24 = &param_5[uVar27 * param_1].field0_0x0;
      if (param_1 != 0) {
        dVar28 = __real_3ff0000000000000 / (dVar30 - (double)CONCAT44(uVar43,uVar42));
        dVar31 = __real_3ff0000000000000 / (dVar38 - (double)CONCAT44(uVar45,uVar44));
        dVar37 = __real_3ff0000000000000 / (dVar36 - (double)CONCAT44(uVar47,uVar46));
        dVar39 = __real_3ff0000000000000 / (dVar34 - (double)CONCAT44(uVar49,uVar48));
        uVar26 = (ulonglong)param_1;
        local_e0 = dVar31;
        do {
          local_100 = (float)(((double)*pfVar23 - (double)CONCAT44(uVar43,uVar42)) * dVar28);
          fStack_fc = (float)(((double)pfVar23[1] - (double)CONCAT44(uVar45,uVar44)) * dVar31);
          local_f8 = (undefined4)(((double)pfVar23[2] - (double)CONCAT44(uVar47,uVar46)) * dVar37);
          local_f4 = (undefined4)(((double)pfVar23[3] - (double)CONCAT44(uVar49,uVar48)) * dVar39);
          if (param_6) {
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_100);
            fVar40 = __real_3f000000;
          }
          else {
            if ((float)local_f8 <= 0.0) {
              local_f8 = 0.0;
            }
            if (fStack_fc <= 0.0) {
              fStack_fc = 0.0;
            }
            if (local_100 <= 0.0) {
              local_100 = 0.0;
            }
            if ((float)local_f4 <= 0.0) {
              local_f4 = 0.0;
            }
            if (fVar20 <= (float)local_f8) {
              local_f8 = fVar20;
            }
            if (fVar20 <= fStack_fc) {
              fStack_fc = fVar20;
            }
            if (fVar20 <= local_100) {
              local_100 = fVar20;
            }
            if (fVar20 <= (float)local_f4) {
              local_f4 = fVar20;
            }
            local_res10._s_0.G = (char)(int)(fStack_fc * fVar21 + fVar40);
            local_res10._s_0.B = (char)(int)((float)local_f8 * fVar21 + fVar40);
            local_res10._s_0.R = (char)(int)(local_100 * fVar21 + fVar40);
            local_res10._s_0.A = (char)(int)((float)local_f4 * fVar21 + fVar40);
          }
          pfVar23 = pfVar23 + 4;
          *pFVar24 = local_res10;
          pFVar24 = pFVar24 + 1;
          uVar26 = uVar26 - 1;
          dVar38 = local_110;
          dVar30 = local_118;
          dVar34 = local_e8;
          dVar36 = local_f0;
        } while (uVar26 != 0);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < param_2);
  }
  return;
}

// ConvertRawR32G32B32A32DataToFLinearColor @ 145979ab0

void __cdecl
`anonymous_namespace'::ConvertRawR32G32B32A32DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5,
          FReadSurfaceDataFlags *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FReadSurfaceDataFlags *pFVar20;
  FReadSurfaceDataFlags *pFVar21;
  FReadSurfaceDataFlags *pFVar22;
  FReadSurfaceDataFlags *pFVar23;
  FReadSurfaceDataFlags *pFVar24;
  FReadSurfaceDataFlags *pFVar25;
  double dVar26;
  double dVar27;
  FReadSurfaceDataFlags *pFVar28;
  double dVar29;
  uint uVar30;
  float *pfVar31;
  FLinearColor *pFVar32;
  ulonglong uVar33;
  uint uVar34;
  uint uVar35;
  FReadSurfaceDataFlags *pFVar36;
  FReadSurfaceDataFlags *pFVar37;
  FReadSurfaceDataFlags *pFVar38;
  FReadSurfaceDataFlags *pFVar39;
  FReadSurfaceDataFlags *pFVar40;
  FReadSurfaceDataFlags *pFVar41;
  FReadSurfaceDataFlags *pFVar42;
  FReadSurfaceDataFlags *pFVar43;
  FReadSurfaceDataFlags *pFVar44;
  FReadSurfaceDataFlags *pFVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  FReadSurfaceDataFlags *local_f8;
  FReadSurfaceDataFlags *local_f0;
  FReadSurfaceDataFlags *local_e8;
  FReadSurfaceDataFlags *local_e0;
  FReadSurfaceDataFlags *local_d8;
  FReadSurfaceDataFlags *local_d0;
  FReadSurfaceDataFlags *local_c8;
  
  if (param_6->CompressionMode != RCM_MinMax) {
    uVar34 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    param_6 = __real_3ff0000000000000;
    local_d8 = (FReadSurfaceDataFlags *)0x0;
    local_e0 = (FReadSurfaceDataFlags *)0x0;
    local_e8 = (FReadSurfaceDataFlags *)0x0;
    local_f0 = (FReadSurfaceDataFlags *)0x0;
    local_f8 = __real_3ff0000000000000;
    local_c8 = __real_3ff0000000000000;
    local_d0 = __real_3ff0000000000000;
    uVar35 = uVar34;
    pFVar24 = __real_3ff0000000000000;
    pFVar42 = __real_3ff0000000000000;
    pFVar44 = __real_3ff0000000000000;
    pFVar39 = __real_3ff0000000000000;
    if (param_2 != 0) {
      do {
        pfVar31 = (float *)(param_3 + uVar35 * param_4);
        uVar30 = uVar34;
        if (3 < param_1) {
          uVar30 = (param_1 - 4 >> 2) + 1;
          uVar33 = (ulonglong)uVar30;
          uVar30 = uVar30 * 4;
          do {
            pfVar1 = pfVar31 + 3;
            fVar16 = *pfVar31;
            pfVar2 = pfVar31 + 4;
            pfVar3 = pfVar31 + 8;
            pfVar4 = pfVar31 + 0xc;
            pfVar5 = pfVar31 + 1;
            pfVar6 = pfVar31 + 5;
            pfVar7 = pfVar31 + 9;
            pfVar8 = pfVar31 + 0xd;
            pfVar9 = pfVar31 + 2;
            pfVar10 = pfVar31 + 6;
            pfVar11 = pfVar31 + 10;
            pfVar12 = pfVar31 + 0xe;
            pfVar13 = pfVar31 + 7;
            pfVar14 = pfVar31 + 0xb;
            pfVar15 = pfVar31 + 0xf;
            pfVar31 = pfVar31 + 0x10;
            pFVar36 = (FReadSurfaceDataFlags *)(double)*pfVar1;
            pFVar20 = (FReadSurfaceDataFlags *)(double)*pfVar4;
            pFVar42 = (FReadSurfaceDataFlags *)(double)*pfVar11;
            pFVar44 = (FReadSurfaceDataFlags *)(double)*pfVar9;
            pFVar39 = (FReadSurfaceDataFlags *)(double)fVar16;
            pFVar24 = (FReadSurfaceDataFlags *)(double)*pfVar5;
            pFVar37 = pFVar39;
            if ((double)local_d8 <= (double)pFVar39) {
              pFVar37 = local_d8;
            }
            if ((double)pFVar39 <= (double)local_f8) {
              pFVar39 = local_f8;
            }
            pFVar21 = (FReadSurfaceDataFlags *)(double)*pfVar2;
            pFVar45 = (FReadSurfaceDataFlags *)(double)*pfVar3;
            if ((double)pFVar21 <= (double)pFVar37) {
              pFVar37 = pFVar21;
            }
            pFVar23 = (FReadSurfaceDataFlags *)(double)*pfVar6;
            if ((double)pFVar45 <= (double)pFVar37) {
              pFVar37 = pFVar45;
            }
            pFVar22 = (FReadSurfaceDataFlags *)(double)*pfVar7;
            local_d8 = pFVar37;
            if ((double)pFVar20 <= (double)pFVar37) {
              local_d8 = pFVar20;
            }
            pFVar43 = (FReadSurfaceDataFlags *)(double)*pfVar8;
            pFVar37 = pFVar24;
            if ((double)local_e0 <= (double)pFVar24) {
              pFVar37 = local_e0;
            }
            if ((double)pFVar24 <= (double)param_6) {
              pFVar24 = param_6;
            }
            pFVar25 = (FReadSurfaceDataFlags *)(double)*pfVar10;
            if ((double)pFVar23 <= (double)pFVar37) {
              pFVar37 = pFVar23;
            }
            pFVar41 = (FReadSurfaceDataFlags *)(double)*pfVar12;
            if ((double)pFVar22 <= (double)pFVar37) {
              pFVar37 = pFVar22;
            }
            pFVar28 = (FReadSurfaceDataFlags *)(double)*pfVar13;
            local_e0 = pFVar37;
            if ((double)pFVar43 <= (double)pFVar37) {
              local_e0 = pFVar43;
            }
            pFVar37 = (FReadSurfaceDataFlags *)(double)*pfVar14;
            pFVar38 = pFVar44;
            if ((double)local_e8 <= (double)pFVar44) {
              pFVar38 = local_e8;
            }
            if ((double)pFVar44 <= (double)local_c8) {
              pFVar44 = local_c8;
            }
            pFVar40 = (FReadSurfaceDataFlags *)(double)*pfVar15;
            if ((double)pFVar25 <= (double)pFVar38) {
              pFVar38 = pFVar25;
            }
            if ((double)pFVar44 <= (double)pFVar25) {
              pFVar44 = pFVar25;
            }
            if ((double)pFVar42 <= (double)pFVar38) {
              pFVar38 = pFVar42;
            }
            if ((double)pFVar44 <= (double)pFVar42) {
              pFVar44 = pFVar42;
            }
            pFVar42 = pFVar36;
            if ((double)pFVar36 <= (double)local_d0) {
              pFVar42 = local_d0;
            }
            local_e8 = pFVar38;
            if ((double)pFVar41 <= (double)pFVar38) {
              local_e8 = pFVar41;
            }
            if ((double)pFVar44 <= (double)pFVar41) {
              pFVar44 = pFVar41;
            }
            if ((double)pFVar42 <= (double)pFVar28) {
              pFVar42 = pFVar28;
            }
            if ((double)local_f0 <= (double)pFVar36) {
              pFVar36 = local_f0;
            }
            if ((double)pFVar42 <= (double)pFVar37) {
              pFVar42 = pFVar37;
            }
            if ((double)pFVar28 <= (double)pFVar36) {
              pFVar36 = pFVar28;
            }
            if ((double)pFVar42 <= (double)pFVar40) {
              pFVar42 = pFVar40;
            }
            if ((double)pFVar37 <= (double)pFVar36) {
              pFVar36 = pFVar37;
            }
            local_f0 = pFVar36;
            if ((double)pFVar40 <= (double)pFVar36) {
              local_f0 = pFVar40;
            }
            if ((double)pFVar39 <= (double)pFVar21) {
              pFVar39 = pFVar21;
            }
            if ((double)pFVar39 <= (double)pFVar45) {
              pFVar39 = pFVar45;
            }
            if ((double)pFVar39 <= (double)pFVar20) {
              pFVar39 = pFVar20;
            }
            if ((double)pFVar24 <= (double)pFVar23) {
              pFVar24 = pFVar23;
            }
            if ((double)pFVar24 <= (double)pFVar22) {
              pFVar24 = pFVar22;
            }
            if ((double)pFVar24 <= (double)pFVar43) {
              pFVar24 = pFVar43;
            }
            uVar33 = uVar33 - 1;
            param_6 = pFVar24;
            local_f8 = pFVar39;
            local_d0 = pFVar42;
            local_c8 = pFVar44;
          } while (uVar33 != 0);
          uVar47 = SUB84(local_d8,0);
          uVar48 = (undefined4)((ulonglong)local_d8 >> 0x20);
          uVar49 = SUB84(local_e0,0);
          uVar50 = (undefined4)((ulonglong)local_e0 >> 0x20);
          uVar51 = SUB84(local_e8,0);
          uVar52 = (undefined4)((ulonglong)local_e8 >> 0x20);
          uVar53 = SUB84(local_f0,0);
          uVar54 = (undefined4)((ulonglong)local_f0 >> 0x20);
        }
        if (uVar30 < param_1) {
          pfVar31 = pfVar31 + 2;
          uVar33 = (ulonglong)(param_1 - uVar30);
          pFVar20 = pFVar44;
          pFVar36 = pFVar42;
          pFVar37 = pFVar39;
          do {
            pfVar1 = pfVar31 + -2;
            pfVar2 = pfVar31 + -1;
            fVar16 = *pfVar31;
            pfVar3 = pfVar31 + 1;
            pfVar31 = pfVar31 + 4;
            local_d8 = (FReadSurfaceDataFlags *)(double)*pfVar1;
            local_e8 = (FReadSurfaceDataFlags *)(double)fVar16;
            pFVar39 = local_d8;
            if ((double)local_d8 <= (double)pFVar37) {
              pFVar39 = pFVar37;
            }
            if ((double)CONCAT44(uVar48,uVar47) <= (double)local_d8) {
              local_d8 = (FReadSurfaceDataFlags *)CONCAT44(uVar48,uVar47);
            }
            pFVar42 = (FReadSurfaceDataFlags *)(double)*pfVar3;
            uVar47 = SUB84(local_d8,0);
            uVar48 = (undefined4)((ulonglong)local_d8 >> 0x20);
            pFVar44 = local_e8;
            if ((double)local_e8 <= (double)pFVar20) {
              pFVar44 = pFVar20;
            }
            if ((double)CONCAT44(uVar52,uVar51) <= (double)local_e8) {
              local_e8 = (FReadSurfaceDataFlags *)CONCAT44(uVar52,uVar51);
            }
            pFVar24 = (FReadSurfaceDataFlags *)(double)*pfVar2;
            uVar51 = SUB84(local_e8,0);
            uVar52 = (undefined4)((ulonglong)local_e8 >> 0x20);
            local_e0 = pFVar24;
            if ((double)CONCAT44(uVar50,uVar49) <= (double)pFVar24) {
              local_e0 = (FReadSurfaceDataFlags *)CONCAT44(uVar50,uVar49);
            }
            if ((double)pFVar24 <= (double)param_6) {
              pFVar24 = param_6;
            }
            uVar49 = SUB84(local_e0,0);
            uVar50 = (undefined4)((ulonglong)local_e0 >> 0x20);
            local_f0 = pFVar42;
            if ((double)CONCAT44(uVar54,uVar53) <= (double)pFVar42) {
              local_f0 = (FReadSurfaceDataFlags *)CONCAT44(uVar54,uVar53);
            }
            if ((double)pFVar42 <= (double)pFVar36) {
              pFVar42 = pFVar36;
            }
            uVar53 = SUB84(local_f0,0);
            uVar54 = (undefined4)((ulonglong)local_f0 >> 0x20);
            uVar33 = uVar33 - 1;
            pFVar20 = pFVar44;
            pFVar36 = pFVar42;
            pFVar37 = pFVar39;
            param_6 = pFVar24;
            local_f8 = pFVar39;
            local_d0 = pFVar42;
            local_c8 = pFVar44;
          } while (uVar33 != 0);
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < param_2);
      do {
        if (param_1 != 0) {
          dVar46 = (double)__real_3ff0000000000000 /
                   ((double)pFVar39 - (double)CONCAT44(uVar48,uVar47));
          pFVar32 = param_5 + uVar34 * param_1;
          dVar26 = (double)__real_3ff0000000000000 /
                   ((double)pFVar24 - (double)CONCAT44(uVar50,uVar49));
          dVar27 = (double)__real_3ff0000000000000 /
                   ((double)pFVar44 - (double)CONCAT44(uVar52,uVar51));
          dVar29 = (double)__real_3ff0000000000000 /
                   ((double)pFVar42 - (double)CONCAT44(uVar54,uVar53));
          uVar33 = (ulonglong)param_1;
          do {
            fVar16 = *(float *)param_3;
            fVar17 = *(float *)((longlong)param_3 + 4);
            fVar18 = *(float *)((longlong)param_3 + 8);
            fVar19 = *(float *)((longlong)param_3 + 0xc);
            param_3 = (uchar *)((longlong)param_3 + 0x10);
            (pFVar32->field0_0x0)._s_0.R =
                 (float)(((double)fVar16 - (double)CONCAT44(uVar48,uVar47)) * dVar46);
            (pFVar32->field0_0x0)._s_0.G =
                 (float)(((double)fVar17 - (double)CONCAT44(uVar50,uVar49)) * dVar26);
            (pFVar32->field0_0x0)._s_0.B =
                 (float)(((double)fVar18 - (double)CONCAT44(uVar52,uVar51)) * dVar27);
            (pFVar32->field0_0x0)._s_0.A =
                 (float)(((double)fVar19 - (double)CONCAT44(uVar54,uVar53)) * dVar29);
            pFVar32 = pFVar32 + 1;
            uVar33 = uVar33 - 1;
            pFVar24 = param_6;
          } while (uVar33 != 0);
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < param_2);
    }
    return;
  }
  memcpy(param_5,param_3,(longlong)(int)(param_1 * param_2 * 0x10));
  return;
}

// ConvertRawR8G8B8A8DataToFLinearColor @ 14597a020

void __cdecl
`anonymous_namespace'::ConvertRawR8G8B8A8DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  float *pfVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  
  fVar5 = __real_3b808081;
  if (param_2 != 0) {
    uVar11 = 0;
    do {
      uVar6 = 0;
      pFVar7 = param_5 + uVar11 * param_1;
      pbVar9 = param_3 + uVar11 * param_4;
      if (3 < param_1) {
        uVar6 = (param_1 - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar6;
        uVar6 = uVar6 * 4;
        pfVar8 = &pFVar7[1].field0_0x0._s_0.B;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[2]];
          bVar4 = pbVar9[3];
          (pFVar7->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[*pbVar9];
          pFVar7 = pFVar7 + 4;
          pfVar8[-5] = fVar2;
          pfVar8[-4] = fVar3;
          pfVar8[-3] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[5]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[6]];
          bVar4 = pbVar9[7];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[4]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[9]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[10]];
          bVar4 = pbVar9[0xb];
          pfVar8[2] = FLinearColor::sRGBToLinearTable[pbVar9[8]];
          pfVar8[3] = fVar2;
          pfVar8[4] = fVar3;
          pfVar8[5] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[0xd]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[0xe]];
          bVar4 = pbVar9[0xf];
          pbVar1 = pbVar9 + 0xc;
          pbVar9 = pbVar9 + 0x10;
          pfVar8[6] = FLinearColor::sRGBToLinearTable[*pbVar1];
          pfVar8[7] = fVar2;
          pfVar8[8] = fVar3;
          pfVar8[9] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar10 != 0);
      }
      if (uVar6 < param_1) {
        uVar10 = (ulonglong)(param_1 - uVar6);
        pfVar8 = &(pFVar7->field0_0x0)._s_0.B;
        pbVar9 = pbVar9 + 1;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[*pbVar9];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          bVar4 = pbVar9[2];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[-1]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 4;
          pbVar9 = pbVar9 + 4;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// CreateAndUpdatePooledUniformBuffer @ 14597a250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<ID3D11Buffer> __cdecl
CreateAndUpdatePooledUniformBuffer
          (ID3D11Device *param_1,ID3D11DeviceContext *param_2,void *param_3,uint param_4)

{
  ulonglong uVar1;
  ID3D11Device IVar2;
  FName FVar3;
  ID3D11Device IVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TRefCountPtr<ID3D11Buffer> TVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory> FVar15;
  ulonglong uVar16;
  TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined4 in_register_0000008c;
  uchar auVar18 [8];
  FScriptContainerElement *pFVar19;
  uint in_stack_00000028;
  undefined1 auStackY_158 [32];
  FName local_c0;
  FName local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  void *local_90;
  uint local_88;
  FName local_80;
  FName local_78;
  uint local_70 [6];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  *param_1 = (ID3D11Device)0x0;
  uVar7 = 1;
  if (in_stack_00000028 != 0) {
    uVar7 = in_stack_00000028;
  }
  uVar1 = (ulonglong)(uVar7 - 1) * 2 + 1;
  uVar16 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar16 == 0; uVar16 = uVar16 - 1) {
    }
  }
  uVar16 = uVar16 & 0xffffffff;
  pTVar17 = UniformBufferPool + uVar16;
  lVar9 = (longlong)UniformBufferPool[uVar16].ArrayNum;
  if (0 < UniformBufferPool[uVar16].ArrayNum) {
    pFVar19 = (pTVar17->AllocatorInstance).Data;
    IVar2 = *(ID3D11Device *)(pFVar19 + lVar9 * 0x10 + -0x10);
    *(undefined8 *)(pFVar19 + lVar9 * 0x10 + -0x10) = 0;
    iVar8 = UniformBufferPool[uVar16].ArrayNum;
    uVar7 = *(uint *)(pFVar19 + lVar9 * 0x10 + -8);
    auVar18[4] = '\0';
    auVar18[5] = '\0';
    auVar18[6] = '\0';
    auVar18[7] = '\0';
    auVar18[0] = (char)uVar7;
    auVar18[1] = (char)(uVar7 >> 8);
    auVar18[2] = (char)(uVar7 >> 0x10);
    auVar18[3] = (char)(uVar7 >> 0x18);
    pFVar19 = (pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    if (*(longlong **)(pFVar19 + -0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pFVar19 + -0x10) + 0x10))();
    }
    iVar8 = UniformBufferPool[uVar16].ArrayNum - iVar8;
    if (iVar8 != 0) {
      memmove(pFVar19 + -0x10,pFVar19,(longlong)iVar8 << 4);
    }
    UniformBufferPool[uVar16].ArrayNum = UniformBufferPool[uVar16].ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar17->AllocatorInstance,UniformBufferPool[uVar16].ArrayNum,
               &UniformBufferPool[uVar16].ArrayMax);
    if ((IVar2 == (ID3D11Device)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(FreeBufferEntry.Buffer)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                           ,0x81,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar10.Reference = (ID3D11Buffer *)(*pcVar5)();
      return (TRefCountPtr<ID3D11Buffer>)TVar10.Reference;
    }
    if (uVar7 < in_stack_00000028) {
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("FreeBufferEntry.CreatedSize >= NumBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                         ,0x82,L"%u %u %u %u");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar10.Reference = (ID3D11Buffer *)(*pcVar5)();
        return (TRefCountPtr<ID3D11Buffer>)TVar10.Reference;
      }
    }
    FVar12 = StatPtr_STAT_D3D11NumFreeUniformBuffers;
    if (StatPtr_STAT_D3D11NumFreeUniformBuffers ==
        (FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers>)0x0) {
      pFVar11 = FName::FName(&local_80,"STAT_D3D11NumFreeUniformBuffers");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NumFreeUniformBuffers,
                          *pFVar11,L"Uniform buffer pool num free","STATGROUP_D3D11RHI",
                          "STATCAT_Advanced",L"D3D11RHI",true,false,ST_int64,false,false,MCR_Invalid
                         );
    }
    FVar3 = *(FName *)FVar12;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_b0.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_b0.StatData.Pad[0] = '\x01';
      local_b0.StatData.Pad[1] = '\0';
      local_b0.StatData.Pad[2] = '\0';
      local_b0.StatData.Pad[3] = '\0';
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_c0 = FVar3;
      local_b0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_b0);
      FStatsTrace::Add(&local_c0,-1);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
    if (uVar7 != 0) {
      FVar15 = StatPtr_STAT_D3D11FreeUniformBufferMemory;
      if (StatPtr_STAT_D3D11FreeUniformBufferMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory>)0x0) {
        pFVar11 = FName::FName(&local_78,"STAT_D3D11FreeUniformBufferMemory");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11FreeUniformBufferMemory,
                            *pFVar11,L"Uniform buffer pool memory","STATGROUP_D3D11RHI",
                            "STATCAT_Advanced",L"D3D11RHI",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar3 = *(FName *)FVar15;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_a0.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_b8 = FVar3;
        local_a0.StatData.Pad = auVar18;
        local_a0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_a0);
        FStatsTrace::Add(&local_b8,-(longlong)auVar18);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    IVar4 = *param_1;
    if (IVar4 != IVar2) {
      *param_1 = IVar2;
      if (IVar2 != (ID3D11Device)0x0) {
        (**(code **)(*(longlong *)IVar2 + 8))(IVar2);
      }
      if (IVar4 != (ID3D11Device)0x0) {
        (**(code **)(*(longlong *)IVar4 + 0x10))(IVar4);
      }
    }
    if (IVar2 != (ID3D11Device)0x0) {
      (**(code **)(*(longlong *)IVar2 + 0x10))(IVar2);
    }
  }
  if (*param_1 == (ID3D11Device)0x0) {
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70[1] = 2;
    local_70[0] = 1 << ((byte)lVar9 & 0x1f);
    local_70[2] = 4;
    local_70[3] = 0x10000;
    local_70[4] = 0;
    local_70[5] = 0;
    iVar8 = (**(code **)((longlong)*param_2 + 0x18))(param_2,local_70,0,param_1);
    if (iVar8 < 0) {
      VerifyD3D11Result(iVar8,
                        "Device->CreateBuffer(&Desc, NULL, UniformBufferResource.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                        ,0x96,(ID3D11Device *)param_2);
    }
    D3D11BufferStats::UpdateUniformBufferStats((ID3D11Buffer *)*param_1,(ulonglong)local_70[0],true)
    ;
    if ((*param_1 == (ID3D11Device)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(UniformBufferResource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                           ,0x9b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar10.Reference = (ID3D11Buffer *)(*pcVar5)();
      return (TRefCountPtr<ID3D11Buffer>)TVar10.Reference;
    }
  }
  if ((void *)CONCAT44(in_register_0000008c,param_4) != (void *)0x0) {
    iVar8 = (**(code **)(*(longlong *)param_3 + 0x70))(param_3,*param_1,0,4);
    if (iVar8 < 0) {
      VerifyD3D11Result(iVar8,
                        "Context->Map(UniformBufferResource, 0, D3D11_MAP_WRITE_DISCARD, 0, &MappedSubresource)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                        ,0xa1,(ID3D11Device *)param_2);
    }
    if ((local_88 < in_stack_00000028) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("MappedSubresource.RowPitch >= NumBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                           ,0xa2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar10.Reference = (ID3D11Buffer *)(*pcVar5)();
      return (TRefCountPtr<ID3D11Buffer>)TVar10.Reference;
    }
    memcpy(local_90,(void *)CONCAT44(in_register_0000008c,param_4),(ulonglong)in_stack_00000028);
    (**(code **)(*(longlong *)param_3 + 0x78))(param_3,*param_1,0);
  }
  return (TRefCountPtr<ID3D11Buffer>)(ID3D11Buffer *)param_1;
}

// CreateRTV @ 14597a860

TRefCountPtr<ID3D11RenderTargetView> __cdecl
CreateRTV(ID3D11Device *param_1,ID3D11Resource *param_2,FRHITextureDesc *param_3,
         DXGI_FORMAT_conflict param_4,uint param_5,uint param_6,uint param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 in_register_0000008c;
  byte *pbVar3;
  uint in_stack_00000040;
  DXGI_FORMAT_conflict local_28 [2];
  undefined8 local_20;
  uint local_18;
  
  pbVar3 = (byte *)CONCAT44(in_register_0000008c,param_4);
  local_20 = 0;
  local_18 = 0;
  local_28[0] = UE::DXGIUtilities::FindShaderResourceFormat(param_5,(bool)(*pbVar3 >> 4 & 1));
  bVar1 = pbVar3[0x32];
  if (bVar1 == 2) {
    local_18 = (uint)*(ushort *)(pbVar3 + 0x2c);
    local_28[1] = 8;
    local_20 = (ulonglong)param_6;
  }
  else {
    if (((bVar1 - 1 & 0xfc) == 0) && (bVar1 != 2)) {
      if (1 < pbVar3[0x31]) {
        local_20 = CONCAT44(in_stack_00000040,param_7);
        local_28[1] = 7;
        goto LAB_14597a946;
      }
      local_20 = (ulonglong)param_7 << 0x20;
      local_18 = in_stack_00000040;
      local_28[1] = 5;
    }
    else {
      if (1 < pbVar3[0x31]) {
        local_28[1] = 6;
        goto LAB_14597a946;
      }
      local_28[1] = 4;
    }
    local_20 = CONCAT44(local_20._4_4_,param_6);
  }
LAB_14597a946:
  *param_1 = (ID3D11Device)0x0;
  iVar2 = (**(code **)((longlong)*param_2 + 0x48))(param_2,param_3,local_28,param_1);
  if (iVar2 < 0) {
    VerifyD3D11Result(iVar2,
                      "Direct3DDevice->CreateRenderTargetView(Resource, &RTVDesc, RenderTargetView.GetInitReference())"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                      ,0x1cc,(ID3D11Device *)param_2);
  }
  return (TRefCountPtr<ID3D11RenderTargetView>)(ID3D11RenderTargetView *)param_1;
}

// CreateSRV @ 14597a9b0

TRefCountPtr<ID3D11ShaderResourceView> __cdecl
CreateSRV(ID3D11Device *param_1,ID3D11Resource *param_2,FRHITextureDesc *param_3,
         DXGI_FORMAT_conflict param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 in_register_0000008c;
  byte *pbVar3;
  DXGI_FORMAT_conflict in_stack_00000028;
  DXGI_FORMAT_conflict local_28 [3];
  uint uStack_1c;
  longlong local_18;
  
  pbVar3 = (byte *)CONCAT44(in_register_0000008c,param_4);
  local_18 = 0;
  local_28[0] = DXGI_FORMAT_UNKNOWN;
  local_28[1] = 0;
  local_28[2] = 0;
  uStack_1c = 0;
  local_28[0] = UE::DXGIUtilities::FindShaderResourceFormat
                          (in_stack_00000028,(bool)(*pbVar3 >> 4 & 1));
  bVar1 = pbVar3[0x32];
  if (bVar1 == 0) {
    if (1 < pbVar3[0x31]) {
      local_28[1] = 6;
      goto LAB_14597aa83;
    }
    local_28[1] = 4;
LAB_14597aa7c:
    uStack_1c = (uint)pbVar3[0x30];
  }
  else {
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        local_28[1] = 8;
      }
      else {
        if (bVar1 != 3) {
          if (bVar1 != 4) goto LAB_14597aa83;
          local_28[1] = 10;
          goto LAB_14597aa52;
        }
        local_28[1] = 9;
      }
      goto LAB_14597aa7c;
    }
    if (pbVar3[0x31] < 2) {
      local_28[1] = 5;
LAB_14597aa52:
      local_28[2] = 0;
      uStack_1c = (uint)pbVar3[0x30];
      local_18 = (ulonglong)*(ushort *)(pbVar3 + 0x2e) << 0x20;
      goto LAB_14597aa83;
    }
    uStack_1c = (uint)*(ushort *)(pbVar3 + 0x2e);
    local_28[1] = 7;
  }
  local_28[2] = 0;
LAB_14597aa83:
  *param_1 = (ID3D11Device)0x0;
  iVar2 = (**(code **)((longlong)*param_2 + 0x38))(param_2,param_3,local_28,param_1);
  if (iVar2 < 0) {
    VerifyD3D11Result(iVar2,
                      "Direct3DDevice->CreateShaderResourceView(Resource, &SRVDesc, SRV.GetInitReference())"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                      ,0x20f,(ID3D11Device *)param_2);
  }
  return (TRefCountPtr<ID3D11ShaderResourceView>)(ID3D11ShaderResourceView *)param_1;
}

// D3D11RHI_ShouldAllowAsyncResourceCreation @ 14597b860

bool __cdecl D3D11RHI_ShouldAllowAsyncResourceCreation(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"nod3dasync");
      bAllowAsyncResourceCreation = !bVar1;
      _Init_thread_footer(&_TSS0);
    }
  }
  return bAllowAsyncResourceCreation;
}

// D3D11RT_ComputeBytesPerPixel @ 14597b8e0

uint __cdecl D3D11RT_ComputeBytesPerPixel(DXGI_FORMAT_conflict param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0x10;
  switch(param_1) {
  case DXGI_FORMAT_R32G32B32A32_TYPELESS:
  case DXGI_FORMAT_R32G32B32A32_FLOAT:
  case DXGI_FORMAT_R32G32B32A32_UINT:
  case DXGI_FORMAT_R32G32B32A32_SINT:
    uVar4 = 0x10;
    break;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                       ,0x11e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    break;
  case DXGI_FORMAT_R16G16B16A16_TYPELESS:
  case DXGI_FORMAT_R16G16B16A16_FLOAT:
  case DXGI_FORMAT_R16G16B16A16_UNORM:
  case DXGI_FORMAT_R16G16B16A16_UINT:
  case DXGI_FORMAT_R16G16B16A16_SNORM:
  case DXGI_FORMAT_R16G16B16A16_SINT:
  case DXGI_FORMAT_R32G32_TYPELESS:
  case DXGI_FORMAT_R32G32_FLOAT:
  case DXGI_FORMAT_R32G32_UINT:
  case DXGI_FORMAT_R32G32_SINT:
  case DXGI_FORMAT_R32G8X24_TYPELESS:
  case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
  case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
    uVar4 = 8;
    break;
  case DXGI_FORMAT_R10G10B10A2_TYPELESS:
  case DXGI_FORMAT_R10G10B10A2_UNORM:
  case DXGI_FORMAT_R10G10B10A2_UINT:
  case DXGI_FORMAT_R11G11B10_FLOAT:
  case DXGI_FORMAT_R8G8B8A8_TYPELESS:
  case DXGI_FORMAT_R8G8B8A8_UNORM:
  case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
  case DXGI_FORMAT_R8G8B8A8_UINT:
  case DXGI_FORMAT_R8G8B8A8_SNORM:
  case DXGI_FORMAT_R8G8B8A8_SINT:
  case DXGI_FORMAT_R16G16_TYPELESS:
  case DXGI_FORMAT_R16G16_FLOAT:
  case DXGI_FORMAT_R16G16_UNORM:
  case DXGI_FORMAT_R16G16_UINT:
  case DXGI_FORMAT_R16G16_SNORM:
  case DXGI_FORMAT_R16G16_SINT:
  case DXGI_FORMAT_R32_TYPELESS:
  case DXGI_FORMAT_D32_FLOAT:
  case DXGI_FORMAT_R32_FLOAT:
  case DXGI_FORMAT_R32_UINT:
  case DXGI_FORMAT_R32_SINT:
  case DXGI_FORMAT_R24G8_TYPELESS:
  case DXGI_FORMAT_B8G8R8A8_UNORM:
  case DXGI_FORMAT_B8G8R8X8_UNORM:
  case DXGI_FORMAT_B8G8R8A8_TYPELESS:
  case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
  case DXGI_FORMAT_B8G8R8X8_TYPELESS:
  case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
    uVar4 = 4;
    break;
  case DXGI_FORMAT_R8G8_TYPELESS:
  case DXGI_FORMAT_R8G8_UNORM:
  case DXGI_FORMAT_R8G8_UINT:
  case DXGI_FORMAT_R8G8_SNORM:
  case DXGI_FORMAT_R8G8_SINT:
  case DXGI_FORMAT_R16_TYPELESS:
  case DXGI_FORMAT_R16_FLOAT:
  case DXGI_FORMAT_D16_UNORM:
  case DXGI_FORMAT_R16_UNORM:
  case DXGI_FORMAT_R16_UINT:
  case DXGI_FORMAT_R16_SNORM:
  case DXGI_FORMAT_R16_SINT:
  case DXGI_FORMAT_B5G6R5_UNORM:
  case DXGI_FORMAT_B5G5R5A1_UNORM:
    uVar4 = 2;
    break;
  case DXGI_FORMAT_R8_TYPELESS:
  case DXGI_FORMAT_R8_UNORM:
  case DXGI_FORMAT_R8_UINT:
  case DXGI_FORMAT_R8_SNORM:
  case DXGI_FORMAT_R8_SINT:
  case DXGI_FORMAT_A8_UNORM:
  case DXGI_FORMAT_R1_UNORM:
    uVar4 = 1;
  }
  switch(param_1) {
  case DXGI_FORMAT_R32G32B32A32_TYPELESS:
  case DXGI_FORMAT_R32G32B32A32_FLOAT:
  case DXGI_FORMAT_R32G32B32A32_UINT:
  case DXGI_FORMAT_R32G32B32A32_SINT:
  case DXGI_FORMAT_BC2_TYPELESS:
  case DXGI_FORMAT_BC2_UNORM:
  case DXGI_FORMAT_BC2_UNORM_SRGB:
  case DXGI_FORMAT_BC3_TYPELESS:
  case DXGI_FORMAT_BC3_UNORM:
  case DXGI_FORMAT_BC3_UNORM_SRGB:
  case DXGI_FORMAT_BC5_TYPELESS:
  case DXGI_FORMAT_BC5_UNORM:
  case DXGI_FORMAT_BC5_SNORM:
  case DXGI_FORMAT_BC6H_TYPELESS:
  case DXGI_FORMAT_BC6H_UF16:
  case DXGI_FORMAT_BC6H_SF16:
  case DXGI_FORMAT_BC7_TYPELESS:
  case DXGI_FORMAT_BC7_UNORM:
  case DXGI_FORMAT_BC7_UNORM_SRGB:
    break;
  case DXGI_FORMAT_R32G32B32_TYPELESS:
  case DXGI_FORMAT_R32G32B32_FLOAT:
  case DXGI_FORMAT_R32G32B32_UINT:
  case DXGI_FORMAT_R32G32B32_SINT:
    uVar3 = 0xc;
    break;
  case DXGI_FORMAT_R16G16B16A16_TYPELESS:
  case DXGI_FORMAT_R16G16B16A16_FLOAT:
  case DXGI_FORMAT_R16G16B16A16_UNORM:
  case DXGI_FORMAT_R16G16B16A16_UINT:
  case DXGI_FORMAT_R16G16B16A16_SNORM:
  case DXGI_FORMAT_R16G16B16A16_SINT:
  case DXGI_FORMAT_R32G32_TYPELESS:
  case DXGI_FORMAT_R32G32_FLOAT:
  case DXGI_FORMAT_R32G32_UINT:
  case DXGI_FORMAT_R32G32_SINT:
  case DXGI_FORMAT_R32G8X24_TYPELESS:
  case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
  case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
  case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
  case DXGI_FORMAT_BC1_TYPELESS:
  case DXGI_FORMAT_BC1_UNORM:
  case DXGI_FORMAT_BC1_UNORM_SRGB:
  case DXGI_FORMAT_BC4_TYPELESS:
  case DXGI_FORMAT_BC4_UNORM:
  case DXGI_FORMAT_BC4_SNORM:
  case DXGI_FORMAT_Y416:
  case DXGI_FORMAT_Y210:
  case DXGI_FORMAT_Y216:
    uVar3 = 8;
    break;
  case DXGI_FORMAT_R10G10B10A2_TYPELESS:
  case DXGI_FORMAT_R10G10B10A2_UNORM:
  case DXGI_FORMAT_R10G10B10A2_UINT:
  case DXGI_FORMAT_R11G11B10_FLOAT:
  case DXGI_FORMAT_R8G8B8A8_TYPELESS:
  case DXGI_FORMAT_R8G8B8A8_UNORM:
  case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
  case DXGI_FORMAT_R8G8B8A8_UINT:
  case DXGI_FORMAT_R8G8B8A8_SNORM:
  case DXGI_FORMAT_R8G8B8A8_SINT:
  case DXGI_FORMAT_R16G16_TYPELESS:
  case DXGI_FORMAT_R16G16_FLOAT:
  case DXGI_FORMAT_R16G16_UNORM:
  case DXGI_FORMAT_R16G16_UINT:
  case DXGI_FORMAT_R16G16_SNORM:
  case DXGI_FORMAT_R16G16_SINT:
  case DXGI_FORMAT_R32_TYPELESS:
  case DXGI_FORMAT_D32_FLOAT:
  case DXGI_FORMAT_R32_FLOAT:
  case DXGI_FORMAT_R32_UINT:
  case DXGI_FORMAT_R32_SINT:
  case DXGI_FORMAT_R24G8_TYPELESS:
  case DXGI_FORMAT_D24_UNORM_S8_UINT:
  case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
  case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
  case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
  case DXGI_FORMAT_R8G8_B8G8_UNORM:
  case DXGI_FORMAT_G8R8_G8B8_UNORM:
  case DXGI_FORMAT_B8G8R8A8_UNORM:
  case DXGI_FORMAT_B8G8R8X8_UNORM:
  case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
  case DXGI_FORMAT_B8G8R8A8_TYPELESS:
  case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
  case DXGI_FORMAT_B8G8R8X8_TYPELESS:
  case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
  case DXGI_FORMAT_AYUV:
  case DXGI_FORMAT_Y410:
  case DXGI_FORMAT_P010:
  case DXGI_FORMAT_P016:
  case DXGI_FORMAT_YUY2:
    uVar3 = 4;
    break;
  case DXGI_FORMAT_R8G8_TYPELESS:
  case DXGI_FORMAT_R8G8_UNORM:
  case DXGI_FORMAT_R8G8_UINT:
  case DXGI_FORMAT_R8G8_SNORM:
  case DXGI_FORMAT_R8G8_SINT:
  case DXGI_FORMAT_R16_TYPELESS:
  case DXGI_FORMAT_R16_FLOAT:
  case DXGI_FORMAT_D16_UNORM:
  case DXGI_FORMAT_R16_UNORM:
  case DXGI_FORMAT_R16_UINT:
  case DXGI_FORMAT_R16_SNORM:
  case DXGI_FORMAT_R16_SINT:
  case DXGI_FORMAT_B5G6R5_UNORM:
  case DXGI_FORMAT_B5G5R5A1_UNORM:
  case DXGI_FORMAT_NV12:
  case DXGI_FORMAT_NV11:
  case DXGI_FORMAT_B4G4R4A4_UNORM:
    uVar3 = 2;
    break;
  case DXGI_FORMAT_R8_TYPELESS:
  case DXGI_FORMAT_R8_UNORM:
  case DXGI_FORMAT_R8_UINT:
  case DXGI_FORMAT_R8_SNORM:
  case DXGI_FORMAT_R8_SINT:
  case DXGI_FORMAT_A8_UNORM:
    uVar3 = 1;
    break;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\DXGIUtilities.h"
                       ,0x159,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  case DXGI_FORMAT_UNKNOWN:
  case DXGI_FORMAT_R1_UNORM:
    uVar3 = 0;
  }
  if ((uVar4 != uVar3) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("BytesPerPixel == UE::DXGIUtilities::GetFormatSizeInBytes(Format)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                         ,0x123,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return uVar4;
}

// D3D11UpdateBufferStatsCommon @ 14597bb30

void __cdecl D3D11UpdateBufferStatsCommon(ID3D11Buffer *param_1,long64 param_2,bool param_3)

{
  ulong64 uVar1;
  FLLMPauseScope local_18;
  
  uVar1 = param_2;
  if (!param_3) {
    uVar1 = -param_2;
  }
  FLLMPauseScope::FLLMPauseScope(&local_18,GraphicsPlatform,false,uVar1,Platform,None);
  if (param_3) {
    MemoryTrace_Alloc((ulong64)param_1,param_2,0,1,0);
  }
  else {
    MemoryTrace_Free((ulong64)param_1,1,0);
  }
  FLLMPauseScope::~FLLMPauseScope(&local_18);
  return;
}

// D3D11VectoredExceptionHandler @ 14597bbc0

long __cdecl D3D11VectoredExceptionHandler(_EXCEPTION_POINTERS *param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  
  if (param_1->ExceptionRecord->ExceptionCode != 0x87a) {
    return 0;
  }
  bVar2 = CheckD3D11StoredMessages();
  if (bVar2) {
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
    }
  }
  return -1;
}

// D3D11_ShouldBreakOnD3DDebugErrors @ 14597bc10

bool __cdecl D3D11_ShouldBreakOnD3DDebugErrors(void)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar1 = GD3D11DebugCvar.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar2 = GD3D11DebugCvar.Ref;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) < 1) {
    return false;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 4) {
    return false;
  }
  return true;
}

// D3D11_ShouldBreakOnD3DDebugWarnings @ 14597bc90

bool __cdecl D3D11_ShouldBreakOnD3DDebugWarnings(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = GD3D11DebugCvar.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return 3 < pTVar1->ShadowedValue[1];
    }
  }
  return 3 < pTVar1->ShadowedValue[0];
}

// D3D11_ShouldLogD3DDebugWarnings @ 14597bce0

bool __cdecl D3D11_ShouldLogD3DDebugWarnings(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = GD3D11DebugCvar.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return 1 < pTVar1->ShadowedValue[1];
    }
  }
  return 1 < pTVar1->ShadowedValue[0];
}

// EmptyD3DSamplerStateCache @ 14597c0d0

void __cdecl EmptyD3DSamplerStateCache(void)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GSamplerStateCacheCS);
  TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
              *)&GSamplerStateCache);
  local_18 = (TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
              *)&GSamplerStateCache;
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this = *(FRHIResource **)(*local_48 + 8 + (longlong)(int)uVar7 * 0x18);
      LOCK();
      pFVar1 = &this->AtomicFlags;
      aVar2 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar2 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = (uint)aVar2 & 0x3fffffff;
      if (uVar8 == 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (uVar8 == 1) {
        FRHIResource::MarkForDelete(this);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar6)) || (iVar6 < local_18->HashSize)) {
        local_18->HashSize = iVar6;
        TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar5 = 1 < (int)GSamplerStateCache._72_4_;
  if (!bVar5) {
    TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
                      *)&GSamplerStateCache);
  }
  GSamplerStateCache._8_4_ = 0;
  if (GSamplerStateCache._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&GSamplerStateCache,0,
               (int *)&GSamplerStateCache.field_0xc);
  }
  GSamplerStateCache._48_4_ = 0xffffffff;
  GSamplerStateCache._52_4_ = 0;
  GSamplerStateCache._40_4_ = 0;
  if (0x80 < (uint)GSamplerStateCache._44_4_) {
    GSamplerStateCache._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GSamplerStateCache.field_0x10,0);
  }
  if (bVar5) {
    GSamplerStateCache._72_4_ = 1;
    TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>,TDefaultMapHashableKeyFuncs<ID3D11SamplerState_*,FD3D11SamplerState_*,0>,FDefaultSetAllocator>
              *)&GSamplerStateCache);
  }
                    /* WARNING: Could not recover jumptable at 0x00014597c34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GSamplerStateCacheCS);
  return;
}

// EnsureColorSpace @ 14597c970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
EnsureColorSpace(IDXGISwapChain *param_1,EDisplayColorGamut param_2,EDisplayOutputFormat param_3,
                EPixelFormat param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  atomic<unsigned_char> *paVar6;
  wchar_t *pwVar7;
  uint local_res8 [2];
  longlong *local_38;
  FString local_30;
  
  if (param_1 == (IDXGISwapChain *)0x0) {
    return;
  }
  local_38 = (longlong *)0x0;
  iVar3 = (**(code **)*param_1)(param_1,&_GUID_94d99bdb_f1f8_4ab0_b236_7da0170edab1,&local_38);
  if (iVar3 < 0) goto LAB_14597cb3a;
  iVar3 = 0;
  switch(param_3) {
  case SDR_sRGB:
  case SDR_Rec709:
    iVar3 = 0;
    if (param_2 == Rec2020_D65) {
      iVar3 = 0x11;
    }
    break;
  case HDR_ACES_1000nit_ST2084:
  case HDR_ACES_2000nit_ST2084:
    iVar3 = 0xc;
    if (param_4 != PF_A2B10G10R10) {
      pcVar5 = "PixelFormat == PF_A2B10G10R10";
      iVar4 = 0x15f;
      paVar6 = &bGEnsureHasExecuted<7969014928113664351>;
LAB_14597ca1f:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar6,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                         ,iVar4,pcVar5);
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    break;
  case HDR_ACES_1000nit_ScRGB:
  case HDR_ACES_2000nit_ScRGB:
    iVar3 = 1;
    if (param_4 != PF_FloatRGBA) {
      pcVar5 = "PixelFormat == PF_FloatRGBA";
      iVar4 = 0x168;
      paVar6 = &bGEnsureHasExecuted<7969014928113664360>;
      goto LAB_14597ca1f;
    }
  }
  local_res8[0] = 0;
  iVar4 = (**(code **)(*local_38 + 0x128))(local_38,iVar3,local_res8);
  if (iVar3 == 0) {
    pwVar7 = L"RGB_FULL_G22_NONE_P709";
LAB_14597caa8:
    FString::FString(&local_30,pwVar7);
  }
  else {
    if (iVar3 == 1) {
      pwVar7 = L"RGB_FULL_G10_NONE_P709";
      goto LAB_14597caa8;
    }
    if (iVar3 == 0xc) {
      pwVar7 = L"RGB_FULL_G2084_NONE_P2020";
      goto LAB_14597caa8;
    }
    if (iVar3 == 0x11) {
      pwVar7 = L"RGB_FULL_G22_NONE_P2020";
      goto LAB_14597caa8;
    }
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    FString::AppendInt(&local_30,iVar3);
  }
  if ((iVar4 < 0) || ((local_res8[0] & 1) == 0)) {
    if (1 < (byte)LogD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_EnsureColorSpace(IDXGISwapChain*___ptr64,EDisplayColorGamut,EDisplayOutputFormat,EPixelFormat)'
                  ::__l35::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
  }
  else {
    (**(code **)(*local_38 + 0x130))(local_38,iVar3);
    if (5 < (byte)LogD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`void___cdecl_EnsureColorSpace(IDXGISwapChain*___ptr64,EDisplayColorGamut,EDisplayOutputFormat,EPixelFormat)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
LAB_14597cb3a:
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  return;
}

// FD3D11DumpLiveObjects @ 14597db50

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FD3D11DumpLiveObjects(void)

{
  ID3D11Device *pIVar1;
  int iVar2;
  longlong *local_res8 [4];
  
  if (GRHIGlobals.IsDebugLayerEnabled) {
    local_res8[0] = (longlong *)0x0;
    pIVar1 = (GD3D11RHI->Direct3DDevice).Reference;
    iVar2 = (**(code **)*pIVar1)(pIVar1,&_GUID_79cf2233_7536_4948_9d36_1e4692dc5760,local_res8);
    if (iVar2 < 0) {
      VerifyD3D11Result(iVar2,
                        "GD3D11RHI->GetDevice()->QueryInterface(__uuidof(ID3D11Debug), (void**)DebugDevice.GetInitReference())"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                        ,0x78,(GD3D11RHI->Direct3DDevice).Reference);
    }
    if (local_res8[0] != (longlong *)0x0) {
      iVar2 = (**(code **)(*local_res8[0] + 0x50))(local_res8[0],3);
      if ((iVar2 != 0) && (2 < (byte)LogD3D11RHI._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      }
      if (local_res8[0] != (longlong *)0x0) {
        (**(code **)(*local_res8[0] + 0x10))();
        return;
      }
    }
  }
  else if (2 < (byte)LogD3D11RHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    return;
  }
  return;
}

// FillSubresourceData @ 14597dc40

D3D11_SUBRESOURCE_DATA * __cdecl
FillSubresourceData(TArray<D3D11_SUBRESOURCE_DATA,TSizedDefaultAllocator<32>_> *param_1,
                   FRHITextureDesc *param_2,TArrayView<unsigned_char_const_,int> *param_3)

{
  EPixelFormat EVar1;
  byte bVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  D3D11_SUBRESOURCE_DATA *pDVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int local_res20;
  uint local_80;
  uint local_74;
  
  if (param_3->ArrayNum == 0) {
    return (D3D11_SUBRESOURCE_DATA *)0x0;
  }
  EVar1 = param_2->Format;
  if ((param_2->Dimension == TextureCube) || (param_2->Dimension == TextureCubeArray)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  bVar2 = param_2->NumMips;
  iVar6 = 1;
  if (bVar5) {
    iVar6 = 6;
  }
  uVar19 = iVar6 * (uint)param_2->ArraySize;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,bVar2 * uVar19,&param_1->AllocatorInstance,&param_1->ArrayNum,
                     &param_1->ArrayMax);
  memset((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
         (ulonglong)(bVar2 * uVar19) << 4);
  local_res20 = 0;
  local_80 = 0;
  if (uVar19 != 0) {
    do {
      local_74 = (uint)bVar2;
      iVar6 = 0;
      if (bVar2 != 0) {
        uVar15 = local_80 * bVar2;
        iVar7 = -uVar15;
        do {
          uVar9 = iVar6 + local_res20;
          bVar11 = (char)iVar7 + (char)uVar15;
          uVar12 = (uint)(param_2->Extent).field0_0x0._s_0.X >> (bVar11 & 0x1f);
          uVar8 = 1;
          if (1 < uVar12) {
            uVar8 = uVar12;
          }
          uVar13 = (uint)(param_2->Extent).field0_0x0._s_0.Y >> (bVar11 & 0x1f);
          uVar12 = 1;
          if (1 < uVar13) {
            uVar12 = uVar13;
          }
          uVar14 = (uint)(param_2->Depth >> (bVar11 & 0x1f));
          uVar13 = 1;
          if (1 < uVar14) {
            uVar13 = uVar14;
          }
          uVar13 = ((uVar13 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
                   (uint)GPixelFormats[EVar1].BlockSizeZ;
          if (uVar13 == 0) {
            uVar13 = 1;
          }
          iVar18 = (int)(CONCAT44(0 >> (bVar11 & 0x1f),(uVar8 - 1) + GPixelFormats[EVar1].BlockSizeX
                                 ) / (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
          if (iVar18 == 0) {
            iVar18 = 1;
          }
          iVar18 = iVar18 * GPixelFormats[EVar1].BlockBytes;
          iVar17 = (int)(CONCAT44(0 >> (bVar11 & 0x1f),
                                  (uVar12 - 1) + GPixelFormats[EVar1].BlockSizeY) /
                        (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY);
          if (iVar17 == 0) {
            iVar17 = 1;
          }
          iVar17 = iVar17 * iVar18;
          uVar8 = 0;
          if ((int)uVar9 < param_3->ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pDVar10 = (D3D11_SUBRESOURCE_DATA *)(*pcVar4)();
            return pDVar10;
          }
          puVar3 = param_3->DataPtr;
          uVar12 = ~uVar15 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pDVar10 = (D3D11_SUBRESOURCE_DATA *)(*pcVar4)();
            return pDVar10;
          }
          lVar16 = (longlong)(int)uVar15;
          *(uchar **)((param_1->AllocatorInstance).Data + lVar16 * 0x10) = puVar3 + (int)uVar9;
          uVar9 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pDVar10 = (D3D11_SUBRESOURCE_DATA *)(*pcVar4)();
            return pDVar10;
          }
          *(int *)((param_1->AllocatorInstance).Data + lVar16 * 0x10 + 8) = iVar18;
          uVar9 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pDVar10 = (D3D11_SUBRESOURCE_DATA *)(*pcVar4)();
            return pDVar10;
          }
          uVar15 = uVar15 + 1;
          *(int *)((param_1->AllocatorInstance).Data + lVar16 * 0x10 + 0xc) = iVar17;
          iVar6 = iVar6 + uVar13 * iVar17;
        } while (iVar7 + uVar15 < local_74);
      }
      local_res20 = local_res20 + iVar6;
      local_80 = local_80 + 1;
    } while (local_80 < uVar19);
  }
  return (D3D11_SUBRESOURCE_DATA *)(param_1->AllocatorInstance).Data;
}

// GetAndLogMemoryStats @ 1459814e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl GetAndLogMemoryStats(FD3D11Adapter *param_1,ulong64 *param_2,ulong64 *param_3)

{
  int iVar1;
  FD3DMemoryStats local_58;
  
  local_58.BudgetLocal = 0;
  local_58.BudgetSystem = 0;
  local_58.UsedLocal = 0;
  local_58.UsedSystem = 0;
  local_58.DemotedLocal = 0;
  local_58.DemotedSystem = 0;
  local_58.AvailableLocal = 0;
  local_58.AvailableSystem = 0;
  iVar1 = UE::DXGIUtilities::GetD3DMemoryStats((param_1->DXGIAdapter).Reference,&local_58);
  if (-1 < iVar1) {
    if ((((1 < (byte)LogD3D11RHI._0_1_) &&
         (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI),
         1 < (byte)LogD3D11RHI._0_1_)) &&
        (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI),
        1 < (byte)LogD3D11RHI._0_1_)) &&
       (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI),
       1 < (byte)LogD3D11RHI._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
    *param_2 = local_58.BudgetLocal;
    *param_3 = local_58.UsedLocal;
  }
  return;
}

// GetD3D11CubeFace @ 1459818e0

uint __cdecl GetD3D11CubeFace(ECubeFace param_1)

{
  switch(param_1) {
  default:
    return 0;
  case CubeFace_NegX:
    return 1;
  case CubeFace_PosY:
    return 2;
  case CubeFace_NegY:
    return 3;
  case CubeFace_PosZ:
    return 4;
  case CubeFace_NegZ:
    return 5;
  }
}

// GetD3D11ErrorString @ 145981940

FString * __cdecl
GetD3D11ErrorString(FString *__return_storage_ptr__,int param_1,ID3D11Device *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 < -0x7785fffa) {
    if (param_1 != -0x7785fffb) {
      if (param_1 == -0x7fffbffe) {
        pwVar4 = L"E_NOINTERFACE";
        goto LAB_145981bc8;
      }
      if (param_1 == -0x7fffbffb) {
        pwVar4 = L"E_FAIL";
        goto LAB_145981bc8;
      }
      if (param_1 == -0x7ff8fff2) {
        pwVar4 = L"E_OUTOFMEMORY";
        goto LAB_145981bc8;
      }
      if (param_1 == -0x7ff8ffa9) {
        pwVar4 = L"E_INVALIDARG";
        goto LAB_145981bc8;
      }
      if (param_1 == -0x7785ffff) {
        pwVar4 = L"DXGI_ERROR_INVALID_CALL";
        goto LAB_145981bc8;
      }
      goto LAB_145981a29;
    }
    FString::operator=(__return_storage_ptr__,L"DXGI_ERROR_DEVICE_REMOVED");
  }
  else {
    if (param_1 == -0x7785fff6) {
      pwVar4 = L"DXGI_ERROR_WAS_STILL_DRAWING";
LAB_145981bc8:
      FString::operator=(__return_storage_ptr__,pwVar4);
      return __return_storage_ptr__;
    }
    if (param_1 == -0x7785ffde) {
      pwVar4 = L"DXGI_ERROR_NOT_CURRENTLY_AVAILABLE";
      goto LAB_145981bc8;
    }
    if (param_1 == -0x7783ffff) {
      pwVar4 = L"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS";
      goto LAB_145981bc8;
    }
    if (param_1 == -0x7783fffe) {
      pwVar4 = L"D3D11_ERROR_FILE_NOT_FOUND";
      goto LAB_145981bc8;
    }
    if (param_1 == 0) {
      pwVar4 = L"S_OK";
      goto LAB_145981bc8;
    }
LAB_145981a29:
    FString::PrintfImpl(&local_48,L"%08X");
    if (__return_storage_ptr__ != &local_48) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (param_1 != -0x7785fffb) {
      return __return_storage_ptr__;
    }
  }
  if (param_2 == (ID3D11Device *)0x0) {
    return __return_storage_ptr__;
  }
  iVar2 = (**(code **)((longlong)*param_2 + 0x138))(param_2);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (iVar2 == -0x7785ffff) {
    pwVar4 = L"DXGI_ERROR_INVALID_CALL";
  }
  else if (iVar2 == -0x7785fffb) {
    pwVar4 = L"DXGI_ERROR_DEVICE_REMOVED";
  }
  else if (iVar2 == -0x7785fffa) {
    pwVar4 = L"DXGI_ERROR_DEVICE_HUNG";
  }
  else if (iVar2 == -0x7785fff9) {
    pwVar4 = L"DXGI_ERROR_DEVICE_RESET";
  }
  else {
    if (iVar2 != -0x7785ffe0) {
      FString::PrintfImpl(&local_38,L"%08X");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      local_58.Data.ArrayMax = local_38.Data.ArrayMax;
      local_58.Data.ArrayNum = local_38.Data.ArrayNum;
      goto LAB_145981b37;
    }
    pwVar4 = L"DXGI_ERROR_DRIVER_INTERNAL_ERROR";
  }
  FString::operator=(&local_58,pwVar4);
LAB_145981b37:
  pFVar3 = FString::FString(&local_18,L" ");
  FString::ConcatFF(&local_28,pFVar3,&local_58);
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_58.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetFeatureLevelString @ 145981f60

wchar_t * __cdecl GetFeatureLevelString(D3D_FEATURE_LEVEL_conflict param_1)

{
  wchar_t *pwVar1;
  
  if (0xa000 < (int)param_1) {
    if (param_1 == D3D_FEATURE_LEVEL_10_1) {
      return L"10_1";
    }
    if (param_1 != D3D_FEATURE_LEVEL_11_0) {
      pwVar1 = L"11_1";
      if (param_1 != D3D_FEATURE_LEVEL_11_1) {
        pwVar1 = L"X_X";
      }
      return pwVar1;
    }
    return L"11_0";
  }
  if (param_1 == D3D_FEATURE_LEVEL_10_0) {
    return L"10_0";
  }
  if (param_1 != D3D_FEATURE_LEVEL_9_1) {
    if (param_1 != D3D_FEATURE_LEVEL_9_2) {
      pwVar1 = L"X_X";
      if (param_1 == D3D_FEATURE_LEVEL_9_3) {
        pwVar1 = L"9_3";
      }
      return pwVar1;
    }
    return L"9_2";
  }
  return L"9_1";
}

// GetFormatSupport @ 145981ff0

FFormatSupport __cdecl GetFormatSupport(ID3D11Device *param_1,DXGI_FORMAT_conflict param_2)

{
  int iVar1;
  FFormatSupport local_res8;
  DXGI_FORMAT_conflict local_res18;
  D3D11_FORMAT_SUPPORT2 DStackX_1c;
  
  DStackX_1c = 0;
  local_res18 = param_2;
  iVar1 = (**(code **)((longlong)*param_1 + 0x108))(param_1,2,&local_res18,8);
  local_res8.FormatSupport = 0;
  if (-1 < iVar1) {
    local_res8.FormatSupport = DStackX_1c;
  }
  DStackX_1c = 0;
  local_res18 = param_2;
  iVar1 = (**(code **)((longlong)*param_1 + 0x108))(param_1,3,&local_res18,8);
  local_res8.FormatSupport2 = 0;
  if (-1 < iVar1) {
    local_res8.FormatSupport2 = DStackX_1c;
  }
  return local_res8;
}

// GetMipAndSliceInfoFromSRV @ 145982160

void __cdecl
GetMipAndSliceInfoFromSRV
          (ID3D11ShaderResourceView *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  *param_2 = -1;
  *param_3 = -1;
  *param_4 = -1;
  *param_5 = -1;
  if (param_1 == (ID3D11ShaderResourceView *)0x0) {
    return;
  }
  (**(code **)((longlong)*param_1 + 0x40))(param_1,local_28);
  switch(local_24) {
  case 2:
  case 4:
  case 8:
  case 9:
    *param_2 = local_20;
    *param_3 = local_1c;
    break;
  case 3:
  case 5:
  case 10:
    *param_2 = local_20;
    *param_3 = local_1c;
    *param_4 = local_18;
    goto LAB_145982219;
  case 6:
    *param_2 = 0;
    *param_3 = 1;
    break;
  case 7:
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = local_20;
    local_14 = local_1c;
LAB_145982219:
    *param_5 = local_14;
  }
  return;
}

// GetPoolBucketIndex @ 145982af0

uint __cdecl GetPoolBucketIndex(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = param_1;
  }
  uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// GetPoolBucketSize @ 145982b10

uint __cdecl GetPoolBucketSize(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = param_1;
  }
  uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return 1 << ((byte)lVar2 & 0x1f);
}

// GetRenderTargetViewDesc @ 1459833c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRTVDesc * __cdecl
GetRenderTargetViewDesc(FRTVDesc *__return_storage_ptr__,ID3D11RenderTargetView *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRTVDesc *pFVar3;
  byte bVar4;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 local_90 [4];
  int local_8c;
  byte local_88;
  uint local_78;
  uint local_74;
  undefined8 local_64;
  uint local_48;
  uint local_44;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  (**(code **)((longlong)*param_1 + 0x40))(param_1,local_90);
  bVar4 = 0;
  local_a8 = (longlong *)0x0;
  (**(code **)((longlong)*param_1 + 0x38))(param_1,&local_a8);
  uStack_98 = 0;
  if ((((local_8c == 4) || (local_8c == 5)) || (local_8c == 6)) || (local_8c == 7)) {
    (**(code **)(*local_a8 + 0x50))(local_a8,&local_78);
    uStack_98 = local_64;
    if ((local_8c != 4) && (local_8c != 5)) goto LAB_1459834a3;
  }
  else {
    if (local_8c != 8) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                         ,0x312,L"");
      local_78 = 0;
      local_74 = 0;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRTVDesc *)(*pcVar1)();
        return pFVar3;
      }
      goto LAB_1459834a3;
    }
    (**(code **)(*local_a8 + 0x50))(local_a8,&local_48);
    uStack_98 = CONCAT44(uStack_98._4_4_,1);
    local_78 = local_48;
    local_74 = local_44;
  }
  bVar4 = local_88;
LAB_1459834a3:
  local_a0 = local_78 >> (bVar4 & 0x1f);
  uStack_9c = local_74 >> (bVar4 & 0x1f);
  __return_storage_ptr__->Width = local_a0;
  __return_storage_ptr__->Height = uStack_9c;
  (__return_storage_ptr__->SampleDesc).Count = (uint)uStack_98;
  (__return_storage_ptr__->SampleDesc).Quality = uStack_98._4_4_;
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 145984000

uint __cdecl GetTypeHash(FD3D11VertexDeclarationKey *param_1)

{
  return param_1->Hash;
}

// IsDeviceUMA @ 145985c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl IsDeviceUMA(ID3D11Device *param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = (longlong *)0x0;
  iVar1 = (**(code **)*param_1)(param_1,&_GUID_a05c8c37_d2c6_4732_b3a0_9ce0b0dc9ae6,&local_38);
  if (-1 < iVar1) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    iVar1 = (**(code **)(*local_38 + 0x108))(local_38,0xe,&local_30,0x20);
    if (-1 < iVar1) {
      (**(code **)(*local_38 + 0x10))();
      return uStack_18._4_4_ != 0;
    }
    (**(code **)(*local_38 + 0x10))();
  }
  return false;
}

// LogDXGIAdapterDesc @ 145986c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogDXGIAdapterDesc(DXGI_ADAPTER_DESC *param_1)

{
  if (4 < (byte)LogD3D11RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if (4 < (byte)LogD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      if (4 < (byte)LogD3D11RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        if (4 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
          if (4 < (byte)LogD3D11RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
            if (4 < (byte)LogD3D11RHI._0_1_) {
              UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
              if (4 < (byte)LogD3D11RHI._0_1_) {
                UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
                if (4 < (byte)LogD3D11RHI._0_1_) {
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)&PTR_u_____SharedSyste_151062370,
                             (FLogCategoryBase *)&LogD3D11RHI);
                  if (4 < (byte)LogD3D11RHI._0_1_) {
                    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
                    return;
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

// RHIConvertToGpuVendorId @ 145989bd0

EGpuVendorId __cdecl RHIConvertToGpuVendorId(uint param_1)

{
  bool bVar1;
  
  if (param_1 < 0x14e5) {
    if (param_1 == 0x14e4) {
      return Broadcom;
    }
    if (param_1 < 0x10df) {
      if (param_1 == 0x10de) {
        return Nvidia;
      }
      if (param_1 == 0) {
        return NotQueried;
      }
      if (param_1 == 0x1002) {
        return Amd;
      }
      if (param_1 == 0x1010) {
        return ImgTec;
      }
      bVar1 = param_1 == 0x106b;
    }
    else {
      if (param_1 == 0x13b5) {
        return Arm;
      }
      if (param_1 == 0x1414) {
        return Microsoft;
      }
      bVar1 = param_1 == 0x144d;
    }
  }
  else {
    if (0x10003 < param_1) {
      if (param_1 == 0x10004) {
        return Codeplay;
      }
      if (param_1 == 0x10005) {
        return Mesa;
      }
      return Unknown;
    }
    if (param_1 == 0x10003) {
      return Kazan;
    }
    if (param_1 == 0x1eb1) {
      return VeriSilicon;
    }
    if (param_1 == 0x5143) {
      return Qualcomm;
    }
    if (param_1 == 0x7a05) {
      return Vivante;
    }
    bVar1 = param_1 == 0x8086;
  }
  if (bVar1) {
    return param_1;
  }
  return Unknown;
}

// ReportDiedDuringDeviceShutdown @ 145997550

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl ReportDiedDuringDeviceShutdown(_EXCEPTION_POINTERS *param_1)

{
  if (1 < (byte)LogD3D11RHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  }
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x98))();
  }
  return 1;
}

// SafeCreateDXGIFactory @ 1459981b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SafeCreateDXGIFactory(IDXGIFactory1 **param_1,bool param_2)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  HMODULE hModule;
  
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar3,L"quad_buffer_stereo");
  bVar2 = FWindowsPlatformMisc::VerifyWindowsVersion(8,0,0);
  if ((bVar2) && ((bVar1 || (param_2)))) {
    hModule = FWindowsPlatformProcess::GetDllHandle(L"dxgi.dll");
    if (hModule != (HMODULE)0x0) {
      CreateDXGIFactory2FnPtr =
           (_func___cdecl_T_HRESULT_uint__GUID_ptr_void_ptr_ptr *)
           GetProcAddress(hModule,"CreateDXGIFactory2");
      FWindowsPlatformProcess::FreeDllHandle(hModule);
    }
    if (bVar1) {
      if (CreateDXGIFactory2FnPtr == (_func___cdecl_T_HRESULT_uint__GUID_ptr_void_ptr_ptr *)0x0) {
        if (2 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
      }
      else {
        bIsQuadBufferStereoEnabled = true;
      }
    }
  }
  if (CreateDXGIFactory2FnPtr == (_func___cdecl_T_HRESULT_uint__GUID_ptr_void_ptr_ptr *)0x0) {
    CreateDXGIFactory1(&_GUID_770aae78_f26f_4dba_a829_253c83d1b387,param_1);
  }
  else {
    (*CreateDXGIFactory2FnPtr)
              (SUB14(param_2,0),(_GUID *)&_GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0,param_1);
  }
  return;
}

// SafeCreateTexture2D @ 1459982c0

void __cdecl
SafeCreateTexture2D(ID3D11Device *param_1,int param_2,D3D11_TEXTURE2D_DESC *param_3,
                   D3D11_SUBRESOURCE_DATA *param_4,ID3D11Texture2D **param_5,wchar_t *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  iVar2 = (**(code **)((longlong)*param_1 + 0x28))(param_1,param_3,param_4,param_5);
  if (iVar2 < 0) {
    pvVar4 = (void *)0x0;
    uVar3 = 0;
    uVar1 = uVar3;
    if (param_4 != (D3D11_SUBRESOURCE_DATA *)0x0) {
      uVar3 = param_4->SysMemPitch;
      pvVar4 = param_4->pSysMem;
      uVar1 = param_4->SysMemSlicePitch;
    }
    VerifyD3D11CreateTextureResult
              (iVar2,param_2,
               "Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
               ,0xad,param_3->Width,param_3->Height,param_3->ArraySize,(char)param_3->Format,
               param_3->MipLevels,param_3->BindFlags,param_3->Usage,param_3->CPUAccessFlags,
               param_3->MiscFlags,(param_3->SampleDesc).Count,(param_3->SampleDesc).Quality,pvVar4,
               uVar3,uVar1,param_1,param_6);
  }
  return;
}

// SafeCreateTexture3D @ 1459983f0

void __cdecl
SafeCreateTexture3D(ID3D11Device *param_1,int param_2,D3D11_TEXTURE3D_DESC *param_3,
                   D3D11_SUBRESOURCE_DATA *param_4,ID3D11Texture3D **param_5,wchar_t *param_6)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (**(code **)((longlong)*param_1 + 0x30))();
  if (iVar1 < 0) {
    if (param_4 == (D3D11_SUBRESOURCE_DATA *)0x0) {
      uVar4 = 0;
      uVar3 = 0;
      pvVar2 = (void *)0x0;
    }
    else {
      uVar4 = param_4->SysMemSlicePitch;
      uVar3 = param_4->SysMemPitch;
      pvVar2 = param_4->pSysMem;
    }
    VerifyD3D11CreateTextureResult
              (iVar1,param_2,
               "Direct3DDevice->CreateTexture3D(TextureDesc,SubResourceData,OutTexture2D)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
               ,0xde,param_3->Width,param_3->Height,param_3->Depth,(char)param_3->Format,
               param_3->MipLevels,param_3->BindFlags,param_3->Usage,param_3->CPUAccessFlags,
               param_3->MiscFlags,0,0,pvVar2,uVar3,uVar4,param_1,param_6);
  }
  return;
}

// SafeTestD3D11CreateDevice @ 145998520

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
SafeTestD3D11CreateDevice
          (IDXGIAdapter *param_1,D3D_FEATURE_LEVEL_conflict param_2,
          D3D_FEATURE_LEVEL_conflict param_3,FD3D11DeviceBasicInfo *param_4)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar6;
  int iVar7;
  D3D_FEATURE_LEVEL_conflict local_res10 [2];
  D3D_FEATURE_LEVEL_conflict local_30 [2];
  ID3D11Device *local_28;
  longlong *local_20 [3];
  ulonglong uVar5;
  
  uVar2 = 0;
  local_28 = (ID3D11Device *)0x0;
  local_20[0] = (longlong *)0x0;
  iVar7 = 1;
  uVar6 = 1;
  if (GRHIGlobals.IsDebugLayerEnabled) {
    uVar6 = 3;
  }
  local_30[0] = D3D_FEATURE_LEVEL_11_1;
  local_30[1] = 0xb000;
  uVar5 = uVar2;
  do {
    uVar4 = (uint)uVar5;
    if (local_30[uVar2] == param_3) break;
    uVar4 = uVar4 + 1;
    uVar5 = (ulonglong)uVar4;
    uVar2 = uVar2 + 1;
  } while ((longlong)uVar2 < 2);
  lVar3 = 1;
  do {
    if ((int)param_2 <= (int)local_30[lVar3]) break;
    iVar7 = iVar7 + -1;
    lVar3 = lVar3 + -1;
  } while (0 < lVar3);
  iVar7 = (iVar7 - uVar4) + 1;
  if (((int)param_2 <= (int)param_3) && (0 < iVar7)) {
    local_res10[0] = 0;
    iVar7 = D3D11CreateDevice(param_1,0,0,uVar6 | 0x20,local_30 + (int)uVar4,iVar7,7,&local_28,
                              local_res10,local_20);
    if (-1 < iVar7) {
      param_4->MaxFeatureLevel = local_res10[0];
      bVar1 = IsDeviceUMA(local_28);
      param_4->bUMA = bVar1;
      (**(code **)((longlong)*local_28 + 0x10))();
      (**(code **)(*local_20[0] + 0x10))();
      return true;
    }
    VerifyD3D11ResultNoExit
              (iVar7,"Result",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
               ,0x1b3,(ID3D11Device *)0x0);
    bVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,0);
    if ((iVar7 == -0x7785ffd3) && (bVar1)) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
  }
  return false;
}

// SetD3D11ObjectName @ 145998720

void __cdecl SetD3D11ObjectName(ID3D11DeviceChild *param_1,TStringView<char> *param_2)

{
  if (param_1 != (ID3D11DeviceChild *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145998739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*param_1 + 0x28))
              (param_1,&WKPDID_D3DDebugObjectName,param_2->Size + 1,param_2->DataPtr);
    return;
  }
  return;
}

// SetD3D11ObjectName @ 145998750

void __cdecl SetD3D11ObjectName(ID3D11DeviceChild *param_1,TStringView<wchar_t> *param_2)

{
  FAnsiString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FAnsiString local_28;
  FAnsiString local_18;
  
  if (param_1 != (ID3D11DeviceChild *)0x0) {
    pFVar3 = (FScriptContainerElement *)0x0;
    iVar2 = 0;
    pFVar1 = FAnsiString::ConstructFromPtrSize
                       (&local_28,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    if (&local_18 != pFVar1) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar2 = (pFVar1->Data).ArrayNum;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&WKPDID_D3DDebugObjectName,iVar2,pFVar3);
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// SetD3D11ResourceName @ 145998800

void __cdecl SetD3D11ResourceName(FD3D11Buffer *param_1,TStringView<wchar_t> *param_2)

{
  ID3D11Buffer *pIVar1;
  FAnsiString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FAnsiString local_28;
  FAnsiString local_18;
  
  pIVar1 = (param_1->Resource).Reference;
  if (pIVar1 != (ID3D11Buffer *)0x0) {
    pFVar4 = (FScriptContainerElement *)0x0;
    iVar3 = 0;
    pFVar2 = FAnsiString::ConstructFromPtrSize
                       (&local_28,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    if (&local_18 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar2->Data).ArrayNum;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&WKPDID_D3DDebugObjectName,iVar3,pFVar4);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  return;
}

// SetD3D11ResourceName @ 1459988c0

void __cdecl SetD3D11ResourceName(FD3D11Texture *param_1,TStringView<wchar_t> *param_2)

{
  ID3D11Resource *pIVar1;
  FAnsiString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FAnsiString local_28;
  FAnsiString local_18;
  
  pIVar1 = (param_1->Resource).Reference;
  if (pIVar1 != (ID3D11Resource *)0x0) {
    pFVar4 = (FScriptContainerElement *)0x0;
    iVar3 = 0;
    pFVar2 = FAnsiString::ConstructFromPtrSize
                       (&local_28,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    if (&local_18 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar2->Data).ArrayNum;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&WKPDID_D3DDebugObjectName,iVar3,pFVar4);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  return;
}

// SetD3D11ResourceName @ 145998980

void __cdecl SetD3D11ResourceName(FD3D11UnorderedAccessView *param_1,TStringView<wchar_t> *param_2)

{
  ID3D11UnorderedAccessView *pIVar1;
  FAnsiString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FAnsiString local_28;
  FAnsiString local_18;
  
  pIVar1 = (param_1->View).Reference;
  if (pIVar1 != (ID3D11UnorderedAccessView *)0x0) {
    pFVar4 = (FScriptContainerElement *)0x0;
    iVar3 = 0;
    pFVar2 = FAnsiString::ConstructFromPtrSize
                       (&local_28,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    if (&local_18 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar2->Data).ArrayNum;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&WKPDID_D3DDebugObjectName,iVar3,pFVar4);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  return;
}

// SetUAVParameter @ 14599a640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetUAVParameter(FRHIBatchedShaderParameters *param_1,FShaderResourceParameter *param_2,
               FRHIUnorderedAccessView *param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  ushort *puVar4;
  FRHIBatchedShaderParametersAllocator *pFVar5;
  FMemStackBase *pFVar6;
  TArrayView<FRHIShaderParameterResource,int> *pTVar7;
  FRHIUnorderedAccessView **ppFVar8;
  ushort local_res10 [8];
  ushort local_res20 [4];
  FRHIUnorderedAccessView *local_18;
  FRHIUnorderedAccessView *local_10;
  
  if (param_2->NumResources != '\0') {
    uVar1 = param_2->BaseIndex;
    pFVar5 = param_1->Allocator;
    if (param_2->Type == BindlessUAV) {
      local_res10[0] = uVar1;
      local_18 = param_3;
      if (pFVar5->AttachedParameters != param_1) {
        if (pFVar5->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar5->AttachedParameters = param_1;
      }
      pFVar5 = param_1->Allocator;
      pTVar7 = &param_1->BindlessParameters;
      puVar4 = local_res10;
      ppFVar8 = &local_18;
      pFVar6 = &pFVar5->BindlessParameters;
    }
    else {
      local_res20[0] = uVar1;
      local_10 = param_3;
      if (pFVar5->AttachedParameters != param_1) {
        if (pFVar5->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar5->AttachedParameters = param_1;
      }
      pFVar5 = param_1->Allocator;
      pTVar7 = &param_1->ResourceParameters;
      puVar4 = local_res20;
      ppFVar8 = &local_10;
      pFVar6 = &pFVar5->ResourceParameters;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&>
              (pFVar5,pFVar6,pTVar7,ppFVar8,puVar4);
  }
  return;
}

// ShouldNotEnqueueRHICommand @ 14599b3d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ShouldNotEnqueueRHICommand(void)

{
  bool bVar1;
  
  if ((!GRHICommandList.bLatchedBypass) ||
     ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) {
    if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
      bVar1 = IsInRHIThread();
      if (bVar1) {
        return true;
      }
      if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
        return false;
      }
    }
    bVar1 = IsInRenderingThread();
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// TerminateOnDeviceRemoved @ 14599bab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl TerminateOnDeviceRemoved(int param_1,ID3D11Device *param_2)

{
  int iVar1;
  longlong lVar2;
  UEngine *this;
  UClass *pUVar3;
  TArray<UE::RHICore::Nvidia::Aftermath::FCrashResult,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == -0x7785fffb) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    UE::RHICore::Nvidia::Aftermath::OnGPUCrash(&local_18);
    this = GEngine;
    if (GEngine != (UEngine *)0x0) {
      pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
      lVar2 = this->_padding_;
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        UGameEngine::OnGPUCrash((UGameEngine *)this);
      }
    }
    ReportGPUCrash(L"GPU Crash dump Triggered",(void *)0x0);
    GIsGPUCrashed = true;
    if (param_2 == (ID3D11Device *)0x0) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
    else {
      (**(code **)((longlong)*param_2 + 0x138))(param_2);
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
    DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int>
              ((FCrashResult *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FCrashResult *)local_18.AllocatorInstance.Data != (FCrashResult *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// TerminateOnOutOfMemory @ 14599bc00

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TerminateOnOutOfMemory(int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  FOutputDeviceRedirector *pFVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  FText *pFVar10;
  FString *pFVar11;
  IRendererModule *pIVar12;
  IConsoleManager *pIVar13;
  wchar_t *pwVar14;
  uint uVar15;
  longlong lVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  FText local_b8;
  FText local_a8;
  FDestructionSentinel local_98;
  FD3DMemoryStats local_78;
  
  if (param_1 == -0x7ff8fff2) {
    local_78.BudgetLocal = 0;
    local_78.BudgetSystem = 0;
    local_78.UsedLocal = 0;
    local_78.UsedSystem = 0;
    local_78.DemotedLocal = 0;
    local_78.DemotedSystem = 0;
    local_78.AvailableLocal = 0;
    local_78.AvailableSystem = 0;
    iVar7 = UE::DXGIUtilities::GetD3DMemoryStats
                      ((GD3D11RHI->Adapter).DXGIAdapter.Reference,&local_78);
    uVar17 = 0;
    uVar18 = 0;
    if ((((-1 < iVar7) &&
         (uVar17 = local_78.UsedLocal, uVar18 = local_78.BudgetLocal, 1 < (byte)LogD3D11RHI._0_1_))
        && (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI),
           uVar17 = local_78.UsedLocal, uVar18 = local_78.BudgetLocal, 1 < (byte)LogD3D11RHI._0_1_))
       && ((UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI),
           uVar17 = local_78.UsedLocal, uVar18 = local_78.BudgetLocal, 1 < (byte)LogD3D11RHI._0_1_
           && (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI),
              uVar17 = local_78.UsedLocal, uVar18 = local_78.BudgetLocal,
              1 < (byte)LogD3D11RHI._0_1_)))) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      uVar17 = local_78.UsedLocal;
      uVar18 = local_78.BudgetLocal;
    }
    pFVar9 = GetGlobalLogSingleton();
    FGenericPlatformMemory::DumpStats((FOutputDevice *)pFVar9);
    FGenericPlatformMemory::bIsOOM = true;
    this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreDelegates::GetGPUOutOfMemoryDelegate();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_98);
    this->InvocationListLockCount = this->InvocationListLockCount + 1;
    bVar4 = false;
    uVar15 = (this->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar15) {
      lVar16 = (longlong)(int)uVar15 << 4;
      bVar4 = false;
      do {
        uVar8 = 0;
        if ((int)uVar15 < (this->InvocationList).ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar16 + 8) == 0) ||
            (plVar2 = *(longlong **)(pFVar1 + lVar16), plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,uVar18,uVar17), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (param_2) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"Developer.MessageLog",L"OutOfVideoMemoryTextures",
                           L"Out of video memory trying to allocate a texture! Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
                          );
      pFVar11 = FText::ToString(pFVar10);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar14,L"Error");
    }
    else {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_a8,L"D3D11RHI",L"OutOfMemory",
                           L"Out of video memory trying to allocate a rendering resource. Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
                          );
      pFVar11 = FText::ToString(pFVar10);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar14,L"Error");
      local_b8.TextData.Reference = local_a8.TextData.Reference;
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    pIVar12 = GetRendererModule();
    (**(code **)((longlong)*pIVar12 + 200))(pIVar12);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      pIVar13 = IConsoleManager::Get();
      GPUCrashOOM = (IConsoleVariable *)
                    (**(code **)((longlong)*pIVar13 + 0xc0))(pIVar13,L"r.GPUCrashOnOutOfMemory",1);
      _Init_thread_footer(&_TSS0);
    }
    if ((GPUCrashOOM != (IConsoleVariable *)0x0) &&
       (iVar7 = (**(code **)(*(longlong *)GPUCrashOOM + 200))(), iVar7 != 0)) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      return;
    }
    FWindowsPlatformMisc::RequestExit(true,L"TerminateOnOutOfMemory");
  }
  return;
}

// TranslateBlendFactor @ 14599c190

/* WARNING: Enum "EBlendFactor": Some values do not have unique names */

D3D11_BLEND __cdecl TranslateBlendFactor(EBlendFactor param_1)

{
  switch(param_1) {
  case BF_One:
    return D3D11_BLEND_ONE;
  case BF_SourceColor:
    return D3D11_BLEND_SRC_COLOR;
  case BF_InverseSourceColor:
    return D3D11_BLEND_INV_SRC_COLOR;
  case BF_SourceAlpha:
    return D3D11_BLEND_SRC_ALPHA;
  case BF_InverseSourceAlpha:
    return D3D11_BLEND_INV_SRC_ALPHA;
  case BF_DestAlpha:
    return D3D11_BLEND_DEST_ALPHA;
  case BF_InverseDestAlpha:
    return D3D11_BLEND_INV_DEST_ALPHA;
  case BF_DestColor:
    return D3D11_BLEND_DEST_COLOR;
  case BF_InverseDestColor:
    return D3D11_BLEND_INV_DEST_COLOR;
  case BF_ConstantBlendFactor:
    return D3D11_BLEND_BLEND_FACTOR;
  case BF_InverseConstantBlendFactor:
    return D3D11_BLEND_INV_BLEND_FACTOR;
  case BF_Source1Color:
    return D3D11_BLEND_SRC1_COLOR;
  case BF_InverseSource1Color:
    return D3D11_BLEND_INV_SRC1_COLOR;
  case BF_Source1Alpha:
    return D3D11_BLEND_SRC1_ALPHA;
  case BF_InverseSource1Alpha:
    return D3D11_BLEND_INV_SRC1_ALPHA;
  default:
    return D3D11_BLEND_ZERO;
  }
}

// TranslateCompareFunction @ 14599c260

/* WARNING: Enum "ECompareFunction": Some values do not have unique names */

D3D11_COMPARISON_FUNC __cdecl TranslateCompareFunction(ECompareFunction param_1)

{
  switch(param_1) {
  case CF_DepthFarther:
    return D3D11_COMPARISON_LESS;
  case CF_DepthFartherOrEqual:
    return D3D11_COMPARISON_LESS_EQUAL;
  case CF_DepthNear:
    return D3D11_COMPARISON_GREATER;
  case CF_DepthNearOrEqual:
    return D3D11_COMPARISON_GREATER_EQUAL;
  case CF_Equal:
    return D3D11_COMPARISON_EQUAL;
  case CF_NotEqual:
    return D3D11_COMPARISON_NOT_EQUAL;
  case CF_Never:
    return D3D11_COMPARISON_NEVER;
  default:
    return D3D11_COMPARISON_ALWAYS;
  }
}

// TranslateStencilOp @ 14599c2d0

/* WARNING: Enum "EStencilOp": Some values do not have unique names */

D3D11_STENCIL_OP __cdecl TranslateStencilOp(EStencilOp param_1)

{
  switch(param_1) {
  case SO_Zero:
    return D3D11_STENCIL_OP_ZERO;
  case SO_Replace:
    return D3D11_STENCIL_OP_REPLACE;
  case EStencilOp_NumBits:
    return D3D11_STENCIL_OP_INCR_SAT;
  case SO_SaturatedDecrement:
    return D3D11_STENCIL_OP_DECR_SAT;
  case SO_Invert:
    return D3D11_STENCIL_OP_INVERT;
  case SO_Increment:
    return D3D11_STENCIL_OP_INCR;
  case SO_Decrement:
    return D3D11_STENCIL_OP_DECR;
  default:
    return D3D11_STENCIL_OP_KEEP;
  }
}

// UniformBufferBeginFrame @ 14599ca50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UniformBufferBeginFrame(void)

{
  TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  FName FVar5;
  longlong *plVar6;
  FPooledUniformBuffer *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_D3D11CleanUniformBufferTime> FVar16;
  FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory> FVar20;
  int *piVar21;
  ulonglong uVar22;
  FNameEntryId FVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  uchar auVar29 [8];
  FScriptContainerElement *pFVar30;
  FColor_u_0 local_res18 [2];
  longlong local_res20;
  FName local_d8;
  FName local_d0;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  longlong local_b8;
  int *local_b0;
  FName local_a8;
  FName local_98;
  FName local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  iVar24 = 0;
  iVar4 = 0;
  FVar16 = StatPtr_STAT_D3D11CleanUniformBufferTime;
  if (StatPtr_STAT_D3D11CleanUniformBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11CleanUniformBufferTime>)0x0) {
    pFVar15 = FName::FName(&local_68,"STAT_D3D11CleanUniformBufferTime");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3D11CleanUniformBufferTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11CleanUniformBufferTime,
                        *pFVar15,L"Clean uniform buffer pool","STATGROUP_D3D11RHI",
                        "STATCAT_Advanced",L"D3D11RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_d8 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((local_d8.ComparisonIndex.Value.Value != 0) || (local_d8.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = local_d8.ComparisonIndex.Value.Value;
        local_d0.Number = local_d8.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                   ,0x3f);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_d8,CycleScopeStart);
      bVar11 = true;
      goto LAB_14599cbd6;
    }
  }
  bVar10 = bVar12;
  bVar9 = bVar11;
  bVar11 = false;
  local_d8 = local_a8;
LAB_14599cbd6:
  local_b0 = &UniformBufferPool[0].ArrayNum;
  do {
    uVar27 = *local_b0 - 1;
    piVar21 = local_b0;
    if (-1 < (int)uVar27) {
      local_res20 = (longlong)(int)uVar27;
      lVar25 = local_res20 << 4;
      do {
        local_b8 = lVar25;
        if (9 < iVar24) break;
        uVar13 = 0;
        if ((int)uVar27 < *piVar21) {
          uVar13 = ~uVar27 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar30 = (((TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *)(piVar21 + -2))->
                  AllocatorInstance).Data + lVar25;
        if ((*(longlong *)pFVar30 == 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("IsValidRef(PoolEntry.Buffer)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                                ,0x48,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((uint)GD3DUniformPoolRecycleDepth < GFrameNumberRenderThread - *(int *)(pFVar30 + 0xc))
        {
          FVar17 = StatPtr_STAT_D3D11NumFreeUniformBuffers;
          if (StatPtr_STAT_D3D11NumFreeUniformBuffers ==
              (FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers>)0x0) {
            pFVar15 = FName::FName(&local_60,"STAT_D3D11NumFreeUniformBuffers");
            FVar17 = (FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_D3D11NumFreeUniformBuffers,*pFVar15,
                                L"Uniform buffer pool num free","STATGROUP_D3D11RHI",
                                "STATCAT_Advanced",L"D3D11RHI",true,false,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar5 = *(FName *)FVar17;
          FVar23 = FVar5.ComparisonIndex.Value;
          uVar13 = FVar5.Number;
          local_c8 = FVar23.Value;
          uStack_c4 = uVar13;
          if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar18 == (FThreadStats *)0x0) {
              pFVar19 = FThreadStatsPool::Get();
              pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
            }
            local_88.NameAndInfo.Number = uVar13 & 0xffffbfff | 0xb000;
            local_88.StatData.Pad[0] = '\x01';
            local_88.StatData.Pad[1] = '\0';
            local_88.StatData.Pad[2] = '\0';
            local_88.StatData.Pad[3] = '\0';
            local_88.StatData.Pad[4] = '\0';
            local_88.StatData.Pad[5] = '\0';
            local_88.StatData.Pad[6] = '\0';
            local_88.StatData.Pad[7] = '\0';
            local_98 = FVar5;
            local_88.NameAndInfo.Index.Value = FVar23.Value;
            FThreadStats::AddStatMessage(pFVar18,&local_88);
            FStatsTrace::Add(&local_98,-1);
            if (pFVar18->ScopeCount == 0) {
              FThreadStats::Flush(pFVar18,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar18,false,false);
            }
          }
          auVar29[4] = '\0';
          auVar29[5] = '\0';
          auVar29[6] = '\0';
          auVar29[7] = '\0';
          auVar29._0_4_ = *(uint *)(pFVar30 + 8);
          if (auVar29 != (uchar  [8])0x0) {
            FVar20 = StatPtr_STAT_D3D11FreeUniformBufferMemory;
            if (StatPtr_STAT_D3D11FreeUniformBufferMemory ==
                (FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory>)0x0) {
              pFVar15 = FName::FName(local_58,"STAT_D3D11FreeUniformBufferMemory");
              FVar20 = (FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_D3D11FreeUniformBufferMemory,*pFVar15,
                                  L"Uniform buffer pool memory","STATGROUP_D3D11RHI",
                                  "STATCAT_Advanced",L"D3D11RHI",true,false,ST_int64,false,false,
                                  MCR_Physical);
            }
            FVar5 = *(FName *)FVar20;
            FVar23 = FVar5.ComparisonIndex.Value;
            uVar13 = FVar5.Number;
            local_c0 = FVar23.Value;
            uStack_bc = uVar13;
            if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar18 == (FThreadStats *)0x0) {
                pFVar19 = FThreadStatsPool::Get();
                pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
              }
              local_78.NameAndInfo.Number = uVar13 & 0xffffbfff | 0xb000;
              local_90 = FVar5;
              local_78.StatData.Pad = auVar29;
              local_78.NameAndInfo.Index.Value = FVar23.Value;
              FThreadStats::AddStatMessage(pFVar18,&local_78);
              FStatsTrace::Add(&local_90,-(longlong)auVar29);
              if (pFVar18->ScopeCount == 0) {
                FThreadStats::Flush(pFVar18,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar18,false,false);
              }
            }
          }
          iVar24 = iVar4 + 1;
          D3D11BufferStats::UpdateUniformBufferStats
                    (*(ID3D11Buffer **)pFVar30,(ulonglong)*(uint *)(pFVar30 + 8),false);
          plVar6 = *(longlong **)pFVar30;
          if (plVar6 != (longlong *)0x0) {
            *(longlong *)pFVar30 = 0;
            (**(code **)(*plVar6 + 0x10))();
          }
          piVar21 = local_b0;
          uVar13 = 0;
          if ((int)uVar27 < *local_b0) {
            uVar13 = ~uVar27 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    ((TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *)(piVar21 + -2),
                     uVar27);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)(piVar21 + -2),*piVar21,piVar21 + 1);
          lVar25 = local_b8;
          iVar4 = iVar24;
        }
        local_res20 = local_res20 + -1;
        lVar25 = lVar25 + -0x10;
        uVar27 = uVar27 - 1;
        local_b8 = lVar25;
      } while (-1 < (int)uVar27);
    }
    local_b0 = piVar21 + 4;
    if (0x155166b57 < (longlong)local_b0) {
      lVar28 = 0x11;
      lVar25 = (longlong)(int)(GFrameNumberRenderThread % 3);
      local_res20 = lVar25 * -0x110 + -0x110;
      piVar21 = &SafeUniformBufferPools[lVar25][0].ArrayNum;
      do {
        iVar4 = *(int *)(local_res20 + (longlong)piVar21);
        uVar22 = (ulonglong)iVar4;
        pTVar1 = (TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *)(piVar21 + -2);
        pTVar2 = (TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *)
                 (piVar21 + lVar25 * -0x44 + -0x46);
        piVar3 = (int *)(local_res20 + (longlong)piVar21);
        if ((pTVar2 == pTVar1) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar24 = *piVar21;
        if (iVar24 != 0) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar24,(ForAnyElementType *)pTVar2,piVar3,
                              piVar21 + lVar25 * -0x44 + -0x43);
          ConstructItems<FPooledUniformBuffer,FPooledUniformBuffer,int>
                    ((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10,
                     (FPooledUniformBuffer *)(pTVar1->AllocatorInstance).Data,iVar24);
        }
        iVar24 = *piVar3;
        if (iVar4 < iVar24) {
          lVar26 = uVar22 << 4;
          do {
            uVar13 = (uint)uVar22;
            uVar27 = 0;
            if ((int)uVar13 < iVar24) {
              uVar27 = ~uVar13 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(longlong *)((pTVar2->AllocatorInstance).Data + lVar26) == 0) &&
               (bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("IsValidRef(UniformBufferPool[BucketIndex][LastNum].Buffer)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                                    ,0x62,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar24 = *piVar3;
            uVar22 = (ulonglong)(uVar13 + 1);
            lVar26 = lVar26 + 0x10;
          } while ((int)(uVar13 + 1) < iVar24);
        }
        pFVar7 = (FPooledUniformBuffer *)(pTVar1->AllocatorInstance).Data;
        if (piVar21[1] < 0) {
          DestructItems<FPooledUniformBuffer,int>(pFVar7,*piVar21);
          *piVar21 = 0;
          if (piVar21[1] != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)pTVar1,0,piVar21 + 1);
          }
        }
        else {
          DestructItems<FPooledUniformBuffer,int>(pFVar7,*piVar21);
          *piVar21 = 0;
        }
        piVar21 = piVar21 + 4;
        lVar28 = lVar28 + -1;
        if (lVar28 == 0) {
          if (bVar9) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar10) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar11) {
            FThreadStats::AddMessage(local_d8,CycleScopeEnd);
          }
          return;
        }
      } while( true );
    }
  } while( true );
}

// UpdateBufferStats @ 14599d970

void __cdecl D3D11BufferStats::UpdateBufferStats(FD3D11Buffer *param_1,bool param_2)

{
  longlong *plVar1;
  ID3D11Buffer *pIVar2;
  ulonglong uVar3;
  
  pIVar2 = (param_1->Resource).Reference;
  if (pIVar2 != (ID3D11Buffer *)0x0) {
    plVar1 = &param_1->_padding_;
    uVar3 = (ulonglong)(uint)*plVar1;
    if (!param_2) {
      uVar3 = -uVar3;
    }
    UE::RHICore::UpdateGlobalBufferStats((FRHIBufferDesc *)plVar1,uVar3);
    D3D11UpdateBufferStatsCommon(pIVar2,(ulonglong)(uint)*plVar1,param_2);
  }
  return;
}

// UpdateD3D11TextureStats @ 14599d9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UpdateD3D11TextureStats(FD3D11Texture *param_1,bool param_2)

{
  FName FVar1;
  int iVar2;
  ID3D11Texture3D *pIVar3;
  ulong64 uVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_D3D11TexturesAllocated> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FLowLevelMemTracker *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D11TexturesReleased> FVar10;
  undefined1 auStackY_c8 [32];
  FName local_68;
  FStatMessage local_60;
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (*(char *)((longlong)&param_1->_padding_ + 2) == '\x02') {
    pIVar3 = FD3D11Texture::GetD3D11Texture3D(param_1);
  }
  else {
    pIVar3 = (ID3D11Texture3D *)FD3D11Texture::GetD3D11Texture2D(param_1);
  }
  (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,local_50);
  uVar4 = FD3D11Texture::GetMemorySize(param_1);
  UE::RHICore::UpdateGlobalTextureStats
            (param_1->_padding_,*(ETextureDimension *)((longlong)&param_1->_padding_ + 2),uVar4,
             false,param_2);
  if (param_2) {
    if (FThreadStats::bPrimaryEnable != false) {
      FVar6 = StatPtr_STAT_D3D11TexturesAllocated;
      if (StatPtr_STAT_D3D11TexturesAllocated ==
          (FThreadSafeStaticStat<FStat_STAT_D3D11TexturesAllocated>)0x0) {
        pFVar5 = FName::FName(&local_68,"STAT_D3D11TexturesAllocated");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3D11TexturesAllocated>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11TexturesAllocated,*pFVar5
                           ,L"Textures Allocated","STATGROUP_D3D11RHI","STATCAT_Advanced",
                           L"D3D11RHI",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar6;
      local_68 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_60.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_60.StatData.Pad[0] = '\x01';
        local_60.StatData.Pad[1] = '\0';
        local_60.StatData.Pad[2] = '\0';
        local_60.StatData.Pad[3] = '\0';
        local_60.StatData.Pad[4] = '\0';
        local_60.StatData.Pad[5] = '\0';
        local_60.StatData.Pad[6] = '\0';
        local_60.StatData.Pad[7] = '\0';
        local_68 = FVar1;
        local_60.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_60);
        FStatsTrace::Add(&local_68,1);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar9 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar9 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelAlloc
                (pFVar9,Platform,(param_1->Resource).Reference,uVar4,GraphicsPlatform,None,true);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar9 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar9 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (pFVar9,Default,(param_1->Resource).Reference,uVar4,Textures,None,true);
      }
    }
    iVar2 = MemoryTrace_GetActiveTag();
    FMemScope::FMemScope((FMemScope *)&local_68,Textures,iVar2 == 0);
    MemoryTrace_Alloc((ulong64)(param_1->Resource).Reference,uVar4,0x400,1,0);
    FMemScope::~FMemScope((FMemScope *)&local_68);
  }
  else {
    if (FThreadStats::bPrimaryEnable != false) {
      FVar10 = StatPtr_STAT_D3D11TexturesReleased;
      if (StatPtr_STAT_D3D11TexturesReleased ==
          (FThreadSafeStaticStat<FStat_STAT_D3D11TexturesReleased>)0x0) {
        pFVar5 = FName::FName(&local_68,"STAT_D3D11TexturesReleased");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D11TexturesReleased>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11TexturesReleased,*pFVar5
                            ,L"Textures Released","STATGROUP_D3D11RHI","STATCAT_Advanced",
                            L"D3D11RHI",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar10;
      local_68 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_60.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_60.StatData.Pad[0] = '\x01';
        local_60.StatData.Pad[1] = '\0';
        local_60.StatData.Pad[2] = '\0';
        local_60.StatData.Pad[3] = '\0';
        local_60.StatData.Pad[4] = '\0';
        local_60.StatData.Pad[5] = '\0';
        local_60.StatData.Pad[6] = '\0';
        local_60.StatData.Pad[7] = '\0';
        local_68 = FVar1;
        local_60.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_60);
        FStatsTrace::Add(&local_68,1);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar9 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar9 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar9,Platform,(param_1->Resource).Reference,None,true);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar9 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar9 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar9,Default,(param_1->Resource).Reference,None,true);
      }
    }
    MemoryTrace_Free((ulong64)(param_1->Resource).Reference,1,0);
  }
  return;
}

// UpdateUniformBufferContents @ 14599ebb0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UpdateUniformBufferContents
          (ID3D11Device *param_1,ID3D11DeviceContext *param_2,FD3D11UniformBuffer *param_3,
          void *param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar4;
  void *local_18;
  uint local_10;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (param_5 != 0) {
    if ((void *)((longlong)param_4 + 0xfU & 0xfffffffffffffff0) != param_4) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Align(Contents, 16) == Contents",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                         ,0x11d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = (**(code **)((longlong)*param_2 + 0x70))
                      (param_2,(param_3->Resource).Reference,0,4,(ulonglong)uVar4 << 0x20,&local_18)
    ;
    if (iVar3 < 0) {
      VerifyD3D11Result(iVar3,
                        "Context->Map(UniformBuffer->Resource.GetReference(), 0, D3D11_MAP_WRITE_DISCARD, 0, &MappedSubresource)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                        ,0x121,param_1);
    }
    if (local_10 < param_5) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("MappedSubresource.RowPitch >= ConstantBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                         ,0x122,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    memcpy(local_18,param_4,(ulonglong)param_5);
    (**(code **)((longlong)*param_2 + 0x78))(param_2,(param_3->Resource).Reference,0);
  }
  return;
}

// UpdateUniformBufferStats @ 14599ecd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
D3D11BufferStats::UpdateUniformBufferStats(ID3D11Buffer *param_1,long64 param_2,bool param_3)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory> FVar3;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uchar auVar4 [8];
  FName local_res20;
  FStatMessage local_38;
  
  auVar4 = (uchar  [8])param_2;
  if (!param_3) {
    auVar4 = (uchar  [8])-param_2;
  }
  if (auVar4 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_UniformBufferMemory;
    if (StatPtr_STAT_UniformBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res20,"STAT_UniformBufferMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniformBufferMemory,*pFVar2,
                         L"Uniform Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
                         false,ST_int64,false,false,MCR_GPU);
    }
    FVar1 = *(FName *)FVar3;
    local_res20 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res20 = FVar1;
      local_38.StatData.Pad = auVar4;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_38);
      FStatsTrace::Add(&local_res20,(long64)auVar4);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  LOCK();
  GRHIGlobals.UniformBufferMemorySize = GRHIGlobals.UniformBufferMemorySize + (longlong)auVar4;
  UNLOCK();
  D3D11UpdateBufferStatsCommon(param_1,param_2,param_3);
  return;
}

// ValidateScissorRect @ 14599f620

void __cdecl ValidateScissorRect(D3D11_VIEWPORT *param_1,tagRECT *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->left < (int)param_1->TopLeftX) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6053408936562786534>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                       ,0xe6,"ScissorRect.left >= (LONG)Viewport.TopLeftX");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->top < (int)param_1->TopLeftY) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6053408936562786535>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                       ,0xe7,"ScissorRect.top >= (LONG)Viewport.TopLeftY");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)param_1->Width + (int)param_1->TopLeftX < param_2->right) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6053408936562786536>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                       ,0xe8,"ScissorRect.right <= (LONG)Viewport.TopLeftX + (LONG)Viewport.Width");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)param_1->Height + (int)param_1->TopLeftY < param_2->bottom) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6053408936562786537>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                       ,0xe9,"ScissorRect.bottom <= (LONG)Viewport.TopLeftY + (LONG)Viewport.Height"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->right < param_2->left) || (param_2->bottom < param_2->top)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6053408936562786538>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                       ,0xea,
                       "ScissorRect.left <= ScissorRect.right && ScissorRect.top <= ScissorRect.bottom"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// VerifyComRefCount @ 14599f770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyComRefCount(IUnknown *param_1,int param_2,wchar_t *param_3,wchar_t *param_4,int param_5)

{
  int iVar1;
  
  if (param_1 != (IUnknown *)0x0) {
    (**(code **)((longlong)*param_1 + 8))();
    iVar1 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
    if ((iVar1 != param_2) && (1 < (byte)LogD3D11RHI._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
  }
  return;
}

// VerifyD3D11CreateTextureResult @ 14599f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyD3D11CreateTextureResult
          (int param_1,int param_2,char *param_3,char *param_4,uint param_5,uint param_6,
          uint param_7,uint param_8,uchar param_9,uint param_10,uint param_11,D3D11_USAGE param_12,
          uint param_13,uint param_14,uint param_15,uint param_16,void *param_17,uint param_18,
          uint param_19,ID3D11Device *param_20,wchar_t *param_21)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  FScopedDebugInfo *pFVar4;
  undefined8 *puVar5;
  size_t sVar6;
  int iVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  undefined1 auStack_628 [32];
  wchar_t *local_608;
  uint local_600;
  uint local_5f8;
  uint local_5f0;
  uint local_5e8;
  int local_5e0;
  wchar_t *local_5d8;
  uint local_5d0;
  uint local_5c8;
  FScriptContainerElement *local_5c0;
  D3D11_USAGE local_5b8;
  uint local_5b0;
  uint local_5a8;
  uint local_5a0;
  uint local_598;
  void *local_590;
  uint local_588;
  uint local_580;
  wchar_t *local_578;
  wchar_t *local_570;
  uint local_568;
  int local_564;
  char *local_560;
  int local_558;
  FString local_550;
  FString local_540;
  char *local_530;
  void *local_528;
  wchar_t *local_520;
  FString local_518;
  wchar_t *local_508;
  wchar_t *local_500 [2];
  ID3D11Device *local_4f0;
  undefined8 local_4e8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_628;
  local_528 = param_17;
  local_4f0 = param_20;
  local_508 = param_21;
  local_564 = param_2;
  local_560 = param_3;
  local_558 = param_1;
  local_530 = param_4;
  if ((-1 < param_1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(D3DResult)) < 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                         ,0x10d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GetD3D11ErrorString(&local_518,param_1,(ID3D11Device *)0x0);
  local_568 = (uint)param_9;
  local_520 = UE::DXGIUtilities::GetFormatString((uint)param_9);
  pwVar8 = (wchar_t *)0x0;
  iVar7 = 0;
  pFVar4 = FScopedDebugInfo::GetDebugInfoStack();
  if (pFVar4 != (FScopedDebugInfo *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 8))(pFVar4,local_500);
    iVar7 = 0;
    if (local_4e8 != puVar5) {
      pwVar8 = (wchar_t *)*puVar5;
      *puVar5 = 0;
      iVar7 = *(int *)(puVar5 + 1);
      puVar5[1] = 0;
    }
    if (local_500[0] != (wchar_t *)0x0) {
      FMemory::Free(local_500[0]);
    }
  }
  if (1 < (byte)LogD3D11RHI._0_1_) {
    local_500[0] = L"";
    if (iVar7 != 0) {
      local_500[0] = pwVar8;
    }
    FString::FString(&local_550,L"");
    if ((param_11 & 0x20) != 0) {
      FString::AppendChars(&local_550,L"D3D11_BIND_RENDER_TARGET ",0x19);
    }
    if ((param_11 & 0x40) != 0) {
      FString::AppendChars(&local_550,L"D3D11_BIND_DEPTH_STENCIL ",0x19);
    }
    if ((param_11 & 8) != 0) {
      FString::AppendChars(&local_550,L"D3D11_BIND_SHADER_RESOURCE ",0x1b);
    }
    if ((char)param_11 < '\0') {
      FString::AppendChars(&local_550,L"D3D11_BIND_UNORDERED_ACCESS ",0x1c);
    }
    local_3b8._padding_ = 0;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_550.Data.ArrayNum != 0) {
      FVar9.Data = local_550.Data.AllocatorInstance.Data;
    }
    if (param_4 == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar6 = strlen(param_4);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,param_4,(int)sVar6,Yes);
    }
    pwVar2 = local_3b8.Ptr;
    local_4d8._padding_ = 0;
    if (local_560 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar6 = strlen(local_560);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,local_560,(int)sVar6,Yes)
      ;
    }
    local_578 = L"";
    if (local_508 != (wchar_t *)0x0) {
      local_578 = local_508;
    }
    local_570 = local_500[0];
    local_580 = param_19;
    local_588 = param_18;
    local_590 = local_528;
    local_598 = param_16;
    local_5a0 = param_15;
    local_5a8 = param_14;
    local_5b0 = param_13;
    local_5b8 = param_12;
    local_5c8 = param_10;
    local_5d0 = local_568;
    local_5d8 = local_520;
    local_5e0 = local_564;
    local_5e8 = param_8;
    local_5f0 = param_7;
    local_5f8 = param_6;
    local_600 = param_5;
    local_608 = pwVar2;
    local_5c0 = FVar9.Data;
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
    }
    param_3 = local_560;
    param_4 = local_530;
    if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_550.Data.AllocatorInstance.Data);
      param_3 = local_560;
      param_4 = local_530;
    }
  }
  TerminateOnDeviceRemoved(local_558,local_4f0);
  TerminateOnOutOfMemory(local_558,true);
  FString::FString(&local_540,L"");
  if ((param_11 & 0x20) != 0) {
    FString::AppendChars(&local_540,L"D3D11_BIND_RENDER_TARGET ",0x19);
  }
  if ((param_11 & 0x40) != 0) {
    FString::AppendChars(&local_540,L"D3D11_BIND_DEPTH_STENCIL ",0x19);
  }
  if ((param_11 & 8) != 0) {
    FString::AppendChars(&local_540,L"D3D11_BIND_SHADER_RESOURCE ",0x1b);
  }
  if ((char)param_11 < '\0') {
    FString::AppendChars(&local_540,L"D3D11_BIND_UNORDERED_ACCESS ",0x1c);
  }
  local_178._padding_ = 0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_540.Data.ArrayNum != 0) {
    FVar9.Data = local_540.Data.AllocatorInstance.Data;
  }
  if (param_4 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar6 = strlen(param_4);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_4,(int)sVar6,Yes);
  }
  pwVar2 = local_178.Ptr;
  local_298._padding_ = 0;
  if (param_3 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar6 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_3,(int)sVar6,Yes);
  }
  local_580 = param_19;
  local_588 = param_18;
  local_590 = local_528;
  local_598 = param_16;
  local_5a0 = param_15;
  local_5a8 = param_14;
  local_5b0 = param_13;
  local_5b8 = param_12;
  local_5c8 = param_10;
  local_5d0 = local_568;
  local_5d8 = local_520;
  local_5e0 = local_564;
  local_5e8 = param_8;
  local_5f0 = param_7;
  local_5f8 = param_6;
  local_600 = param_5;
  local_608 = pwVar2;
  local_5c0 = FVar9.Data;
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data.AllocatorInstance.Data);
  }
  if (pwVar8 != (wchar_t *)0x0) {
    FMemory::Free(pwVar8);
  }
  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D11CreateViewResult @ 14599fdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyD3D11CreateViewResult
          (int param_1,char *param_2,char *param_3,uint param_4,ID3D11Device *param_5,
          FString *param_6,D3D11_UNORDERED_ACCESS_VIEW_DESC *param_7)

{
  DXGI_FORMAT_conflict DVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  undefined1 auStack_588 [32];
  FScriptContainerElement *local_568;
  wchar_t *local_560;
  DXGI_FORMAT_conflict local_558;
  undefined4 local_550;
  undefined4 local_548;
  wchar_t *local_540;
  uint local_538;
  int local_528;
  uint local_524;
  ID3D11Device *local_520;
  undefined8 local_518;
  undefined8 local_510;
  DXGI_FORMAT_conflict local_508;
  FScriptContainerElement *local_500;
  D3D11_UNORDERED_ACCESS_VIEW_DESC *local_4f8;
  wchar_t *local_4f0;
  FString local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_588;
  local_4f8 = param_7;
  local_520 = param_5;
  local_528 = param_1;
  local_524 = param_4;
  if ((-1 < param_1) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(D3DResult)) < 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                         ,0x184,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_510 = (ulonglong)param_7->Format;
  (**(code **)((longlong)*local_520 + 0x108))(local_520,2,&local_510,8);
  local_518 = (ulonglong)param_7->Format;
  (**(code **)((longlong)*local_520 + 0x108))(local_520,3,&local_518,8);
  local_4f0 = UE::DXGIUtilities::GetFormatString(param_7->Format);
  GetD3D11ErrorString(&local_4e8,param_1,local_520);
  if (1 < (byte)LogD3D11RHI._0_1_) {
    local_3b8._padding_ = 0;
    if (param_3 == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar5 = strlen(param_3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,param_3,(int)sVar5,Yes);
    }
    pwVar3 = local_3b8.Ptr;
    local_508 = param_7->Format;
    if ((param_6->Data).ArrayNum == 0) {
      local_500 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_500 = (param_6->Data).AllocatorInstance.Data;
    }
    local_4d8._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar5 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar5,Yes);
    }
    local_538 = local_524;
    local_548 = local_518._4_4_;
    local_550 = local_510._4_4_;
    local_558 = local_508;
    local_560 = local_4f0;
    local_568 = local_500;
    local_540 = pwVar3;
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    param_7 = local_4f8;
    param_1 = local_528;
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
      param_7 = local_4f8;
      param_1 = local_528;
    }
  }
  TerminateOnDeviceRemoved(param_1,local_520);
  TerminateOnOutOfMemory(param_1,false);
  local_178._padding_ = 0;
  if (param_3 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar5 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_3,(int)sVar5,Yes);
  }
  pwVar3 = local_178.Ptr;
  DVar1 = param_7->Format;
  if ((param_6->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_6->Data).AllocatorInstance.Data;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar5 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar5,Yes);
  }
  local_538 = local_524;
  local_548 = local_518._4_4_;
  local_550 = local_510._4_4_;
  local_560 = local_4f0;
  local_568 = (FScriptContainerElement *)pwVar6;
  local_558 = DVar1;
  local_540 = pwVar3;
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D11CreateViewResult @ 1459a0160

void __cdecl
VerifyD3D11CreateViewResult
          (T_HRESULT param_1,char *param_2,char *param_3,uint param_4,ID3D11Device *param_5,
          FRHIBuffer *param_6,D3D11_UNORDERED_ACCESS_VIEW_DESC *param_7)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  FString::FString(&local_18,L"<Unknown>");
  if (param_6 != (FRHIBuffer *)0x0) {
    iVar1 = (int)param_6->_padding_;
    pwVar3 = (wchar_t *)0x0;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      if (iVar1 == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)param_6->_padding_;
      }
    }
    FString::operator=(&local_18,pwVar3);
  }
  VerifyD3D11CreateViewResult(param_1,param_2,param_3,param_4,param_5,&local_18,param_7);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D11CreateViewResult @ 1459a0230

void __cdecl
VerifyD3D11CreateViewResult
          (T_HRESULT param_1,char *param_2,char *param_3,uint param_4,ID3D11Device *param_5,
          FRHITexture *param_6,D3D11_UNORDERED_ACCESS_VIEW_DESC *param_7)

{
  FString *pFVar1;
  bool bVar2;
  FString local_50;
  FString local_40;
  FString local_30;
  
  bVar2 = param_6 == (FRHITexture *)0x0;
  if (bVar2) {
    pFVar1 = FString::FString(&local_40,L"<Unknown>");
  }
  else {
    param_6 = (FRHITexture *)param_6->_padding_;
    pFVar1 = FName::ToString((FName *)&param_6,&local_30);
  }
  local_50.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  local_50.Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  VerifyD3D11CreateViewResult(param_1,param_2,param_3,param_4,param_5,&local_50,param_7);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D11ResizeViewportResult @ 1459a0360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyD3D11ResizeViewportResult
          (int param_1,char *param_2,char *param_3,uint param_4,FD3D11ResizeViewportState *param_5,
          FD3D11ResizeViewportState *param_6,ID3D11Device *param_7)

{
  bool bVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  size_t sVar5;
  undefined1 auStack_5b8 [32];
  wchar_t *local_598;
  uint local_590;
  uint local_588;
  uint local_580;
  uint local_578;
  wchar_t *local_570;
  DXGI_FORMAT_conflict local_568;
  uint local_560;
  uint local_558;
  uint local_550;
  wchar_t *local_548;
  DXGI_FORMAT_conflict local_540;
  uint local_538;
  uint local_534;
  DXGI_FORMAT_conflict local_530;
  uint local_52c;
  uint local_528;
  DXGI_FORMAT_conflict local_524;
  uint local_520;
  DXGI_FORMAT_conflict local_51c;
  uint local_518;
  wchar_t *local_510;
  wchar_t *local_508;
  wchar_t *local_500;
  FString local_4f8;
  FScriptContainerElement *local_4e8;
  ID3D11Device *local_4e0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  local_4e0 = param_7;
  local_520 = param_4;
  if ((-1 < param_1) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(D3DResult)) < 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                         ,0x156,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GetD3D11ErrorString(&local_4f8,param_1,(ID3D11Device *)0x0);
  local_500 = UE::DXGIUtilities::GetFormatString(param_5->Format);
  local_508 = UE::DXGIUtilities::GetFormatString(param_6->Format);
  if (1 < (byte)LogD3D11RHI._0_1_) {
    local_51c = param_6->Format;
    local_3b8._padding_ = 0;
    local_518 = (uint)(param_6->bIsFullscreen != false);
    local_538 = param_6->SizeY;
    local_534 = param_6->SizeX;
    local_530 = param_5->Format;
    local_52c = (uint)(param_5->bIsFullscreen != false);
    local_528 = param_5->SizeY;
    local_524 = param_5->SizeX;
    if (param_3 == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar5 = strlen(param_3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,param_3,(int)sVar5,Yes);
    }
    local_4d8._padding_ = 0;
    local_4e8 = (FScriptContainerElement *)L"";
    if (local_4f8.Data.ArrayNum != 0) {
      local_4e8 = local_4f8.Data.AllocatorInstance.Data;
    }
    local_510 = local_3b8.Ptr;
    if (param_2 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar5 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar5,Yes);
    }
    local_540 = local_51c;
    local_548 = local_508;
    local_550 = local_518;
    local_558 = local_538;
    local_560 = local_534;
    local_568 = local_530;
    local_570 = local_500;
    local_578 = local_52c;
    local_580 = local_528;
    local_588 = local_524;
    local_590 = local_520;
    local_598 = local_510;
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
    }
  }
  TerminateOnDeviceRemoved(param_1,local_4e0);
  TerminateOnOutOfMemory(param_1,true);
  bVar4 = param_6->bIsFullscreen;
  local_524 = param_6->Format;
  local_528 = param_6->SizeY;
  bVar1 = param_5->bIsFullscreen;
  local_52c = param_6->SizeX;
  local_530 = param_5->Format;
  local_534 = param_5->SizeY;
  local_538 = param_5->SizeX;
  local_178._padding_ = 0;
  if (param_3 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar5 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_3,(int)sVar5,Yes);
  }
  pwVar3 = local_178.Ptr;
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar5 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar5,Yes);
  }
  local_540 = local_524;
  local_548 = local_508;
  local_550 = (uint)(bVar4 != false);
  local_558 = local_528;
  local_560 = local_52c;
  local_568 = local_530;
  local_570 = local_500;
  local_578 = (uint)(bVar1 != false);
  local_580 = local_534;
  local_588 = local_538;
  local_590 = local_520;
  local_598 = pwVar3;
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D11Result @ 1459a0720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyD3D11Result(int param_1,char *param_2,char *param_3,uint param_4,ID3D11Device *param_5)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  size_t sVar4;
  undefined1 auStack_528 [32];
  wchar_t *local_508;
  uint local_500;
  uint local_4f8;
  FString local_4f0;
  ID3D11Device *local_4e0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_528;
  local_4e0 = param_5;
  local_4f8 = param_4;
  if ((-1 < param_1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(D3DResult)) < 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                         ,0xf0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GetD3D11ErrorString(&local_4f0,param_1,param_5);
  if (1 < (byte)LogD3D11RHI._0_1_) {
    local_3b8._padding_ = 0;
    if (param_3 == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar4 = strlen(param_3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,param_3,(int)sVar4,Yes);
    }
    pwVar2 = local_3b8.Ptr;
    local_4d8._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar4 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar4,Yes);
    }
    local_500 = local_4f8;
    local_508 = pwVar2;
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    param_4 = local_4f8;
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
      param_4 = local_4f8;
    }
  }
  TerminateOnDeviceRemoved(param_1,local_4e0);
  TerminateOnOutOfMemory(param_1,false);
  local_178._padding_ = 0;
  if (param_3 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar4 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_3,(int)sVar4,Yes);
  }
  pwVar2 = local_178.Ptr;
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar4 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar4,Yes);
  }
  local_508 = pwVar2;
  local_500 = param_4;
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D11ResultNoExit @ 1459a09f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyD3D11ResultNoExit(int param_1,char *param_2,char *param_3,uint param_4,ID3D11Device *param_5)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  size_t sVar4;
  undefined1 auStack_2c8 [32];
  wchar_t *local_2a8;
  uint local_2a0;
  FString local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if ((-1 < param_1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(D3DResult)) < 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                         ,0xe7,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GetD3D11ErrorString(&local_298,param_1,param_5);
  if (1 < (byte)LogD3D11RHI._0_1_) {
    local_168._padding_ = 0;
    if (param_3 == (char *)0x0) {
      local_168.Ptr = (wchar_t *)0x0;
      local_168.StringLength = 0;
    }
    else {
      sVar4 = strlen(param_3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,param_3,(int)sVar4,Yes);
    }
    pwVar2 = local_168.Ptr;
    local_288._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_288.Ptr = (wchar_t *)0x0;
      local_288.StringLength = 0;
    }
    else {
      sVar4 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_2,(int)sVar4,Yes);
    }
    local_2a8 = pwVar2;
    local_2a0 = param_4;
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D11ShaderResult @ 1459a0b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyD3D11ShaderResult
          (FRHIShader *param_1,int param_2,char *param_3,char *param_4,uint param_5,
          ID3D11Device *param_6)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  size_t sVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_548 [32];
  FScriptContainerElement *local_528;
  wchar_t *local_520;
  uint local_518;
  FString local_508;
  FScriptContainerElement *local_4f8;
  ID3D11Device *local_4f0;
  FRHIShader *local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_548;
  local_4f0 = param_6;
  local_4e8 = param_1;
  if ((-1 < param_2) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(((HRESULT)(D3DResult)) < 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                         ,0xfe,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GetD3D11ErrorString(&local_508,param_2,param_6);
  if (1 < (byte)LogD3D11RHI._0_1_) {
    local_3b8._padding_ = 0;
    if (param_4 == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar4 = strlen(param_4);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,param_4,(int)sVar4,Yes);
    }
    pwVar2 = local_3b8.Ptr;
    local_4f8 = (FScriptContainerElement *)L"";
    if (local_508.Data.ArrayNum != 0) {
      local_4f8 = local_508.Data.AllocatorInstance.Data;
    }
    local_4d8._padding_ = 0;
    if (param_3 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar4 = strlen(param_3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_3,(int)sVar4,Yes);
    }
    local_518 = param_5;
    local_528 = local_4f8;
    local_520 = pwVar2;
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
    }
  }
  TerminateOnDeviceRemoved(param_2,local_4f0);
  TerminateOnOutOfMemory(param_2,false);
  local_178._padding_ = 0;
  if (param_4 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar4 = strlen(param_4);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_4,(int)sVar4,Yes);
  }
  pwVar2 = local_178.Ptr;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_508.Data.ArrayNum != 0) {
    FVar5.Data = local_508.Data.AllocatorInstance.Data;
  }
  local_298._padding_ = 0;
  if (param_3 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar4 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_3,(int)sVar4,Yes);
  }
  local_518 = param_5;
  local_528 = FVar5.Data;
  local_520 = pwVar2;
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  return;
}

// IMPLEMENT_MODULE_D3D11RHI @ 1459a13f0

void __cdecl IMPLEMENT_MODULE_D3D11RHI(void)

{
  return;
}

// filt$0 @ 15025f630

void `FD3D11DynamicRHI::CleanupD3DDevice'::__l1::filt_0(_EXCEPTION_POINTERS *param_1)

{
  ReportDiedDuringDeviceShutdown(param_1);
  return;
}

// filt$1 @ 15025f646

void `FD3D11DynamicRHI::CleanupD3DDevice'::__l1::filt_1(_EXCEPTION_POINTERS *param_1)

{
  ReportDiedDuringDeviceShutdown(param_1);
  return;
}

// filt$2 @ 15025f65c

void `FD3D11DynamicRHI::CleanupD3DDevice'::__l1::filt_2(_EXCEPTION_POINTERS *param_1)

{
  ReportDiedDuringDeviceShutdown(param_1);
  return;
}

// filt$0 @ 15025f680

undefined1 `SafeCreateDXGIFactory'::__l1::filt_0(undefined8 *param_1,longlong param_2)

{
  if ((*(int *)*param_1 == -0x3f92ff82) || (*(int *)*param_1 == -0x3f92ff81)) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return *(undefined1 *)(param_2 + 0x20);
}

// fin$0 @ 15025f6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void `SafeCreateTexture2D'::__l1::fin_0(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0xb0) != '\0') && (1 < (byte)LogD3D11RHI._0_1_)) {
    UE::DXGIUtilities::GetFormatString
              (*(DXGI_FORMAT_conflict *)(*(longlong *)(param_2 + 0xf0) + 0x10));
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  }
  return;
}

// fin$0 @ 15025f750

/* WARNING: Enum "Type": Some values do not have unique names */

void `SafeCreateTexture3D'::__l1::fin_0(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0xb0) != '\0') && (1 < (byte)LogD3D11RHI._0_1_)) {
    UE::DXGIUtilities::GetFormatString
              (*(DXGI_FORMAT_conflict *)(*(longlong *)(param_2 + 0xf0) + 0x10));
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  }
  return;
}

// filt$0 @ 15025f7e0

undefined1 `SafeTestD3D11CreateDevice'::__l1::filt_0(undefined8 *param_1,longlong param_2)

{
  if ((*(int *)*param_1 == -0x3f92ff82) || (*(int *)*param_1 == -0x3f92ff81)) {
    *(undefined1 *)(param_2 + 0x50) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return *(undefined1 *)(param_2 + 0x50);
}

// ActiveSyncs'' @ 1503c7450

void __cdecl `dynamic_atexit_destructor_for_'FD3D11GPUFence::ActiveSyncs__(void)

{
  undefined1 *puVar1;
  int iVar2;
  ID3D11Query *pIVar3;
  FBaseGraphTask *pFVar4;
  TNode *pTVar5;
  
  while (pTVar5 = FD3D11GPUFence::ActiveSyncs.Tail, pTVar5 != (TNode *)0x0) {
    FD3D11GPUFence::ActiveSyncs.Tail = pTVar5->NextNode;
    if (pTVar5 != (TNode *)0x0) {
      pIVar3 = (pTVar5->Item).Query.Reference;
      if (pIVar3 != (ID3D11Query *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      pFVar4 = (pTVar5->Item).Event.Reference;
      if (pFVar4 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar4->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        }
      }
      ::operator_delete(pTVar5,0x18);
    }
  }
  FD3D11GPUFence::ActiveSyncs.Tail = pTVar5;
  return;
}

// StaticResource'' @ 1503c74e0

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

// StaticResource'' @ 1503c7560

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__00_06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
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
             &TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503c75e0

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

// StaticResource'' @ 1503c7660

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

// `dynamic_atexit_destructor_for_'CVarAMDDisableAsyncTextureCreation'' @ 1503c76e0

void __cdecl _dynamic_atexit_destructor_for__CVarAMDDisableAsyncTextureCreation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAMDDisableAsyncTextureCreation)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAMDUseMultiThreadedDevice'' @ 1503c7700

void __cdecl _dynamic_atexit_destructor_for__CVarAMDUseMultiThreadedDevice__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAMDUseMultiThreadedDevice);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowUAVFlushExt'' @ 1503c7720

void __cdecl _dynamic_atexit_destructor_for__CVarAllowUAVFlushExt__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowUAVFlushExt);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D11AbsoluteTimeQueryTimeoutValue'' @ 1503c7740

void __cdecl _dynamic_atexit_destructor_for__CVarD3D11AbsoluteTimeQueryTimeoutValue__(void)

{
  CVarD3D11AbsoluteTimeQueryTimeoutValue._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D11AbsoluteTimeQueryTimeoutValue);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D11QueryTimeoutValue'' @ 1503c7760

void __cdecl _dynamic_atexit_destructor_for__CVarD3D11QueryTimeoutValue__(void)

{
  CVarD3D11QueryTimeoutValue._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D11QueryTimeoutValue);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D11UseD24'' @ 1503c7780

void __cdecl _dynamic_atexit_destructor_for__CVarD3D11UseD24__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D11UseD24);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D11ZeroBufferSizeInMB'' @ 1503c77a0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D11ZeroBufferSizeInMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D11ZeroBufferSizeInMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3DUniformPoolRecycleDepth'' @ 1503c77c0

void __cdecl _dynamic_atexit_destructor_for__CVarD3DUniformPoolRecycleDepth__(void)

{
  CVarD3DUniformPoolRecycleDepth._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3DUniformPoolRecycleDepth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3DUseAllowTearing'' @ 1503c77e0

void __cdecl _dynamic_atexit_destructor_for__CVarD3DUseAllowTearing__(void)

{
  CVarD3DUseAllowTearing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3DUseAllowTearing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDX11ReduceRTVRebinds'' @ 1503c7800

void __cdecl _dynamic_atexit_destructor_for__CVarDX11ReduceRTVRebinds__(void)

{
  CVarDX11ReduceRTVRebinds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDX11ReduceRTVRebinds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogDx11RTRebinds'' @ 1503c7820

void __cdecl _dynamic_atexit_destructor_for__CVarLogDx11RTRebinds__(void)

{
  CVarLogDx11RTRebinds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogDx11RTRebinds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxFeatureSetLimit'' @ 1503c7840

void __cdecl RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarMaxFeatureSetLimit__(void)

{
  CVarMaxFeatureSetLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxFeatureSetLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSyncCounter'' @ 1503c7860

void __cdecl RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarMaxSyncCounter__(void)

{
  CVarMaxSyncCounter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSyncCounter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaximumFrameLatency'' @ 1503c7880

void __cdecl RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarMaximumFrameLatency__(void)

{
  CVarMaximumFrameLatency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaximumFrameLatency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNVidiaTimestampWorkaround'' @ 1503c78a0

void __cdecl _dynamic_atexit_destructor_for__CVarNVidiaTimestampWorkaround__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNVidiaTimestampWorkaround);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRefreshPercentageBeforePresent'' @ 1503c78c0

void __cdecl
RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarRefreshPercentageBeforePresent__(void)

{
  CVarRefreshPercentageBeforePresent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRefreshPercentageBeforePresent)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSyncRefreshThreshold'' @ 1503c78e0

void __cdecl RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarSyncRefreshThreshold__(void)

{
  CVarSyncRefreshThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSyncRefreshThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSyncThreshold'' @ 1503c7900

void __cdecl RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarSyncThreshold__(void)

{
  CVarSyncThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSyncThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSyncWithDWM'' @ 1503c7920

void __cdecl RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarSyncWithDWM__(void)

{
  CVarSyncWithDWM._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSyncWithDWM);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTargetRefreshRate'' @ 1503c7940

void __cdecl RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarTargetRefreshRate__(void)

{
  CVarTargetRefreshRate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTargetRefreshRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUnbindResourcesBetweenDrawsInDX11'' @ 1503c7960

void __cdecl _dynamic_atexit_destructor_for__CVarUnbindResourcesBetweenDrawsInDX11__(void)

{
  CVarUnbindResourcesBetweenDrawsInDX11._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUnbindResourcesBetweenDrawsInDX11);
  return;
}

// `dynamic_atexit_destructor_for_'FD3DDumpLiveObjectsCommand'' @ 1503c7980

void __cdecl _dynamic_atexit_destructor_for__FD3DDumpLiveObjectsCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FD3DDumpLiveObjectsCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarUseSharedKeyedMutex'' @ 1503c79a0

void __cdecl _dynamic_atexit_destructor_for__GCVarUseSharedKeyedMutex__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarUseSharedKeyedMutex);
  return;
}

// `dynamic_atexit_destructor_for_'GD3D11DebugCvar'' @ 1503c79c0

void __cdecl _dynamic_atexit_destructor_for__GD3D11DebugCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GD3D11DebugCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GSamplerStateCache'' @ 1503c79e0

void __cdecl _dynamic_atexit_destructor_for__GSamplerStateCache__(void)

{
  GSamplerStateCache._72_4_ = 0;
  if (GSamplerStateCache._64_8_ != 0) {
    FMemory::Free((void *)GSamplerStateCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ID3D11SamplerState_*,FD3D11SamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GSamplerStateCache);
  return;
}

// `dynamic_atexit_destructor_for_'GSamplerStateCacheCS'' @ 1503c7a20

void __cdecl _dynamic_atexit_destructor_for__GSamplerStateCacheCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c7a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GSamplerStateCacheCS);
  return;
}

// `dynamic_atexit_destructor_for_'GVertexDeclarationCache'' @ 1503c7a40

void __cdecl _dynamic_atexit_destructor_for__GVertexDeclarationCache__(void)

{
  GVertexDeclarationCache._72_4_ = 0;
  if (GVertexDeclarationCache._64_8_ != 0) {
    FMemory::Free((void *)GVertexDeclarationCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GVertexDeclarationCache);
  return;
}

// `dynamic_atexit_destructor_for_'LogD3D11RHI'' @ 1503c7a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogD3D11RHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogD3D11RHI);
  return;
}

// `dynamic_atexit_destructor_for_'SafeUniformBufferPools'' @ 1503c7aa0

void __cdecl _dynamic_atexit_destructor_for__SafeUniformBufferPools__(void)

{
  TConsoleVariableData<int> **ppTVar1;
  TConsoleVariableData<int> **ppTVar2;
  longlong lVar3;
  
  ppTVar2 = &CVar;
  lVar3 = 0x33;
  do {
    ppTVar1 = ppTVar2 + -1;
    ppTVar2 = ppTVar2 + -2;
    lVar3 = lVar3 + -1;
    DestructItems<FPooledUniformBuffer,int>((FPooledUniformBuffer *)*ppTVar2,*(int *)ppTVar1);
    if (*ppTVar2 != (TConsoleVariableData<int> *)0x0) {
      FMemory::Free(*ppTVar2);
    }
  } while (lVar3 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'UniformBufferPool'' @ 1503c7b00

void __cdecl _dynamic_atexit_destructor_for__UniformBufferPool__(void)

{
  FScriptContainerElement *pFVar1;
  TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> (*paTVar3) [17];
  longlong lVar4;
  
  paTVar3 = SafeUniformBufferPools;
  lVar4 = 0x11;
  do {
    pTVar2 = (TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *)((longlong)paTVar3 + -0x10)
    ;
    paTVar3 = (TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> (*) [17])
              ((longlong)paTVar3 + -0x10);
    lVar4 = lVar4 + -1;
    DestructItems<FPooledUniformBuffer,int>
              ((FPooledUniformBuffer *)
               (((TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *)paTVar3)->
               AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (((TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *)paTVar3)->
             AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  return;
}

