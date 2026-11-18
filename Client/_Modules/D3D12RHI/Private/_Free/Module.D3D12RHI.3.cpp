// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 266

// StaticResource'' @ 141048b60

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

// StaticResource'' @ 141048c20

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

// StaticResource'' @ 141048db0

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

// StaticResource'' @ 141048f40

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

// `dynamic_initializer_for_'CVarAdjustTexturePoolSizeBasedOnBudget'' @ 141049000

void __cdecl _dynamic_initializer_for__CVarAdjustTexturePoolSizeBasedOnBudget__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAdjustTexturePoolSizeBasedOnBudget,L"D3D12.AdjustTexturePoolSizeBasedOnBudget",
             &GAdjustTexturePoolSizeBasedOnBudget,
             L"Indicates if the RHI should lower the texture pool size when the application is over the memory budget provided by the OS. This can result in lower quality textures (but hopefully improve performance)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAdjustTexturePoolSizeBasedOnBudget__);
  return;
}

// `dynamic_initializer_for_'CVarBindlessOnlineDescriptorHeapBlockSize'' @ 141049050

void __cdecl _dynamic_initializer_for__CVarBindlessOnlineDescriptorHeapBlockSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBindlessOnlineDescriptorHeapBlockSize,
             L"D3D12.BindlessOnlineDescriptorHeapBlockSize",&GBindlessOnlineDescriptorHeapBlockSize,
             L"Block size for sub allocations on the global view descriptor heap.",4);
  atexit(_dynamic_atexit_destructor_for__CVarBindlessOnlineDescriptorHeapBlockSize__);
  return;
}

// `dynamic_initializer_for_'CVarBindlessOnlineDescriptorHeapSize'' @ 1410490a0

void __cdecl _dynamic_initializer_for__CVarBindlessOnlineDescriptorHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBindlessOnlineDescriptorHeapSize,L"D3D12.BindlessOnlineDescriptorHeapSize",
             &GBindlessOnlineDescriptorHeapSize,L"Online descriptor heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarBindlessOnlineDescriptorHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12AllowDiscardResources'' @ 1410490f0

void __cdecl _dynamic_initializer_for__CVarD3D12AllowDiscardResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12AllowDiscardResources,L"d3d12.AllowDiscardResources",
             &GD3D12AllowDiscardResources,
             L"Whether to call DiscardResources after transient aliasing acquire. This is not needed on some platforms if newly acquired resources are cleared before use."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12AllowDiscardResources__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12BatchResourceBarriers'' @ 141049140

void __cdecl _dynamic_initializer_for__CVarD3D12BatchResourceBarriers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12BatchResourceBarriers,L"d3d12.BatchResourceBarriers",
             &GD3D12BatchResourceBarriers,L"Whether to allow batching resource barriers",0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12BindResourceLabels'' @ 141049190

void __cdecl _dynamic_initializer_for__CVarD3D12BindResourceLabels__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12BindResourceLabels,L"d3d12.BindResourceLabels",&GD3D12BindResourceLabels,
             L"Whether to enable binding of debug names to D3D12 resources.",0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12BindResourceLabels__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ReservedResourceHeapSizeMB'' @ 1410491e0

void __cdecl _dynamic_initializer_for__CVarD3D12ReservedResourceHeapSizeMB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D12ReservedResourceHeapSizeMB,L"d3d12.ReservedResourceHeapSizeMB",local_res8,
             L"Size of the backing heaps for reserved resources in megabytes (default 16MB).",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ReservedResourceHeapSizeMB__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12SubmissionMaxExecuteBatchSizeAsync'' @ 141049230

void __cdecl _dynamic_initializer_for__CVarD3D12SubmissionMaxExecuteBatchSizeAsync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12SubmissionMaxExecuteBatchSizeAsync,
             L"r.D3D12.Submission.MaxExecuteBatchSize.Async",
             &GD3D12SubmissionMaxExecuteBatchSizeAsync,
             L"The maximum number of command lists to pass to a single ExecuteCommandLists invocation for async queues\nThe valid range is 1 to INT_MAX inclusive. Values less than 1 will be clamped to 1"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12SubmissionMaxExecuteBatchSizeAsync__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12SubmissionMaxExecuteBatchSizeCopy'' @ 141049280

void __cdecl _dynamic_initializer_for__CVarD3D12SubmissionMaxExecuteBatchSizeCopy__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12SubmissionMaxExecuteBatchSizeCopy,
             L"r.D3D12.Submission.MaxExecuteBatchSize.Copy",&GD3D12SubmissionMaxExecuteBatchSizeCopy
             ,
             L"The maximum number of command lists to pass to a single ExecuteCommandLists invocation for copy queues\nThe valid range is 1 to INT_MAX inclusive. Values less than 1 will be clamped to 1"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12SubmissionMaxExecuteBatchSizeCopy__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12SubmissionMaxExecuteBatchSizeDirect'' @ 1410492d0

void __cdecl _dynamic_initializer_for__CVarD3D12SubmissionMaxExecuteBatchSizeDirect__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12SubmissionMaxExecuteBatchSizeDirect,
             L"r.D3D12.Submission.MaxExecuteBatchSize.Direct",
             &GD3D12SubmissionMaxExecuteBatchSizeDirect,
             L"The maximum number of command lists to pass to a single ExecuteCommandLists invocation for direct queues\nThe valid range is 1 to INT_MAX inclusive. Values less than 1 will be clamped to 1"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12SubmissionMaxExecuteBatchSizeDirect__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12SubmissionTimeout'' @ 141049320

void __cdecl _dynamic_initializer_for__CVarD3D12SubmissionTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12SubmissionTimeout,L"r.D3D12.SubmissionTimeout",&GD3D12SubmissionTimeout,
             L"The maximum time, in seconds, that a submitted GPU command list is allowed to take before the RHI reports a GPU hang"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12SubmissionTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12UseD24'' @ 141049370

void __cdecl _dynamic_initializer_for__CVarD3D12UseD24__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D12UseD24,L"r.D3D12.Depth24Bit",local_res8,
             L"0: Use 32-bit float depth buffer\n1: Use 24-bit fixed point depth buffer(default)\n",
             4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12UseD24__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ZeroBufferSizeInMB'' @ 1410493c0

void __cdecl _dynamic_initializer_for__CVarD3D12ZeroBufferSizeInMB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D12ZeroBufferSizeInMB,L"D3D12.ZeroBufferSizeInMB",local_res8,
             L"The D3D12 RHI needs a static allocation of zeroes to use when streaming textures asynchronously. It should be large enough to support the largest mipmap you need to stream. The default is 4MB."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ZeroBufferSizeInMB__);
  return;
}

// `dynamic_initializer_for_'CVarDisableDiscardOfDepthResources'' @ 141049410

void __cdecl _dynamic_initializer_for__CVarDisableDiscardOfDepthResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableDiscardOfDepthResources,L"d3d12.DisableDiscardOfDepthResources",
             &GD3D12DisableDiscardOfDepthResources,
             L"Whether to skip discarding depth resources after transient aliasing acquire. This is not needed on some platforms if the whole (sub)resource is written before it\'s read."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableDiscardOfDepthResources__);
  return;
}

// `dynamic_initializer_for_'CVarGPUTimeFromTimestamps'' @ 141049460

void __cdecl _dynamic_initializer_for__CVarGPUTimeFromTimestamps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGPUTimeFromTimestamps,L"r.D3D12.GPUTimeFromTimestamps",local_res8,
             L"Prefer timestamps instead of GetHardwareGPUFrameTime to compute GPU frame time",0x20)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarGPUTimeFromTimestamps__);
  return;
}

// `dynamic_initializer_for_'CVarGlobalResourceDescriptorHeapSize'' @ 1410494b0

void __cdecl _dynamic_initializer_for__CVarGlobalResourceDescriptorHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGlobalResourceDescriptorHeapSize,L"D3D12.GlobalResourceDescriptorHeapSize",
             &GGlobalResourceDescriptorHeapSize,L"Global resource descriptor heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarGlobalResourceDescriptorHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarGlobalSamplerDescriptorHeapSize'' @ 141049500

void __cdecl _dynamic_initializer_for__CVarGlobalSamplerDescriptorHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGlobalSamplerDescriptorHeapSize,L"D3D12.GlobalSamplerDescriptorHeapSize",
             &GGlobalSamplerDescriptorHeapSize,L"Global sampler descriptor heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarGlobalSamplerDescriptorHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarGlobalSamplerHeapSize'' @ 141049550

void __cdecl _dynamic_initializer_for__CVarGlobalSamplerHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGlobalSamplerHeapSize,L"D3D12.GlobalSamplerHeapSize",&GGlobalSamplerHeapSize,
             L"Global sampler descriptor heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarGlobalSamplerHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarLocalViewHeapSize'' @ 1410495a0

void __cdecl _dynamic_initializer_for__CVarLocalViewHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLocalViewHeapSize,L"D3D12.LocalViewHeapSize",&GLocalViewHeapSize,
             L"Local view heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarLocalViewHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarOnlineDescriptorHeapBlockSize'' @ 1410495f0

void __cdecl _dynamic_initializer_for__CVarOnlineDescriptorHeapBlockSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOnlineDescriptorHeapBlockSize,L"D3D12.OnlineDescriptorHeapBlockSize",
             &GOnlineDescriptorHeapBlockSize,
             L"Block size for sub allocations on the global view descriptor heap.",4);
  atexit(_dynamic_atexit_destructor_for__CVarOnlineDescriptorHeapBlockSize__);
  return;
}

// `dynamic_initializer_for_'CVarOnlineDescriptorHeapSize'' @ 141049640

void __cdecl _dynamic_initializer_for__CVarOnlineDescriptorHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOnlineDescriptorHeapSize,L"D3D12.OnlineDescriptorHeapSize",
             &GOnlineDescriptorHeapSize,L"Online descriptor heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarOnlineDescriptorHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheD3D12DriverCacheAware'' @ 141049690

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheD3D12DriverCacheAware__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheD3D12DriverCacheAware,L"r.PSOPrecache.D3D12.DriverCacheAware",
             &GPSOPrecacheD3D12DriverCacheAware,
             L"If enabled, the PSO precaching system will not precache PSOs that the D3D12 graphics driver considers similar for caching, i.e. it will not precache PSOs that while technically different will still result in a driver cache hit.\nThis is not implemented for all GPU vendors and can result in performance issues or cache misses if the heuristics the engine uses does not match the graphics driver\'s behavior that decides whether a PSO is in the cache or not."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheD3D12DriverCacheAware__);
  return;
}

// `dynamic_initializer_for_'CVarRHIUseSubmissionThread'' @ 1410496e0

void __cdecl _dynamic_initializer_for__CVarRHIUseSubmissionThread__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHIUseSubmissionThread,L"rhi.UseSubmissionThread",local_res8,
             L"Whether to enable the RHI submission thread.\n  0: No\n  1: Yes, but not when running with multi-gpu.\n  2: Yes, always\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarRHIUseSubmissionThread__);
  return;
}

// `dynamic_initializer_for_'CVarTexturePoolOnlyAccountStreamableTexture'' @ 141049730

void __cdecl _dynamic_initializer_for__CVarTexturePoolOnlyAccountStreamableTexture__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTexturePoolOnlyAccountStreamableTexture,
             L"D3D12.TexturePoolOnlyAccountStreamableTexture",
             &GTexturePoolOnlyAccountStreamableTexture,
             L"Texture streaming pool size only account streamable texture .\n - 0: All texture types are counted in the pool (legacy, default).\n - 1: Only streamable textures are counted in the pool.\nWhen enabling the new behaviour, r.Streaming.PoolSize will need to be re-adjusted.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarTexturePoolOnlyAccountStreamableTexture__);
  return;
}

// `dynamic_initializer_for_'CVarUseUpdateTexture3DComputeShader'' @ 141049780

void __cdecl _dynamic_initializer_for__CVarUseUpdateTexture3DComputeShader__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUseUpdateTexture3DComputeShader,L"D3D12.UseUpdateTexture3DComputeShader",
             local_res8,
             L"If enabled, use a compute shader for UpdateTexture3D. Avoids alignment restrictions 0: off (default)\n 1: on"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarUseUpdateTexture3DComputeShader__);
  return;
}

// `dynamic_initializer_for_'GD3D12SamplerStateCacheLock'' @ 1410497d0

void __cdecl _dynamic_initializer_for__GD3D12SamplerStateCacheLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GD3D12SamplerStateCacheLock,4000);
  atexit(_dynamic_atexit_destructor_for__GD3D12SamplerStateCacheLock__);
  return;
}

// `dynamic_initializer_for_'LogD3D12GapRecorder'' @ 141049800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogD3D12GapRecorder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogD3D12GapRecorder,L"LogD3D12GapRecorder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogD3D12GapRecorder__);
  return;
}

// `dynamic_initializer_for_'LogD3D12RHI'' @ 141049840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogD3D12RHI__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogD3D12RHI,L"LogD3D12RHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogD3D12RHI__);
  return;
}

// `dynamic_initializer_for_'RayTracingSerializeSceneCmd'' @ 141049880

void __cdecl _dynamic_initializer_for__RayTracingSerializeSceneCmd__(void)

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
    puVar1[3] = <lambda_24>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&RayTracingSerializeSceneCmd,L"D3D12.RayTracing.SerializeScene",
             L"Serialize Ray Tracing Scene to disk.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__RayTracingSerializeSceneCmd__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_CInvocations'' @ 1410499c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_CInvocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_CInvocations ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_CInvocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_CInvocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_CInvocations,*pFVar1,
               L"GPU C Invocations","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_CPrimitives'' @ 141049a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_CPrimitives__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_CPrimitives ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_CPrimitives>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_CPrimitives");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_CPrimitives,*pFVar1,
               L"GPU C Primitives","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_CSInvocations'' @ 141049ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_CSInvocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_CSInvocations ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_CSInvocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_CSInvocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_CSInvocations,*pFVar1,
               L"GPU CS Invocations","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_DSInvocations'' @ 141049b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_DSInvocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_DSInvocations ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_DSInvocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_DSInvocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_DSInvocations,*pFVar1,
               L"GPU DS Invocations","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_GSInvocations'' @ 141049c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_GSInvocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_GSInvocations ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_GSInvocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_GSInvocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_GSInvocations,*pFVar1,
               L"GPU GS Invocations","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_GSPrimitives'' @ 141049c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_GSPrimitives__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_GSPrimitives ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_GSPrimitives>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_GSPrimitives");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_GSPrimitives,*pFVar1,
               L"GPU GS Primitives","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_HSInvocations'' @ 141049d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_HSInvocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_HSInvocations ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_HSInvocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_HSInvocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_HSInvocations,*pFVar1,
               L"GPU HS Invocations","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_IAPrimitives'' @ 141049db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_IAPrimitives__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_IAPrimitives ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_IAPrimitives>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_IAPrimitives");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_IAPrimitives,*pFVar1,
               L"GPU IA Primitives","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_IAVertices'' @ 141049e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_IAVertices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_IAVertices == (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_IAVertices>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_IAVertices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_IAVertices,*pFVar1,
               L"GPU IA Vertices","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_PSInvocations'' @ 141049ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_PSInvocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_PSInvocations ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_PSInvocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_PSInvocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_PSInvocations,*pFVar1,
               L"GPU PS Invocations","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RHI_VSInvocations'' @ 141049f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RHI_VSInvocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RHI_VSInvocations ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RHI_VSInvocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RHI_VSInvocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RHI_VSInvocations,*pFVar1,
               L"GPU VS Invocations","STATGROUP_D3D12RHIPipeline","STATCAT_Advanced",
               L"D3D12RHIPipeline",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12Submit'' @ 141049ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12Submit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12Submit == (FThreadSafeStaticStat<FStat_STAT_D3D12Submit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12Submit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12Submit,*pFVar1,L"Submit",
               "STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeFindOrCreateTime'' @ 14104a080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOComputeFindOrCreateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOComputeFindOrCreateTime ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeFindOrCreateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOComputeFindOrCreateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeFindOrCreateTime,*pFVar1,
               L"Compute: Find or Create time","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheHit'' @ 14104a110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOComputeLowlevelCacheHit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOComputeLowlevelCacheHit ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheHit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOComputeLowlevelCacheHit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeLowlevelCacheHit,*pFVar1,
               L"Compute: Low-level cache hit","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheMiss'' @ 14104a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOComputeLowlevelCacheMiss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOComputeLowlevelCacheMiss ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheMiss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOComputeLowlevelCacheMiss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeLowlevelCacheMiss,*pFVar1,
               L"Compute: Low-level cache miss","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeNumLowlevelCacheEntries'' @ 14104a230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOComputeNumLowlevelCacheEntries__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOComputeNumLowlevelCacheEntries ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeNumLowlevelCacheEntries>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOComputeNumLowlevelCacheEntries");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeNumLowlevelCacheEntries,*pFVar1,
               L"Compute: Num low-level cache entries","STATGROUP_D3D12PipelineState",
               "STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsFindOrCreateTime'' @ 14104a2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOGraphicsFindOrCreateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOGraphicsFindOrCreateTime ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsFindOrCreateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOGraphicsFindOrCreateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsFindOrCreateTime,*pFVar1,
               L"Graphics: Find or Create time","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheHit'' @ 14104a350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOGraphicsLowlevelCacheHit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOGraphicsLowlevelCacheHit ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheHit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOGraphicsLowlevelCacheHit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsLowlevelCacheHit,*pFVar1,
               L"Graphics: Low-level cache hit","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheMiss'' @ 14104a3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOGraphicsLowlevelCacheMiss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOGraphicsLowlevelCacheMiss ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheMiss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOGraphicsLowlevelCacheMiss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsLowlevelCacheMiss,*pFVar1,
               L"Graphics: Low-level cache miss","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries'' @ 14104a470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsNumLowlevelCacheEntries>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOGraphicsNumLowlevelCacheEntries");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries,*pFVar1
               ,L"Graphics: Num low-level cache entries","STATGROUP_D3D12PipelineState",
               "STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHI_GPUTotalTime'' @ 14104a500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHI_GPUTotalTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHI_GPUTotalTime == (FThreadSafeStaticStat<FStat_STAT_RHI_GPUTotalTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHI_GPUTotalTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHI_GPUTotalTime,*pFVar1,
               L"GPU Total Time [All Queues]","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHI_GPUTotalTimeAsyncCompute'' @ 14104a590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHI_GPUTotalTimeAsyncCompute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHI_GPUTotalTimeAsyncCompute ==
      (FThreadSafeStaticStat<FStat_STAT_RHI_GPUTotalTimeAsyncCompute>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHI_GPUTotalTimeAsyncCompute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHI_GPUTotalTimeAsyncCompute,*pFVar1,
               L"GPU Total Time [Async Compute]","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHI_GPUTotalTimeCopy'' @ 14104a620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHI_GPUTotalTimeCopy__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHI_GPUTotalTimeCopy ==
      (FThreadSafeStaticStat<FStat_STAT_RHI_GPUTotalTimeCopy>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHI_GPUTotalTimeCopy");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHI_GPUTotalTimeCopy,*pFVar1,
               L"GPU Total Time [Copy]","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHI_GPUTotalTimeGraphics'' @ 14104a6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHI_GPUTotalTimeGraphics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHI_GPUTotalTimeGraphics ==
      (FThreadSafeStaticStat<FStat_STAT_RHI_GPUTotalTimeGraphics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHI_GPUTotalTimeGraphics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHI_GPUTotalTimeGraphics,*pFVar1,
               L"GPU Total Time [Graphics]","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHI_GPUTotalTimeHW'' @ 14104a740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHI_GPUTotalTimeHW__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHI_GPUTotalTimeHW == (FThreadSafeStaticStat<FStat_STAT_RHI_GPUTotalTimeHW>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_RHI_GPUTotalTimeHW");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHI_GPUTotalTimeHW,*pFVar1,
               L"GPU Total Time [Hardware Timer]","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// <lambda_invoker_cdecl> @ 145a37940

void __cdecl <lambda_24>::<lambda_invoker_cdecl>(void)

{
  GRayTracingSerializeSceneNextFrame = true;
  return;
}

// ConstructItems<TSharedPtr<FD3D12Adapter,1>,TSharedPtr<FD3D12Adapter,1>,int> @ 145a38610

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedPtr<FD3D12Adapter,1>,TSharedPtr<FD3D12Adapter,1>,int>
          (void *param_1,TSharedPtr<FD3D12Adapter,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FD3D12Adapter **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLinkedObjects<FD3D12ResourceCollection,`FD3D12DynamicRHI::RHICreateResourceCollection'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12ResourceCollection,`FD3D12DynamicRHI::RHICreateResourceCollection'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a38650

/* WARNING: Removing unreachable block (ram,0x000145a38683) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ResourceCollection * __cdecl
FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::
CreateLinkedObjects<FD3D12ResourceCollection,_FD3D12DynamicRHI::RHICreateResourceCollection_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12ResourceCollection,_FD3D12DynamicRHI::RHICreateResourceCollection_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  FD3D12Device *pFVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  FD3D12ResourceCollection *pFVar16;
  FD3D12ResourceCollection *pFVar17;
  byte bVar18;
  FD3D12ResourceCollection *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  FRHIGPUMask FVar22;
  TArrayView<FRHIResourceCollectionMember_const_,int> local_48;
  
  pFVar16 = (FD3D12ResourceCollection *)0x0;
  uVar5 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  pFVar19 = pFVar16;
  FVar22.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      pFVar17 = (FD3D12ResourceCollection *)0x0;
      lVar2 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar5) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FD3D12ResourceCollection *)(*pcVar7)();
        return pFVar16;
      }
      pFVar3 = *(FD3D12Device **)(lVar2 + 0x800 + (ulonglong)uVar5 * 8);
      pFVar16 = ::operator_new(0xb0);
      if (pFVar16 != (FD3D12ResourceCollection *)0x0) {
        local_48.DataPtr = (param_3->InMembers).DataPtr;
        local_48.ArrayNum = (param_3->InMembers).ArrayNum;
        local_48._12_4_ = *(undefined4 *)&(param_3->InMembers).field_0xc;
        pFVar17 = FD3D12ResourceCollection::FD3D12ResourceCollection
                            (pFVar16,pFVar3,param_3->Buffer,&local_48,pFVar19);
      }
      pFVar16 = pFVar17;
      if (pFVar19 != (FD3D12ResourceCollection *)0x0) {
        LOCK();
        plVar1 = &pFVar17->_padding_;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
        if (((int)(uint)lVar2 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(OldPacked & DeletingBit) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x99,L"Resource is being deleted."), bVar15)) {
          pcVar7 = (code *)swi(3);
          pFVar16 = (FD3D12ResourceCollection *)(*pcVar7)();
          return pFVar16;
        }
        pFVar16 = pFVar19;
        if ((0x3ffffffe < ((uint)lVar2 & 0x3fffffff) + 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs < NumRefsMask",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9b,L"Reference count has overflowed."), bVar15)) {
          pcVar7 = (code *)swi(3);
          pFVar16 = (FD3D12ResourceCollection *)(*pcVar7)();
          return pFVar16;
        }
      }
      (&pFVar16->_padding_)[uVar5] = (longlong)pFVar17;
      FVar22.GPUMask = FVar22.GPUMask & ~(1 << ((byte)uVar5 & 0x1f));
      uVar5 = 0;
      if (FVar22.GPUMask != 0) {
        for (; (FVar22.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      pFVar19 = pFVar16;
    } while (FVar22.GPUMask != 0);
    if (pFVar16 != (FD3D12ResourceCollection *)0x0) {
      iVar6 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      *(uint *)&pFVar16->_padding_ = param_1.GPUMask;
      bVar18 = 0;
      if (param_1.GPUMask != 0) {
        bVar18 = (byte)iVar6;
      }
      uVar20 = ~(1 << (bVar18 & 0x1f)) & param_1.GPUMask;
      uVar5 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (uVar20 != 0) {
        uVar21 = (ulonglong)uVar5;
        do {
          lVar8 = pFVar16->_padding_;
          lVar9 = pFVar16->_padding_;
          lVar10 = pFVar16->_padding_;
          lVar11 = pFVar16->_padding_;
          lVar12 = pFVar16->_padding_;
          lVar4 = (&pFVar16->_padding_)[uVar21];
          lVar13 = pFVar16->_padding_;
          lVar14 = pFVar16->_padding_;
          lVar2 = pFVar16->_padding_;
          *(longlong *)(lVar4 + 0x30) = pFVar16->_padding_;
          *(longlong *)(lVar4 + 0x38) = lVar8;
          uVar20 = uVar20 & ~(1 << ((byte)uVar21 & 0x1f));
          *(longlong *)(lVar4 + 0x40) = lVar9;
          *(longlong *)(lVar4 + 0x48) = lVar10;
          uVar5 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          *(longlong *)(lVar4 + 0x50) = lVar11;
          *(longlong *)(lVar4 + 0x58) = lVar12;
          uVar21 = 0x20;
          if (uVar20 != 0) {
            uVar21 = (ulonglong)uVar5;
          }
          *(longlong *)(lVar4 + 0x60) = lVar13;
          *(longlong *)(lVar4 + 0x68) = lVar14;
          *(longlong *)(lVar4 + 0x70) = lVar2;
        } while (uVar20 != 0);
      }
    }
  }
  return pFVar16;
}

// CreateLinkedObjects<FD3D12SamplerState,`FD3D12DynamicRHI::RHICreateSamplerState'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12SamplerState,`FD3D12DynamicRHI::RHICreateSamplerState'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a38890

/* WARNING: Removing unreachable block (ram,0x000145a388bd) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SamplerState * __cdecl
FD3D12LinkedAdapterObject<FD3D12SamplerState>::
CreateLinkedObjects<FD3D12SamplerState,_FD3D12DynamicRHI::RHICreateSamplerState_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12SamplerState,_FD3D12DynamicRHI::RHICreateSamplerState_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  FD3D12SamplerState *pFVar15;
  FD3D12SamplerState *pFVar16;
  byte bVar17;
  FD3D12SamplerState *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  FRHIGPUMask FVar21;
  
  pFVar15 = (FD3D12SamplerState *)0x0;
  uVar4 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  pFVar18 = pFVar15;
  FVar21.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar2 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar4) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FD3D12SamplerState *)(*pcVar6)();
        return pFVar15;
      }
      pFVar16 = FD3D12Device::CreateSampler
                          (*(FD3D12Device **)(lVar2 + 0x800 + (ulonglong)uVar4 * 8),
                           param_3->Initializer,pFVar18);
      pFVar15 = pFVar16;
      if (pFVar18 != (FD3D12SamplerState *)0x0) {
        LOCK();
        plVar1 = &pFVar16->_padding_;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
        if (((int)(uint)lVar2 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(OldPacked & DeletingBit) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x99,L"Resource is being deleted."), bVar14)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FD3D12SamplerState *)(*pcVar6)();
          return pFVar15;
        }
        pFVar15 = pFVar18;
        if ((0x3ffffffe < ((uint)lVar2 & 0x3fffffff) + 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs < NumRefsMask",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9b,L"Reference count has overflowed."), bVar14)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FD3D12SamplerState *)(*pcVar6)();
          return pFVar15;
        }
      }
      (&pFVar15->_padding_)[uVar4] = (longlong)pFVar16;
      FVar21.GPUMask = FVar21.GPUMask & ~(1 << ((byte)uVar4 & 0x1f));
      uVar4 = 0;
      if (FVar21.GPUMask != 0) {
        for (; (FVar21.GPUMask >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      pFVar18 = pFVar15;
    } while (FVar21.GPUMask != 0);
    if (pFVar15 != (FD3D12SamplerState *)0x0) {
      iVar5 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
      *(uint *)&pFVar15->_padding_ = param_1.GPUMask;
      bVar17 = 0;
      if (param_1.GPUMask != 0) {
        bVar17 = (byte)iVar5;
      }
      uVar19 = ~(1 << (bVar17 & 0x1f)) & param_1.GPUMask;
      uVar4 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (uVar19 != 0) {
        uVar20 = (ulonglong)uVar4;
        do {
          lVar7 = pFVar15->_padding_;
          lVar8 = pFVar15->_padding_;
          lVar9 = pFVar15->_padding_;
          lVar10 = pFVar15->_padding_;
          lVar11 = pFVar15->_padding_;
          lVar3 = (&pFVar15->_padding_)[uVar20];
          lVar12 = pFVar15->_padding_;
          lVar13 = pFVar15->_padding_;
          lVar2 = pFVar15->_padding_;
          *(longlong *)(lVar3 + 0x20) = pFVar15->_padding_;
          *(longlong *)(lVar3 + 0x28) = lVar7;
          uVar19 = uVar19 & ~(1 << ((byte)uVar20 & 0x1f));
          *(longlong *)(lVar3 + 0x30) = lVar8;
          *(longlong *)(lVar3 + 0x38) = lVar9;
          uVar4 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          *(longlong *)(lVar3 + 0x40) = lVar10;
          *(longlong *)(lVar3 + 0x48) = lVar11;
          uVar20 = 0x20;
          if (uVar19 != 0) {
            uVar20 = (ulonglong)uVar4;
          }
          *(longlong *)(lVar3 + 0x50) = lVar12;
          *(longlong *)(lVar3 + 0x58) = lVar13;
          *(longlong *)(lVar3 + 0x60) = lVar2;
        } while (uVar19 != 0);
      }
    }
  }
  return pFVar15;
}

// CreateLinkedObjects<FD3D12ShaderResourceView_RHI,`FD3D12DynamicRHI::RHICreateShaderResourceView'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12ShaderResourceView_RHI,`FD3D12DynamicRHI::RHICreateShaderResourceView'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a38aa0

/* WARNING: Removing unreachable block (ram,0x000145a38ada) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ShaderResourceView_RHI * __cdecl
FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::
CreateLinkedObjects<FD3D12ShaderResourceView_RHI,_FD3D12DynamicRHI::RHICreateShaderResourceView_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12ShaderResourceView_RHI,_FD3D12DynamicRHI::RHICreateShaderResourceView_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  EViewType EVar3;
  longlong lVar4;
  FD3D12Device *pFVar5;
  FRHIViewDesc *pFVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  FD3D12ShaderResourceView_RHI *pFVar18;
  FD3D12ShaderResourceView_RHI *this;
  FD3D12View *pFVar19;
  byte bVar20;
  FD3D12ShaderResourceView_RHI *pFVar21;
  FRHITrackedAccess this_00;
  undefined8 uVar22;
  ERHIDescriptorType EVar23;
  uint uVar24;
  ulonglong uVar25;
  FRHIGPUMask FVar26;
  
  pFVar18 = (FD3D12ShaderResourceView_RHI *)0x0;
  uVar7 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  pFVar21 = pFVar18;
  FVar26.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar4 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar7) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        pFVar18 = (FD3D12ShaderResourceView_RHI *)(*pcVar9)();
        return pFVar18;
      }
      this_00.Access = None;
      this_00.Pipelines = None;
      this_00._5_3_ = 0;
      pFVar5 = *(FD3D12Device **)(lVar4 + 0x800 + (ulonglong)uVar7 * 8);
      EVar3 = (param_3->ViewDesc->field0_0x0).Common.ViewType;
      if ((EVar3 == BufferSRV) || (EVar3 == BufferUAV)) {
        if (*param_3->Resource != (FRHIViewableResource *)0x0) {
          this_00 = (&(*param_3->Resource)[10].TrackedAccess)[*(uint *)&pFVar5->field_0x8];
        }
      }
      else if (*param_3->Resource != (FRHIViewableResource *)0x0) {
        this_00 = (&(*param_3->Resource)[0xc].TrackedAccess)[*(uint *)&pFVar5->field_0x8];
      }
      this = ::operator_new(0x110);
      if (this != (FD3D12ShaderResourceView_RHI *)0x0) {
        pFVar6 = param_3->ViewDesc;
        FRHIResource::FRHIResource((FRHIResource *)this,RRT_ShaderResourceView);
        *(undefined ***)this = &___7FRHIView__6B_;
        *(ERHIAccess *)&this->field_0x18 = this_00.Access;
        this->field_0x1c = this_00.Pipelines;
        *(int3 *)&this->field_0x1d = this_00._5_3_;
        if (this_00 != (FRHITrackedAccess)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_00);
        }
        uVar22 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
        *(undefined8 *)&this->field_0x20 = *(undefined8 *)&pFVar6->field0_0x0;
        *(undefined8 *)&this->field_0x28 = uVar22;
        if ((this_00 == (FRHITrackedAccess)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("InResource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0xcae,L"Cannot create a view of a nullptr resource."), bVar17)) {
          pcVar9 = (code *)swi(3);
          pFVar18 = (FD3D12ShaderResourceView_RHI *)(*pcVar9)();
          return pFVar18;
        }
        *(undefined ***)this = &___7FRHIShaderResourceView__6B_;
        if (((this->field_0x20 != '\0') && (this->field_0x20 != '\x02')) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ViewDesc.IsSRV()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0xced,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          pFVar18 = (FD3D12ShaderResourceView_RHI *)(*pcVar9)();
          return pFVar18;
        }
        if (*(char *)((longlong)&pFVar6->field0_0x0 + 2) == '\x03') {
          uVar22 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
        }
        else {
          uVar22 = 0;
        }
        EVar3 = (pFVar6->field0_0x0).Common.ViewType;
        if (EVar3 == BufferSRV) {
LAB_145a38c6c:
          EVar23 = BufferSRV;
        }
        else if (EVar3 == BufferUAV) {
          EVar23 = BufferUAV;
        }
        else if (EVar3 == TextureSRV) {
          EVar23 = TextureSRV;
        }
        else {
          if (EVar3 != TextureUAV) goto LAB_145a38c6c;
          EVar23 = TextureUAV;
        }
        pFVar19 = (FD3D12View *)&pFVar21->field_0x30;
        if (pFVar21 == (FD3D12ShaderResourceView_RHI *)0x0) {
          pFVar19 = (FD3D12View *)0x0;
        }
        FD3D12View::FD3D12View((FD3D12View *)&this->field_0x30,pFVar5,EVar23,Standard,pFVar19);
        *(undefined8 *)&this->field_0xb0 = 0;
        *(undefined4 *)&this->field_0xb8 = 0;
        this->field_0xbc = 0;
        *(undefined8 *)&this->field_0xc0 = uVar22;
        *(undefined4 *)&this->field_0xc8 = 1;
        *(undefined8 *)&this->field_0xd0 = 0;
        *(undefined8 *)&this->field_0xd8 = 0;
        *(undefined8 *)&this->field_0xe0 = 0;
        *(undefined8 *)&this->field_0xe8 = 0;
        *(undefined8 *)&this->field_0xf0 = 0;
        *(undefined8 *)&this->field_0xf8 = 0;
        *(undefined8 *)&this->field_0x100 = 0;
        *(undefined8 *)&this->field_0x108 = 0;
        *(undefined ***)this =
             &FD3D12ShaderResourceView_RHI::_vftable__for__FRHIShaderResourceView__;
        *(undefined ***)&this->field_0x30 =
             &FD3D12ShaderResourceView_RHI::_vftable__for__FD3D12ShaderResourceView__;
      }
      pFVar18 = this;
      if (pFVar21 != (FD3D12ShaderResourceView_RHI *)0x0) {
        LOCK();
        pFVar1 = (FAtomicFlags *)&this->field_0x8;
        aVar2 = pFVar1->Packed;
        pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + 1);
        UNLOCK();
        if (((int)aVar2 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(OldPacked & DeletingBit) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x99,L"Resource is being deleted."), bVar17)) {
          pcVar9 = (code *)swi(3);
          pFVar18 = (FD3D12ShaderResourceView_RHI *)(*pcVar9)();
          return pFVar18;
        }
        pFVar18 = pFVar21;
        if ((0x3ffffffe < ((uint)aVar2 & 0x3fffffff) + 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs < NumRefsMask",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9b,L"Reference count has overflowed."), bVar17)) {
          pcVar9 = (code *)swi(3);
          pFVar18 = (FD3D12ShaderResourceView_RHI *)(*pcVar9)();
          return pFVar18;
        }
      }
      *(FD3D12ShaderResourceView_RHI **)(&pFVar18->field_0xd0 + (ulonglong)uVar7 * 8) = this;
      FVar26.GPUMask = FVar26.GPUMask & ~(1 << ((byte)uVar7 & 0x1f));
      uVar7 = 0;
      if (FVar26.GPUMask != 0) {
        for (; (FVar26.GPUMask >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      pFVar21 = pFVar18;
    } while (FVar26.GPUMask != 0);
    if (pFVar18 != (FD3D12ShaderResourceView_RHI *)0x0) {
      iVar8 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
        }
      }
      *(uint *)&pFVar18->field_0xc8 = param_1.GPUMask;
      bVar20 = 0;
      if (param_1.GPUMask != 0) {
        bVar20 = (byte)iVar8;
      }
      uVar24 = ~(1 << (bVar20 & 0x1f)) & param_1.GPUMask;
      uVar7 = 0;
      if (uVar24 != 0) {
        for (; (uVar24 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      if (uVar24 != 0) {
        uVar25 = (ulonglong)uVar7;
        do {
          uVar10 = *(undefined8 *)&pFVar18->field_0xd0;
          uVar11 = *(undefined8 *)&pFVar18->field_0xd8;
          uVar12 = *(undefined8 *)&pFVar18->field_0xe0;
          uVar13 = *(undefined8 *)&pFVar18->field_0xe8;
          uVar14 = *(undefined8 *)&pFVar18->field_0xf0;
          lVar4 = *(longlong *)(&pFVar18->field_0xd0 + uVar25 * 8);
          uVar15 = *(undefined8 *)&pFVar18->field_0xf8;
          uVar16 = *(undefined8 *)&pFVar18->field_0x100;
          uVar22 = *(undefined8 *)&pFVar18->field_0x108;
          *(undefined8 *)(lVar4 + 200) = *(undefined8 *)&pFVar18->field_0xc8;
          *(undefined8 *)(lVar4 + 0xd0) = uVar10;
          uVar24 = uVar24 & ~(1 << ((byte)uVar25 & 0x1f));
          *(undefined8 *)(lVar4 + 0xd8) = uVar11;
          *(undefined8 *)(lVar4 + 0xe0) = uVar12;
          uVar7 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
          *(undefined8 *)(lVar4 + 0xe8) = uVar13;
          *(undefined8 *)(lVar4 + 0xf0) = uVar14;
          uVar25 = 0x20;
          if (uVar24 != 0) {
            uVar25 = (ulonglong)uVar7;
          }
          *(undefined8 *)(lVar4 + 0xf8) = uVar15;
          *(undefined8 *)(lVar4 + 0x100) = uVar16;
          *(undefined8 *)(lVar4 + 0x108) = uVar22;
        } while (uVar24 != 0);
      }
    }
  }
  return pFVar18;
}

// CreateLinkedObjects<FD3D12Texture,`FD3D12DynamicRHI::CreateAliasedD3D12Texture2D'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12Texture,`FD3D12DynamicRHI::CreateAliasedD3D12Texture2D'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a38ed0

/* WARNING: Removing unreachable block (ram,0x000145a38f00) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12Texture * __cdecl
FD3D12LinkedAdapterObject<FD3D12Texture>::
CreateLinkedObjects<FD3D12Texture,_FD3D12DynamicRHI::CreateAliasedD3D12Texture2D_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_FD3D12DynamicRHI::CreateAliasedD3D12Texture2D_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  FD3D12Texture *pFVar14;
  FD3D12Texture *pFVar15;
  byte bVar16;
  ulonglong uVar17;
  FD3D12Texture *pFVar18;
  uint uVar19;
  FRHIGPUMask FVar20;
  undefined1 local_44 [4];
  uint local_40;
  
  pFVar14 = (FD3D12Texture *)0x0;
  uVar3 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  pFVar18 = pFVar14;
  FVar20.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar1 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar3) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FD3D12Texture *)(*pcVar5)();
        return pFVar14;
      }
      pFVar15 = (FD3D12Texture *)
                (**(code **)(param_3->__this->_padding_ + 0x608))
                          (param_3->__this,param_3->CreateDesc,
                           *(undefined8 *)(lVar1 + 0x800 + (ulonglong)uVar3 * 8));
      pFVar14 = pFVar15;
      if (pFVar18 != (FD3D12Texture *)0x0) {
        (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_,local_44);
        pFVar14 = pFVar18;
      }
      *(FD3D12Texture **)
       ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + (ulonglong)uVar3 * 8 + -0x58) =
           pFVar15;
      FVar20.GPUMask = FVar20.GPUMask & ~(1 << ((byte)uVar3 & 0x1f));
      local_40 = 0;
      if (FVar20.GPUMask != 0) {
        for (; (FVar20.GPUMask >> local_40 & 1) == 0; local_40 = local_40 + 1) {
        }
      }
      pFVar18 = pFVar14;
      uVar3 = local_40;
    } while (FVar20.GPUMask != 0);
    if (pFVar14 != (FD3D12Texture *)0x0) {
      iVar4 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      *(uint *)&pFVar14->_padding_ = param_1.GPUMask;
      bVar16 = 0;
      if (param_1.GPUMask != 0) {
        bVar16 = (byte)iVar4;
      }
      uVar19 = ~(1 << (bVar16 & 0x1f)) & param_1.GPUMask;
      uVar3 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (uVar19 != 0) {
        uVar17 = (ulonglong)uVar3;
        do {
          lVar6 = pFVar14->_padding_;
          lVar7 = pFVar14->_padding_;
          lVar8 = pFVar14->_padding_;
          lVar9 = pFVar14->_padding_;
          lVar10 = pFVar14->_padding_;
          lVar2 = *(longlong *)
                   ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + uVar17 * 8 + -0x58);
          lVar11 = pFVar14->_padding_;
          lVar12 = pFVar14->_padding_;
          lVar1 = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x1f8) = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x200) = lVar6;
          uVar19 = uVar19 & ~(1 << ((byte)uVar17 & 0x1f));
          uVar3 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          *(longlong *)(lVar2 + 0x208) = lVar7;
          *(longlong *)(lVar2 + 0x210) = lVar8;
          uVar17 = 0x20;
          if (uVar19 != 0) {
            uVar17 = (ulonglong)uVar3;
          }
          *(longlong *)(lVar2 + 0x218) = lVar9;
          *(longlong *)(lVar2 + 0x220) = lVar10;
          *(longlong *)(lVar2 + 0x228) = lVar11;
          *(longlong *)(lVar2 + 0x230) = lVar12;
          *(longlong *)(lVar2 + 0x238) = lVar1;
        } while (uVar19 != 0);
      }
    }
  }
  return pFVar14;
}

// CreateLinkedObjects<FD3D12Texture,`FD3D12DynamicRHI::CreateTextureFromResource'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12Texture,`FD3D12DynamicRHI::CreateTextureFromResource'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a390b0

/* WARNING: Removing unreachable block (ram,0x000145a390e0) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12Texture * __cdecl
FD3D12LinkedAdapterObject<FD3D12Texture>::
CreateLinkedObjects<FD3D12Texture,_FD3D12DynamicRHI::CreateTextureFromResource_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_FD3D12DynamicRHI::CreateTextureFromResource_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  FD3D12Texture *pFVar14;
  FD3D12Texture *pFVar15;
  byte bVar16;
  ulonglong uVar17;
  FD3D12Texture *pFVar18;
  uint uVar19;
  FRHIGPUMask FVar20;
  undefined1 local_44 [4];
  uint local_40;
  
  pFVar14 = (FD3D12Texture *)0x0;
  uVar3 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  pFVar18 = pFVar14;
  FVar20.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar1 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar3) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FD3D12Texture *)(*pcVar5)();
        return pFVar14;
      }
      pFVar15 = (FD3D12Texture *)
                (**(code **)(param_3->__this->_padding_ + 0x608))
                          (param_3->__this,param_3->CreateDesc,
                           *(undefined8 *)(lVar1 + 0x800 + (ulonglong)uVar3 * 8));
      pFVar14 = pFVar15;
      if (pFVar18 != (FD3D12Texture *)0x0) {
        (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_,local_44);
        pFVar14 = pFVar18;
      }
      *(FD3D12Texture **)
       ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + (ulonglong)uVar3 * 8 + -0x58) =
           pFVar15;
      FVar20.GPUMask = FVar20.GPUMask & ~(1 << ((byte)uVar3 & 0x1f));
      local_40 = 0;
      if (FVar20.GPUMask != 0) {
        for (; (FVar20.GPUMask >> local_40 & 1) == 0; local_40 = local_40 + 1) {
        }
      }
      pFVar18 = pFVar14;
      uVar3 = local_40;
    } while (FVar20.GPUMask != 0);
    if (pFVar14 != (FD3D12Texture *)0x0) {
      iVar4 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      *(uint *)&pFVar14->_padding_ = param_1.GPUMask;
      bVar16 = 0;
      if (param_1.GPUMask != 0) {
        bVar16 = (byte)iVar4;
      }
      uVar19 = ~(1 << (bVar16 & 0x1f)) & param_1.GPUMask;
      uVar3 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (uVar19 != 0) {
        uVar17 = (ulonglong)uVar3;
        do {
          lVar6 = pFVar14->_padding_;
          lVar7 = pFVar14->_padding_;
          lVar8 = pFVar14->_padding_;
          lVar9 = pFVar14->_padding_;
          lVar10 = pFVar14->_padding_;
          lVar2 = *(longlong *)
                   ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + uVar17 * 8 + -0x58);
          lVar11 = pFVar14->_padding_;
          lVar12 = pFVar14->_padding_;
          lVar1 = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x1f8) = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x200) = lVar6;
          uVar19 = uVar19 & ~(1 << ((byte)uVar17 & 0x1f));
          uVar3 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          *(longlong *)(lVar2 + 0x208) = lVar7;
          *(longlong *)(lVar2 + 0x210) = lVar8;
          uVar17 = 0x20;
          if (uVar19 != 0) {
            uVar17 = (ulonglong)uVar3;
          }
          *(longlong *)(lVar2 + 0x218) = lVar9;
          *(longlong *)(lVar2 + 0x220) = lVar10;
          *(longlong *)(lVar2 + 0x228) = lVar11;
          *(longlong *)(lVar2 + 0x230) = lVar12;
          *(longlong *)(lVar2 + 0x238) = lVar1;
        } while (uVar19 != 0);
      }
    }
  }
  return pFVar14;
}

// CreateLinkedObjects<FD3D12Texture,`FD3D12DynamicRHI::RHIAsyncCreateTexture2D'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12Texture,`FD3D12DynamicRHI::RHIAsyncCreateTexture2D'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a39290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a392db) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Texture * __cdecl
FD3D12LinkedAdapterObject<FD3D12Texture>::
CreateLinkedObjects<FD3D12Texture,_FD3D12DynamicRHI::RHIAsyncCreateTexture2D_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_FD3D12DynamicRHI::RHIAsyncCreateTexture2D_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  DXGI_FORMAT DVar1;
  longlong lVar2;
  FD3D12Device *pFVar3;
  D3D12_RESOURCE_DESC *pDVar4;
  longlong lVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  DXGI_FORMAT DVar16;
  undefined4 uVar17;
  FD3D12Texture *pFVar18;
  FD3D12Texture *this;
  byte bVar19;
  FD3D12Texture *pFVar20;
  int iVar21;
  uint uVar22;
  FD3D12BaseShaderResource *pFVar23;
  ulonglong uVar24;
  FRHIGPUMask FVar25;
  undefined1 auStackY_138 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_b0;
  FD3D12ResourceDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar6 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  pFVar18 = (FD3D12Texture *)0x0;
  pFVar20 = pFVar18;
  FVar25.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar2 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar6) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pFVar18 = (FD3D12Texture *)(*pcVar7)();
        return pFVar18;
      }
      pFVar3 = *(FD3D12Device **)(lVar2 + 0x800 + (ulonglong)uVar6 * 8);
      this = (FD3D12Texture *)
             (**(code **)(param_3->__this->_padding_ + 0x608))
                       (param_3->__this,param_3->CreateDesc,pFVar3);
      pFVar23 = (FD3D12BaseShaderResource *)&this->_padding_;
      pDVar4 = param_3->TextureDesc;
      local_88._padding_ = *(longlong *)pDVar4;
      local_88._padding_ = pDVar4->Alignment;
      local_88._padding_ = pDVar4->Width;
      local_88._padding_._0_4_ = pDVar4->Height;
      local_88._padding_._4_2_ = pDVar4->DepthOrArraySize;
      local_88._padding_._6_2_ = pDVar4->MipLevels;
      local_88._padding_._0_4_ = pDVar4->Format;
      local_88._padding_._4_4_ = (pDVar4->SampleDesc).Count;
      local_88._padding_ = *(longlong *)&(pDVar4->SampleDesc).Quality;
      local_88._padding_ = *(longlong *)&pDVar4->Flags;
      if (this == (FD3D12Texture *)0x0) {
        pFVar23 = (FD3D12BaseShaderResource *)0x0;
      }
      local_88.PixelFormat = PF_Unknown;
      local_88.UAVPixelFormat = PF_Unknown;
      local_88._58_6_ = 0;
      SafeCreateTexture2D(pFVar3,*param_3->Adapter,&local_88,(D3D12_CLEAR_VALUE *)0x0,
                          (FD3D12ResourceLocation *)&this->_padding_,pFVar23,*param_3->Format,
                          *param_3->Flags,Common,SRVMask,(wchar_t *)0x0);
      local_b0.field3_0x10._16_8_ = 0;
      local_b0.Shader4ComponentMapping = 0x1688;
      local_b0._12_4_ = 0;
      local_b0.field3_0x10._8_8_ = 0;
      DVar1 = *param_3->PlatformShaderResourceFormat;
      local_b0.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
      local_b0.Format = DVar1;
      local_b0.field3_0x10.Buffer.FirstElement = (ulonglong)*param_3->NumMips << 0x20;
      DVar16 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(*param_3->PlatformResourceFormat)
      ;
      if (DVar16 == DXGI_FORMAT_R32G8X24_TYPELESS) {
        iVar21 = DVar1 - DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
LAB_145a39495:
        if ((iVar21 == 0) || (iVar21 != 1)) goto LAB_145a39465;
LAB_145a3949c:
        uVar17 = 1;
      }
      else {
        if (DVar16 == DXGI_FORMAT_R24G8_TYPELESS) {
          iVar21 = DVar1 - DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
          goto LAB_145a39495;
        }
        if (DVar16 != DXGI_FORMAT_NV12) {
          if ((DVar16 != DXGI_FORMAT_P010) || (DVar1 != DXGI_FORMAT_R16G16_UNORM))
          goto LAB_145a39465;
          goto LAB_145a3949c;
        }
        if (DVar1 == DXGI_FORMAT_R8G8_UNORM) goto LAB_145a3949c;
LAB_145a39465:
        uVar17 = 0;
      }
      local_b0.field3_0x10.Buffer.NumElements = uVar17;
      FD3D12Texture::EmplaceSRV(this,&local_b0,pFVar20);
      pFVar18 = this;
      if (pFVar20 != (FD3D12Texture *)0x0) {
        (**(code **)(this->_padding_ + 8))(&this->_padding_,local_b8);
        pFVar18 = pFVar20;
      }
      *(FD3D12Texture **)
       ((pFVar18->RenderTargetViews).AllocatorInstance.InlineData + (ulonglong)uVar6 * 8 + -0x58) =
           this;
      FVar25.GPUMask = FVar25.GPUMask & ~(1 << ((byte)uVar6 & 0x1f));
      local_b4 = 0;
      if (FVar25.GPUMask != 0) {
        for (; (FVar25.GPUMask >> local_b4 & 1) == 0; local_b4 = local_b4 + 1) {
        }
      }
      pFVar20 = pFVar18;
      uVar6 = local_b4;
    } while (FVar25.GPUMask != 0);
    if (pFVar18 != (FD3D12Texture *)0x0) {
      iVar21 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar21 & 1) == 0; iVar21 = iVar21 + 1) {
        }
      }
      *(uint *)&pFVar18->_padding_ = param_1.GPUMask;
      bVar19 = 0;
      if (param_1.GPUMask != 0) {
        bVar19 = (byte)iVar21;
      }
      uVar22 = ~(1 << (bVar19 & 0x1f)) & param_1.GPUMask;
      uVar6 = 0;
      if (uVar22 != 0) {
        for (; (uVar22 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (uVar22 != 0) {
        uVar24 = (ulonglong)uVar6;
        do {
          lVar8 = pFVar18->_padding_;
          lVar9 = pFVar18->_padding_;
          lVar10 = pFVar18->_padding_;
          lVar11 = pFVar18->_padding_;
          lVar12 = pFVar18->_padding_;
          lVar5 = *(longlong *)
                   ((pFVar18->RenderTargetViews).AllocatorInstance.InlineData + uVar24 * 8 + -0x58);
          lVar13 = pFVar18->_padding_;
          lVar14 = pFVar18->_padding_;
          lVar2 = pFVar18->_padding_;
          *(longlong *)(lVar5 + 0x1f8) = pFVar18->_padding_;
          *(longlong *)(lVar5 + 0x200) = lVar8;
          uVar22 = uVar22 & ~(1 << ((byte)uVar24 & 0x1f));
          *(longlong *)(lVar5 + 0x208) = lVar9;
          *(longlong *)(lVar5 + 0x210) = lVar10;
          uVar6 = 0;
          if (uVar22 != 0) {
            for (; (uVar22 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          *(longlong *)(lVar5 + 0x218) = lVar11;
          *(longlong *)(lVar5 + 0x220) = lVar12;
          uVar24 = 0x20;
          if (uVar22 != 0) {
            uVar24 = (ulonglong)uVar6;
          }
          *(longlong *)(lVar5 + 0x228) = lVar13;
          *(longlong *)(lVar5 + 0x230) = lVar14;
          *(longlong *)(lVar5 + 0x238) = lVar2;
        } while (uVar22 != 0);
      }
    }
  }
  return pFVar18;
}

// CreateLinkedObjects<FD3D12Texture,`FD3D12DynamicRHI::CreateTextureInternal'::__l2::<lambda_2>,`FD3D12Adapter::CreateLinkedObject<FD3D12Texture,`FD3D12DynamicRHI::CreateTextureInternal'::__l2::<lambda_2>_>'::__l2::<lambda_1>_> @ 145a39600

/* WARNING: Removing unreachable block (ram,0x000145a39630) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Texture * __cdecl
FD3D12LinkedAdapterObject<FD3D12Texture>::
CreateLinkedObjects<FD3D12Texture,_FD3D12DynamicRHI::CreateTextureInternal_::__l2::<lambda_2>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_FD3D12DynamicRHI::CreateTextureInternal_::__l2::<lambda_2>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_2> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  FD3D12Texture *pFVar14;
  FD3D12Texture *pFVar15;
  byte bVar16;
  ulonglong uVar17;
  FD3D12Texture *pFVar18;
  uint uVar19;
  FRHIGPUMask FVar20;
  undefined1 local_44 [4];
  uint local_40;
  
  pFVar14 = (FD3D12Texture *)0x0;
  uVar3 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  pFVar18 = pFVar14;
  FVar20.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar1 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar3) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FD3D12Texture *)(*pcVar5)();
        return pFVar14;
      }
      pFVar15 = `FD3D12DynamicRHI::CreateTextureInternal'::__l2::<lambda_2>::operator()
                          (param_3,*(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar3 * 8),pFVar18)
      ;
      pFVar14 = pFVar15;
      if (pFVar18 != (FD3D12Texture *)0x0) {
        (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_,local_44);
        pFVar14 = pFVar18;
      }
      *(FD3D12Texture **)
       ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + (ulonglong)uVar3 * 8 + -0x58) =
           pFVar15;
      FVar20.GPUMask = FVar20.GPUMask & ~(1 << ((byte)uVar3 & 0x1f));
      local_40 = 0;
      if (FVar20.GPUMask != 0) {
        for (; (FVar20.GPUMask >> local_40 & 1) == 0; local_40 = local_40 + 1) {
        }
      }
      pFVar18 = pFVar14;
      uVar3 = local_40;
    } while (FVar20.GPUMask != 0);
    if (pFVar14 != (FD3D12Texture *)0x0) {
      iVar4 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      *(uint *)&pFVar14->_padding_ = param_1.GPUMask;
      bVar16 = 0;
      if (param_1.GPUMask != 0) {
        bVar16 = (byte)iVar4;
      }
      uVar19 = ~(1 << (bVar16 & 0x1f)) & param_1.GPUMask;
      uVar3 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (uVar19 != 0) {
        uVar17 = (ulonglong)uVar3;
        do {
          lVar6 = pFVar14->_padding_;
          lVar7 = pFVar14->_padding_;
          lVar8 = pFVar14->_padding_;
          lVar9 = pFVar14->_padding_;
          lVar10 = pFVar14->_padding_;
          lVar2 = *(longlong *)
                   ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + uVar17 * 8 + -0x58);
          lVar11 = pFVar14->_padding_;
          lVar12 = pFVar14->_padding_;
          lVar1 = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x1f8) = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x200) = lVar6;
          uVar19 = uVar19 & ~(1 << ((byte)uVar17 & 0x1f));
          uVar3 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          *(longlong *)(lVar2 + 0x208) = lVar7;
          *(longlong *)(lVar2 + 0x210) = lVar8;
          uVar17 = 0x20;
          if (uVar19 != 0) {
            uVar17 = (ulonglong)uVar3;
          }
          *(longlong *)(lVar2 + 0x218) = lVar9;
          *(longlong *)(lVar2 + 0x220) = lVar10;
          *(longlong *)(lVar2 + 0x228) = lVar11;
          *(longlong *)(lVar2 + 0x230) = lVar12;
          *(longlong *)(lVar2 + 0x238) = lVar1;
        } while (uVar19 != 0);
      }
    }
  }
  return pFVar14;
}

// DefaultConstructItems<CD3DX12_DESCRIPTOR_RANGE1,int> @ 145a397d0

void __cdecl DefaultConstructItems<CD3DX12_DESCRIPTOR_RANGE1,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<D3D12_SUBRESOURCE_TILING,int> @ 145a397e0

void __cdecl DefaultConstructItems<D3D12_SUBRESOURCE_TILING,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FD3D12PayloadBase::FManualFence,int> @ 145a397f0

void __cdecl DestructItems<FD3D12PayloadBase::FManualFence,int>(FManualFence *param_1,int param_2)

{
  ID3D12Fence *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Fence).Reference;
    if (pIVar1 != (ID3D12Fence *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FD3D12Heap>,int> @ 145a39830

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __cdecl
DestructItems<TRefCountPtr<FD3D12Heap>,int>(TRefCountPtr<FD3D12Heap> *param_1,int param_2)

{
  longlong *plVar1;
  FD3D12Heap *pFVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = param_1->Reference;
    if (pFVar2 != (FD3D12Heap *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FD3D12Adapter,1>,int> @ 145a39890

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FD3D12Adapter,1>,int>(TSharedPtr<FD3D12Adapter,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FD3D12RenderTargetView,1>,int> @ 145a398d0

void __cdecl
DestructItems<TSharedPtr<FD3D12RenderTargetView,1>,int>
          (TSharedPtr<FD3D12RenderTargetView,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>,int> @ 145a39910

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
DestructItems<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>,int>
          (TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> *param_1,int param_2)

{
  FD3D12Timing *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FD3D12Timing *)0x0) {
      UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar1->EventStream);
      operator_delete(pFVar1,0x98);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::RHI::GPUProfiler::FEventStream,int> @ 145a39970

void __cdecl
DestructItems<UE::RHI::GPUProfiler::FEventStream,int>(FEventStream *param_1,int param_2)

{
  atomic<void_*> aVar1;
  atomic<void_*> _Dst;
  uint uVar2;
  FIndexedLockFreeLink *pFVar3;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    _Dst = (atomic<void_*>)param_1->First;
    while (_Dst != (atomic<void_*>)0x0) {
      aVar1 = *(atomic<void_*> *)_Dst;
      pTVar4 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)((longlong)_Dst + 0x10);
      if (*(TSharedRef<FRHIBreadcrumbAllocator,1> **)((longlong)_Dst + 0x30) !=
          (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
        pTVar4 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)((longlong)_Dst + 0x30);
      }
      DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                (pTVar4,*(int *)((longlong)_Dst + 0x38));
      if (*(void **)((longlong)_Dst + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x30));
      }
      memset((void *)_Dst,0xe5,0x4000);
      uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar2 == 0) {
        pFVar3 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
      }
      pFVar3->Payload = _Dst;
      FLockFreePointerListLIFORoot<64,1>::Push
                ((FLockFreePointerListLIFORoot<64,1> *)
                 &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool,uVar2);
      param_1->First = (FChunk *)aVar1;
      _Dst = aVar1;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// EnqueueLambdaMultiPipe<`FD3D12DynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>_> @ 145a3af70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::
EnqueueLambdaMultiPipe<_FD3D12DynamicRHI::RHIEndFrame_RenderThread_::__l2::<lambda_1>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  code *pcVar4;
  ERHIPipeline EVar5;
  longlong *plVar6;
  bool bVar7;
  FRHICommandBase *pFVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *local_res8;
  FD3D12ContextArray local_38;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar8 = FMemStackBase::Alloc(&this->MemManager,0x28,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar8;
    this->CommandLink = &pFVar8->Next;
    pFVar8->Next = (FRHICommandBase *)0x0;
    pFVar8->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::RHIEndFrame_RenderThread'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar8[1]._padding_ = (longlong)param_4->__this;
    pFVar8[1].Next = (FRHICommandBase *)param_3;
    *(ERHIPipeline *)&pFVar8[2]._padding_ = param_1;
  }
  else {
    plVar11 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar5 = -param_1 & param_1;
      if ((EVar5 == Graphics) || (EVar5 != AsyncCompute)) {
        plVar12 = *(longlong **)&this->Contexts;
        plVar9 = plVar12;
        if (((EVar5 == Graphics) || (EVar5 != AsyncCompute)) &&
           ((plVar11 = plVar12, plVar12 = plVar6, EVar5 != Graphics && (EVar5 == AsyncCompute)))) {
          plVar9 = plVar6;
        }
      }
      else {
        plVar9 = *(longlong **)&(this->Contexts).field_0x8;
        plVar12 = plVar9;
      }
      if ((plVar9 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = plVar12;
    }
    uVar10 = 0;
    local_38._0_8_ = uVar10;
    if (plVar11 != (longlong *)0x0) {
      local_38._0_8_ = (**(code **)(*plVar11 + 0x148))(plVar11);
    }
    if (plVar6 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plVar6 + 0x148))(plVar6);
    }
    local_38._8_8_ = uVar10;
    `FD3D12DynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>::operator()(param_4,&local_38);
  }
  ActivatePipelines(this,EVar3);
  if ((param_2 == Enabled) &&
     (RHIThreadFence(this,SUB81(&local_res8,0)), local_res8 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// EnqueueLambdaMultiPipe<`FD3D12DynamicRHI::RHIReplaceResources'::__l2::<lambda_1>_> @ 145a3b1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::
EnqueueLambdaMultiPipe<_FD3D12DynamicRHI::RHIReplaceResources_::__l2::<lambda_1>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  code *pcVar4;
  ERHIPipeline EVar5;
  longlong *plVar6;
  bool bVar7;
  FRHICommandBase *pFVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *local_res8;
  FD3D12ContextArray local_38;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar8 = FMemStackBase::Alloc(&this->MemManager,0x30,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar8;
    this->CommandLink = &pFVar8->Next;
    pFVar8[1]._padding_ = 0;
    pFVar8->Next = (FRHICommandBase *)0x0;
    pFVar8->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::RHIReplaceResources'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar8[1]._padding_ = (longlong)(param_4->ReplaceInfos).AllocatorInstance.Data;
    (param_4->ReplaceInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar8[1].Next = (param_4->ReplaceInfos).ArrayNum;
    *(int *)((longlong)&pFVar8[1].Next + 4) = (param_4->ReplaceInfos).ArrayMax;
    (param_4->ReplaceInfos).ArrayNum = 0;
    (param_4->ReplaceInfos).ArrayMax = 0;
    pFVar8[2]._padding_ = (longlong)param_3;
    *(ERHIPipeline *)&pFVar8[2].Next = param_1;
  }
  else {
    plVar11 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar5 = -param_1 & param_1;
      if ((EVar5 == Graphics) || (EVar5 != AsyncCompute)) {
        plVar12 = *(longlong **)&this->Contexts;
        plVar9 = plVar12;
        if (((EVar5 == Graphics) || (EVar5 != AsyncCompute)) &&
           ((plVar11 = plVar12, plVar12 = plVar6, EVar5 != Graphics && (EVar5 == AsyncCompute)))) {
          plVar9 = plVar6;
        }
      }
      else {
        plVar9 = *(longlong **)&(this->Contexts).field_0x8;
        plVar12 = plVar9;
      }
      if ((plVar9 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = plVar12;
    }
    uVar10 = 0;
    local_38._0_8_ = uVar10;
    if (plVar11 != (longlong *)0x0) {
      local_38._0_8_ = (**(code **)(*plVar11 + 0x148))(plVar11);
    }
    if (plVar6 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plVar6 + 0x148))(plVar6);
    }
    local_38._8_8_ = uVar10;
    `FD3D12DynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()(param_4,&local_38);
  }
  ActivatePipelines(this,EVar3);
  if ((param_2 == Enabled) &&
     (RHIThreadFence(this,SUB81(&local_res8,0)), local_res8 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// HeapSortInternal<FD3D12QueryRange,int,FIdentityFunctor,TDereferenceWrapper<FD3D12QueryRange,TLess<void>_>_> @ 145a3b680

void __cdecl
AlgoImpl::
HeapSortInternal<FD3D12QueryRange,int,FIdentityFunctor,TDereferenceWrapper<FD3D12QueryRange,TLess<void>_>_>
          (FD3D12QueryRange *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12QueryRange,TLess<void>_> param_4)

{
  FD3D12QueryRange *pFVar1;
  FD3D12QueryRange *pFVar2;
  FD3D12QueryRange FVar3;
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
LAB_145a3b762:
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
                  if (param_1[(longlong)iVar10 + 2].Start < param_1[iVar6].Start) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if (pFVar1->Start <= pFVar2->Start) break;
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
      if (param_1[(longlong)iVar7 + 2].Start < param_1[iVar8].Start) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if (pFVar1->Start <= pFVar2->Start) goto LAB_145a3b762;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// IID_PPV_ARGS_Helper<ID3D12CommandQueue> @ 145a3b810

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12CommandQueue>(ID3D12CommandQueue **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12RootSignature> @ 145a3b820

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12RootSignature>(ID3D12RootSignature **param_1)

{
  return param_1;
}

// InitShaderCommon<FD3D12AmplificationShader> @ 145a3b830

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12AmplificationShader>
          (FShaderCodeReader *param_1,int param_2,FD3D12AmplificationShader *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> *pTVar2;
  FD3D12ShaderData *pFVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar1 = ReadShaderOptionalData<FD3D12AmplificationShader>(param_1,param_3);
  if (bVar1) {
    pFVar3 = (FD3D12ShaderData *)&param_3->field_0x108;
    if (param_3 == (FD3D12AmplificationShader *)0x0) {
      pFVar3 = (FD3D12ShaderData *)0x0;
    }
    bVar1 = ValidateShaderIsUsable(pFVar3,param_3->field_0x104);
    if (bVar1) {
      pTVar2 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->field_0x108,pTVar2);
      param_3->field_0x105 =
           ((byte)param_3->field_0x118 >> 4 ^ param_3->field_0x105) & 2 ^ param_3->field_0x105;
      return true;
    }
  }
  return false;
}

// InitShaderCommon<FD3D12ComputeShader> @ 145a3b8e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12ComputeShader>
          (FShaderCodeReader *param_1,int param_2,FD3D12ComputeShader *param_3)

{
  byte bVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  FD3D12ShaderData *pFVar4;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar2 = ReadShaderOptionalData<FD3D12ComputeShader>(param_1,param_3);
  if (bVar2) {
    pFVar4 = (FD3D12ShaderData *)&param_3->_padding_;
    if (param_3 == (FD3D12ComputeShader *)0x0) {
      pFVar4 = (FD3D12ShaderData *)0x0;
    }
    bVar2 = ValidateShaderIsUsable(pFVar4,*(EShaderFrequency *)((longlong)&param_3->_padding_ + 4));
    if (bVar2) {
      pTVar3 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->_padding_,pTVar3);
      bVar1 = *(byte *)((longlong)&param_3->_padding_ + 5);
      *(byte *)((longlong)&param_3->_padding_ + 5) =
           ((byte)param_3->_padding_ >> 4 ^ bVar1) & 2 ^ bVar1;
      return true;
    }
  }
  return false;
}

// InitShaderCommon<FD3D12GeometryShader> @ 145a3b990

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12GeometryShader>
          (FShaderCodeReader *param_1,int param_2,FD3D12GeometryShader *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> *pTVar2;
  FD3D12ShaderData *pFVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar1 = ReadShaderOptionalData<FD3D12GeometryShader>(param_1,param_3);
  if (bVar1) {
    pFVar3 = (FD3D12ShaderData *)&param_3->field_0x108;
    if (param_3 == (FD3D12GeometryShader *)0x0) {
      pFVar3 = (FD3D12ShaderData *)0x0;
    }
    bVar1 = ValidateShaderIsUsable(pFVar3,param_3->field_0x104);
    if (bVar1) {
      pTVar2 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->field_0x108,pTVar2);
      param_3->field_0x105 =
           ((byte)param_3->field_0x118 >> 4 ^ param_3->field_0x105) & 2 ^ param_3->field_0x105;
      return true;
    }
  }
  return false;
}

// InitShaderCommon<FD3D12MeshShader> @ 145a3ba40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12MeshShader>(FShaderCodeReader *param_1,int param_2,FD3D12MeshShader *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> *pTVar2;
  FD3D12ShaderData *pFVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar1 = ReadShaderOptionalData<FD3D12MeshShader>(param_1,param_3);
  if (bVar1) {
    pFVar3 = (FD3D12ShaderData *)&param_3->field_0x108;
    if (param_3 == (FD3D12MeshShader *)0x0) {
      pFVar3 = (FD3D12ShaderData *)0x0;
    }
    bVar1 = ValidateShaderIsUsable(pFVar3,param_3->field_0x104);
    if (bVar1) {
      pTVar2 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->field_0x108,pTVar2);
      param_3->field_0x105 =
           ((byte)param_3->field_0x118 >> 4 ^ param_3->field_0x105) & 2 ^ param_3->field_0x105;
      return true;
    }
  }
  return false;
}

// InitShaderCommon<FD3D12PixelShader> @ 145a3baf0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12PixelShader>
          (FShaderCodeReader *param_1,int param_2,FD3D12PixelShader *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> *pTVar2;
  FD3D12ShaderData *pFVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar1 = ReadShaderOptionalData<FD3D12PixelShader>(param_1,param_3);
  if (bVar1) {
    pFVar3 = (FD3D12ShaderData *)&param_3->field_0x108;
    if (param_3 == (FD3D12PixelShader *)0x0) {
      pFVar3 = (FD3D12ShaderData *)0x0;
    }
    bVar1 = ValidateShaderIsUsable(pFVar3,param_3->field_0x104);
    if (bVar1) {
      pTVar2 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->field_0x108,pTVar2);
      param_3->field_0x105 =
           ((byte)param_3->field_0x118 >> 4 ^ param_3->field_0x105) & 2 ^ param_3->field_0x105;
      return true;
    }
  }
  return false;
}

// InitShaderCommon<FD3D12RayTracingShader> @ 145a3bba0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12RayTracingShader>
          (FShaderCodeReader *param_1,int param_2,FD3D12RayTracingShader *param_3)

{
  byte bVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  FD3D12ShaderData *pFVar4;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar2 = ReadShaderOptionalData<FD3D12RayTracingShader>(param_1,param_3);
  if (bVar2) {
    pFVar4 = (FD3D12ShaderData *)&param_3->_padding_;
    if (param_3 == (FD3D12RayTracingShader *)0x0) {
      pFVar4 = (FD3D12ShaderData *)0x0;
    }
    bVar2 = ValidateShaderIsUsable(pFVar4,*(EShaderFrequency *)((longlong)&param_3->_padding_ + 4));
    if (bVar2) {
      pTVar3 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->_padding_,pTVar3);
      bVar1 = *(byte *)((longlong)&param_3->_padding_ + 5);
      *(byte *)((longlong)&param_3->_padding_ + 5) =
           ((byte)param_3->_padding_ >> 4 ^ bVar1) & 2 ^ bVar1;
      return true;
    }
  }
  return false;
}

// InitShaderCommon<FD3D12VertexShader> @ 145a3bc50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12VertexShader>
          (FShaderCodeReader *param_1,int param_2,FD3D12VertexShader *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> *pTVar2;
  FD3D12ShaderData *pFVar3;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar1 = ReadShaderOptionalData<FD3D12VertexShader>(param_1,param_3);
  if (bVar1) {
    pFVar3 = (FD3D12ShaderData *)&param_3->field_0x108;
    if (param_3 == (FD3D12VertexShader *)0x0) {
      pFVar3 = (FD3D12ShaderData *)0x0;
    }
    bVar1 = ValidateShaderIsUsable(pFVar3,param_3->field_0x104);
    if (bVar1) {
      pTVar2 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->field_0x108,pTVar2);
      param_3->field_0x105 =
           ((byte)param_3->field_0x118 >> 4 ^ param_3->field_0x105) & 2 ^ param_3->field_0x105;
      return true;
    }
  }
  return false;
}

// InitShaderCommon<FD3D12WorkGraphShader> @ 145a3bd00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
InitShaderCommon<FD3D12WorkGraphShader>
          (FShaderCodeReader *param_1,int param_2,FD3D12WorkGraphShader *param_3)

{
  byte bVar1;
  bool bVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  FD3D12ShaderData *pFVar4;
  TArrayView<unsigned_char_const_,int> local_18;
  
  bVar2 = ReadShaderOptionalData<FD3D12WorkGraphShader>(param_1,param_3);
  if (bVar2) {
    pFVar4 = (FD3D12ShaderData *)&param_3->_padding_;
    if (param_3 == (FD3D12WorkGraphShader *)0x0) {
      pFVar4 = (FD3D12ShaderData *)0x0;
    }
    bVar2 = ValidateShaderIsUsable(pFVar4,*(EShaderFrequency *)((longlong)&param_3->_padding_ + 4));
    if (bVar2) {
      pTVar3 = FShaderCodeReader::GetOffsetShaderCode(param_1,&local_18,param_2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_3->_padding_,pTVar3);
      bVar1 = *(byte *)((longlong)&param_3->_padding_ + 5);
      *(byte *)((longlong)&param_3->_padding_ + 5) =
           ((byte)param_3->_padding_ >> 4 ^ bVar1) & 2 ^ bVar1;
      return true;
    }
  }
  return false;
}

// InitStandardShader<FD3D12AmplificationShader> @ 145a3bdb0

FD3D12AmplificationShader * __cdecl
InitStandardShader<FD3D12AmplificationShader>
          (FD3D12AmplificationShader *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  FD3D12AmplificationShader *pFVar1;
  <lambda_1> local_res10 [24];
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = InitStandardShaderWithCustomSerialization<FD3D12AmplificationShader,_InitStandardShader<FD3D12AmplificationShader>_::__l2::<lambda_1>_>
                     (param_1,&local_18,local_res10);
  return pFVar1;
}

// InitStandardShader<FD3D12ComputeShader> @ 145a3bde0

FD3D12ComputeShader * __cdecl
InitStandardShader<FD3D12ComputeShader>
          (FD3D12ComputeShader *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  FD3D12ComputeShader *pFVar1;
  <lambda_1> local_res10 [24];
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = InitStandardShaderWithCustomSerialization<FD3D12ComputeShader,_InitStandardShader<FD3D12ComputeShader>_::__l2::<lambda_1>_>
                     (param_1,&local_18,local_res10);
  return pFVar1;
}

// InitStandardShader<FD3D12GeometryShader> @ 145a3be10

FD3D12GeometryShader * __cdecl
InitStandardShader<FD3D12GeometryShader>
          (FD3D12GeometryShader *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  FD3D12GeometryShader *pFVar1;
  <lambda_1> local_res10 [24];
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = InitStandardShaderWithCustomSerialization<FD3D12GeometryShader,_InitStandardShader<FD3D12GeometryShader>_::__l2::<lambda_1>_>
                     (param_1,&local_18,local_res10);
  return pFVar1;
}

// InitStandardShader<FD3D12MeshShader> @ 145a3be40

FD3D12MeshShader * __cdecl
InitStandardShader<FD3D12MeshShader>
          (FD3D12MeshShader *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  FD3D12MeshShader *pFVar1;
  <lambda_1> local_res10 [24];
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = InitStandardShaderWithCustomSerialization<FD3D12MeshShader,_InitStandardShader<FD3D12MeshShader>_::__l2::<lambda_1>_>
                     (param_1,&local_18,local_res10);
  return pFVar1;
}

// InitStandardShader<FD3D12PixelShader> @ 145a3be70

FD3D12PixelShader * __cdecl
InitStandardShader<FD3D12PixelShader>
          (FD3D12PixelShader *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  FD3D12PixelShader *pFVar1;
  <lambda_1> local_res10 [24];
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = InitStandardShaderWithCustomSerialization<FD3D12PixelShader,_InitStandardShader<FD3D12PixelShader>_::__l2::<lambda_1>_>
                     (param_1,&local_18,local_res10);
  return pFVar1;
}

// InitStandardShader<FD3D12VertexShader> @ 145a3bea0

FD3D12VertexShader * __cdecl
InitStandardShader<FD3D12VertexShader>
          (FD3D12VertexShader *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  FD3D12VertexShader *pFVar1;
  <lambda_1> local_res10 [24];
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = InitStandardShaderWithCustomSerialization<FD3D12VertexShader,_InitStandardShader<FD3D12VertexShader>_::__l2::<lambda_1>_>
                     (param_1,&local_18,local_res10);
  return pFVar1;
}

// InitStandardShader<FD3D12WorkGraphShader> @ 145a3bed0

FD3D12WorkGraphShader * __cdecl
InitStandardShader<FD3D12WorkGraphShader>
          (FD3D12WorkGraphShader *param_1,TArrayView<unsigned_char_const_,int> *param_2)

{
  FD3D12WorkGraphShader *pFVar1;
  <lambda_1> local_res10 [24];
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = InitStandardShaderWithCustomSerialization<FD3D12WorkGraphShader,_InitStandardShader<FD3D12WorkGraphShader>_::__l2::<lambda_1>_>
                     (param_1,&local_18,local_res10);
  return pFVar1;
}

// InitStandardShaderWithCustomSerialization<FD3D12AmplificationShader,`InitStandardShader<FD3D12AmplificationShader>'::__l2::<lambda_1>_> @ 145a3bf00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12AmplificationShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12AmplificationShader,_InitStandardShader<FD3D12AmplificationShader>_::__l2::<lambda_1>_>
          (FD3D12AmplificationShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FD3D12AmplificationShader *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FD3D12AmplificationShader *pFVar6;
  char *pcVar7;
  undefined7 uVar8;
  FD3D12AmplificationShader *pFVar9;
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar7 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar7 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12AmplificationShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar9 = (FD3D12AmplificationShader *)0x0;
  local_d8._padding_ = 0;
  uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar8,1));
  pFVar4 = (FD3D12AmplificationShader *)&param_1->field_0x18;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar4);
    }
  }
  else {
    *(undefined4 *)pFVar4 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x20);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x30);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x40);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x50);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x60);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x70);
  iVar2 = (int)local_d8._padding_;
  bVar3 = ReadShaderOptionalData<FD3D12AmplificationShader>(&local_e8,param_1);
  if (bVar3) {
    pFVar6 = (FD3D12AmplificationShader *)&param_1->field_0x108;
    if (param_1 == (FD3D12AmplificationShader *)0x0) {
      pFVar6 = pFVar9;
    }
    bVar3 = ValidateShaderIsUsable((FD3D12ShaderData *)pFVar6,param_1->field_0x104);
    if (bVar3) {
      pTVar5 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,iVar2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->field_0x108,pTVar5);
      param_1->field_0x105 =
           ((byte)param_1->field_0x118 >> 4 ^ param_1->field_0x105) & 2 ^ param_1->field_0x105;
      if (param_1 == (FD3D12AmplificationShader *)0x0) {
        pFVar4 = pFVar9;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar4);
      pFVar9 = param_1;
      goto LAB_145a3c0fd;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3c0fd:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar9;
}

// InitStandardShaderWithCustomSerialization<FD3D12ComputeShader,`InitStandardShader<FD3D12ComputeShader>'::__l2::<lambda_1>_> @ 145a3c130

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12ComputeShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12ComputeShader,_InitStandardShader<FD3D12ComputeShader>_::__l2::<lambda_1>_>
          (FD3D12ComputeShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FD3D12ComputeShader *pFVar5;
  TArrayView<unsigned_char_const_,int> *pTVar6;
  FD3D12ComputeShader *pFVar7;
  char *pcVar8;
  undefined7 uVar9;
  FD3D12ComputeShader *pFVar10;
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar8 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12ComputeShader *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar10 = (FD3D12ComputeShader *)0x0;
  local_d8._padding_ = 0;
  uVar9 = (undefined7)((ulonglong)pcVar8 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar9,1));
  pFVar5 = (FD3D12ComputeShader *)&param_1->_padding_;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar5);
    }
  }
  else {
    *(undefined4 *)pFVar5 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  iVar3 = (int)local_d8._padding_;
  bVar4 = ReadShaderOptionalData<FD3D12ComputeShader>(&local_e8,param_1);
  if (bVar4) {
    pFVar7 = (FD3D12ComputeShader *)&param_1->_padding_;
    if (param_1 == (FD3D12ComputeShader *)0x0) {
      pFVar7 = pFVar10;
    }
    bVar4 = ValidateShaderIsUsable
                      ((FD3D12ShaderData *)pFVar7,
                       *(EShaderFrequency *)((longlong)&param_1->_padding_ + 4));
    if (bVar4) {
      pTVar6 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,iVar3);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,pTVar6);
      bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
      *(byte *)((longlong)&param_1->_padding_ + 5) =
           ((byte)param_1->_padding_ >> 4 ^ bVar1) & 2 ^ bVar1;
      if (param_1 == (FD3D12ComputeShader *)0x0) {
        pFVar5 = pFVar10;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar5);
      pFVar10 = param_1;
      goto LAB_145a3c32d;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3c32d:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar10;
}

// InitStandardShaderWithCustomSerialization<FD3D12GeometryShader,`InitStandardShader<FD3D12GeometryShader>'::__l2::<lambda_1>_> @ 145a3c360

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12GeometryShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12GeometryShader,_InitStandardShader<FD3D12GeometryShader>_::__l2::<lambda_1>_>
          (FD3D12GeometryShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FD3D12GeometryShader *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FD3D12GeometryShader *pFVar6;
  char *pcVar7;
  undefined7 uVar8;
  FD3D12GeometryShader *pFVar9;
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar7 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar7 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12GeometryShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar9 = (FD3D12GeometryShader *)0x0;
  local_d8._padding_ = 0;
  uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar8,1));
  pFVar4 = (FD3D12GeometryShader *)&param_1->field_0x18;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar4);
    }
  }
  else {
    *(undefined4 *)pFVar4 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x20);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x30);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x40);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x50);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x60);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x70);
  iVar2 = (int)local_d8._padding_;
  bVar3 = ReadShaderOptionalData<FD3D12GeometryShader>(&local_e8,param_1);
  if (bVar3) {
    pFVar6 = (FD3D12GeometryShader *)&param_1->field_0x108;
    if (param_1 == (FD3D12GeometryShader *)0x0) {
      pFVar6 = pFVar9;
    }
    bVar3 = ValidateShaderIsUsable((FD3D12ShaderData *)pFVar6,param_1->field_0x104);
    if (bVar3) {
      pTVar5 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,iVar2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->field_0x108,pTVar5);
      param_1->field_0x105 =
           ((byte)param_1->field_0x118 >> 4 ^ param_1->field_0x105) & 2 ^ param_1->field_0x105;
      if (param_1 == (FD3D12GeometryShader *)0x0) {
        pFVar4 = pFVar9;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar4);
      pFVar9 = param_1;
      goto LAB_145a3c55d;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3c55d:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar9;
}

// InitStandardShaderWithCustomSerialization<FD3D12MeshShader,`InitStandardShader<FD3D12MeshShader>'::__l2::<lambda_1>_> @ 145a3c590

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12MeshShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12MeshShader,_InitStandardShader<FD3D12MeshShader>_::__l2::<lambda_1>_>
          (FD3D12MeshShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FD3D12MeshShader *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FD3D12MeshShader *pFVar6;
  char *pcVar7;
  undefined7 uVar8;
  FD3D12MeshShader *pFVar9;
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar7 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar7 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12MeshShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar9 = (FD3D12MeshShader *)0x0;
  local_d8._padding_ = 0;
  uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar8,1));
  pFVar4 = (FD3D12MeshShader *)&param_1->field_0x18;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar4);
    }
  }
  else {
    *(undefined4 *)pFVar4 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x20);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x30);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x40);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x50);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x60);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x70);
  iVar2 = (int)local_d8._padding_;
  bVar3 = ReadShaderOptionalData<FD3D12MeshShader>(&local_e8,param_1);
  if (bVar3) {
    pFVar6 = (FD3D12MeshShader *)&param_1->field_0x108;
    if (param_1 == (FD3D12MeshShader *)0x0) {
      pFVar6 = pFVar9;
    }
    bVar3 = ValidateShaderIsUsable((FD3D12ShaderData *)pFVar6,param_1->field_0x104);
    if (bVar3) {
      pTVar5 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,iVar2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->field_0x108,pTVar5);
      param_1->field_0x105 =
           ((byte)param_1->field_0x118 >> 4 ^ param_1->field_0x105) & 2 ^ param_1->field_0x105;
      if (param_1 == (FD3D12MeshShader *)0x0) {
        pFVar4 = pFVar9;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar4);
      pFVar9 = param_1;
      goto LAB_145a3c78d;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3c78d:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar9;
}

// InitStandardShaderWithCustomSerialization<FD3D12PixelShader,`InitStandardShader<FD3D12PixelShader>'::__l2::<lambda_1>_> @ 145a3c7c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12PixelShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12PixelShader,_InitStandardShader<FD3D12PixelShader>_::__l2::<lambda_1>_>
          (FD3D12PixelShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FD3D12PixelShader *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FD3D12PixelShader *pFVar6;
  char *pcVar7;
  undefined7 uVar8;
  FD3D12PixelShader *pFVar9;
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar7 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar7 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12PixelShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar9 = (FD3D12PixelShader *)0x0;
  local_d8._padding_ = 0;
  uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar8,1));
  pFVar4 = (FD3D12PixelShader *)&param_1->field_0x18;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar4);
    }
  }
  else {
    *(undefined4 *)pFVar4 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x20);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x30);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x40);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x50);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x60);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x70);
  iVar2 = (int)local_d8._padding_;
  bVar3 = ReadShaderOptionalData<FD3D12PixelShader>(&local_e8,param_1);
  if (bVar3) {
    pFVar6 = (FD3D12PixelShader *)&param_1->field_0x108;
    if (param_1 == (FD3D12PixelShader *)0x0) {
      pFVar6 = pFVar9;
    }
    bVar3 = ValidateShaderIsUsable((FD3D12ShaderData *)pFVar6,param_1->field_0x104);
    if (bVar3) {
      pTVar5 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,iVar2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->field_0x108,pTVar5);
      param_1->field_0x105 =
           ((byte)param_1->field_0x118 >> 4 ^ param_1->field_0x105) & 2 ^ param_1->field_0x105;
      if (param_1 == (FD3D12PixelShader *)0x0) {
        pFVar4 = pFVar9;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar4);
      pFVar9 = param_1;
      goto LAB_145a3c9bd;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3c9bd:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar9;
}

// InitStandardShaderWithCustomSerialization<FD3D12RayTracingShader,`FD3D12DynamicRHI::RHICreateRayTracingShader'::__l2::<lambda_1>_> @ 145a3c9f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12RayTracingShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12RayTracingShader,_FD3D12DynamicRHI::RHICreateRayTracingShader_::__l2::<lambda_1>_>
          (FD3D12RayTracingShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12RayTracingShader *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FD3D12RayTracingShader *pFVar6;
  char *pcVar7;
  undefined7 uVar8;
  FD3D12RayTracingShader *pFVar9;
  int local_res8 [2];
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar7 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar7 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12RayTracingShader *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar9 = (FD3D12RayTracingShader *)0x0;
  local_d8._padding_ = 0;
  uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar8,1));
  pFVar4 = (FD3D12RayTracingShader *)&param_1->_padding_;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar4);
    }
  }
  else {
    *(undefined4 *)pFVar4 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  local_res8[0] = (int)local_d8._padding_;
  `FD3D12DynamicRHI::RHICreateRayTracingShader'::__l2::<lambda_1>::operator()
            (param_3,&local_d8,param_1,local_res8);
  bVar3 = ReadShaderOptionalData<FD3D12RayTracingShader>(&local_e8,param_1);
  if (bVar3) {
    pFVar6 = (FD3D12RayTracingShader *)&param_1->_padding_;
    if (param_1 == (FD3D12RayTracingShader *)0x0) {
      pFVar6 = pFVar9;
    }
    bVar3 = ValidateShaderIsUsable
                      ((FD3D12ShaderData *)pFVar6,
                       *(EShaderFrequency *)((longlong)&param_1->_padding_ + 4));
    if (bVar3) {
      pTVar5 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,local_res8[0]);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,pTVar5);
      bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
      *(byte *)((longlong)&param_1->_padding_ + 5) =
           ((byte)param_1->_padding_ >> 4 ^ bVar1) & 2 ^ bVar1;
      if (param_1 == (FD3D12RayTracingShader *)0x0) {
        pFVar4 = pFVar9;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar4);
      pFVar9 = param_1;
      goto LAB_145a3cc06;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3cc06:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar9;
}

// InitStandardShaderWithCustomSerialization<FD3D12VertexShader,`InitStandardShader<FD3D12VertexShader>'::__l2::<lambda_1>_> @ 145a3cc40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12VertexShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12VertexShader,_InitStandardShader<FD3D12VertexShader>_::__l2::<lambda_1>_>
          (FD3D12VertexShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FD3D12VertexShader *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FD3D12VertexShader *pFVar6;
  char *pcVar7;
  undefined7 uVar8;
  FD3D12VertexShader *pFVar9;
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar7 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar7 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12VertexShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar9 = (FD3D12VertexShader *)0x0;
  local_d8._padding_ = 0;
  uVar8 = (undefined7)((ulonglong)pcVar7 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar8,1));
  pFVar4 = (FD3D12VertexShader *)&param_1->field_0x18;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar4);
    }
  }
  else {
    *(undefined4 *)pFVar4 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x20);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x30);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x40);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x50);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x60);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->field_0x70);
  iVar2 = (int)local_d8._padding_;
  bVar3 = ReadShaderOptionalData<FD3D12VertexShader>(&local_e8,param_1);
  if (bVar3) {
    pFVar6 = (FD3D12VertexShader *)&param_1->field_0x108;
    if (param_1 == (FD3D12VertexShader *)0x0) {
      pFVar6 = pFVar9;
    }
    bVar3 = ValidateShaderIsUsable((FD3D12ShaderData *)pFVar6,param_1->field_0x104);
    if (bVar3) {
      pTVar5 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,iVar2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->field_0x108,pTVar5);
      param_1->field_0x105 =
           ((byte)param_1->field_0x118 >> 4 ^ param_1->field_0x105) & 2 ^ param_1->field_0x105;
      if (param_1 == (FD3D12VertexShader *)0x0) {
        pFVar4 = pFVar9;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar4);
      pFVar9 = param_1;
      goto LAB_145a3ce3d;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3ce3d:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar9;
}

// InitStandardShaderWithCustomSerialization<FD3D12WorkGraphShader,`InitStandardShader<FD3D12WorkGraphShader>'::__l2::<lambda_1>_> @ 145a3ce70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FD3D12WorkGraphShader * __cdecl
InitStandardShaderWithCustomSerialization<FD3D12WorkGraphShader,_InitStandardShader<FD3D12WorkGraphShader>_::__l2::<lambda_1>_>
          (FD3D12WorkGraphShader *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FD3D12WorkGraphShader *pFVar5;
  TArrayView<unsigned_char_const_,int> *pTVar6;
  FD3D12WorkGraphShader *pFVar7;
  char *pcVar8;
  undefined7 uVar9;
  FD3D12WorkGraphShader *pFVar10;
  FShaderCodeReader local_e8;
  FMemoryReaderView local_d8;
  TArrayView<unsigned_char_const_,int> local_28;
  
  local_e8.ShaderCode.DataPtr = param_2->DataPtr;
  local_e8.ShaderCode.ArrayNum = param_2->ArrayNum;
  local_e8.ShaderCode._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar8 = (char *)param_2;
  if (param_2->ArrayNum == 0) {
    pcVar8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h";
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                       ,0x3de,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12WorkGraphShader *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8.Bytes.Data = param_2->DataPtr;
  local_d8.Bytes.Size = (ulong64)(int)*(undefined8 *)&param_2->ArrayNum;
  pFVar10 = (FD3D12WorkGraphShader *)0x0;
  local_d8._padding_ = 0;
  uVar9 = (undefined7)((ulonglong)pcVar8 >> 8);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_d8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar9,1));
  pFVar5 = (FD3D12WorkGraphShader *)&param_1->_padding_;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (*(undefined4 **)(local_d8._padding_ + 8) < *(undefined4 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      FMemoryReaderView::Serialize(&local_d8,pFVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(uint *)pFVar5);
    }
  }
  else {
    *(undefined4 *)pFVar5 = **(undefined4 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_d8,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  iVar3 = (int)local_d8._padding_;
  bVar4 = ReadShaderOptionalData<FD3D12WorkGraphShader>(&local_e8,param_1);
  if (bVar4) {
    pFVar7 = (FD3D12WorkGraphShader *)&param_1->_padding_;
    if (param_1 == (FD3D12WorkGraphShader *)0x0) {
      pFVar7 = pFVar10;
    }
    bVar4 = ValidateShaderIsUsable
                      ((FD3D12ShaderData *)pFVar7,
                       *(EShaderFrequency *)((longlong)&param_1->_padding_ + 4));
    if (bVar4) {
      pTVar6 = FShaderCodeReader::GetOffsetShaderCode(&local_e8,&local_28,iVar3);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,pTVar6);
      bVar1 = *(byte *)((longlong)&param_1->_padding_ + 5);
      *(byte *)((longlong)&param_1->_padding_ + 5) =
           ((byte)param_1->_padding_ >> 4 ^ bVar1) & 2 ^ bVar1;
      if (param_1 == (FD3D12WorkGraphShader *)0x0) {
        pFVar5 = pFVar10;
      }
      UE::RHICore::InitStaticUniformBufferSlots((FRHIShaderData *)pFVar5);
      pFVar10 = param_1;
      goto LAB_145a3d06d;
    }
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  FRHIResource::Release((FRHIResource *)param_1);
LAB_145a3d06d:
  FArchive::~FArchive((FArchive *)&local_d8);
  return pFVar10;
}

// IntroSortInternal<FD3D12QueryRange,int,FIdentityFunctor,TDereferenceWrapper<FD3D12QueryRange,TLess<void>_>_> @ 145a3e250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FD3D12QueryRange,int,FIdentityFunctor,TDereferenceWrapper<FD3D12QueryRange,TLess<void>_>_>
          (FD3D12QueryRange *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12QueryRange,TLess<void>_> param_4)

{
  FD3D12QueryRange *pFVar1;
  FD3D12QueryRange FVar2;
  int iVar3;
  FD3D12QueryRange *pFVar4;
  FD3D12QueryRange **ppFVar5;
  FD3D12QueryRange *pFVar6;
  FD3D12QueryRange *pFVar7;
  FD3D12QueryRange *pFVar8;
  FD3D12QueryRange *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FD3D12QueryRange *local_338;
  FD3D12QueryRange *local_328;
  FD3D12QueryRange *local_320;
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
LAB_145a3e300:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_145a3e330:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000145a3e339;
          goto LAB_145a3e340;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->Start < pFVar1->Start) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_145a3e3fa;
      }
LAB_145a3e3e9:
      local_338 = pFVar1;
      HeapSortInternal<FD3D12QueryRange,int,FIdentityFunctor,TDereferenceWrapper<FD3D12QueryRange,TLess<void>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_145a3e3fa:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000145a3e339:
  if (pFVar4->Start <= pFVar9->Start) goto LAB_145a3e330;
LAB_145a3e340:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->Start <= pFVar6->Start);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_145a3e330;
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
    if (pFVar6 <= pFVar9 + 1) goto LAB_145a3e3fa;
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
    if (pFVar8 <= pFVar4) goto LAB_145a3e3fa;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_145a3e3e9;
  goto LAB_145a3e300;
}

// MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI> @ 145a3e490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI>
          (FRHIBlendState *param_1,FRHIBlendState *param_2)

{
  bool bVar1;
  undefined1 auStack_b8 [32];
  FBlendStateInitializerRHI local_98;
  FBlendStateInitializerRHI local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_58.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  if (param_1 != (FRHIBlendState *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,&local_58);
  }
  if (param_2 != (FRHIBlendState *)0x0) {
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,&local_98);
  }
  bVar1 = operator==(&local_58,&local_98);
  return bVar1;
}

// ReadShaderOptionalData<FD3D12AmplificationShader> @ 145a3e5d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12AmplificationShader>
          (FShaderCodeReader *param_1,FD3D12AmplificationShader *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uchar *puVar10;
  char *pcVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_res18 [2];
  int local_res20 [2];
  int local_278 [2];
  FString local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FName local_250;
  FBufferReaderBase local_248;
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
  
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar10 == (uchar *)0x0) {
    return false;
  }
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  param_2->field_0x118 = puVar10[0];
  param_2->field_0x119 = uVar3;
  param_2->field_0x11a = uVar4;
  param_2->field_0x11b = uVar5;
  param_2->field_0x11c = puVar10[4];
  pcVar11 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_270,pcVar11);
  uVar16 = 0;
  puVar1 = &param_2->field_0x90;
  if ((FString *)puVar1 != &local_270) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_270.Data.AllocatorInstance.Data;
    *(int *)&param_2->field_0x98 = local_270.Data.ArrayNum;
    *(int *)&param_2->field_0x9c = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar10;
    local_f8 = lVar14;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_260);
    if ((*(int *)&param_2->field_0xa8 != 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (0 < local_260.ArrayNum) {
      puVar1 = &param_2->field_0xa0;
      uVar17 = uVar16;
      do {
        uVar15 = (uint)uVar16;
        uVar8 = 0;
        if ((int)uVar15 < local_260.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if (*(int *)(local_260.AllocatorInstance.Data + uVar17 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)(local_260.AllocatorInstance.Data + uVar17);
        }
        pFVar12 = FName::FName(&local_250,pwVar13);
        if (((*(FName **)puVar1 <= pFVar12) &&
            (pFVar12 < *(FName **)puVar1 + *(int *)&param_2->field_0xac)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)&param_2->field_0xa8;
        if (iVar9 == *(int *)&param_2->field_0xac) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)puVar1,(int *)&param_2->field_0xac);
        }
        *(int *)&param_2->field_0xa8 = iVar9 + 1;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x10;
        *(FName *)(*(longlong *)puVar1 + (longlong)iVar9 * 8) = *pFVar12;
      } while ((int)(uVar15 + 1) < local_260.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  local_278[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_278);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_278[0], 0 < local_278[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar10;
    local_48 = lVar14;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)
               &param_2->field_0x128);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar10 != (uchar *)0x0) {
    uVar3 = puVar10[1];
    param_2->field_0x138 = puVar10[0];
    param_2->field_0x139 = uVar3;
  }
  local_res18[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar9 = local_res18[0];
  if ((puVar10 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248.ReaderSize = (long64)iVar9;
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_248.ReaderPos = 0;
    local_248.bFreeOnClose = false;
    local_248.ReaderData = puVar10;
    FArchiveState::SetIsLoading((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    puVar1 = &param_2->field_0x120;
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_248._padding_ + 8) < *(undefined4 **)local_248._padding_ + 1) {
      if ((local_248._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_248,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(uint *)puVar1);
      }
    }
    else {
      *(undefined4 *)puVar1 = **(undefined4 **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_248.bFreeOnClose != false) {
      FMemory::Free(local_248.ReaderData);
      local_248.ReaderData = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// ReadShaderOptionalData<FD3D12ComputeShader> @ 145a3eb50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12ComputeShader>(FShaderCodeReader *param_1,FD3D12ComputeShader *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  char *pcVar8;
  FName *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res18 [2];
  int local_res20 [2];
  int local_278 [2];
  FString local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FName local_250;
  FBufferReaderBase local_248;
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
  
  puVar7 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar7 == (uchar *)0x0) {
    return false;
  }
  *(undefined4 *)&param_2->_padding_ = *(undefined4 *)puVar7;
  *(uchar *)((longlong)&param_2->_padding_ + 4) = puVar7[4];
  pcVar8 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_270,pcVar8);
  uVar13 = 0;
  plVar1 = &param_2->_padding_;
  if ((FString *)plVar1 != &local_270) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_270.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_270.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar7 != (uchar *)0x0) && (lVar11 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar7;
    local_f8 = lVar11;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_260);
    if (((int)param_2->_padding_ != 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (0 < local_260.ArrayNum) {
      plVar1 = &param_2->_padding_;
      uVar14 = uVar13;
      do {
        uVar12 = (uint)uVar13;
        uVar5 = 0;
        if ((int)uVar12 < local_260.ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)(local_260.AllocatorInstance.Data + uVar14 + 8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(local_260.AllocatorInstance.Data + uVar14);
        }
        pFVar9 = FName::FName(&local_250,pwVar10);
        if ((((FName *)*plVar1 <= pFVar9) &&
            (pFVar9 < (FName *)*plVar1 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = (int)param_2->_padding_;
        if (iVar6 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar1,
                             (int *)((longlong)&param_2->_padding_ + 4));
        }
        *(int *)&param_2->_padding_ = iVar6 + 1;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 0x10;
        *(FName *)(*plVar1 + (longlong)iVar6 * 8) = *pFVar9;
      } while ((int)(uVar12 + 1) < local_260.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  local_278[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_278);
  if ((puVar7 != (uchar *)0x0) && (lVar11 = (longlong)local_278[0], 0 < local_278[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar7;
    local_48 = lVar11;
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
  puVar7 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar7 != (uchar *)0x0) {
    *(undefined2 *)&param_2->_padding_ = *(undefined2 *)puVar7;
  }
  local_res18[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar6 = local_res18[0];
  if ((puVar7 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248.ReaderSize = (long64)iVar6;
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_248.ReaderPos = 0;
    local_248.bFreeOnClose = false;
    local_248.ReaderData = puVar7;
    FArchiveState::SetIsLoading((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    plVar1 = &param_2->_padding_;
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_248._padding_ + 8) < *(undefined4 **)local_248._padding_ + 1) {
      if ((local_248._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_248,plVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(uint *)plVar1);
      }
    }
    else {
      *(undefined4 *)plVar1 = **(undefined4 **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_248.bFreeOnClose != false) {
      FMemory::Free(local_248.ReaderData);
      local_248.ReaderData = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// ReadShaderOptionalData<FD3D12GeometryShader> @ 145a3f0d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12GeometryShader>
          (FShaderCodeReader *param_1,FD3D12GeometryShader *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uchar *puVar10;
  char *pcVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_res18 [2];
  int local_res20 [2];
  int local_278 [2];
  FString local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FName local_250;
  FBufferReaderBase local_248;
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
  
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar10 == (uchar *)0x0) {
    return false;
  }
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  param_2->field_0x118 = puVar10[0];
  param_2->field_0x119 = uVar3;
  param_2->field_0x11a = uVar4;
  param_2->field_0x11b = uVar5;
  param_2->field_0x11c = puVar10[4];
  pcVar11 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_270,pcVar11);
  uVar16 = 0;
  puVar1 = &param_2->field_0x90;
  if ((FString *)puVar1 != &local_270) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_270.Data.AllocatorInstance.Data;
    *(int *)&param_2->field_0x98 = local_270.Data.ArrayNum;
    *(int *)&param_2->field_0x9c = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar10;
    local_f8 = lVar14;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_260);
    if ((*(int *)&param_2->field_0xa8 != 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (0 < local_260.ArrayNum) {
      puVar1 = &param_2->field_0xa0;
      uVar17 = uVar16;
      do {
        uVar15 = (uint)uVar16;
        uVar8 = 0;
        if ((int)uVar15 < local_260.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if (*(int *)(local_260.AllocatorInstance.Data + uVar17 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)(local_260.AllocatorInstance.Data + uVar17);
        }
        pFVar12 = FName::FName(&local_250,pwVar13);
        if (((*(FName **)puVar1 <= pFVar12) &&
            (pFVar12 < *(FName **)puVar1 + *(int *)&param_2->field_0xac)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)&param_2->field_0xa8;
        if (iVar9 == *(int *)&param_2->field_0xac) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)puVar1,(int *)&param_2->field_0xac);
        }
        *(int *)&param_2->field_0xa8 = iVar9 + 1;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x10;
        *(FName *)(*(longlong *)puVar1 + (longlong)iVar9 * 8) = *pFVar12;
      } while ((int)(uVar15 + 1) < local_260.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  local_278[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_278);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_278[0], 0 < local_278[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar10;
    local_48 = lVar14;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)
               &param_2->field_0x128);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar10 != (uchar *)0x0) {
    uVar3 = puVar10[1];
    param_2->field_0x138 = puVar10[0];
    param_2->field_0x139 = uVar3;
  }
  local_res18[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar9 = local_res18[0];
  if ((puVar10 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248.ReaderSize = (long64)iVar9;
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_248.ReaderPos = 0;
    local_248.bFreeOnClose = false;
    local_248.ReaderData = puVar10;
    FArchiveState::SetIsLoading((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    puVar1 = &param_2->field_0x120;
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_248._padding_ + 8) < *(undefined4 **)local_248._padding_ + 1) {
      if ((local_248._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_248,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(uint *)puVar1);
      }
    }
    else {
      *(undefined4 *)puVar1 = **(undefined4 **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_248.bFreeOnClose != false) {
      FMemory::Free(local_248.ReaderData);
      local_248.ReaderData = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// ReadShaderOptionalData<FD3D12MeshShader> @ 145a3f650

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12MeshShader>(FShaderCodeReader *param_1,FD3D12MeshShader *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uchar *puVar10;
  char *pcVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_res18 [2];
  int local_res20 [2];
  int local_278 [2];
  FString local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FName local_250;
  FBufferReaderBase local_248;
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
  
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar10 == (uchar *)0x0) {
    return false;
  }
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  param_2->field_0x118 = puVar10[0];
  param_2->field_0x119 = uVar3;
  param_2->field_0x11a = uVar4;
  param_2->field_0x11b = uVar5;
  param_2->field_0x11c = puVar10[4];
  pcVar11 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_270,pcVar11);
  uVar16 = 0;
  puVar1 = &param_2->field_0x90;
  if ((FString *)puVar1 != &local_270) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_270.Data.AllocatorInstance.Data;
    *(int *)&param_2->field_0x98 = local_270.Data.ArrayNum;
    *(int *)&param_2->field_0x9c = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar10;
    local_f8 = lVar14;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_260);
    if ((*(int *)&param_2->field_0xa8 != 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (0 < local_260.ArrayNum) {
      puVar1 = &param_2->field_0xa0;
      uVar17 = uVar16;
      do {
        uVar15 = (uint)uVar16;
        uVar8 = 0;
        if ((int)uVar15 < local_260.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if (*(int *)(local_260.AllocatorInstance.Data + uVar17 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)(local_260.AllocatorInstance.Data + uVar17);
        }
        pFVar12 = FName::FName(&local_250,pwVar13);
        if (((*(FName **)puVar1 <= pFVar12) &&
            (pFVar12 < *(FName **)puVar1 + *(int *)&param_2->field_0xac)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)&param_2->field_0xa8;
        if (iVar9 == *(int *)&param_2->field_0xac) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)puVar1,(int *)&param_2->field_0xac);
        }
        *(int *)&param_2->field_0xa8 = iVar9 + 1;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x10;
        *(FName *)(*(longlong *)puVar1 + (longlong)iVar9 * 8) = *pFVar12;
      } while ((int)(uVar15 + 1) < local_260.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  local_278[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_278);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_278[0], 0 < local_278[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar10;
    local_48 = lVar14;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)
               &param_2->field_0x128);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar10 != (uchar *)0x0) {
    uVar3 = puVar10[1];
    param_2->field_0x138 = puVar10[0];
    param_2->field_0x139 = uVar3;
  }
  local_res18[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar9 = local_res18[0];
  if ((puVar10 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248.ReaderSize = (long64)iVar9;
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_248.ReaderPos = 0;
    local_248.bFreeOnClose = false;
    local_248.ReaderData = puVar10;
    FArchiveState::SetIsLoading((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    puVar1 = &param_2->field_0x120;
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_248._padding_ + 8) < *(undefined4 **)local_248._padding_ + 1) {
      if ((local_248._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_248,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(uint *)puVar1);
      }
    }
    else {
      *(undefined4 *)puVar1 = **(undefined4 **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_248.bFreeOnClose != false) {
      FMemory::Free(local_248.ReaderData);
      local_248.ReaderData = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// ReadShaderOptionalData<FD3D12PixelShader> @ 145a3fbd0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12PixelShader>(FShaderCodeReader *param_1,FD3D12PixelShader *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uchar *puVar10;
  char *pcVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_res18 [2];
  int local_res20 [2];
  int local_278 [2];
  FString local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FName local_250;
  FBufferReaderBase local_248;
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
  
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar10 == (uchar *)0x0) {
    return false;
  }
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  param_2->field_0x118 = puVar10[0];
  param_2->field_0x119 = uVar3;
  param_2->field_0x11a = uVar4;
  param_2->field_0x11b = uVar5;
  param_2->field_0x11c = puVar10[4];
  pcVar11 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_270,pcVar11);
  uVar16 = 0;
  puVar1 = &param_2->field_0x90;
  if ((FString *)puVar1 != &local_270) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_270.Data.AllocatorInstance.Data;
    *(int *)&param_2->field_0x98 = local_270.Data.ArrayNum;
    *(int *)&param_2->field_0x9c = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar10;
    local_f8 = lVar14;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_260);
    if ((*(int *)&param_2->field_0xa8 != 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (0 < local_260.ArrayNum) {
      puVar1 = &param_2->field_0xa0;
      uVar17 = uVar16;
      do {
        uVar15 = (uint)uVar16;
        uVar8 = 0;
        if ((int)uVar15 < local_260.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if (*(int *)(local_260.AllocatorInstance.Data + uVar17 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)(local_260.AllocatorInstance.Data + uVar17);
        }
        pFVar12 = FName::FName(&local_250,pwVar13);
        if (((*(FName **)puVar1 <= pFVar12) &&
            (pFVar12 < *(FName **)puVar1 + *(int *)&param_2->field_0xac)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)&param_2->field_0xa8;
        if (iVar9 == *(int *)&param_2->field_0xac) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)puVar1,(int *)&param_2->field_0xac);
        }
        *(int *)&param_2->field_0xa8 = iVar9 + 1;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x10;
        *(FName *)(*(longlong *)puVar1 + (longlong)iVar9 * 8) = *pFVar12;
      } while ((int)(uVar15 + 1) < local_260.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  local_278[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_278);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_278[0], 0 < local_278[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar10;
    local_48 = lVar14;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)
               &param_2->field_0x128);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar10 != (uchar *)0x0) {
    uVar3 = puVar10[1];
    param_2->field_0x138 = puVar10[0];
    param_2->field_0x139 = uVar3;
  }
  local_res18[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar9 = local_res18[0];
  if ((puVar10 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248.ReaderSize = (long64)iVar9;
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_248.ReaderPos = 0;
    local_248.bFreeOnClose = false;
    local_248.ReaderData = puVar10;
    FArchiveState::SetIsLoading((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    puVar1 = &param_2->field_0x120;
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_248._padding_ + 8) < *(undefined4 **)local_248._padding_ + 1) {
      if ((local_248._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_248,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(uint *)puVar1);
      }
    }
    else {
      *(undefined4 *)puVar1 = **(undefined4 **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_248.bFreeOnClose != false) {
      FMemory::Free(local_248.ReaderData);
      local_248.ReaderData = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// ReadShaderOptionalData<FD3D12RayTracingShader> @ 145a40150

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12RayTracingShader>
          (FShaderCodeReader *param_1,FD3D12RayTracingShader *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  char *pcVar8;
  FName *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res18 [2];
  int local_res20 [2];
  int local_278 [2];
  FString local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FName local_250;
  FBufferReaderBase local_248;
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
  
  puVar7 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar7 == (uchar *)0x0) {
    return false;
  }
  *(undefined4 *)&param_2->_padding_ = *(undefined4 *)puVar7;
  *(uchar *)((longlong)&param_2->_padding_ + 4) = puVar7[4];
  pcVar8 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_270,pcVar8);
  uVar13 = 0;
  plVar1 = &param_2->_padding_;
  if ((FString *)plVar1 != &local_270) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_270.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_270.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar7 != (uchar *)0x0) && (lVar11 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar7;
    local_f8 = lVar11;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_260);
    if (((int)param_2->_padding_ != 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (0 < local_260.ArrayNum) {
      plVar1 = &param_2->_padding_;
      uVar14 = uVar13;
      do {
        uVar12 = (uint)uVar13;
        uVar5 = 0;
        if ((int)uVar12 < local_260.ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)(local_260.AllocatorInstance.Data + uVar14 + 8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(local_260.AllocatorInstance.Data + uVar14);
        }
        pFVar9 = FName::FName(&local_250,pwVar10);
        if ((((FName *)*plVar1 <= pFVar9) &&
            (pFVar9 < (FName *)*plVar1 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = (int)param_2->_padding_;
        if (iVar6 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar1,
                             (int *)((longlong)&param_2->_padding_ + 4));
        }
        *(int *)&param_2->_padding_ = iVar6 + 1;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 0x10;
        *(FName *)(*plVar1 + (longlong)iVar6 * 8) = *pFVar9;
      } while ((int)(uVar12 + 1) < local_260.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  local_278[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_278);
  if ((puVar7 != (uchar *)0x0) && (lVar11 = (longlong)local_278[0], 0 < local_278[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar7;
    local_48 = lVar11;
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
  puVar7 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar7 != (uchar *)0x0) {
    *(undefined2 *)&param_2->_padding_ = *(undefined2 *)puVar7;
  }
  local_res18[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar6 = local_res18[0];
  if ((puVar7 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248.ReaderSize = (long64)iVar6;
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_248.ReaderPos = 0;
    local_248.bFreeOnClose = false;
    local_248.ReaderData = puVar7;
    FArchiveState::SetIsLoading((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    plVar1 = &param_2->_padding_;
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_248._padding_ + 8) < *(undefined4 **)local_248._padding_ + 1) {
      if ((local_248._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_248,plVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(uint *)plVar1);
      }
    }
    else {
      *(undefined4 *)plVar1 = **(undefined4 **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_248.bFreeOnClose != false) {
      FMemory::Free(local_248.ReaderData);
      local_248.ReaderData = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// ReadShaderOptionalData<FD3D12VertexShader> @ 145a406d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12VertexShader>(FShaderCodeReader *param_1,FD3D12VertexShader *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uchar *puVar10;
  char *pcVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_res18 [2];
  int local_res20 [2];
  int local_278 [2];
  FString local_270;
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  FName local_250;
  FBufferReaderBase local_248;
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
  
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar10 == (uchar *)0x0) {
    return false;
  }
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  param_2->field_0x118 = puVar10[0];
  param_2->field_0x119 = uVar3;
  param_2->field_0x11a = uVar4;
  param_2->field_0x11b = uVar5;
  param_2->field_0x11c = puVar10[4];
  pcVar11 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_270,pcVar11);
  uVar16 = 0;
  puVar1 = &param_2->field_0x90;
  if ((FString *)puVar1 != &local_270) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_270.Data.AllocatorInstance.Data;
    *(int *)&param_2->field_0x98 = local_270.Data.ArrayNum;
    *(int *)&param_2->field_0x9c = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar10;
    local_f8 = lVar14;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,&local_260);
    if ((*(int *)&param_2->field_0xa8 != 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (0 < local_260.ArrayNum) {
      puVar1 = &param_2->field_0xa0;
      uVar17 = uVar16;
      do {
        uVar15 = (uint)uVar16;
        uVar8 = 0;
        if ((int)uVar15 < local_260.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if (*(int *)(local_260.AllocatorInstance.Data + uVar17 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)(local_260.AllocatorInstance.Data + uVar17);
        }
        pFVar12 = FName::FName(&local_250,pwVar13);
        if (((*(FName **)puVar1 <= pFVar12) &&
            (pFVar12 < *(FName **)puVar1 + *(int *)&param_2->field_0xac)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)&param_2->field_0xa8;
        if (iVar9 == *(int *)&param_2->field_0xac) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)puVar1,(int *)&param_2->field_0xac);
        }
        *(int *)&param_2->field_0xa8 = iVar9 + 1;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x10;
        *(FName *)(*(longlong *)puVar1 + (longlong)iVar9 * 8) = *pFVar12;
      } while ((int)(uVar15 + 1) < local_260.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  local_278[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,local_278);
  if ((puVar10 != (uchar *)0x0) && (lVar14 = (longlong)local_278[0], 0 < local_278[0])) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar10;
    local_48 = lVar14;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)
               &param_2->field_0x128);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  puVar10 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar10 != (uchar *)0x0) {
    uVar3 = puVar10[1];
    param_2->field_0x138 = puVar10[0];
    param_2->field_0x139 = uVar3;
  }
  local_res18[0] = 0;
  puVar10 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar9 = local_res18[0];
  if ((puVar10 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248.ReaderSize = (long64)iVar9;
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_248.ReaderPos = 0;
    local_248.bFreeOnClose = false;
    local_248.ReaderData = puVar10;
    FArchiveState::SetIsLoading((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    puVar1 = &param_2->field_0x120;
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_248._padding_ + 8) < *(undefined4 **)local_248._padding_ + 1) {
      if ((local_248._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_248,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(uint *)puVar1);
      }
    }
    else {
      *(undefined4 *)puVar1 = **(undefined4 **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_248.bFreeOnClose != false) {
      FMemory::Free(local_248.ReaderData);
      local_248.ReaderData = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// ReadShaderOptionalData<FD3D12WorkGraphShader> @ 145a40c50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
ReadShaderOptionalData<FD3D12WorkGraphShader>
          (FShaderCodeReader *param_1,FD3D12WorkGraphShader *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  char *pcVar8;
  FName *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res18 [2];
  int local_res20 [2];
  int local_328;
  int local_324;
  FString local_320;
  TArray<FString,TSizedDefaultAllocator<32>_> local_310;
  FName local_300;
  FBufferReaderBase local_2f8;
  FArchiveState local_248;
  uchar *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  char local_1a0;
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
  
  puVar7 = FShaderCodeReader::FindOptionalData(param_1,PackedResourceCounts,'\x05');
  if (puVar7 == (uchar *)0x0) {
    return false;
  }
  *(undefined4 *)&param_2->_padding_ = *(undefined4 *)puVar7;
  *(uchar *)((longlong)&param_2->_padding_ + 4) = puVar7[4];
  pcVar8 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_320,pcVar8);
  uVar13 = 0;
  plVar1 = &param_2->_padding_;
  if ((FString *)plVar1 != &local_320) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_320.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_320.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_320.Data.ArrayMax;
    local_320.Data.ArrayNum = 0;
    local_320.Data.ArrayMax = 0;
    local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,UniformBuffers,local_res20);
  if ((puVar7 != (uchar *)0x0) && (lVar11 = (longlong)local_res20[0], 0 < local_res20[0])) {
    FArchiveState::FArchiveState(&local_248);
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_1b0 = 0;
    local_1a0 = '\0';
    local_1b8 = puVar7;
    local_1a8 = lVar11;
    FArchiveState::SetIsLoading(&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.ArrayNum = 0;
    local_310.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_248,&local_310);
    if (((int)param_2->_padding_ != 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("OutShader.Debug.UniformBufferNames.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x2f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (0 < local_310.ArrayNum) {
      plVar1 = &param_2->_padding_;
      uVar14 = uVar13;
      do {
        uVar12 = (uint)uVar13;
        uVar5 = 0;
        if ((int)uVar12 < local_310.ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)(local_310.AllocatorInstance.Data + uVar14 + 8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(local_310.AllocatorInstance.Data + uVar14);
        }
        pFVar9 = FName::FName(&local_300,pwVar10);
        if ((((FName *)*plVar1 <= pFVar9) &&
            (pFVar9 < (FName *)*plVar1 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = (int)param_2->_padding_;
        if (iVar6 == *(int *)((longlong)&param_2->_padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)plVar1,
                             (int *)((longlong)&param_2->_padding_ + 4));
        }
        *(int *)&param_2->_padding_ = iVar6 + 1;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 0x10;
        *(FName *)(*plVar1 + (longlong)iVar6 * 8) = *pFVar9;
      } while ((int)(uVar12 + 1) < local_310.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_310.AllocatorInstance.Data,local_310.ArrayNum);
    if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.AllocatorInstance.Data);
    }
    local_248._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_1a0 != '\0') {
      FMemory::Free(local_1b8);
      local_1b8 = (uchar *)0x0;
    }
    local_248._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_248);
  }
  local_328 = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,VendorExtension,&local_328);
  if ((puVar7 != (uchar *)0x0) && (lVar11 = (longlong)local_328, 0 < local_328)) {
    FArchiveState::FArchiveState(&local_198);
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_100 = 0;
    local_f0 = '\0';
    local_108 = puVar7;
    local_f8 = lVar11;
    FArchiveState::SetIsLoading(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_198,
               (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&param_2->_padding_
              );
    local_198._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f0 != '\0') {
      FMemory::Free(local_108);
      local_108 = (uchar *)0x0;
    }
    local_198._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_198);
  }
  puVar7 = FShaderCodeReader::FindOptionalData(param_1,Features,'\x02');
  if (puVar7 != (uchar *)0x0) {
    *(undefined2 *)&param_2->_padding_ = *(undefined2 *)puVar7;
  }
  local_res18[0] = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,ShaderBindingLayout,local_res18);
  iVar6 = local_res18[0];
  if ((puVar7 != (uchar *)0x0) && (0 < local_res18[0])) {
    if ((local_res18[0] != 4) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderBindingLayoutSize == sizeof(OutShader.ShaderBindingLayoutHash)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Shaders.cpp"
                           ,0x4c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FArchiveState::FArchiveState((FArchiveState *)&local_2f8);
    local_2f8.ReaderSize = (long64)iVar6;
    local_2f8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_2f8.ReaderPos = 0;
    local_2f8.bFreeOnClose = false;
    local_2f8.ReaderData = puVar7;
    FArchiveState::SetIsLoading((FArchiveState *)&local_2f8,true);
    (**(code **)(local_2f8._padding_ + 0x108))(&local_2f8,0);
    plVar1 = &param_2->_padding_;
    local_2f8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (*(undefined4 **)(local_2f8._padding_ + 8) < *(undefined4 **)local_2f8._padding_ + 1) {
      if ((local_2f8._padding_._2_1_ & 1) == 0) {
        FBufferReaderBase::Serialize(&local_2f8,plVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_2f8,(uint *)plVar1);
      }
    }
    else {
      *(undefined4 *)plVar1 = **(undefined4 **)local_2f8._padding_;
      *(longlong *)local_2f8._padding_ = *(longlong *)local_2f8._padding_ + 4;
    }
    local_2f8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_2f8.bFreeOnClose != false) {
      FMemory::Free(local_2f8.ReaderData);
      local_2f8.ReaderData = (uchar *)0x0;
    }
    local_2f8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_2f8);
  }
  local_324 = 0;
  puVar7 = FShaderCodeReader::FindOptionalDataAndSize(param_1,EntryPoint,&local_324);
  if ((puVar7 != (uchar *)0x0) && (lVar11 = (longlong)local_324, 0 < local_324)) {
    FArchiveState::FArchiveState(&local_e8);
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_50 = 0;
    local_40 = '\0';
    local_58 = puVar7;
    local_48 = lVar11;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    operator<<((FArchive *)&local_e8,&param_2->EntryPoint);
    local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_40 != '\0') {
      FMemory::Free(local_58);
      local_58 = (uchar *)0x0;
    }
    local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  UE::RHICore::SetupShaderDiagnosticData((FRHIShader *)param_2,param_1);
  return true;
}

// __builtin_array_init_helper<TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_>_> @ 145a43600

void __cdecl
__builtin_array_init_helper<TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_>_>
          (TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = &param_1->ArrayMax;
    do {
      (((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)(piVar1 + -3))->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)(piVar1 + -1) = 0;
      piVar1 = piVar1 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// __builtin_array_init_helper<TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_>_> @ 145a43630

void __cdecl
__builtin_array_init_helper<TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_>_>
          (TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = &param_1->ArrayMax;
    do {
      (((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)(piVar1 + -3))->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)(piVar1 + -1) = 0;
      piVar1 = piVar1 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// get<1,TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_&> @ 145a43660

TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> * __cdecl
get<1,TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_&>
          (TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> *)&param_1->field_0x8;
}

// get<0,TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_&> @ 145a43670

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<FD3D12QueryHeap> * __cdecl
get<0,TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_&>
          (TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (TRefCountPtr<FD3D12QueryHeap> *)param_1;
}

// FThreadSafeStaticStat<`FWaitInitialMipDataUploadTask::GetStatId'::__l2::FStat_FGatherRequestsTask> @ 145a43680

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FWaitInitialMipDataUploadTask::GetStatId(void)const_::_2_::FStat_FGatherRequestsTask>
* __thiscall
FThreadSafeStaticStat<`FWaitInitialMipDataUploadTask::GetStatId'::__l2::FStat_FGatherRequestsTask>::
FThreadSafeStaticStat<_FWaitInitialMipDataUploadTask::GetStatId_::__l2::FStat_FGatherRequestsTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FGatherRequestsTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FGatherRequestsTask","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// QueueSyncPoint @ 145a46ac0

QueueSyncPoint * __thiscall
D3DX12Residency::Internal::QueueSyncPoint::QueueSyncPoint(QueueSyncPoint *this)

{
  this->pFence = (Fence *)0x0;
  this->LastUsedValue = 0;
  return this;
}

// ~<unnamed-type-Common> @ 145a46bf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12StateCache::<unnamed-type-PipelineState>::<unnamed-type-Common>::~<unnamed_type_Common>
          (<unnamed_type_Common> *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  <unnamed_type_Common> *p<Var3;
  longlong lVar4;
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar5;
  
  lVar2 = 6;
  p<Var3 = this + 1;
  lVar4 = 6;
  do {
    pFVar1 = p<Var3[-1].QueuedBindlessUAVs[5].AllocatorInstance.Data;
    p<Var3 = (<unnamed_type_Common> *)(p<Var3[-1].QueuedBindlessUAVs + 5);
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pTVar5 = (TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
           this->QueuedBindlessUAVs;
  do {
    pFVar1 = pTVar5[-1].AllocatorInstance.Data;
    pTVar5 = pTVar5 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// ~TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,1,1> @ 145a47ae0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_CreateTextureInitializerForWriting_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateTextureInitializerForWriting'::`2'::<lambda_1>,1,1>::_vftable_;
  FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((longlong)this + 0x18));
  if (*(longlong *)((longlong)this + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a47b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x138) + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1> @ 145a47b30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FD3D12DynamicRHI::RHIEndFrame_::__l2::<lambda_1>,1,1>(void *this)

{
  TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> *pTVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::`2'::<lambda_1>,1,1>::_vftable_;
  pTVar1 = *(TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> **)((longlong)this + 0xd0);
  if (*(TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> **)((longlong)this + 0xd0) ==
      (TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> *)0x0) {
    pTVar1 = (TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> *)((longlong)this + 0x10);
  }
  DestructItems<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>,int>
            (pTVar1,*(int *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::__l6::<lambda_1>,1,0> @ 145a47b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::__l6::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FD3D12DynamicRHI::RHIProcessDeleteQueue_::__l6::<lambda_1>,1,0>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::`6'::<lambda_1>,1,0>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
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

// ~TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0> @ 145a47ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FD3D12DynamicRHI::RHICreateTextureInitializer_::__l11::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a47bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x138) + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_25_>,1,0> @ 145a47bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_25_>,1,0>
::
~TFunction_OwnedObject<_UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer_::__l1::<lambda_25_>,1,0>
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
       ___7__TFunction_OwnedObject_V<lambda_25_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
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

// ~TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,1,0> @ 145a47bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_CreateTextureInitializerForWriting_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateTextureInitializerForWriting'::`2'::<lambda_2>,1,0>::_vftable_;
  if (*(longlong *)((longlong)this + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a47c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x138) + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_2>,1,1> @ 145a47c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FD3D12DynamicRHI::EnqueueEndOfPipeTask_::__l2::<lambda_2>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::`2'::<lambda_2>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000145a47c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0> @ 145a47c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FD3D12DynamicRHI::RHIEndFrame_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::`2'::<lambda_2>,1,0>::_vftable_;
  return;
}

// operator== @ 145a49800

bool __cdecl operator==(D3D12_SAMPLER_DESC *param_1,D3D12_SAMPLER_DESC *param_2)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,0x34);
  return iVar1 == 0;
}

// operator() @ 145a4a290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
`CreateTextureInitializerForWriting'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined4 uVar1;
  FRHICommandBase *pFVar2;
  FRHICommandListBase *in_R8;
  longlong local_98;
  FD3D12ResourceLocation local_90;
  undefined4 local_18;
  
  UE::D3D12RHI::TextureUtils::ReconcileInitialState
            (in_R8,*(FD3D12Texture **)this,*(ED3D12Access *)((longlong)this + 8),CopyDest);
  local_98 = *(longlong *)this;
  uVar1 = *(undefined4 *)((longlong)this + 0xc);
  FD3D12ResourceLocation::FD3D12ResourceLocation
            (&local_90,(FD3D12ResourceLocation *)((longlong)this + 0x10));
  local_18 = uVar1;
  if (((GRHICommandList.bLatchedBypass == false) || ((in_R8->PersistentState).bImmediate == '\0'))
     && (in_R8->bExecuting == false)) {
    pFVar2 = FMemStackBase::Alloc(&in_R8->MemManager,0xa0,8);
    in_R8->NumCommands = in_R8->NumCommands + 1;
    *in_R8->CommandLink = pFVar2;
    in_R8->CommandLink = &pFVar2->Next;
    pFVar2->Next = (FRHICommandBase *)0x0;
    pFVar2->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::UploadInitialData'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar2[1]._padding_ = local_98;
    FD3D12ResourceLocation::FD3D12ResourceLocation
              ((FD3D12ResourceLocation *)&pFVar2[1].Next,&local_90);
    *(undefined4 *)&pFVar2[9]._padding_ = local_18;
    pFVar2[9].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    `FD3D12Texture::UploadInitialData'::__l2::<lambda_1>::operator()(&local_98,in_R8);
  }
  FD3D12ResourceLocation::ReleaseResource(&local_90);
  (param_1->MemManager).Top = *(uchar **)this;
  *(undefined8 *)this = 0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// operator() @ 145a4a470

uint __thiscall
`DebugSerializeScene'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,uint param_2,EAlignmentMode param_3)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 == CheckBeginning) {
    if ((*(byte *)(*(longlong *)this + 8) & 0xf) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputBuffer.Num() % AlignmentRequirement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                         ,0x7e,L"Serialized scene data must be vector-aligned");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
  }
  else if (param_3 == AlignBeginning) {
    uVar4 = (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)this)->ArrayNum & 0xf;
    if (uVar4 != 0) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
                (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)this,0x10 - uVar4);
    }
  }
  pFVar1 = *(ForAnyElementType **)this;
  uVar4 = *(uint *)&pFVar1[1].Data;
  if ((param_1 == (void *)0x0) && (param_2 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2,pFVar1,(int *)(pFVar1 + 1),(int *)((longlong)&pFVar1[1].Data + 4));
  if (param_2 != 0) {
    memcpy(pFVar1->Data + iVar5,param_1,(longlong)(int)param_2);
  }
  return uVar4;
}

// operator+= @ 145a4ff60

D3D12_QUERY_DATA_PIPELINE_STATISTICS * __cdecl
operator+=(D3D12_QUERY_DATA_PIPELINE_STATISTICS *param_1,
          D3D12_QUERY_DATA_PIPELINE_STATISTICS *param_2)

{
  param_1->IAVertices = param_1->IAVertices + param_2->IAVertices;
  param_1->IAPrimitives = param_1->IAPrimitives + param_2->IAPrimitives;
  param_1->VSInvocations = param_1->VSInvocations + param_2->VSInvocations;
  param_1->GSInvocations = param_1->GSInvocations + param_2->GSInvocations;
  param_1->GSPrimitives = param_1->GSPrimitives + param_2->GSPrimitives;
  param_1->CInvocations = param_1->CInvocations + param_2->CInvocations;
  param_1->CPrimitives = param_1->CPrimitives + param_2->CPrimitives;
  param_1->PSInvocations = param_1->PSInvocations + param_2->PSInvocations;
  param_1->HSInvocations = param_1->HSInvocations + param_2->HSInvocations;
  param_1->DSInvocations = param_1->DSInvocations + param_2->DSInvocations;
  param_1->CSInvocations = param_1->CSInvocations + param_2->CSInvocations;
  return param_1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 145a4ffc0

/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12ShaderResourceView_RHI::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12ShaderResourceView_RHI::_vector_deleting_destructor__adjustor_48__
          (FD3D12ShaderResourceView_RHI *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FD3D12ShaderResourceView_RHI *)&this[-1].field_0xe0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{312}' @ 145a4ffd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12Texture::`vector deleting
   destructor'`adjustor{312}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12Texture::_vector_deleting_destructor__adjustor_312__(FD3D12Texture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D12Texture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145a4ffe4

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12Texture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12Texture::_vector_deleting_destructor__adjustor_40__(FD3D12Texture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D12Texture *)&this[-1].LockedMap.field_0x38,param_1);
  return pvVar1;
}

// `default_constructor_closure' @ 145a50000

void __thiscall
TSharedPtr<FD3D12DepthStencilView,1>::_default_constructor_closure_
          (TSharedPtr<FD3D12DepthStencilView,1> *this)

{
  this->Object = (FD3D12DepthStencilView *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return;
}

// `scalar_deleting_destructor' @ 145a50010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
TD3D12View<FD3D12ShaderResourceView,D3D12_SHADER_RESOURCE_VIEW_DESC>::_scalar_deleting_destructor_
          (TD3D12View<FD3D12ShaderResourceView,D3D12_SHADER_RESOURCE_VIEW_DESC> *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50050

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateTextureInitializerForWriting'::`2'::<lambda_1>,1,1>::_vftable_;
  FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((longlong)this + 0x18));
  if (*(longlong *)((longlong)this + 8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x138) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a500b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> *pTVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::`2'::<lambda_1>,1,1>::_vftable_;
  pTVar1 = *(TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> **)((longlong)this + 0xd0);
  if (*(TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> **)((longlong)this + 0xd0) ==
      (TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> *)0x0) {
    pTVar1 = (TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_> *)((longlong)this + 0x10);
  }
  DestructItems<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>,int>
            (pTVar1,*(int *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::__l6::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::`6'::<lambda_1>,1,0>::
        _vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x138) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a501e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_25_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_25_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateTextureInitializerForWriting'::`2'::<lambda_2>,1,0>::_vftable_;
  if (*(longlong *)((longlong)this + 8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x138) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::`2'::<lambda_2>,1,1>::
        _vftable_;
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

// `scalar_deleting_destructor' @ 145a502f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::`2'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50330

void * __thiscall
TGraphTask<FWaitInitialMipDataUploadTask>::_scalar_deleting_destructor_
          (TGraphTask<FWaitInitialMipDataUploadTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50390

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12DepthStencilView,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FD3D12DepthStencilView,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a503d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12RenderTargetView,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FD3D12RenderTargetView,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50410

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRHIBreadcrumbAllocatorArray,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRHIBreadcrumbAllocatorArray,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50450

void * __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::_scalar_deleting_destructor_
          (FBinaryRootSignatureCreator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PendingTables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DescriptorRanges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a504b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12AmplificationShader::_scalar_deleting_destructor_
          (FD3D12AmplificationShader *this,uint param_1)

{
  if (*(void **)&this->field_0x128 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x128);
  }
  if (*(void **)&this->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x108);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50510

void * __thiscall
FD3D12BlendState::_scalar_deleting_destructor_(FD3D12BlendState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50550

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12ComputeShader::_scalar_deleting_destructor_(FD3D12ComputeShader *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a505b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FD3D12DepthStencilState::_scalar_deleting_destructor_(FD3D12DepthStencilState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a505f0

void * __thiscall
FD3D12DynamicRHI::_scalar_deleting_destructor_(FD3D12DynamicRHI *this,uint param_1)

{
  ~FD3D12DynamicRHI(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50630

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12GeometryShader::_scalar_deleting_destructor_(FD3D12GeometryShader *this,uint param_1)

{
  if (*(void **)&this->field_0x128 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x128);
  }
  if (*(void **)&this->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x108);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50690

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void * __thiscall FD3D12Heap::_scalar_deleting_destructor_(FD3D12Heap *this,uint param_1)

{
  ~FD3D12Heap(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a506d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12MeshShader::_scalar_deleting_destructor_(FD3D12MeshShader *this,uint param_1)

{
  if (*(void **)&this->field_0x128 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x128);
  }
  if (*(void **)&this->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x108);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50730

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12PayloadBase::_scalar_deleting_destructor_(FD3D12PayloadBase *this,uint param_1)

{
  ~FD3D12PayloadBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50770

void * __thiscall
FD3D12PayloadBaseFixLayout::_scalar_deleting_destructor_
          (FD3D12PayloadBaseFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a507a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12PixelShader::_scalar_deleting_destructor_(FD3D12PixelShader *this,uint param_1)

{
  if (*(void **)&this->field_0x128 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x128);
  }
  if (*(void **)&this->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x108);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50800

void * __thiscall
FD3D12RHICmdEndMultiUpdateTexture3D::_scalar_deleting_destructor_
          (FD3D12RHICmdEndMultiUpdateTexture3D *this,uint param_1)

{
  ~FD3D12RHICmdEndMultiUpdateTexture3D(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50840

void * __thiscall
FD3D12RasterizerState::_scalar_deleting_destructor_(FD3D12RasterizerState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50880

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingShader::_scalar_deleting_destructor_(FD3D12RayTracingShader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IntersectionEntryPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnyHitEntryPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50920

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Resource::_scalar_deleting_destructor_(FD3D12Resource *this,uint param_1)

{
  ~FD3D12Resource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50960

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12ResourceCollection::_scalar_deleting_destructor_(FD3D12ResourceCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FD3D12Buffer *pFVar2;
  
  this->_padding_ = (longlong)&___7FD3D12ResourceCollection__6B_;
  pFVar1 = (this->AllTextureReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllSrvs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BufferSRV).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Buffer).Reference;
  if (pFVar2 != (FD3D12Buffer *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x10))();
  }
  FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::
  ~FD3D12LinkedAdapterObject<FD3D12ResourceCollection>
            ((FD3D12LinkedAdapterObject<FD3D12ResourceCollection> *)&this->_padding_);
  FRHIResourceCollection::~FRHIResourceCollection((FRHIResourceCollection *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50a00

void * __thiscall
FD3D12SamplerState::_scalar_deleting_destructor_(FD3D12SamplerState *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FD3D12SamplerState__6B_;
  FreeDescriptor(this);
  FD3D12LinkedAdapterObject<FD3D12SamplerState>::~FD3D12LinkedAdapterObject<FD3D12SamplerState>
            ((FD3D12LinkedAdapterObject<FD3D12SamplerState> *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50a60

void * __thiscall
FD3D12ShaderBundle::_scalar_deleting_destructor_(FD3D12ShaderBundle *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50aa0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12ShaderResourceView::_scalar_deleting_destructor_(FD3D12ShaderResourceView *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50ae0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12ShaderResourceView_RHI::_scalar_deleting_destructor_
          (FD3D12ShaderResourceView_RHI *this,uint param_1)

{
  FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::
  ~FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>
            ((FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *)&this->field_0xc8);
  FD3D12View::~FD3D12View((FD3D12View *)&this->field_0x30);
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50b50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Texture::_scalar_deleting_destructor_(FD3D12Texture *this,uint param_1)

{
  ~FD3D12Texture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50b90

void * __thiscall FD3D12Thread::_scalar_deleting_destructor_(FD3D12Thread *this,uint param_1)

{
  FRunnableThread *pFVar1;
  
  this->bExit = true;
  this->_padding_ = (longlong)&___7FD3D12Thread__6B_;
  SetEvent(this->Event);
  (**(code **)(this->Thread->_padding_ + 0x20))();
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  CloseHandle(this->Event);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50c10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12VertexShader::_scalar_deleting_destructor_(FD3D12VertexShader *this,uint param_1)

{
  if (*(void **)&this->field_0x128 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x128);
  }
  if (*(void **)&this->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x108);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50c70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12WorkGraphShader::_scalar_deleting_destructor_(FD3D12WorkGraphShader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->EntryPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50cf0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FRHIAmplificationShader::_scalar_deleting_destructor_(FRHIAmplificationShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50d30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall FRHIMeshShader::_scalar_deleting_destructor_(FRHIMeshShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50d70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FRHIRayTracingShader::_scalar_deleting_destructor_(FRHIRayTracingShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50db0

void * __thiscall
FRHIShaderBundle::_scalar_deleting_destructor_(FRHIShaderBundle *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50df0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FRHIWorkGraphShader::_scalar_deleting_destructor_(FRHIWorkGraphShader *this,uint param_1)

{
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50e30

void * __thiscall
D3D12ShaderUtils::FRootSignatureCreator::_scalar_deleting_destructor_
          (FRootSignatureCreator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a50e60

void * __thiscall
ID3D12DynamicRHI::_scalar_deleting_destructor_(ID3D12DynamicRHI *this,uint param_1)

{
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// AddAllStandardTablesForVisibility @ 145a51020

void __cdecl
D3D12ShaderUtils::AddAllStandardTablesForVisibility
          (FRootSignatureCreator *param_1,ERootSignatureVisibility param_2)

{
  undefined4 in_register_00000014;
  
  (**(code **)(param_1->_padding_ + 0x28))(param_1,CONCAT44(in_register_00000014,param_2),1,0x40,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,param_2,0,0x10,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,param_2,3,0x20,0);
  return;
}

// BeginTrackingObject @ 145a53b40

void __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::BeginTrackingObject
          (ResidencyManagerInternal *this,ManagedObject *param_1)

{
  uint *puVar1;
  ulong64 *puVar2;
  _LIST_ENTRY *p_Var3;
  CriticalSection *lpCriticalSection;
  LRUCache *pLVar4;
  _LIST_ENTRY *p_Var5;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection != (CriticalSection *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (param_1 != (ManagedObject *)0x0) {
    if (this->cStartEvicted != false) {
      param_1->ResidencyStatus = EVICTED;
      (**(code **)((longlong)*this->Device + 0x118))(this->Device,1,&param_1->pUnderlying);
    }
    pLVar4 = &this->LRU;
    p_Var5 = &param_1->ListEntry;
    if (param_1->ResidencyStatus == RESIDENT) {
      (param_1->ListEntry).Blink = &pLVar4->ResidentObjectListHead;
      p_Var5->Flink = (pLVar4->ResidentObjectListHead).Flink;
      ((pLVar4->ResidentObjectListHead).Flink)->Blink = p_Var5;
      puVar1 = &(this->LRU).NumResidentObjects;
      *puVar1 = *puVar1 + 1;
      (pLVar4->ResidentObjectListHead).Flink = p_Var5;
      puVar2 = &(this->LRU).ResidentSize;
      *puVar2 = *puVar2 + param_1->Size;
    }
    else {
      p_Var3 = &(this->LRU).EvictedObjectListHead;
      (param_1->ListEntry).Blink = p_Var3;
      p_Var5->Flink = p_Var3->Flink;
      p_Var3->Flink->Blink = p_Var5;
      puVar1 = &(this->LRU).NumEvictedObjects;
      *puVar1 = *puVar1 + 1;
      p_Var3->Flink = p_Var5;
    }
  }
  if (lpCriticalSection != (CriticalSection *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// CalculateTextureSize @ 145a54200

ulong64 __cdecl CalculateTextureSize(FRHITextureDesc *param_1)

{
  ushort uVar1;
  short sVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1->Format;
  sVar2 = 1;
  if ((param_1->Dimension == TextureCube) || (param_1->Dimension == TextureCubeArray)) {
    uVar1 = 6;
  }
  else {
    uVar1 = 1;
  }
  if ((param_1->Format < PF_ETC1) && ((0x100000100800U >> (uVar3 & 0x3f) & 1) != 0)) {
    sVar2 = 2;
  }
  return (ulonglong)
         ((uint)(ushort)((ushort)param_1->NumMips * param_1->ArraySize * sVar2) * (uint)uVar1 &
         0xffff) * ((((ulonglong)param_1->Depth - 1) + (longlong)GPixelFormats[uVar3].BlockSizeZ) /
                   (ulonglong)(longlong)GPixelFormats[uVar3].BlockSizeZ) *
                   ((ulonglong)
                    ((longlong)(param_1->Extent).field0_0x0._s_0.Y + -1 +
                    (longlong)GPixelFormats[uVar3].BlockSizeY) /
                   (ulonglong)(longlong)GPixelFormats[uVar3].BlockSizeY) *
                   ((ulonglong)
                    ((longlong)(param_1->Extent).field0_0x0._s_0.X + -1 +
                    (longlong)GPixelFormats[uVar3].BlockSizeX) /
                   (ulonglong)(longlong)GPixelFormats[uVar3].BlockSizeX) *
                   (longlong)GPixelFormats[uVar3].BlockBytes;
}

// ConvertDXGIToFColor @ 145a56f00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::ConvertDXGIToFColor
          (DXGI_FORMAT param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,FColor *param_6
          ,FReadSurfaceDataFlags *param_7)

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
                          ((FStaticBasicLogRecord *)&PTR_u_CPU_read_of_R32_151088ab0,
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
                          ((FStaticBasicLogRecord *)&PTR_u_CPU_read_of_R32_151088ab0,
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
              if (param_2 <= uVar15) goto LAB_145a57a37;
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
LAB_145a57a37:
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

// ConvertRAWSurfaceDataToFLinearColor @ 145a57ff0

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
LAB_145a586f0:
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
      if (GPixelFormats[param_1].BlockBytes == 4) goto LAB_145a586f0;
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

// ConvertRawA2B10G10R10DataToFLinearColor @ 145a589f0

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

// ConvertRawB8G8R8A8DataToFLinearColor @ 145a58d00

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

// ConvertRawDepthStencil64DataToFLinearColor @ 145a58f30

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
          goto LAB_145a5910b;
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
LAB_145a5910b:
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

// ConvertRawR16G16B16A16DataToFLinearColor @ 145a591a0

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

// ConvertRawR16G16B16A16FDataToFColor @ 145a59450

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

// ConvertRawR16G16B16A16FDataToFLinearColor @ 145a59970

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

// ConvertRawR24G8DataToFLinearColor @ 145a59e10

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
          goto LAB_145a5a02b;
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
LAB_145a5a02b:
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

// ConvertRawR32G32B32A32DataToFColor @ 145a5a0d0

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

// ConvertRawR32G32B32A32DataToFLinearColor @ 145a5a700

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

// ConvertRawR8G8B8A8DataToFLinearColor @ 145a5ac70

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

// CreateGfxRootSignature @ 145a5d700

void __cdecl
D3D12ShaderUtils::CreateGfxRootSignature
          (FRootSignatureCreator *param_1,EShaderBindingLayoutFlags param_2)

{
  param_1->Flags = param_2 | InputAssembler;
  (**(code **)(param_1->_padding_ + 8))(param_1,1);
  if ((param_2 & BindlessResources) != None) {
    (**(code **)(param_1->_padding_ + 8))(param_1,0x400);
  }
  if ((param_2 & BindlessSamplers) != None) {
    (**(code **)(param_1->_padding_ + 8))(param_1,0x800);
  }
  (**(code **)(param_1->_padding_ + 0x20))(param_1,0,999,5);
  if ((param_2 & RootConstants) != None) {
    (**(code **)(param_1->_padding_ + 0x30))(param_1,4,0,3);
  }
  (**(code **)(param_1->_padding_ + 0x28))(param_1,1,1,0x40,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,1,0,0x10,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,1,3,0x20,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,0,1,0x40,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,0,0,0x10,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,0,3,0x20,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,2,1,0x40,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,2,0,0x10,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,2,3,0x20,0);
  if ((param_2 & AllowMeshShaders) != None) {
    AddAllStandardTablesForVisibility(param_1,Mesh);
    AddAllStandardTablesForVisibility(param_1,Amplification);
  }
  (**(code **)(param_1->_padding_ + 0x28))(param_1,1,2,0x10,0);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,0,2,0x10,0);
  return;
}

// CreateRayTracingSignature @ 145a5def0

void __cdecl
D3D12ShaderUtils::CreateRayTracingSignature
          (FRootSignatureCreator *param_1,bool param_2,D3D12_ROOT_SIGNATURE_FLAGS param_3,
          EShaderBindingLayoutFlags param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  
  param_1->Flags = param_4;
  if ((param_4 & InputAssembler) != None) {
    (**(code **)(param_1->_padding_ + 8))(param_1,1);
  }
  if ((param_4 & BindlessResources) != None) {
    (**(code **)(param_1->_padding_ + 8))(param_1,0x400);
  }
  if ((param_4 & BindlessSamplers) != None) {
    (**(code **)(param_1->_padding_ + 8))(param_1,0x800);
  }
  (**(code **)(param_1->_padding_ + 8))(param_1,param_3);
  uVar3 = 0;
  param_1->RegisterSpace = param_2 ^ 1;
  if (param_2) {
    pcVar1 = *(code **)(param_1->_padding_ + 0x30);
    if ((param_1->Flags & BindlessResources) == None) {
      (*pcVar1)(param_1,4,0,2);
      (**(code **)(param_1->_padding_ + 0x18))(param_1,0,2,5);
      (**(code **)(param_1->_padding_ + 0x18))(param_1,1,2,5);
    }
    else {
      (*pcVar1)(param_1,8);
    }
  }
  else {
    uVar2 = uVar3;
    if ((param_1->Flags & ShaderBindingLayoutUsed) != None) {
      do {
        (**(code **)(param_1->_padding_ + 0x10))(param_1,uVar2,4,5);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 8);
    }
  }
  if ((param_1->Flags & BindlessResources) == None) {
    (**(code **)(param_1->_padding_ + 0x28))(param_1,5,1,0x40,0);
    (**(code **)(param_1->_padding_ + 0x28))(param_1,5,0,0x10,0);
    (**(code **)(param_1->_padding_ + 0x28))(param_1,5,3,0x20,0);
  }
  else {
    do {
      (**(code **)(param_1->_padding_ + 0x10))(param_1,uVar3,param_1->RegisterSpace,5);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
  }
  (**(code **)(param_1->_padding_ + 0x28))(param_1,5,2,0x10,5);
  return;
}

// CreateTextureInitializerForWriting @ 145a5fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FBaseTextureInitializerImplementation * __cdecl
CreateTextureInitializerForWriting
          (FBaseTextureInitializerImplementation *__return_storage_ptr__,
          FRHICommandListBase *param_1,FCreateTextureInternalResult *param_2)

{
  char cVar1;
  byte bVar2;
  FD3D12Texture *pFVar3;
  code *pcVar4;
  FD3D12BaseShaderResource *pFVar5;
  void *pvVar6;
  FD3D12BaseShaderResource *pFVar7;
  bool bVar8;
  longlong lVar9;
  FBaseTextureInitializerImplementation *pFVar10;
  ID3D12Device *pIVar11;
  ushort uVar12;
  code **ppcVar13;
  undefined ***pppuVar14;
  undefined1 auStackY_228 [32];
  FD3D12ResourceLocation local_1c8;
  FD3D12Texture *local_148;
  ED3D12Access local_140;
  ED3D12Access local_13c;
  FD3D12ResourceLocation local_138;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  FRHICommandListBase *local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FD3D12Texture *local_90;
  void *local_88;
  undefined ***local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar3 = param_2->Texture;
  local_b8 = param_1;
  lVar9 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
  cVar1 = *(char *)(lVar9 + 0x32);
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    uVar12 = *(ushort *)(lVar9 + 0x2e);
  }
  else {
    uVar12 = 1;
  }
  if ((byte)(cVar1 - 3U) < 2) {
    uVar12 = uVar12 * 6;
  }
  bVar2 = *(byte *)(lVar9 + 0x30);
  lVar9 = pFVar3->_padding_;
  if (pFVar3->_padding_ == 0) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FBaseTextureInitializerImplementation *)(*pcVar4)();
      return pFVar10;
    }
  }
  pIVar11 = FD3D12Device::GetDevice((FD3D12Device *)pFVar3->_padding_);
  (**(code **)((longlong)*pIVar11 + 0x130))(pIVar11,lVar9 + 0x50,0,(uint)bVar2 * (uint)uVar12);
  if (pFVar3->_padding_ == 0) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FBaseTextureInitializerImplementation *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_1c8._padding_ = pFVar3->_padding_;
  local_1c8.UnderlyingResource = (FD3D12Resource *)0x0;
  local_1c8.field3_0x18.Allocator = (FD3D12BuddyAllocator *)0x0;
  local_1c8.AllocatorData.BlockAllocatorPrivateData.FrameFence = 0;
  local_1c8.AllocatorData._8_8_ = 0;
  local_1c8.Owner = (FD3D12BaseShaderResource *)0x0;
  local_1c8.AllocatorData.BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.NextAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_1c8.MappedBaseAddress = (void *)0x0;
  local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.Owner = (FRHIPoolResource *)0x0;
  local_1c8.GPUVirtualAddress = 0;
  local_1c8.OffsetFromBaseOfResource = 0;
  local_1c8.Size = 0;
  local_1c8.Type = eUndefined;
  local_1c8.AllocatorType = AT_Unknown;
  local_1c8.bTransient = false;
  if (pFVar3->_padding_ == 0) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FBaseTextureInitializerImplementation *)(*pcVar4)();
      return pFVar10;
    }
  }
  FD3D12FastAllocator::Allocate
            ((FD3D12FastAllocator *)(pFVar3->_padding_ + 0x1550),0,0x200,&local_1c8);
  pvVar6 = local_1c8.MappedBaseAddress;
  (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_,local_c0);
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`CreateTextureInitializerForWriting'::`2'::<lambda_2>,1,0>::
              _vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
                ::Call;
  local_88 = pvVar6;
  local_90 = pFVar3;
  (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_,local_bc);
  local_140 = param_2->CreateD3D12Access;
  local_13c = param_2->DesiredD3D12Access;
  local_148 = pFVar3;
  if (local_1c8._padding_ == 0) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FBaseTextureInitializerImplementation *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_138._padding_ = local_1c8._padding_;
  local_138.field3_0x18.Allocator = (FD3D12BuddyAllocator *)0x0;
  local_138.Owner = (FD3D12BaseShaderResource *)0x0;
  local_138.UnderlyingResource = (FD3D12Resource *)0x0;
  local_138.Type = eUndefined;
  local_138.AllocatorType = AT_Unknown;
  local_138.bTransient = false;
  local_138.MappedBaseAddress = (void *)0x0;
  local_138.GPUVirtualAddress = 0;
  local_138.OffsetFromBaseOfResource = 0;
  local_138.Size = 0;
  local_138.AllocatorData.BlockAllocatorPrivateData.FrameFence = 0;
  local_138.AllocatorData._8_8_ = 0;
  local_138.AllocatorData.BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  local_138.AllocatorData.PoolAllocatorPrivateData.PoolData.NextAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_138.AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_138.AllocatorData.PoolAllocatorPrivateData.PoolData.Owner = (FRHIPoolResource *)0x0;
  if (local_1c8.bTransient != false) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("!Destination.bTransient && !Source.bTransient",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                       ,0x4bb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FBaseTextureInitializerImplementation *)(*pcVar4)();
      return pFVar10;
    }
  }
  pFVar7 = local_138.Owner;
  pFVar5 = local_1c8.Owner;
  FD3D12ResourceLocation::ReleaseResource(&local_138);
  local_138._padding_ = local_1c8._padding_;
  local_138.Owner = local_1c8.Owner;
  local_138.UnderlyingResource = local_1c8.UnderlyingResource;
  local_138.field3_0x18.Allocator = local_1c8.field3_0x18.Allocator;
  local_138.AllocatorData.BuddyAllocatorPrivateData =
       local_1c8.AllocatorData.BuddyAllocatorPrivateData;
  local_138.AllocatorData._8_8_ = local_1c8.AllocatorData._8_8_;
  local_138.AllocatorData.BlockAllocatorPrivateData.ResourceHeap =
       local_1c8.AllocatorData.BlockAllocatorPrivateData.ResourceHeap;
  local_138.AllocatorData.PoolAllocatorPrivateData.PoolData.NextAllocation =
       local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.NextAllocation;
  local_138.AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation =
       local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation;
  local_138.AllocatorData.PoolAllocatorPrivateData.PoolData.Owner =
       local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.Owner;
  local_138.MappedBaseAddress = local_1c8.MappedBaseAddress;
  local_138.GPUVirtualAddress = local_1c8.GPUVirtualAddress;
  local_138.AllocatorType = local_1c8.AllocatorType;
  local_138.Type = local_1c8.Type;
  local_138.bTransient = local_1c8.bTransient;
  local_138._115_5_ = local_1c8._115_5_;
  local_138.OffsetFromBaseOfResource = local_1c8.OffsetFromBaseOfResource;
  local_138.Size = local_1c8.Size;
  if (local_1c8.AllocatorType == AT_Pool) {
    FD3D12PoolAllocator::TransferOwnership
              (local_1c8.field3_0x18.PoolAllocator,&local_1c8,&local_138);
  }
  local_1c8.Type = eUndefined;
  local_1c8.AllocatorType = AT_Unknown;
  local_1c8.UnderlyingResource = (FD3D12Resource *)0x0;
  local_1c8.MappedBaseAddress = (void *)0x0;
  local_1c8.AllocatorData.BlockAllocatorPrivateData.FrameFence = 0;
  local_1c8.AllocatorData._8_8_ = 0;
  local_1c8.GPUVirtualAddress = 0;
  local_1c8.AllocatorData.BlockAllocatorPrivateData.ResourceHeap = (FD3D12Resource *)0x0;
  local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.NextAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_1c8.Size = 0;
  local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation =
       (FRHIPoolAllocationData *)0x0;
  local_1c8.AllocatorData.PoolAllocatorPrivateData.PoolData.Owner = (FRHIPoolResource *)0x0;
  local_1c8.OffsetFromBaseOfResource = 0;
  local_1c8.field3_0x18.Allocator = (FD3D12BuddyAllocator *)0x0;
  local_78[0] = (code *)0x0;
  local_1c8.Owner = pFVar5;
  local_138.Owner = pFVar7;
  local_50 = FMemory::Malloc(0x90,8);
  local_50[1] = (code *)0x0;
  ppcVar13 = local_50 + 1;
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`CreateTextureInitializerForWriting'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *ppcVar13 = (code *)local_148;
  local_148 = (FD3D12Texture *)0x0;
  *(ED3D12Access *)(local_50 + 2) = local_140;
  *(ED3D12Access *)((longlong)local_50 + 0x14) = local_13c;
  FD3D12ResourceLocation::FD3D12ResourceLocation
            ((FD3D12ResourceLocation *)(local_50 + 3),&local_138);
  if (ppcVar13 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                  ::Call;
  }
  FRHITextureInitializer::FRHITextureInitializer
            ((FRHITextureInitializer *)__return_storage_ptr__,local_b8,(FRHITexture *)pFVar3,pvVar6,
             0,(TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)local_78
             ,(TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
               *)local_a8);
  if (local_78[0] != (code *)0x0) {
    ppcVar13 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar13 = local_50;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  FD3D12ResourceLocation::ReleaseResource(&local_138);
  if (local_148 != (FD3D12Texture *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_148 + 0x138) + 0x10))();
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar14 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar14 = local_80;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  FD3D12ResourceLocation::ReleaseResource(&local_1c8);
  return __return_storage_ptr__;
}

// D3D12RT_ComputeBytesPerPixel @ 145a61070

uint __cdecl D3D12RT_ComputeBytesPerPixel(DXGI_FORMAT param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  switch(param_1) {
  case DXGI_FORMAT_R32G32B32A32_TYPELESS:
  case DXGI_FORMAT_R32G32B32A32_FLOAT:
  case DXGI_FORMAT_R32G32B32A32_UINT:
  case DXGI_FORMAT_R32G32B32A32_SINT:
    uVar3 = 0x10;
    break;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                       ,0x69,L"");
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
  case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
  case DXGI_FORMAT_B8G8R8A8_UNORM:
  case DXGI_FORMAT_B8G8R8X8_UNORM:
  case DXGI_FORMAT_B8G8R8A8_TYPELESS:
  case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
  case DXGI_FORMAT_B8G8R8X8_TYPELESS:
  case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
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
    uVar3 = 2;
    break;
  case DXGI_FORMAT_R8_TYPELESS:
  case DXGI_FORMAT_R8_UNORM:
  case DXGI_FORMAT_R8_UINT:
  case DXGI_FORMAT_R8_SNORM:
  case DXGI_FORMAT_R8_SINT:
  case DXGI_FORMAT_A8_UNORM:
  case DXGI_FORMAT_R1_UNORM:
    uVar3 = 1;
  }
  uVar4 = UE::DXGIUtilities::GetFormatSizeInBytes(param_1);
  if ((uVar3 != uVar4) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("BytesPerPixel == UE::DXGIUtilities::GetFormatSizeInBytes(Format)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                         ,0x6e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return uVar3;
}

// D3D12RayTracingSceneDebugUpdate @ 145a611b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
D3D12RayTracingSceneDebugUpdate
          (FD3D12RayTracingScene *param_1,FD3D12Buffer *param_2,uint param_3,
          FD3D12CommandContext *param_4)

{
  if (GRayTracingSerializeSceneNextFrame) {
    DebugSerializeScene(param_1,param_2,param_3,param_4);
    GRayTracingSerializeSceneNextFrame = false;
  }
  return;
}

// D3DX12SerializeVersionedRootSignature @ 145a61380

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

int __cdecl
D3DX12SerializeVersionedRootSignature
          (D3D12_VERSIONED_ROOT_SIGNATURE_DESC *param_1,D3D_ROOT_SIGNATURE_VERSION param_2,
          ID3D10Blob **param_3,ID3D10Blob **param_4)

{
  D3D12_ROOT_PARAMETER_TYPE *pDVar1;
  D3D12_FILTER *pDVar2;
  longlong lVar3;
  D3D_ROOT_SIGNATURE_VERSION DVar4;
  LPVOID lpMem;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  HANDLE pvVar10;
  D3D12_STATIC_SAMPLER_DESC *pDVar11;
  D3D12_STATIC_SAMPLER_DESC *pDVar12;
  D3D12_ROOT_PARAMETER_TYPE DVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  D3D12_STATIC_SAMPLER_DESC *pDVar17;
  ulonglong uVar18;
  D3D12_ROOT_PARAMETER *pDVar19;
  uint uVar20;
  D3D12_STATIC_SAMPLER_DESC *pDVar21;
  D3D12_ROOT_PARAMETER_TYPE DVar22;
  D3D12_STATIC_SAMPLER_DESC *pDVar23;
  LPVOID local_88;
  LPVOID local_80;
  uint local_70 [2];
  LPVOID local_68;
  D3D12_ROOT_PARAMETER *local_60;
  D3D12_STATIC_SAMPLER_DESC *local_58;
  D3D12_STATIC_SAMPLER_DESC *local_50;
  D3D12_ROOT_SIGNATURE_FLAGS local_48;
  
  pDVar17 = (D3D12_STATIC_SAMPLER_DESC *)0x0;
  iVar9 = 0;
  if (param_4 != (ID3D10Blob **)0x0) {
    *param_4 = (ID3D10Blob *)0x0;
  }
  if (param_2 != D3D_ROOT_SIGNATURE_VERSION_1) {
    if (param_2 != D3D_ROOT_SIGNATURE_VERSION_1_1) {
      uVar8 = D3D12SerializeVersionedRootSignature(param_1,param_3,param_4);
      return uVar8;
    }
    DVar4 = param_1->Version;
    if ((DVar4 == D3D_ROOT_SIGNATURE_VERSION_1) || (DVar4 == D3D_ROOT_SIGNATURE_VERSION_1_1)) {
      uVar8 = D3D12SerializeVersionedRootSignature(param_1,param_3,param_4);
      return uVar8;
    }
    if (DVar4 != D3D_ROOT_SIGNATURE_VERSION_1_2) {
      return 0x80070057;
    }
    uVar16 = (param_1->field1_0x8).Desc_1_0.NumStaticSamplers;
    pDVar11 = pDVar17;
    if (uVar16 == 0) {
LAB_145a614ed:
      uVar16 = 0;
      local_48 = (param_1->field1_0x8).Desc_1_0.Flags;
      local_50 = pDVar11;
      if (pDVar11 == (D3D12_STATIC_SAMPLER_DESC *)0x0) {
        local_50 = (param_1->field1_0x8).Desc_1_0.pStaticSamplers;
        goto LAB_145a6148b;
      }
    }
    else {
      pvVar10 = GetProcessHeap();
      pDVar11 = HeapAlloc(pvVar10,0,(ulonglong)uVar16 * 0x34);
      if (pDVar11 == (D3D12_STATIC_SAMPLER_DESC *)0x0) {
        return 0x8007000e;
      }
      if ((param_1->field1_0x8).Desc_1_0.NumStaticSamplers == 0) goto LAB_145a614ed;
      do {
        puVar14 = (undefined8 *)
                  ((longlong)pDVar17 * 0x38 +
                  (longlong)(param_1->field1_0x8).Desc_1_0.pStaticSamplers);
        if ((*(uint *)((longlong)puVar14 + 0x34) & 0xfffffffe) != 0) {
          uVar8 = 0x80070057;
          goto LAB_145a614c9;
        }
        uVar6 = *puVar14;
        uVar7 = puVar14[1];
        uVar15 = (int)pDVar17 + 1;
        pDVar17 = pDVar11 + (longlong)pDVar17;
        pDVar17->Filter = (int)uVar6;
        pDVar17->AddressU = (int)((ulonglong)uVar6 >> 0x20);
        pDVar17->AddressV = (int)uVar7;
        pDVar17->AddressW = (int)((ulonglong)uVar7 >> 0x20);
        uVar6 = puVar14[2];
        uVar7 = puVar14[3];
        pDVar17->MipLODBias = (float)(int)uVar6;
        pDVar17->MaxAnisotropy = (int)((ulonglong)uVar6 >> 0x20);
        pDVar17->ComparisonFunc = (int)uVar7;
        pDVar17->BorderColor = (int)((ulonglong)uVar7 >> 0x20);
        fVar5 = *(float *)((longlong)puVar14 + 0x24);
        uVar16 = *(uint *)(puVar14 + 5);
        uVar20 = *(uint *)((longlong)puVar14 + 0x2c);
        pDVar17->MinLOD = *(float *)(puVar14 + 4);
        pDVar17->MaxLOD = fVar5;
        pDVar17->ShaderRegister = uVar16;
        pDVar17->RegisterSpace = uVar20;
        pDVar17->ShaderVisibility = *(D3D12_SHADER_VISIBILITY *)(puVar14 + 6);
        uVar16 = (param_1->field1_0x8).Desc_1_0.NumStaticSamplers;
        pDVar17 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)uVar15;
      } while (uVar15 < uVar16);
      local_48 = (param_1->field1_0x8).Desc_1_0.Flags;
      local_50 = pDVar11;
    }
    pDVar11 = local_50;
LAB_145a6148b:
    local_68 = (LPVOID)CONCAT44(local_68._4_4_,(param_1->field1_0x8).Desc_1_0.NumParameters);
    local_60 = (param_1->field1_0x8).Desc_1_0.pParameters;
    local_58 = (D3D12_STATIC_SAMPLER_DESC *)CONCAT44(local_58._4_4_,uVar16);
    local_70[0] = 2;
    uVar8 = D3D12SerializeVersionedRootSignature(local_70,param_3,param_4);
    if (pDVar11 == (D3D12_STATIC_SAMPLER_DESC *)0x0) {
      return uVar8;
    }
LAB_145a614c9:
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pDVar11);
    return uVar8;
  }
  DVar4 = param_1->Version;
  if (DVar4 == D3D_ROOT_SIGNATURE_VERSION_1) {
    uVar8 = D3D12SerializeRootSignature(&param_1->field1_0x8,1);
    return uVar8;
  }
  if ((DVar4 != D3D_ROOT_SIGNATURE_VERSION_1_1) && (DVar4 != D3D_ROOT_SIGNATURE_VERSION_1_2)) {
    return 0x80070057;
  }
  uVar18 = (ulonglong)(param_1->field1_0x8).Desc_1_0.NumParameters;
  if (uVar18 == 0) {
    local_80 = (LPVOID)0x0;
LAB_145a61590:
    pDVar11 = pDVar17;
    pDVar21 = pDVar17;
    local_88 = local_80;
    if ((param_1->field1_0x8).Desc_1_0.NumParameters != 0) {
      do {
        pDVar1 = (D3D12_ROOT_PARAMETER_TYPE *)((longlong)local_80 + (longlong)pDVar21 * 0x20);
        *pDVar1 = (param_1->field1_0x8).Desc_1_0.pParameters[(longlong)pDVar21].ParameterType;
        pDVar1[6] = (param_1->field1_0x8).Desc_1_0.pParameters[(longlong)pDVar21].ShaderVisibility;
        pDVar19 = (param_1->field1_0x8).Desc_1_0.pParameters + (longlong)pDVar21;
        DVar13 = pDVar19->ParameterType;
        if (DVar13 == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE) {
          DVar13 = (pDVar19->field1_0x8).DescriptorTable.NumDescriptorRanges;
          lVar3 = (ulonglong)DVar13 * 5;
          if ((lVar3 == 0) || ((int)pDVar11 < 0)) {
            pDVar12 = pDVar17;
            if (lVar3 != 0) goto LAB_145a6165d;
LAB_145a61667:
            if ((-1 < (int)pDVar11) &&
               (pDVar23 = pDVar17, DVar13 != D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)) {
              do {
                DVar22 = (int)pDVar23 + D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;
                lVar3 = (longlong)pDVar23 * 0x18;
                pDVar2 = &pDVar12->Filter + (longlong)pDVar23 * 5;
                pDVar2[2] = *(D3D12_TEXTURE_ADDRESS_MODE *)
                             ((longlong)(pDVar19->field1_0x8).DescriptorTable.pDescriptorRanges +
                             lVar3 + 8);
                pDVar2[1] = *(D3D12_TEXTURE_ADDRESS_MODE *)
                             ((longlong)(pDVar19->field1_0x8).DescriptorTable.pDescriptorRanges +
                             lVar3 + 4);
                pDVar2[4] = (D3D12_FILTER)
                            *(float *)((longlong)
                                       (pDVar19->field1_0x8).DescriptorTable.pDescriptorRanges +
                                      lVar3 + 0x14);
                *pDVar2 = *(D3D12_FILTER *)
                           (lVar3 + (longlong)
                                    (pDVar19->field1_0x8).DescriptorTable.pDescriptorRanges);
                pDVar2[3] = *(D3D12_TEXTURE_ADDRESS_MODE *)
                             ((longlong)(pDVar19->field1_0x8).DescriptorTable.pDescriptorRanges +
                             lVar3 + 0xc);
                DVar13 = (pDVar19->field1_0x8).DescriptorTable.NumDescriptorRanges;
                pDVar23 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)DVar22;
              } while (DVar22 < DVar13);
            }
          }
          else {
            pvVar10 = GetProcessHeap();
            pDVar12 = HeapAlloc(pvVar10,0,(ulonglong)DVar13 * 0x14);
            DVar13 = (pDVar19->field1_0x8).DescriptorTable.NumDescriptorRanges;
LAB_145a6165d:
            if (pDVar12 != (D3D12_STATIC_SAMPLER_DESC *)0x0) goto LAB_145a61667;
            pDVar11 = (D3D12_STATIC_SAMPLER_DESC *)0x8007000e;
          }
          *(D3D12_STATIC_SAMPLER_DESC **)(pDVar1 + 4) = pDVar12;
LAB_145a616d5:
          pDVar1[2] = DVar13;
        }
        else {
          if (DVar13 == D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS) {
            pDVar1[4] = (pDVar19->field1_0x8).Constants.Num32BitValues;
            pDVar1[3] = (param_1->field1_0x8).Desc_1_0.pParameters[(longlong)pDVar21].field1_0x8.
                        Constants.RegisterSpace;
            DVar13 = (param_1->field1_0x8).Desc_1_0.pParameters[(longlong)pDVar21].field1_0x8.
                     DescriptorTable.NumDescriptorRanges;
            goto LAB_145a616d5;
          }
          if (((DVar13 == D3D12_ROOT_PARAMETER_TYPE_CBV) ||
              (DVar13 == D3D12_ROOT_PARAMETER_TYPE_SRV)) ||
             (DVar13 == D3D12_ROOT_PARAMETER_TYPE_UAV)) {
            pDVar1[3] = (pDVar19->field1_0x8).Constants.RegisterSpace;
            DVar13 = (param_1->field1_0x8).Desc_1_0.pParameters[(longlong)pDVar21].field1_0x8.
                     DescriptorTable.NumDescriptorRanges;
            goto LAB_145a616d5;
          }
        }
        iVar9 = (int)pDVar11;
        uVar16 = (int)pDVar21 + 1;
        pDVar21 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)uVar16;
      } while (uVar16 < (param_1->field1_0x8).Desc_1_0.NumParameters);
    }
  }
  else {
    pvVar10 = GetProcessHeap();
    local_88 = HeapAlloc(pvVar10,0,uVar18 << 5);
    local_80 = local_88;
    if (local_88 != (LPVOID)0x0) goto LAB_145a61590;
    iVar9 = -0x7ff8fff2;
  }
  uVar16 = (param_1->field1_0x8).Desc_1_0.NumStaticSamplers;
  pDVar11 = pDVar17;
  if ((uVar16 != 0) && (param_1->Version == D3D_ROOT_SIGNATURE_VERSION_1_2)) {
    pvVar10 = GetProcessHeap();
    pDVar11 = HeapAlloc(pvVar10,0,(ulonglong)uVar16 * 0x34);
    if (pDVar11 == (D3D12_STATIC_SAMPLER_DESC *)0x0) {
      iVar9 = -0x7ff8fff2;
      goto LAB_145a617d8;
    }
    uVar16 = 0;
    pDVar21 = pDVar17;
    if ((param_1->field1_0x8).Desc_1_0.NumStaticSamplers != 0) {
      do {
        puVar14 = (undefined8 *)
                  ((longlong)pDVar21 * 0x38 +
                  (longlong)(param_1->field1_0x8).Desc_1_0.pStaticSamplers);
        if ((*(uint *)((longlong)puVar14 + 0x34) & 0xfffffffe) != 0) {
          iVar9 = -0x7ff8ffa9;
          goto LAB_145a617d8;
        }
        uVar6 = *puVar14;
        uVar7 = puVar14[1];
        uVar20 = (int)pDVar21 + 1;
        pDVar21 = pDVar11 + (longlong)pDVar21;
        pDVar21->Filter = (int)uVar6;
        pDVar21->AddressU = (int)((ulonglong)uVar6 >> 0x20);
        pDVar21->AddressV = (int)uVar7;
        pDVar21->AddressW = (int)((ulonglong)uVar7 >> 0x20);
        uVar6 = puVar14[2];
        uVar7 = puVar14[3];
        pDVar21->MipLODBias = (float)(int)uVar6;
        pDVar21->MaxAnisotropy = (int)((ulonglong)uVar6 >> 0x20);
        pDVar21->ComparisonFunc = (int)uVar7;
        pDVar21->BorderColor = (int)((ulonglong)uVar7 >> 0x20);
        uVar6 = puVar14[4];
        uVar7 = puVar14[5];
        pDVar21->MinLOD = (float)(int)uVar6;
        pDVar21->MaxLOD = (float)(int)((ulonglong)uVar6 >> 0x20);
        pDVar21->ShaderRegister = (int)uVar7;
        pDVar21->RegisterSpace = (int)((ulonglong)uVar7 >> 0x20);
        pDVar21->ShaderVisibility = *(D3D12_SHADER_VISIBILITY *)(puVar14 + 6);
        uVar16 = (param_1->field1_0x8).Desc_1_0.NumStaticSamplers;
        pDVar21 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)uVar20;
      } while (uVar20 < uVar16);
    }
  }
  if (-1 < iVar9) {
    local_58 = pDVar11;
    if (pDVar11 == (D3D12_STATIC_SAMPLER_DESC *)0x0) {
      local_58 = (param_1->field1_0x8).Desc_1_0.pStaticSamplers;
    }
    local_70[0] = (param_1->field1_0x8).Desc_1_0.NumParameters;
    local_60 = (D3D12_ROOT_PARAMETER *)CONCAT44(local_60._4_4_,uVar16);
    local_50 = (D3D12_STATIC_SAMPLER_DESC *)
               CONCAT44(local_50._4_4_,(param_1->field1_0x8).Desc_1_0.Flags);
    local_68 = local_88;
    iVar9 = D3D12SerializeRootSignature(local_70,1,param_3,param_4);
  }
LAB_145a617d8:
  if (local_88 != (LPVOID)0x0) {
    if ((param_1->field1_0x8).Desc_1_0.NumParameters != 0) {
      do {
        if ((param_1->field1_0x8).Desc_1_0.pParameters[(longlong)pDVar17].ParameterType ==
            D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE) {
          lpMem = *(LPVOID *)((longlong)local_88 + (longlong)pDVar17 * 0x20 + 0x10);
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,lpMem);
        }
        uVar16 = (int)pDVar17 + 1;
        pDVar17 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)uVar16;
      } while (uVar16 < (param_1->field1_0x8).Desc_1_0.NumParameters);
    }
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,local_88);
  }
  if (pDVar11 != (D3D12_STATIC_SAMPLER_DESC *)0x0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pDVar11);
  }
  return iVar9;
}

// DebugSerializeScene @ 145a61890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
DebugSerializeScene(FD3D12RayTracingScene *param_1,FD3D12Buffer *param_2,uint param_3,
                   FD3D12CommandContext *param_4)

{
  int *piVar1;
  wchar_t wVar2;
  longlong lVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  FD3D12RayTracingScene *pFVar6;
  FD3D12CommandContext *pFVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  TTuple<unsigned___int64,unsigned_int> *pTVar14;
  uint *puVar15;
  longlong lVar16;
  IFileManager *pIVar17;
  longlong *plVar18;
  byte bVar19;
  longlong lVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  ForElementType<FSetElementId> FVar23;
  FScriptContainerElement *pFVar24;
  ulong64 *puVar25;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar26;
  ulonglong uVar27;
  ForAnyElementType FVar28;
  size_t sVar29;
  uint uVar30;
  uint uVar31;
  ulong64 *puVar32;
  longlong lVar33;
  wchar_t *pwVar34;
  int iVar35;
  uint uVar36;
  ulonglong uVar37;
  FScriptContainerElement *pFVar38;
  undefined1 auStackY_588 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_558;
  undefined1 local_550;
  undefined1 local_54f [7];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_548;
  FRHIStagingBuffer *local_538;
  FRHIStagingBuffer *local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  int local_4ec;
  uint local_4e8;
  int local_4e4;
  int local_4e0;
  int local_4dc;
  int local_4d8;
  int local_4d4;
  int local_4d0;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  longlong local_4c0;
  FD3D12RayTracingScene *local_4b8;
  longlong *local_4b0;
  undefined8 uStack_4a8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  int local_488;
  undefined4 uStack_484;
  int local_480;
  uint uStack_47c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_478;
  undefined4 local_470;
  uint uStack_46c;
  int iStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  uint uStack_444;
  FD3D12CommandContext *local_440;
  longlong local_438;
  FString local_430;
  FString local_420;
  void *local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 uStack_3f8;
  uint uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e0;
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [4];
  undefined1 local_3b4 [4];
  TPairInitializer<unsigned___int64_&&,unsigned_int_&&> local_3b0;
  undefined1 local_3a0 [8];
  undefined8 local_398;
  ulonglong local_390;
  ulonglong local_388;
  longlong local_380;
  undefined8 local_378;
  int iStack_370;
  uint uStack_36c;
  FString local_368;
  FString local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_318;
  undefined8 uStack_2f8;
  longlong *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 uStack_2c8;
  FString local_2c0;
  FString local_2b0;
  undefined8 *local_2a0;
  undefined4 *local_298;
  FString local_290;
  void **local_280;
  undefined4 *local_278;
  longlong *local_270;
  int *local_268;
  FString *local_260;
  int *local_258;
  FString *local_250;
  int *local_248;
  ulonglong *local_240;
  int *local_238;
  undefined8 *local_230;
  undefined4 *local_228;
  ulonglong *local_220;
  int *local_218;
  undefined4 local_1f4;
  undefined1 local_1e8 [32];
  uint *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  undefined1 local_198 [32];
  uint *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  undefined1 local_160 [8];
  ForElementType<FSetElementId> local_158;
  int local_150;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  local_148;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_4e8 = param_3;
  local_4b8 = param_1;
  local_440 = param_4;
  FName::ToString(&(param_1->Initializer).DebugName,&local_358);
  FString::PrintfImpl(&local_2b0,L"Scene_%s");
  FPaths::ScreenShotDir(&local_2c0);
  FString::ConcatFF(&local_290,&local_2c0,&local_2b0);
  FString::ConcatFC(&local_368,&local_290,L".uehwrtscene");
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  local_148.Elements._44_4_ = 0x80;
  local_2a0 = &local_398;
  local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298 = &local_4f8;
  local_548.ArrayNum = 0;
  local_548.ArrayMax = 0;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  local_198._0_8_ = 0;
  local_198._8_8_ = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_16c = 0x80;
  local_168 = 0xffffffff;
  local_164 = 0;
  local_158 = (ForElementType<FSetElementId>)0x0;
  local_150 = 0;
  local_1e8._0_8_ = 0;
  local_1e8._8_8_ = 0;
  local_1c8 = (uint *)0x0;
  local_1c0 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  local_4f8 = 0;
  local_398 = 0;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,unsigned_int_&&>_>
            (&local_148,&local_3b0,(bool *)&local_2a0);
  local_230 = &local_328;
  local_4f4 = 0;
  local_228 = &local_4f4;
  local_328 = 0;
  TSet<TTuple<FRHIBuffer_*,unsigned_int>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRHIBuffer_*_&&,unsigned_int_&&>_>
            ((TSet<TTuple<FRHIBuffer_*,unsigned_int>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,unsigned_int,0>,FDefaultSetAllocator>
              *)local_198,(TPairInitializer<FRHIBuffer_*_&&,unsigned_int_&&> *)local_3c0,
             (bool *)&local_230);
  local_280 = &local_410;
  local_4f0 = 0;
  local_278 = &local_4f0;
  local_410 = (void *)0x0;
  local_408 = 0;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,unsigned_int_&&>_>
            ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)local_1e8,(TPairInitializer<FString_&&,unsigned_int_&&> *)(local_3c0 + 4),
             (bool *)&local_280);
  if (local_410 != (void *)0x0) {
    FMemory::Free(local_410);
  }
  local_528 = 0x72ffa3376f48683b;
  uStack_520 = 1;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_558 = &local_548;
  if ((local_548.ArrayNum != 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("OutputBuffer.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                         ,0x91,L"Scene header must be written into the buffer first"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_548._8_8_ & 0xf) != 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
              (&local_548,0x10 - (local_548.ArrayNum & 0xfU));
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,0x30,&local_548.AllocatorInstance,&local_548.ArrayNum,&local_548.ArrayMax)
  ;
  pFVar6 = local_4b8;
  lVar20 = (longlong)iVar10;
  uVar30 = 0;
  *(undefined8 *)(local_548.AllocatorInstance.Data + lVar20) = local_528;
  *(undefined8 *)(local_548.AllocatorInstance.Data + lVar20 + 8) = uStack_520;
  *(undefined8 *)(local_548.AllocatorInstance.Data + lVar20 + 0x10) = local_518;
  *(undefined8 *)(local_548.AllocatorInstance.Data + lVar20 + 0x10 + 8) = uStack_510;
  pFVar38 = local_548.AllocatorInstance.Data + lVar20 + 0x20;
  *(int *)pFVar38 = (int)local_508;
  *(undefined4 *)(pFVar38 + 4) = local_508._4_4_;
  *(undefined4 *)(pFVar38 + 8) = (undefined4)uStack_500;
  *(undefined4 *)(pFVar38 + 0xc) = uStack_500._4_4_;
  iVar10 = (param_1->ReferencedGeometries).ArrayNum;
  local_4e4 = iVar10;
  local_438 = (longlong)iVar10;
  pTVar26 = &local_548;
  if (0 < iVar10) {
    lVar20 = 0;
    do {
      uVar36 = 0;
      if ((int)uVar30 < (pFVar6->ReferencedGeometries).ArrayNum) {
        uVar36 = ~uVar30 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)
               (*(longlong *)((pFVar6->ReferencedGeometries).AllocatorInstance.Data + lVar20 * 8) +
               0x168);
      if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + 0xe8) + 8))((longlong *)(lVar3 + 0xe8),local_3b8);
      }
      local_380 = *(longlong *)(lVar3 + 0x188);
      local_4ec = local_148.Elements._8_4_ - local_148.Elements._52_4_;
      uVar36 = (int)((ulonglong)local_380 >> 0x20) * 0x17 + (int)local_380;
      if (local_148.Elements._8_4_ - local_148.Elements._52_4_ != 0) {
        FVar23 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar23 = local_148.Hash.SecondaryData;
        }
        iVar12 = *(int *)((longlong)FVar23 + (ulonglong)(local_148.HashSize - 1U & uVar36) * 4);
        while (iVar12 != -1) {
          lVar16 = local_148.Elements._0_8_ + (longlong)iVar12 * 0x18;
          if (*(longlong *)(local_148.Elements._0_8_ + (longlong)iVar12 * 0x18) == local_380) {
            if (lVar16 != 0) goto LAB_145a61d2e;
            break;
          }
          iVar12 = *(int *)(lVar16 + 0x10);
        }
      }
      local_270 = &local_380;
      local_268 = &local_4ec;
      TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<unsigned___int64_const_&,unsigned_int_&&>_>
                (&local_148,(uint)local_3b4,
                 (TPairInitializer<unsigned___int64_const_&,unsigned_int_&&> *)(ulonglong)uVar36,
                 (bool *)&local_270);
LAB_145a61d2e:
      (**(code **)(*(longlong *)(lVar3 + 0xe8) + 0x10))();
      uVar30 = uVar30 + 1;
      lVar20 = lVar20 + 1;
      pTVar26 = local_558;
      param_1 = local_4b8;
      param_3 = local_4e8;
    } while (lVar20 < iVar10);
  }
  uVar30 = param_1->NumInstances;
  uVar27 = (ulonglong)uVar30;
  local_508 = CONCAT44(local_508._4_4_,uVar30);
  (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_530);
  if ((GRHIGlobals.RayTracing.InstanceDescriptorSize != 0x40) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("sizeof(D3D12_RAYTRACING_INSTANCE_DESC) == GRHIGlobals.RayTracing.InstanceDescriptorSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                         ,0xa4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar31 = uVar30 * GRHIGlobals.RayTracing.InstanceDescriptorSize;
  uVar11 = (int)param_2->_padding_ - param_3;
  uVar36 = uVar31;
  if (uVar11 < uVar31) {
    uVar36 = uVar11;
  }
  if ((uVar36 != uVar31) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("InstanceBufferSize == SceneHeader.NumInstances * GRHIGlobals.RayTracing.InstanceDescriptorSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                         ,0xa7,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = local_440;
  if (uVar30 != 0) {
    FD3D12CommandContext::RHICopyToStagingBuffer
              ((FD3D12CommandContext *)&local_440->field_0x1c0,(FRHIBuffer *)param_2,local_530,
               param_3,uVar36);
    FD3D12ContextCommon::FlushCommands((FD3D12ContextCommon *)pFVar7,WaitForCompletion);
    pvVar13 = (void *)(**(code **)(local_530->_padding_ + 0x10))(local_530,0,uVar36);
    if ((pvVar13 == (void *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("InstanceDescs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                           ,0xaf,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = 0;
    if (uVar30 != 0) {
      puVar25 = (ulong64 *)((longlong)pvVar13 + 0x38);
      puVar32 = puVar25;
      do {
        pTVar14 = TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                  ::Find(&local_148,*puVar25);
        puVar21 = (uint *)&pTVar14->field_0x8;
        if (pTVar14 == (TTuple<unsigned___int64,unsigned_int> *)0x0) {
          puVar21 = (uint *)0x0;
        }
        puVar15 = (uint *)0x0;
        if (puVar21 != (uint *)0x0) {
          puVar15 = (uint *)(ulonglong)*puVar21;
        }
        *puVar32 = (ulong64)puVar15;
        puVar25 = puVar25 + 8;
        puVar32 = puVar32 + 8;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
      pTVar26 = local_558;
      iVar12 = (int)local_508;
      iVar10 = local_4e4;
    }
    uVar30 = `DebugSerializeScene'::__l2::<lambda_1>::operator()
                       (&local_558,pvVar13,iVar12 * GRHIGlobals.RayTracing.InstanceDescriptorSize,
                        AlignBeginning);
    local_518 = CONCAT44(local_518._4_4_,uVar30);
    if (((uVar30 & 0xf) != 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("SceneHeader.Offsets.Instances% AlignmentRequirement == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                           ,0xc0,L"Serialized scene data must be vector-aligned"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(local_530->_padding_ + 0x18))();
  }
  if (local_530 != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_530);
  }
  if ((iVar10 + 1 != local_148.Elements._8_4_ - local_148.Elements._52_4_) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("1 + NumReferencedGeometries == GeometryMap.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                         ,0xc9,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &pTVar26->ArrayNum;
  local_508 = CONCAT44(local_148.Elements._8_4_ - local_148.Elements._52_4_,(int)local_508);
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0x47226e42ad539683;
  if ((*piVar1 & 0xfU) != 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(pTVar26,0x10 - (*piVar1 & 0xfU));
  }
  uVar30 = *piVar1;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,0x20,&pTVar26->AllocatorInstance,piVar1,&pTVar26->ArrayMax);
  pFVar24 = (pTVar26->AllocatorInstance).Data;
  local_518 = CONCAT44(uVar30,(undefined4)local_518);
  pFVar38 = pFVar24 + iVar10;
  *(undefined8 *)pFVar38 = local_348;
  *(undefined8 *)(pFVar38 + 8) = uStack_340;
  pFVar24 = pFVar24 + (longlong)iVar10 + 0x10;
  *(undefined8 *)pFVar24 = local_338;
  *(undefined8 *)(pFVar24 + 8) = uStack_330;
  if (((uVar30 & 0xf) != 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("SceneHeader.Offsets.Geometries % AlignmentRequirement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                         ,0xce,L"Serialized scene data must be vector-aligned"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar37 = 0;
  uVar27 = uVar37;
  if (0 < local_438) {
    do {
      pFVar6 = local_4b8;
      lVar20 = 0;
      uVar11 = (uint)uVar27;
      local_400 = 0x47226e42ad539683;
      uVar36 = 0;
      uStack_3f4 = 0;
      uStack_3e8 = 0;
      uVar30 = uVar36;
      if ((int)uVar11 < (local_4b8->ReferencedGeometries).ArrayNum) {
        uVar30 = ~uVar11 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)((pFVar6->ReferencedGeometries).AllocatorInstance.Data + uVar37 * 8);
      FDebugName::ToString((FDebugName *)(lVar3 + 0x338),&local_420);
      FName::ToString((FName *)(lVar3 + 0x344),&local_430);
      local_4e0 = local_1e8._8_4_ - local_1b4;
      if (local_420.Data.ArrayNum == 0) {
        pwVar34 = L"";
        uVar30 = uVar36;
      }
      else {
        pwVar34 = (wchar_t *)local_420.Data.AllocatorInstance.Data;
        uVar30 = local_420.Data.ArrayNum - 1;
      }
      uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar30,pwVar34);
      iVar10 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                           *)local_1e8,uVar30,&local_420);
      if ((iVar10 == -1) || (lVar16 = (longlong)iVar10 * 0x20 + local_1e8._0_8_, lVar16 == 0)) {
        local_260 = &local_420;
        local_258 = &local_4e0;
        TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<FString_const_&,unsigned_int_&&>_>
                  ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                    *)local_1e8,(uint)&local_4dc,
                   (TPairInitializer<FString_const_&,unsigned_int_&&> *)(ulonglong)uVar30,
                   (bool *)&local_260);
        lVar16 = (longlong)local_4dc * 0x20 + local_1e8._0_8_;
      }
      local_3f0 = *(undefined4 *)(lVar16 + 0x10);
      local_4d8 = local_1e8._8_4_ - local_1b4;
      if (local_430.Data.ArrayNum == 0) {
        pwVar34 = L"";
      }
      else {
        uVar36 = local_430.Data.ArrayNum - 1;
        pwVar34 = (wchar_t *)local_430.Data.AllocatorInstance.Data;
      }
      uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar36,pwVar34);
      iVar10 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                           *)local_1e8,uVar30,&local_430);
      if ((iVar10 == -1) || (lVar16 = (longlong)iVar10 * 0x20 + local_1e8._0_8_, lVar16 == 0)) {
        local_250 = &local_430;
        local_248 = &local_4d8;
        TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<FString_const_&,unsigned_int_&&>_>
                  ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                    *)local_1e8,(uint)&local_4d4,
                   (TPairInitializer<FString_const_&,unsigned_int_&&> *)(ulonglong)uVar30,
                   (bool *)&local_250);
        lVar16 = (longlong)local_4d4 * 0x20 + local_1e8._0_8_;
      }
      lVar33 = *(longlong *)(lVar3 + 0x168);
      uStack_3ec = *(undefined4 *)(lVar16 + 0x10);
      local_4c0 = lVar33;
      if (lVar33 != 0) {
        (**(code **)(*(longlong *)(lVar33 + 0xe8) + 8))((longlong *)(lVar33 + 0xe8),local_3a0);
      }
      uVar27 = *(ulonglong *)(lVar33 + 0x188);
      if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
        FVar23 = (ForElementType<FSetElementId>)&local_148.Hash;
        if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar23 = local_148.Hash.SecondaryData;
        }
        iVar10 = *(int *)((longlong)FVar23 +
                         ((uVar27 >> 0x20) * 0x17 + uVar27 & (ulonglong)(local_148.HashSize - 1)) *
                         4);
        if (iVar10 != -1) {
          do {
            lVar20 = local_148.Elements._0_8_ + (longlong)iVar10 * 0x18;
            if (*(ulonglong *)(local_148.Elements._0_8_ + (longlong)iVar10 * 0x18) == uVar27) {
              if (lVar20 != 0) goto LAB_145a622e8;
              goto LAB_145a622c1;
            }
            iVar10 = *(int *)(lVar20 + 0x10);
          } while (iVar10 != -1);
          lVar20 = 0;
        }
      }
LAB_145a622c1:
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_145a622e8:
      if ((*(int *)(lVar20 + 8) != uVar11 + 1) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("FoundId == GeometryIndex + 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                             ,0xe0,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_390 = *(ulonglong *)(lVar3 + 0xe0);
      local_4d0 = local_198._8_4_ - local_164;
      uVar30 = ((uint)(local_390 >> 0x14) & 0xffff ^ (uint)(local_390 >> 4)) * -0x7a143595;
      uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
      uVar30 = uVar30 >> 0x10 ^ uVar30;
      if (local_198._8_4_ - local_164 != 0) {
        FVar23 = (ForElementType<FSetElementId>)local_160;
        if (local_158 != (ForElementType<FSetElementId>)0x0) {
          FVar23 = local_158;
        }
        iVar10 = *(int *)((longlong)FVar23 + (ulonglong)(local_150 - 1U & uVar30) * 4);
        while (iVar10 != -1) {
          lVar20 = local_198._0_8_ + (longlong)iVar10 * 0x18;
          if (*(ulonglong *)(local_198._0_8_ + (longlong)iVar10 * 0x18) == local_390) {
            if (lVar20 != 0) goto LAB_145a6240a;
            break;
          }
          iVar10 = *(int *)(lVar20 + 0x10);
        }
      }
      local_240 = &local_390;
      local_238 = &local_4d0;
      TSet<TTuple<FRHIBuffer_*,unsigned_int>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,unsigned_int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<FRHIBuffer_*_&&,unsigned_int_&&>_>
                ((TSet<TTuple<FRHIBuffer_*,unsigned_int>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,unsigned_int,0>,FDefaultSetAllocator>
                  *)local_198,(uint)&local_4cc,
                 (TPairInitializer<FRHIBuffer_*_&&,unsigned_int_&&> *)(ulonglong)uVar30,
                 (bool *)&local_240);
      lVar20 = local_198._0_8_ + (longlong)local_4cc * 0x18;
LAB_145a6240a:
      uVar36 = 0;
      uStack_3f8 = *(undefined4 *)(lVar20 + 8);
      uVar30 = *(uint *)(lVar3 + 0x108);
      uStack_3f4 = uVar30;
      if (((pTVar26->ArrayNum & 0xf) != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("OutputBuffer.Num() % AlignmentRequirement == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                             ,0x7e,L"Serialized scene data must be vector-aligned"), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,0x20,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,&pTVar26->ArrayMax
                         );
      pFVar24 = (pTVar26->AllocatorInstance).Data;
      pFVar38 = pFVar24 + iVar10;
      *(undefined4 *)pFVar38 = (undefined4)local_400;
      *(undefined4 *)(pFVar38 + 4) = local_400._4_4_;
      *(undefined4 *)(pFVar38 + 8) = uStack_3f8;
      *(uint *)(pFVar38 + 0xc) = uStack_3f4;
      pFVar24 = pFVar24 + (longlong)iVar10 + 0x10;
      *(undefined4 *)pFVar24 = local_3f0;
      *(undefined4 *)(pFVar24 + 4) = uStack_3ec;
      *(undefined4 *)(pFVar24 + 8) = (undefined4)uStack_3e8;
      *(undefined4 *)(pFVar24 + 0xc) = uStack_3e8._4_4_;
      if (uVar30 != 0) {
        do {
          uVar30 = 0;
          if ((int)uVar36 < *(int *)(lVar3 + 0x108)) {
            uVar30 = ~uVar36 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_4c8 = local_198._8_4_ - local_164;
          local_388 = *(ulonglong *)(*(longlong *)(lVar3 + 0x100) + (longlong)(int)uVar36 * 0x28);
          lVar20 = *(longlong *)(lVar3 + 0x100) + (longlong)(int)uVar36 * 0x28;
          uStack_444 = uStack_444 & 0xffffff;
          uVar30 = ((uint)(local_388 >> 0x14) & 0xffff ^ (uint)(local_388 >> 4)) * -0x7a143595;
          uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
          uVar30 = uVar30 >> 0x10 ^ uVar30;
          if (local_198._8_4_ - local_164 != 0) {
            FVar23 = (ForElementType<FSetElementId>)local_160;
            if (local_158 != (ForElementType<FSetElementId>)0x0) {
              FVar23 = local_158;
            }
            iVar10 = *(int *)((longlong)FVar23 + (ulonglong)(local_150 - 1U & uVar30) * 4);
            while (iVar10 != -1) {
              lVar16 = local_198._0_8_ + (longlong)iVar10 * 0x18;
              if (*(ulonglong *)(local_198._0_8_ + (longlong)iVar10 * 0x18) == local_388) {
                if (lVar16 != 0) goto LAB_145a6260b;
                break;
              }
              iVar10 = *(int *)(lVar16 + 0x10);
            }
          }
          local_220 = &local_388;
          local_218 = &local_4c8;
          TSet<TTuple<FRHIBuffer_*,unsigned_int>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,unsigned_int,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TPairInitializer<FRHIBuffer_*_&&,unsigned_int_&&>_>
                    ((TSet<TTuple<FRHIBuffer_*,unsigned_int>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,unsigned_int,0>,FDefaultSetAllocator>
                      *)local_198,(uint)&local_4c4,
                     (TPairInitializer<FRHIBuffer_*_&&,unsigned_int_&&> *)(ulonglong)uVar30,
                     (bool *)&local_220);
          lVar16 = local_198._0_8_ + (longlong)local_4c4 * 0x18;
LAB_145a6260b:
          local_460 = *(undefined4 *)(lVar16 + 8);
          uStack_45c = *(undefined4 *)(lVar20 + 8);
          uStack_458 = *(undefined4 *)(lVar20 + 0xc);
          uStack_454 = *(undefined4 *)(lVar20 + 0x10);
          local_450 = *(undefined4 *)(lVar20 + 0x14);
          uStack_44c = *(undefined4 *)(lVar20 + 0x18);
          uStack_448 = *(undefined4 *)(lVar20 + 0x1c);
          uStack_444 = CONCAT13(uStack_444._3_1_,*(undefined3 *)(lVar20 + 0x20));
          if (((pTVar26->ArrayNum & 0xf) != 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("OutputBuffer.Num() % AlignmentRequirement == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                                 ,0x7e,L"Serialized scene data must be vector-aligned"), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,0x20,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,
                              &pTVar26->ArrayMax);
          uVar36 = uVar36 + 1;
          pFVar24 = (pTVar26->AllocatorInstance).Data;
          pFVar38 = pFVar24 + iVar10;
          *(undefined4 *)pFVar38 = local_460;
          *(undefined4 *)(pFVar38 + 4) = uStack_45c;
          *(undefined4 *)(pFVar38 + 8) = uStack_458;
          *(undefined4 *)(pFVar38 + 0xc) = uStack_454;
          pFVar24 = pFVar24 + (longlong)iVar10 + 0x10;
          *(undefined4 *)pFVar24 = local_450;
          *(undefined4 *)(pFVar24 + 4) = uStack_44c;
          *(undefined4 *)(pFVar24 + 8) = uStack_448;
          *(uint *)(pFVar24 + 0xc) = uStack_444;
          lVar33 = local_4c0;
        } while (uVar36 < uStack_3f4);
      }
      (**(code **)(*(longlong *)(lVar33 + 0xe8) + 0x10))();
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
      uVar27 = (ulonglong)(uVar11 + 1);
      uVar37 = uVar37 + 1;
    } while ((longlong)uVar37 < local_438);
  }
  uVar30 = pTVar26->ArrayNum & 0xf;
  if (uVar30 != 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(pTVar26,0x10 - uVar30);
  }
  uVar30 = pTVar26->ArrayNum;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,0x10,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,&pTVar26->ArrayMax);
  pFVar38 = (pTVar26->AllocatorInstance).Data;
  *(undefined8 *)(pFVar38 + iVar10) = 0x7330d54d0195a6de;
  *(undefined8 *)(pFVar38 + (longlong)iVar10 + 8) = 0;
  uStack_510 = CONCAT44(uStack_510._4_4_,uVar30);
  if (((uVar30 & 0xf) != 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("SceneHeader.Offsets.Buffers % AlignmentRequirement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                         ,0x10d,L"Serialized scene data must be vector-aligned"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar30 = local_170;
  pTStack_4a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
  local_488 = local_198._8_4_ - local_164;
  uStack_500 = CONCAT44(uStack_500._4_4_,local_488);
  local_480 = 0;
  uStack_47c = 1;
  pTStack_478 = pTStack_4a0;
  local_470 = 0xffffffff;
  uStack_46c = 0;
  iStack_468 = 0;
  if (local_170 != 0) {
    puVar21 = (uint *)(local_198 + 0x10);
    if (local_178 != (uint *)0x0) {
      puVar21 = local_178;
    }
    uVar36 = *puVar21;
    iStack_468 = 0;
    local_480 = 0;
    while (uVar36 == 0) {
      iStack_468 = iStack_468 + 0x20;
      lVar20 = (longlong)local_480;
      local_480 = local_480 + 1;
      if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < local_480) {
        uStack_46c = local_170;
        goto LAB_145a6285f;
      }
      uVar36 = puVar21[lVar20 + 1];
      local_470 = 0xffffffff;
    }
    uStack_47c = -uVar36 & uVar36;
    uVar27 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uStack_46c = iStack_468 + -1 + (int)lVar20;
    local_3b0.Key._4_4_ = (int)lVar20;
    if ((int)local_170 < (int)uStack_46c) {
      uStack_46c = local_170;
    }
  }
LAB_145a6285f:
  local_470 = 0xffffffff;
  uStack_4a8 = CONCAT44(uStack_47c,local_480);
  uStack_498._4_4_ = uStack_46c;
  uStack_498._0_4_ = 0xffffffff;
  uStack_490._4_4_ = uStack_464;
  uStack_490._0_4_ = iStack_468;
  local_4b0 = (longlong *)local_198;
  bVar19 = (byte)local_170 & 0x1f;
  local_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
  local_3e0._padding_._0_4_ = (int)local_170 >> 5;
  local_3e0._padding_._4_4_ = 1 << bVar19;
  local_3e0.UnvisitedBitMask = -1 << bVar19;
  local_3e0.CurrentBitIndex = local_170;
  local_3e0.BaseBitIndex = local_170 & 0xffffffe0;
  local_320 = (longlong *)local_198;
  TStack_318._padding_ = uStack_4a8;
  TStack_318.Array = pTStack_4a0;
  TStack_318.UnvisitedBitMask = 0xffffffff;
  TStack_318.CurrentBitIndex = uStack_46c;
  TStack_318.BaseBitIndex = iStack_468;
  TStack_318._28_4_ = uStack_464;
  uStack_2f8 = CONCAT44(uStack_484,local_488);
  if (((int)local_170 < 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar30 != local_170) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e0);
  }
  iVar10 = local_3e0.CurrentBitIndex;
  pTVar8 = local_3e0.Array;
  pTVar26 = local_558;
  uStack_4a8 = CONCAT44(local_3e0._padding_._4_4_,(int)local_3e0._padding_);
  pTStack_4a0 = local_3e0.Array;
  uStack_498 = CONCAT44(local_3e0.CurrentBitIndex,local_3e0.UnvisitedBitMask);
  uStack_490 = CONCAT44(local_3e0._28_4_,local_3e0.BaseBitIndex);
  while( true ) {
    plVar18 = local_320;
    iVar35 = 0;
    iVar12 = 0;
    if ((int)local_320[1] - *(int *)((longlong)local_320 + 0x34) != (int)uStack_2f8) {
      local_550 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRHIBuffer_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_550);
    }
    uVar30 = local_1c0;
    if (((TStack_318.CurrentBitIndex == iVar10) && (TStack_318.Array == pTVar8)) &&
       (plVar18 == (longlong *)local_198)) break;
    pFVar4 = *(FRHIBuffer **)(*plVar18 + (longlong)TStack_318.CurrentBitIndex * 0x18);
    if (pFVar4 != (FRHIBuffer *)0x0) {
      local_378 = 0x7330d54d0195a6de;
      uVar30 = (pFVar4->Desc).Size;
      uStack_36c = (pFVar4->Desc).Stride;
      iVar35 = 0x10 - (uVar30 & 0xf);
      if ((uVar30 & 0xf) == 0) {
        iVar35 = iVar12;
      }
      iStack_370 = iVar35 + uVar30;
      if (((pTVar26->ArrayNum & 0xf) != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("OutputBuffer.Num() % AlignmentRequirement == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                             ,0x7e,L"Serialized scene data must be vector-aligned"), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,0x10,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,&pTVar26->ArrayMax
                         );
      pFVar38 = (pTVar26->AllocatorInstance).Data + iVar12;
      *(undefined4 *)pFVar38 = (undefined4)local_378;
      *(undefined4 *)(pFVar38 + 4) = local_378._4_4_;
      *(int *)(pFVar38 + 8) = iStack_370;
      *(uint *)(pFVar38 + 0xc) = uStack_36c;
      (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_538);
      pFVar7 = local_440;
      FD3D12CommandContext::RHICopyToStagingBuffer
                ((FD3D12CommandContext *)&local_440->field_0x1c0,pFVar4,local_538,0,uVar30);
      FD3D12ContextCommon::FlushCommands((FD3D12ContextCommon *)pFVar7,WaitForCompletion);
      pvVar13 = (void *)(**(code **)(local_538->_padding_ + 0x10))(local_538,0,uVar30);
      if ((pvVar13 == (void *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("BufferData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                             ,0x130,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((pTVar26->ArrayNum & 0xf) != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("OutputBuffer.Num() % AlignmentRequirement == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracingDebug.cpp"
                             ,0x7e,L"Serialized scene data must be vector-aligned"), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((pvVar13 == (void *)0x0) && (uVar30 != 0)) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar30,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,
                          &pTVar26->ArrayMax);
      if (uVar30 != 0) {
        memcpy((pTVar26->AllocatorInstance).Data + iVar12,pvVar13,(longlong)(int)uVar30);
      }
      if (iVar35 != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar35,&local_548.AllocatorInstance,&local_548.ArrayNum,
                            &local_548.ArrayMax);
        memset(local_548.AllocatorInstance.Data + iVar12,0,(longlong)iVar35);
      }
      (**(code **)(local_538->_padding_ + 0x18))();
      if (local_538 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_538);
      }
    }
    TStack_318.UnvisitedBitMask = TStack_318.UnvisitedBitMask & ~TStack_318._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_318);
  }
  uVar36 = 1;
  local_488 = local_1e8._8_4_ - local_1b4;
  uStack_510 = CONCAT44(local_548.ArrayNum,(undefined4)uStack_510);
  uStack_500 = CONCAT44(local_488,(undefined4)uStack_500);
  uStack_498._4_4_ = 0;
  if (local_1c0 != 0) {
    puVar21 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar21 = local_1c8;
    }
    uVar11 = *puVar21;
    iVar12 = 0;
    while (uVar11 == 0) {
      lVar20 = (longlong)iVar35;
      iVar12 = iVar12 + 0x20;
      iVar35 = iVar35 + 1;
      uStack_498._4_4_ = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
      goto LAB_145a62ca3;
      uVar11 = puVar21[lVar20 + 1];
    }
    uVar36 = -uVar11 & uVar11;
    uVar27 = (ulonglong)uVar36 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_3b0.Value._0_4_ = (int)lVar20;
    uStack_498._4_4_ = (int)lVar20 + -1 + iVar12;
    if ((int)local_1c0 < (int)uStack_498._4_4_) {
      uStack_498._4_4_ = local_1c0;
    }
  }
LAB_145a62ca3:
  local_4b0 = (longlong *)local_1e8;
  pTStack_4a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
  uVar11 = local_1c0 & 0xffffffe0;
  uStack_498._0_4_ = 0xffffffff;
  uStack_4a8 = CONCAT44(uVar36,iVar35);
  uStack_490._4_4_ = local_1f4;
  uStack_490._0_4_ = iVar12;
  local_2f0 = (longlong *)local_1e8;
  TStack_2e8._padding_ = uStack_4a8;
  iVar10 = (int)local_1c0 >> 5;
  bVar19 = (byte)local_1c0;
  TStack_2e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
  TStack_2e8.UnvisitedBitMask = 0xffffffff;
  TStack_2e8.CurrentBitIndex = uStack_498._4_4_;
  TStack_2e8.BaseBitIndex = iVar12;
  TStack_2e8._28_4_ = local_1f4;
  uStack_2c8 = CONCAT44(uStack_484,local_488);
  if (((int)local_1c0 < 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar30 != local_1c0) {
    puVar21 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar21 = local_1c8;
    }
    uVar30 = -1 << (bVar19 & 0x1f) & puVar21[iVar10];
    while (uVar30 == 0) {
      lVar20 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar30 = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_145a62dc6;
      uVar30 = puVar21[lVar20 + 1];
    }
    uVar27 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_3b0.Value._4_4_ = (int)lVar20;
    uVar30 = local_3b0.Value._4_4_ + -1 + uVar11;
    if ((int)local_1c0 < (int)uVar30) {
      uVar30 = local_1c0;
    }
  }
LAB_145a62dc6:
  pFVar38 = (FScriptContainerElement *)0x0;
  do {
    plVar18 = local_2f0;
    if ((int)local_2f0[1] - *(int *)((longlong)local_2f0 + 0x34) != (int)uStack_2c8) {
      local_54f[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_54f);
    }
    if (((TStack_2e8.CurrentBitIndex == uVar30) &&
        (TStack_2e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10))) &&
       (plVar18 == (longlong *)local_1e8)) {
      *(undefined8 *)local_548.AllocatorInstance.Data = local_528;
      *(undefined8 *)(local_548.AllocatorInstance.Data + 8) = uStack_520;
      *(undefined8 *)(local_548.AllocatorInstance.Data + 0x10) = local_518;
      *(undefined8 *)(local_548.AllocatorInstance.Data + 0x18) = uStack_510;
      *(undefined8 *)(local_548.AllocatorInstance.Data + 0x20) = local_508;
      *(undefined8 *)(local_548.AllocatorInstance.Data + 0x28) = uStack_500;
      pIVar17 = IFileManager::Get();
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_368.Data.ArrayNum != 0) {
        FVar28.Data = local_368.Data.AllocatorInstance.Data;
      }
      plVar18 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x28))(pIVar17,FVar28.Data,0);
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x188))
                  (plVar18,local_548.AllocatorInstance.Data,(longlong)local_548.ArrayNum);
        (**(code **)*plVar18)(plVar18,1);
      }
      local_1a0 = 0;
      if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1e8);
      local_150 = 0;
      if (local_158 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158);
      }
      TSparseArray<TSparseSetElement<TTuple<FRHIBuffer_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRHIBuffer_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRHIBuffer_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_198);
      local_148.HashSize = 0;
      if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_148.Elements);
      if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.AllocatorInstance.Data);
      }
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      return;
    }
    local_78.Data = (FScriptContainerElement *)0x0;
    lVar20 = *plVar18;
    if (*(int *)((longlong)TStack_2e8.CurrentBitIndex * 0x20 + 8 + lVar20) == 0) {
      pwVar34 = L"";
LAB_145a62e70:
      sVar29 = wcslen(pwVar34);
      local_68 = (int)sVar29;
      uVar36 = local_68 + 1;
      FVar28.Data = pFVar38;
      if (0x80 < uVar36) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar36,1);
        FVar28.Data = local_78.Data;
      }
      lVar20 = (longlong)(int)uVar36;
      pFVar24 = local_f8;
      if (FVar28.Data != (FScriptContainerElement *)0x0) {
        pFVar24 = FVar28.Data;
      }
      bVar9 = false;
      pFVar22 = pFVar38;
      local_70 = pFVar24;
      if (0 < (int)uVar36) {
        do {
          wVar2 = pwVar34[(longlong)pFVar22];
          pFVar24[(longlong)pFVar22] = SUB21(wVar2,0);
          pFVar22 = pFVar22 + 1;
          bVar9 = (bool)(bVar9 | 0x7f < (ushort)wVar2);
        } while ((longlong)pFVar22 < lVar20);
        pFVar22 = pFVar38;
        if (bVar9) {
          do {
            if (0x7f < (ushort)pwVar34[(longlong)pFVar22]) {
              pFVar24[(longlong)pFVar22] = (FScriptContainerElement)0x3f;
            }
            pFVar22 = pFVar22 + 1;
          } while ((longlong)pFVar22 < lVar20);
        }
      }
      if ((pFVar24 + lVar20 == (FScriptContainerElement *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pwVar34 = *(wchar_t **)((longlong)TStack_2e8.CurrentBitIndex * 0x20 + lVar20);
      if (pwVar34 != (wchar_t *)0x0) goto LAB_145a62e70;
      local_70 = (FScriptContainerElement *)0x0;
      local_68 = 0;
    }
    iVar10 = local_68;
    sVar29 = (size_t)local_68;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,4,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,&pTVar26->ArrayMax);
    pFVar24 = local_70;
    *(int *)((pTVar26->AllocatorInstance).Data + iVar12) = iVar10;
    if (iVar10 != 0) {
      if ((local_70 == (FScriptContainerElement *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar10,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,
                          &pTVar26->ArrayMax);
      memcpy((pTVar26->AllocatorInstance).Data + iVar10,pFVar24,sVar29);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
  } while( true );
}

// EnqueueAsyncWork @ 145a642c0

DWORD __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::EnqueueAsyncWork
          (ResidencyManagerInternal *this,ResidencySet *param_1,ulong64 param_2,ulong64 param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  
  if ((ulonglong)this->MaxSoftwareQueueLatency <=
      this->CurrentAsyncWorkloadTail - this->CurrentAsyncWorkloadHead) {
    do {
      WaitForSingleObject(this->AsyncThreadWorkCompletionEvent,0xffffffff);
    } while ((ulonglong)this->MaxSoftwareQueueLatency <=
             this->CurrentAsyncWorkloadTail - this->CurrentAsyncWorkloadHead);
  }
  uVar3 = this->CurrentAsyncWorkloadTail % this->AsyncWorkQueueSize;
  this->AsyncWorkQueue[uVar3].pMasterSet = param_1;
  this->AsyncWorkQueue[uVar3].FenceValueToSignal = param_2;
  this->AsyncWorkQueue[uVar3].SyncPointGeneration = param_3;
  this->CurrentAsyncWorkloadTail = this->CurrentAsyncWorkloadTail + 1;
  BVar1 = SetEvent(this->AsyncWorkEvent);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (0 < (int)DVar2) {
      DVar2 = DVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}

// Get4KTileShape @ 145a68520

void __cdecl
Get4KTileShape(D3D12_TILE_SHAPE *param_1,DXGI_FORMAT param_2,EPixelFormat param_3,
              D3D12_RESOURCE_DIMENSION param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = GPixelFormats[param_3].BlockBytes;
  uVar4 = uVar3 * 8;
  if ((param_4 == D3D12_RESOURCE_DIMENSION_BUFFER) ||
     (param_4 == D3D12_RESOURCE_DIMENSION_TEXTURE1D)) {
    if (((param_2 - DXGI_FORMAT_BC1_TYPELESS < 0xf) || (param_2 - DXGI_FORMAT_BC6H_TYPELESS < 6)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!UE::DXGIUtilities::IsBlockCompressedFormat(DXGIFormat)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x19f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((uVar3 & 0x1fffffff) == 0) {
      uVar3 = 0x1000;
    }
    else {
      uVar3 = (uint)(0x8000 / (ulonglong)uVar4);
    }
    param_1->HeightInTexels = 1;
    param_1->DepthInTexels = 1;
    param_1->WidthInTexels = uVar3;
    return;
  }
  if (param_4 == D3D12_RESOURCE_DIMENSION_TEXTURE2D) {
    param_1->DepthInTexels = 1;
    if ((param_2 - DXGI_FORMAT_BC1_TYPELESS < 0xf) || (param_2 - DXGI_FORMAT_BC6H_TYPELESS < 6)) {
      if (((uVar4 - 0x40 & 0xffffffbf) != 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("BPU == 64 || BPU == 128",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                             ,0x1ac,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = UE::DXGIUtilities::GetWidthAlignment(param_2);
      param_1->WidthInTexels = uVar3 << 4;
      uVar3 = UE::DXGIUtilities::GetHeightAlignment(param_2);
      param_1->HeightInTexels = uVar3 << 4;
      if (uVar4 != 0x40) {
        return;
      }
      if (((2 < param_2 - DXGI_FORMAT_BC1_TYPELESS) && (2 < param_2 - DXGI_FORMAT_BC4_TYPELESS)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(DXGIFormat >= DXGI_FORMAT_BC1_TYPELESS && DXGIFormat <= DXGI_FORMAT_BC1_UNORM_SRGB) || (DXGIFormat >= DXGI_FORMAT_BC4_TYPELESS && DXGIFormat <= DXGI_FORMAT_BC4_SNORM)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                             ,0x1b4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      param_1->WidthInTexels = param_1->WidthInTexels * 2;
      return;
    }
    if (uVar4 < 9) {
      param_1->WidthInTexels = 0x40;
      param_1->HeightInTexels = 0x40;
    }
    else if (uVar4 < 0x11) {
      param_1->WidthInTexels = 0x40;
      param_1->HeightInTexels = 0x20;
    }
    else if (uVar4 < 0x21) {
      param_1->WidthInTexels = 0x20;
      param_1->HeightInTexels = 0x20;
    }
    else if (uVar4 < 0x41) {
      param_1->WidthInTexels = 0x20;
      param_1->HeightInTexels = 0x10;
    }
    else if (uVar4 < 0x81) {
      param_1->WidthInTexels = 0x10;
      param_1->HeightInTexels = 0x10;
    }
    else {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                         ,0x1d5,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (1 < param_5) {
      if (param_5 < 3) {
        param_1->WidthInTexels = param_1->WidthInTexels >> 1;
      }
      else if (param_5 < 5) {
        param_1->WidthInTexels = param_1->WidthInTexels >> 1;
        param_1->HeightInTexels = param_1->HeightInTexels >> 1;
      }
      else if (param_5 < 9) {
        param_1->WidthInTexels = param_1->WidthInTexels >> 2;
        param_1->HeightInTexels = param_1->HeightInTexels >> 1;
      }
      else if (param_5 < 0x11) {
        param_1->WidthInTexels = param_1->WidthInTexels >> 2;
        param_1->HeightInTexels = param_1->HeightInTexels >> 2;
      }
      else {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x1f1,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    uVar3 = UE::DXGIUtilities::GetWidthAlignment(param_2);
    if ((uVar3 != 1) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("UE::DXGIUtilities::GetWidthAlignment(DXGIFormat) == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,500,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = UE::DXGIUtilities::GetHeightAlignment(param_2);
    if (uVar3 == 1) {
      return;
    }
    iVar5 = 0x1f5;
  }
  else {
    if (param_4 != D3D12_RESOURCE_DIMENSION_TEXTURE3D) {
      return;
    }
    if ((param_2 - DXGI_FORMAT_BC1_TYPELESS < 0xf) || (param_2 - DXGI_FORMAT_BC6H_TYPELESS < 6)) {
      if (((uVar4 - 0x40 & 0xffffffbf) != 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("BPU == 64 || BPU == 128",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                             ,0x200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = UE::DXGIUtilities::GetWidthAlignment(param_2);
      param_1->WidthInTexels = uVar3 << 3;
      uVar3 = UE::DXGIUtilities::GetHeightAlignment(param_2);
      param_1->HeightInTexels = uVar3 << 3;
      param_1->DepthInTexels = 4;
      if (uVar4 != 0x40) {
        return;
      }
      if (((2 < param_2 - DXGI_FORMAT_BC1_TYPELESS) && (2 < param_2 - DXGI_FORMAT_BC4_TYPELESS)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(DXGIFormat >= DXGI_FORMAT_BC1_TYPELESS && DXGIFormat <= DXGI_FORMAT_BC1_UNORM_SRGB) || (DXGIFormat >= DXGI_FORMAT_BC4_TYPELESS && DXGIFormat <= DXGI_FORMAT_BC4_SNORM)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                             ,0x209,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      param_1->DepthInTexels = param_1->DepthInTexels * 2;
      return;
    }
    if (uVar4 < 9) {
      param_1->WidthInTexels = 0x10;
      param_1->HeightInTexels = 0x10;
      param_1->DepthInTexels = 0x10;
    }
    else if (uVar4 < 0x11) {
      param_1->WidthInTexels = 0x10;
      param_1->HeightInTexels = 0x10;
      param_1->DepthInTexels = 8;
    }
    else if (uVar4 < 0x21) {
      param_1->WidthInTexels = 0x10;
      param_1->HeightInTexels = 8;
      param_1->DepthInTexels = 8;
    }
    else if (uVar4 < 0x41) {
      param_1->WidthInTexels = 8;
      param_1->HeightInTexels = 8;
      param_1->DepthInTexels = 8;
    }
    else if (uVar4 < 0x81) {
      param_1->WidthInTexels = 8;
      param_1->HeightInTexels = 8;
      param_1->DepthInTexels = 4;
    }
    else {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                         ,0x22f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = UE::DXGIUtilities::GetWidthAlignment(param_2);
    if ((uVar3 != 1) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("UE::DXGIUtilities::GetWidthAlignment(DXGIFormat) == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x232,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = UE::DXGIUtilities::GetHeightAlignment(param_2);
    if (uVar3 == 1) {
      return;
    }
    iVar5 = 0x233;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("UE::DXGIUtilities::GetHeightAlignment(DXGIFormat) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                     ,iVar5,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// GetD3DCommandQueueTypeName @ 145a68df0

wchar_t * __cdecl GetD3DCommandQueueTypeName(ED3D12QueueType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Direct) {
    if (param_1 == Copy) {
      return L"Copy";
    }
    if (param_1 == Async) {
      return L"Compute";
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"3D";
}

// GetFence @ 145a68ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::GetFence
          (ResidencyManagerInternal *this,ID3D12CommandQueue *param_1,Fence **param_2)

{
  int iVar1;
  Fence *pFVar2;
  Fence *pFVar3;
  _LIST_ENTRY *p_Var4;
  undefined1 auStack_78 [32];
  Fence *local_58;
  Fence *local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  _LUID local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = this->ResidencyManagerUniqueID;
  local_38 = 0xf0;
  local_34 = 0xd0000;
  pFVar3 = (Fence *)0x0;
  local_40[0] = 8;
  *param_2 = (Fence *)0x0;
  iVar1 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_38,local_40,&local_48);
  if (iVar1 < 0) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 != (Fence *)0x0) {
      p_Var4 = &pFVar2->ListEntry;
      pFVar2->pFence = (ID3D12Fence *)0x0;
      (pFVar2->ListEntry).Blink = p_Var4;
      p_Var4->Flink = p_Var4;
      pFVar2->FenceValue = 1;
      pFVar3 = pFVar2;
    }
    *param_2 = pFVar3;
    local_58 = pFVar3;
    iVar1 = (**(code **)((longlong)*this->Device + 0x120))
                      (this->Device,0,0,&_GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76);
    pFVar3 = *param_2;
    p_Var4 = &pFVar3->ListEntry;
    p_Var4->Flink = &this->QueueFencesListHead;
    (pFVar3->ListEntry).Blink = (this->QueueFencesListHead).Blink;
    ((this->QueueFencesListHead).Blink)->Flink = p_Var4;
    (this->QueueFencesListHead).Blink = p_Var4;
    LOCK();
    this->NumQueuesSeen = this->NumQueuesSeen + 1;
    UNLOCK();
    if (iVar1 < 0) {
      *param_2 = local_48;
    }
    else {
      local_48 = *param_2;
      iVar1 = (**(code **)((longlong)*param_1 + 0x20))(param_1,&local_38,8,&local_48);
      *param_2 = local_48;
    }
  }
  else {
    *param_2 = local_48;
  }
  return iVar1;
}

// GetMaxExecuteBatchSize @ 145a69670

int __cdecl GetMaxExecuteBatchSize(ED3D12QueueType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == Direct) {
    iVar3 = 1;
    if (1 < GD3D12SubmissionMaxExecuteBatchSizeDirect) {
      iVar3 = GD3D12SubmissionMaxExecuteBatchSizeDirect;
    }
    return iVar3;
  }
  if (param_1 == Copy) {
    iVar3 = 1;
    if (1 < GD3D12SubmissionMaxExecuteBatchSizeCopy) {
      iVar3 = GD3D12SubmissionMaxExecuteBatchSizeCopy;
    }
    return iVar3;
  }
  if (param_1 == Async) {
    iVar3 = 1;
    if (1 < GD3D12SubmissionMaxExecuteBatchSizeAsync) {
      iVar3 = GD3D12SubmissionMaxExecuteBatchSizeAsync;
    }
    return iVar3;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                     ,0x173,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0x7fffffff;
}

// GetPlacedBufferRequiredSize @ 145a69870

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ulong64 __cdecl
GetPlacedBufferRequiredSize
          (FD3D12CommandContext *param_1,D3D12_SUBRESOURCE_FOOTPRINT *param_2,
          FPixelFormatInfo *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_2->Width % (uint)param_3->BlockSizeX != 0) {
    UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>(&local_48,param_1);
    FName::ToString(param_4,&local_58);
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Footprint.Width % Format.BlockSizeX) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x5a3,L"Width not aligned to block size for: \'%s\'\nBreadcrumbs: %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_2->Height % (uint)param_3->BlockSizeY != 0) {
    UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>(&local_28,param_1);
    FName::ToString(param_4,&local_38);
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Footprint.Height % Format.BlockSizeY) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x5a4,L"Height not aligned to block size for: \'%s\'\nBreadcrumbs: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (ulonglong)
         (((((param_3->BlockSizeX - 1U) + param_2->Width) / (uint)param_3->BlockSizeX) *
           param_3->BlockBytes +
          (((param_2->Height - 1) + param_3->BlockSizeY) / (uint)param_3->BlockSizeY - 1) *
          param_2->RowPitch) * param_2->Depth);
}

// GetReadBackHeapDescImpl @ 145a69ed0

void __cdecl
GetReadBackHeapDescImpl
          (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *param_1,ID3D12Device *param_2,
          D3D12_RESOURCE_DESC *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 in_register_0000008c;
  ulonglong local_res8;
  
  local_res8 = 0;
  if (param_4 != 0) {
    (**(code **)((longlong)*param_2 + 0x130))
              (param_2,param_3,0,CONCAT44(in_register_0000008c,param_4),0,0,0,0,&local_res8);
    local_res8 = local_res8 + 0x1ff & 0xfffffffffffffe00;
  }
  (**(code **)((longlong)*param_2 + 0x130))(param_2,param_3,param_4,1,local_res8,param_1,0,0,0);
  if (((param_1->Footprint).Width == 0) || ((param_1->Footprint).Height == 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("OutFootprint.Footprint.Width > 0 && OutFootprint.Footprint.Height > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x999,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetTextureCopyRegionString @ 145a6b060

FString * __cdecl
GetTextureCopyRegionString
          (FString *__return_storage_ptr__,FSubresourceIndices *param_1,D3D12_BOX *param_2,
          uint param_3,uint param_4,uint param_5)

{
  FString::PrintfImpl(__return_storage_ptr__,
                      L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                     );
  return __return_storage_ptr__;
}

// GetTypeHash @ 145a6b0e0

uint __cdecl GetTypeHash(D3D12_SAMPLER_DESC *param_1)

{
  return param_1->Filter;
}

// GetTypeHash @ 145a6b0f0

uint __cdecl GetTypeHash(FD3D12QuantizedBoundShaderState *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = (param_1->RegisterCounts).Elements[0].SamplerCount;
  uVar3 = (param_1->ShaderBindingLayout).Hash;
  uVar2 = (bVar1 >> 2) + 0x9e3779b9 +
          (uint)(param_1->RegisterCounts).Elements[0].ConstantBufferCount + (uint)bVar1 * 0x40 ^
          (uint)bVar1;
  uVar2 = (uVar2 >> 2) +
          (param_1->RegisterCounts).Elements[0].ShaderResourceCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2;
  bVar1 = (param_1->RegisterCounts).Elements[1].SamplerCount;
  uVar3 = (uVar3 >> 2) + 0x9e3779b9 +
          ((uVar2 >> 2) +
           (param_1->RegisterCounts).Elements[0].UnorderedAccessCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2) + uVar3 * 0x40 ^ uVar3;
  uVar2 = (bVar1 >> 2) + 0x9e3779b9 +
          (uint)(param_1->RegisterCounts).Elements[1].ConstantBufferCount + (uint)bVar1 * 0x40 ^
          (uint)bVar1;
  uVar2 = (uVar2 >> 2) +
          (param_1->RegisterCounts).Elements[1].ShaderResourceCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2;
  bVar1 = (param_1->RegisterCounts).Elements[2].SamplerCount;
  uVar3 = (uVar3 >> 2) +
          ((uVar2 >> 2) +
           (param_1->RegisterCounts).Elements[1].UnorderedAccessCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2) + uVar3 * 0x40 + -0x61c88647 ^ uVar3;
  uVar2 = (bVar1 >> 2) + 0x9e3779b9 +
          (uint)(param_1->RegisterCounts).Elements[2].ConstantBufferCount + (uint)bVar1 * 0x40 ^
          (uint)bVar1;
  uVar2 = (uVar2 >> 2) +
          (param_1->RegisterCounts).Elements[2].ShaderResourceCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2;
  bVar1 = (param_1->RegisterCounts).Elements[3].SamplerCount;
  uVar3 = (uVar3 >> 2) +
          ((uVar2 >> 2) +
           (param_1->RegisterCounts).Elements[2].UnorderedAccessCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2) + uVar3 * 0x40 + -0x61c88647 ^ uVar3;
  uVar2 = (bVar1 >> 2) + 0x9e3779b9 +
          (uint)(param_1->RegisterCounts).Elements[3].ConstantBufferCount + (uint)bVar1 * 0x40 ^
          (uint)bVar1;
  uVar2 = (uVar2 >> 2) +
          (param_1->RegisterCounts).Elements[3].ShaderResourceCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2;
  bVar1 = (param_1->RegisterCounts).Elements[4].SamplerCount;
  uVar3 = (uVar3 >> 2) +
          ((uVar2 >> 2) +
           (param_1->RegisterCounts).Elements[3].UnorderedAccessCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2) + uVar3 * 0x40 + -0x61c88647 ^ uVar3;
  uVar2 = (bVar1 >> 2) + 0x9e3779b9 +
          (uint)(param_1->RegisterCounts).Elements[4].ConstantBufferCount + (uint)bVar1 * 0x40 ^
          (uint)bVar1;
  uVar2 = (uVar2 >> 2) +
          (param_1->RegisterCounts).Elements[4].ShaderResourceCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2;
  bVar1 = (param_1->RegisterCounts).Elements[5].SamplerCount;
  uVar3 = (uVar3 >> 2) +
          ((uVar2 >> 2) +
           (param_1->RegisterCounts).Elements[4].UnorderedAccessCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2) + uVar3 * 0x40 + -0x61c88647 ^ uVar3;
  uVar2 = (bVar1 >> 2) + 0x9e3779b9 +
          (uint)(param_1->RegisterCounts).Elements[5].ConstantBufferCount + (uint)bVar1 * 0x40 ^
          (uint)bVar1;
  uVar2 = (uVar2 >> 2) +
          (param_1->RegisterCounts).Elements[5].ShaderResourceCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2;
  uVar3 = (uVar3 >> 2) +
          ((uVar2 >> 2) +
           (param_1->RegisterCounts).Elements[5].UnorderedAccessCount + 0x9e3779b9 + uVar2 * 0x40 ^
          uVar2) + uVar3 * 0x40 + -0x61c88647 ^ uVar3;
  uVar3 = param_1->RootSignatureType + 0x9e3779b9 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  return (uVar3 >> 2) + 0x9e3779b9 + (uint)(param_1->field3_0xec).Flags + uVar3 * 0x40 ^ uVar3;
}

// LexToString @ 145a6ccb0

wchar_t * __cdecl LexToString(DXGI_FORMAT param_1)

{
  switch(param_1) {
  default:
    return L"DXGI_FORMAT_UNKNOWN";
  case DXGI_FORMAT_R32G32B32A32_TYPELESS:
    return L"DXGI_FORMAT_R32G32B32A32_TYPELESS";
  case DXGI_FORMAT_R32G32B32A32_FLOAT:
    return L"DXGI_FORMAT_R32G32B32A32_FLOAT";
  case DXGI_FORMAT_R32G32B32A32_UINT:
    return L"DXGI_FORMAT_R32G32B32A32_UINT";
  case DXGI_FORMAT_R32G32B32A32_SINT:
    return L"DXGI_FORMAT_R32G32B32A32_SINT";
  case DXGI_FORMAT_R32G32B32_TYPELESS:
    return L"DXGI_FORMAT_R32G32B32_TYPELESS";
  case DXGI_FORMAT_R32G32B32_FLOAT:
    return L"DXGI_FORMAT_R32G32B32_FLOAT";
  case DXGI_FORMAT_R32G32B32_UINT:
    return L"DXGI_FORMAT_R32G32B32_UINT";
  case DXGI_FORMAT_R32G32B32_SINT:
    return L"DXGI_FORMAT_R32G32B32_SINT";
  case DXGI_FORMAT_R16G16B16A16_TYPELESS:
    return L"DXGI_FORMAT_R16G16B16A16_TYPELESS";
  case DXGI_FORMAT_R16G16B16A16_FLOAT:
    return L"DXGI_FORMAT_R16G16B16A16_FLOAT";
  case DXGI_FORMAT_R16G16B16A16_UNORM:
    return L"DXGI_FORMAT_R16G16B16A16_UNORM";
  case DXGI_FORMAT_R16G16B16A16_UINT:
    return L"DXGI_FORMAT_R16G16B16A16_UINT";
  case DXGI_FORMAT_R16G16B16A16_SNORM:
    return L"DXGI_FORMAT_R16G16B16A16_SNORM";
  case DXGI_FORMAT_R16G16B16A16_SINT:
    return L"DXGI_FORMAT_R16G16B16A16_SINT";
  case DXGI_FORMAT_R32G32_TYPELESS:
    return L"DXGI_FORMAT_R32G32_TYPELESS";
  case DXGI_FORMAT_R32G32_FLOAT:
    return L"DXGI_FORMAT_R32G32_FLOAT";
  case DXGI_FORMAT_R32G32_UINT:
    return L"DXGI_FORMAT_R32G32_UINT";
  case DXGI_FORMAT_R32G32_SINT:
    return L"DXGI_FORMAT_R32G32_SINT";
  case DXGI_FORMAT_R32G8X24_TYPELESS:
    return L"DXGI_FORMAT_R32G8X24_TYPELESS";
  case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
    return L"DXGI_FORMAT_D32_FLOAT_S8X24_UINT";
  case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
    return L"DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS";
  case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
    return L"DXGI_FORMAT_X32_TYPELESS_G8X24_UINT";
  case DXGI_FORMAT_R10G10B10A2_TYPELESS:
    return L"DXGI_FORMAT_R10G10B10A2_TYPELESS";
  case DXGI_FORMAT_R10G10B10A2_UNORM:
    return L"DXGI_FORMAT_R10G10B10A2_UNORM";
  case DXGI_FORMAT_R10G10B10A2_UINT:
    return L"DXGI_FORMAT_R10G10B10A2_UINT";
  case DXGI_FORMAT_R11G11B10_FLOAT:
    return L"DXGI_FORMAT_R11G11B10_FLOAT";
  case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    return L"DXGI_FORMAT_R8G8B8A8_TYPELESS";
  case DXGI_FORMAT_R8G8B8A8_UNORM:
    return L"DXGI_FORMAT_R8G8B8A8_UNORM";
  case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    return L"DXGI_FORMAT_R8G8B8A8_UNORM_SRGB";
  case DXGI_FORMAT_R8G8B8A8_UINT:
    return L"DXGI_FORMAT_R8G8B8A8_UINT";
  case DXGI_FORMAT_R8G8B8A8_SNORM:
    return L"DXGI_FORMAT_R8G8B8A8_SNORM";
  case DXGI_FORMAT_R8G8B8A8_SINT:
    return L"DXGI_FORMAT_R8G8B8A8_SINT";
  case DXGI_FORMAT_R16G16_TYPELESS:
    return L"DXGI_FORMAT_R16G16_TYPELESS";
  case DXGI_FORMAT_R16G16_FLOAT:
    return L"DXGI_FORMAT_R16G16_FLOAT";
  case DXGI_FORMAT_R16G16_UNORM:
    return L"DXGI_FORMAT_R16G16_UNORM";
  case DXGI_FORMAT_R16G16_UINT:
    return L"DXGI_FORMAT_R16G16_UINT";
  case DXGI_FORMAT_R16G16_SNORM:
    return L"DXGI_FORMAT_R16G16_SNORM";
  case DXGI_FORMAT_R16G16_SINT:
    return L"DXGI_FORMAT_R16G16_SINT";
  case DXGI_FORMAT_R32_TYPELESS:
    return L"DXGI_FORMAT_R32_TYPELESS";
  case DXGI_FORMAT_D32_FLOAT:
    return L"DXGI_FORMAT_D32_FLOAT";
  case DXGI_FORMAT_R32_FLOAT:
    return L"DXGI_FORMAT_R32_FLOAT";
  case DXGI_FORMAT_R32_UINT:
    return L"DXGI_FORMAT_R32_UINT";
  case DXGI_FORMAT_R32_SINT:
    return L"DXGI_FORMAT_R32_SINT";
  case DXGI_FORMAT_R24G8_TYPELESS:
    return L"DXGI_FORMAT_R24G8_TYPELESS";
  case DXGI_FORMAT_D24_UNORM_S8_UINT:
    return L"DXGI_FORMAT_D24_UNORM_S8_UINT";
  case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
    return L"DXGI_FORMAT_R24_UNORM_X8_TYPELESS";
  case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
    return L"DXGI_FORMAT_X24_TYPELESS_G8_UINT";
  case DXGI_FORMAT_R8G8_TYPELESS:
    return L"DXGI_FORMAT_R8G8_TYPELESS";
  case DXGI_FORMAT_R8G8_UNORM:
    return L"DXGI_FORMAT_R8G8_UNORM";
  case DXGI_FORMAT_R8G8_UINT:
    return L"DXGI_FORMAT_R8G8_UINT";
  case DXGI_FORMAT_R8G8_SNORM:
    return L"DXGI_FORMAT_R8G8_SNORM";
  case DXGI_FORMAT_R8G8_SINT:
    return L"DXGI_FORMAT_R8G8_SINT";
  case DXGI_FORMAT_R16_TYPELESS:
    return L"DXGI_FORMAT_R16_TYPELESS";
  case DXGI_FORMAT_R16_FLOAT:
    return L"DXGI_FORMAT_R16_FLOAT";
  case DXGI_FORMAT_D16_UNORM:
    return L"DXGI_FORMAT_D16_UNORM";
  case DXGI_FORMAT_R16_UNORM:
    return L"DXGI_FORMAT_R16_UNORM";
  case DXGI_FORMAT_R16_UINT:
    return L"DXGI_FORMAT_R16_UINT";
  case DXGI_FORMAT_R16_SNORM:
    return L"DXGI_FORMAT_R16_SNORM";
  case DXGI_FORMAT_R16_SINT:
    return L"DXGI_FORMAT_R16_SINT";
  case DXGI_FORMAT_R8_TYPELESS:
    return L"DXGI_FORMAT_R8_TYPELESS";
  case DXGI_FORMAT_R8_UNORM:
    return L"DXGI_FORMAT_R8_UNORM";
  case DXGI_FORMAT_R8_UINT:
    return L"DXGI_FORMAT_R8_UINT";
  case DXGI_FORMAT_R8_SNORM:
    return L"DXGI_FORMAT_R8_SNORM";
  case DXGI_FORMAT_R8_SINT:
    return L"DXGI_FORMAT_R8_SINT";
  case DXGI_FORMAT_A8_UNORM:
    return L"DXGI_FORMAT_A8_UNORM";
  case DXGI_FORMAT_R1_UNORM:
    return L"DXGI_FORMAT_R1_UNORM";
  case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
    return L"DXGI_FORMAT_R9G9B9E5_SHAREDEXP";
  case DXGI_FORMAT_R8G8_B8G8_UNORM:
    return L"DXGI_FORMAT_R8G8_B8G8_UNORM";
  case DXGI_FORMAT_G8R8_G8B8_UNORM:
    return L"DXGI_FORMAT_G8R8_G8B8_UNORM";
  case DXGI_FORMAT_BC1_TYPELESS:
    return L"DXGI_FORMAT_BC1_TYPELESS";
  case DXGI_FORMAT_BC1_UNORM:
    return L"DXGI_FORMAT_BC1_UNORM";
  case DXGI_FORMAT_BC1_UNORM_SRGB:
    return L"DXGI_FORMAT_BC1_UNORM_SRGB";
  case DXGI_FORMAT_BC2_TYPELESS:
    return L"DXGI_FORMAT_BC2_TYPELESS";
  case DXGI_FORMAT_BC2_UNORM:
    return L"DXGI_FORMAT_BC2_UNORM";
  case DXGI_FORMAT_BC2_UNORM_SRGB:
    return L"DXGI_FORMAT_BC2_UNORM_SRGB";
  case DXGI_FORMAT_BC3_TYPELESS:
    return L"DXGI_FORMAT_BC3_TYPELESS";
  case DXGI_FORMAT_BC3_UNORM:
    return L"DXGI_FORMAT_BC3_UNORM";
  case DXGI_FORMAT_BC3_UNORM_SRGB:
    return L"DXGI_FORMAT_BC3_UNORM_SRGB";
  case DXGI_FORMAT_BC4_TYPELESS:
    return L"DXGI_FORMAT_BC4_TYPELESS";
  case DXGI_FORMAT_BC4_UNORM:
    return L"DXGI_FORMAT_BC4_UNORM";
  case DXGI_FORMAT_BC4_SNORM:
    return L"DXGI_FORMAT_BC4_SNORM";
  case DXGI_FORMAT_BC5_TYPELESS:
    return L"DXGI_FORMAT_BC5_TYPELESS";
  case DXGI_FORMAT_BC5_UNORM:
    return L"DXGI_FORMAT_BC5_UNORM";
  case DXGI_FORMAT_BC5_SNORM:
    return L"DXGI_FORMAT_BC5_SNORM";
  case DXGI_FORMAT_B5G6R5_UNORM:
    return L"DXGI_FORMAT_B5G6R5_UNORM";
  case DXGI_FORMAT_B5G5R5A1_UNORM:
    return L"DXGI_FORMAT_B5G5R5A1_UNORM";
  case DXGI_FORMAT_B8G8R8A8_UNORM:
    return L"DXGI_FORMAT_B8G8R8A8_UNORM";
  case DXGI_FORMAT_B8G8R8X8_UNORM:
    return L"DXGI_FORMAT_B8G8R8X8_UNORM";
  case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
    return L"DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM";
  case DXGI_FORMAT_B8G8R8A8_TYPELESS:
    return L"DXGI_FORMAT_B8G8R8A8_TYPELESS";
  case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    return L"DXGI_FORMAT_B8G8R8A8_UNORM_SRGB";
  case DXGI_FORMAT_B8G8R8X8_TYPELESS:
    return L"DXGI_FORMAT_B8G8R8X8_TYPELESS";
  case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
    return L"DXGI_FORMAT_B8G8R8X8_UNORM_SRGB";
  case DXGI_FORMAT_BC6H_TYPELESS:
    return L"DXGI_FORMAT_BC6H_TYPELESS";
  case DXGI_FORMAT_BC6H_UF16:
    return L"DXGI_FORMAT_BC6H_UF16";
  case DXGI_FORMAT_BC6H_SF16:
    return L"DXGI_FORMAT_BC6H_SF16";
  case DXGI_FORMAT_BC7_TYPELESS:
    return L"DXGI_FORMAT_BC7_TYPELESS";
  case DXGI_FORMAT_BC7_UNORM:
    return L"DXGI_FORMAT_BC7_UNORM";
  case DXGI_FORMAT_BC7_UNORM_SRGB:
    return L"DXGI_FORMAT_BC7_UNORM_SRGB";
  case DXGI_FORMAT_AYUV:
    return L"DXGI_FORMAT_AYUV";
  case DXGI_FORMAT_Y410:
    return L"DXGI_FORMAT_Y410";
  case DXGI_FORMAT_Y416:
    return L"DXGI_FORMAT_Y416";
  case DXGI_FORMAT_NV12:
    return L"DXGI_FORMAT_NV12";
  case DXGI_FORMAT_P010:
    return L"DXGI_FORMAT_P010";
  case DXGI_FORMAT_P016:
    return L"DXGI_FORMAT_P016";
  case DXGI_FORMAT_420_OPAQUE:
    return L"DXGI_FORMAT_420_OPAQUE";
  case DXGI_FORMAT_YUY2:
    return L"DXGI_FORMAT_YUY2";
  case DXGI_FORMAT_Y210:
    return L"DXGI_FORMAT_Y210";
  case DXGI_FORMAT_Y216:
    return L"DXGI_FORMAT_Y216";
  case DXGI_FORMAT_NV11:
    return L"DXGI_FORMAT_NV11";
  case DXGI_FORMAT_AI44:
    return L"DXGI_FORMAT_AI44";
  case DXGI_FORMAT_IA44:
    return L"DXGI_FORMAT_IA44";
  case DXGI_FORMAT_P8:
    return L"DXGI_FORMAT_P8";
  case DXGI_FORMAT_A8P8:
    return L"DXGI_FORMAT_A8P8";
  case DXGI_FORMAT_B4G4R4A4_UNORM:
    return L"DXGI_FORMAT_B4G4R4A4_UNORM";
  case DXGI_FORMAT_P208:
    return L"DXGI_FORMAT_P208";
  case DXGI_FORMAT_V208:
    return L"DXGI_FORMAT_V208";
  case DXGI_FORMAT_V408:
    return L"DXGI_FORMAT_V408";
  case DXGI_FORMAT_SAMPLER_FEEDBACK_MIN_MIP_OPAQUE:
    return L"DXGI_FORMAT_SAMPLER_FEEDBACK_MIN_MIP_OPAQUE";
  case DXGI_FORMAT_SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE:
    return L"DXGI_FORMAT_SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE";
  }
}

// ReverseTranslateBlendFactor @ 145a7c560

/* WARNING: Enum "EBlendFactor": Some values do not have unique names */

EBlendFactor __cdecl ReverseTranslateBlendFactor(D3D12_BLEND param_1)

{
  switch(param_1) {
  case D3D12_BLEND_ONE:
    return BF_One;
  case D3D12_BLEND_SRC_COLOR:
    return BF_SourceColor;
  case D3D12_BLEND_INV_SRC_COLOR:
    return BF_InverseSourceColor;
  case D3D12_BLEND_SRC_ALPHA:
    return BF_SourceAlpha;
  case D3D12_BLEND_INV_SRC_ALPHA:
    return BF_InverseSourceAlpha;
  case D3D12_BLEND_DEST_ALPHA:
    return BF_DestAlpha;
  case D3D12_BLEND_INV_DEST_ALPHA:
    return BF_InverseDestAlpha;
  case D3D12_BLEND_DEST_COLOR:
    return BF_DestColor;
  case D3D12_BLEND_INV_DEST_COLOR:
    return BF_InverseDestColor;
  default:
    return BF_Zero;
  case D3D12_BLEND_BLEND_FACTOR:
    return BF_ConstantBlendFactor;
  case D3D12_BLEND_INV_BLEND_FACTOR:
    return BF_InverseConstantBlendFactor;
  case D3D12_BLEND_SRC1_COLOR:
    return BF_Source1Color;
  case D3D12_BLEND_INV_SRC1_COLOR:
    return BF_InverseSource1Color;
  case D3D12_BLEND_SRC1_ALPHA:
    return BF_Source1Alpha;
  case D3D12_BLEND_INV_SRC1_ALPHA:
    return BF_InverseSource1Alpha;
  }
}

// ReverseTranslateCompareFunction @ 145a7c630

/* WARNING: Enum "ECompareFunction": Some values do not have unique names */

ECompareFunction __cdecl ReverseTranslateCompareFunction(D3D12_COMPARISON_FUNC param_1)

{
  switch(param_1) {
  case D3D12_COMPARISON_FUNC_NEVER:
    return CF_Never;
  case D3D12_COMPARISON_FUNC_LESS:
    return CF_DepthFarther;
  case D3D12_COMPARISON_FUNC_EQUAL:
    return CF_Equal;
  case D3D12_COMPARISON_FUNC_LESS_EQUAL:
    return CF_DepthFartherOrEqual;
  case D3D12_COMPARISON_FUNC_GREATER:
    return CF_DepthNear;
  case D3D12_COMPARISON_FUNC_NOT_EQUAL:
    return CF_NotEqual;
  case D3D12_COMPARISON_FUNC_GREATER_EQUAL:
    return CF_DepthNearOrEqual;
  default:
    return CF_Always;
  }
}

// ReverseTranslateStencilOp @ 145a7c6a0

/* WARNING: Enum "EStencilOp": Some values do not have unique names */

EStencilOp __cdecl ReverseTranslateStencilOp(D3D12_STENCIL_OP param_1)

{
  switch(param_1) {
  case D3D12_STENCIL_OP_ZERO:
    return SO_Zero;
  case D3D12_STENCIL_OP_REPLACE:
    return SO_Replace;
  case D3D12_STENCIL_OP_INCR_SAT:
    return EStencilOp_NumBits;
  case D3D12_STENCIL_OP_DECR_SAT:
    return SO_SaturatedDecrement;
  case D3D12_STENCIL_OP_INVERT:
    return SO_Invert;
  case D3D12_STENCIL_OP_INCR:
    return SO_Increment;
  case D3D12_STENCIL_OP_DECR:
    return SO_Decrement;
  default:
    return SO_Keep;
  }
}

// SafeCreateTexture2D @ 145a7c790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
SafeCreateTexture2D(FD3D12Device *param_1,FD3D12Adapter *param_2,FD3D12ResourceDesc *param_3,
                   D3D12_CLEAR_VALUE *param_4,FD3D12ResourceLocation *param_5,
                   FD3D12BaseShaderResource *param_6,EPixelFormat param_7,
                   ETextureCreateFlags param_8,ED3D12Access param_9,ED3D12Access param_10,
                   wchar_t *param_11)

{
  code *pcVar1;
  FD3D12Adapter *this;
  bool bVar2;
  int iVar3;
  ID3D12Device *pIVar4;
  FD3D12Queue *pFVar5;
  undefined1 auStackY_118 [32];
  FD3D12Adapter *local_c0;
  ulong64 local_b8;
  FD3D12Resource *local_b0;
  FD3D12ResourceDesc *local_a8;
  ID3D12CommandQueue *local_a0;
  FD3D12ResourceDesc local_98;
  D3D12_RESOURCE_ALLOCATION_INFO local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c0 = param_2;
  local_a8 = param_3;
  if ((param_8 >> 0x13 & 1) == 0) {
    if (param_3->bReservedResource) {
      local_c0 = (FD3D12Adapter *)0x0;
      iVar3 = FD3D12Adapter::CreateReservedResource
                        (param_2,param_3,(FRHIGPUMask)*(uint *)param_1,param_9,MultiState,param_10,
                         param_4,(FD3D12Resource **)&local_c0,param_11,false);
      if (iVar3 < 0) {
        pIVar4 = FD3D12Device::GetDevice(param_1);
        D3D12RHI::VerifyD3D12CreateTextureResult
                  (iVar3,
                   "Adapter->CreateReservedResource( TextureDesc, pDevice->GetGPUMask(), InInitialD3D12Access, ED3D12ResourceStateMode::MultiState, InDefaultD3D12Access, ClearValue, &Resource, Name, false)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                   ,0x215,(D3D12_RESOURCE_DESC *)param_3,pIVar4);
      }
      FD3D12Device::GetResourceAllocationInfo(param_1,&local_58,param_3);
      this = local_c0;
      FD3D12ResourceLocation::AsStandAlone
                (param_5,(FD3D12Resource *)local_c0,local_58.SizeInBytes,false,
                 (D3D12_HEAP_PROPERTIES *)0x0);
      if ((param_8 >> 0x26 & 1) != 0) {
        pFVar5 = FD3D12Device::GetQueue(param_1,Direct);
        local_a0 = (pFVar5->D3DCommandQueue).Reference;
        FD3D12Resource::CommitReservedResource((FD3D12Resource *)this,local_a0,0xffffffffffffffff);
      }
    }
    else {
      local_98._padding_ = param_3->_padding_;
      local_98._padding_ = param_3->_padding_;
      local_98._padding_ = param_3->_padding_;
      local_98._padding_ = param_3->_padding_;
      local_98._padding_ = param_3->_padding_;
      local_98._padding_ = param_3->_padding_;
      local_98._padding_ = param_3->_padding_;
      local_98.PixelFormat = param_3->PixelFormat;
      local_98.UAVPixelFormat = param_3->UAVPixelFormat;
      local_98._58_6_ = *(undefined6 *)&param_3->field_0x3a;
      iVar3 = FD3D12TextureAllocatorPool::AllocateTexture
                        (&param_1->TextureAllocator,&local_98,param_4,param_7,param_5,param_9,
                         param_10,param_11);
      if (iVar3 < 0) {
        pIVar4 = FD3D12Device::GetDevice(param_1);
        D3D12RHI::VerifyD3D12CreateTextureResult
                  (iVar3,
                   "pDevice->GetTextureAllocator().AllocateTexture( TextureDesc, ClearValue, Format, *OutTexture2D, InInitialD3D12Access, InDefaultD3D12Access, Name)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                   ,0x22e,(D3D12_RESOURCE_DESC *)param_3,pIVar4);
      }
    }
    param_5->Owner = param_6;
  }
  else if (((byte)(param_8 >> 0x13) & 1) == 1) {
    local_b8 = 0;
    pIVar4 = FD3D12Device::GetDevice(param_1);
    (**(code **)((longlong)*pIVar4 + 0x130))
              (pIVar4,param_3,0,
               (uint)*(ushort *)((longlong)&param_3->_padding_ + 6) *
               (uint)*(ushort *)((longlong)&param_3->_padding_ + 4));
    local_b0 = (FD3D12Resource *)0x0;
    iVar3 = FD3D12Adapter::CreateBuffer
                      (local_c0,D3D12_HEAP_TYPE_READBACK,(FRHIGPUMask)*(uint *)param_1,
                       (FRHIGPUMask)*(uint *)&param_1->field_0x4,local_b8,&local_b0,param_11,
                       D3D12_RESOURCE_FLAG_NONE);
    if (iVar3 < 0) {
      pIVar4 = FD3D12Device::GetDevice(param_1);
      D3D12RHI::VerifyD3D12CreateTextureResult
                (iVar3,
                 "Adapter->CreateBuffer(HeapType, pDevice->GetGPUMask(), pDevice->GetVisibilityMask(), Size, &Resource, Name)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                 ,0x1ff,(D3D12_RESOURCE_DESC *)param_3,pIVar4);
    }
    FD3D12ResourceLocation::AsStandAlone(param_5,local_b0,0,false,(D3D12_HEAP_PROPERTIES *)0x0);
  }
  else {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SignalFence @ 145a7edc0

int __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::SignalFence
          (ResidencyManagerInternal *this,ID3D12CommandQueue *param_1,Fence *param_2)

{
  CriticalSection *lpCriticalSection;
  _LIST_ENTRY *p_Var1;
  uint uVar2;
  ulong64 uVar3;
  _LIST_ENTRY *p_Var4;
  ulonglong uVar5;
  int iVar6;
  ulong64 *puVar7;
  ulong64 uVar8;
  
  iVar6 = (**(code **)((longlong)*param_1 + 0x70))(param_1,param_2->pFence,param_2->FenceValue);
  param_2->FenceValue = param_2->FenceValue + 1;
  if (-1 < iVar6) {
    lpCriticalSection = &this->AsyncWorkMutex;
    if (lpCriticalSection != (CriticalSection *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar2 = this->NumQueuesSeen;
    uVar3 = this->CurrentSyncPointGeneration;
    uVar8 = ((ulonglong)(uVar2 - 1) + 3) * 0x10;
    puVar7 = operator_new__(uVar8);
    if ((puVar7 == (ulong64 *)0x0) || (uVar8 < 0x30)) {
      if (lpCriticalSection != (CriticalSection *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      iVar6 = -0x7ff8fff2;
    }
    else {
      iVar6 = 0;
      *(uint *)(puVar7 + 1) = uVar2;
      *puVar7 = uVar3;
      puVar7[4] = 0;
      puVar7[5] = 0;
      p_Var1 = (this->QueueFencesListHead).Flink;
      uVar5 = 0;
      while (p_Var1 != &this->QueueFencesListHead) {
        p_Var4 = p_Var1->Flink;
        puVar7[(uVar5 + 2) * 2] = (ulong64)(p_Var1 + -1);
        puVar7[uVar5 * 2 + 5] = (ulong64)((longlong)&p_Var1[-1].Blink[-1].Blink + 7);
        p_Var1 = p_Var4;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
      p_Var1 = (_LIST_ENTRY *)(puVar7 + 2);
      p_Var1->Flink = &this->InFlightSyncPointsHead;
      puVar7[3] = (ulong64)(this->InFlightSyncPointsHead).Blink;
      ((this->InFlightSyncPointsHead).Blink)->Flink = p_Var1;
      (this->InFlightSyncPointsHead).Blink = p_Var1;
      if (lpCriticalSection != (CriticalSection *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  this->CurrentSyncPointGeneration = this->CurrentSyncPointGeneration + 1;
  return iVar6;
}

// TranslateBlendFactor @ 145a7f860

/* WARNING: Enum "EBlendFactor": Some values do not have unique names */

D3D12_BLEND __cdecl TranslateBlendFactor(EBlendFactor param_1)

{
  switch(param_1) {
  case BF_One:
    return D3D12_BLEND_ONE;
  case BF_SourceColor:
    return D3D12_BLEND_SRC_COLOR;
  case BF_InverseSourceColor:
    return D3D12_BLEND_INV_SRC_COLOR;
  case BF_SourceAlpha:
    return D3D12_BLEND_SRC_ALPHA;
  case BF_InverseSourceAlpha:
    return D3D12_BLEND_INV_SRC_ALPHA;
  case BF_DestAlpha:
    return D3D12_BLEND_DEST_ALPHA;
  case BF_InverseDestAlpha:
    return D3D12_BLEND_INV_DEST_ALPHA;
  case BF_DestColor:
    return D3D12_BLEND_DEST_COLOR;
  case BF_InverseDestColor:
    return D3D12_BLEND_INV_DEST_COLOR;
  case BF_ConstantBlendFactor:
    return D3D12_BLEND_BLEND_FACTOR;
  case BF_InverseConstantBlendFactor:
    return D3D12_BLEND_INV_BLEND_FACTOR;
  case BF_Source1Color:
    return D3D12_BLEND_SRC1_COLOR;
  case BF_InverseSource1Color:
    return D3D12_BLEND_INV_SRC1_COLOR;
  case BF_Source1Alpha:
    return D3D12_BLEND_SRC1_ALPHA;
  case BF_InverseSource1Alpha:
    return D3D12_BLEND_INV_SRC1_ALPHA;
  default:
    return D3D12_BLEND_ZERO;
  }
}

// TranslateCompareFunction @ 145a7f930

/* WARNING: Enum "ECompareFunction": Some values do not have unique names */

D3D12_COMPARISON_FUNC __cdecl TranslateCompareFunction(ECompareFunction param_1)

{
  switch(param_1) {
  case CF_DepthFarther:
    return D3D12_COMPARISON_FUNC_LESS;
  case CF_DepthFartherOrEqual:
    return D3D12_COMPARISON_FUNC_LESS_EQUAL;
  case CF_DepthNear:
    return D3D12_COMPARISON_FUNC_GREATER;
  case CF_DepthNearOrEqual:
    return D3D12_COMPARISON_FUNC_GREATER_EQUAL;
  case CF_Equal:
    return D3D12_COMPARISON_FUNC_EQUAL;
  case CF_NotEqual:
    return D3D12_COMPARISON_FUNC_NOT_EQUAL;
  case CF_Never:
    return D3D12_COMPARISON_FUNC_NEVER;
  default:
    return D3D12_COMPARISON_FUNC_ALWAYS;
  }
}

// TranslateDesc @ 145a7f9a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

EFlags __cdecl
TranslateDesc(D3D12_SHADER_RESOURCE_VIEW_DESC *param_1,FD3D12Buffer *param_2,FViewInfo *param_3)

{
  DXGI_FORMAT_conflict DVar1;
  
  if (param_3->field_0x12 == '\0') {
    param_1->Shader4ComponentMapping = 0x1688;
    if (param_3->field_0x10 == '\x03') {
      param_1->ViewDimension = D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE;
      param_1->Format = DXGI_FORMAT_UNKNOWN;
      (param_1->field3_0x10).Buffer.FirstElement = (ulonglong)*(uint *)param_3 + param_2->_padding_;
      return None;
    }
    param_1->ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
    DVar1 = UE::DXGIUtilities::FindShaderResourceFormat
                      (GPixelFormats[(byte)param_3->field_0x11].PlatformFormat,false);
    param_1->Format = DVar1;
    (param_1->field3_0x10).Buffer.FirstElement =
         (param_2->_padding_ + (ulonglong)*(uint *)param_3) /
         (ulonglong)*(uint *)&param_3->field_0x4;
    (param_1->field3_0x10).Buffer.NumElements = *(uint *)&param_3->field_0x8;
    if (param_3->field_0x10 == '\x02') {
      (param_1->field3_0x10).Buffer.StructureByteStride = *(uint *)&param_3->field_0x4;
    }
    else if (param_3->field_0x10 == '\x04') {
      param_1->Format = DXGI_FORMAT_R32_TYPELESS;
      (param_1->field3_0x10).Buffer.Flags = D3D12_BUFFER_SRV_FLAG_RAW;
      return None;
    }
  }
  return None;
}

// TranslateDesc @ 145a7fa90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

EFlags __cdecl
TranslateDesc(D3D12_SHADER_RESOURCE_VIEW_DESC *param_1,FD3D12Texture *param_2,FViewInfo *param_3)

{
  code *pcVar1;
  EDimension EVar2;
  bool bVar3;
  EFlags EVar4;
  DXGI_FORMAT_conflict DVar5;
  DXGI_FORMAT DVar6;
  uint uVar7;
  FRHITextureDesc *pFVar8;
  undefined4 *puVar9;
  D3D12_BUFFER_SRV_FLAGS DVar10;
  int iVar11;
  
  pFVar8 = (FRHITextureDesc *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  DVar5 = UE::DXGIUtilities::FindShaderResourceFormat
                    (GPixelFormats[(byte)param_3->field_0x5].PlatformFormat,param_3->bSRGB);
  DVar6 = UE::DXGIUtilities::GetPlatformTextureResourceFormat
                    (GPixelFormats[pFVar8->Format].PlatformFormat,pFVar8->Flags);
  param_1->Format = DVar5;
  param_1->Shader4ComponentMapping = 0x1688;
  DVar6 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(DVar6);
  if (DVar6 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    iVar11 = DVar5 - DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
LAB_145a7fba8:
    if ((iVar11 == 0) || (iVar11 != 1)) goto LAB_145a7fb32;
LAB_145a7fbaf:
    DVar10 = D3D12_BUFFER_SRV_FLAG_RAW;
  }
  else {
    if (DVar6 == DXGI_FORMAT_R24G8_TYPELESS) {
      iVar11 = DVar5 - DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
      goto LAB_145a7fba8;
    }
    if (DVar6 != DXGI_FORMAT_NV12) {
      if ((DVar6 != DXGI_FORMAT_P010) || (DVar5 != DXGI_FORMAT_R16G16_UNORM)) goto LAB_145a7fb32;
      goto LAB_145a7fbaf;
    }
    if (DVar5 == DXGI_FORMAT_R8G8_UNORM) goto LAB_145a7fbaf;
LAB_145a7fb32:
    DVar10 = D3D12_BUFFER_SRV_FLAG_NONE;
  }
  EVar2 = UE::RHICore::AdjustViewInfoDimensionForNarrowing((FViewInfo *)param_3,pFVar8);
  if (EVar2 == Texture2D) {
    if (1 < pFVar8->NumSamples) {
      param_1->ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMS;
      goto LAB_145a7fc73;
    }
    param_1->ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    *(uint *)&param_1->field3_0x10 = (uint)(param_3->MipRange).First;
    uVar7 = (uint)(param_3->MipRange).Num;
    (param_1->field3_0x10).Buffer.NumElements = DVar10;
  }
  else if (EVar2 == Texture2DArray) {
    if (pFVar8->NumSamples < 2) {
      param_1->ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DARRAY;
      *(uint *)((longlong)&param_1->field3_0x10 + 8) = (uint)*(ushort *)param_3;
      *(uint *)((longlong)&param_1->field3_0x10 + 0xc) = (uint)*(ushort *)&param_3->field_0x2;
      *(uint *)&param_1->field3_0x10 = (uint)(param_3->MipRange).First;
      uVar7 = (uint)(param_3->MipRange).Num;
      (param_1->field3_0x10).Buffer.Flags = DVar10;
    }
    else {
      param_1->ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY;
      *(uint *)&param_1->field3_0x10 = (uint)*(ushort *)param_3;
      uVar7 = (uint)*(ushort *)&param_3->field_0x2;
    }
  }
  else if (EVar2 == NumBits) {
    param_1->ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBE;
    *(uint *)&param_1->field3_0x10 = (uint)(param_3->MipRange).First;
    uVar7 = (uint)(param_3->MipRange).Num;
  }
  else {
    if (EVar2 == TextureCubeArray) {
      param_1->ViewDimension = D3D12_SRV_DIMENSION_TEXTURECUBEARRAY;
      *(uint *)&param_1->field3_0x10 = (uint)(param_3->MipRange).First;
      *(uint *)((longlong)&param_1->field3_0x10 + 4) = (uint)(param_3->MipRange).Num;
      (param_1->field3_0x10).Buffer.NumElements =
           ((uint)*(ushort *)param_3 + (uint)*(ushort *)param_3 * 2) * 2;
      *(uint *)((longlong)&param_1->field3_0x10 + 0xc) = (uint)*(ushort *)&param_3->field_0x2;
      goto LAB_145a7fc73;
    }
    if (EVar2 != Texture3D) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12SRV.cpp"
                         ,0xed,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      goto LAB_145a7fc73;
    }
    param_1->ViewDimension = D3D12_SRV_DIMENSION_TEXTURE3D;
    *(uint *)&param_1->field3_0x10 = (uint)(param_3->MipRange).First;
    uVar7 = (uint)(param_3->MipRange).Num;
  }
  *(uint *)((longlong)&param_1->field3_0x10 + 4) = uVar7;
LAB_145a7fc73:
  puVar9 = (undefined4 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  return (EFlags)((uint)*puVar9 >> 0x1d) & SkipFastClearFinalize;
}

// TranslateStencilOp @ 145a7fcb0

/* WARNING: Enum "EStencilOp": Some values do not have unique names */

D3D12_STENCIL_OP __cdecl TranslateStencilOp(EStencilOp param_1)

{
  switch(param_1) {
  case SO_Zero:
    return D3D12_STENCIL_OP_ZERO;
  case SO_Replace:
    return D3D12_STENCIL_OP_REPLACE;
  case EStencilOp_NumBits:
    return D3D12_STENCIL_OP_INCR_SAT;
  case SO_SaturatedDecrement:
    return D3D12_STENCIL_OP_DECR_SAT;
  case SO_Invert:
    return D3D12_STENCIL_OP_INVERT;
  case SO_Increment:
    return D3D12_STENCIL_OP_INCR;
  case SO_Decrement:
    return D3D12_STENCIL_OP_DECR;
  default:
    return D3D12_STENCIL_OP_KEEP;
  }
}

// UpdateBufferStats @ 145a80a20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl D3D12BufferStats::UpdateBufferStats(FD3D12Buffer *param_1,bool param_2)

{
  char cVar1;
  uint uVar2;
  uchar auVar3 [8];
  FName FVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_D3D12RTBuffers> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal> FVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12UAVBuffers> *this;
  uchar auVar10 [8];
  wchar_t *pwVar11;
  bool bVar12;
  FName local_res8;
  char local_res10;
  FStatMessage local_48;
  
  auVar3 = (uchar  [8])param_1->_padding_;
  auVar10 = auVar3;
  if (!param_2) {
    auVar10 = (uchar  [8])-(longlong)auVar3;
  }
  local_res10 = param_2;
  UE::RHICore::UpdateGlobalBufferStats((FRHIBufferDesc *)&param_1->_padding_,(long64)auVar10);
  if (auVar10 == (uchar  [8])0x0) goto LAB_145a80d9f;
  uVar2 = (uint)param_1->_padding_;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 >> 0xd & 1) == 0) {
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3D12RTBuffers>)StatPtr_STAT_D3D12Buffer;
      if (StatPtr_STAT_D3D12Buffer == (FThreadSafeStaticStat<FStat_STAT_D3D12Buffer>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_D3D12Buffer");
        pwVar11 = L"Buffers";
        this = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBuffers> *)&StatPtr_STAT_D3D12Buffer;
        goto LAB_145a80b2f;
      }
    }
    else {
      FVar6 = StatPtr_STAT_D3D12RTBuffers;
      if (StatPtr_STAT_D3D12RTBuffers == (FThreadSafeStaticStat<FStat_STAT_D3D12RTBuffers>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_D3D12RTBuffers");
        pwVar11 = L"RayTracing Buffers";
        this = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBuffers> *)&StatPtr_STAT_D3D12RTBuffers;
LAB_145a80b2f:
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3D12RTBuffers>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)this,*pFVar5,pwVar11,
                           "STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources",true
                           ,false,ST_int64,false,false,MCR_Physical);
      }
    }
  }
  else {
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3D12RTBuffers>)StatPtr_STAT_D3D12UAVBuffers;
    if (StatPtr_STAT_D3D12UAVBuffers == (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBuffers>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_D3D12UAVBuffers");
      pwVar11 = L"UAV Buffers";
      this = &StatPtr_STAT_D3D12UAVBuffers;
      goto LAB_145a80b2f;
    }
  }
  FVar4 = *(FName *)FVar6;
  local_res8 = FVar4;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_48.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
    local_res8 = FVar4;
    local_48.StatData.Pad = auVar10;
    local_48.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_48);
    FStatsTrace::Add(&local_res8,(long64)auVar10);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar9 = StatPtr_STAT_D3D12MemoryCurrentTotal;
  if (StatPtr_STAT_D3D12MemoryCurrentTotal ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_D3D12MemoryCurrentTotal");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12MemoryCurrentTotal,*pFVar5,
                       L"TOTAL","STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources"
                       ,true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar4 = *(FName *)FVar9;
  local_res8 = FVar4;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_48.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
    local_res8 = FVar4;
    local_48.StatData.Pad = auVar10;
    local_48.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_48);
    FStatsTrace::Add(&local_res8,(long64)auVar10);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
LAB_145a80d9f:
  if (local_res10 == '\0') {
    MemoryTrace_Free(param_1->_padding_,1,0);
  }
  else {
    cVar1 = (char)param_1->_padding_;
    if ((cVar1 == '\x01') || (*(char *)((longlong)&param_1->_padding_ + 1) != '\x02')) {
      bVar12 = false;
      if (cVar1 == '\x01') {
        return;
      }
    }
    else {
      bVar12 = *(int *)(param_1->_padding_ + 0xb8) == 0;
    }
    if (!bVar12) {
      MemoryTrace_Alloc(param_1->_padding_,(ulong64)auVar3,param_1->BufferAlignment,1,0);
      return;
    }
  }
  return;
}

// UpdateSubresources @ 145a82500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
UpdateSubresources(ID3D12GraphicsCommandList *param_1,ID3D12Resource *param_2,
                  ID3D12Resource *param_3,uint param_4,uint param_5,ulong64 param_6,
                  D3D12_PLACED_SUBRESOURCE_FOOTPRINT *param_7,uint *param_8,ulong64 *param_9,
                  D3D12_SUBRESOURCE_DATA *param_10)

{
  void *pvVar1;
  size_t _Size;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Dst;
  longlong lVar8;
  void *pvVar9;
  long64 *plVar10;
  undefined1 auStack_1c8 [32];
  ulong64 local_1a8;
  ID3D12Resource **local_1a0;
  undefined8 local_198;
  uint local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  uint *local_168;
  uint *local_160;
  ulong64 *local_158;
  ulonglong local_150;
  longlong local_148;
  size_t local_140;
  ulonglong local_138;
  D3D12_PLACED_SUBRESOURCE_FOOTPRINT *local_130;
  ID3D12Resource *local_128;
  ID3D12GraphicsCommandList *local_120;
  ID3D12Resource *local_118;
  ID3D12Resource *local_110;
  undefined4 local_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ID3D12Resource *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  DXGI_FORMAT DStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  int local_b0 [4];
  ulonglong local_a0;
  int local_78 [14];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_130 = param_7;
  local_168 = param_8;
  local_158 = param_9;
  local_188 = param_4;
  local_128 = param_3;
  local_120 = param_1;
  local_118 = param_2;
  (**(code **)((longlong)*param_3 + 0x50))(param_3,local_b0);
  (**(code **)((longlong)*param_2 + 0x50))(param_2,local_78);
  if ((((local_b0[0] == 1) && (param_7->Offset + param_6 <= local_a0)) &&
      ((local_78[0] != 1 || ((local_188 == 0 && (param_5 == 1)))))) &&
     (iVar2 = (**(code **)((longlong)*param_3 + 0x40))(param_3,0,0,&local_148), -1 < iVar2)) {
    if (param_5 != 0) {
      local_160 = &(param_7->Footprint).Depth;
      plVar10 = &param_10->SlicePitch;
      local_150 = (ulonglong)param_5;
      do {
        uVar4 = (ulonglong)*param_8;
        uVar5 = local_160[1];
        pvVar9 = (void *)(local_148 + *(longlong *)(local_160 + -5));
        local_140 = *param_9;
        lVar3 = uVar4 * uVar5;
        local_180 = lVar3;
        local_138 = uVar4;
        if (*local_160 != 0) {
          local_178 = 0;
          local_170 = (ulonglong)*local_160;
          do {
            _Size = local_140;
            lVar6 = local_178 * *plVar10;
            pvVar1 = ((D3D12_SUBRESOURCE_DATA *)(plVar10 + -2))->pData;
            if ((int)uVar4 != 0) {
              lVar8 = 0;
              uVar7 = uVar4;
              _Dst = pvVar9;
              do {
                memcpy(_Dst,(void *)((longlong)pvVar1 + lVar8 * plVar10[-1] + lVar6),_Size);
                lVar8 = lVar8 + 1;
                _Dst = (void *)((longlong)_Dst + (ulonglong)uVar5);
                uVar7 = uVar7 - 1;
                lVar3 = local_180;
                uVar4 = local_138;
              } while (uVar7 != 0);
            }
            local_178 = local_178 + 1;
            pvVar9 = (void *)((longlong)pvVar9 + lVar3);
            local_170 = local_170 - 1;
          } while (local_170 != 0);
          local_170 = 0;
          param_8 = local_168;
          param_9 = local_158;
        }
        param_8 = param_8 + 1;
        local_160 = local_160 + 8;
        param_9 = param_9 + 1;
        plVar10 = plVar10 + 3;
        local_150 = local_150 - 1;
        local_168 = param_8;
        local_158 = param_9;
      } while (local_150 != 0);
      local_150 = 0;
      param_7 = local_130;
      param_1 = local_120;
      param_2 = local_118;
      param_3 = local_128;
    }
    (**(code **)((longlong)*param_3 + 0x48))(param_3,0,0);
    if (local_78[0] == 1) {
      local_1a0 = (ID3D12Resource **)(ulonglong)(param_7->Footprint).Width;
      local_1a8 = param_7->Offset;
      (**(code **)((longlong)*param_1 + 0x78))(param_1,param_2,0,param_3);
    }
    else {
      uVar5 = 0;
      if (param_5 != 0) {
        do {
          local_1a0 = &local_e0;
          local_c0 = (param_7->Footprint).Height;
          uStack_bc = (param_7->Footprint).Depth;
          uStack_b8 = (param_7->Footprint).RowPitch;
          uStack_b4 = *(undefined4 *)&param_7->field_0x1c;
          local_198 = 0;
          uStack_f8 = 0;
          local_100 = (ulonglong)(local_188 + uVar5);
          local_f0 = 0;
          uStack_e8 = 0;
          local_d0 = (undefined4)param_7->Offset;
          uStack_cc = *(undefined4 *)((longlong)&param_7->Offset + 4);
          DStack_c8 = (param_7->Footprint).Format;
          uStack_c4 = (param_7->Footprint).Width;
          local_108 = 0;
          local_d8 = 1;
          local_1a8 = local_1a8 & 0xffffffff00000000;
          local_110 = param_2;
          local_e0 = param_3;
          (**(code **)((longlong)*param_1 + 0x80))(param_1,&local_110,0,0);
          uVar5 = uVar5 + 1;
          param_7 = param_7 + 1;
        } while (uVar5 < param_5);
      }
    }
  }
  else {
    param_6 = 0;
  }
  return param_6;
}

// ValidateShaderIsUsable @ 145a83530

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ValidateShaderIsUsable(FD3D12ShaderData *param_1,EShaderFrequency param_2)

{
  EShaderCodeFeatures EVar1;
  
  if ((1 < (byte)(param_2 - SF_Mesh)) || (GRHIGlobals.SupportsMeshShadersTier0)) {
    EVar1 = param_1->Features;
    if (((EVar1 & WaveOps) != None) && (!GRHIGlobals.SupportsWaveOperations)) {
      switch(param_2) {
      default:
        if ((byte)LogD3D12RHI._0_1_ < 5) {
          return false;
        }
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        return false;
      case SF_NumStandardFrequencies:
      case SF_RayMiss:
      case SF_RayHitGroup:
      case SF_RayCallable:
        break;
      }
    }
    if (((EVar1 & (BindlessSamplers|BindlessResources)) == None) || (GRHIGlobals.bSupportsBindless))
    {
      if ((param_2 != SF_Pixel) ||
         ((-1 < (char)EVar1 || (GRHIGlobals.SupportsStencilRefFromPixelShader)))) {
        if (((EVar1 >> 8 & 1) == 0) || (GRHIGlobals.SupportsBarycentricsSemantic)) {
          return true;
        }
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      else if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        return false;
      }
    }
    else if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return false;
    }
  }
  else if (4 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    return false;
  }
  return false;
}

// fin$0 @ 15025f820

/* WARNING: Enum "Type": Some values do not have unique names */

void `SafeCreateTexture2D'::__l1::fin_0(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0x50) != '\0') && (1 < (byte)LogD3D12RHI._0_1_)) {
    UE::DXGIUtilities::GetFormatString
              (*(DXGI_FORMAT_conflict *)(*(longlong *)(param_2 + 0x70) + 0x20));
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  return;
}

// StaticResource'' @ 1503c8570

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

// StaticResource'' @ 1503c85f0

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

// StaticResource'' @ 1503c8670

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

// StaticResource'' @ 1503c86f0

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

// `dynamic_atexit_destructor_for_'CVarAdjustTexturePoolSizeBasedOnBudget'' @ 1503c8770

void __cdecl _dynamic_atexit_destructor_for__CVarAdjustTexturePoolSizeBasedOnBudget__(void)

{
  CVarAdjustTexturePoolSizeBasedOnBudget._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAdjustTexturePoolSizeBasedOnBudget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBindlessOnlineDescriptorHeapBlockSize'' @ 1503c8790

void __cdecl _dynamic_atexit_destructor_for__CVarBindlessOnlineDescriptorHeapBlockSize__(void)

{
  CVarBindlessOnlineDescriptorHeapBlockSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBindlessOnlineDescriptorHeapBlockSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBindlessOnlineDescriptorHeapSize'' @ 1503c87b0

void __cdecl _dynamic_atexit_destructor_for__CVarBindlessOnlineDescriptorHeapSize__(void)

{
  CVarBindlessOnlineDescriptorHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBindlessOnlineDescriptorHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12AllowDiscardResources'' @ 1503c87d0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12AllowDiscardResources__(void)

{
  CVarD3D12AllowDiscardResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12AllowDiscardResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12BatchResourceBarriers'' @ 1503c87f0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__(void)

{
  CVarD3D12BatchResourceBarriers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12BatchResourceBarriers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12BindResourceLabels'' @ 1503c8810

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12BindResourceLabels__(void)

{
  CVarD3D12BindResourceLabels._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12BindResourceLabels);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ReservedResourceHeapSizeMB'' @ 1503c8830

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ReservedResourceHeapSizeMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12ReservedResourceHeapSizeMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12SubmissionMaxExecuteBatchSizeAsync'' @ 1503c8850

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12SubmissionMaxExecuteBatchSizeAsync__(void)

{
  CVarD3D12SubmissionMaxExecuteBatchSizeAsync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12SubmissionMaxExecuteBatchSizeAsync);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12SubmissionMaxExecuteBatchSizeCopy'' @ 1503c8870

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12SubmissionMaxExecuteBatchSizeCopy__(void)

{
  CVarD3D12SubmissionMaxExecuteBatchSizeCopy._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12SubmissionMaxExecuteBatchSizeCopy);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12SubmissionMaxExecuteBatchSizeDirect'' @ 1503c8890

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12SubmissionMaxExecuteBatchSizeDirect__(void)

{
  CVarD3D12SubmissionMaxExecuteBatchSizeDirect._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12SubmissionMaxExecuteBatchSizeDirect);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12SubmissionTimeout'' @ 1503c88b0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12SubmissionTimeout__(void)

{
  CVarD3D12SubmissionTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12SubmissionTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12UseD24'' @ 1503c88d0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12UseD24__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12UseD24);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ZeroBufferSizeInMB'' @ 1503c88f0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ZeroBufferSizeInMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12ZeroBufferSizeInMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableDiscardOfDepthResources'' @ 1503c8910

void __cdecl _dynamic_atexit_destructor_for__CVarDisableDiscardOfDepthResources__(void)

{
  CVarDisableDiscardOfDepthResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableDiscardOfDepthResources)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUTimeFromTimestamps'' @ 1503c8930

void __cdecl _dynamic_atexit_destructor_for__CVarGPUTimeFromTimestamps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUTimeFromTimestamps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGlobalResourceDescriptorHeapSize'' @ 1503c8950

void __cdecl _dynamic_atexit_destructor_for__CVarGlobalResourceDescriptorHeapSize__(void)

{
  CVarGlobalResourceDescriptorHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGlobalResourceDescriptorHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGlobalSamplerDescriptorHeapSize'' @ 1503c8970

void __cdecl _dynamic_atexit_destructor_for__CVarGlobalSamplerDescriptorHeapSize__(void)

{
  CVarGlobalSamplerDescriptorHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGlobalSamplerDescriptorHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGlobalSamplerHeapSize'' @ 1503c8990

void __cdecl _dynamic_atexit_destructor_for__CVarGlobalSamplerHeapSize__(void)

{
  CVarGlobalSamplerHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGlobalSamplerHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLocalViewHeapSize'' @ 1503c89b0

void __cdecl _dynamic_atexit_destructor_for__CVarLocalViewHeapSize__(void)

{
  CVarLocalViewHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLocalViewHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOnlineDescriptorHeapBlockSize'' @ 1503c89d0

void __cdecl _dynamic_atexit_destructor_for__CVarOnlineDescriptorHeapBlockSize__(void)

{
  CVarOnlineDescriptorHeapBlockSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOnlineDescriptorHeapBlockSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOnlineDescriptorHeapSize'' @ 1503c89f0

void __cdecl _dynamic_atexit_destructor_for__CVarOnlineDescriptorHeapSize__(void)

{
  CVarOnlineDescriptorHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOnlineDescriptorHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheD3D12DriverCacheAware'' @ 1503c8a10

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheD3D12DriverCacheAware__(void)

{
  CVarPSOPrecacheD3D12DriverCacheAware._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOPrecacheD3D12DriverCacheAware);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHIUseSubmissionThread'' @ 1503c8a30

void __cdecl _dynamic_atexit_destructor_for__CVarRHIUseSubmissionThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHIUseSubmissionThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTexturePoolOnlyAccountStreamableTexture'' @ 1503c8a50

void __cdecl _dynamic_atexit_destructor_for__CVarTexturePoolOnlyAccountStreamableTexture__(void)

{
  CVarTexturePoolOnlyAccountStreamableTexture._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTexturePoolOnlyAccountStreamableTexture);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseUpdateTexture3DComputeShader'' @ 1503c8a70

void __cdecl _dynamic_atexit_destructor_for__CVarUseUpdateTexture3DComputeShader__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseUpdateTexture3DComputeShader);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c8a90

void __cdecl
```FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>'::__l20::Desc::
operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>'::__l7::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c8ab0

void __cdecl
```FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l20::Desc::
operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>'::__l7::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c8ad0

void __cdecl
```FD3D12DynamicRHI::EndUpdateTexture3D_Internal'::__l21::Desc::operator()'::__l11::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c8af0

void __cdecl
``FD3D12RHICmdEndMultiUpdateTexture3D::Execute'::__l13::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12RHICmdEndMultiUpdateTexture3D::Execute(FRHICommandListBase&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GD3D12SamplerStateCacheLock'' @ 1503c8b10

void __cdecl _dynamic_atexit_destructor_for__GD3D12SamplerStateCacheLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GD3D12SamplerStateCacheLock);
  return;
}

// `dynamic_atexit_destructor_for_'LogD3D12GapRecorder'' @ 1503c8b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogD3D12GapRecorder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogD3D12GapRecorder);
  return;
}

// `dynamic_atexit_destructor_for_'LogD3D12RHI'' @ 1503c8b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogD3D12RHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogD3D12RHI);
  return;
}

// `dynamic_atexit_destructor_for_'RayTracingSerializeSceneCmd'' @ 1503c8b70

void __cdecl _dynamic_atexit_destructor_for__RayTracingSerializeSceneCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&RayTracingSerializeSceneCmd);
  return;
}

// operator() @ 1504d6850

bool __thiscall `ValidateScissorRect'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3260409425009049922>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3260409425009049922>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

