// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 728

// ShaderTypeRegistration'' @ 14110c940

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
`dynamic_initializer_for_'Nanite::FClearStreamingRequestCount_CS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = Nanite::FClearStreamingRequestCount_CS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&Nanite::FClearStreamingRequestCount_CS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'Nanite::FClearStreamingRequestCount_CS::
         ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14110c990

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

void __cdecl `dynamic_initializer_for_'Nanite::FScatterUpdates_CS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = Nanite::FScatterUpdates_CS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&Nanite::FScatterUpdates_CS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'Nanite::FScatterUpdates_CS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14110c9e0

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
`dynamic_initializer_for_'Nanite::FTranscodePageToGPU_CS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = Nanite::FTranscodePageToGPU_CS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&Nanite::FTranscodePageToGPU_CS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'Nanite::FTranscodePageToGPU_CS::ShaderTypeRegistration__);
  return;
}

// StaticResource'' @ 14110ca30

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

// StaticResource'' @ 14110cbd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__07_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010101;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 8;
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
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14110cd70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010103;
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
    this = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14110cf10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__01_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010103;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 2;
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
    this = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14110d0b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__03_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010103;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 4;
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
    this = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 14110d250

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__07_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010103;
    local_24 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 8;
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
    this = TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticType'' @ 14110d3f0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionAbs::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionAbs::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d460

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionAppendVector::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionAppendVector::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d4d0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionCeil::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionCeil::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d540

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionClamp::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionClamp::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d5b0

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionComponentSwizzle::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionComponentSwizzle::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d620

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionConstant::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionConstant::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d690

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionExponential2::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionExponential2::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d700

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionExponential::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionExponential::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d770

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionExternalTexture::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionExternalTexture::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d7e0

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionExternalTextureBase::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionExternalTextureBase::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d850

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionExternalTextureCoordinateOffset::StaticType__
          (void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionExternalTextureCoordinateOffset::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d8c0

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionExternalTextureCoordinateScaleRotation::
StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionExternalTextureCoordinateScaleRotation::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d930

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionExternalTextureParameter::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionExternalTextureParameter::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110d9a0

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionFlipBookTextureParameter::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionFlipBookTextureParameter::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110da10

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionFloor::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionFloor::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110da80

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionFmod::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionFmod::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110daf0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionFoldedMath::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionFoldedMath::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110db60

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionFrac::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionFrac::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110dbd0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionGenericConstant::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionGenericConstant::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110dc40

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionLength::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionLength::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110dcb0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionLogarithm10::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionLogarithm10::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110dd20

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionLogarithm2::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionLogarithm2::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110dd90

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionLogarithm::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionLogarithm::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110de00

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionMax::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionMax::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110de70

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionMin::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionMin::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110dee0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionModulo::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionModulo::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110df50

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionNormalize::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionNormalize::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110dfc0

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionNumericParameter::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionNumericParameter::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e030

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionPeriodic::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionPeriodic::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e0a0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionRcp::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionRcp::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e110

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionRound::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionRound::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e180

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionRuntimeVirtualTextureUniform::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionRuntimeVirtualTextureUniform::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e1f0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionSaturate::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionSaturate::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e260

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionSign::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionSign::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e2d0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionSine::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionSine::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e340

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionSparseVolumeTextureUniform::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionSparseVolumeTextureUniform::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e3b0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionSquareRoot::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionSquareRoot::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e420

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionStaticBoolParameter::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionStaticBoolParameter::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e490

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionTexture::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionTexture::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e500

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionTextureCollection::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionTextureCollection::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e570

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionTextureCollectionParameter::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionTextureCollectionParameter::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e5e0

void __cdecl
`dynamic_initializer_for_'FMaterialUniformExpressionTextureParameter::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionTextureParameter::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e650

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionTextureProperty::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionTextureProperty::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e6c0

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionTrigMath::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionTrigMath::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e730

void __cdecl `dynamic_initializer_for_'FMaterialUniformExpressionTruncate::StaticType__(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Element = &FMaterialUniformExpressionTruncate::StaticType;
    pTVar1->_padding_ = 0;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return;
}

// StaticType'' @ 14110e7a0

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

void __cdecl `dynamic_initializer_for_'FMeshParticleVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FMeshParticleVertexFactory::StaticType,L"FMeshParticleVertexFactory",
             L"/Engine/Private/MeshParticleVertexFactory.ush",
             SupportsPSOPrecaching|SupportsDynamicLighting|UsedWithMaterials,
             ConstructVertexFactoryParameters<FMeshParticleVertexFactory>,
             GetVertexFactoryParametersLayout<FMeshParticleVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FMeshParticleVertexFactory>,
             FMeshParticleVertexFactory::GetPSOPrecacheVertexFetchElements,
             FMeshParticleVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FMeshParticleVertexFactory::StaticType__);
  return;
}

// TempBSPElements'' @ 14110e820

void __cdecl `dynamic_initializer_for_'UModelComponent::TempBSPElements__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UModelComponent::TempBSPElements__);
  return;
}

// `dynamic_initializer_for_'AddimulatedConnectionsCmd'' @ 14110e840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__AddimulatedConnectionsCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = AddSimulatedNetConnections;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"net.SimulateConnections",
                      L"Starts a Simulated Net Driver",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&AddimulatedConnectionsCmd,pIVar5);
  AddimulatedConnectionsCmd._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__AddimulatedConnectionsCmd__);
  return;
}

// `dynamic_initializer_for_'CVarBufferBloatCooldownTimeInMS'' @ 14110e9e0

void __cdecl _dynamic_initializer_for__CVarBufferBloatCooldownTimeInMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBufferBloatCooldownTimeInMS,L"netEmulation.BufferBloatCooldownTimeInMS",
             &BufferBloatCooldownTimeInMS,
             L"Cooldown time in milliseconds during which buffer bloat won\'t be active.",0);
  atexit(_dynamic_atexit_destructor_for__CVarBufferBloatCooldownTimeInMS__);
  return;
}

// `dynamic_initializer_for_'CVarCardRepresentation'' @ 14110ea30

void __cdecl _dynamic_initializer_for__CVarCardRepresentation__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCardRepresentation,L"r.MeshCardRepresentation",local_res8,L"",4);
  atexit(_dynamic_atexit_destructor_for__CVarCardRepresentation__);
  return;
}

// `dynamic_initializer_for_'CVarCardRepresentationAsyncBuildQueue'' @ 14110ea80

void __cdecl _dynamic_initializer_for__CVarCardRepresentationAsyncBuildQueue__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCardRepresentationAsyncBuildQueue,L"r.MeshCardRepresentation.Async",
             &GUseAsyncCardRepresentationBuildQueue,L".",4);
  atexit(_dynamic_atexit_destructor_for__CVarCardRepresentationAsyncBuildQueue__);
  return;
}

// `dynamic_initializer_for_'CVarCardRepresentationDebug'' @ 14110ead0

void __cdecl _dynamic_initializer_for__CVarCardRepresentationDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCardRepresentationDebug,L"r.MeshCardRepresentation.Debug",local_res8,
             L"Enable mesh cards debugging. Skips DDCs and appends extra debug data.",1);
  atexit(_dynamic_atexit_destructor_for__CVarCardRepresentationDebug__);
  return;
}

// `dynamic_initializer_for_'CVarCardRepresentationDebugSurfelDirection'' @ 14110eb20

void __cdecl _dynamic_initializer_for__CVarCardRepresentationDebugSurfelDirection__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCardRepresentationDebugSurfelDirection,
             L"r.MeshCardRepresentation.Debug.SurfelDirection",local_res8,
             L"Generate cards for only surfels pointing in a specific direction.",0);
  atexit(_dynamic_atexit_destructor_for__CVarCardRepresentationDebugSurfelDirection__);
  return;
}

// `dynamic_initializer_for_'CVarCardRepresentationMinDensity'' @ 14110eb70

void __cdecl _dynamic_initializer_for__CVarCardRepresentationMinDensity__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.2;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCardRepresentationMinDensity,L"r.MeshCardRepresentation.MinDensity",local_res8,
             L"How much of filled area needs to be there to spawn a card, [0;1] range.",4);
  atexit(_dynamic_atexit_destructor_for__CVarCardRepresentationMinDensity__);
  return;
}

// `dynamic_initializer_for_'CVarCardRepresentationNormalTreshold'' @ 14110ebc0

void __cdecl _dynamic_initializer_for__CVarCardRepresentationNormalTreshold__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.25;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCardRepresentationNormalTreshold,L"r.MeshCardRepresentation.NormalTreshold",
             local_res8,L"Normal treshold when surface elements should be clustered together.",4);
  atexit(_dynamic_atexit_destructor_for__CVarCardRepresentationNormalTreshold__);
  return;
}

// `dynamic_initializer_for_'CVarCloseTimingDebug'' @ 14110ec10

void __cdecl _dynamic_initializer_for__CVarCloseTimingDebug__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCloseTimingDebug,L"net.CloseTimingDebug",&GNetCloseTimingDebug,
             L"Logs the last packet send/receive and TickFlush/TickDispatch times, on connection close - for debugging blocked send/recv paths."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCloseTimingDebug__);
  return;
}

// `dynamic_initializer_for_'CVarDeferUpdateRenderStates'' @ 14110ec60

void __cdecl _dynamic_initializer_for__CVarDeferUpdateRenderStates__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDeferUpdateRenderStates,L"r.DeferUpdateRenderStates",&GDeferUpdateRenderStates,
             L"Whether to defer updating the render states of material parameter collections when a parameter is changed until a rendering command needs them up to date.  Deferring updates is more efficient because multiple SetVectorParameterValue and SetScalarParameterValue calls in a frame will only result in one update."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDeferUpdateRenderStates__);
  return;
}

// `dynamic_initializer_for_'CVarDisableBandwithThrottling'' @ 14110ecb0

void __cdecl _dynamic_initializer_for__CVarDisableBandwithThrottling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableBandwithThrottling,L"net.DisableBandwithThrottling",local_res8,
             L"Forces IsNetReady to always return true. Not available in shipping or test builds.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarDisableBandwithThrottling__);
  return;
}

// `dynamic_initializer_for_'CVarFlushDormancyUseDefaultStateForUnloadedLevels'' @ 14110ed00

void __cdecl
UE::Net::Connection::Private::
_dynamic_initializer_for__CVarFlushDormancyUseDefaultStateForUnloadedLevels__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFlushDormancyUseDefaultStateForUnloadedLevels,
             L"net.FlushDormancyUseDefaultStateForUnloadedLevels",
             &bFlushDormancyUseDefaultStateForUnloadedLevels,
             L"If enabled, dormancy flushing will init replicators with default object state if the client doesn\'t have the actor\'s level loaded."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFlushDormancyUseDefaultStateForUnloadedLevels__);
  return;
}

// `dynamic_initializer_for_'CVarForceNetFlush'' @ 14110ed50

void __cdecl _dynamic_initializer_for__CVarForceNetFlush__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarForceNetFlush,L"net.ForceNetFlush",local_res8,
             L"Immediately flush send buffer when written to (helps trace packet writes - WARNING: May be unstable)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceNetFlush__);
  return;
}

// `dynamic_initializer_for_'CVarLogAllConnectionCleanup'' @ 14110eda0

void __cdecl _dynamic_initializer_for__CVarLogAllConnectionCleanup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogAllConnectionCleanup,L"net.Connection.LogAllCleanup",
             &GCVarLogAllConnectionCleanup,
             L"When true log every connection CleanUp even when it was a normal socket closure.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogAllConnectionCleanup__);
  return;
}

// `dynamic_initializer_for_'CVarLogUnhandledFaults'' @ 14110edf0

void __cdecl _dynamic_initializer_for__CVarLogUnhandledFaults__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogUnhandledFaults,L"net.LogUnhandledFaults",local_res8,
             L"Whether or not to warn about unhandled net faults (could be deliberate, depending on implementation). 0 = off, 1 = log once, 2 = log always."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogUnhandledFaults__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialParameterCollectionMaxVectorStorage'' @ 14110ee40

void __cdecl _dynamic_initializer_for__CVarMaterialParameterCollectionMaxVectorStorage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaterialParameterCollectionMaxVectorStorage,L"r.MPC.MaxVectorStorage",
             &GMaterialParameterCollectionMaxVectorStorage,
             L"The maximum number of vectors allowed in a parameter collection without generating a warning."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialParameterCollectionMaxVectorStorage__);
  return;
}

// `dynamic_initializer_for_'CVarMaxChannelSize'' @ 14110ee90

void __cdecl _dynamic_initializer_for__CVarMaxChannelSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxChannelSize,L"net.MaxChannelSize",local_res8,
             L"The maximum number of network channels allowed across the entire server, if <= 0 the connection DefaultMaxChannelSize will be used."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxChannelSize__);
  return;
}

// `dynamic_initializer_for_'CVarMeshCardRepresentationEstimate'' @ 14110eee0

void __cdecl _dynamic_initializer_for__CVarMeshCardRepresentationEstimate__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMeshCardRepresentationEstimate,L"r.CookMemory.MeshCardRepresentationEstimate",
             local_res8,L"Enable memory estimates for mesh card representation asset cooks",4);
  atexit(_dynamic_atexit_destructor_for__CVarMeshCardRepresentationEstimate__);
  return;
}

// `dynamic_initializer_for_'CVarMeshReductionModule'' @ 14110ef30

void __cdecl _dynamic_initializer_for__CVarMeshReductionModule__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarMeshReductionModule,L"r.MeshReductionModule",L"QuadricMeshReduction",
             L"Name of what mesh reduction module to choose. If blank it chooses any that exist.\n",
             4);
  atexit(_dynamic_atexit_destructor_for__CVarMeshReductionModule__);
  return;
}

// `dynamic_initializer_for_'CVarNanitePickingCrosshair'' @ 14110ef80

void __cdecl _dynamic_initializer_for__CVarNanitePickingCrosshair__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNanitePickingCrosshair,L"r.Nanite.Picking.Crosshair",&GNanitePickingCrosshair,L"",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarNanitePickingCrosshair__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingAsyncCompute'' @ 14110efd0

void __cdecl Nanite::_dynamic_initializer_for__CVarNaniteStreamingAsyncCompute__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingAsyncCompute,L"r.Nanite.Streaming.AsyncCompute",
             &GNaniteStreamingAsyncCompute,L"Schedule GPU work in async compute queue.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingAsyncCompute__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingDynamicPageUploadBuffer'' @ 14110f020

void __cdecl Nanite::_dynamic_initializer_for__CVarNaniteStreamingDynamicPageUploadBuffer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingDynamicPageUploadBuffer,
             L"r.Nanite.Streaming.DynamicPageUploadBuffer",&GNaniteStreamingDynamicPageUploadBuffer,
             L"Set Dynamic flag on the page upload buffer. This can eliminate a buffer copy on some platforms, but potentially also make the transcode shader slower."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingDynamicPageUploadBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingGPURequestsBufferMaxSize'' @ 14110f070

void __cdecl Nanite::_dynamic_initializer_for__CVarNaniteStreamingGPURequestsBufferMaxSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingGPURequestsBufferMaxSize,
             L"r.Nanite.Streaming.GPURequestsBufferMaxSize",
             &GNaniteStreamingGPURequestsBufferMaxSize,
             L"The maximum number of elements in the buffer used for GPU feedback.Setting Min=Max disables any dynamic buffer size adjustment."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingGPURequestsBufferMaxSize__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingGPURequestsBufferMinSize'' @ 14110f0c0

void __cdecl Nanite::_dynamic_initializer_for__CVarNaniteStreamingGPURequestsBufferMinSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNaniteStreamingGPURequestsBufferMinSize,
             L"r.Nanite.Streaming.GPURequestsBufferMinSize",
             &GNaniteStreamingGPURequestsBufferMinSize,
             L"The minimum number of elements in the buffer used for GPU feedback.Setting Min=Max disables any dynamic buffer size adjustment."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingGPURequestsBufferMinSize__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteStreamingTranscodeWaveSize'' @ 14110f110

void __cdecl Nanite::_dynamic_initializer_for__CVarNaniteStreamingTranscodeWaveSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNaniteStreamingTranscodeWaveSize,L"r.Nanite.Streaming.TranscodeWaveSize",
             local_res8,
             L"Overrides the wave size to use for transcoding.\n 0: Automatic (default);\n 4: Wave size 4;\n 8: Wave size 8;\n 16: Wave size 16;\n 32: Wave size 32;\n 64: Wave size 64;\n 128: Wave size 128;\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteStreamingTranscodeWaveSize__);
  return;
}

// `dynamic_initializer_for_'CVarNetDoPacketOrderCorrection'' @ 14110f160

void __cdecl _dynamic_initializer_for__CVarNetDoPacketOrderCorrection__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetDoPacketOrderCorrection,L"net.DoPacketOrderCorrection",local_res8,
             L"Whether or not to try to fix \'out of order\' packet sequences, by caching packets and waiting for the missing sequence."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDoPacketOrderCorrection__);
  return;
}

// `dynamic_initializer_for_'CVarNetEnableCongestionControl'' @ 14110f1b0

void __cdecl _dynamic_initializer_for__CVarNetEnableCongestionControl__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetEnableCongestionControl,L"net.EnableCongestionControl",local_res8,
             L"Enables congestion control module.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetEnableCongestionControl__);
  return;
}

// `dynamic_initializer_for_'CVarNetFlushDormantSubObjects'' @ 14110f200

void __cdecl
UE::Net::Connection::Private::_dynamic_initializer_for__CVarNetFlushDormantSubObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetFlushDormantSubObjects,L"net.EnableFlushDormantSubObjects",
             &bEnableFlushDormantSubObjects,
             L"If enabled, FlushNetDormancy will flush replicated subobjects in addition to replicated components. Only applies to objects using the replicated subobject list."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetFlushDormantSubObjects__);
  return;
}

// `dynamic_initializer_for_'CVarNetFlushDormantSubObjectsCheckConditions'' @ 14110f250

void __cdecl
UE::Net::Connection::Private::
_dynamic_initializer_for__CVarNetFlushDormantSubObjectsCheckConditions__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetFlushDormantSubObjectsCheckConditions,
             L"net.EnableFlushDormantSubObjectsCheckConditions",
             &bEnableFlushDormantSubObjectsCheckConditions,
             L"If enabled, when net.EnableFlushDormantSubObjects is also true a dormancy flush will also check replicated subobject conditions"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetFlushDormantSubObjectsCheckConditions__);
  return;
}

// `dynamic_initializer_for_'CVarNetGracefulCloseEnabled'' @ 14110f2a0

void __cdecl
UE::Net::Connection::Private::_dynamic_initializer_for__CVarNetGracefulCloseEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetGracefulCloseEnabled,L"net.GracefulCloseEnabled",&bGracefulCloseEnabled,
             L"If enabled, connections will wait for reliable bunches to be acked before cleaning up."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetGracefulCloseEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNetPacketOrderCorrectionEnableThreshold'' @ 14110f2f0

void __cdecl _dynamic_initializer_for__CVarNetPacketOrderCorrectionEnableThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetPacketOrderCorrectionEnableThreshold,
             L"net.PacketOrderCorrectionEnableThreshold",local_res8,
             L"The number of \'out of order\' packet sequences that need to occur, before correction is enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPacketOrderCorrectionEnableThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarNetPacketOrderMaxCachedPackets'' @ 14110f340

void __cdecl _dynamic_initializer_for__CVarNetPacketOrderMaxCachedPackets__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x20;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetPacketOrderMaxCachedPackets,L"net.PacketOrderMaxCachedPackets",local_res8,
             L"(NOTE: Must be power of 2!) The maximum number of packets to cache while waiting for missing packet sequences, before treating missing packets as lost."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPacketOrderMaxCachedPackets__);
  return;
}

// `dynamic_initializer_for_'CVarNetPacketOrderMaxMissingPackets'' @ 14110f390

void __cdecl _dynamic_initializer_for__CVarNetPacketOrderMaxMissingPackets__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 3;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetPacketOrderMaxMissingPackets,L"net.PacketOrderMaxMissingPackets",local_res8,
             L"The maximum number of missed packet sequences that is allowed, before treating missing packets as lost."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPacketOrderMaxMissingPackets__);
  return;
}

// `dynamic_initializer_for_'CVarNetTrackFlushedDormantObjects'' @ 14110f3e0

void __cdecl
UE::Net::Connection::Private::_dynamic_initializer_for__CVarNetTrackFlushedDormantObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetTrackFlushedDormantObjects,L"net.TrackFlushedDormantObjects",
             &bTrackFlushedDormantObjects,
             L"If enabled, track dormant subobjects when dormancy is flushed, so they can be properly deleted if destroyed prior to the next ReplicateActor."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetTrackFlushedDormantObjects__);
  return;
}

// `dynamic_initializer_for_'CVarPingDisplayServerTime'' @ 14110f430

void __cdecl _dynamic_initializer_for__CVarPingDisplayServerTime__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPingDisplayServerTime,L"net.PingDisplayServerTime",local_res8,
             L"Show server frame time. Not available in shipping builds.",0);
  atexit(_dynamic_atexit_destructor_for__CVarPingDisplayServerTime__);
  return;
}

// `dynamic_initializer_for_'CVarPingExcludeFrameTime'' @ 14110f480

void __cdecl _dynamic_initializer_for__CVarPingExcludeFrameTime__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPingExcludeFrameTime,L"net.PingExcludeFrameTime",local_res8,
             L"If true, game frame times are subtracted from calculated ping to approximate actual network ping"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPingExcludeFrameTime__);
  return;
}

// `dynamic_initializer_for_'CVarPingUsePacketRecvTime'' @ 14110f4d0

void __cdecl _dynamic_initializer_for__CVarPingUsePacketRecvTime__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPingUsePacketRecvTime,L"net.PingUsePacketRecvTime",local_res8,
             L"Use OS or Receive Thread packet receive time, for calculating the ping. Excludes frame time."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPingUsePacketRecvTime__);
  return;
}

// `dynamic_initializer_for_'CVarRandomizeSequence'' @ 14110f520

void __cdecl _dynamic_initializer_for__CVarRandomizeSequence__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRandomizeSequence,L"net.RandomizeSequence",local_res8,
             L"Randomize initial packet sequence, can provide some obfuscation",0);
  atexit(_dynamic_atexit_destructor_for__CVarRandomizeSequence__);
  return;
}

// `dynamic_initializer_for_'CVarSkipMissingLevelDisconnect'' @ 14110f570

void __cdecl _dynamic_initializer_for__CVarSkipMissingLevelDisconnect__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSkipMissingLevelDisconnect,L"net.SkipMissingLevelDisconnect",local_res8,
             L"If true skip disconnecting a player if they have a level that doesn\'t exist on server"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipMissingLevelDisconnect__);
  return;
}

// `dynamic_initializer_for_'CVarTickAllOpenChannels'' @ 14110f5c0

void __cdecl _dynamic_initializer_for__CVarTickAllOpenChannels__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTickAllOpenChannels,L"net.TickAllOpenChannels",local_res8,
             L"If nonzero, each net connection will tick all of its open channels every tick. Leaving this off will improve performance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTickAllOpenChannels__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper258'' @ 14110f610

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper258__(void)

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
            (&DelayedAutoRegisterHelper258,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'FMeshParticleUniformParametersMetadataRegistration'' @ 14110f670

void __cdecl _dynamic_initializer_for__FMeshParticleUniformParametersMetadataRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderParametersMetadataRegistration *local_18 [2];
  
  pTVar5 = FShaderParametersMetadataRegistration::GetInstances();
  local_18[0] = &FMeshParticleUniformParametersMetadataRegistration;
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
  atexit(_dynamic_atexit_destructor_for__FMeshParticleUniformParametersMetadataRegistration__);
  return;
}

// `dynamic_initializer_for_'ForceOnePacketPerBunch'' @ 14110f740

void __cdecl _dynamic_initializer_for__ForceOnePacketPerBunch__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"net.ForceOnePacketPerBunch",
                      L"When set to true it will enable AutoFlush on all connections and force a packet to be sent for every bunch we create. This forces one packet per replicated actor and can help find rare ordering bugs"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&ForceOnePacketPerBunch,pIVar5);
  ForceOnePacketPerBunch._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__ForceOnePacketPerBunch__);
  return;
}

// `dynamic_initializer_for_'GDefaultMaterialParameterCollectionInstances'' @ 14110f8d0

void __cdecl _dynamic_initializer_for__GDefaultMaterialParameterCollectionInstances__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDefaultMaterialParameterCollectionInstances__);
  return;
}

// `dynamic_initializer_for_'GDummyPrevTransformBuffer'' @ 14110f8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GDummyPrevTransformBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GDummyPrevTransformBuffer);
  GDummyPrevTransformBuffer._0_8_ = &___7__TGlobalResource_VFDummyPrevTransformBuffer___00__6B_;
  GDummyPrevTransformBuffer._32_8_ = 0;
  GDummyPrevTransformBuffer._40_8_ = 0;
  if (GDummyPrevTransformBuffer._24_4_ != -1) {
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
  GDummyPrevTransformBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GDummyPrevTransformBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GDummyPrevTransformBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GDummyPrevTransformBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GDummyPrevTransformBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GDummyPrevTransformBuffer__);
  return;
}

// `dynamic_initializer_for_'GNaniteVisualizationData'' @ 14110f9c0

void __cdecl _dynamic_initializer_for__GNaniteVisualizationData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GNaniteVisualizationData__);
  return;
}

// `dynamic_initializer_for_'GTextureAsset'' @ 14110f9e0

void __cdecl MeshPaintVisualize::_dynamic_initializer_for__GTextureAsset__(void)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&GTextureAsset.WeakPtr,(FObjectPtr)local_res8);
  return;
}

// `dynamic_initializer_for_'GVertexViewModeOverrideOwnerName'' @ 14110fa10

void __cdecl _dynamic_initializer_for__GVertexViewModeOverrideOwnerName__(void)

{
  atexit(_dynamic_atexit_destructor_for__GVertexViewModeOverrideOwnerName__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_NetConnection'' @ 14110fa30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_NetConnection__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_NetConnectionLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  
  FVar4 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar3,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_NetConnectionLLM;
  if (StatPtr_STAT_NetConnectionLLM == (FThreadSafeStaticStat<FStat_STAT_NetConnectionLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_NetConnectionLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetConnectionLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConnectionLLM,*pFVar3,
                       L"NetConnection","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
                       false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  pFVar3 = FName::FName(&local_res20,L"Networking");
  local_res18 = 0;
  FVar1.Number = local_res8.Number;
  FVar1.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar2.Number = local_res10.Number;
  FVar2.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_NetConnection,L"NetConnection",(FName)0x0,*pFVar3,FVar2,FVar1,None);
  return;
}

// `dynamic_initializer_for_'LogGlobalStatus'' @ 14110fba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGlobalStatus__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGlobalStatus,L"LogGlobalStatus",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogGlobalStatus__);
  return;
}

// `dynamic_initializer_for_'LogModel'' @ 14110fbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogModel__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogModel,L"LogModel",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogModel__);
  return;
}

// `dynamic_initializer_for_'LogModelComponent'' @ 14110fc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogModelComponent__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogModelComponent,L"LogModelComponent",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogModelComponent__);
  return;
}

// `dynamic_initializer_for_'LogNavigationPoint'' @ 14110fc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavigationPoint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNavigationPoint,L"LogNavigationPoint",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNavigationPoint__);
  return;
}

// `dynamic_initializer_for_'PrintActorReportCmd'' @ 14110fca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__PrintActorReportCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = PrintActorReportFunc;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"net.ActorReport",L"",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&PrintActorReportCmd,pIVar5);
  PrintActorReportCmd._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__PrintActorReportCmd__);
  return;
}

// `dynamic_initializer_for_'RemoveSimulatedConnectionsCmd'' @ 14110fe40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__RemoveSimulatedConnectionsCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = RemoveSimulatedNetConnections;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"net.DisconnectSimulatedConnections",
                      L"Disconnects some simulated connections (0 = all)",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&RemoveSimulatedConnectionsCmd,pIVar5);
  RemoveSimulatedConnectionsCmd._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__RemoveSimulatedConnectionsCmd__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetConnectionLLM'' @ 14110ffe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetConnectionLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetConnectionLLM == (FThreadSafeStaticStat<FStat_STAT_NetConnectionLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetConnectionLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConnectionLLM,*pFVar1,L"NetConnection",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_NetConnectionReceivedAcks'' @ 141110070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_NetConnectionReceivedAcks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_NetConnectionReceivedAcks ==
      (FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedAcks>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_NetConnectionReceivedAcks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetConnectionReceivedAcks,*pFVar1,
               L"NetConnection NetConnectionReceivedAcks","STATGROUP_Net","STATCAT_Advanced",L"Net",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_NetConnectionReceivedNak'' @ 141110100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_NetConnectionReceivedNak__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_NetConnectionReceivedNak ==
      (FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedNak>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_NetConnectionReceivedNak");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetConnectionReceivedNak,*pFVar1,
               L"NetConnection ReceivedNak","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_NetConnectionSendAck'' @ 141110190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_NetConnectionSendAck__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_NetConnectionSendAck ==
      (FThreadSafeStaticStat<FStat_Stat_NetConnectionSendAck>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_NetConnectionSendAck");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetConnectionSendAck,*pFVar1,
               L"NetConnection SendAcks","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_NetConnectionTick'' @ 141110220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_NetConnectionTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_NetConnectionTick == (FThreadSafeStaticStat<FStat_Stat_NetConnectionTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_NetConnectionTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetConnectionTick,*pFVar1,
               L"NetConnection Tick","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h__Script_Engine_1892205665'' @ 1411102b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h__Script_Engine_1892205665__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MorphTarget_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h__Script_Engine_2544904242'' @ 1411102f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h__Script_Engine_2544904242__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h__Script_Engine_2529806159'' @ 141110330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h__Script_Engine_2529806159__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h__Script_Engine_2564887785'' @ 141110370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h__Script_Engine_2564887785__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h__Script_Engine_3943654536'' @ 1411103b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h__Script_Engine_3943654536__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h__Script_Engine_593528724'' @ 1411103f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h__Script_Engine_593528724__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h__Script_Engine_1578187570'' @ 141110430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h__Script_Engine_1578187570__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h__Script_Engine_3667715754'' @ 141110470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h__Script_Engine_3667715754__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h__Script_Engine_222322596'' @ 1411104b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h__Script_Engine_222322596__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h__Script_Engine_3022194626'' @ 141110500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h__Script_Engine_3022194626__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshBudgetProjectSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h__Script_Engine_3382633680'' @ 141110550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h__Script_Engine_3382633680__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshApproximationSettings_h__Script_Engine_Statics
             ::EnumInfo,6);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshInstancingSettings_h__Script_Engine_953484563'' @ 1411105a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshInstancingSettings_h__Script_Engine_953484563__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshInstancingSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h__Script_Engine_1675916641'' @ 1411105e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h__Script_Engine_1675916641__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshMergingSettings_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h__Script_Engine_3612699046'' @ 141110630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h__Script_Engine_3612699046__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshMerge_MeshProxySettings_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h__Script_Engine_3935126637'' @ 141110680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h__Script_Engine_3935126637__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshReductionSettings_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Model_h__Script_Engine_118606964'' @ 1411106d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Model_h__Script_Engine_118606964__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Model_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Model_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UClass_UNetConnection @ 147f8e750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetConnection(void)

{
  if (Z_Registration_Info_UClass_UNetConnection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetConnection.OuterSingleton,
               &Z_Construct_UClass_UNetConnection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetConnection.OuterSingleton;
}

// Z_Construct_UClass_USimulatedClientNetConnection @ 147f8e790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USimulatedClientNetConnection(void)

{
  if (Z_Registration_Info_UClass_USimulatedClientNetConnection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USimulatedClientNetConnection.OuterSingleton,
               &Z_Construct_UClass_USimulatedClientNetConnection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USimulatedClientNetConnection.OuterSingleton;
}

// NewProp_InternalAck_SetBit @ 147f8e7d0

void __cdecl Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  return;
}

// Z_Construct_UClass_ANavigationObjectBase @ 147f8e920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavigationObjectBase(void)

{
  if (Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton,
               &Z_Construct_UClass_ANavigationObjectBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton;
}

// NewProp_bIsPIEPlayerStart_SetBit @ 147f8e960

void __cdecl
Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2e0) = *(uint *)((longlong)param_1 + 0x2e0) | 1;
  return;
}

// `scalar_deleting_destructor' @ 147f8eb70

void * __thiscall
TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f8edb0

void * __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f8eff0

void * __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f8f230

void * __thiscall
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f8f530

void * __thiscall
FDummyPrevTransformBuffer::_scalar_deleting_destructor_
          (FDummyPrevTransformBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FDummyPrevTransformBuffer__6B_;
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->VB).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147f8f5a0

void * __thiscall
TGlobalResource<FDummyPrevTransformBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FDummyPrevTransformBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyPrevTransformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FDummyPrevTransformBuffer__6B_;
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UClass_UNavMovementInterface @ 147f8f970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavMovementInterface(void)

{
  if (Z_Registration_Info_UClass_UNavMovementInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavMovementInterface.OuterSingleton,
               &Z_Construct_UClass_UNavMovementInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavMovementInterface.OuterSingleton;
}

// Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement @ 147f8f9b0

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_GetMaxSpeedForNavMovement_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement @ 147f8f9f0

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_GetVelocityForNavMovement_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147f8fa30

void __cdecl
Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavMovementInterface_IsCrouching @ 147f8fa40

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_IsCrouching(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_IsCrouching_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147f8fa80

void __cdecl
Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavMovementInterface_IsFalling @ 147f8fa90

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_IsFalling(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_IsFalling_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UModel @ 147f8fad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UModel(void)

{
  if (Z_Registration_Info_UClass_UModel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UModel.OuterSingleton,
               &Z_Construct_UClass_UModel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UModel.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBspSurf @ 147f8fb10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBspSurf(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBspSurf.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBspSurf.InnerSingleton,
               &Z_Construct_UScriptStruct_FBspSurf_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBspSurf.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBspSurf.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 147f8fb90

void __cdecl
Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 147f8fba0

void * __cdecl Z_Construct_UScriptStruct_FBspSurf_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBspSurf,&UE::CoreUObject::Private::Construct<FBspSurf>,&UE::CoreUObject::Private::ConstructForTests<FBspSurf>,&UE::CoreUObject::Private::Destruct<FBspSurf>,&UE::CoreUObject::Private::Copy<FBspSurf>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNavMovementInterface_IsFlying @ 147f8fbe0

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_IsFlying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_IsFlying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147f8fc20

void __cdecl
Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround @ 147f8fc30

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_IsMovingOnGround_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147f8fc70

void __cdecl
Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavMovementInterface_IsSwimming @ 147f8fc80

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_IsSwimming(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_IsSwimming_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForceMaxSpeed_SetBit @ 147f8fcf0

void __cdecl
Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::NewProp_bForceMaxSpeed_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove @ 147f90000

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_RequestDirectMove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMorphTarget @ 147f90040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMorphTarget(void)

{
  if (Z_Registration_Info_UClass_UMorphTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMorphTarget.OuterSingleton,
               &Z_Construct_UClass_UMorphTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMorphTarget.OuterSingleton;
}

// Z_Construct_UFunction_UNavMovementInterface_RequestPathMove @ 147f90080

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_RequestPathMove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_RequestPathMove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement @ 147f900c0

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_StopActiveMovement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing @ 147f90100

UFunction * __cdecl Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavMovementInterface_StopMovementKeepPathing_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EMeshFeatureImportance @ 147f90140

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshFeatureImportance(void)

{
  if (Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion @ 147f90180

UEnum * __cdecl Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion(void)

{
  if (Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton;
}

// EMeshFeatureImportance_StaticEnum @ 147f901c0

UEnum * __cdecl EMeshFeatureImportance_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshFeatureImportance,(UObject *)pUVar1,
                       L"EMeshFeatureImportance");
  }
  return Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton;
}

// EStaticMeshReductionTerimationCriterion_StaticEnum @ 147f90200

UEnum * __cdecl EStaticMeshReductionTerimationCriterion_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion,
                       (UObject *)pUVar1,L"EStaticMeshReductionTerimationCriterion");
  }
  return Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton;
}

// NewProp_bRecalculateNormals_SetBit @ 147f90240

void __cdecl
Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x27) | 1;
  return;
}

// NewProp_bGenerateUniqueLightmapUVs_SetBit @ 147f90250

void __cdecl
Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x27) | 2;
  return;
}

// NewProp_bKeepSymmetry_SetBit @ 147f90260

void __cdecl
Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x27) | 4;
  return;
}

// NewProp_bVisibilityAided_SetBit @ 147f90270

void __cdecl
Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x27) | 8;
  return;
}

// NewProp_bCullOccluded_SetBit @ 147f90280

void __cdecl
Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x27) | 0x10;
  return;
}

// NewStructOps @ 147f90290

void * __cdecl Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshReductionSettings,&UE::CoreUObject::Private::Construct<FMeshReductionSettings>,&UE::CoreUObject::Private::ConstructForTests<FMeshReductionSettings>,&UE::CoreUObject::Private::Destruct<FMeshReductionSettings>,&UE::CoreUObject::Private::Copy<FMeshReductionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMeshSimplificationSettings @ 147f90540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshSimplificationSettings(void)

{
  if (Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton,
               &Z_Construct_UClass_UMeshSimplificationSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton;
}

// NewProp_bMeshReductionBackwardCompatible_SetBit @ 147f90580

void __cdecl
Z_Construct_UClass_UMeshSimplificationSettings_Statics::
NewProp_bMeshReductionBackwardCompatible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bSelfContext_SetBit @ 147f90590

void __cdecl
Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bWasDeprecated_SetBit @ 147f905a0

void __cdecl
Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 147f905b0

void * __cdecl Z_Construct_UScriptStruct_FMemberReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMemberReference,&UE::CoreUObject::Private::Construct<FMemberReference>,&UE::CoreUObject::Private::ConstructForTests<FMemberReference>,&UE::CoreUObject::Private::Destruct<FMemberReference>,&UE::CoreUObject::Private::Copy<FMemberReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_EVertexPaintAxis @ 147f90780

UEnum * __cdecl Z_Construct_UEnum_Engine_EVertexPaintAxis(void)

{
  if (Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton,
               &Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton;
}

// EVertexPaintAxis_StaticEnum @ 147f907c0

UEnum * __cdecl EVertexPaintAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVertexPaintAxis,(UObject *)pUVar1,
                       L"EVertexPaintAxis");
  }
  return Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton;
}

// Z_Construct_UClass_UMeshVertexPainterKismetLibrary @ 147f909c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshVertexPainterKismetLibrary(void)

{
  if (Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.OuterSingleton,
               &Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.OuterSingleton;
}

// NewProp_bConvertToSRGB_SetBit @ 147f90a00

void __cdecl
Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::
NewProp_bConvertToSRGB_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis @ 147f90a10

UFunction * __cdecl
Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bConvertToSRGB_SetBit @ 147f90a50

void __cdecl
Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::
NewProp_bConvertToSRGB_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor @ 147f90aa0

UFunction * __cdecl
Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices @ 147f90ba0

UFunction * __cdecl
Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AMeshMergeCullingVolume @ 147f90be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AMeshMergeCullingVolume(void)

{
  if (Z_Registration_Info_UClass_AMeshMergeCullingVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AMeshMergeCullingVolume.OuterSingleton,
               &Z_Construct_UClass_AMeshMergeCullingVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AMeshMergeCullingVolume.OuterSingleton;
}

// Z_Construct_UClass_UMeshBudgetProjectSettings @ 147f90c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshBudgetProjectSettings(void)

{
  if (Z_Registration_Info_UClass_UMeshBudgetProjectSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshBudgetProjectSettings.OuterSingleton,
               &Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshBudgetProjectSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FStaticMeshBudgetInfo @ 147f90ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStaticMeshBudgetInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshBudgetInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStaticMeshBudgetInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStaticMeshBudgetInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FStaticMeshBudgetInfo.InnerSingleton;
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

// NewStructOps @ 147f90d20

void * __cdecl Z_Construct_UScriptStruct_FStaticMeshBudgetInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStaticMeshBudgetInfo,&UE::CoreUObject::Private::Construct<FStaticMeshBudgetInfo>,&UE::CoreUObject::Private::ConstructForTests<FStaticMeshBudgetInfo>,&UE::CoreUObject::Private::Destruct<FStaticMeshBudgetInfo>,&UE::CoreUObject::Private::Copy<FStaticMeshBudgetInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType @ 147f90d60

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType(void)

{
  if (Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy @ 147f90da0

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy(void)

{
  if (Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton
               ,&Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::
                 EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy @ 147f90de0

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy(void)

{
  if (Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMeshApproximationType @ 147f90e20

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshApproximationType(void)

{
  if (Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy @ 147f90e60

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy(void)

{
  if (Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy @ 147f90ea0

UEnum * __cdecl Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy(void)

{
  if (Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton,
               &Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton;
}

// EMeshApproximationType_StaticEnum @ 147f90ee0

UEnum * __cdecl EMeshApproximationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationType,(UObject *)pUVar1,
                       L"EMeshApproximationType");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton;
}

// NewProp_bEnableStaticMeshBudget_SetBit @ 147f90f20

void __cdecl
Z_Construct_UClass_UMeshBudgetProjectSettings_Statics::NewProp_bEnableStaticMeshBudget_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// EMeshApproximationBaseCappingType_StaticEnum @ 147f90f30

UEnum * __cdecl EMeshApproximationBaseCappingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType,(UObject *)pUVar1,
                       L"EMeshApproximationBaseCappingType");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton;
}

// EOccludedGeometryFilteringPolicy_StaticEnum @ 147f90f70

UEnum * __cdecl EOccludedGeometryFilteringPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy,(UObject *)pUVar1,
                       L"EOccludedGeometryFilteringPolicy");
  }
  return Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton;
}

// EMeshApproximationSimplificationPolicy_StaticEnum @ 147f90ff0

UEnum * __cdecl EMeshApproximationSimplificationPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy,
                       (UObject *)pUVar1,L"EMeshApproximationSimplificationPolicy");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton;
}

// EMeshApproximationGroundPlaneClippingPolicy_StaticEnum @ 147f91030

UEnum * __cdecl EMeshApproximationGroundPlaneClippingPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy,
                       (UObject *)pUVar1,L"EMeshApproximationGroundPlaneClippingPolicy");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton;
}

// EMeshApproximationUVGenerationPolicy_StaticEnum @ 147f91070

UEnum * __cdecl EMeshApproximationUVGenerationPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy,
                       (UObject *)pUVar1,L"EMeshApproximationUVGenerationPolicy");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton;
}

// NewProp_bAttemptAutoThickening_SetBit @ 147f910b0

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bIgnoreTinyParts_SetBit @ 147f910c0

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bFillGaps_SetBit @ 147f910d0

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bOccludeFromBottom_SetBit @ 147f910e0

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bEstimateHardNormals_SetBit @ 147f910f0

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewProp_bGenerateNaniteEnabledMesh_SetBit @ 147f91140

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::
NewProp_bGenerateNaniteEnabledMesh_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bSupportRayTracing_SetBit @ 147f91150

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewProp_bAllowDistanceField_SetBit @ 147f91160

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  return;
}

// NewProp_bUseRenderLODMeshes_SetBit @ 147f91170

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// NewProp_bEnableSimplifyPrePass_SetBit @ 147f91180

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x121) = 1;
  return;
}

// NewProp_bEnableParallelBaking_SetBit @ 147f91190

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x122) = 1;
  return;
}

// NewProp_bPrintDebugMessages_SetBit @ 147f911a0

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x123) = 1;
  return;
}

// NewProp_bEmitFullDebugMesh_SetBit @ 147f911b0

void __cdecl
Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  return;
}

// NewStructOps @ 147f911c0

void * __cdecl Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshApproximationSettings,&UE::CoreUObject::Private::Construct<FMeshApproximationSettings>,&UE::CoreUObject::Private::ConstructForTests<FMeshApproximationSettings>,&UE::CoreUObject::Private::Destruct<FMeshApproximationSettings>,&UE::CoreUObject::Private::Copy<FMeshApproximationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147f913f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bSkipMeshesWithVertexColors_SetBit @ 147f91460

void __cdecl
Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::
NewProp_bSkipMeshesWithVertexColors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUseHLODVolumes_SetBit @ 147f91470

void __cdecl
Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewStructOps @ 147f91490

void * __cdecl Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshInstancingSettings,&UE::CoreUObject::Private::Construct<FMeshInstancingSettings>,&UE::CoreUObject::Private::ConstructForTests<FMeshInstancingSettings>,&UE::CoreUObject::Private::Destruct<FMeshInstancingSettings>,&UE::CoreUObject::Private::Copy<FMeshInstancingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_EMeshLODSelectionType @ 147f91510

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshLODSelectionType(void)

{
  if (Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EUVOutput @ 147f91550

UEnum * __cdecl Z_Construct_UEnum_Engine_EUVOutput(void)

{
  if (Z_Registration_Info_UEnum_EUVOutput.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUVOutput.InnerSingleton,
               &Z_Construct_UEnum_Engine_EUVOutput_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUVOutput.InnerSingleton;
}

// EMeshLODSelectionType_StaticEnum @ 147f91590

UEnum * __cdecl EMeshLODSelectionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshLODSelectionType,(UObject *)pUVar1,
                       L"EMeshLODSelectionType");
  }
  return Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton;
}

// EMeshMergeType_StaticEnum @ 147f915d0

UEnum * __cdecl EMeshMergeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshMergeType,(UObject *)pUVar1,L"EMeshMergeType");
  }
  return Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton;
}

// EUVOutput_StaticEnum @ 147f91610

UEnum * __cdecl EUVOutput_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUVOutput.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EUVOutput.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EUVOutput,(UObject *)pUVar1,L"EUVOutput");
  }
  return Z_Registration_Info_UEnum_EUVOutput.OuterSingleton;
}

// NewProp_bGenerateLightMapUV_SetBit @ 147f91650

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  return;
}

// NewProp_bComputedLightMapResolution_SetBit @ 147f91660

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 2;
  return;
}

// NewProp_bPivotPointAtZero_SetBit @ 147f91670

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 4;
  return;
}

// NewProp_bMergePhysicsData_SetBit @ 147f91680

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 8;
  return;
}

// NewProp_bMergeMeshSockets_SetBit @ 147f91690

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 0x10;
  return;
}

// NewProp_bMergeMaterials_SetBit @ 147f916a0

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 0x20;
  return;
}

// NewProp_bBakeVertexDataToMesh_SetBit @ 147f916b0

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 0x40;
  return;
}

// NewProp_bUseVertexDataForBakingMaterial_SetBit @ 147f916c0

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::
NewProp_bUseVertexDataForBakingMaterial_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 0x80;
  return;
}

// NewProp_bUseTextureBinning_SetBit @ 147f916d0

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) | 1;
  return;
}

// NewProp_bReuseMeshLightmapUVs_SetBit @ 147f916e0

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) | 2;
  return;
}

// NewProp_bMergeEquivalentMaterials_SetBit @ 147f916f0

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) | 4;
  return;
}

// NewProp_bUseLandscapeCulling_SetBit @ 147f91700

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) | 8;
  return;
}

// NewProp_bIncludeImposters_SetBit @ 147f91710

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) | 0x10;
  return;
}

// NewProp_bSupportRayTracing_SetBit @ 147f91720

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) | 0x20;
  return;
}

// NewProp_bAllowDistanceField_SetBit @ 147f91730

void __cdecl
Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbd) = *(byte *)((longlong)param_1 + 0xbd) | 0x40;
  return;
}

// NewStructOps @ 147f91740

void * __cdecl Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshMergingSettings,&UE::CoreUObject::Private::Construct<FMeshMergingSettings>,&UE::CoreUObject::Private::ConstructForTests<FMeshMergingSettings>,&UE::CoreUObject::Private::Destruct<FMeshMergingSettings>,&UE::CoreUObject::Private::Copy<FMeshMergingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_ELandscapeCullingPrecision @ 147f91820

UEnum * __cdecl Z_Construct_UEnum_Engine_ELandscapeCullingPrecision(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton,
               &Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EProxyNormalComputationMethod @ 147f91860

UEnum * __cdecl Z_Construct_UEnum_Engine_EProxyNormalComputationMethod(void)

{
  if (Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton;
}

// ELandscapeCullingPrecision_StaticEnum @ 147f918a0

UEnum * __cdecl ELandscapeCullingPrecision_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision,(UObject *)pUVar1,
                       L"ELandscapeCullingPrecision");
  }
  return Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton;
}

// EProxyNormalComputationMethod_StaticEnum @ 147f918e0

UEnum * __cdecl EProxyNormalComputationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod,(UObject *)pUVar1,
                       L"EProxyNormalComputationMethod");
  }
  return Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton;
}

// NewProp_bCalculateCorrectLODModel_SetBit @ 147f91920

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 1;
  return;
}

// NewProp_bOverrideVoxelSize_SetBit @ 147f91930

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 2;
  return;
}

// NewProp_bOverrideTransferDistance_SetBit @ 147f91940

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 4;
  return;
}

// NewProp_bUseHardAngleThreshold_SetBit @ 147f91950

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 8;
  return;
}

// NewProp_bComputeLightMapResolution_SetBit @ 147f91960

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 0x10;
  return;
}

// NewProp_bRecalculateNormals_SetBit @ 147f91970

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 0x20;
  return;
}

// NewProp_bUseLandscapeCulling_SetBit @ 147f91980

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 0x40;
  return;
}

// NewProp_bSupportRayTracing_SetBit @ 147f91990

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbe) = *(byte *)((longlong)param_1 + 0xbe) | 0x80;
  return;
}

// NewProp_bAllowDistanceField_SetBit @ 147f919a0

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbf) = *(byte *)((longlong)param_1 + 0xbf) | 1;
  return;
}

// NewProp_bReuseMeshLightmapUVs_SetBit @ 147f919b0

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbf) = *(byte *)((longlong)param_1 + 0xbf) | 2;
  return;
}

// NewProp_bGroupIdenticalMeshesForBaking_SetBit @ 147f919c0

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbf) = *(byte *)((longlong)param_1 + 0xbf) | 4;
  return;
}

// NewProp_bCreateCollision_SetBit @ 147f919d0

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbf) = *(byte *)((longlong)param_1 + 0xbf) | 8;
  return;
}

// NewProp_bAllowVertexColors_SetBit @ 147f919e0

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbf) = *(byte *)((longlong)param_1 + 0xbf) | 0x10;
  return;
}

// NewProp_bGenerateLightmapUVs_SetBit @ 147f919f0

void __cdecl
Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xbf) = *(byte *)((longlong)param_1 + 0xbf) | 0x20;
  return;
}

// NewStructOps @ 147f91a00

void * __cdecl Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshProxySettings,&UE::CoreUObject::Private::Construct<FMeshProxySettings>,&UE::CoreUObject::Private::ConstructForTests<FMeshProxySettings>,&UE::CoreUObject::Private::Destruct<FMeshProxySettings>,&UE::CoreUObject::Private::Copy<FMeshProxySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 147f91d60

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FMeshParticleVertexFactoryShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> @ 147f92350

void * __cdecl
operator_new<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

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

// TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 147f92420

FArchive * __cdecl
operator<<<UE::Math::TVector<float>_TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<UE::Math::TVector<float>_> FVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  ForElementType<UE::Math::TVector<float>_> FVar7;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 0xc,(longlong)*piVar1 * 0xc);
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
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                    (0xc,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<UE::Math::TVector<float>_>)param_2;
        if (FVar3 != (ForElementType<UE::Math::TVector<float>_>)0x0) {
          FVar7 = FVar3;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar7,(longlong)param_2->ArrayNum * 0xc)
        ;
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar4)();
        return pFVar6;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FBspNode,TSizedDefaultAllocator<32>_> @ 147f92430

FArchive * __cdecl
operator<<<FBspNode,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FBspNode,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
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
               bVar5)) break;
            operator<<(param_1,(FBspNode *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x40));
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FBspNode,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1040,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          operator<<(param_1,(FBspNode *)(pFVar3 + (longlong)iVar6 * 0x40));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// operator<<<FBspSurf,TSizedDefaultAllocator<32>_> @ 147f92440

FArchive * __cdecl
operator<<<FBspSurf,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FBspSurf,TSizedDefaultAllocator<32>_> *param_2)

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
  FBspSurf *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x50);
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
                (0x50,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x33334)) {
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
              operator<<(param_1,(FBspSurf *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x50));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FBspSurf,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1050,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FBspSurf *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x50);
              DefaultConstructItems<FBspSurf,int>(pFVar10,1);
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

// FDeltaBatchHeader,TSizedDefaultAllocator<32>_> @ 147f92450

FArchive * __cdecl
operator<<<UE::MorphTargetVertexCodec::FDeltaBatchHeader_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_> *param_2
          )

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x2c);
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
                (0x2c,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x5d175)) {
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
            UE::MorphTargetVertexCodec::operator<<
                      (param_1,(FDeltaBatchHeader *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x2c));
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
        TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x42c,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          UE::MorphTargetVertexCodec::operator<<
                    (param_1,(FDeltaBatchHeader *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x2c));
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

// operator<<<FDepecatedModelVertex,TMemoryImageAllocator<0>_> @ 147f92460

FArchive * __cdecl
operator<<<FDepecatedModelVertex,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  TVector<float> *pTVar2;
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
              pTVar2 = (TVector<float> *)((longlong)FVar10 + (longlong)(int)uVar11 * 0x24);
              UE::Math::operator<<(param_1,pTVar2);
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)(pTVar2 + 1));
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&pTVar2[1].field0_0x0._s_0.Y);
              UE::Math::operator<<(param_1,(TVector2<float> *)((longlong)&pTVar2[1].field0_0x0 + 8))
              ;
              UE::Math::operator<<(param_1,(TVector2<float> *)((longlong)&pTVar2[2].field0_0x0 + 4))
              ;
              uVar11 = uVar11 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>::Empty(param_2,auStackX_8[0]);
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
              pTVar2 = (TVector<float> *)((longlong)FVar10 + (longlong)iVar6 * 0x24);
              UE::Math::operator<<(param_1,pTVar2);
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)(pTVar2 + 1));
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&pTVar2[1].field0_0x0._s_0.Y);
              UE::Math::operator<<(param_1,(TVector2<float> *)((longlong)&pTVar2[1].field0_0x0 + 8))
              ;
              UE::Math::operator<<(param_1,(TVector2<float> *)((longlong)&pTVar2[2].field0_0x0 + 4))
              ;
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

// operator<<<FDepecatedModelVertex,TSizedDefaultAllocator<32>_> @ 147f92470

FArchive * __cdecl
operator<<<FDepecatedModelVertex,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FDepecatedModelVertex,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x24);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x71c72)) {
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
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x24;
              UE::Math::operator<<(param_1,(TVector<float> *)pFVar2);
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)(pFVar2 + 0xc));
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)(pFVar2 + 0x10));
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar2 + 0x14));
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar2 + 0x1c));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FDepecatedModelVertex,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x424,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x24;
              UE::Math::operator<<(param_1,(TVector<float> *)pFVar2);
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)(pFVar2 + 0xc));
              operator<<(param_1,(FDeprecatedSerializedPackedNormal *)(pFVar2 + 0x10));
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar2 + 0x14));
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar2 + 0x1c));
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

// operator<<<FLeaf,TSizedDefaultAllocator<32>_> @ 147f92480

FArchive * __cdecl
operator<<<FLeaf,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FLeaf,TSizedDefaultAllocator<32>_> *param_2)

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
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
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
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<FLeaf,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar7 = param_2->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar7 + 1;
            pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
            puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
              }
            }
            else {
              *(uint *)pFVar10 = *puVar3;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
          } while ((int)uVar11 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar14 = uVar12;
        uVar11 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar13 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar13 < (int)uVar11) {
            uVar8 = ~uVar13 >> 0x1f;
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
          pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
          puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
          if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
            }
          }
          else {
            *(undefined4 *)pFVar10 = *puVar4;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          uVar12 = (ulonglong)(uVar13 + 1);
          uVar14 = uVar14 + 4;
          uVar11 = param_2->ArrayNum;
        } while ((int)(uVar13 + 1) < param_2->ArrayNum);
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

// operator<<<FLightmassPrimitiveSettings,TSizedDefaultAllocator<32>_> @ 147f92490

FArchive * __cdecl
operator<<<FLightmassPrimitiveSettings,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FLightmassPrimitiveSettings,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FLightmassPrimitiveSettings *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
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
              operator<<(param_1,(FLightmassPrimitiveSettings *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18))
              ;
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FLightmassPrimitiveSettings,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x418,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FLightmassPrimitiveSettings *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
              DefaultConstructItems<FLightmassPrimitiveSettings,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
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

// operator<<<FModelVertex,TSizedDefaultAllocator<32>_> @ 147f924a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchive * __cdecl
operator<<<FModelVertex,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FModelVertex,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FArchive *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  uint auStackX_8 [2];
  <unnamed_type_Vector> a<StackX_10 [2];
  <unnamed_type_Vector> a<StackX_18 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  uVar17 = 0;
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
                (0x40,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          fVar11 = _UNK_15182064c;
          fVar10 = _UNK_151820648;
          fVar9 = _UNK_151820644;
          fVar8 = ___xmm_3c0080813c0080813c0080813c008081;
          fVar7 = _UNK_15076c66c;
          fVar6 = _UNK_15076c668;
          fVar5 = _UNK_15076c664;
          fVar4 = ___xmm_bf800000bf800000bf800000bf800000;
          uVar20 = uVar17;
          uVar19 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar16 = (uint)uVar17;
              uVar14 = 0;
              if ((int)uVar16 < (int)uVar19) {
                uVar14 = ~uVar16 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar3 = (code *)swi(3);
                pFVar15 = (FArchive *)(*pcVar3)();
                return pFVar15;
              }
              pFVar18 = (param_2->AllocatorInstance).Data + uVar20;
              UE::Math::operator<<(param_1,(TVector<float> *)pFVar18);
              iVar13 = FArchiveState::CustomVer
                                 ((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
              if (iVar13 < 0x1a) {
                operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&a<StackX_18[0]._s_0);
                auVar21 = pmovzxbd(in_XMM1,a<StackX_18[0].Packed);
                *(ulonglong *)&pFVar18[0xc].field_0x0 =
                     CONCAT44((float)auVar21._4_4_ * fVar9 + fVar5,
                              (float)auVar21._0_4_ * fVar8 + fVar4);
                *(float *)(pFVar18 + 0x14) = (float)auVar21._8_4_ * fVar10 + fVar6;
                operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&a<StackX_18[0]._s_0);
                in_XMM1 = pmovzxbd(auVar21,a<StackX_18[0].Packed);
                *(float *)(pFVar18 + 0x20) = (float)in_XMM1._0_4_ * fVar8 + fVar4;
                *(float *)&pFVar18[0x24].field_0x0 = (float)in_XMM1._4_4_ * fVar9 + fVar5;
                *(float *)(pFVar18 + 0x28) = (float)in_XMM1._8_4_ * fVar10 + fVar6;
                *(float *)(pFVar18 + 0x2c) = (float)in_XMM1._12_4_ * fVar11 + fVar7;
              }
              else {
                UE::Math::operator<<(param_1,(TVector<float> *)(pFVar18 + 0xc));
                UE::Math::operator<<(param_1,(TVector4<float> *)(pFVar18 + 0x20));
              }
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar18 + 0x30));
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar18 + 0x38));
              uVar17 = (ulonglong)(uVar16 + 1);
              uVar20 = uVar20 + 0x40;
              uVar19 = param_2->ArrayNum;
            } while ((int)(uVar16 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FModelVertex,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          fVar11 = _UNK_15182064c;
          fVar10 = _UNK_151820648;
          fVar9 = _UNK_151820644;
          fVar8 = ___xmm_3c0080813c0080813c0080813c008081;
          fVar7 = _UNK_15076c66c;
          fVar6 = _UNK_15076c668;
          fVar5 = _UNK_15076c664;
          fVar4 = ___xmm_bf800000bf800000bf800000bf800000;
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar13 = param_2->ArrayNum;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1040,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar13 + 1;
              pFVar18 = (param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x40;
              DefaultConstructItems<FModelVertex,int>(pFVar18,1);
              UE::Math::operator<<(param_1,(TVector<float> *)pFVar18);
              iVar13 = FArchiveState::CustomVer
                                 ((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
              if (iVar13 < 0x1a) {
                operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&a<StackX_10[0]._s_0);
                auVar21 = pmovzxbd(in_XMM1,a<StackX_10[0].Packed);
                *(ulonglong *)&pFVar18[0xc].field_0x0 =
                     CONCAT44((float)auVar21._4_4_ * fVar9 + fVar5,
                              (float)auVar21._0_4_ * fVar8 + fVar4);
                *(float *)(pFVar18 + 0x14) = (float)auVar21._8_4_ * fVar10 + fVar6;
                operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&a<StackX_10[0]._s_0);
                in_XMM1 = pmovzxbd(auVar21,a<StackX_10[0].Packed);
                *(float *)(pFVar18 + 0x20) = (float)in_XMM1._0_4_ * fVar8 + fVar4;
                *(float *)&pFVar18[0x24].field_0x0 = (float)in_XMM1._4_4_ * fVar9 + fVar5;
                *(float *)(pFVar18 + 0x28) = (float)in_XMM1._8_4_ * fVar10 + fVar6;
                *(float *)(pFVar18 + 0x2c) = (float)in_XMM1._12_4_ * fVar11 + fVar7;
              }
              else {
                UE::Math::operator<<(param_1,(TVector<float> *)(pFVar18 + 0xc));
                UE::Math::operator<<(param_1,(TVector4<float> *)(pFVar18 + 0x20));
              }
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar18 + 0x30));
              UE::Math::operator<<(param_1,(TVector2<float> *)(pFVar18 + 0x38));
              uVar19 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar19;
            } while ((int)uVar19 < (int)auStackX_8[0]);
          }
        }
        return param_1;
      }
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2846541355549724645>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FArchive *)(*pcVar3)();
        return pFVar15;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FMorphTargetDelta,TSizedDefaultAllocator<32>_> @ 147f924b0

FArchive * __cdecl
operator<<<FMorphTargetDelta,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMorphTargetDelta,TSizedDefaultAllocator<32>_> *param_2)

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
  FMorphTargetDelta *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x1c);
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
                (0x1c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x92493)) {
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
              operator<<(param_1,(FMorphTargetDelta *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x1c));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FMorphTargetDelta,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x41c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FMorphTargetDelta *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x1c);
              DefaultConstructItems<FMorphTargetDelta,int>(pFVar10,1);
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

// operator<<<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> @ 147f924c0

FArchive * __cdecl
operator<<<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> *param_2)

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
  FMorphTargetLODModel *pFVar10;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FMorphTargetLODModel,int>
                ((FMorphTargetLODModel *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
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
              operator<<(param_1,(FMorphTargetLODModel *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FMorphTargetLODModel *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FMorphTargetLODModel,int>(pFVar10,1);
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

// operator<<<FVert,TSizedDefaultAllocator<32>_> @ 147f924d0

FArchive * __cdecl
operator<<<FVert,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FVert,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
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
                (0x18,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
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
            operator<<(param_1,(FVert *)((param_2->AllocatorInstance).Data +
                                        (longlong)(int)uVar10 * 0x18));
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
        TArray<FVert,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FVert *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x18));
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

// AddPass<`FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>'::__l2::<lambda_1>_> @ 147f92980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearStreamingRequestCount_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearStreamingRequestCount_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearStreamingRequestCount_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FStreamlineVelocityCombineCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<`FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>'::__l2::<lambda_1>_> @ 147f92b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFScatterUpdates_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFScatterUpdates_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FScatterUpdates_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FStreamlineUIHintExtractionCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<`FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>'::__l2::<lambda_1>_> @ 147f92ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTranscodePageToGPU_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTranscodePageToGPU_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTranscodePageToGPU_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandCopyPositionCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPass<FReadbackBufferParameters,`Nanite::FReadbackManager::QueueReadback'::__l2::<lambda_1>_> @ 147f93090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FReadbackBufferParameters,_Nanite::FReadbackManager::QueueReadback_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FReadbackBufferParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *pTVar2;
  FRDGBuffer *pFVar3;
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = FReadbackBufferParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FReadbackBufferParameters",L"FReadbackBufferParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                 ,0x4ea,0x10,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FReadbackBufferParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
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
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FReadbackBufferParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Async);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<FReadbackBufferParameters,`Nanite::FReadbackManager::QueueReadback'::`2'::<lambda_1>_>
        ::_vftable_;
  pTVar2 = param_4->GPUReadback;
  pFVar3 = param_4->RDGRequestsBuffer;
  *(FReadbackBufferParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = param_2;
  pFVar8[1]._padding_ = (longlong)pTVar2;
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>'::__l2::<lambda_1>_> @ 147f93800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearStreamingRequestCount_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearStreamingRequestCount_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearStreamingRequestCount_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FStreamlineVelocityCombineCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>'::__l2::<lambda_1>_> @ 147f93990

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFScatterUpdates_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFScatterUpdates_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FScatterUpdates_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FStreamlineUIHintExtractionCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>'::__l2::<lambda_1>_> @ 147f93b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTranscodePageToGPU_CS_Nanite___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTranscodePageToGPU_CS_Nanite__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTranscodePageToGPU_CS_Nanite__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairStrandCopyPositionCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// BindForLegacyShaderParameters<Nanite::FClearStreamingRequestCount_CS::FParameters> @ 147f94700

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
BindForLegacyShaderParameters<Nanite::FClearStreamingRequestCount_CS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = Nanite::FClearStreamingRequestCount_CS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<Nanite::FScatterUpdates_CS::FParameters> @ 147f94760

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
BindForLegacyShaderParameters<Nanite::FScatterUpdates_CS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = Nanite::FScatterUpdates_CS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<Nanite::FTranscodePageToGPU_CS::FParameters> @ 147f947c0

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
BindForLegacyShaderParameters<Nanite::FTranscodePageToGPU_CS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = Nanite::FTranscodePageToGPU_CS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// CastChecked<APlayerController,AActor> @ 147f94820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlayerController * __cdecl CastChecked<APlayerController,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<APlayerController>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APlayerController *)param_1;
  }
  pFVar3 = GetTypeName<APlayerController>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UModel,UObject> @ 147f948e0

UModel * __cdecl CastChecked<UModel,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UModel>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UModel::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UModel *)param_1;
  }
  pFVar3 = GetTypeName<UModel>(&local_28);
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

// CastChecked<UNetConnection,UObject> @ 147f949a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetConnection * __cdecl CastChecked<UNetConnection,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNetConnection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNetConnection::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNetConnection *)param_1;
  }
  pFVar3 = GetTypeName<UNetConnection>(&local_28);
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

// ClearUnusedGraphResources<Nanite::FClearStreamingRequestCount_CS> @ 147f94a60

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
ClearUnusedGraphResources<Nanite::FClearStreamingRequestCount_CS>
          (TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<Nanite::FScatterUpdates_CS> @ 147f94ae0

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
ClearUnusedGraphResources<Nanite::FScatterUpdates_CS>
          (TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable> *param_1,
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

// ClearUnusedGraphResources<Nanite::FTranscodePageToGPU_CS> @ 147f94b60

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
ClearUnusedGraphResources<Nanite::FTranscodePageToGPU_CS>
          (TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *param_1,
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

// CompareItems<FNaniteAssemblyBoneInfluence,int> @ 147f94be0

bool __cdecl
CompareItems<FNaniteAssemblyBoneInfluence,int>
          (FNaniteAssemblyBoneInfluence *param_1,FNaniteAssemblyBoneInfluence *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(int *)(lVar1 + (longlong)param_2) != param_2->BoneIndex) ||
         (__real_322bcc77 <
          (float)((uint)(*(float *)(lVar1 + 4 + (longlong)param_2) - param_2->BoneWeight) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FNaniteAssemblyNode,int> @ 147f94c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
CompareItems<FNaniteAssemblyNode,int>
          (FNaniteAssemblyNode *param_1,FNaniteAssemblyNode *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  __m128 *p_Var15;
  __m128 *p_Var16;
  
  fVar12 = _UNK_1506895ec;
  fVar11 = _UNK_1506895e8;
  fVar10 = _UNK_1506895e4;
  fVar9 = ___xmm_38d1b71738d1b71738d1b71738d1b717;
  uVar8 = _UNK_15061cc7c;
  uVar7 = _UNK_15061cc78;
  uVar6 = _UNK_15061cc74;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_3 != 0) {
    p_Var16 = &(param_2->Transform).Scale3D;
    p_Var15 = &(param_1->Transform).Scale3D;
    do {
      if ((((float)p_Var15[-3].m128_i32[0] !=
            *(float *)((longlong)p_Var15 + (longlong)param_2 + (-0x30 - (longlong)param_1))) ||
          (*(byte *)((longlong)p_Var15 + -0x2c) != *(byte *)((longlong)p_Var16 + -0x2c))) ||
         (auVar1._4_4_ = -(uint)(fVar10 < (float)((uint)(*(float *)((longlong)p_Var15 + -0xc) -
                                                        *(float *)((longlong)p_Var16 + -0xc)) &
                                                 uVar6)),
         auVar1._0_4_ = -(uint)(fVar9 < (float)((uint)(p_Var15[-1].m128_f32[0] -
                                                      p_Var16[-1].m128_f32[0]) & uVar5)),
         auVar1._8_4_ = -(uint)(fVar11 < (float)((uint)(*(float *)((longlong)p_Var15 + -8) -
                                                       *(float *)((longlong)p_Var16 + -8)) & uVar7))
         , auVar1._12_4_ =
                -(uint)(fVar12 < (float)((uint)(*(float *)((longlong)p_Var15 + -4) -
                                               *(float *)((longlong)p_Var16 + -4)) & uVar8)),
         iVar14 = movmskps((uint)*(byte *)((longlong)p_Var16 + -0x2c),auVar1), iVar14 != 0)) {
        return false;
      }
      auVar2._4_4_ = -(uint)(fVar10 < (float)((uint)(*(float *)((longlong)p_Var15 + -0x1c) -
                                                    *(float *)((longlong)p_Var16 + -0x1c)) & uVar6))
      ;
      auVar2._0_4_ = -(uint)(fVar9 < (float)((uint)((((TTransform<float> *)(p_Var15 + -2))->Rotation
                                                    ).m128_f32[0] -
                                                   (((TTransform<float> *)(p_Var16 + -2))->Rotation)
                                                   .m128_f32[0]) & uVar5));
      auVar2._8_4_ = -(uint)(fVar11 < (float)((uint)(*(float *)((longlong)p_Var15 + -0x18) -
                                                    *(float *)((longlong)p_Var16 + -0x18)) & uVar7))
      ;
      auVar2._12_4_ =
           -(uint)(fVar12 < (float)((uint)(*(float *)((longlong)p_Var15 + -0x14) -
                                          *(float *)((longlong)p_Var16 + -0x14)) & uVar8));
      iVar14 = movmskps(0,auVar2);
      if ((iVar14 != 0) &&
         (auVar3._4_4_ = -(uint)(fVar10 < (float)((uint)(*(float *)((longlong)p_Var15 + -0x1c) +
                                                        *(float *)((longlong)p_Var16 + -0x1c)) &
                                                 uVar6)),
         auVar3._0_4_ = -(uint)(fVar9 < (float)((uint)((((TTransform<float> *)(p_Var15 + -2))->
                                                       Rotation).m128_f32[0] +
                                                      (((TTransform<float> *)(p_Var16 + -2))->
                                                      Rotation).m128_f32[0]) & uVar5)),
         auVar3._8_4_ = -(uint)(fVar11 < (float)((uint)(*(float *)((longlong)p_Var15 + -0x18) +
                                                       *(float *)((longlong)p_Var16 + -0x18)) &
                                                uVar7)),
         auVar3._12_4_ =
              -(uint)(fVar12 < (float)((uint)(*(float *)((longlong)p_Var15 + -0x14) +
                                             *(float *)((longlong)p_Var16 + -0x14)) & uVar8)),
         iVar14 = movmskps(iVar14,auVar3), iVar14 != 0)) {
        return false;
      }
      auVar4._4_4_ = -(uint)(fVar10 < (float)((uint)(p_Var15->m128_f32[1] - p_Var16->m128_f32[1]) &
                                             uVar6));
      auVar4._0_4_ = -(uint)(fVar9 < (float)((uint)(p_Var15->m128_f32[0] - p_Var16->m128_f32[0]) &
                                            uVar5));
      auVar4._8_4_ = -(uint)(fVar11 < (float)((uint)(p_Var15->m128_f32[2] - p_Var16->m128_f32[2]) &
                                             uVar7));
      auVar4._12_4_ =
           -(uint)(fVar12 < (float)((uint)(p_Var15->m128_f32[3] - p_Var16->m128_f32[3]) & uVar8));
      iVar14 = movmskps(0,auVar4);
      if (iVar14 != 0) {
        return false;
      }
      if (*(float *)((longlong)p_Var15 + 0x18) != *(float *)((longlong)p_Var16 + 0x18)) {
        return false;
      }
      bVar13 = CompareItems<FNaniteAssemblyBoneInfluence,int>
                         ((FNaniteAssemblyBoneInfluence *)p_Var15[1].m128_u64[0],
                          (FNaniteAssemblyBoneInfluence *)p_Var16[1].m128_u64[0],
                          (int)*(float *)((longlong)p_Var15 + 0x18));
      if (!bVar13) {
        return false;
      }
      p_Var16 = p_Var16 + 5;
      p_Var15 = p_Var15 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FNaniteAssemblyPart,int> @ 147f94d60

bool __cdecl
CompareItems<FNaniteAssemblyPart,int>
          (FNaniteAssemblyPart *param_1,FNaniteAssemblyPart *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_3 != 0) {
    pTVar4 = &param_2->MaterialRemap;
    pTVar3 = &param_1->MaterialRemap;
    do {
      bVar1 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(pTVar3 + -2),
                         (FSoftObjectPath *)
                         ((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)pTVar3));
      if (!bVar1) {
        return false;
      }
      iVar2 = pTVar3->ArrayNum;
      if (iVar2 != pTVar4->ArrayNum) {
        return false;
      }
      if ((iVar2 != 0) &&
         (iVar2 = memcmp((pTVar3->AllocatorInstance).Data,(pTVar4->AllocatorInstance).Data,
                         (longlong)iVar2 << 2), iVar2 != 0)) {
        return false;
      }
      pTVar3 = pTVar3 + 3;
      pTVar4 = pTVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FScriptName,int> @ 147f94e00

bool __cdecl CompareItems<FScriptName,int>(FScriptName *param_1,FScriptName *param_2,int param_3)

{
  undefined4 uVar1;
  uint local_18;
  
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    uVar1 = param_2->ComparisonIndex;
    if (((param_1->ComparisonIndex).Value != uVar1) || (param_1->Number != param_2->Number)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return false;
}

// ConstructItems<FBspSurf,FBspSurf,int> @ 147f94e50

void __cdecl ConstructItems<FBspSurf,FBspSurf,int>(void *param_1,FBspSurf *param_2,int param_3)

{
  bool *pbVar1;
  UObject *pUVar2;
  TObjectPtr<ABrush> TVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar6 = &param_2->pBase;
    do {
      pUVar2 = *(UObject **)((longlong)piVar5 + (longlong)param_2 + (-0xc - (longlong)param_1));
      *(UObject **)(piVar5 + -3) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      piVar5[-1] = piVar6[-1];
      *piVar5 = *piVar6;
      piVar5[1] = piVar6[1];
      piVar5[2] = piVar6[2];
      piVar5[3] = piVar6[3];
      piVar5[4] = piVar6[4];
      TVar3.field0_0x0 = (TObjectPtr<ABrush>_u_0)((TObjectPtr<ABrush>_u_0 *)(piVar6 + 5))->DebugPtr;
      ((TObjectPtr<ABrush>_u_0 *)(piVar5 + 5))->DebugPtr = (ABrush *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (ABrush *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      uVar4 = *(undefined8 *)(piVar6 + 0xb);
      *(longlong *)(piVar5 + 9) = ((TPlane<float> *)(piVar6 + 9))->_padding_;
      *(undefined8 *)(piVar5 + 0xb) = uVar4;
      piVar5[0xd] = piVar6[0xd];
      piVar5[0xe] = piVar6[0xe];
      *(bool *)(piVar5 + 0xf) = *(bool *)(piVar6 + 0xf);
      *(bool *)((longlong)piVar5 + 0x3d) = *(bool *)((longlong)piVar6 + 0x3d);
      pbVar1 = (bool *)((longlong)piVar6 + 0x3e);
      piVar6 = piVar6 + 0x14;
      *(bool *)((longlong)piVar5 + 0x3e) = *pbVar1;
      piVar5 = piVar5 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructVertexFactoryParameters<FMeshParticleVertexFactory> @ 147f94f30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FMeshParticleVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
    pFVar3 = operator_new(8);
    if (pFVar3 != (FVertexFactoryShaderParameters *)0x0) {
      *(undefined8 *)pFVar3 = 0;
    }
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)(pFVar3 + 1),param_2,L"PrevTransformBuffer",SPF_Optional)
    ;
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_147f94f52_caseD_1;
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
switchD_147f94f52_caseD_1:
    return (FVertexFactoryShaderParameters *)0x0;
  }
}

// ConsumeChannelRecordsForPacket<`UNetConnection::ReceivedAck'::__l2::<lambda_1>_&> @ 147f95000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FChannelRecordImpl::
ConsumeChannelRecordsForPacket<_UNetConnection::ReceivedAck_::__l2::<lambda_1>_&>
          (FWrittenChannelsRecord *param_1,int param_2,<lambda_1> *param_3)

{
  uint uVar1;
  UNetConnection *pUVar2;
  UChannel *this;
  FOutBunch *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FChannelCloseInfo> FVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStackX_c;
  EChannelCloseReason local_res10 [8];
  
  uVar10 = 0xffffffff;
  if (((param_1->ChannelRecord).Head == (param_1->ChannelRecord).Tail) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < Count()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x4c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = (param_1->ChannelRecord).Tail;
  uVar1 = *(uint *)((param_1->ChannelRecord).Storage.AllocatorInstance.Data +
                   (ulonglong)((param_1->ChannelRecord).IndexMask & uVar7) * 4);
  if ((param_1->ChannelRecord).Head == uVar7) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    (param_1->ChannelRecord).Tail = uVar7 + 1;
  }
  if (((-1 < (int)uVar1) || ((uVar1 & 0x7fffffff) != param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PacketEntry.IsSequence == 1u && PacketEntry.Value == (uint32)PacketId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1924,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = (param_1->ChannelRecord).Tail;
  if ((param_1->ChannelRecord).Head != uVar7) {
    do {
      uVar1 = *(uint *)((param_1->ChannelRecord).Storage.AllocatorInstance.Data +
                       (ulonglong)((param_1->ChannelRecord).IndexMask & uVar7) * 4);
      if ((int)uVar1 < 0) {
        return;
      }
      uVar9 = uVar1 & 0x7fffffff;
      (param_1->ChannelRecord).Tail = uVar7 + 1;
      if (uVar9 != uVar10) {
        pUVar2 = param_3->__this;
        if (((pUVar2->Channels).ArrayNum <= (int)uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this = *(UChannel **)((pUVar2->Channels).AllocatorInstance.Data + (ulonglong)uVar9 * 8);
        uVar10 = uVar9;
        if (this != (UChannel *)0x0) {
          if ((this->OpenPacketId).Last == param_2) {
            this->OpenAcked = 1;
          }
          for (pFVar3 = this->OutRec; pFVar3 != (FOutBunch *)0x0; pFVar3 = pFVar3->Next) {
            if (pFVar3->bOpen != '\0') {
              if (6 < (byte)LogNet._0_1_) {
                UE::Logging::Private::BasicLog<7>
                          ((FStaticBasicLogRecord *)&PTR_u_Channel__i_rese_1519cdb30,
                           (FLogCategoryBase *)&LogNet);
              }
              this->OpenAcked = 0;
            }
            if (pFVar3->PacketId == param_2) {
              pFVar3->ReceivedAck = '\x01';
            }
          }
          (**(code **)(this->_padding_ + 0x2e0))(this,param_2);
          bVar5 = UChannel::ReceivedAcks(this,local_res10);
          if (bVar5) {
            FVar8 = (ForElementType<FChannelCloseInfo>)param_3->OutChannelsToClose;
            uStackX_c = CONCAT31(uStackX_c._1_3_,local_res10[0]);
            iVar6 = *(int *)((ForElementType<FChannelCloseInfo> *)((longlong)FVar8 + 0x48))->
                            InlineData;
            if (iVar6 == *(int *)((longlong)FVar8 + 0x4c)) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FChannelCloseInfo>_>
                                (0x408,(ForElementType<FChannelCloseInfo> *)FVar8,
                                 (int *)((longlong)FVar8 + 0x4c));
            }
            *(int *)((ForElementType<FChannelCloseInfo> *)((longlong)FVar8 + 0x48))->InlineData =
                 iVar6 + 1;
            if (*(ForElementType<FChannelCloseInfo> *)((longlong)FVar8 + 0x40) !=
                (ForElementType<FChannelCloseInfo>)0x0) {
              FVar8 = *(ForElementType<FChannelCloseInfo> *)((longlong)FVar8 + 0x40);
            }
            *(ulonglong *)((longlong)FVar8 + (longlong)iVar6 * 8) =
                 CONCAT44(uStackX_c,uVar1) & 0xffffffff7fffffff;
          }
        }
      }
      uVar7 = (param_1->ChannelRecord).Tail;
    } while ((param_1->ChannelRecord).Head != uVar7);
  }
  return;
}

// ConsumeChannelRecordsForPacket<`UNetConnection::ReceivedNak'::__l2::<lambda_1>_&> @ 147f95250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FChannelRecordImpl::
ConsumeChannelRecordsForPacket<_UNetConnection::ReceivedNak_::__l2::<lambda_1>_&>
          (FWrittenChannelsRecord *param_1,int param_2,<lambda_1> *param_3)

{
  UNetConnection *pUVar1;
  UChannel *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0xffffffff;
  if (((param_1->ChannelRecord).Head == (param_1->ChannelRecord).Tail) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < Count()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x4c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = (param_1->ChannelRecord).Tail;
  uVar5 = *(uint *)((param_1->ChannelRecord).Storage.AllocatorInstance.Data +
                   (ulonglong)((param_1->ChannelRecord).IndexMask & uVar4) * 4);
  if ((param_1->ChannelRecord).Head == uVar4) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (param_1->ChannelRecord).Tail = uVar4 + 1;
  }
  if (((-1 < (int)uVar5) || ((uVar5 & 0x7fffffff) != param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PacketEntry.IsSequence == 1u && PacketEntry.Value == (uint32)PacketId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1924,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = (param_1->ChannelRecord).Tail;
  if ((param_1->ChannelRecord).Head != uVar4) {
    do {
      uVar5 = *(uint *)((param_1->ChannelRecord).Storage.AllocatorInstance.Data +
                       (ulonglong)((param_1->ChannelRecord).IndexMask & uVar4) * 4);
      if ((int)uVar5 < 0) {
        return;
      }
      uVar5 = uVar5 & 0x7fffffff;
      (param_1->ChannelRecord).Tail = uVar4 + 1;
      if (uVar5 != uVar6) {
        pUVar1 = param_3->__this;
        if (((pUVar1->Channels).ArrayNum <= (int)uVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this = *(UChannel **)((pUVar1->Channels).AllocatorInstance.Data + (ulonglong)uVar5 * 8);
        uVar6 = uVar5;
        if (((this != (UChannel *)0x0) &&
            ((**(code **)(this->_padding_ + 0x2e8))(this,param_2),
            (this->OpenPacketId).First <= param_2)) && (param_2 <= (this->OpenPacketId).Last)) {
          UChannel::ReceivedAcks(this);
        }
      }
      uVar4 = (param_1->ChannelRecord).Tail;
    } while ((param_1->ChannelRecord).Head != uVar4);
  }
  return;
}

// DefaultConstructItems<UE::Shader::FValueComponent,int> @ 147f954a0

void __cdecl DefaultConstructItems<UE::Shader::FValueComponent,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<Nanite::FStreamingPageUploader::FAddedPageInfo,int> @ 147f954c0

void __cdecl
DefaultConstructItems<Nanite::FStreamingPageUploader::FAddedPageInfo,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0xffffffffffffffff;
    param_1 = (void *)((longlong)param_1 + 0x24);
  }
  return;
}

// DefaultConstructItems<FBspNode,int> @ 147f954f0

void __cdecl DefaultConstructItems<FBspNode,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FBspSurf,int> @ 147f95500

void __cdecl DefaultConstructItems<FBspSurf,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    param_1 = (void *)((longlong)param_1 + 0x50);
  }
  return;
}

// DefaultConstructItems<FDelayedIncomingPacket,int> @ 147f95530

void __cdecl DefaultConstructItems<FDelayedIncomingPacket,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::MorphTargetVertexCodec::FDeltaBatchHeader,int> @ 147f95560

void __cdecl
DefaultConstructItems<UE::MorphTargetVertexCodec::FDeltaBatchHeader,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FDepecatedModelVertex,int> @ 147f95570

void __cdecl DefaultConstructItems<FDepecatedModelVertex,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FLeaf,int> @ 147f95580

void __cdecl DefaultConstructItems<FLeaf,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FLightmassPrimitiveSettings,int> @ 147f95590

void __cdecl DefaultConstructItems<FLightmassPrimitiveSettings,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(uint *)(lVar1 + -8) = *(uint *)(lVar1 + -8) & 0xfffffff0;
      *(undefined8 *)(lVar1 + -4) = 0x41000000;
      *(undefined4 *)(lVar1 + 4) = 0x3f800000;
      *(undefined4 *)(lVar1 + 8) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0xc) = 0x3f800000;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FModelVertex,int> @ 147f955e0

void __cdecl DefaultConstructItems<FModelVertex,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x24;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 8) = 0x3f800000;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMorphTargetCompressedLODModel,int> @ 147f95610

void __cdecl DefaultConstructItems<FMorphTargetCompressedLODModel,int>(void *param_1,int param_2)

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
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMorphTargetDelta,int> @ 147f95650

void __cdecl DefaultConstructItems<FMorphTargetDelta,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x18);
    do {
      *(undefined8 *)(puVar1 + -6) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      puVar1[-4] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)(puVar1 + -3) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      puVar1[-1] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *puVar1 = 0xffffffff;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 7;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMorphTargetLODModel,int> @ 147f956b0

void __cdecl DefaultConstructItems<FMorphTargetLODModel,int>(void *param_1,int param_2)

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
      *(undefined1 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Nanite::FReadbackManager::FReadbackBuffer,int> @ 147f956f0

void __cdecl
DefaultConstructItems<Nanite::FReadbackManager::FReadbackBuffer,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FMaterialNumericParameterInfo,int> @ 147f95720

void __cdecl DefaultConstructItems<FMaterialNumericParameterInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0xffffffff;
      *(undefined1 *)(puVar1 + 2) = 2;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMaterialUniformPreshaderField,int> @ 147f95760

void __cdecl DefaultConstructItems<FMaterialUniformPreshaderField,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FMaterialUniformPreshaderHeader,int> @ 147f95770

void __cdecl DefaultConstructItems<FMaterialUniformPreshaderHeader,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<Nanite::FOrderedScatterUpdater::FUpdate,int> @ 147f95780

void __cdecl
DefaultConstructItems<Nanite::FOrderedScatterUpdater::FUpdate,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xfffffffc;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FVert,int> @ 147f957b0

void __cdecl DefaultConstructItems<FVert,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FDelayedIncomingPacket,int> @ 147f95800

void __cdecl DestructItems<FDelayedIncomingPacket,int>(FDelayedIncomingPacket *param_1,int param_2)

{
  FBitReader *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PacketData).Ptr;
    if (pFVar1 != (FBitReader *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FDelayedPacket,int> @ 147f95840

void __cdecl DestructItems<FDelayedPacket,int>(FDelayedPacket *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMorphTargetCompressedLODModel,int> @ 147f95880

void __cdecl
DestructItems<FMorphTargetCompressedLODModel,int>
          (FMorphTargetCompressedLODModel *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PackedDeltaData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PackedDeltaHeaders).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMorphTargetLODModel,int> @ 147f958d0

void __cdecl DestructItems<FMorphTargetLODModel,int>(FMorphTargetLODModel *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SectionIndices;
    do {
      pFVar1 = (((FString *)((longlong)(pTVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRPCDoSStateConfig,int> @ 147f95930

void __cdecl DestructItems<FRPCDoSStateConfig,int>(FRPCDoSStateConfig *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SeverityCategory;
    do {
      pFVar1 = (((TArray<signed_char,TSizedDefaultAllocator<32>_> *)((longlong)(pFVar2 + 1) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      *(undefined ***)((longlong)(pFVar2 + -5) + 8) = &___7FRPCDoSState__6B_;
      pFVar2 = (FString *)((longlong)(pFVar2 + 7) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>,int> @ 147f95990

void __cdecl
DestructItems<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>,int>
          (TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> *param_1,int param_2)

{
  FBitReader *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FBitReader *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_>,int> @ 147f959d0

void __cdecl
DestructItems<TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_>,int>
          (TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_>
           *param_1,int param_2)

{
  FNetResultHandler *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FNetResultHandler *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FModelSceneProxy::FElementInfo,int> @ 147f95a10

void __cdecl DestructItems<FModelSceneProxy::FElementInfo,int>(FElementInfo *param_1,int param_2)

{
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->VertexFactoryUniformBuffer;
    do {
      if (pTVar1[1] != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FMemory::Free((void *)pTVar1[1]);
      }
      if (*pTVar1 != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)*pTVar1);
      }
      pTVar1[-7] = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)
                   &___7FLightCacheInterface__6B_;
      if (pTVar1[-2] != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1[-2]);
      }
      pTVar1 = pTVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::TSTR_DestroyCollectionCommand1164>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f98ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterialParameterCollectionInstanceResource::GameThread_Destroy_::__l2::TSTR_DestroyCollectionCommand1164>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::TSTR_DestroyCollectionCommand1164>
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
      if (bVar8) goto LAB_147f99031;
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
    goto LAB_147f99225;
  }
LAB_147f99031:
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
LAB_147f9910f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9910f;
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
LAB_147f99225:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FModelSceneProxy::FElementInfo::FElementInfo'::__l11::TSTR_FElementInfoCreateLocalVFUniformBuffer702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f99260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FModelSceneProxy::FElementInfo::FElementInfo_::__l11::TSTR_FElementInfoCreateLocalVFUniformBuffer702>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FModelSceneProxy::FElementInfo::FElementInfo'::__l11::TSTR_FElementInfoCreateLocalVFUniformBuffer702>
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
      if (bVar8) goto LAB_147f993b1;
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
    goto LAB_147f995a5;
  }
LAB_147f993b1:
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
LAB_147f9948f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9948f;
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
LAB_147f995a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FModelSceneProxy::FModelSceneProxy'::__l2::TSTR_InitOrUpdateVertexBufferCmd233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f995e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FModelSceneProxy::FModelSceneProxy_::__l2::TSTR_InitOrUpdateVertexBufferCmd233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FModelSceneProxy::FModelSceneProxy'::__l2::TSTR_InitOrUpdateVertexBufferCmd233>
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
      if (bVar8) goto LAB_147f99731;
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
    goto LAB_147f99925;
  }
LAB_147f99731:
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
LAB_147f9980f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9980f;
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
LAB_147f99925:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterialParameterCollection::BeginDestroy'::__l5::TSTR_RemoveDefaultResourceCommand109>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f99960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterialParameterCollection::BeginDestroy_::__l5::TSTR_RemoveDefaultResourceCommand109>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMaterialParameterCollection::BeginDestroy'::__l5::TSTR_RemoveDefaultResourceCommand109>
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
      if (bVar8) goto LAB_147f99ab1;
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
    goto LAB_147f99ca5;
  }
LAB_147f99ab1:
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
LAB_147f99b8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f99b8f;
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
LAB_147f99ca5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`MeshPaintVisualize::SetTextureAsset'::__l5::TSTR_SetMeshPaintVisualizeTexture66>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f99ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_MeshPaintVisualize::SetTextureAsset_::__l5::TSTR_SetMeshPaintVisualizeTexture66>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`MeshPaintVisualize::SetTextureAsset'::__l5::TSTR_SetMeshPaintVisualizeTexture66>
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
      if (bVar8) goto LAB_147f99e31;
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
    goto LAB_147f9a025;
  }
LAB_147f99e31:
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
LAB_147f99f0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f99f0f;
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
LAB_147f9a025:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FUniformParameterOverrides::SetTextureOverride'::__l2::TSTR_SetTextureOverrideCommand216>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f9a060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FUniformParameterOverrides::SetTextureOverride_::__l2::TSTR_SetTextureOverrideCommand216>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FUniformParameterOverrides::SetTextureOverride'::__l2::TSTR_SetTextureOverrideCommand216>
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
      if (bVar8) goto LAB_147f9a1b1;
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
    goto LAB_147f9a3a5;
  }
LAB_147f9a1b1:
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
LAB_147f9a28f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9a28f;
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
LAB_147f9a3a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::__l2::TSTR_UpdateCollectionCommand1148>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f9a3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents_::__l2::TSTR_UpdateCollectionCommand1148>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::__l2::TSTR_UpdateCollectionCommand1148>
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
      if (bVar8) goto LAB_147f9a531;
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
    goto LAB_147f9a725;
  }
LAB_147f9a531:
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
LAB_147f9a60f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9a60f;
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
LAB_147f9a725:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterialParameterCollection::UpdateDefaultResource'::__l2::TSTR_UpdateDefaultResourceCommand936>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f9a760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterialParameterCollection::UpdateDefaultResource_::__l2::TSTR_UpdateDefaultResourceCommand936>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMaterialParameterCollection::UpdateDefaultResource'::__l2::TSTR_UpdateDefaultResourceCommand936>
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
      if (bVar8) goto LAB_147f9a8b1;
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
    goto LAB_147f9aaa5;
  }
LAB_147f9a8b1:
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
LAB_147f9a98f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9a98f;
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
LAB_147f9aaa5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNaniteVisualizationData::Pick'::__l2::TSTR_UpdateNaniteDebugPicking395>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147f9aae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNaniteVisualizationData::Pick_::__l2::TSTR_UpdateNaniteDebugPicking395>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNaniteVisualizationData::Pick'::__l2::TSTR_UpdateNaniteDebugPicking395>
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
      if (bVar8) goto LAB_147f9ac31;
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
    goto LAB_147f9ae25;
  }
LAB_147f9ac31:
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
LAB_147f9ad0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9ad0f;
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
LAB_147f9ae25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindRemappedFieldImpl<FField> @ 147f9b6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FField * __cdecl
FindRemappedFieldImpl<FField>
          (FName param_1,FName param_2,UClass *param_3,FName param_4,bool param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName FVar5;
  bool bVar6;
  ECoreRedirectFlags EVar7;
  undefined4 uVar8;
  uint uVar9;
  FName *pFVar10;
  LARGE_INTEGER *pLVar11;
  FField *pFVar12;
  UPackage *pUVar13;
  UClass *pUVar15;
  LARGE_INTEGER this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar16;
  FField *pFVar17;
  FField *pFVar18;
  FName local_res20;
  LARGE_INTEGER local_120;
  FName local_118 [2];
  FStatMessage local_108;
  FName local_f8 [2];
  LARGE_INTEGER local_e8;
  FField *pFStack_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  FString local_c8;
  FString local_b8;
  LARGE_INTEGER local_a8;
  FString local_98;
  FCoreRedirectObjectName local_88;
  FCoreRedirectObjectName local_70;
  FName local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString local_48;
  size_t sVar14;
  
  pFVar17 = (FField *)0x0;
  local_res20 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_LinkerLoad_FindRemappedField = (LARGE_INTEGER *)0x0;
    pFVar10 = FName::FName((FName *)&local_120.s,"STAT_LinkerLoad_FindRemappedField");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                ::__l2::StatPtr_STAT_LinkerLoad_FindRemappedField,*pFVar10,
               L"FMemberReference::FindRemappedField","STATGROUP_LoadTimeVerbose","STATCAT_Advanced"
               ,L"LoadTimeVerbose",false,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pLVar11 = _StatPtr_STAT_LinkerLoad_FindRemappedField;
  if (_StatPtr_STAT_LinkerLoad_FindRemappedField == (LARGE_INTEGER *)0x0) {
    pFVar10 = FName::FName(local_f8,"STAT_LinkerLoad_FindRemappedField");
    pLVar11 = (LARGE_INTEGER *)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                          ::__l2::StatPtr_STAT_LinkerLoad_FindRemappedField,*pFVar10,
                         L"FMemberReference::FindRemappedField","STATGROUP_LoadTimeVerbose",
                         "STATCAT_Advanced",L"LoadTimeVerbose",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  LVar16 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar11->s;
  local_a8.s.LowPart = 0;
  local_a8.s.HighPart = 0;
  bVar3 = false;
  bVar2 = false;
  if ((LVar16.s.LowPart == 0) && (LVar16.s.HighPart == 0)) {
LAB_147f9b845:
    bVar4 = false;
    LVar16 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118[0] = (FName)((ulonglong)local_118[0] & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent((FColor *)local_118,(char *)pLVar11[2]);
      bVar3 = false;
      bVar2 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120 = LVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_120.s,(wchar_t *)pLVar11[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MemberReference.cpp"
                   ,0x212);
        bVar3 = true;
        bVar2 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9b845;
    local_120 = LVar16;
    local_a8 = LVar16;
    FThreadStats::AddMessage((FName)LVar16.s,CycleScopeStart);
    bVar4 = true;
  }
  pFVar12 = FindUFieldOrFProperty<FField>((UStruct *)param_3,local_res20,Default);
  pFVar18 = (FField *)0x0;
  this = (LARGE_INTEGER)param_3;
  if (pFVar12 == (FField *)0x0) {
    while (local_120 = this, (FName)this.QuadPart != (FName)0x0) {
      local_118[0].ComparisonIndex.Value = 0;
      local_118[0].Number = 0;
      pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      local_70.OuterName = *(FName *)(this.QuadPart + 0x18);
      local_70.PackageName = (FName)pUVar13->_padding_;
      local_70.ObjectName = local_res20;
      EVar7 = FCoreRedirects::GetFlagsForTypeName(param_1,param_2);
      FCoreRedirects::GetRedirectedName(&local_88,EVar7,&local_70,None);
      if ((((local_88.ObjectName != local_70.ObjectName) ||
           (local_88.OuterName != local_70.OuterName)) ||
          (local_88.PackageName != local_70.PackageName)) &&
         (local_118[0] = local_88.ObjectName, local_70.OuterName != local_88.OuterName)) {
        FName::ToString(&local_88.OuterName,&local_c8);
        if (local_88.PackageName == (FName)0x0) {
          if (local_c8.Data.ArrayNum == 0) {
            local_108.StatData.Pad = (uchar  [8])0x15060d16c;
LAB_147f9ba08:
            sVar14 = wcslen((wchar_t *)local_108.StatData.Pad);
            uVar9 = (uint)sVar14;
          }
          else {
            uVar9 = 0;
            local_108.StatData.Pad = (uchar  [8])local_c8.Data.AllocatorInstance.Data;
            if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_147f9ba08;
          }
          local_108.NameAndInfo.Index.Value = uVar9;
          pUVar15 = Z_Construct_UClass_UClass_NoRegister();
          pFStack_e0 = (FField *)
                       CONCAT44(local_108.NameAndInfo.Number,local_108.NameAndInfo.Index.Value);
          local_e8.s.LowPart._0_1_ = local_108.StatData.Pad[0];
          local_e8.s.LowPart._1_1_ = local_108.StatData.Pad[1];
          local_e8.s.LowPart._2_1_ = local_108.StatData.Pad[2];
          local_e8.s.LowPart._3_1_ = local_108.StatData.Pad[3];
          local_e8.s.HighPart._0_1_ = local_108.StatData.Pad[4];
          local_e8.s.HighPart._1_1_ = local_108.StatData.Pad[5];
          local_e8.s.HighPart._2_1_ = local_108.StatData.Pad[6];
          local_e8.s.HighPart._3_1_ = local_108.StatData.Pad[7];
          this = (LARGE_INTEGER)
                 StaticFindFirstObject
                           (pUVar15,(TStringView<wchar_t> *)&local_e8.s,None,Fatal,
                            L"FindRemappedFieldImpl");
        }
        else {
          FName::ToString(&local_88.OuterName,&local_98);
          FName::ToString(&local_88.PackageName,&local_48);
          FString::PrintfImpl(&local_b8,L"%s.%s");
          if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
          local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
          local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.ArrayNum == 0) {
            local_58 = (FName)0x15060d16c;
LAB_147f9b9c0:
            sVar14 = wcslen((wchar_t *)local_58);
            uVar8 = (undefined4)sVar14;
          }
          else {
            local_58 = (FName)local_c8.Data.AllocatorInstance.Data;
            uVar8 = 0;
            if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_147f9b9c0;
          }
          uStack_50 = uVar8;
          pUVar15 = Z_Construct_UClass_UClass_NoRegister();
          pFStack_e0 = (FField *)CONCAT44(uStack_4c,uStack_50);
          local_e8.s.LowPart = local_58.ComparisonIndex.Value;
          local_e8.s.HighPart = local_58.Number;
          this = (LARGE_INTEGER)
                 StaticFindObject(pUVar15,(UObject *)0x0,(TStringView<wchar_t> *)&local_e8.s,None);
        }
        if ((FName)this.QuadPart == (FName)0x0) {
          local_98.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
          if (4 < (byte)LogBlueprint._0_1_) {
            FName::ToString(&local_res20,(FString *)&local_e8.s);
            UE::Logging::Private::BasicLog<5>
                      (&`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                        ::__l22::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
            local_98.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
            if ((FName)local_e8.QuadPart != (FName)0x0) {
              FMemory::Free((void *)local_e8);
              local_98.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
            }
          }
          goto LAB_147f9bbd7;
        }
        if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      FVar5 = local_118[0];
      local_f8[0].ComparisonIndex.Value = 0;
      local_f8[0].Number = 0;
      if (local_118[0] != (FName)0x0) {
        if (local_118[0] == (FName)0x0) goto LAB_147f9bb67;
        if ((FName)this.QuadPart == (FName)0x0) {
          pFStack_e0 = (FField *)0x0;
        }
        else {
          pFStack_e0 = *(FField **)(this.QuadPart + 0x50);
        }
        local_d8 = 0xffffffff;
        local_d4 = 0x101;
        local_d2 = 0;
        local_e8 = this;
        TFieldIterator<FField>::IterateToNext((TFieldIterator<FField> *)&local_e8.s);
        pFVar18 = pFStack_e0;
        goto joined_r0x000147f9bb1b;
      }
      this.QuadPart = ((LARGE_INTEGER *)(local_120.QuadPart + 0x40))->QuadPart;
    }
  }
LAB_147f9bbe1:
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && ((FName)LVar16.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_108.NameAndInfo.Index.Value = local_a8._0_4_;
      local_108.NameAndInfo.Number = LVar16.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_108.StatData.Pad = (uchar  [8])(local_120.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_108);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return pFVar18;
joined_r0x000147f9bb1b:
  pFStack_e0 = pFVar18;
  if (pFVar18 == (FField *)0x0) goto LAB_147f9bb67;
  bVar6 = IsThisNotNull(pFVar18,"FField::GetFName");
  if (bVar6) {
    local_f8[0] = pFVar18->NamePrivate;
  }
  else {
    local_f8[0].ComparisonIndex.Value = 0;
    local_f8[0].Number = 0;
  }
  if (local_f8[0] == FVar5) {
    if (pFVar18 != (FField *)0x0) {
      if ((!param_5) || ((UClass *)local_120.QuadPart == param_3)) {
LAB_147f9bda4:
        if (4 < (byte)LogBlueprint._0_1_) {
          local_120 = *(LARGE_INTEGER *)(this.QuadPart + 0x18);
          FName::ToString((FName *)&local_120.s,(FString *)&local_108);
          FName::ToString(local_118,&local_98);
          FName::ToString(&local_res20,(FString *)&local_e8.s);
          UE::Logging::Private::BasicLog<5>
                    (&`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                      ::__l51::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
          if ((FName)local_e8.QuadPart != (FName)0x0) {
            FMemory::Free((void *)local_e8);
          }
          if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if ((FName)local_108.StatData.Pad != (FName)0x0) {
            FMemory::Free((void *)local_108.StatData.Pad);
          }
        }
        goto LAB_147f9bbe1;
      }
      if ((FName)this.QuadPart != (FName)0x0) {
        if (((int)param_3->_padding_ < *(int *)(this.QuadPart + 0x38)) ||
           (*(longlong *)(param_3->_padding_ + (longlong)*(int *)(this.QuadPart + 0x38) * 8) !=
            this.QuadPart + 0x30)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) goto LAB_147f9bda4;
      }
      pFVar18 = pFVar17;
      if ((byte)LogBlueprint._0_1_ < 5) goto LAB_147f9bbe1;
      FName::ToString(local_118,&local_98);
      local_120 = (LARGE_INTEGER)param_3->_padding_;
      FName::ToString((FName *)&local_120.s,(FString *)&local_108);
      FName::ToString(&local_res20,(FString *)&local_e8.s);
      UE::Logging::Private::BasicLog<5>
                (&`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                  ::__l40::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      if ((FName)local_e8.QuadPart != (FName)0x0) {
        FMemory::Free((void *)local_e8);
      }
      if ((FName)local_108.StatData.Pad != (FName)0x0) {
        FMemory::Free((void *)local_108.StatData.Pad);
      }
      goto LAB_147f9bbd7;
    }
    goto LAB_147f9bb67;
  }
  pFStack_e0 = pFVar18->Next;
  TFieldIterator<FField>::IterateToNext((TFieldIterator<FField> *)&local_e8.s);
  pFVar18 = pFStack_e0;
  goto joined_r0x000147f9bb1b;
LAB_147f9bb67:
  pFVar18 = pFVar17;
  if (4 < (byte)LogBlueprint._0_1_) {
    local_120 = *(LARGE_INTEGER *)(this.QuadPart + 0x18);
    FName::ToString((FName *)&local_120.s,(FString *)&local_108);
    FName::ToString(&local_res20,(FString *)&local_e8.s);
    UE::Logging::Private::BasicLog<5>
              (&`class_FField*___ptr64___cdecl_FindRemappedFieldImpl<FField>(FName,FName,UClass*___ptr64,FName,bool)'
                ::__l62::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_108.StatData;
    if ((FName)local_e8.QuadPart != (FName)0x0) {
      FMemory::Free((void *)local_e8);
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_108.StatData;
    }
LAB_147f9bbd7:
    pFVar18 = pFVar17;
    if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_147f9bbe1;
}

// FindRemappedFieldImpl<UField> @ 147f9bf30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

UField * __cdecl
FindRemappedFieldImpl<UField>
          (FName param_1,FName param_2,UClass *param_3,FName param_4,bool param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName FVar6;
  ECoreRedirectFlags EVar7;
  undefined4 uVar8;
  uint uVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  UPackage *pUVar12;
  UClass *pUVar14;
  FName this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar15;
  UField *pUVar16;
  UField *pUVar17;
  FName local_res20;
  LARGE_INTEGER local_110;
  TFieldIterator<UField> local_108;
  FName local_e8;
  FName local_e0;
  FStatMessage local_d8;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  FString local_98;
  FCoreRedirectObjectName local_88;
  FCoreRedirectObjectName local_70;
  FName local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString local_48;
  size_t sVar13;
  
  pUVar16 = (UField *)0x0;
  local_res20 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_LinkerLoad_FindRemappedField = (TStatIdData *)0x0;
    pFVar10 = FName::FName((FName *)&local_110.s,"STAT_LinkerLoad_FindRemappedField");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                ::__l2::StatPtr_STAT_LinkerLoad_FindRemappedField,*pFVar10,
               L"FMemberReference::FindRemappedField","STATGROUP_LoadTimeVerbose","STATCAT_Advanced"
               ,L"LoadTimeVerbose",false,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_STAT_LinkerLoad_FindRemappedField;
  if (_StatPtr_STAT_LinkerLoad_FindRemappedField == (TStatIdData *)0x0) {
    pFVar10 = FName::FName((FName *)&local_110.s,"STAT_LinkerLoad_FindRemappedField");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                          ::__l2::StatPtr_STAT_LinkerLoad_FindRemappedField,*pFVar10,
                         L"FMemberReference::FindRemappedField","STATGROUP_LoadTimeVerbose",
                         "STATCAT_Advanced",L"LoadTimeVerbose",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar11->Name;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar4 = false;
  bVar3 = false;
  if ((FVar15.ComparisonIndex.Value.Value == 0) && (FVar15.Number == 0)) {
LAB_147f9c09a:
    bVar5 = false;
    FVar15 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8 = (FName)((ulonglong)local_e8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_e8,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0 = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MemberReference.cpp"
                   ,0x212);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f9c09a;
    local_e0 = FVar15;
    local_a8 = FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar5 = true;
  }
  FVar6 = local_res20;
  this = (FName)param_3;
  if (local_res20 != (FName)0x0) {
    if (param_3 == (UClass *)0x0) {
      local_108.Field = (UField *)0x0;
    }
    else {
      local_108.Field = (UField *)param_3->_padding_;
    }
    local_108.InterfaceIndex = -1;
    local_108.bIncludeSuper = true;
    local_108.bIncludeDeprecated = true;
    local_108.bIncludeInterface = false;
    local_108.Struct = (UStruct *)param_3;
    TFieldIterator<UField>::IterateToNext(&local_108);
    while (local_108.Field != (UField *)0x0) {
      pUVar17 = (UField *)0x0;
      if ((FName)(local_108.Field)->_padding_ == FVar6) goto LAB_147f9c473;
      local_108.Field = ((local_108.Field)->Next).field0_0x0.DebugPtr;
      TFieldIterator<UField>::IterateToNext(&local_108);
    }
  }
  while (pUVar17 = (UField *)0x0, local_e0 = this, this != (FName)0x0) {
    local_e8.ComparisonIndex.Value = 0;
    local_e8.Number = 0;
    pUVar12 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    local_70.OuterName = *(FName *)((longlong)this + 0x18);
    local_70.PackageName = (FName)pUVar12->_padding_;
    local_70.ObjectName = local_res20;
    EVar7 = FCoreRedirects::GetFlagsForTypeName(param_1,param_2);
    FCoreRedirects::GetRedirectedName(&local_88,EVar7,&local_70,None);
    pUVar17 = pUVar16;
    if ((((local_88.ObjectName != local_70.ObjectName) || (local_88.OuterName != local_70.OuterName)
         ) || (local_88.PackageName != local_70.PackageName)) &&
       (local_e8 = local_88.ObjectName, local_70.OuterName != local_88.OuterName)) {
      FName::ToString(&local_88.OuterName,&local_c8);
      if (local_88.PackageName == (FName)0x0) {
        if (local_c8.Data.ArrayNum == 0) {
          local_d8.StatData.Pad = (uchar  [8])0x15060d16c;
LAB_147f9c2b8:
          sVar13 = wcslen((wchar_t *)local_d8.StatData.Pad);
          uVar9 = (uint)sVar13;
        }
        else {
          uVar9 = 0;
          local_d8.StatData.Pad = (uchar  [8])local_c8.Data.AllocatorInstance.Data;
          if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_147f9c2b8;
        }
        local_d8.NameAndInfo.Index.Value = uVar9;
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        local_108.Field =
             (UField *)CONCAT44(local_d8.NameAndInfo.Number,local_d8.NameAndInfo.Index.Value);
        local_108.Struct = (UStruct *)local_d8.StatData.Pad;
        this = (FName)StaticFindFirstObject
                                (pUVar14,(TStringView<wchar_t> *)&local_108,None,Fatal,
                                 L"FindRemappedFieldImpl");
      }
      else {
        FName::ToString(&local_88.OuterName,&local_98);
        FName::ToString(&local_88.PackageName,&local_48);
        FString::PrintfImpl(&local_b8,L"%s.%s");
        if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
        local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
        local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.ArrayNum == 0) {
          local_58 = (FName)0x15060d16c;
LAB_147f9c26e:
          sVar13 = wcslen((wchar_t *)local_58);
          uVar8 = (undefined4)sVar13;
        }
        else {
          local_58 = (FName)local_c8.Data.AllocatorInstance.Data;
          uVar8 = 0;
          if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) goto LAB_147f9c26e;
        }
        uStack_50 = uVar8;
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        local_108.Field = (UField *)CONCAT44(uStack_4c,uStack_50);
        local_108.Struct = (UStruct *)local_58;
        this = (FName)StaticFindObject(pUVar14,(UObject *)0x0,(TStringView<wchar_t> *)&local_108,
                                       None);
      }
      if (this == (FName)0x0) {
        local_98.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
        if (4 < (byte)LogBlueprint._0_1_) {
          FName::ToString(&local_res20,(FString *)&local_108);
          UE::Logging::Private::BasicLog<5>
                    (&`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                      ::__l22::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
          local_98.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
          if ((FName)local_108.Struct != (FName)0x0) {
            FMemory::Free(local_108.Struct);
            local_98.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
          }
        }
        goto LAB_147f9c469;
      }
      if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    FVar6 = local_e8;
    local_110.QuadPart = 0;
    if (local_e8 != (FName)0x0) {
      if (local_e8 == (FName)0x0) goto LAB_147f9c3f7;
      if (this == (FName)0x0) {
        local_108.Field = (UField *)0x0;
      }
      else {
        local_108.Field = *(UField **)((longlong)this + 0x48);
      }
      local_108.InterfaceIndex = -1;
      local_108.bIncludeSuper = true;
      local_108.bIncludeDeprecated = true;
      local_108.bIncludeInterface = false;
      local_108.Struct = (UStruct *)this;
      TFieldIterator<UField>::IterateToNext(&local_108);
      pUVar16 = local_108.Field;
      goto joined_r0x000147f9c3ce;
    }
    this = *(FName *)((longlong)local_e0 + 0x40);
  }
LAB_147f9c473:
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d8.NameAndInfo.Index.Value = local_a8.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_d8.StatData.Pad = (uchar  [8])(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_d8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return pUVar17;
joined_r0x000147f9c3ce:
  local_108.Field = pUVar16;
  if (pUVar16 == (UField *)0x0) goto LAB_147f9c3f7;
  if ((FName)pUVar16->_padding_ == FVar6) {
    if (pUVar16 != (UField *)0x0) {
      if ((!param_5) || (local_e0 == (FName)param_3)) {
LAB_147f9c636:
        pUVar17 = pUVar16;
        if (4 < (byte)LogBlueprint._0_1_) {
          local_110 = *(LARGE_INTEGER *)((longlong)this + 0x18);
          FName::ToString((FName *)&local_110.s,(FString *)&local_d8);
          FName::ToString(&local_e8,&local_98);
          FName::ToString(&local_res20,(FString *)&local_108);
          UE::Logging::Private::BasicLog<5>
                    (&`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                      ::__l51::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
          if ((FName)local_108.Struct != (FName)0x0) {
            FMemory::Free(local_108.Struct);
          }
          if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if ((FName)local_d8.StatData.Pad != (FName)0x0) {
            FMemory::Free((void *)local_d8.StatData.Pad);
          }
        }
        goto LAB_147f9c473;
      }
      if (this != (FName)0x0) {
        if (((int)param_3->_padding_ < *(int *)((longlong)this + 0x38)) ||
           (*(longlong *)(param_3->_padding_ + (longlong)*(int *)((longlong)this + 0x38) * 8) !=
            (longlong)this + 0x30)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_147f9c636;
      }
      if ((byte)LogBlueprint._0_1_ < 5) goto LAB_147f9c473;
      FName::ToString(&local_e8,&local_98);
      local_110 = (LARGE_INTEGER)param_3->_padding_;
      FName::ToString((FName *)&local_110.s,(FString *)&local_d8);
      FName::ToString(&local_res20,(FString *)&local_108);
      UE::Logging::Private::BasicLog<5>
                (&`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                  ::__l40::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      if ((FName)local_108.Struct != (FName)0x0) {
        FMemory::Free(local_108.Struct);
      }
      if ((FName)local_d8.StatData.Pad != (FName)0x0) {
        FMemory::Free((void *)local_d8.StatData.Pad);
      }
      goto LAB_147f9c469;
    }
    goto LAB_147f9c3f7;
  }
  local_108.Field = (pUVar16->Next).field0_0x0.DebugPtr;
  TFieldIterator<UField>::IterateToNext(&local_108);
  pUVar16 = local_108.Field;
  goto joined_r0x000147f9c3ce;
LAB_147f9c3f7:
  if (4 < (byte)LogBlueprint._0_1_) {
    local_110 = *(LARGE_INTEGER *)((longlong)this + 0x18);
    FName::ToString((FName *)&local_110.s,(FString *)&local_d8);
    FName::ToString(&local_res20,(FString *)&local_108);
    UE::Logging::Private::BasicLog<5>
              (&`class_UField*___ptr64___cdecl_FindRemappedFieldImpl<UField>(FName,FName,UClass*___ptr64,FName,bool)'
                ::__l62::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8.StatData;
    if ((FName)local_108.Struct != (FName)0x0) {
      FMemory::Free(local_108.Struct);
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8.StatData;
    }
LAB_147f9c469:
    if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_147f9c473;
}

// FindUField<UStruct> @ 147f9c7d0

UStruct * __cdecl
FindUField<UStruct>(UStruct *param_1,wchar_t *param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  UClass *pUVar2;
  FName local_res20;
  TFieldIterator<UStruct> local_28;
  
  FName::FName(&local_res20,param_2,FNAME_Find);
  if (local_res20 == (FName)0x0) {
    return (UStruct *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = *(UField **)&(param_1->Children).field0_0x0;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_147f9c875;
  }
  local_28.bIncludeInterface = false;
LAB_147f9c875:
  TFieldIterator<UStruct>::IterateToNext(&local_28);
  while( true ) {
    if ((UStruct *)local_28.Field == (UStruct *)0x0) {
      return (UStruct *)0x0;
    }
    if ((FName)(local_28.Field)->_padding_ == local_res20) break;
    local_28.Field = ((local_28.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UStruct>::IterateToNext(&local_28);
  }
  return (UStruct *)local_28.Field;
}

// FindUField<UStruct> @ 147f9c8d0

UStruct * __cdecl FindUField<UStruct>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  UClass *pUVar2;
  TFieldIterator<UStruct> local_28;
  
  if (param_2 == (FName)0x0) {
    return (UStruct *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = *(UField **)&(param_1->Children).field0_0x0;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_147f9c95d;
  }
  local_28.bIncludeInterface = false;
LAB_147f9c95d:
  TFieldIterator<UStruct>::IterateToNext(&local_28);
  while( true ) {
    if ((UStruct *)local_28.Field == (UStruct *)0x0) {
      return (UStruct *)0x0;
    }
    if ((FName)(local_28.Field)->_padding_ == param_2) break;
    local_28.Field = ((local_28.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UStruct>::IterateToNext(&local_28);
  }
  return (UStruct *)local_28.Field;
}

// FindUFieldOrFProperty<FField> @ 147f9c9b0

FField * __cdecl
FindUFieldOrFProperty<FField>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FField *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FField> local_28;
  
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_2 == (FName)0x0) {
    return (FField *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_147f9ca40;
  }
  local_28.bIncludeInterface = false;
LAB_147f9ca40:
  TFieldIterator<FField>::IterateToNext(&local_28);
  pFVar2 = local_28.Field;
  while( true ) {
    if (pFVar2 == (FField *)0x0) {
      return (FField *)0x0;
    }
    local_28.Field = pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = pFVar2->NamePrivate;
    }
    if (FVar5 == param_2) break;
    local_28.Field = pFVar2->Next;
    TFieldIterator<FField>::IterateToNext(&local_28);
    pFVar2 = local_28.Field;
  }
  return pFVar2;
}

// FindUFieldOrFProperty<FProperty> @ 147f9cae0

FProperty * __cdecl
FindUFieldOrFProperty<FProperty>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FProperty> TStack_28;
  
  if (param_2 == (FName)0x0) {
    return (FProperty *)0x0;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    TStack_28.Field = (FField *)0x0;
  }
  else {
    TStack_28.Field = param_1->ChildProperties;
  }
  TStack_28.InterfaceIndex = -1;
  TStack_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  TStack_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  TStack_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (TStack_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_141e72200;
  }
  TStack_28.bIncludeInterface = false;
LAB_141e72200:
  TFieldIterator<FProperty>::IterateToNext(&TStack_28);
  pFVar2 = (FProperty *)TStack_28.Field;
  while( true ) {
    if (pFVar2 == (FProperty *)0x0) {
      return (FProperty *)0x0;
    }
    TStack_28.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = (FName)pFVar2->_padding_;
    }
    if (FVar5 == param_2) break;
    TStack_28.Field = (FField *)pFVar2->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&TStack_28);
    pFVar2 = (FProperty *)TStack_28.Field;
  }
  return pFVar2;
}

// FindUFieldOrFProperty<UField> @ 147f9caf0

UField * __cdecl
FindUFieldOrFProperty<UField>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  UClass *pUVar2;
  TFieldIterator<UField> local_28;
  
  if (param_2 == (FName)0x0) {
    return (UField *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = *(UField **)&(param_1->Children).field0_0x0;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_147f9cb7d;
  }
  local_28.bIncludeInterface = false;
LAB_147f9cb7d:
  TFieldIterator<UField>::IterateToNext(&local_28);
  while( true ) {
    if (local_28.Field == (UField *)0x0) {
      return (UField *)0x0;
    }
    if ((FName)(local_28.Field)->_padding_ == param_2) break;
    local_28.Field = ((local_28.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UField>::IterateToNext(&local_28);
  }
  return local_28.Field;
}

// FindUFieldOrFProperty<UFunction> @ 147f9cbd0

UFunction * __cdecl
FindUFieldOrFProperty<UFunction>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  UClass *pUVar2;
  TFieldIterator<UFunction> local_28;
  
  if (param_2 == (FName)0x0) {
    return (UFunction *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = *(UField **)&(param_1->Children).field0_0x0;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_147f9cc5d;
  }
  local_28.bIncludeInterface = false;
LAB_147f9cc5d:
  TFieldIterator<UFunction>::IterateToNext(&local_28);
  while( true ) {
    if ((UFunction *)local_28.Field == (UFunction *)0x0) {
      return (UFunction *)0x0;
    }
    if ((FName)(local_28.Field)->_padding_ == param_2) break;
    local_28.Field = ((local_28.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UFunction>::IterateToNext(&local_28);
  }
  return (UFunction *)local_28.Field;
}

// GetFieldOuter<UField_*> @ 147f9ccb0

UObject * __cdecl GetFieldOuter<UField_*>(UField *param_1)

{
  return (UObject *)param_1->_padding_;
}

// GetIndexedTexture<USparseVolumeTexture> @ 147f9cd80

/* WARNING: Enum "Type": Some values do not have unique names */

USparseVolumeTexture * __cdecl
GetIndexedTexture<USparseVolumeTexture>(FMaterial *param_1,int param_2)

{
  int iVar1;
  USparseVolumeTexture *pUVar2;
  UClass *pUVar3;
  longlong local_28;
  int local_20;
  void *local_18 [2];
  
  (**(code **)(param_1->_padding_ + 0x4f8))(param_1,&local_28);
  if (((param_2 < 0) || (local_20 <= param_2)) ||
     (pUVar2 = *(USparseVolumeTexture **)(local_28 + (longlong)param_2 * 8),
     pUVar2 == (USparseVolumeTexture *)0x0)) {
    if (bWarnedOnce == false) {
      if (2 < (byte)LogMaterial._0_1_) {
        (**(code **)(param_1->_padding_ + 0x390))(param_1,local_18);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogMaterial);
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
      }
      bWarnedOnce = true;
    }
  }
  else {
    pUVar3 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USparseVolumeTexture *)0x0;
}

// GetIndexedTexture<UTexture> @ 147f9ce70

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture * __cdecl GetIndexedTexture<UTexture>(FMaterial *param_1,int param_2)

{
  int iVar1;
  UTexture *pUVar2;
  UClass *pUVar3;
  longlong local_28;
  int local_20;
  void *local_18 [2];
  
  (**(code **)(param_1->_padding_ + 0x4f8))(param_1,&local_28);
  if (((param_2 < 0) || (local_20 <= param_2)) ||
     (pUVar2 = *(UTexture **)(local_28 + (longlong)param_2 * 8), pUVar2 == (UTexture *)0x0)) {
    if (bWarnedOnce == false) {
      if (2 < (byte)LogMaterial._0_1_) {
        (**(code **)(param_1->_padding_ + 0x390))(param_1,local_18);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogMaterial);
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
      }
      bWarnedOnce = true;
    }
  }
  else {
    pUVar3 = Z_Construct_UClass_UTexture_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTexture *)0x0;
}

// GetTypeName<UModel> @ 147f9d130

FString * __cdecl GetTypeName<UModel>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UModel::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNetConnection> @ 147f9d170

FString * __cdecl GetTypeName<UNetConnection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNetConnection::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVertexFactoryParametersElementShaderBindings<FMeshParticleVertexFactory> @ 147f9d1b0

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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
GetVertexFactoryParametersElementShaderBindings<FMeshParticleVertexFactory>
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
    FMeshParticleVertexFactoryShaderParameters::GetElementShaderBindings
              ((FMeshParticleVertexFactoryShaderParameters *)param_2,param_3,param_4,param_5,param_6
               ,param_7,param_8,param_9,param_10,param_11);
    return;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_147f9d1d8_caseD_1;
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
switchD_147f9d1d8_caseD_1:
    return;
  }
}

// GetVertexFactoryParametersLayout<FMeshParticleVertexFactory> @ 147f9d2b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FMeshParticleVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
    pFVar3 = FMeshParticleVertexFactoryShaderParameters::StaticGetTypeLayout();
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_147f9d2cd_caseD_1;
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
switchD_147f9d2cd_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 147f9d340

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar11 = iVar8 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar8;
  do {
    while (param_2 <= iVar11) {
LAB_147f9d44b:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar9 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
            pTVar12->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) = uVar2;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar8 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 8) <
                      *(int *)((longlong)param_1 + (longlong)iVar15 * 0x18 + 0x38)) {
                    iVar8 = iVar15;
                  }
                  iVar8 = iVar8 + 1;
                }
                lVar10 = (longlong)iVar8;
                pTVar1 = param_1 + iVar14;
                if (*(int *)((pTVar1->ElementData).Pad + 8) <=
                    *(int *)((longlong)param_1 + lVar10 * 0x18 + 8)) break;
                uVar4 = *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8);
                uVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                TVar5 = pTVar1->_s_1;
                uVar6 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                pTVar1->_s_1 = param_1[lVar10]._s_1;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) =
                     *(undefined8 *)((longlong)param_1 + lVar10 * 0x18 + 0x10);
                param_1[lVar10]._s_1 = TVar5;
                *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar6;
                *(undefined8 *)((longlong)param_1 + lVar10 * 0x18 + 0x10) = uVar2;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar8 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar8;
    }
    iVar11 = iVar8 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 8) <
          *(int *)((longlong)param_1 + (longlong)iVar11 * 0x18 + 0x38)) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    lVar9 = (longlong)iVar13;
    pTVar12 = param_1 + iVar8;
    if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)param_1 + lVar9 * 0x18 + 8))
    goto LAB_147f9d44b;
    uVar4 = *(undefined8 *)((longlong)param_1[lVar9].ElementData.Pad + 8);
    iVar11 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
    TVar5 = pTVar12->_s_1;
    uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
    pTVar12->_s_1 = param_1[lVar9]._s_1;
    *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)param_1 + lVar9 * 0x18 + 0x10);
    param_1[lVar9]._s_1 = TVar5;
    *(undefined8 *)((longlong)param_1[lVar9].ElementData.Pad + 8) = uVar6;
    *(undefined8 *)((longlong)param_1 + lVar9 * 0x18 + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// InternalConstructor<AMeshMergeCullingVolume> @ 147f9d560

void __cdecl InternalConstructor<AMeshMergeCullingVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 9;
    *(undefined ***)this = &___7AMeshMergeCullingVolume__6B_;
    *(undefined4 *)&this->field_0x2c4 = 0xff2de12d;
  }
  return;
}

// InternalConstructor<ANavigationObjectBase> @ 147f9d5b0

void __cdecl InternalConstructor<ANavigationObjectBase>(FObjectInitializer *param_1)

{
  if ((ANavigationObjectBase *)param_1->Obj != (ANavigationObjectBase *)0x0) {
    ANavigationObjectBase::ANavigationObjectBase((ANavigationObjectBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMeshBudgetProjectSettings> @ 147f9d5d0

void __cdecl InternalConstructor<UMeshBudgetProjectSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMeshBudgetProjectSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMeshSimplificationSettings> @ 147f9d610

void __cdecl InternalConstructor<UMeshSimplificationSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UMeshSimplificationSettings__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMeshVertexPainterKismetLibrary> @ 147f9d650

void __cdecl InternalConstructor<UMeshVertexPainterKismetLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMeshVertexPainterKismetLibrary__6B_;
  }
  return;
}

// InternalConstructor<UModel> @ 147f9d680

void __cdecl InternalConstructor<UModel>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UModel__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x14 = 0x80;
    *(undefined4 *)&this[4].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x1c = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    FStaticMeshVertexBuffer::FStaticMeshVertexBuffer((FStaticMeshVertexBuffer *)(this + 6));
    FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)&this[10].field_0x18);
    FColorVertexBuffer::FColorVertexBuffer((FColorVertexBuffer *)&this[0xc].field_0x18);
    *(UObject **)&this[0xe].field_0x18 = this;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(this + 0xf));
    *(undefined2 *)&this[0xf].field_0x8 = 0;
    *(undefined8 *)&this[0xf].field_0x10 = 0;
    *(undefined8 *)&this[0xf].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UMorphTarget> @ 147f9d7a0

void __cdecl InternalConstructor<UMorphTarget>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMorphTarget__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UNavMovementInterface> @ 147f9d7f0

void __cdecl InternalConstructor<UNavMovementInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNavMovementInterface__6B_;
  }
  return;
}

// InternalConstructor<UNetConnection> @ 147f9d820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UNetConnection>(FObjectInitializer *param_1)

{
  if ((UNetConnection *)param_1->Obj != (UNetConnection *)0x0) {
    UNetConnection::UNetConnection((UNetConnection *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USimulatedClientNetConnection> @ 147f9d840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<USimulatedClientNetConnection>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UNetConnection *this;
  
  this = (UNetConnection *)param_1->Obj;
  if (this != (UNetConnection *)0x0) {
    UNetConnection::UNetConnection(this,param_1);
    this->InternalAck = 1;
    this->bInternalAck = 1;
    this->bUnlimitedBunchSizeAllowed = 1;
    this->_padding_ = (longlong)&USimulatedClientNetConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USimulatedClientNetConnection::_vftable__for__FExec__;
  }
  return;
}

// InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_> @ 147f9d890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<FDepecatedModelVertex,0> * __cdecl
InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<FDepecatedModelVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<FDepecatedModelVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<FDepecatedModelVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_155227df8 = 0;
      _DAT_155227de8 = 0;
      _DAT_155227df0 = 0;
      _Default = &___7__TResourceArray_UFDepecatedModelVertex___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<FDepecatedModelVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<FDepecatedModelVertex,0> *)
             &`class_TResourceArray<FDepecatedModelVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<FDepecatedModelVertex,0> *)
         &`class_TResourceArray<FDepecatedModelVertex,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>(void)'
          ::__l3::Default;
}

// InternalVTableHelperCtorCaller<AMeshMergeCullingVolume> @ 147f9d930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AMeshMergeCullingVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AMeshMergeCullingVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7AMeshMergeCullingVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANavigationObjectBase> @ 147f9d9e0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANavigationObjectBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavigationObjectBase::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ANavigationObjectBase::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&ANavigationObjectBase::_vftable__for__INavAgentInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshBudgetProjectSettings> @ 147f9dab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshBudgetProjectSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshBudgetProjectSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMeshBudgetProjectSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshSimplificationSettings> @ 147f9db70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMeshSimplificationSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshSimplificationSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UMeshSimplificationSettings__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshVertexPainterKismetLibrary> @ 147f9dc20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMeshVertexPainterKismetLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshVertexPainterKismetLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMeshVertexPainterKismetLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UModel> @ 147f9dcd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UModel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UModel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UModel__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    FStaticMeshVertexBuffer::FStaticMeshVertexBuffer((FStaticMeshVertexBuffer *)(pUVar1 + 6));
    FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)&pUVar1[10].field_0x18);
    FColorVertexBuffer::FColorVertexBuffer((FColorVertexBuffer *)&pUVar1[0xc].field_0x18);
    *(UObject **)&pUVar1[0xe].field_0x18 = pUVar1;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(pUVar1 + 0xf));
    *(undefined2 *)&pUVar1[0xf].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x18 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UMorphTarget> @ 147f9de50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMorphTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMorphTarget::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMorphTarget__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavMovementInterface> @ 147f9df10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavMovementInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavMovementInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavMovementInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetConnection> @ 147f9dfc0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UNetConnection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetConnection *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetConnection::GetPrivateStaticClass();
  pUVar3 = (UNetConnection *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNetConnection *)0x0) {
    pUVar3 = UNetConnection::UNetConnection(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USimulatedClientNetConnection> @ 147f9e060

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

UObject * __cdecl
InternalVTableHelperCtorCaller<USimulatedClientNetConnection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetConnection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USimulatedClientNetConnection::GetPrivateStaticClass();
  this = (UNetConnection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetConnection *)0x0) {
    UNetConnection::UNetConnection(this,param_1);
    this->_padding_ = (longlong)&USimulatedClientNetConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USimulatedClientNetConnection::_vftable__for__FExec__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<FDepecatedModelVertex,TMemoryImageAllocator<0>_> @ 147f9e120

uint __cdecl
Freeze::IntrinsicAppendHash<FDepecatedModelVertex,TMemoryImageAllocator<0>_>
          (TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2
          ,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<FDepecatedModelVertex,TMemoryImageAllocator<0>_> @ 147f9e140

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FDepecatedModelVertex,TMemoryImageAllocator<0>_>
          (TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2
          ,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<FDepecatedModelVertex,TMemoryImageAllocator<0>_> @ 147f9e160

void __cdecl
Freeze::IntrinsicToString<FDepecatedModelVertex,TMemoryImageAllocator<0>_>
          (TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2
          ,FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  return;
}

// IntrinsicUnfrozenCopy<FDepecatedModelVertex,TMemoryImageAllocator<0>_> @ 147f9e170

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FDepecatedModelVertex,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return 0x10;
}

// IntrinsicWriteMemoryImage<FDepecatedModelVertex,TMemoryImageAllocator<0>_> @ 147f9e190

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FDepecatedModelVertex,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_> *param_2,FTypeLayoutDesc *param_3)

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

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 147f9e200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_147f9e2d0:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_147f9e320:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000147f9e329;
          goto LAB_147f9e333;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar1->ElementData).Pad + 8) < *(int *)((pTVar13->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_147f9e455;
      }
LAB_147f9e446:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_147f9e455:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000147f9e329:
  if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar9 + 0x20))
  goto LAB_147f9e320;
LAB_147f9e333:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((longlong)pTVar11 + -0x10) <= *(int *)((pTVar12->ElementData).Pad + 8));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_147f9e320;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_147f9e455;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_147f9e455;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_147f9e446;
  goto LAB_147f9e2d0;
}

// IsObjectPtrEqual<UChildConnection,UChildConnection_*,0> @ 147f9e510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UChildConnection,UChildConnection_*,0>
          (TObjectPtr<UChildConnection> *param_1,UChildConnection **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UChildConnection *)0x0) {
    return *param_2 == (UChildConnection *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LexTryParseString<bool> @ 147f9e530

bool __cdecl LexTryParseString<bool>(bool *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t _C;
  
  if (*param_2 == L'\0') {
    *param_1 = false;
    return false;
  }
  bVar1 = FToBoolHelper::FromCStringWide(param_2);
  *param_1 = bVar1;
  if ((bVar1) || (iVar2 = _finite(0.0), iVar2 == 0)) {
    return true;
  }
  _C = *param_2;
  bVar1 = false;
  while( true ) {
    if (_C == L'\0') {
      return false;
    }
    if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(_C), iVar2 == 0)) break;
    _C = param_2[1];
    param_2 = param_2 + 1;
  }
  if (_C == L'\0') {
    return false;
  }
  while( true ) {
    iVar2 = iswspace(_C);
    if (iVar2 != 0) {
      return bVar1;
    }
    if (_C == L'.') break;
    if ((bVar1 == false) && (_C != L'0')) {
      return false;
    }
    _C = param_2[1];
    param_2 = param_2 + 1;
    bVar1 = true;
    if (_C == L'\0') {
      return true;
    }
  }
  return bVar1;
}

// MakeBunchInfo<FInBunch> @ 147f9e620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetTraceBunchInfo __cdecl MakeBunchInfo<FInBunch>(FInBunch *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)param_1->field_0xe8;
  return (FNetTraceBunchInfo)
         ((((((((param_1->bHasMustBeMappedGUIDs << 4 | (ulonglong)(uVar1 & 3)) * 2 |
               (ulonglong)(uVar1 & 8)) << 2 | (ulonglong)((byte)param_1->field_0xe8 & 4)) * 2 |
              (ulonglong)((byte)param_1->field_0xe9 & 2) | (ulonglong)(uVar1 & 0x80)) << 4 |
            (ulonglong)(uVar1 & 0x40)) * 2 | (ulonglong)(param_1->CloseReason & 0xf) |
           (ulonglong)(uVar1 & 0x30)) << 0xc | (ulonglong)(param_1->ChSequence & 0xfff)) << 0x14 |
         (ulonglong)(param_1->ChIndex & 0xfffff));
}

// MakeBunchInfo<FOutBunch> @ 147f9e6d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetTraceBunchInfo __cdecl MakeBunchInfo<FOutBunch>(FOutBunch *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)param_1->field_0xfc;
  return (FNetTraceBunchInfo)
         (((((((((ulonglong)((byte)param_1->field_0xfd & 3) << 4 | (ulonglong)(uVar1 & 6)) * 2 |
               (ulonglong)(uVar1 & 0x10)) << 2 | (ulonglong)((byte)param_1->field_0xfc & 8)) * 2 |
             (ulonglong)((byte)param_1->field_0xfd & 4)) << 4 |
             (ulonglong)(param_1->CloseReason & 0xf) | (ulonglong)(uVar1 & 0x80)) * 2 |
           (ulonglong)(uVar1 & 0x60)) << 0xb | (ulonglong)(param_1->ChSequence & 0xfff)) << 0x14 |
         (ulonglong)(param_1->ChIndex & 0xfffff));
}

// MakePimpl<UE::Net::FNetResult,1,UE::Net::FNetResult> @ 147f9e770

TPimplPtr<UE::Net::FNetResult,1> __cdecl
MakePimpl<UE::Net::FNetResult,1,UE::Net::FNetResult>(FNetResult *param_1)

{
  undefined8 *puVar1;
  undefined8 *in_RDX;
  
  puVar1 = operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
    puVar1[1] = UE::Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
    puVar1[2] = *in_RDX;
    puVar1[3] = in_RDX[1];
    puVar1[4] = in_RDX[2];
    puVar1[5] = 0;
    puVar1[5] = in_RDX[3];
    in_RDX[3] = 0;
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(in_RDX + 4);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)((longlong)in_RDX + 0x24);
    in_RDX[4] = 0;
    puVar1[7] = in_RDX[5];
    in_RDX[5] = 0;
  }
  param_1->Result = (ulong64)(puVar1 + 2);
  return (TPimplPtr<UE::Net::FNetResult,1>)param_1;
}

// NewObject<UChildConnection> @ 147f9e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UChildConnection * __cdecl
NewObject<UChildConnection>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UChildConnection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UChildConnection_NoRegister();
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
  pUVar2 = (UChildConnection *)
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

// NewObject<UPackageMapClient> @ 147f9e910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPackageMapClient * __cdecl NewObject<UPackageMapClient>(UObject *param_1)

{
  UClass *pUVar1;
  UPackageMapClient *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPackageMapClient_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPackageMapClient *)
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

// NewObject<UPackageMapClient> @ 147f9e9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPackageMapClient * __cdecl
NewObject<UPackageMapClient>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UPackageMapClient *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPackageMapClient_NoRegister();
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
  pUVar2 = (UPackageMapClient *)
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

// NewObject<USimulatedClientNetConnection> @ 147f9eab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USimulatedClientNetConnection * __cdecl NewObject<USimulatedClientNetConnection>(UObject *param_1)

{
  UClass *pUVar1;
  USimulatedClientNetConnection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USimulatedClientNetConnection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USimulatedClientNetConnection *)
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

// ProcessReceivedAcks<`UNetConnection::ReceivedPacket'::__l73::<lambda_2>_&> @ 147f9eb50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetPacketNotify::ProcessReceivedAcks<_UNetConnection::ReceivedPacket_::__l73::<lambda_2>_&>
          (FNetPacketNotify *this,FNotificationHeader *param_1,<lambda_2> *param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  UNetConnection *pUVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TSequenceNumber<14,unsigned_short> local_res8 [8];
  FNetResult local_98;
  FNetResult local_68;
  
  uVar7 = (this->OutAckSeq).Value;
  uVar3 = (param_1->AckedSeq).Value;
  if ((uVar3 != uVar7) && (uVar9 = (uint)uVar3 - (uint)uVar7, (uVar9 & 0x3fff) < 0x2000)) {
    iVar10 = uVar9 * 0x40000;
    iVar11 = iVar10 >> 0x12;
    if (5 < (byte)LogNetTraffic._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
    UpdateInAckSeqAck(this,(int)local_res8,
                      (TSequenceNumber<14,unsigned_short>)(ushort)(iVar10 >> 0x12));
    uVar7 = (this->InAckSeqAck).Value;
    if ((local_res8[0].Value != uVar7) && ((local_res8[0].Value - uVar7 & 0x3fff) < 0x2000)) {
      (this->InAckSeqAck).Value = local_res8[0].Value;
    }
    iVar10 = (int)param_1->HistoryWordCount;
    iVar12 = iVar10 * 0x20;
    uVar7 = (this->OutAckSeq).Value + 1 & 0x3fff;
    if ((0x100 < iVar11) && (2 < (byte)LogNetTraffic._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
    if (iVar12 < iVar11) {
      uVar8 = (ulonglong)(uint)(iVar11 + iVar10 * -0x20);
      do {
        piVar1 = &param_2->__this->LastNotifiedPacketId;
        *piVar1 = *piVar1 + 1;
        puVar2 = &param_2->__this->OutTotalNotifiedPackets;
        *puVar2 = *puVar2 + 1;
        puVar2 = &((param_2->__this->Driver).field0_0x0.DebugPtr)->OutTotalNotifiedPackets;
        *puVar2 = *puVar2 + 1;
        pUVar4 = param_2->__this;
        if (((ushort)pUVar4->LastNotifiedPacketId & 0x3fff) == uVar7) {
          UNetConnection::ReceivedNak(pUVar4,pUVar4->LastNotifiedPacketId);
        }
        else {
          if (2 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_LastNotifiedPac_1519ce370,
                       (FLogCategoryBase *)&LogNet);
          }
          pUVar4 = param_2->__this;
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (&local_98,AckSequenceMismatch);
          UNetConnection::Close(pUVar4,&local_98);
          if (local_98.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
            (**(code **)((longlong)local_98.NextResult + -0x10))
                      ((longlong)local_98.NextResult + -0x10);
          }
          if (local_98.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.ErrorContext.Data.AllocatorInstance.Data);
          }
        }
        uVar7 = uVar7 + 1 & 0x3fff;
        uVar8 = uVar8 - 1;
        iVar11 = iVar12;
      } while (uVar8 != 0);
    }
    if (0 < iVar11) {
      uVar8 = (ulonglong)iVar11;
      do {
        iVar11 = iVar11 + -1;
        uVar8 = uVar8 - 1;
        if (5 < (byte)LogNetTraffic._0_1_) {
          if ((0xff < uVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\Util\\SequenceHistory.h"
                                 ,0x72,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        }
        if ((0xff < uVar8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\Util\\SequenceHistory.h"
                               ,0x72,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = (param_1->History).Storage[uVar8 >> 5];
        piVar1 = &param_2->__this->LastNotifiedPacketId;
        *piVar1 = *piVar1 + 1;
        puVar2 = &param_2->__this->OutTotalNotifiedPackets;
        *puVar2 = *puVar2 + 1;
        puVar2 = &((param_2->__this->Driver).field0_0x0.DebugPtr)->OutTotalNotifiedPackets;
        *puVar2 = *puVar2 + 1;
        pUVar4 = param_2->__this;
        if (((ushort)pUVar4->LastNotifiedPacketId & 0x3fff) == uVar7) {
          if ((1 << ((byte)uVar8 & 0x1f) & uVar9) == 0) {
            UNetConnection::ReceivedNak(pUVar4,pUVar4->LastNotifiedPacketId);
          }
          else {
            UNetConnection::ReceivedAck
                      (pUVar4,pUVar4->LastNotifiedPacketId,param_2->ChannelsToClose);
          }
        }
        else {
          if (2 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_LastNotifiedPac_1519ce370,
                       (FLogCategoryBase *)&LogNet);
          }
          pUVar4 = param_2->__this;
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (&local_68,AckSequenceMismatch);
          UNetConnection::Close(pUVar4,&local_68);
          if (local_68.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
            (**(code **)((longlong)local_68.NextResult + -0x10))
                      ((longlong)local_68.NextResult + -0x10);
          }
          if (local_68.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.ErrorContext.Data.AllocatorInstance.Data);
          }
        }
        uVar7 = uVar7 + 1 & 0x3fff;
      } while (0 < iVar11);
    }
    uVar7 = (param_1->AckedSeq).Value;
    (this->OutAckSeq).Value = uVar7;
    uVar3 = (this->WaitingForFlushSeqAck).Value;
    if ((uVar7 != uVar3) && ((uVar7 - uVar3 & 0x3fff) < 0x2000)) {
      (this->WaitingForFlushSeqAck).Value = uVar7;
    }
  }
  return;
}

// ResolveUField<FProperty> @ 147fa03f0

FProperty * __cdecl ResolveUField<FProperty>(FFieldClass *param_1,UPackage *param_2,FName param_3)

{
  return (FProperty *)0x0;
}

// ResolveUField<UFunction> @ 147fa0400

UFunction * __cdecl ResolveUField<UFunction>(UClass *param_1,UPackage *param_2,FName param_3)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  FName local_res18 [2];
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_res18[0] = param_3;
  pFVar1 = FName::ToString(local_res18,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_147fa0444;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_147fa0444:
  pUVar3 = Z_Construct_UClass_UFunction_NoRegister();
  pUVar4 = (UFunction *)StaticFindObject(pUVar3,(UObject *)param_2,&local_28,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar4;
}

// ResolveUFunctionImpl<FProperty> @ 147fa0490

FProperty * __cdecl ResolveUFunctionImpl<FProperty>(FName param_1)

{
  return (FProperty *)0x0;
}

// ResolveUFunctionImpl<UFunction> @ 147fa04a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFunction * __cdecl ResolveUFunctionImpl<UFunction>(FName param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UFunction *pUVar8;
  size_t sVar9;
  longlong lVar10;
  FName local_res8;
  FScriptContainerElement *local_58;
  undefined4 uStack_4c;
  FString local_48;
  TStringView<wchar_t> local_38;
  TObjectIterator<UPackage> local_28;
  
  pUVar8 = (UFunction *)0x0;
  local_res8 = param_1;
  FName::ToString(&local_res8,&local_48);
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
  GetObjectsOfClass(pUVar7,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    do {
      TObjectIterator<UPackage>::Advance(&local_28);
      lVar10 = (longlong)local_28.Index;
      if (((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) ||
         (pUVar8 != (UFunction *)0x0)) {
        if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        return pUVar8;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UFunction *)(*pcVar2)();
        return pUVar8;
      }
    } while ((*(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                       0x2c) & 0x10) == 0);
    if (local_48.Data.ArrayNum == 0) {
      local_58 = (FScriptContainerElement *)0x15060d16c;
LAB_147fa05a5:
      sVar9 = wcslen((wchar_t *)local_58);
      iVar6 = (int)sVar9;
    }
    else {
      iVar6 = 0;
      local_58 = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147fa05a5;
    }
    lVar10 = (longlong)local_28.Index;
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UFunction *)(*pcVar2)();
      return pUVar8;
    }
    pUVar1 = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    pUVar7 = Z_Construct_UClass_UFunction_NoRegister();
    local_38._12_4_ = uStack_4c;
    local_38.Size = iVar6;
    local_38.DataPtr = (wchar_t *)local_58;
    pUVar8 = (UFunction *)StaticFindObject(pUVar7,pUVar1,&local_38,None);
  } while( true );
}

// StaticEnum<enum_EMeshApproximationBaseCappingType> @ 147fa2e00

UEnum * __cdecl StaticEnum<enum_EMeshApproximationBaseCappingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType,(UObject *)pUVar1,
                       L"EMeshApproximationBaseCappingType");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton;
}

// StaticEnum<enum_EMeshApproximationGroundPlaneClippingPolicy> @ 147fa2e40

UEnum * __cdecl StaticEnum<enum_EMeshApproximationGroundPlaneClippingPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy,
                       (UObject *)pUVar1,L"EMeshApproximationGroundPlaneClippingPolicy");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton;
}

// StaticEnum<enum_EMeshApproximationSimplificationPolicy> @ 147fa2e80

UEnum * __cdecl StaticEnum<enum_EMeshApproximationSimplificationPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy,
                       (UObject *)pUVar1,L"EMeshApproximationSimplificationPolicy");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton;
}

// StaticEnum<enum_EMeshApproximationType> @ 147fa2ec0

UEnum * __cdecl StaticEnum<enum_EMeshApproximationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationType,(UObject *)pUVar1,
                       L"EMeshApproximationType");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton;
}

// StaticEnum<enum_EMeshApproximationUVGenerationPolicy> @ 147fa2f00

UEnum * __cdecl StaticEnum<enum_EMeshApproximationUVGenerationPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy,
                       (UObject *)pUVar1,L"EMeshApproximationUVGenerationPolicy");
  }
  return Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton;
}

// StaticEnum<enum_EMeshLODSelectionType> @ 147fa2f40

UEnum * __cdecl StaticEnum<enum_EMeshLODSelectionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshLODSelectionType,(UObject *)pUVar1,
                       L"EMeshLODSelectionType");
  }
  return Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton;
}

// StaticEnum<enum_EMeshMergeType> @ 147fa2f80

UEnum * __cdecl StaticEnum<enum_EMeshMergeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshMergeType,(UObject *)pUVar1,L"EMeshMergeType");
  }
  return Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton;
}

// StaticEnum<enum_EOccludedGeometryFilteringPolicy> @ 147fa2fc0

UEnum * __cdecl StaticEnum<enum_EOccludedGeometryFilteringPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy,(UObject *)pUVar1,
                       L"EOccludedGeometryFilteringPolicy");
  }
  return Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton;
}

// StaticEnum<enum_EStaticMeshReductionTerimationCriterion> @ 147fa3000

UEnum * __cdecl StaticEnum<enum_EStaticMeshReductionTerimationCriterion>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion,
                       (UObject *)pUVar1,L"EStaticMeshReductionTerimationCriterion");
  }
  return Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton;
}

// StaticEnum<enum_EUVOutput> @ 147fa3040

UEnum * __cdecl StaticEnum<enum_EUVOutput>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUVOutput.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EUVOutput.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EUVOutput,(UObject *)pUVar1,L"EUVOutput");
  }
  return Z_Registration_Info_UEnum_EUVOutput.OuterSingleton;
}

// StaticEnum<enum_EVertexPaintAxis> @ 147fa3080

UEnum * __cdecl StaticEnum<enum_EVertexPaintAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVertexPaintAxis,(UObject *)pUVar1,
                       L"EVertexPaintAxis");
  }
  return Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton;
}

// StaticEnum<enum_ELandscapeCullingPrecision::Type> @ 147fa30c0

UEnum * __cdecl StaticEnum<enum_ELandscapeCullingPrecision::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision,(UObject *)pUVar1,
                       L"ELandscapeCullingPrecision");
  }
  return Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton;
}

// StaticEnum<enum_EMeshFeatureImportance::Type> @ 147fa3100

UEnum * __cdecl StaticEnum<enum_EMeshFeatureImportance::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMeshFeatureImportance,(UObject *)pUVar1,
                       L"EMeshFeatureImportance");
  }
  return Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton;
}

// StaticEnum<enum_EProxyNormalComputationMethod::Type> @ 147fa3140

UEnum * __cdecl StaticEnum<enum_EProxyNormalComputationMethod::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod,(UObject *)pUVar1,
                       L"EProxyNormalComputationMethod");
  }
  return Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton;
}

// __builtin_array_init_helper<FRPCDoSDetection::FLightweightRPCTracking::FLightweightRPCEntry> @ 147fa3180

void __cdecl
__builtin_array_init_helper<FRPCDoSDetection::FLightweightRPCTracking::FLightweightRPCEntry>
          (FLightweightRPCEntry *param_1,ulong64 param_2)

{
  uint *puVar1;
  
  if (param_2 != 0) {
    puVar1 = &(param_1->Name).Number;
    do {
      *(undefined8 *)(puVar1 + -3) = 0;
      ((FName *)(puVar1 + -1))->ComparisonIndex = 0;
      ((FName *)(puVar1 + -1))->Number = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// __builtin_array_init_helper<FRPCDoSCounters> @ 147fa31b0

void __cdecl __builtin_array_init_helper<FRPCDoSCounters>(FRPCDoSCounters *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    param_1->RPCCounter = 0;
    param_1->AccumRPCTime = 0.0;
    param_1 = param_1 + 1;
  }
  return;
}

// get<1,TTuple<FString,int>_&> @ 147fa31e0

int * __cdecl get<1,TTuple<FString,int>_&>(TTuple<FString,int> *param_1)

{
  return (int *)&param_1->field_0x10;
}

// get<0,TTuple<FString,int>_&> @ 147fa31f0

FString * __cdecl get<0,TTuple<FString,int>_&>(TTuple<FString,int> *param_1)

{
  return (FString *)param_1;
}

// ~TFunction_OwnedObject<`FModelSceneProxy::FModelSceneProxy'::__l2::<lambda_1>,1,0> @ 147fa77d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModelSceneProxy::FModelSceneProxy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FModelSceneProxy::FModelSceneProxy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FModelSceneProxy__QEAA_PEAVUModelComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::<lambda_1>,1,0> @ 147fa77f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FMaterialParameterCollectionInstanceResource::GameThread_Destroy_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::__l2::<lambda_1>,1,1> @ 147fa7810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<`FNaniteVisualizationData::Pick'::__l2::<lambda_1>,1,1> @ 147fa7830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNaniteVisualizationData::Pick'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNaniteVisualizationData::Pick_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNaniteVisualizationData::Pick'::`2'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FUniformParameterOverrides::SetTextureOverride'::__l2::<lambda_1>,1,1> @ 147fa7850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUniformParameterOverrides::SetTextureOverride'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FUniformParameterOverrides::SetTextureOverride_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUniformParameterOverrides::SetTextureOverride'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMaterialParameterCollection::UpdateDefaultResource'::__l2::<lambda_1>,1,1> @ 147fa7870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialParameterCollection::UpdateDefaultResource'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMaterialParameterCollection::UpdateDefaultResource_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialParameterCollection::UpdateDefaultResource'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMaterialParameterCollection::BeginDestroy'::__l5::<lambda_1>,1,1> @ 147fa7890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialParameterCollection::BeginDestroy'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMaterialParameterCollection::BeginDestroy_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialParameterCollection::BeginDestroy'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`MeshPaintVisualize::SetTextureAsset'::__l5::<lambda_1>,1,0> @ 147fa78b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`MeshPaintVisualize::SetTextureAsset'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_MeshPaintVisualize::SetTextureAsset_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`MeshPaintVisualize::SetTextureAsset'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FModelSceneProxy::FElementInfo::FElementInfo'::__l11::<lambda_1>,1,1> @ 147fa78d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModelSceneProxy::FElementInfo::FElementInfo'::__l11::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FModelSceneProxy::FElementInfo::FElementInfo_::__l11::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L____0FElementInfo_FModelSceneProxy__QEAA_AEBVFModelElement__PEBVFLocalVertexFactory__H_Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNetConnection::InitHandler'::__l18::<lambda_2>,1,0> @ 147fa78f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitHandler'::__l18::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UNetConnection::InitHandler_::__l18::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitHandler'::`18'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_2>,1,0> @ 147fa7910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UNetConnection::InitBase_::__l36::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_3>,1,0> @ 147fa7930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_3>,1,0>::
~TFunction_OwnedObject<_UNetConnection::InitBase_::__l36::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_3>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_4>,1,0> @ 147fa7950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_4>,1,0>::
~TFunction_OwnedObject<_UNetConnection::InitBase_::__l36::<lambda_4>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_4>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_5>,1,0> @ 147fa7970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_5>,1,0>::
~TFunction_OwnedObject<_UNetConnection::InitBase_::__l36::<lambda_5>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_5>,1,0>::_vftable_;
  return;
}

// ~TScopeGuard<`UNetConnection::ReceivedPacket'::__l164::<lambda_3>_> @ 147fa7ba0

void __thiscall
ScopeExitSupport::TScopeGuard<`UNetConnection::ReceivedPacket'::__l164::<lambda_3>_>::
~TScopeGuard<_UNetConnection::ReceivedPacket_::__l164::<lambda_3>_>(void *this)

{
  longlong lVar1;
  FRPCDoSDetection *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  lVar1 = *(longlong *)((longlong)this + 8);
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  **(double **)this = dVar3;
  this_00 = *(FRPCDoSDetection **)(lVar1 + 0x1ef0);
  if (((this_00 != (FRPCDoSDetection *)0x0) && (**(char **)((longlong)this + 0x10) != '\0')) &&
     ((*(uint *)(lVar1 + 0xfc) >> 1 & 1) == 0)) {
    if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((this_00->PacketScopePrivate)._padding_ == '\0'))
    {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1192164650855169024>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                         ,0x400,"GRPCDoSScopeDebugging == 0 || PacketScopePrivate.IsActive()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this_00->PacketScopePrivate).bPacketContainsRPC != false) {
      FRPCDoSDetection::PostReceivedRPCPacket(this_00,dVar3);
    }
    this_00->ReceivedPacketEndTime = dVar3;
    if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((this_00->PacketScopePrivate)._padding_ == '\0'))
    {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1192164650855169127>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                         ,0x399,"GRPCDoSScopeDebugging == 0 || bScopeActive != bInVal");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this_00->PacketScopePrivate)._padding_ = '\0';
    (this_00->PacketScopePrivate).bPacketContainsRPC = false;
    (this_00->PacketScopePrivate).ReceivedPacketStartTime = 0.0;
    if (UE::Net::GRPCDoSScopeDebugging != 0) {
      if ((this_00->SequentialRPCScopePrivate)._padding_ != '\0') {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855169381>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x29b,
                           "GRPCDoSScopeDebugging == 0 || !SequentialRPCScopePrivate.IsActive()");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((UE::Net::GRPCDoSScopeDebugging != 0) &&
         ((char)(this_00->TickScopePrivate)._padding_ == '\0')) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855169380>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x29c,"GRPCDoSScopeDebugging == 0 || TickScopePrivate.IsActive()");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// ~PacketHandler @ 147fa9490

void __thiscall PacketHandler::~PacketHandler(PacketHandler *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Aggregator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Provider).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReliabilityComponent).SharedReferenceCount.ReferenceController);
  pTVar1 = (this->QueuedConnectionlessPackets).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->QueuedConnectionlessPackets).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->QueuedConnectionlessPackets).Tail;
  }
  pFVar2 = (this->BufferedConnectionlessPackets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pTVar1 = (this->QueuedHandlerPackets).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->QueuedHandlerPackets).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->QueuedHandlerPackets).Tail;
  }
  pTVar1 = (this->QueuedRawPackets).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->QueuedRawPackets).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->QueuedRawPackets).Tail;
  }
  pTVar1 = (this->QueuedPackets).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->QueuedPackets).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->QueuedPackets).Tail;
  }
  pFVar2 = (this->BufferedPackets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EncryptionComponent).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<HandlerComponent,1>,int>
            ((TSharedPtr<HandlerComponent,1> *)(this->HandlerComponents).AllocatorInstance.Data,
             (this->HandlerComponents).ArrayNum);
  pFVar2 = (this->HandlerComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FBitReader::~FBitReader(&this->IncomingPacket);
  FBitWriter::~FBitWriter(&this->OutgoingPacket);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AddHandlerDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HandshakeCompleteDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LowLevelSendDel);
  return;
}

// operator<< @ 147faa500

FArchive * __cdecl operator<<(FArchive *param_1,FBspNode *param_2)

{
  ushort *puVar1;
  FBspNode_u_36 *pFVar2;
  int *piVar3;
  ushort *puVar4;
  int *piVar5;
  uchar *puVar6;
  uchar *puVar7;
  uint *puVar8;
  
  UE::Math::operator<<(param_1,&param_2->Plane);
  piVar5 = &param_2->iVertPool;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &param_2->iSurf;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &param_2->iVertexIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->ComponentIndex;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->ComponentNodeIndex;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  piVar5 = &param_2->ComponentElementIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar2 = &param_2->field7_0x24;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&pFVar2->iBack);
    }
  }
  else {
    pFVar2->iChild[0] = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &param_2->iFront;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &param_2->iPlane;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &param_2->iCollisionBound;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->iZone,1);
  }
  else {
    param_2->iZone[0] = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->iZone + 1,1);
  }
  else {
    param_2->iZone[1] = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumVertices,1);
  }
  else {
    param_2->NumVertices = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar6 = &param_2->NodeFlags;
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,1);
  }
  else {
    *puVar6 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar5 = param_2->iLeaf;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = param_2->iLeaf + 1;
  puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    *puVar6 = *puVar6 & 0x1f;
  }
  return param_1;
}

// operator<< @ 147faa960

FArchive * __cdecl operator<<(FArchive *param_1,FBspSurf *param_2)

{
  uint *puVar1;
  int *piVar2;
  float *pfVar3;
  uint *puVar4;
  int *piVar5;
  float *pfVar6;
  
  (**(code **)(*(longlong *)param_1 + 0x150))();
  puVar1 = &param_2->PolyFlags;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  piVar2 = &param_2->pBase;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->vNormal;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->vTextureU;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->vTextureV;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->iBrushPoly;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->Actor);
  UE::Math::operator<<(param_1,&param_2->Plane);
  pfVar3 = &param_2->LightMapScale;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->iLightmassIndex;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar5 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return param_1;
}

// operator<< @ 147faac00

FArchive * __cdecl operator<<(FArchive *param_1,FDepecatedModelVertex *param_2)

{
  UE::Math::operator<<(param_1,&param_2->Position);
  operator<<(param_1,&param_2->TangentX);
  operator<<(param_1,&param_2->TangentZ);
  UE::Math::operator<<(param_1,&param_2->TexCoord);
  UE::Math::operator<<(param_1,&param_2->ShadowTexCoord);
  return param_1;
}

// operator<< @ 147faac60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchive * __cdecl operator<<(FArchive *param_1,FModelVertex *param_2)

{
  int iVar1;
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  <unnamed_type_Vector> local_res8 [2];
  
  UE::Math::operator<<(param_1,&param_2->Position);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if (iVar1 < 0x1a) {
    operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&local_res8[0]._s_0);
    auVar2 = pmovzxbd(in_XMM1,local_res8[0].Packed);
    fVar3 = (float)auVar2._8_4_ * _UNK_151820648 + _UNK_15076c668;
    *(ulonglong *)&(param_2->TangentX).field0_0x0 =
         CONCAT44((float)auVar2._4_4_ * _UNK_151820644 + _UNK_15076c664,
                  (float)auVar2._0_4_ * ___xmm_3c0080813c0080813c0080813c008081 +
                  ___xmm_bf800000bf800000bf800000bf800000);
    (param_2->TangentX).field0_0x0._s_0.Z = fVar3;
    operator<<(param_1,(FDeprecatedSerializedPackedNormal *)&local_res8[0]._s_0);
    auVar2 = pmovzxbd(auVar2,local_res8[0].Packed);
    fVar3 = (float)auVar2._4_4_ * _UNK_151820644 + _UNK_15076c664;
    fVar4 = (float)auVar2._8_4_ * _UNK_151820648 + _UNK_15076c668;
    fVar5 = (float)auVar2._12_4_ * _UNK_15182064c + _UNK_15076c66c;
    (param_2->TangentZ).field0_0x0._s_0.X =
         (float)auVar2._0_4_ * ___xmm_3c0080813c0080813c0080813c008081 +
         ___xmm_bf800000bf800000bf800000bf800000;
    (param_2->TangentZ).field0_0x0._s_0.Y = fVar3;
    (param_2->TangentZ).field0_0x0._s_0.Z = fVar4;
    (param_2->TangentZ).field0_0x0._s_0.W = fVar5;
  }
  else {
    UE::Math::operator<<(param_1,&param_2->TangentX);
    UE::Math::operator<<(param_1,&param_2->TangentZ);
  }
  UE::Math::operator<<(param_1,&param_2->TexCoord);
  UE::Math::operator<<(param_1,&param_2->ShadowTexCoord);
  return param_1;
}

// operator<< @ 147faad40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchive * __cdecl operator<<(FArchive *param_1,FMorphTargetDelta *param_2)

{
  uint *puVar1;
  FArchive *pFVar2;
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  float fVar4;
  <unnamed_type_Vector> local_res8 [2];
  
  if ((*(int *)&param_1->field_0x40 < 0x15c) && ((param_1->field_0x28 & 1) != 0)) {
    pFVar2 = UE::Math::operator<<(param_1,&param_2->PositionDelta);
    pFVar2 = operator<<(pFVar2,(FDeprecatedSerializedPackedNormal *)&local_res8[0]._s_0);
    operator<<(pFVar2,&param_2->SourceIdx);
    auVar3 = pmovzxbd(in_XMM1,local_res8[0].Packed);
    fVar4 = (float)auVar3._8_4_ * _UNK_151820648 + _UNK_15076c668;
    *(ulonglong *)&(param_2->TangentZDelta).field0_0x0 =
         CONCAT44((float)auVar3._4_4_ * _UNK_151820644 + _UNK_15076c664,
                  (float)auVar3._0_4_ * ___xmm_3c0080813c0080813c0080813c008081 +
                  ___xmm_bf800000bf800000bf800000bf800000);
    (param_2->TangentZDelta).field0_0x0._s_0.Z = fVar4;
    return param_1;
  }
  pFVar2 = UE::Math::operator<<(param_1,&param_2->PositionDelta);
  pFVar2 = UE::Math::operator<<(pFVar2,&param_2->TangentZDelta);
  puVar1 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&param_2->SourceIdx,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,&param_2->SourceIdx);
    }
  }
  else {
    param_2->SourceIdx = *puVar1;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  return param_1;
}

// operator<< @ 147faae40

FArchive * __cdecl operator<<(FArchive *param_1,FMorphTargetLODModel *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FArchive *pFVar4;
  bool local_res8 [8];
  FString local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  if ((param_1->field_0x2b & 1) != 0) {
    return param_1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
    if (iVar3 < 0x17) {
      pFVar4 = TArrayPrivateFriend::Serialize<FMorphTargetDelta,TSizedDefaultAllocator<32>_>
                         (param_1,&param_2->Vertices);
      operator<<(pFVar4,&param_2->NumBaseMeshVerts);
      param_2->bGeneratedByEngine = false;
      goto LAB_147faafc5;
    }
    if (((param_1->field_0x28 & 1) != 0) &&
       (iVar3 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
       iVar3 < 6)) {
      pFVar4 = TArrayPrivateFriend::Serialize<FMorphTargetDelta,TSizedDefaultAllocator<32>_>
                         (param_1,&param_2->Vertices);
      pFVar4 = operator<<(pFVar4,&param_2->NumBaseMeshVerts);
      TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                (pFVar4,&param_2->SectionIndices);
      param_2->bGeneratedByEngine = false;
      goto LAB_147faafc5;
    }
  }
  if (((param_1->field_0x29 & 1) == 0) ||
     (iVar3 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID),
     iVar3 < 8)) {
LAB_147faaf86:
    TArrayPrivateFriend::Serialize<FMorphTargetDelta,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->Vertices);
    if ((param_1->field_0x28 & 1) != 0) {
      param_2->NumVertices = (param_2->Vertices).ArrayNum;
    }
  }
  else {
    if ((*(longlong *)&param_1->field_0x68 == 0) ||
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
      local_res8[0] = false;
    }
    else {
      local_res8[0] = true;
    }
    operator<<(param_1,local_res8);
    if (local_res8[0] == false) goto LAB_147faaf86;
    param_2->NumVertices = (param_2->Vertices).ArrayNum;
    operator<<(param_1,&param_2->NumVertices);
  }
  pFVar4 = operator<<(param_1,&param_2->NumBaseMeshVerts);
  pFVar4 = TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                     (pFVar4,&param_2->SectionIndices);
  operator<<(pFVar4,&param_2->bGeneratedByEngine);
LAB_147faafc5:
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar3 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     0x9d < iVar3)) {
    if ((*(longlong *)&param_1->field_0x68 == 0) ||
       ((*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0 ||
        ((param_1->field_0x28 & 4) == 0)))) {
      operator<<(param_1,&param_2->SourceFilename);
    }
    else {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      operator<<(param_1,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FString::Empty(&param_2->SourceFilename);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    iVar3 = FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix.Data.ArrayNum + -1;
    FVar1.Data = FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix.Data.AllocatorInstance.
                 Data;
    if (FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    bVar2 = FString::StartsWith(&param_2->SourceFilename,(wchar_t *)FVar1.Data,iVar3,IgnoreCase);
    if (bVar2) {
      param_2->bGeneratedByEngine = true;
      FString::Empty(&param_2->SourceFilename);
    }
  }
  return param_1;
}

// operator<< @ 147fab0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FZoneProperties *param_2)

{
  FZoneSet *pFVar1;
  float *pfVar2;
  ulong64 *puVar3;
  float *pfVar4;
  FArchive *this;
  
  this = (FArchive *)(**(code **)(*(longlong *)param_1 + 0x168))();
  pFVar1 = &param_2->Connectivity;
  puVar3 = (ulong64 *)**(longlong **)&this->field_0x8;
  if ((ulong64 *)(*(longlong **)&this->field_0x8)[1] < puVar3 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,&pFVar1->MaskBits);
    }
  }
  else {
    pFVar1->MaskBits = *puVar3;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
  }
  pFVar1 = &param_2->Visibility;
  puVar3 = (ulong64 *)**(longlong **)&this->field_0x8;
  if ((ulong64 *)(*(longlong **)&this->field_0x8)[1] < puVar3 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,&pFVar1->MaskBits);
    }
  }
  else {
    pFVar1->MaskBits = *puVar3;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
  }
  pfVar2 = &param_2->LastRenderTime;
  pfVar4 = (float *)**(undefined8 **)&this->field_0x8;
  if ((float *)(*(undefined8 **)&this->field_0x8)[1] < pfVar4 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar4;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  return param_1;
}

// operator<< @ 147fab1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchive * __cdecl operator<<(FArchive *param_1,FModelVertexBuffer *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FArchive *pFVar16;
  longlong lVar17;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar18;
  undefined4 *puVar19;
  FScriptContainerElement *pFVar20;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  TArray<FDepecatedModelVertex,TSizedDefaultAllocator<32>_> local_118;
  undefined **local_108;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_100;
  ulonglong local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
    if (iVar14 < 0x17) {
      local_100.Packed = 0;
      local_f8 = 0;
      local_108 = &___7__TResourceArray_UFDepecatedModelVertex___0A___6B_;
      local_f0 = 0;
      TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_>::BulkSerialize
                ((TArray<FDepecatedModelVertex,TMemoryImageAllocator<0>_> *)&local_100.Frozen,
                 param_1,false);
      if ((int)local_f8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_f8 & 0xffffffff);
      }
      piVar1 = &(param_2->Vertices).ArrayMax;
      (param_2->Vertices).ArrayNum = 0;
      iVar14 = (int)local_f8;
      if ((param_2->Vertices).ArrayMax < (int)local_f8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,(int)local_f8,&(param_2->Vertices).AllocatorInstance,0,piVar1);
        iVar14 = (int)local_f8;
      }
      fVar12 = _UNK_15182064c;
      fVar11 = _UNK_151820648;
      fVar10 = _UNK_151820644;
      fVar9 = ___xmm_3c0080813c0080813c0080813c008081;
      fVar8 = _UNK_15076c66c;
      fVar7 = _UNK_15076c668;
      fVar6 = _UNK_15076c664;
      fVar5 = ___xmm_bf800000bf800000bf800000bf800000;
      TVar18 = local_100;
      TVar21 = local_100;
      if ((local_100.Packed & 1) != 0) {
        TVar18.UnfrozenPtr =
             (FScriptContainerElement *)
             ((longlong)&local_100 + ((longlong)local_100.Packed >> 0x18));
        TVar21.UnfrozenPtr =
             (FScriptContainerElement *)
             ((longlong)&local_100 + ((longlong)local_100.Packed >> 0x18));
      }
      puVar19 = (undefined4 *)(TVar18.Packed + 0x10);
      iVar15 = iVar14;
      while( true ) {
        if (iVar15 != iVar14) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FDepecatedModelVertex,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FScriptContainerElement *)(puVar19 + -4) ==
            TVar21.UnfrozenPtr + (longlong)iVar14 * 0x24) break;
        auVar22 = pmovzxbd(in_XMM1,puVar19[-1]);
        pFVar20 = (param_2->Vertices).AllocatorInstance.Data;
        uStack_c0 = puVar19[-2];
        local_98 = *(undefined8 *)(puVar19 + 1);
        auVar23 = pmovzxbd(auVar22,*puVar19);
        uStack_90 = *(undefined8 *)(puVar19 + 3);
        local_c8 = *(undefined8 *)(puVar19 + -4);
        fStack_bc = (float)auVar22._0_4_ * fVar9 + fVar5;
        fStack_b8 = (float)auVar22._4_4_ * fVar10 + fVar6;
        local_e0 = (float)auVar22._8_4_ * fVar11 + fVar7;
        local_e8 = CONCAT44(fStack_b8,fStack_bc);
        fStack_b4 = local_e0;
        local_a8 = (float)auVar23._0_4_ * fVar9 + fVar5;
        fStack_a4 = (float)auVar23._4_4_ * fVar10 + fVar6;
        fStack_a0 = (float)auVar23._8_4_ * fVar11 + fVar7;
        fStack_9c = (float)auVar23._12_4_ * fVar12 + fVar8;
        if (((pFVar20 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar20 + (longlong)*piVar1 * 0x40)) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pFVar16 = (FArchive *)(*pcVar4)();
          return pFVar16;
        }
        iVar15 = (param_2->Vertices).ArrayNum;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1040,&(param_2->Vertices).AllocatorInstance,piVar1);
        }
        (param_2->Vertices).ArrayNum = iVar15 + 1;
        pFVar20 = (param_2->Vertices).AllocatorInstance.Data;
        lVar17 = (longlong)iVar15 * 0x40;
        puVar19 = puVar19 + 9;
        *(undefined8 *)(pFVar20 + lVar17) = local_c8;
        *(ulonglong *)(pFVar20 + lVar17 + 8) = CONCAT44(fStack_bc,uStack_c0);
        *(ulonglong *)(pFVar20 + lVar17 + 0x10) = CONCAT44(fStack_b4,fStack_b8);
        *(undefined8 *)(pFVar20 + lVar17 + 0x10 + 8) = uStack_b0;
        *(ulonglong *)(pFVar20 + lVar17 + 0x20) = CONCAT44(fStack_a4,local_a8);
        *(ulonglong *)(pFVar20 + lVar17 + 0x20 + 8) = CONCAT44(fStack_9c,fStack_a0);
        in_XMM1._8_8_ = uStack_90;
        in_XMM1._0_8_ = local_98;
        *(undefined1 (*) [16])(pFVar20 + lVar17 + 0x30) = in_XMM1;
        iVar15 = (int)local_f8;
      }
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                ((FMemoryImageAllocatorBase *)&local_100.Frozen);
      return param_1;
    }
    if (((param_1->field_0x28 & 1) != 0) &&
       (iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
       iVar14 < 0x1a)) {
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      TArray<FDepecatedModelVertex,TSizedDefaultAllocator<32>_>::BulkSerialize
                (&local_118,param_1,false);
      if (local_118.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_118._8_8_ & 0xffffffff);
      }
      piVar1 = &(param_2->Vertices).ArrayMax;
      (param_2->Vertices).ArrayNum = 0;
      iVar14 = local_118.ArrayNum;
      if ((param_2->Vertices).ArrayMax < local_118.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,local_118.ArrayNum,&(param_2->Vertices).AllocatorInstance,0,piVar1);
        iVar14 = local_118.ArrayNum;
      }
      fVar12 = _UNK_15182064c;
      fVar11 = _UNK_151820648;
      fVar10 = _UNK_151820644;
      fVar9 = ___xmm_3c0080813c0080813c0080813c008081;
      fVar8 = _UNK_15076c66c;
      fVar7 = _UNK_15076c668;
      fVar6 = _UNK_15076c664;
      fVar5 = ___xmm_bf800000bf800000bf800000bf800000;
      pFVar20 = local_118.AllocatorInstance.Data + 0x10;
      pFVar2 = local_118.AllocatorInstance.Data + (longlong)iVar14 * 0x24;
      iVar15 = iVar14;
      while( true ) {
        if (iVar15 != iVar14) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FDepecatedModelVertex,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar20 + -0x10 == pFVar2) break;
        local_88 = *(undefined8 *)(pFVar20 + -0x10);
        uStack_80 = *(undefined4 *)(pFVar20 + -8);
        auVar22 = pmovzxbd(in_XMM1,*(undefined4 *)(pFVar20 + -4));
        pFVar3 = (param_2->Vertices).AllocatorInstance.Data;
        local_58 = *(undefined8 *)(pFVar20 + 4);
        uStack_50 = *(undefined8 *)(pFVar20 + 0xc);
        auVar23 = pmovzxbd(auVar22,*(undefined4 *)pFVar20);
        fStack_7c = (float)auVar22._0_4_ * fVar9 + fVar5;
        fStack_78 = (float)auVar22._4_4_ * fVar10 + fVar6;
        local_d4 = (float)auVar22._8_4_ * fVar11 + fVar7;
        local_dc = CONCAT44(fStack_78,fStack_7c);
        local_68 = (float)auVar23._0_4_ * fVar9 + fVar5;
        fStack_64 = (float)auVar23._4_4_ * fVar10 + fVar6;
        fStack_60 = (float)auVar23._8_4_ * fVar11 + fVar7;
        fStack_5c = (float)auVar23._12_4_ * fVar12 + fVar8;
        fStack_74 = local_d4;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar1 * 0x40)) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pFVar16 = (FArchive *)(*pcVar4)();
          return pFVar16;
        }
        iVar15 = (param_2->Vertices).ArrayNum;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1040,&(param_2->Vertices).AllocatorInstance,piVar1);
        }
        (param_2->Vertices).ArrayNum = iVar15 + 1;
        pFVar3 = (param_2->Vertices).AllocatorInstance.Data;
        lVar17 = (longlong)iVar15 * 0x40;
        pFVar20 = pFVar20 + 0x24;
        *(undefined8 *)(pFVar3 + lVar17) = local_88;
        *(ulonglong *)(pFVar3 + lVar17 + 8) = CONCAT44(fStack_7c,uStack_80);
        *(ulonglong *)(pFVar3 + lVar17 + 0x10) = CONCAT44(fStack_74,fStack_78);
        *(undefined8 *)(pFVar3 + lVar17 + 0x10 + 8) = uStack_70;
        *(ulonglong *)(pFVar3 + lVar17 + 0x20) = CONCAT44(fStack_64,local_68);
        *(ulonglong *)(pFVar3 + lVar17 + 0x20 + 8) = CONCAT44(fStack_5c,fStack_60);
        in_XMM1._8_8_ = uStack_50;
        in_XMM1._0_8_ = local_58;
        *(undefined1 (*) [16])(pFVar3 + lVar17 + 0x30) = in_XMM1;
        iVar15 = local_118.ArrayNum;
      }
      if (local_118.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return param_1;
      }
      FMemory::Free(local_118.AllocatorInstance.Data);
      return param_1;
    }
  }
  TArrayPrivateFriend::Serialize<FModelVertex,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Vertices);
  return param_1;
}

// operator<< @ 147fab690

FArchive * __cdecl operator<<(FArchive *param_1,FPoly *param_2)

{
  uint *puVar1;
  int *piVar2;
  float *pfVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int *piVar6;
  float *pfVar7;
  FArchive *pFVar8;
  
  pFVar8 = UE::Math::operator<<(param_1,&param_2->Base);
  pFVar8 = UE::Math::operator<<(pFVar8,&param_2->Normal);
  pFVar8 = UE::Math::operator<<(pFVar8,&param_2->TextureU);
  UE::Math::operator<<(pFVar8,&param_2->TextureV);
  TArrayPrivateFriend::
  Serialize<UE::Math::TVector<float>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->Vertices);
  puVar1 = &param_2->PolyFlags;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &param_1->field_0x2a;
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->Actor);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->ItemName);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->Material);
  piVar2 = &param_2->iLink;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->iBrushPoly;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &param_2->LightMapScale;
  pfVar7 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar7 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->LightmassSettings);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->RulesetVariation);
  return param_1;
}

// operator<< @ 147fab890

FArchive * __cdecl operator<<(FArchive *param_1,FVert *param_2)

{
  int *piVar1;
  int *piVar2;
  
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
    param_2->pVertex = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->iSide;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->ShadowTexCoord);
  UE::Math::operator<<(param_1,&param_2->BackfaceShadowTexCoord);
  return param_1;
}

// operator() @ 147fadae0

void __thiscall
``FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::<lambda_1>::operator()'::
__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (*(longlong *)((longlong)pvVar1 + 0x18) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!UniformBuffer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                       ,0x4a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(FRHIResource **)((longlong)pvVar1 + 0x20) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x20));
  }
  if (*(FRHIResource **)((longlong)pvVar1 + 0x18) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x18));
  }
  ::operator_delete(pvVar1,0x28);
  return;
}

// operator() @ 147fae4a0

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

void __thiscall
<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  wchar_t *pwVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  UClass *pUVar9;
  wchar_t _C;
  longlong lVar10;
  wchar_t *pwVar11;
  TObjectIterator<UNetConnection> local_38;
  
  bVar4 = true;
  if (0 < param_1->ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)pFVar2;
    }
    if (*pwVar11 == L'\0') {
      bVar4 = false;
    }
    else {
      bVar4 = FToBoolHelper::FromCStringWide(pwVar11);
      if ((!bVar4) && (iVar6 = _finite(0.0), iVar6 != 0)) {
        bVar5 = false;
        _C = *pwVar11;
        while (_C != L'\0') {
          if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar6 = iswspace(_C), iVar6 == 0)) {
            if (_C != L'\0') goto LAB_147fae560;
            break;
          }
          pwVar1 = pwVar11 + 1;
          pwVar11 = pwVar11 + 1;
          _C = *pwVar1;
        }
      }
    }
  }
  goto LAB_147fae59b;
  while( true ) {
    _C = pwVar11[1];
    pwVar11 = pwVar11 + 1;
    bVar5 = true;
    if (_C == L'\0') break;
LAB_147fae560:
    iVar6 = iswspace(_C);
    if (((iVar6 != 0) || (_C == L'.')) || ((!bVar5 && (_C != L'0')))) break;
  }
LAB_147fae59b:
  if (3 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  local_38.Index = 0xffffffff;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ObjectArray.ArrayNum = 0;
  local_38.ObjectArray.ArrayMax = 0;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = UNetConnection::StaticClass();
  GetObjectsOfClass(pUVar9,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    do {
      TObjectIterator<UNetConnection>::Advance(&local_38);
      lVar10 = (longlong)local_38.Index;
      if ((local_38.Index < 0) || (local_38.ObjectArray.ArrayNum <= local_38.Index)) {
        if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
        }
        return;
      }
      uVar8 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar8 = (uint)~local_38.Index >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    } while (*(UNetDriver **)
              (*(longlong *)(local_38.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0x58) !=
             (param_2->NetDriver).field0_0x0.DebugPtr);
    lVar10 = (longlong)local_38.Index;
    uVar8 = 0;
    if (local_38.Index < local_38.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_38.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    *(bool *)(*(longlong *)(local_38.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0x1ee8) =
         bVar4;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// `vcall'{744,{flat}}'_}' @ 147faeae4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UNetConnection::`vcall'{744,{flat}}' }' */

void __thiscall UNetConnection::_vcall__744__flat______(UNetConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147faeae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 147faeaf4

/* [thunk]:public: virtual void * __ptr64 __cdecl ANavigationObjectBase::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ANavigationObjectBase::_vector_deleting_destructor__adjustor_704__
          (ANavigationObjectBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANavigationObjectBase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147faeb08

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNetConnection::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNetConnection::_vector_deleting_destructor__adjustor_40__(UNetConnection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNetConnection *)
                      &this[-1].NetworkCongestionControl.TypedValue.Analyzer.bInitialized,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147faeb18

/* [thunk]:public: virtual void * __ptr64 __cdecl USimulatedClientNetConnection::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USimulatedClientNetConnection::_vector_deleting_destructor__adjustor_40__
          (USimulatedClientNetConnection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USimulatedClientNetConnection *)&this[-1].field_0x1f58,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147faeb30

void * __thiscall
FAsyncTask<FAsyncCardRepresentationTaskWorker>::_scalar_deleting_destructor_
          (FAsyncTask<FAsyncCardRepresentationTaskWorker> *this,uint param_1)

{
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faeb70

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faeba0

void * __thiscall
IBaseDelegateInstance<void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faebd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy,`UNetConnection::InitHandler'::__l15::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faec00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCardRepresentationAsyncQueue,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCardRepresentationAsyncQueue,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faec30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNetConnection,void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNetConnection,void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faec60

void * __thiscall
TBasicNetAnalyticsData<FNetConnAnalyticsVars>::_scalar_deleting_destructor_
          (TBasicNetAnalyticsData<FNetConnAnalyticsVars> *this,uint param_1)

{
  FNetConnAnalyticsVars::~FNetConnAnalyticsVars((FNetConnAnalyticsVars *)&this->field_0x20);
  FNetAnalyticsData::~FNetAnalyticsData((FNetAnalyticsData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faecb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faece0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faed10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_UE::Net::EHandleNetResult_(__cdecl*)(UE::Net::FNetResult_&&),1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AW4EHandleNetResult_Net_UE____QEAUFNetResult_23__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faed50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModelSceneProxy::FModelSceneProxy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FModelSceneProxy__QEAA_PEAVUModelComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faed90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_Destroy'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faedd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faee20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNaniteVisualizationData::Pick'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNaniteVisualizationData::Pick'::`2'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faee60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUniformParameterOverrides::SetTextureOverride'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FUniformParameterOverrides::SetTextureOverride'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faeea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialParameterCollection::UpdateDefaultResource'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialParameterCollection::UpdateDefaultResource'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faeee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialParameterCollection::BeginDestroy'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialParameterCollection::BeginDestroy'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faef20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`MeshPaintVisualize::SetTextureAsset'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`MeshPaintVisualize::SetTextureAsset'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faef60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModelSceneProxy::FElementInfo::FElementInfo'::__l11::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L____0FElementInfo_FModelSceneProxy__QEAA_AEBVFModelElement__PEBVFLocalVertexFactory__H_Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faefa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitHandler'::__l18::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitHandler'::`18'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faefe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_4>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetConnection::InitBase'::__l36::<lambda_5>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_5>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<Nanite::FClearStreamingRequestCount_CS::FParameters>::
_scalar_deleting_destructor_
          (TObject<Nanite::FClearStreamingRequestCount_CS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<Nanite::FScatterUpdates_CS::FParameters>::_scalar_deleting_destructor_
          (TObject<Nanite::FScatterUpdates_CS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<Nanite::FTranscodePageToGPU_CS::FParameters>::_scalar_deleting_destructor_
          (TObject<Nanite::FTranscodePageToGPU_CS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf170

void * __thiscall
TRDGLambdaPass<FReadbackBufferParameters,`Nanite::FReadbackManager::QueueReadback'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 147faf1d0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 147faf230

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 147faf290

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<Nanite::FTranscodePageToGPU_CS>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 147faf2f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetConnAnalyticsData,FNetAnalyticsDataDeleter,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetConnAnalyticsData,FNetAnalyticsDataDeleter,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf330

void * __thiscall
TResourceArray<FDepecatedModelVertex,0>::_scalar_deleting_destructor_
          (TResourceArray<FDepecatedModelVertex,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf380

void * __thiscall
AMeshMergeCullingVolume::_scalar_deleting_destructor_(AMeshMergeCullingVolume *this,uint param_1)

{
  *(undefined ***)this = &___7AMeshMergeCullingVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf3e0

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
ANavigationObjectBase::_scalar_deleting_destructor_(ANavigationObjectBase *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7INavAgentInterface__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FBSPSurfaceStaticLighting::_scalar_deleting_destructor_
          (FBSPSurfaceStaticLighting *this,uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &this[-1].field_0x10;
  *(undefined4 *)&this[-1].MappedRect.field0_0x0 = 0;
  if (this[-1].QuantizedData != (FQuantizedLightmapData *)0x0) {
    FMemory::Free(this[-1].QuantizedData);
  }
  TSparseArray<TSparseSetElement<TTuple<ULightComponent_*,FShadowMapData2D_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULightComponent_*,FShadowMapData2D_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULightComponent_*,FShadowMapData2D_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[-1].ShadowMapData.field_0x10);
  FStaticLightingMesh::~FStaticLightingMesh((FStaticLightingMesh *)&this[-1].ShadowMapData);
  *(undefined ***)puVar1 = &FStaticLightingMapping::_vftable__for__FStaticLightingMapping__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x18 + 4) + -0x1a0 + (longlong)this) =
       &FStaticLightingMapping::_vftable__for__FRefCountedObject__;
  if ((param_1 & 1) != 0) {
    ::operator_delete(puVar1,0x1b8);
  }
  return puVar1;
}

// `scalar_deleting_destructor' @ 147faf500

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
FCardRepresentationAsyncQueue::_scalar_deleting_destructor_
          (FCardRepresentationAsyncQueue *this,uint param_1)

{
  ~FCardRepresentationAsyncQueue(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf540

void * __thiscall
UE::Net::FDefaultFaultHandler::_scalar_deleting_destructor_(FDefaultFaultHandler *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf570

void * __thiscall
FModelSceneProxy::FElementInfo::_scalar_deleting_destructor_(FElementInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IrrelevantLights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (this->VertexFactoryUniformBuffer !=
      (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->VertexFactoryUniformBuffer);
  }
  this->_padding_ = (longlong)&___7FLightCacheInterface__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf5e0

void * __thiscall
FMaterialUniformExpression::_scalar_deleting_destructor_
          (FMaterialUniformExpression *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf650

void * __thiscall
FMaterialUniformExpressionExternalTexture::_scalar_deleting_destructor_
          (FMaterialUniformExpressionExternalTexture *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf6c0

void * __thiscall
FMaterialUniformExpressionExternalTextureBase::_scalar_deleting_destructor_
          (FMaterialUniformExpressionExternalTextureBase *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf730

void * __thiscall
FMaterialUniformExpressionExternalTextureParameter::_scalar_deleting_destructor_
          (FMaterialUniformExpressionExternalTextureParameter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf7a0

void * __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::_scalar_deleting_destructor_
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf810

void * __thiscall
FMaterialUniformExpressionSparseVolumeTextureUniform::_scalar_deleting_destructor_
          (FMaterialUniformExpressionSparseVolumeTextureUniform *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf880

void * __thiscall
FMaterialUniformExpressionTexture::_scalar_deleting_destructor_
          (FMaterialUniformExpressionTexture *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf8f0

void * __thiscall
FMaterialUniformExpressionTextureCollection::_scalar_deleting_destructor_
          (FMaterialUniformExpressionTextureCollection *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf960

void * __thiscall
FMaterialUniformExpressionTextureCollectionParameter::_scalar_deleting_destructor_
          (FMaterialUniformExpressionTextureCollectionParameter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faf9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FModelSceneProxy::_scalar_deleting_destructor_(FModelSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModelSceneProxy__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  DestructItems<FModelSceneProxy::FElementInfo,int>
            ((FElementInfo *)(this->Elements).AllocatorInstance.Data,(this->Elements).ArrayNum);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafa70

void * __thiscall
FNetConnAnalyticsData::_scalar_deleting_destructor_(FNetConnAnalyticsData *this,uint param_1)

{
  FNetConnAnalyticsVars::~FNetConnAnalyticsVars((FNetConnAnalyticsVars *)&this->field_0x20);
  FNetAnalyticsData::~FNetAnalyticsData((FNetAnalyticsData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafac0

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
UE::Net::FNetConnectionFaultRecovery::_scalar_deleting_destructor_
          (FNetConnectionFaultRecovery *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ConfigContext).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNetConnectionFaultRecoveryBase::~FNetConnectionFaultRecoveryBase
            ((FNetConnectionFaultRecoveryBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafb10

void * __thiscall
UE::Net::FNetConnectionFaultRecoveryBase::_scalar_deleting_destructor_
          (FNetConnectionFaultRecoveryBase *this,uint param_1)

{
  ~FNetConnectionFaultRecoveryBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafb50

void * __thiscall
UE::Net::FNetConnectionFaultRecoveryBaseFixLayout::_scalar_deleting_destructor_
          (FNetConnectionFaultRecoveryBaseFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafb80

void * __thiscall
UE::Net::FNetResultHandler::_scalar_deleting_destructor_(FNetResultHandler *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafbb0

void * __thiscall
FRPCDoSDetection::_scalar_deleting_destructor_(FRPCDoSDetection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RPCDoSAnalyticsData).SharedReferenceCount.ReferenceController);
  FRPCDoSAnalyticsVars::~FRPCDoSAnalyticsVars(&this->AnalyticsVars);
  pFVar1 = (this->ActiveRPCTracking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RPCTracking).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RPCTracking).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RPCTracking);
  pFVar1 = (this->CounterPerSecHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRPCDoSStateConfig,int>
            ((FRPCDoSStateConfig *)(this->DetectionSeverity).AllocatorInstance.Data,
             (this->DetectionSeverity).ArrayNum);
  pFVar1 = (this->DetectionSeverity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->KickPlayerFunc != 0) {
    plVar3 = *(longlong **)&(this->KickPlayerFunc).field_0x28;
    plVar4 = (longlong *)&(this->KickPlayerFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar1 = (this->CachedPlayerUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->PlayerUIDFunc != 0) {
    plVar3 = *(longlong **)&(this->PlayerUIDFunc).field_0x28;
    plVar4 = (longlong *)&(this->PlayerUIDFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar1 = (this->CachedAddress).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->AddressFunc != 0) {
    plVar3 = *(longlong **)&(this->AddressFunc).field_0x28;
    plVar4 = (longlong *)&(this->AddressFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar1 = (this->RPCBlockAllowList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRPCDoSState__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafd20

void * __thiscall FRPCDoSState::_scalar_deleting_destructor_(FRPCDoSState *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRPCDoSState__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafd60

void * __thiscall
FRawIndexBuffer16or32::_scalar_deleting_destructor_(FRawIndexBuffer16or32 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafdb0

void * __thiscall HModel::_scalar_deleting_destructor_(HModel *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafdf0

void * __thiscall
UMeshBudgetProjectSettings::_scalar_deleting_destructor_
          (UMeshBudgetProjectSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshBudgetProjectSettings__6B_;
  pFVar1 = (this->StaticMeshBudgetInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafe60

void * __thiscall
UMeshSimplificationSettings::_scalar_deleting_destructor_
          (UMeshSimplificationSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMeshSimplificationSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fafec0

void * __thiscall
UMeshVertexPainterKismetLibrary::_scalar_deleting_destructor_
          (UMeshVertexPainterKismetLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshVertexPainterKismetLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147faff20

void * __thiscall UModel::_scalar_deleting_destructor_(UModel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UModel__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffer).Buffers.ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffer).Buffers.PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
            (&(this->VertexBuffer).Buffers.StaticMeshVertexBuffer);
  pFVar1 = (this->VertexBuffer).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MaterialIndexBuffers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MaterialIndexBuffers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialIndexBuffers);
  pFVar1 = (this->LightmassSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Surfs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Verts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fb0050

void * __thiscall UMorphTarget::_scalar_deleting_destructor_(UMorphTarget *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMorphTarget__6B_;
  DestructItems<FMorphTargetCompressedLODModel,int>
            ((FMorphTargetCompressedLODModel *)(this->CompressedLODModels).AllocatorInstance.Data,
             (this->CompressedLODModels).ArrayNum);
  pFVar1 = (this->CompressedLODModels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMorphTargetLODModel,int>
            ((FMorphTargetLODModel *)(this->MorphLODModels).AllocatorInstance.Data,
             (this->MorphLODModels).ArrayNum);
  pFVar1 = (this->MorphLODModels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 147fb00f0

void * __thiscall
UNavMovementInterface::_scalar_deleting_destructor_(UNavMovementInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 147fb0150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UNetConnection::_scalar_deleting_destructor_(UNetConnection *this,uint param_1)

{
  ~UNetConnection(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147fb01b0

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
USimulatedClientNetConnection::_scalar_deleting_destructor_
          (USimulatedClientNetConnection *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  UNetConnection::~UNetConnection((UNetConnection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f80);
  }
  return this;
}

// AddPass_ClearStreamingRequestCount @ 147fb0510

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

void __cdecl Nanite::AddPass_ClearStreamingRequestCount(FRDGBuilder *param_1,FRDGBufferUAV *param_2)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  FRHIComputeCommandList *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar7;
  FShaderType *pFVar8;
  FName this_01;
  FRDGEventName *pFVar9;
  FShaderParametersMetadata *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 *local_98 [2];
  TIntVector3<int>_u_0 local_88;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  FString local_68;
  TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable> local_58;
  FRDGEventName local_48;
  
  this = (FRHIComputeCommandList *)param_1->_padding_;
  FVar2.GPUMask = *(uint *)&this->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (this,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &___7__TObject_VFParameters_FClearStreamingRequestCount_CS_Nanite___FRDGAllocator__6B_
    ;
  }
  local_98[0] = puVar6;
  if ((((undefined8 **)param_1->_padding_ <= local_98) &&
      (local_98 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar5 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_98[0];
  ((FParameters *)(puVar6 + 2))->OutStreamingRequests = param_2;
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar7 = FClearStreamingRequestCount_CS::GetStaticType();
  if (*(int *)&pFVar7->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<Nanite::FClearStreamingRequestCount_CS>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pFVar8 = (FShaderType *)FClearStreamingRequestCount_CS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_78,pFVar8,0);
  if (local_78.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_01,&local_68);
    FClearStreamingRequestCount_CS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FClearStreamingRequestCount_CS::GetStaticType();
  local_58.ShaderContent = (FClearStreamingRequestCount_CS *)local_78.ShaderContent;
  local_58.ShaderMap = local_78.ShaderMap;
  pFVar9 = FRDGEventName::FRDGEventName(&local_48,1,L"ClearStreamingRequestCount");
  pFVar10 = FClearStreamingRequestCount_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_88._s_0.X = 1;
  local_88._s_0.Y = 1;
  local_88._s_0.Z = 1;
  FComputeShaderUtils::AddPass<Nanite::FClearStreamingRequestCount_CS>
            (param_1,pFVar9,Compute,&local_58,pFVar10,(FParameters *)(puVar6 + 2),
             (TIntVector3<int> *)&local_88._s_0);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRHIComputeCommandList::SetGPUMask(this,FVar2);
  return;
}

// AddPass_ScatterUpdates @ 147fb07f0

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
Nanite::AddPass_ScatterUpdates
          (FRDGBuilder *param_1,FRDGBufferUAV *param_2,
          TArrayView<UE::Math::TIntVector2<unsigned_int>_const_,int> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRDGBuffer *pFVar8;
  undefined8 *puVar9;
  FRDGBufferSRV *pFVar10;
  FGlobalShaderMap *this;
  FGlobalShaderType *pFVar11;
  FShaderType *pFVar12;
  FName this_00;
  FRDGEventName *pFVar13;
  FShaderParametersMetadata *pFVar14;
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined8 *local_e8;
  TIntVector3<int>_u_0 local_e0 [2];
  TIntVector3<int>_u_0 local_c8;
  FRDGBufferSRVDesc local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  uVar3 = param_3->ArrayNum;
  if (uVar3 != 0) {
    uVar2 = (ulonglong)(uVar3 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_res20 = (undefined4)lVar4;
    pFVar8 = CreateStructuredBuffer
                       (param_1,L"Nanite.PackedScatterUpdatesBuffer",8,1 << ((byte)lVar4 & 0x1f),
                        param_3->DataPtr,(longlong)(int)uVar3 << 3,None);
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      *puVar9 = &___7__TObject_VFParameters_FScatterUpdates_CS_Nanite___FRDGAllocator__6B_;
      puVar9[3] = 0;
      puVar9[4] = 0;
    }
    local_e8 = puVar9;
    if ((((undefined8 **)param_1->_padding_ <= &local_e8) &&
        (&local_e8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    local_b8._padding_._0_4_ = 0xffffffff;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_e8;
    local_b8._padding_._4_4_ = 0;
    local_b8._padding_ = 0;
    ((FParameters *)(puVar9 + 2))->NumUpdates = uVar3;
    local_b8._padding_._0_1_ = 0;
    if (((pFVar8->Desc).Usage & DrawIndirect) != None) {
      local_b8._padding_._0_1_ = 0x1c;
    }
    local_b8.Buffer = pFVar8;
    pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_b8);
    puVar9[3] = pFVar10;
    puVar9[4] = param_2;
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
    pFVar11 = FScatterUpdates_CS::GetStaticType();
    if (*(int *)&pFVar11->field_0x50 != 1) {
      local_res18[0] = 0;
      `FGlobalShaderMap::GetShader<Nanite::FScatterUpdates_CS>'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    pFVar12 = (FShaderType *)FScatterUpdates_CS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_98,pFVar12,0);
    if (local_98.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
      ::FName::ToString((FName *)this_00,&local_80);
      FScatterUpdates_CS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FScatterUpdates_CS::GetStaticType();
    local_68.ShaderContent = (FScatterUpdates_CS *)local_98.ShaderContent;
    local_68.ShaderMap = local_98.ShaderMap;
    FComputeShaderUtils::GetGroupCountWrapped
              ((TIntVector3<int> *)&local_e0[0]._s_0,
               (int)(((int)(uVar3 + 0x3f) >> 0x1f & 0x3fU) + uVar3 + 0x3f) >> 6);
    pFVar13 = FRDGEventName::FRDGEventName(&local_58,1,L"ScatterUpdates");
    pFVar14 = FScatterUpdates_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_c8._s_0.Z = local_e0[0]._s_0.Z;
    local_c8._0_8_ = local_e0[0]._0_8_;
    FComputeShaderUtils::AddPass<Nanite::FScatterUpdates_CS>
              (param_1,pFVar13,Compute,&local_68,pFVar14,(FParameters *)(puVar9 + 2),
               (TIntVector3<int> *)&local_c8._s_0);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddSimulatedNetConnections @ 147fb2480

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

void __cdecl
AddSimulatedNetConnections(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  UPackage *pUVar3;
  UNetDriver *this;
  code *pcVar4;
  undefined4 uVar5;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  EInternalObjectFlags EVar11;
  uint uVar12;
  FNameEntryId FVar13;
  UClass *pUVar14;
  undefined4 extraout_var;
  UNetDriver *pUVar15;
  UObject *pUVar16;
  UNetConnection *this_00;
  wchar_t *_Str;
  longlong *plVar17;
  longlong lVar18;
  UNetDriver *this_01;
  undefined1 auStackY_118 [32];
  TObjectIterator<UNetDriver> local_e8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_d0;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar10 = 99;
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar10 = _wtoi(_Str);
  }
  pUVar15 = (UNetDriver *)0x0;
  local_e8.Index = 0xffffffff;
  local_e8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ObjectArray.ArrayNum = 0;
  local_e8.ObjectArray.ArrayMax = 0;
  EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar14 = Z_Construct_UClass_UNetDriver_NoRegister();
  GetObjectsOfClass(pUVar14,&local_e8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    do {
      TObjectIterator<UNetDriver>::Advance(&local_e8);
      lVar18 = (longlong)local_e8.Index;
      this_01 = pUVar15;
      if ((local_e8.Index < 0) || (local_e8.ObjectArray.ArrayNum <= local_e8.Index))
      goto LAB_147fb2661;
      uVar12 = 0;
      if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
        uVar12 = (uint)~local_e8.Index >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(ulonglong *)
               (*(longlong *)(local_e8.ObjectArray.AllocatorInstance.Data + lVar18 * 8) + 0x218);
      FVar13 = FNameEntryId::FromValidEName((EName)local_c0);
    } while (uVar2 != *(uint *)CONCAT44(extraout_var,FVar13.Value));
    lVar18 = (longlong)local_e8.Index;
    uVar12 = 0;
    if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
      uVar12 = (uint)~local_e8.Index >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    cVar9 = (**(code **)(**(longlong **)(local_e8.ObjectArray.AllocatorInstance.Data + lVar18 * 8) +
                        0x3f8))();
  } while (cVar9 == '\0');
  lVar18 = (longlong)local_e8.Index;
  uVar12 = 0;
  if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
    uVar12 = (uint)~local_e8.Index >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = *(UNetDriver **)(local_e8.ObjectArray.AllocatorInstance.Data + lVar18 * 8);
LAB_147fb2661:
  if (local_e8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.ObjectArray.AllocatorInstance.Data);
  }
  if (this_01 != (UNetDriver *)0x0) {
    UWorld::GetPlayerControllerIterator((this_01->World).field0_0x0.DebugPtr,&local_d0);
    while( true ) {
      iVar7 = local_d0.Index;
      pTVar6 = local_d0.Container;
      if ((local_d0.Index < 0) || ((local_d0.Container)->ArrayNum <= local_d0.Index))
      goto LAB_147fb271b;
      if ((local_d0.Index < 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar15 = (UNetDriver *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar6->AllocatorInstance).Data + (longlong)iVar7 * 8));
      if (pUVar15 != (UNetDriver *)0x0) break;
      local_d0.Index = local_d0.Index + 1;
    }
    (**(code **)(pUVar15->_padding_ + 0x7e0))(pUVar15);
LAB_147fb271b:
    if (3 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    while (0 < iVar10) {
      iVar10 = iVar10 + -1;
      pUVar16 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar16,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar14 = USimulatedClientNetConnection::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar14);
      local_b8._8_8_ = pUVar16;
      this_00 = (UNetConnection *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar17 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      (**(code **)(this_00->_padding_ + 0x368))
                (this_00,this_01,3,&((this_01->World).field0_0x0.DebugPtr)->URL);
      (**(code **)(this_00->_padding_ + 0x2f8))(this_00);
      UNetDriver::AddClientConnection(this_01,this_00);
      (**(code **)(this_00->_padding_ + 0x328))(this_00,pUVar15,this_00);
      pUVar3 = (this_01->WorldPackage).field0_0x0.DebugPtr;
      uVar5 = *(undefined4 *)((longlong)&pUVar3->_padding_ + 4);
      (this_00->ClientWorldPackageName).ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&pUVar3->_padding_;
      (this_00->ClientWorldPackageName).Number = uVar5;
      this = (this_00->Driver).field0_0x0.DebugPtr;
      if (this->bIsUsingIris == false) {
        UNetConnection::UpdateAllCachedLevelVisibility(this_00);
      }
      else {
        UNetDriver::UpdateGroupFilterStatusForAllLevelsForConnection(this,this_00->ConnectionHandle)
        ;
      }
    }
  }
  return;
}

// ClipNode @ 147fb9eb0

int __cdecl ClipNode(UModel *param_1,int param_2,TVector<float> *param_3)

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
  FScriptContainerElement FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  
  while( true ) {
    if (param_2 == 0xffffffff) {
      return -1;
    }
    uVar17 = 0;
    if (param_2 < (param_1->Nodes).ArrayNum) {
      uVar17 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar13 = (code *)swi(3);
      iVar16 = (*pcVar13)();
      return iVar16;
    }
    pFVar11 = (param_1->Nodes).AllocatorInstance.Data;
    lVar23 = (longlong)param_2 * 0x40;
    FVar10 = pFVar11[lVar23 + 0x36];
    if (FVar10 != (FScriptContainerElement)0x0) break;
LAB_147fba270:
    param_2 = *(int *)(pFVar11 + lVar23 + 0x2c);
  }
  uVar19 = (ulonglong)*(int *)(pFVar11 + lVar23 + 0x10);
  uVar20 = *(int *)(pFVar11 + lVar23 + 0x10) + -1 + (uint)(byte)FVar10;
  uVar17 = 0;
  if ((int)uVar20 < (param_1->Verts).ArrayNum) {
    uVar17 = ~uVar20 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    iVar16 = (*pcVar13)();
    return iVar16;
  }
  uVar17 = *(uint *)((param_1->Verts).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x18);
  lVar21 = (longlong)(int)uVar17;
  uVar20 = 0;
  if ((int)uVar17 < (param_1->Points).ArrayNum) {
    uVar20 = ~uVar17 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    iVar16 = (*pcVar13)();
    return iVar16;
  }
  pFVar12 = (param_1->Points).AllocatorInstance.Data;
  uVar17 = *(uint *)(pFVar11 + lVar23 + 0x14);
  lVar22 = (longlong)(int)uVar17;
  fVar1 = *(float *)(pFVar12 + lVar21 * 0xc);
  fVar2 = *(float *)(pFVar12 + lVar21 * 0xc + 4);
  fVar3 = *(float *)(pFVar12 + lVar21 * 0xc + 8);
  uVar20 = 0;
  if ((int)uVar17 < (param_1->Surfs).ArrayNum) {
    uVar20 = ~uVar17 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar13 = (code *)swi(3);
    iVar16 = (*pcVar13)();
    return iVar16;
  }
  pFVar12 = (param_1->Surfs).AllocatorInstance.Data;
  lVar21 = 0;
  lVar24 = uVar19 * 0x18;
  fVar4 = *(float *)(pFVar12 + lVar22 * 0x50 + 0x38);
  fVar5 = *(float *)(pFVar12 + lVar22 * 0x50 + 0x30);
  fVar6 = *(float *)(pFVar12 + lVar22 * 0x50 + 0x34);
  fVar25 = 0.0;
  do {
    if ((longlong)(ulonglong)(byte)FVar10 <= lVar21) {
      return param_2;
    }
    uVar20 = (uint)uVar19;
    uVar17 = 0;
    if ((int)uVar20 < (param_1->Verts).ArrayNum) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar13 = (code *)swi(3);
      iVar16 = (*pcVar13)();
      return iVar16;
    }
    uVar17 = *(uint *)((param_1->Verts).AllocatorInstance.Data + lVar24);
    lVar22 = (longlong)(int)uVar17;
    uVar18 = 0;
    if ((int)uVar17 < (param_1->Points).ArrayNum) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar13 = (code *)swi(3);
      iVar16 = (*pcVar13)();
      return iVar16;
    }
    pFVar12 = (param_1->Points).AllocatorInstance.Data;
    fVar7 = *(float *)(pFVar12 + lVar22 * 0xc + 4);
    fVar8 = *(float *)(pFVar12 + lVar22 * 0xc + 8);
    fVar9 = *(float *)(pFVar12 + lVar22 * 0xc);
    fVar14 = fVar6 * (fVar8 - fVar3) - fVar4 * (fVar7 - fVar2);
    fVar3 = fVar4 * (fVar9 - fVar1) - fVar5 * (fVar8 - fVar3);
    fVar1 = fVar5 * (fVar7 - fVar2) - fVar6 * (fVar9 - fVar1);
    fVar1 = ((param_3->field0_0x0)._s_0.Y * fVar3 + (param_3->field0_0x0)._s_0.X * fVar14 +
            (param_3->field0_0x0)._s_0.Z * fVar1) - (fVar3 * fVar7 + fVar14 * fVar9 + fVar1 * fVar8)
    ;
    if (0.0 <= fVar1) {
      if ((0.0 < fVar1) && (fVar25 < 0.0)) goto LAB_147fba270;
    }
    else if (0.0 < fVar25) goto LAB_147fba270;
    uVar19 = (ulonglong)(uVar20 + 1);
    lVar21 = lVar21 + 1;
    lVar24 = lVar24 + 0x18;
    fVar25 = fVar1;
    fVar1 = fVar9;
    fVar2 = fVar7;
    fVar3 = fVar8;
  } while( true );
}

// CopyValueToUniformBuffer @ 147fbb7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CopyValueToUniformBuffer(FValue *param_1,float *param_2,uint param_3)

{
  double dVar1;
  undefined1 uVar2;
  code *pcVar3;
  EValueComponentType EVar4;
  bool bVar5;
  int iVar6;
  FValueTypeDescription *pFVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  float *pfVar15;
  undefined1 auStackY_c8 [32];
  char local_98 [8];
  TValue<float> local_90;
  TValue<int> local_80;
  TValue<double> local_70;
  float local_50 [8];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar7 = UE::Shader::GetValueTypeDescription((param_1->Type).ValueType);
  EVar4 = pFVar7->ComponentType;
  uVar2 = pFVar7->ComponentType;
  if (uVar2 == '\x01') {
    UE::Shader::FValue::AsFloat(param_1,&local_90);
    pfVar14 = param_2 + param_3;
    iVar8 = 0;
    iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
    if (0 < iVar6) {
      uVar13 = 0;
      do {
        if ((3 < uVar13) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("i >= 0 && i < 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                               ,0x13e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *pfVar14 = local_90.Component[uVar13];
        iVar8 = iVar8 + 1;
        pfVar14 = pfVar14 + 1;
        uVar13 = uVar13 + 1;
        iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
      } while (iVar8 < iVar6);
    }
  }
  else if (EVar4 == Int) {
    UE::Shader::FValue::AsInt(param_1,&local_80);
    pfVar14 = param_2 + param_3;
    iVar8 = 0;
    iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
    if (0 < iVar6) {
      uVar13 = 0;
      do {
        if ((3 < uVar13) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("i >= 0 && i < 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                               ,0x13e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *pfVar14 = (float)local_80.Component[uVar13];
        iVar8 = iVar8 + 1;
        pfVar14 = pfVar14 + 1;
        uVar13 = uVar13 + 1;
        iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
      } while (iVar8 < iVar6);
    }
  }
  else if (EVar4 == Bool) {
    UE::Shader::FValue::AsBool(param_1);
    fVar9 = 0.0;
    uVar12 = 0;
    iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
    if (0 < iVar6) {
      pcVar11 = local_98;
      do {
        if ((3 < uVar12) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("i >= 0 && i < 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                               ,0x13e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*pcVar11 != '\0') {
          fVar9 = (float)((uint)fVar9 | 1 << (uVar12 & 0x1f));
        }
        uVar12 = uVar12 + 1;
        pcVar11 = pcVar11 + 1;
        iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
      } while ((int)uVar12 < iVar6);
    }
    uVar12 = param_3 & 0x1f;
    iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
    if ((0x20 < iVar6 + uVar12) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("BufferBitOffset + Value.GetNumComponents ()<= 32u",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                           ,0x3db,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar12 == 0) {
      param_2[param_3 >> 5] = fVar9;
    }
    else {
      param_2[param_3 >> 5] = (float)((uint)param_2[param_3 >> 5] | (int)fVar9 << (sbyte)uVar12);
    }
  }
  else if (EVar4 == Double) {
    UE::Shader::FValue::AsDouble(param_1,&local_70);
    iVar8 = 0;
    local_50[0] = 0.0;
    local_50[1] = 0.0;
    local_50[2] = 0.0;
    local_50[3] = 0.0;
    iVar10 = 0;
    local_50[4] = 0.0;
    local_50[5] = 0.0;
    local_50[6] = 0.0;
    local_50[7] = 0.0;
    iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
    if (0 < iVar6) {
      uVar13 = 0;
      do {
        if ((3 < uVar13) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("i >= 0 && i < 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                               ,0x13e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar1 = local_70.Component[uVar13];
        fVar9 = (float)dVar1;
        iVar10 = iVar10 + 1;
        local_50[uVar13] = fVar9;
        local_50[uVar13 + 4] = (float)(dVar1 - (double)fVar9);
        uVar13 = uVar13 + 1;
        iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
      } while (iVar10 < iVar6);
    }
    pfVar14 = param_2 + param_3;
    iVar10 = 0;
    iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
    if (0 < iVar6) {
      pfVar15 = local_50;
      do {
        fVar9 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        *pfVar14 = fVar9;
        pfVar14 = pfVar14 + 1;
        iVar10 = iVar10 + 1;
        iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
      } while (iVar10 < iVar6);
    }
    iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
    if (0 < iVar6) {
      pfVar15 = local_50 + 4;
      do {
        *pfVar14 = *pfVar15;
        pfVar14 = pfVar14 + 1;
        iVar8 = iVar8 + 1;
        pfVar15 = pfVar15 + 1;
        iVar6 = UE::Shader::FType::GetNumComponents(&param_1->Type);
      } while (iVar8 < iVar6);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1774855081422750722>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                       ,0x402,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeMemberReference @ 147fc66a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMemberReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshApproximationSettings @ 147fc66b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshApproximationSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshBudgetProjectSettings @ 147fc66c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshBudgetProjectSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshInstancingSettings @ 147fc66d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshInstancingSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshMergeCullingVolume @ 147fc66e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshMergeCullingVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshMergingSettings @ 147fc66f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshMergingSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshProxySettings @ 147fc6700

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshProxySettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshReductionSettings @ 147fc6710

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshReductionSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshSimplificationSettings @ 147fc6720

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshSimplificationSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshVertexPainter @ 147fc6730

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshVertexPainter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshVertexPainterKismetLibrary @ 147fc6740

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshVertexPainterKismetLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeModel @ 147fc6750

void __cdecl EmptyLinkFunctionForGeneratedCodeModel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMorphTarget @ 147fc6760

void __cdecl EmptyLinkFunctionForGeneratedCodeMorphTarget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavMovementInterface @ 147fc6770

void __cdecl EmptyLinkFunctionForGeneratedCodeNavMovementInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationObjectBase @ 147fc6780

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationObjectBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetConnection @ 147fc6790

void __cdecl EmptyLinkFunctionForGeneratedCodeNetConnection(void)

{
  return;
}

// FindNearestVertex @ 147fcc190

float __cdecl
FindNearestVertex(UModel *param_1,TVector<float> *param_2,TVector<float> *param_3,float param_4,
                 int param_5,int *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement FVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar13 = __real_bf800000;
joined_r0x000147fcc1c6:
  do {
    uVar9 = param_5;
    if (uVar9 == 0xffffffff) {
      return fVar13;
    }
    uVar6 = 0;
    if ((int)uVar9 < (param_1->Nodes).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar13 = (float)(*pcVar3)();
      return fVar13;
    }
    pFVar1 = (param_1->Nodes).AllocatorInstance.Data;
    lVar8 = (longlong)(int)uVar9 * 0x40;
    param_5 = *(int *)(pFVar1 + lVar8 + 0x24);
    fVar17 = (*(float *)(pFVar1 + lVar8 + 4) * (param_2->field0_0x0)._s_0.Y +
              (param_2->field0_0x0)._s_0.X * *(float *)(pFVar1 + lVar8) +
             *(float *)(pFVar1 + lVar8 + 8) * (param_2->field0_0x0)._s_0.Z) -
             *(float *)(pFVar1 + lVar8 + 0xc);
    if ((((float)((uint)param_4 ^ uVar4) <= fVar17) && (*(int *)(pFVar1 + lVar8 + 0x28) != -1)) &&
       (fVar14 = FindNearestVertex(param_1,param_2,param_3,param_4,*(int *)(pFVar1 + lVar8 + 0x28),
                                   param_6), 0.0 <= fVar14)) {
      param_4 = fVar14;
      fVar13 = fVar14;
    }
    if ((float)((uint)param_4 ^ uVar4) < fVar17) {
      if (param_4 < fVar17) {
        return fVar13;
      }
      if (uVar9 == 0xffffffff) goto joined_r0x000147fcc1c6;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Nodes).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar13 = (float)(*pcVar3)();
          return fVar13;
        }
        pFVar1 = (param_1->Nodes).AllocatorInstance.Data;
        lVar8 = (longlong)(int)uVar9 * 0x40;
        uVar9 = *(uint *)(pFVar1 + lVar8 + 0x14);
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Surfs).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar13 = (float)(*pcVar3)();
          return fVar13;
        }
        pFVar11 = (param_1->Surfs).AllocatorInstance.Data;
        uVar6 = *(uint *)(pFVar11 + (longlong)(int)uVar9 * 0x50 + 0xc);
        lVar10 = (longlong)(int)uVar6;
        uVar7 = 0;
        if ((int)uVar6 < (param_1->Points).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar13 = (float)(*pcVar3)();
          return fVar13;
        }
        pFVar2 = (param_1->Points).AllocatorInstance.Data;
        fVar14 = *(float *)(pFVar2 + lVar10 * 0xc + 8) - (param_2->field0_0x0)._s_0.Z;
        fVar16 = *(float *)(pFVar2 + lVar10 * 0xc + 4) - (param_2->field0_0x0)._s_0.Y;
        fVar15 = *(float *)(pFVar2 + lVar10 * 0xc) - (param_2->field0_0x0)._s_0.X;
        fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
        if (fVar14 < param_4 * param_4) {
          param_4 = SQRT(fVar14);
          *param_6 = *(int *)(pFVar11 + (longlong)(int)uVar9 * 0x50 + 0xc);
          *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(pFVar2 + lVar10 * 0xc);
          (param_3->field0_0x0)._s_0.Z = *(float *)(pFVar2 + lVar10 * 0xc + 8);
          fVar13 = param_4;
        }
        uVar9 = *(uint *)(pFVar1 + lVar8 + 0x10);
        uVar6 = 0;
        if ((int)uVar9 < (param_1->Verts).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar13 = (float)(*pcVar3)();
          return fVar13;
        }
        FVar12 = (FScriptContainerElement)0x0;
        pFVar11 = (param_1->Verts).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18;
        if (pFVar1[lVar8 + 0x36] != (FScriptContainerElement)0x0) {
          do {
            uVar9 = *(uint *)pFVar11;
            lVar10 = (longlong)(int)uVar9;
            uVar6 = 0;
            if ((int)uVar9 < (param_1->Points).ArrayNum) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              fVar13 = (float)(*pcVar3)();
              return fVar13;
            }
            pFVar2 = (param_1->Points).AllocatorInstance.Data;
            fVar14 = *(float *)(pFVar2 + lVar10 * 0xc + 8) - (param_2->field0_0x0)._s_0.Z;
            fVar16 = *(float *)(pFVar2 + lVar10 * 0xc + 4) - (param_2->field0_0x0)._s_0.Y;
            fVar15 = *(float *)(pFVar2 + lVar10 * 0xc) - (param_2->field0_0x0)._s_0.X;
            fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
            if (fVar14 < param_4 * param_4) {
              param_4 = SQRT(fVar14);
              *param_6 = *(uint *)pFVar11;
              *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(pFVar2 + lVar10 * 0xc);
              (param_3->field0_0x0)._s_0.Z = *(float *)(pFVar2 + lVar10 * 0xc + 8);
              fVar13 = param_4;
            }
            pFVar11 = pFVar11 + 0x18;
            FVar12 = (FScriptContainerElement)((char)FVar12 + '\x01');
          } while ((byte)FVar12 < (byte)pFVar1[lVar8 + 0x36]);
        }
        uVar9 = *(uint *)(pFVar1 + lVar8 + 0x2c);
      } while (uVar9 != 0xffffffff);
    }
    if (param_4 < fVar17) {
      return fVar13;
    }
  } while( true );
}

// FindSurf @ 147fccf00

int __cdecl FindSurf(UModel *param_1,TVector<float> *param_2,int param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = __real_38d1b717;
  if (param_3 != -1) {
    fVar10 = (float)((uint)param_4 ^ __xmm_80000000800000008000000080000000);
    do {
      uVar6 = 0;
      if (param_3 < (param_1->Nodes).ArrayNum) {
        uVar6 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (param_1->Nodes).AllocatorInstance.Data;
      lVar7 = (longlong)param_3 * 0x40;
      uVar6 = *(uint *)(pFVar1 + lVar7 + 0x24);
      fVar9 = (*(float *)(pFVar1 + lVar7 + 4) * (param_2->field0_0x0)._s_0.Y +
               *(float *)(pFVar1 + lVar7) * (param_2->field0_0x0)._s_0.X +
              *(float *)(pFVar1 + lVar7 + 8) * (param_2->field0_0x0)._s_0.Z) -
              *(float *)(pFVar1 + lVar7 + 0xc);
      if (fVar10 <= fVar9) {
        if ((*(int *)(pFVar1 + lVar7 + 0x28) != -1) &&
           (iVar5 = FindSurf(param_1,param_2,*(int *)(pFVar1 + lVar7 + 0x28),param_4), iVar5 != -1))
        {
          return iVar5;
        }
        if ((fVar10 < fVar9) && (fVar9 <= param_4)) {
          uVar6 = ClipNode(param_1,param_3,param_2);
          if (uVar6 == 0xffffffff) {
            return (int)param_4;
          }
          uVar8 = 0;
          if ((int)uVar6 < (param_1->Nodes).ArrayNum) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          return *(int *)((param_1->Nodes).AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 0x40 + 0x14);
        }
      }
    } while ((fVar9 <= fVar3) && (param_3 = uVar6, uVar6 != 0xffffffff));
  }
  return -1;
}

// GetAxisAlignedDirection @ 147fd0ef0

TVector<float> * __cdecl
MeshCardRepresentation::GetAxisAlignedDirection(TVector<float> *__return_storage_ptr__,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  float fVar4;
  
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  fVar4 = __real_bf800000;
  if ((param_1 & 1) != 0) {
    fVar4 = __real_3f800000;
  }
  if ((2 < param_1 >> 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector<float> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->field0_0x0).XYZ[param_1 >> 1] = fVar4;
  return __return_storage_ptr__;
}

// GetChannelMode @ 147fd1250

Type __cdecl MeshPaintVisualize::GetChannelMode(void)

{
  return GChannelMode;
}

// GetDebugSurfelDirection @ 147fd1870

int __cdecl MeshCardRepresentation::GetDebugSurfelDirection(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  pTVar1 = CVarCardRepresentationDebugSurfelDirection.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar4 = 4;
      goto LAB_147fd1898;
    }
  }
  lVar4 = 0;
LAB_147fd1898:
  iVar5 = 5;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) < 5) {
    iVar5 = *(int *)((longlong)pTVar1->ShadowedValue + lVar4);
  }
  iVar3 = -1;
  if (-1 < iVar5) {
    iVar3 = iVar5;
  }
  return iVar3;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 147fd28a0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FMeshParticleUniformParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FMeshParticleUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FMeshParticleUniformParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FMeshParticleUniformParameters",
                 L"FMeshParticleUniformParameters",L"MeshParticleVF",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshParticleVertexFactory.h"
                 ,0x1b,0x40,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FMeshParticleUniformParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetIndexedTextureCollection @ 147fd2e20

/* WARNING: Enum "Type": Some values do not have unique names */

UTextureCollection * __cdecl GetIndexedTextureCollection(FMaterial *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UTextureCollection *pUVar3;
  uint uVar4;
  longlong local_28;
  int local_20;
  void *local_18 [2];
  
  (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_28);
  if ((-1 < param_2) && (param_2 < local_20)) {
    uVar4 = 0;
    if (param_2 < local_20) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UTextureCollection *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = *(UTextureCollection **)(local_28 + (longlong)param_2 * 8);
    if (pUVar3 != (UTextureCollection *)0x0) {
      return pUVar3;
    }
  }
  if (`class_UTextureCollection*___ptr64___cdecl_GetIndexedTextureCollection(FMaterial_const&___ptr64,int)'
      ::__l8::bWarnedOnce == false) {
    if (2 < (byte)LogMaterial._0_1_) {
      (**(code **)(param_1->_padding_ + 0x390))(param_1,local_18);
      UE::Logging::Private::BasicLog<3>
                (&`class_UTextureCollection*___ptr64___cdecl_GetIndexedTextureCollection(FMaterial_const&___ptr64,int)'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    `class_UTextureCollection*___ptr64___cdecl_GetIndexedTextureCollection(FMaterial_const&___ptr64,int)'
    ::__l8::bWarnedOnce = true;
  }
  return (UTextureCollection *)0x0;
}

// GetMaterialRenderProxy @ 147fd35a0

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

FMaterialRenderProxy * __cdecl MeshPaintVisualize::GetMaterialRenderProxy(bool param_1,bool param_2)

{
  FName FVar1;
  FName FVar2;
  FNameEntryId FVar3;
  FColoredMaterialRenderProxy *pFVar4;
  undefined4 extraout_var;
  FLinearColor *pFVar5;
  FMaterialRenderProxy *pFVar6;
  UMaterial *pUVar7;
  undefined4 extraout_var_00;
  UMaterial *pUVar8;
  FNameEntryId local_res18;
  uint uStackX_1c;
  FLinearColor_u_0 local_38;
  FLinearColor local_28;
  
  pUVar7 = (UMaterial *)0x0;
  local_38 = FLinearColor::White.field0_0x0;
  if (GChannelMode == Color) {
    pUVar8 = (GEngine->VertexColorViewModeMaterial_ColorOnly).field0_0x0.DebugPtr;
    local_38._0_8_ = ___xmm_000000003f8000003f8000003f800000;
    local_38._8_8_ = _UNK_150689548;
  }
  else if (GChannelMode == Alpha) {
    pUVar8 = (GEngine->VertexColorViewModeMaterial_AlphaAsColor).field0_0x0.DebugPtr;
    local_38._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_38._8_8_ = _UNK_150689648;
  }
  else if (GChannelMode == Red) {
    pUVar8 = (GEngine->VertexColorViewModeMaterial_RedOnly).field0_0x0.DebugPtr;
    local_38._0_8_ = ___xmm_0000000000000000000000003f800000;
    local_38._8_8_ = _UNK_1506894f8;
  }
  else if (GChannelMode == Green) {
    pUVar8 = (GEngine->VertexColorViewModeMaterial_GreenOnly).field0_0x0.DebugPtr;
    local_38._0_8_ = ___xmm_00000000000000003f80000000000000;
    local_38._8_8_ = _UNK_150689508;
  }
  else {
    pUVar8 = pUVar7;
    if (GChannelMode != Blue) goto LAB_147fd3664;
    pUVar8 = (GEngine->VertexColorViewModeMaterial_BlueOnly).field0_0x0.DebugPtr;
    local_38._0_8_ = ___xmm_000000003f8000000000000000000000;
    local_38._8_8_ = _UNK_150689538;
  }
LAB_147fd3664:
  if (GPaintMode == VertexColor) {
    if (pUVar8 != (UMaterial *)0x0) {
      pFVar4 = ::operator_new(0xe0);
      if (pFVar4 != (FColoredMaterialRenderProxy *)0x0) {
        FVar3 = FNameEntryId::FromValidEName((EName)&local_res18);
        local_res18.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
        uStackX_1c = 0;
        pFVar5 = GetSelectionColor(&local_28,&FLinearColor::White,param_1,param_2,true);
        pFVar6 = (FMaterialRenderProxy *)(**(code **)(pUVar8->_padding_ + 0x310))(pUVar8);
        FVar1.Number = uStackX_1c;
        FVar1.ComparisonIndex.Value = local_res18.Value;
        pUVar7 = (UMaterial *)
                 FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                           (pFVar4,pFVar6,pFVar5,FVar1);
      }
      return (FMaterialRenderProxy *)pUVar7;
    }
  }
  else if (GPaintMode == TextureColor) {
    pFVar4 = ::operator_new(0xe0);
    if (pFVar4 != (FColoredMaterialRenderProxy *)0x0) {
      FVar3 = FNameEntryId::FromValidEName((EName)&local_res18);
      local_res18.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
      uStackX_1c = 0;
      pFVar6 = (FMaterialRenderProxy *)
               (**(code **)(((GEngine->TextureColorViewModeMaterial).field0_0x0.DebugPtr)->_padding_
                           + 0x310))();
      FVar2.Number = uStackX_1c;
      FVar2.ComparisonIndex.Value = local_res18.Value;
      pUVar7 = (UMaterial *)
               FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                         (pFVar4,pFVar6,(FLinearColor *)&local_38._s_0,FVar2);
    }
    return (FMaterialRenderProxy *)pUVar7;
  }
  return (FMaterialRenderProxy *)0x0;
}

// GetMinDensity @ 147fd3820

float __cdecl MeshCardRepresentation::GetMinDensity(void)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  pTVar1 = CVarCardRepresentationMinDensity.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_147fd3848;
    }
  }
  lVar3 = 0;
LAB_147fd3848:
  fVar4 = *(float *)((longlong)pTVar1->ShadowedValue + lVar3);
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}

// GetNaniteVisualizationData @ 147fd3a30

FNaniteVisualizationData * __cdecl GetNaniteVisualizationData(void)

{
  if (!GNaniteVisualizationData.bIsInitialized) {
    FNaniteVisualizationData::Initialize(&GNaniteVisualizationData);
    return &GNaniteVisualizationData;
  }
  return &GNaniteVisualizationData;
}

// GetNormalTreshold @ 147fd4070

float __cdecl MeshCardRepresentation::GetNormalTreshold(void)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  pTVar1 = CVarCardRepresentationNormalTreshold.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_147fd4098;
    }
  }
  lVar3 = 0;
LAB_147fd4098:
  fVar4 = *(float *)((longlong)pTVar1->ShadowedValue + lVar3);
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}

// GetShowMode @ 147fd6e70

Type __cdecl MeshPaintVisualize::GetShowMode(void)

{
  return GShowMode;
}

// GetSubstrateBSDFName @ 147fd7b50

FString * __cdecl GetSubstrateBSDFName(FString *__return_storage_ptr__,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  switch(param_1) {
  case '\0':
    FString::FString(__return_storage_ptr__,L"SLAB");
    return __return_storage_ptr__;
  case '\x01':
    FString::FString(__return_storage_ptr__,L"VOLUMETRICFOGCLOUD");
    return __return_storage_ptr__;
  case '\x02':
    FString::FString(__return_storage_ptr__,L"UNLIT");
    return __return_storage_ptr__;
  case '\x03':
    FString::FString(__return_storage_ptr__,L"HAIR");
    return __return_storage_ptr__;
  case '\x04':
    FString::FString(__return_storage_ptr__,L"SINGLELAYERWATER");
    return __return_storage_ptr__;
  case '\x05':
    FString::FString(__return_storage_ptr__,L"EYE");
    return __return_storage_ptr__;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\SubstrateMaterial.cpp"
                     ,0x1a,L"");
  if (!bVar2) {
    FString::FString(__return_storage_ptr__,"");
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FString *)(*pcVar1)();
  return pFVar3;
}

// GetTextureAsset_RenderThread @ 147fd8c60

FRHITexture * __cdecl MeshPaintVisualize::GetTextureAsset_RenderThread(void)

{
  return GTextureRHI_RenderThread;
}

// GetTextureCoordinateIndex @ 147fd8f60

int __cdecl MeshPaintVisualize::GetTextureCoordinateIndex(void)

{
  return GTextureCoordinateIndex;
}

// GetType @ 147fda150

HHitProxyType * __thiscall HModel::GetType(HModel *this)

{
  return &::StaticType;
}

// GetTypeHash @ 147fda160

uint __cdecl GetTypeHash(FMemoryImageMaterialParameterInfo *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FNameEntryId local_18;
  
  uVar1 = (param_1->Name).ComparisonIndex;
  bVar2 = (param_1->Association).Value;
  uVar5 = param_1->Index;
  uVar4 = (param_1->Name).Number;
  uVar3 = GetTypeHash((FNameEntryId)uVar1);
  uVar7 = (uVar4 - uVar5) + uVar3 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar3 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar5 = (uVar4 - uVar7) - uVar3 ^ uVar7 << 0x10;
  uVar4 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar3 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 << 10;
  iVar6 = ((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf) - (uint)bVar2;
  uVar3 = (-0x61c88647 - iVar6) - (uint)bVar2 ^ iVar6 * 0x100;
  uVar5 = (bVar2 - uVar3) - iVar6 ^ uVar3 >> 0xd;
  uVar4 = (iVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  return (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 147fda290

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

uint __cdecl GetTypeHash(FNumericParameterKey *param_1)

{
  EMaterialParameterType EVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  EVar1 = param_1->ParameterType;
  uVar2 = GetTypeHash(&param_1->ParameterInfo);
  iVar3 = uVar2 - EVar1;
  uVar5 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar4 = (EVar1 - uVar5) - iVar3 ^ uVar5 >> 0xd;
  uVar2 = (iVar3 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xf;
}

// GetTypeHash @ 147fda320

uint __cdecl GetTypeHash(FTextureParameterKey *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->TextureIndex;
  uVar1 = GetTypeHash(&param_1->ParameterInfo);
  uVar4 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar3 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar1 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// HasDisabledBandwidthThrottling @ 147fddf20

bool __cdecl NetConnectionHelper::HasDisabledBandwidthThrottling(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarDisableBandwithThrottling.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return 0 < pTVar1->ShadowedValue[1];
    }
  }
  return 0 < pTVar1->ShadowedValue[0];
}

// IsAdditiveBlendMode @ 147fe2280

bool __cdecl IsAdditiveBlendMode(FMaterialShaderParameters *param_1)

{
  return (int)param_1->_padding_ == 3;
}

// IsAdditiveBlendMode @ 147fe2290

bool __cdecl IsAdditiveBlendMode(FMaterial *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  return iVar1 == 3;
}

// IsAdditiveBlendMode @ 147fe22b0

bool __cdecl IsAdditiveBlendMode(UMaterialInterface *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  return iVar1 == 3;
}

// IsAdditiveBlendMode @ 147fe22d0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsAdditiveBlendMode(EBlendMode param_1)

{
  return param_1 == BLEND_Additive;
}

// IsAlphaCompositeBlendMode @ 147fe22e0

bool __cdecl IsAlphaCompositeBlendMode(FMaterialShaderParameters *param_1)

{
  return (int)param_1->_padding_ == 5;
}

// IsAlphaCompositeBlendMode @ 147fe22f0

bool __cdecl IsAlphaCompositeBlendMode(FMaterial *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  return iVar1 == 5;
}

// IsAlphaCompositeBlendMode @ 147fe2310

bool __cdecl IsAlphaCompositeBlendMode(UMaterialInterface *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  return iVar1 == 5;
}

// IsAlphaCompositeBlendMode @ 147fe2330

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsAlphaCompositeBlendMode(EBlendMode param_1)

{
  return param_1 == BLEND_AlphaComposite;
}

// IsAlphaHoldoutBlendMode @ 147fe2340

bool __cdecl IsAlphaHoldoutBlendMode(FMaterialShaderParameters *param_1)

{
  return (int)param_1->_padding_ == 6;
}

// IsAlphaHoldoutBlendMode @ 147fe2350

bool __cdecl IsAlphaHoldoutBlendMode(FMaterial *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  return iVar1 == 6;
}

// IsAlphaHoldoutBlendMode @ 147fe2370

bool __cdecl IsAlphaHoldoutBlendMode(UMaterialInterface *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  return iVar1 == 6;
}

// IsAlphaHoldoutBlendMode @ 147fe2390

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsAlphaHoldoutBlendMode(EBlendMode param_1)

{
  return param_1 == BLEND_AlphaHoldout;
}

// IsDebugMode @ 147fe2590

bool __cdecl MeshCardRepresentation::IsDebugMode(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarCardRepresentationDebug.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// IsMaskedBlendMode @ 147fe2ee0

bool __cdecl IsMaskedBlendMode(FMaterialShaderParameters *param_1)

{
  return (int)param_1->_padding_ == 1;
}

// IsMaskedBlendMode @ 147fe2ef0

bool __cdecl IsMaskedBlendMode(FMaterial *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  return iVar1 == 1;
}

// IsMaskedBlendMode @ 147fe2f10

bool __cdecl IsMaskedBlendMode(UMaterialInterface *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  return iVar1 == 1;
}

// IsMaskedBlendMode @ 147fe2f30

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsMaskedBlendMode(EBlendMode param_1)

{
  return param_1 == BLEND_Masked;
}

// IsModulateBlendMode @ 147fe2f40

bool __cdecl IsModulateBlendMode(FMaterialShaderParameters *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1->_padding_;
  IsSubstrateEnabled();
  return (int)lVar1 == 4;
}

// IsModulateBlendMode @ 147fe2f60

bool __cdecl IsModulateBlendMode(FMaterial *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  IsSubstrateEnabled();
  return iVar1 == 4;
}

// IsModulateBlendMode @ 147fe2f90

bool __cdecl IsModulateBlendMode(UMaterialInterface *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  IsSubstrateEnabled();
  return iVar1 == 4;
}

// IsModulateBlendMode @ 147fe2fc0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsModulateBlendMode(EBlendMode param_1)

{
  IsSubstrateEnabled();
  return param_1 == BLEND_ColoredTransmittanceOnly;
}

// IsOpaqueBlendMode @ 147fe30c0

bool __cdecl IsOpaqueBlendMode(FMaterialShaderParameters *param_1)

{
  return (int)param_1->_padding_ == 0;
}

// IsOpaqueBlendMode @ 147fe30d0

bool __cdecl IsOpaqueBlendMode(FMaterial *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  return iVar1 == 0;
}

// IsOpaqueBlendMode @ 147fe30f0

bool __cdecl IsOpaqueBlendMode(UMaterialInterface *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  return iVar1 == 0;
}

// IsOpaqueBlendMode @ 147fe3110

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsOpaqueBlendMode(EBlendMode param_1)

{
  return param_1 == BLEND_Opaque;
}

// IsOpaqueOrMaskedBlendMode @ 147fe3120

bool __cdecl IsOpaqueOrMaskedBlendMode(FMaterialShaderParameters *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1->_padding_;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return false;
  }
  return true;
}

// IsOpaqueOrMaskedBlendMode @ 147fe3140

bool __cdecl IsOpaqueOrMaskedBlendMode(FMaterial *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  return uVar1 < 2;
}

// IsOpaqueOrMaskedBlendMode @ 147fe3160

bool __cdecl IsOpaqueOrMaskedBlendMode(UMaterialInterface *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  return uVar1 < 2;
}

// IsOpaqueOrMaskedBlendMode @ 147fe3180

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsOpaqueOrMaskedBlendMode(EBlendMode param_1)

{
  return param_1 < BLEND_Translucent;
}

// IsSubstrateEnabled @ 147fe3330

bool __cdecl IsSubstrateEnabled(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `bool___cdecl_IsSubstrateEnabled(void)'::__l2::_thread_safe_static_guard_0__
     ) {
    _Init_thread_header(&`bool___cdecl_IsSubstrateEnabled(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`bool___cdecl_IsSubstrateEnabled(void)'::__l2::_thread_safe_static_guard_0__ == -1) {
      `bool___cdecl_IsSubstrateEnabled(void)'::__l2::bSubstrateEnabled =
           Substrate::IsSubstrateEnabled();
      _Init_thread_footer(&`bool___cdecl_IsSubstrateEnabled(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  return `bool___cdecl_IsSubstrateEnabled(void)'::__l2::bSubstrateEnabled;
}

// IsTranslucentBlendMode @ 147fe3440

bool __cdecl IsTranslucentBlendMode(FMaterialShaderParameters *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1->_padding_;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return true;
  }
  return false;
}

// IsTranslucentBlendMode @ 147fe3460

bool __cdecl IsTranslucentBlendMode(FMaterial *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1->_padding_ + 0x268))();
  return 1 < uVar1;
}

// IsTranslucentBlendMode @ 147fe3480

bool __cdecl IsTranslucentBlendMode(UMaterialInterface *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1->_padding_ + 0x460))();
  return 1 < uVar1;
}

// IsTranslucentBlendMode @ 147fe34a0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsTranslucentBlendMode(EBlendMode param_1)

{
  return BLEND_Masked < param_1;
}

// IsTranslucentOnlyBlendMode @ 147fe34b0

bool __cdecl IsTranslucentOnlyBlendMode(FMaterialShaderParameters *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (int)param_1->_padding_;
  bVar2 = IsSubstrateEnabled();
  if (!bVar2) {
    return iVar1 == 2;
  }
  if ((iVar1 != 7) && (iVar1 != 2)) {
    return false;
  }
  return true;
}

// IsTranslucentOnlyBlendMode @ 147fe34f0

bool __cdecl IsTranslucentOnlyBlendMode(FMaterial *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(param_1->_padding_ + 0x268))();
  bVar1 = IsSubstrateEnabled();
  if (!bVar1) {
    return iVar2 == 2;
  }
  if ((iVar2 != 7) && (iVar2 != 2)) {
    return false;
  }
  return true;
}

// IsTranslucentOnlyBlendMode @ 147fe3540

bool __cdecl IsTranslucentOnlyBlendMode(UMaterialInterface *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(param_1->_padding_ + 0x460))();
  bVar1 = IsSubstrateEnabled();
  if (!bVar1) {
    return iVar2 == 2;
  }
  if ((iVar2 != 7) && (iVar2 != 2)) {
    return false;
  }
  return true;
}

// IsTranslucentOnlyBlendMode @ 147fe3590

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl IsTranslucentOnlyBlendMode(EBlendMode param_1)

{
  bool bVar1;
  
  bVar1 = IsSubstrateEnabled();
  if (!bVar1) {
    return param_1 == BLEND_Translucent;
  }
  if ((param_1 != BLEND_TranslucentColoredTransmittance) && (param_1 != BLEND_Translucent)) {
    return false;
  }
  return true;
}

// LexToString @ 147fe3750

wchar_t * __cdecl LexToString(EConnectionState param_1)

{
  if (param_1 != USOCK_Invalid) {
    if (param_1 == USOCK_Closed) {
      return L"Closed";
    }
    if (param_1 == USOCK_Pending) {
      return L"Pending";
    }
    if (param_1 == USOCK_Open) {
      return L"Open";
    }
  }
  return L"Invalid";
}

// PrecomputeSphereFilter @ 147fe6550

void __cdecl PrecomputeSphereFilter(UModel *param_1,int param_2,TPlane<double> *param_3)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement FVar7;
  longlong lVar8;
  double dVar9;
  uint uVar10;
  
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  do {
    uVar6 = 0;
    if (param_2 < (param_1->Nodes).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->Nodes).AllocatorInstance.Data;
    lVar8 = (longlong)param_2 * 0x40;
    FVar7 = (FScriptContainerElement)((byte)pFVar2[lVar8 + 0x37] & 0x3f);
    pFVar2[lVar8 + 0x37] = FVar7;
    dVar1 = param_3->W;
    dVar9 = (double)(((float)(double)param_3->_padding_ * *(float *)(pFVar2 + lVar8 + 4) +
                      (float)(double)param_3->_padding_ * *(float *)(pFVar2 + lVar8) +
                     (float)(double)param_3->_padding_ * *(float *)(pFVar2 + lVar8 + 8)) -
                    *(float *)(pFVar2 + lVar8 + 0xc));
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ (uint)uVar4,SUB84(dVar1,0) ^ uVar10) <=
        dVar9) {
      if (dVar9 <= dVar1) {
        if (*(int *)(pFVar2 + lVar8 + 0x24) != -1) {
          PrecomputeSphereFilter(param_1,*(int *)(pFVar2 + lVar8 + 0x24),param_3);
        }
      }
      else {
        pFVar2[lVar8 + 0x37] = (FScriptContainerElement)((byte)FVar7 | 0x40);
      }
      param_2 = *(int *)(pFVar2 + lVar8 + 0x28);
    }
    else {
      pFVar2[lVar8 + 0x37] = (FScriptContainerElement)((byte)FVar7 | 0x80);
      param_2 = *(int *)(pFVar2 + lVar8 + 0x24);
    }
  } while (param_2 != 0xffffffff);
  return;
}

// PrintActorReportFunc @ 147fe6bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
PrintActorReportFunc(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  USceneComponent *pUVar1;
  FName FVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  FNameEntryId FVar7;
  int iVar8;
  undefined4 extraout_var;
  AActor *pAVar9;
  int *piVar10;
  UClass *pUVar11;
  UEnum *this;
  FOutputDeviceRedirector *pFVar12;
  FString *pFVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  ForElementType<FSetElementId> FVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint *puVar26;
  ForElementType<unsigned_int> FVar27;
  ulonglong uVar28;
  wchar_t *pwVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_5e8 [32];
  FScriptContainerElement *local_5c8;
  longlong local_5c0;
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6;
  undefined1 local_5b5;
  undefined1 local_5b4 [4];
  uint local_5b0;
  UClass *local_5a8;
  double local_5a0;
  double dStack_598;
  double local_590;
  double local_588;
  double dStack_580;
  double local_578;
  char local_570;
  AActor *local_568;
  longlong *local_560;
  uint uStack_558;
  uint uStack_554;
  TBitArray<FDefaultBitArrayAllocator> *local_550;
  undefined4 uStack_548;
  uint uStack_544;
  uint local_540;
  undefined4 uStack_53c;
  int iStack_538;
  undefined4 uStack_534;
  ENetDormancy local_530;
  int local_52c;
  undefined1 local_528 [8];
  undefined1 local_520 [4];
  FWeakObjectPtr local_51c;
  TObjectIterator<UNetDriver> local_510;
  FName local_4f8;
  FWeakObjectPtr local_4f0;
  FWeakObjectPtr local_4e8;
  uint local_4e0;
  uint uStack_4dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4d8;
  undefined4 local_4d0;
  int iStack_4cc;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  ulonglong local_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b8;
  undefined8 uStack_498;
  int local_490;
  undefined4 uStack_48c;
  FString local_488;
  FString local_478;
  undefined1 local_468 [4];
  int local_464;
  int local_460;
  int local_45c;
  int local_458;
  TObjectPtr<UClass>_u_0 local_450;
  UWorld *local_448;
  UClass **local_440;
  AActor **local_438;
  AActor *local_430;
  FName local_428;
  FValueComparisonClass<TGreater<int>_> local_420;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FWeakObjectPtr *local_3c8;
  AActor *local_3c0;
  FWeakObjectPtr *local_3b8;
  FValueComparisonClass<TGreater<int>_> local_3b0;
  longlong *local_3a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a0;
  undefined8 uStack_380;
  longlong *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 uStack_350;
  longlong *local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_340;
  undefined8 uStack_320;
  wchar_t *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  TStringView<wchar_t> local_308;
  TActorIteratorBase<TActorIterator<AActor>_> local_2f8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *local_288;
  FString local_280 [2];
  undefined4 local_254;
  undefined4 local_234;
  undefined1 local_228 [32];
  uint *local_208;
  int local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined1 local_1f0 [8];
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  undefined1 local_1d8 [32];
  uint *local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  longlong local_188;
  undefined8 local_180;
  TBitArray<FDefaultBitArrayAllocator> local_178;
  undefined4 local_158;
  int local_154;
  void *local_148;
  undefined4 local_140;
  TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
  local_138;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  local_e8;
  TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5e8;
  uVar25 = 0;
  uVar15 = 0;
  TObjectIterator<UNetDriver>::TObjectIterator<UNetDriver>
            (&local_510,RF_ClassDefaultObject,true,Borrowed);
LAB_147fe6c40:
  pFVar20 = (FScriptContainerElement *)(longlong)local_510.Index;
  uVar17 = uVar25;
  if ((local_510.Index < 0) || (iVar8 = local_510.ObjectArray.ArrayNum, iVar8 <= local_510.Index))
  goto LAB_147fe6d97;
  uVar30 = uVar15;
  if (local_510.Index < iVar8) {
    uVar30 = (uint)~local_510.Index >> 0x1f;
  }
  if (uVar30 == 0) {
    local_5c0 = (longlong)iVar8;
    local_5c8 = pFVar20;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar17 = *(ulonglong *)
            (*(longlong *)(local_510.ObjectArray.AllocatorInstance.Data + (longlong)pFVar20 * 8) +
            0x218);
  FVar7 = FNameEntryId::FromValidEName((EName)local_468);
  if (uVar17 == *(uint *)CONCAT44(extraout_var,FVar7.Value)) {
    pFVar20 = (FScriptContainerElement *)(longlong)local_510.Index;
    uVar30 = uVar15;
    if (local_510.Index < local_510.ObjectArray.ArrayNum) {
      uVar30 = (uint)~local_510.Index >> 0x1f;
    }
    if (uVar30 == 0) {
      local_5c0 = (longlong)local_510.ObjectArray.ArrayNum;
      local_5c8 = pFVar20;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    cVar6 = (**(code **)(**(longlong **)
                           (local_510.ObjectArray.AllocatorInstance.Data + (longlong)pFVar20 * 8) +
                        0x3f8))();
    if (cVar6 != '\0') {
      if (local_510.Index < local_510.ObjectArray.ArrayNum) {
        uVar15 = (uint)~local_510.Index >> 0x1f;
      }
      if (uVar15 == 0) {
        local_5c0 = (longlong)local_510.ObjectArray.ArrayNum;
        local_5c8 = (FScriptContainerElement *)(longlong)local_510.Index;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar17 = *(ulonglong *)
                (local_510.ObjectArray.AllocatorInstance.Data + (longlong)local_510.Index * 8);
LAB_147fe6d97:
      if (local_510.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.ObjectArray.AllocatorInstance.Data);
      }
      local_5b0 = 0;
      local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_228._0_8_ = 0;
      local_228._8_8_ = 0;
      local_208 = (uint *)0x0;
      local_200 = 0;
      local_1fc = 0x80;
      local_1f8 = 0xffffffff;
      local_1f4 = 0;
      local_1e8 = (ForElementType<FSetElementId>)0x0;
      local_1e0 = 0;
      local_1d8._0_8_ = 0;
      local_1d8._8_8_ = 0;
      local_1b8 = (uint *)0x0;
      local_1b0 = 0;
      local_1ac = 0x80;
      local_1a8 = 0xffffffff;
      local_1a4 = 0;
      local_198 = (ForElementType<FSetElementId>)0x0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_178.NumBits = 0;
      local_178.MaxBits = 0x80;
      local_158 = 0xffffffff;
      local_154 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_570 = '\0';
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_e8.Elements._0_8_ = 0;
      local_e8.Elements._8_8_ = 0;
      local_e8.Elements._32_8_ = 0;
      local_e8.Elements._40_4_ = 0;
      local_e8.Elements._44_4_ = 0x80;
      local_e8.Elements._48_4_ = 0xffffffff;
      local_e8.Elements._52_4_ = 0;
      local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_e8.HashSize = 0;
      local_138.Elements._0_8_ = 0;
      local_138.Elements._8_8_ = 0;
      local_138.Elements._32_8_ = 0;
      local_138.Elements._40_4_ = 0;
      local_138.Elements._44_4_ = 0x80;
      local_138.Elements._48_4_ = 0xffffffff;
      local_138.Elements._52_4_ = 0;
      local_138.HashSize = 0;
      if (uVar17 != 0) {
        param_2 = *(UWorld **)(uVar17 + 0x1b8);
      }
      if (param_2 != (UWorld *)0x0) {
        local_450.DebugPtr = Z_Construct_UClass_AActor_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_450.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_450.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_450.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_450.DebugPtr);
        }
        local_2f8.Flags = OnlyActiveLevels|SkipPendingKill;
        local_2f8.State.bIsSet = false;
        local_448 = param_2;
        TOptional<FActorIteratorState>::Emplace<UWorld_const_*_&,TSubclassOf<AActor>_&>
                  (&local_2f8.State,&local_448,(TSubclassOf<AActor> *)&local_450.ObjectPtr);
        uVar17 = uVar25;
        while( true ) {
          TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_2f8);
          if ((local_2f8.State.bIsSet == false) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_2f8.State.TypedValue.ReachedEnd != false) break;
          if ((local_2f8.State.bIsSet == false) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pAVar9 = FActorIteratorState::GetActorChecked(&local_2f8.State.TypedValue);
          if (pAVar9 == (AActor *)0x0) {
            pFVar13 = GetTypeName<AActor>(local_280);
            if ((pFVar13->Data).ArrayNum == 0) {
              pwVar29 = L"";
            }
            else {
              pwVar29 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar29);
          }
          local_568 = pAVar9;
          if (pAVar9->bReplicates != '\0') {
            local_5b0 = (int)uVar17 + 1;
            uVar17 = (ulonglong)local_5b0;
            local_530 = (ENetDormancy)(pAVar9->NetDormancy).Value;
            piVar10 = TMapBase<enum_ENetDormancy,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ENetDormancy,int,0>_>
                      ::FindOrAddImpl<enum_ENetDormancy>(&local_188,local_530,&local_530);
            *piVar10 = *piVar10 + 1;
            pUVar1 = (local_568->RootComponent).field0_0x0.DebugPtr;
            if (pUVar1 == (USceneComponent *)0x0) {
              uVar31 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar32 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              local_550 = (TBitArray<FDefaultBitArrayAllocator> *)
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else {
              local_550 = (TBitArray<FDefaultBitArrayAllocator> *)
                          (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
              uVar31 = SUB84(local_550,0);
              uVar32 = (undefined4)((ulonglong)local_550 >> 0x20);
              local_298 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
              uStack_294 = *(undefined4 *)
                            ((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
              uStack_290 = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
              uStack_28c = *(undefined4 *)
                            ((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
              uVar39 = local_298;
              uVar40 = uStack_294;
              uVar37 = uStack_290;
              uVar38 = uStack_28c;
              local_288 = local_550;
            }
            if (local_570 == '\0') {
              local_570 = '\x01';
              local_588 = (double)CONCAT44(uVar40,uVar39);
              dStack_580 = (double)CONCAT44(uVar38,uVar37);
              dStack_598 = (double)CONCAT44(uVar38,uVar37);
              local_5a0 = (double)CONCAT44(uVar40,uVar39);
              local_578 = (double)CONCAT44(uVar32,uVar31);
              local_590 = (double)CONCAT44(uVar32,uVar31);
            }
            else {
              uVar35 = SUB84(local_550,0);
              uVar36 = (undefined4)((ulonglong)local_550 >> 0x20);
              uVar31 = uVar39;
              uVar32 = uVar40;
              if (local_5a0 <= (double)CONCAT44(uVar40,uVar39)) {
                uVar31 = SUB84(local_5a0,0);
                uVar32 = (undefined4)((ulonglong)local_5a0 >> 0x20);
              }
              uVar33 = uVar35;
              uVar34 = uVar36;
              if (local_590 <= (double)local_550) {
                uVar33 = SUB84(local_590,0);
                uVar34 = (undefined4)((ulonglong)local_590 >> 0x20);
              }
              if ((double)local_550 <= local_578) {
                uVar35 = SUB84(local_578,0);
                uVar36 = (undefined4)((ulonglong)local_578 >> 0x20);
              }
              if ((double)CONCAT44(uVar40,uVar39) <= local_588) {
                uVar39 = SUB84(local_588,0);
                uVar40 = (undefined4)((ulonglong)local_588 >> 0x20);
              }
              local_5a0 = (double)CONCAT44(uVar32,uVar31);
              uVar31 = uVar37;
              uVar32 = uVar38;
              if (dStack_598 <= (double)CONCAT44(uVar38,uVar37)) {
                uVar31 = SUB84(dStack_598,0);
                uVar32 = (undefined4)((ulonglong)dStack_598 >> 0x20);
              }
              if ((double)CONCAT44(uVar38,uVar37) <= dStack_580) {
                uVar37 = SUB84(dStack_580,0);
                uVar38 = (undefined4)((ulonglong)dStack_580 >> 0x20);
              }
              local_590 = (double)CONCAT44(uVar34,uVar33);
              local_588 = (double)CONCAT44(uVar40,uVar39);
              local_578 = (double)CONCAT44(uVar36,uVar35);
              dStack_598 = (double)CONCAT44(uVar32,uVar31);
              dStack_580 = (double)CONCAT44(uVar38,uVar37);
            }
            local_5a8 = (UClass *)local_568->_padding_;
            uVar15 = ((uint)((ulonglong)local_5a8 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_5a8 >> 4)) * -0x7a143595;
            uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
            piVar10 = TMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>
                      ::FindOrAddImpl<UClass_*_const_&>
                                ((TMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>
                                  *)local_1d8,uVar15 >> 0x10 ^ uVar15,&local_5a8);
            *piVar10 = *piVar10 + 1;
            for (; local_5a8 != (UClass *)0x0; local_5a8 = (UClass *)local_5a8->_padding_) {
              uVar15 = ((uint)((ulonglong)local_5a8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_5a8 >> 4)) * -0x7a143595;
              uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
              uVar15 = uVar15 >> 0x10 ^ uVar15;
              if (local_228._8_4_ != local_1f4) {
                FVar19 = (ForElementType<FSetElementId>)local_1f0;
                if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
                  FVar19 = local_1e8;
                }
                iVar8 = *(int *)((longlong)FVar19 + (ulonglong)(local_1e0 - 1U & uVar15) * 4);
                while (iVar8 != -1) {
                  lVar18 = local_228._0_8_ + (longlong)iVar8 * 0x18;
                  if (*(UClass **)(local_228._0_8_ + (longlong)iVar8 * 0x18) == local_5a8) {
                    if (lVar18 != 0) goto LAB_147fe72ad;
                    break;
                  }
                  iVar8 = *(int *)(lVar18 + 0x10);
                }
              }
              local_440 = &local_5a8;
              local_5c8 = (FScriptContainerElement *)0x0;
              TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
                        ((TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
                          *)local_228,(uint)&local_52c,
                         (TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar15,(bool *)&local_440);
              lVar18 = local_228._0_8_ + (longlong)local_52c * 0x18;
LAB_147fe72ad:
              *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
            }
            iVar8 = rand();
            local_438 = &local_568;
            TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<AActor_*_const_&>_>
                      (&local_98,(TKeyInitializer<AActor_*_const_&> *)local_528,(bool *)&local_438);
            *(int *)(local_98.Elements._0_8_ + 8 + (longlong)(int)local_528._0_4_ * 0x18) = iVar8;
            iVar8 = rand();
            pAVar9 = local_568;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_568 != (AActor *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)local_568);
            }
            local_4f0.ObjectIndex = 0;
            local_4f0.ObjectSerialNumber = 0;
            local_430 = pAVar9;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar9 != (AActor *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pAVar9);
            }
            FWeakObjectPtr::operator=(&local_4f0,(FObjectPtr)&local_430);
            local_3b8 = &local_4f0;
            TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_&&>_>
                      (&local_e8,
                       (TKeyInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_&&> *)(local_528 + 4),
                       (bool *)&local_3b8);
            *(int *)(local_e8.Elements._0_8_ + 8 + (longlong)(int)local_528._4_4_ * 0x14) = iVar8;
            iVar8 = rand();
            pAVar9 = local_568;
            local_51c.ObjectIndex = 0;
            local_51c.ObjectSerialNumber = 0;
            if (local_568 != (AActor *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)local_568);
              }
              local_4e8.ObjectIndex = 0;
              local_4e8.ObjectSerialNumber = 0;
              local_3c0 = pAVar9;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar9 != (AActor *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pAVar9);
              }
              FWeakObjectPtr::operator=(&local_4e8,(FObjectPtr)&local_3c0);
              local_51c = local_4e8;
            }
            local_3c8 = &local_51c;
            TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<FObjectKey_&&>_>
                      (&local_138,(TKeyInitializer<FObjectKey_&&> *)local_520,(bool *)&local_3c8);
            *(int *)(local_138.Elements._0_8_ + 8 + (longlong)(int)local_520 * 0x14) = iVar8;
          }
        }
        TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_2f8.State);
        local_420.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)&local_5b6;
        TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
        ::
        Sort<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
                  ((TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
                    *)local_228,&local_420);
        local_3b0.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)&local_5b5;
        TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
        ::
        Sort<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
                  ((TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>
                    *)local_1d8,&local_3b0);
        if (3 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        iVar8 = local_200;
        pTStack_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
        local_4c0 = 1;
        uVar15 = 0;
        local_4e0 = 0;
        uStack_4dc = 1;
        iStack_4cc = 0;
        uStack_4c8 = 0;
        if (local_200 != 0) {
          puVar26 = (uint *)(local_228 + 0x10);
          if (local_208 != (uint *)0x0) {
            puVar26 = local_208;
          }
          uVar30 = *puVar26;
          uVar17 = uVar25;
          uVar24 = uVar25;
          while (uVar30 == 0) {
            uStack_4c8 = (int)uVar24 + 0x20;
            uVar24 = (ulonglong)uStack_4c8;
            iVar16 = (int)uVar17;
            local_4e0 = iVar16 + 1;
            uVar17 = (ulonglong)local_4e0;
            if ((int)(local_200 + -1 + (local_200 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_4e0) {
              iStack_4cc = local_200;
              goto LAB_147fe755f;
            }
            uVar30 = puVar26[(longlong)iVar16 + 1];
          }
          uStack_4dc = -uVar30 & uVar30;
          uVar17 = (ulonglong)uStack_4dc * 2 + 1;
          lVar18 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_464 = (int)lVar18;
          iStack_4cc = (uStack_4c8 - 1) + local_464;
          if (local_200 < iStack_4cc) {
            iStack_4cc = local_200;
          }
        }
LAB_147fe755f:
        local_4d0 = 0xffffffff;
        TStack_3a0._padding_ = CONCAT44(uStack_4dc,local_4e0);
        local_3a8 = (longlong *)local_228;
        TStack_3a0.CurrentBitIndex = iStack_4cc;
        TStack_3a0.UnvisitedBitMask = 0xffffffff;
        uStack_498._4_4_ = uStack_4c4;
        uStack_498._0_4_ = uStack_4c8;
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
        local_490 = local_228._8_4_ - local_1f4;
        bVar14 = (byte)local_200 & 0x1f;
        local_4b8._padding_ = CONCAT44(1 << bVar14,local_200 >> 5);
        local_4b8.CurrentBitIndex = local_200;
        local_4b8.UnvisitedBitMask = -1 << bVar14;
        local_4b8._24_8_ = CONCAT44(iStack_4cc,local_200) & 0xffffffffffffffe0;
        uStack_380 = CONCAT44(uStack_48c,local_490);
        local_4b8.Array = pTVar23;
        TStack_3a0.Array = pTStack_4d8;
        TStack_3a0._24_8_ = uStack_498;
        if ((local_200 < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar8 != local_200) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b8);
          pTVar23 = local_4b8.Array;
          iVar8 = local_4b8.CurrentBitIndex;
        }
        while( true ) {
          plVar4 = local_3a8;
          if ((int)local_3a8[1] - *(int *)((longlong)local_3a8 + 0x34) != (int)uStack_380) {
            local_5b8 = 0;
            `TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5b8);
          }
          if (((TStack_3a0.CurrentBitIndex == iVar8) && (TStack_3a0.Array == pTVar23)) &&
             (plVar4 == (longlong *)local_228)) break;
          lVar18 = *(longlong *)(*plVar4 + (longlong)TStack_3a0.CurrentBitIndex * 0x18);
          if (3 < (byte)LogNet._0_1_) {
            if (lVar18 == 0) {
              FString::FString(&local_488,L"None");
            }
            else {
              local_428 = *(FName *)(lVar18 + 0x18);
              FName::ToString(&local_428,&local_488);
            }
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Data.AllocatorInstance.Data);
            }
          }
          TStack_3a0.UnvisitedBitMask = TStack_3a0.UnvisitedBitMask & ~TStack_3a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a0);
        }
        if ((3 < (byte)LogNet._0_1_) &&
           (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet),
           3 < (byte)LogNet._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        uVar30 = local_1b0;
        uStack_554 = 1;
        uStack_544 = uVar15;
        local_540 = uVar15;
        if (local_1b0 != 0) {
          puVar26 = (uint *)(local_1d8 + 0x10);
          if (local_1b8 != (uint *)0x0) {
            puVar26 = local_1b8;
          }
          uStack_554 = *puVar26;
          uVar17 = uVar25;
          local_540 = 0;
          uVar15 = 0;
          while (uStack_554 == 0) {
            iVar8 = (int)uVar25;
            local_540 = (int)uVar17 + 0x20;
            uVar17 = (ulonglong)local_540;
            uVar15 = iVar8 + 1;
            uVar25 = (ulonglong)uVar15;
            uStack_554 = 1;
            uStack_544 = local_1b0;
            if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
            goto LAB_147fe77e3;
            uStack_554 = puVar26[(longlong)iVar8 + 1];
          }
          uStack_554 = -uStack_554 & uStack_554;
          uVar25 = (ulonglong)uStack_554 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_460 = (int)lVar18;
          uStack_544 = local_460 + -1 + local_540;
          if ((int)local_1b0 < (int)uStack_544) {
            uStack_544 = local_1b0;
          }
        }
LAB_147fe77e3:
        local_560 = (longlong *)local_1d8;
        uStack_53c = local_234;
        local_550 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
        uVar22 = local_1b0 & 0xffffffe0;
        iStack_538 = local_1d8._8_4_ - local_1a4;
        TStack_370._padding_ = CONCAT44(uStack_554,uVar15);
        uStack_548 = 0xffffffff;
        TStack_370.CurrentBitIndex = uStack_544;
        TStack_370.UnvisitedBitMask = 0xffffffff;
        iVar8 = (int)local_1b0 >> 5;
        TStack_370._28_4_ = local_234;
        TStack_370.BaseBitIndex = local_540;
        uStack_350 = CONCAT44(uStack_534,iStack_538);
        bVar14 = (byte)local_1b0;
        uStack_558 = uVar15;
        local_378 = local_560;
        TStack_370.Array = local_550;
        if (((int)local_1b0 < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar30 != local_1b0) {
          puVar26 = (uint *)(local_1d8 + 0x10);
          if (local_1b8 != (uint *)0x0) {
            puVar26 = local_1b8;
          }
          uVar15 = -1 << (bVar14 & 0x1f) & puVar26[iVar8];
          while (uVar15 == 0) {
            lVar18 = (longlong)iVar8;
            uVar22 = uVar22 + 0x20;
            iVar8 = iVar8 + 1;
            uVar30 = local_1b0;
            if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
            goto LAB_147fe7903;
            uVar15 = puVar26[lVar18 + 1];
          }
          uVar25 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_45c = (int)lVar18;
          uVar30 = local_45c + -1 + uVar22;
          if ((int)local_1b0 < (int)uVar30) {
            uVar30 = local_1b0;
          }
        }
LAB_147fe7903:
        while( true ) {
          plVar4 = local_378;
          if ((int)local_378[1] - *(int *)((longlong)local_378 + 0x34) != (int)uStack_350) {
            local_5b7 = 0;
            `TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5b7);
          }
          if (((TStack_370.CurrentBitIndex == uVar30) &&
              (TStack_370.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10))) &&
             (plVar4 == (longlong *)local_1d8)) break;
          lVar18 = *(longlong *)(*plVar4 + (longlong)TStack_370.CurrentBitIndex * 0x18);
          if (3 < (byte)LogNet._0_1_) {
            if (lVar18 == 0) {
              FString::FString(&local_478,L"None");
            }
            else {
              local_4f8 = *(FName *)(lVar18 + 0x18);
              FName::ToString(&local_4f8,&local_478);
            }
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_478.Data.AllocatorInstance.Data);
            }
          }
          TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
        }
        if ((3 < (byte)LogNet._0_1_) &&
           (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet),
           3 < (byte)LogNet._0_1_)) {
          local_5c8 = (FScriptContainerElement *)local_578;
          FString::PrintfImpl(&local_408,L"X=%3.3f Y=%3.3f Z=%3.3f");
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_408.Data.ArrayNum != 0) {
            FVar21.Data = local_408.Data.AllocatorInstance.Data;
          }
          local_5c8 = (FScriptContainerElement *)local_590;
          FString::PrintfImpl(&local_418,L"X=%3.3f Y=%3.3f Z=%3.3f");
          local_5c8 = FVar21.Data;
          FString::PrintfImpl(&local_3f8,L"IsValid=%s, Min=(%s), Max=(%s)");
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
          if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.Data.AllocatorInstance.Data);
          }
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_Complete_Boundi_1519b89b8,
                     (FLogCategoryBase *)&LogNet);
          if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogNet._0_1_) {
            local_5c8 = (FScriptContainerElement *)(local_578 - local_590);
            FString::PrintfImpl(&local_3e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
            }
            if (3 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
            }
          }
        }
        uVar15 = local_178.NumBits;
        uVar17 = 0;
        uStack_558 = 0;
        uVar25 = local_4c0;
        uStack_544 = 0;
        local_540 = uStack_558;
        if (local_178.NumBits != 0) {
          FVar27 = (ForElementType<unsigned_int>)&local_178;
          if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar27 = local_178.AllocatorInstance.SecondaryData;
          }
          uVar30 = *(uint *)FVar27;
          uVar24 = uVar17;
          uVar28 = uVar17;
          while (uVar30 == 0) {
            iVar8 = (int)uVar24;
            local_540 = (int)uVar28 + 0x20;
            uVar28 = (ulonglong)local_540;
            uStack_558 = iVar8 + 1;
            uVar24 = (ulonglong)uStack_558;
            uStack_544 = local_178.NumBits;
            if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >>
                5 < (int)uStack_558) goto LAB_147fe7c88;
            uVar30 = *(uint *)((longlong)FVar27 + ((longlong)iVar8 + 1) * 4);
          }
          uVar25 = (ulonglong)(-uVar30 & uVar30);
          uVar24 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_458 = (int)lVar18;
          uStack_544 = local_458 + -1 + local_540;
          if (local_178.NumBits < (int)uStack_544) {
            uStack_544 = local_178.NumBits;
          }
        }
LAB_147fe7c88:
        local_560 = &local_188;
        uStack_53c = local_254;
        local_550 = &local_178;
        uVar30 = local_178.NumBits & 0xffffffe0;
        iStack_538 = (int)local_180 - local_154;
        uStack_548 = 0xffffffff;
        TStack_340.CurrentBitIndex = uStack_544;
        TStack_340.UnvisitedBitMask = 0xffffffff;
        uStack_554 = (uint)uVar25;
        TStack_340._padding_ = CONCAT44(uStack_554,uStack_558);
        iVar8 = local_178.NumBits >> 5;
        TStack_340._28_4_ = local_254;
        TStack_340.BaseBitIndex = local_540;
        uStack_320 = CONCAT44(uStack_534,iStack_538);
        bVar14 = (byte)local_178.NumBits;
        local_348 = local_560;
        TStack_340.Array = local_550;
        if ((local_178.NumBits < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar15 != local_178.NumBits) {
          FVar27 = (ForElementType<unsigned_int>)&local_178;
          if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar27 = local_178.AllocatorInstance.SecondaryData;
          }
          uVar15 = -1 << (bVar14 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar8 * 4);
          while (uVar15 == 0) {
            lVar18 = (longlong)iVar8;
            uVar30 = uVar30 + 0x20;
            iVar8 = iVar8 + 1;
            uVar15 = local_178.NumBits;
            if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >>
                5 < iVar8) goto LAB_147fe7d9e;
            uVar15 = *(uint *)((longlong)FVar27 + (lVar18 + 1) * 4);
          }
          uVar25 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar15 = (uVar30 - 1) + (int)lVar18;
          if (local_178.NumBits < (int)uVar15) {
            uVar15 = local_178.NumBits;
          }
        }
LAB_147fe7d9e:
        while( true ) {
          plVar4 = local_348;
          if ((int)local_348[1] - *(int *)((longlong)local_348 + 0x34) != (int)uStack_320) {
            `TSparseArray<TSparseSetElement<TTuple<enum_ENetDormancy,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5b4);
          }
          if (((TStack_340.CurrentBitIndex == uVar15) && (TStack_340.Array == &local_178)) &&
             (plVar4 == &local_188)) break;
          FVar2 = *(FName *)(*plVar4 + (longlong)TStack_340.CurrentBitIndex * 0x10);
          local_4f8 = FVar2;
          if (3 < (byte)LogNet._0_1_) {
            local_318 = L"/Script/Engine.ENetDormancy";
            iStack_310 = 0x1b;
            pUVar11 = Z_Construct_UClass_UEnum_NoRegister();
            local_308._12_4_ = uStack_30c;
            local_308.Size = iStack_310;
            local_308.DataPtr = local_318;
            this = (UEnum *)StaticFindObject(pUVar11,(UObject *)0x0,&local_308,None);
            if (this == (UEnum *)0x0) {
              UE::Logging::Private::BasicFatalLog
                        ((FStaticBasicLogRecord *)
                         &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
            }
            UEnum::GetNameStringByValue
                      (this,&local_3d8,(longlong)(int)FVar2.ComparisonIndex.Value.Value);
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
            }
          }
          TStack_340.UnvisitedBitMask = TStack_340.UnvisitedBitMask & ~TStack_340._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_340);
        }
        if (((3 < (byte)LogNet._0_1_) &&
            (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet),
            3 < (byte)LogNet._0_1_)) &&
           ((UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet),
            3 < (byte)LogNet._0_1_ &&
            (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet),
            3 < (byte)LogNet._0_1_)))) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        pFVar12 = GetGlobalLogSingleton();
        FOutputDevice::LogfImpl
                  ((FOutputDevice *)pFVar12,L"UE_TSPARSE_SET: %i elements, %i hash slots");
        iVar8 = local_98.HashSize;
        uVar25 = uVar17;
        uVar24 = uVar17;
        if (0 < local_98.HashSize) {
          do {
            FVar19 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_98.Hash.SecondaryData;
            }
            for (iVar16 = *(int *)((longlong)FVar19 +
                                  ((longlong)(local_98.HashSize + -1) & uVar24) * 4); iVar16 != -1;
                iVar16 = *(int *)(local_98.Elements._0_8_ + 0x10 + (longlong)iVar16 * 0x18)) {
            }
            FOutputDevice::LogfImpl((FOutputDevice *)pFVar12,L"   Hash[%i] = %i");
            uVar15 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar15;
            uVar24 = uVar24 + 1;
          } while ((int)uVar15 < iVar8);
        }
        if ((3 < (byte)LogNet._0_1_) &&
           (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet),
           3 < (byte)LogNet._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        pFVar12 = GetGlobalLogSingleton();
        FOutputDevice::LogfImpl
                  ((FOutputDevice *)pFVar12,L"UE_TSPARSE_SET: %i elements, %i hash slots");
        iVar8 = local_e8.HashSize;
        uVar25 = uVar17;
        uVar24 = uVar17;
        if (0 < local_e8.HashSize) {
          do {
            FVar19 = (ForElementType<FSetElementId>)&local_e8.Hash;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_e8.Hash.SecondaryData;
            }
            for (iVar16 = *(int *)((longlong)FVar19 +
                                  ((longlong)(local_e8.HashSize + -1) & uVar24) * 4); iVar16 != -1;
                iVar16 = *(int *)(local_e8.Elements._0_8_ + 0xc + (longlong)iVar16 * 0x14)) {
            }
            FOutputDevice::LogfImpl((FOutputDevice *)pFVar12,L"   Hash[%i] = %i");
            uVar15 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar15;
            uVar24 = uVar24 + 1;
          } while ((int)uVar15 < iVar8);
        }
        if ((3 < (byte)LogNet._0_1_) &&
           (UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet),
           3 < (byte)LogNet._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        pFVar12 = GetGlobalLogSingleton();
        FOutputDevice::LogfImpl
                  ((FOutputDevice *)pFVar12,L"UE_TSPARSE_SET: %i elements, %i hash slots");
        iVar8 = local_138.HashSize;
        uVar25 = uVar17;
        if (0 < local_138.HashSize) {
          do {
            FVar19 = (ForElementType<FSetElementId>)&local_138.Hash;
            if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138.Hash.SecondaryData;
            }
            for (iVar16 = *(int *)((longlong)FVar19 +
                                  ((longlong)(local_138.HashSize + -1) & uVar25) * 4); iVar16 != -1;
                iVar16 = *(int *)(local_138.Elements._0_8_ + 0xc + (longlong)iVar16 * 0x14)) {
            }
            FOutputDevice::LogfImpl((FOutputDevice *)pFVar12,L"   Hash[%i] = %i");
            uVar15 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar15;
            uVar25 = uVar25 + 1;
          } while ((int)uVar15 < iVar8);
        }
      }
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<AActor_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<AActor_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      local_140 = 0;
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_ENetDormancy,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_ENetDormancy,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_188);
      local_190 = 0;
      if (local_198 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198);
      }
      TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1d8);
      local_1e0 = 0;
      if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8);
      }
      TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
      return;
    }
  }
  TObjectIterator<UNetDriver>::Advance(&local_510);
  goto LAB_147fe6c40;
}

// RemoveSimulatedNetConnections @ 147fed890

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
RemoveSimulatedNetConnections(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  UNetConnection *this;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  EInternalObjectFlags EVar6;
  FNameEntryId FVar7;
  UClass *pUVar8;
  undefined4 extraout_var;
  FUObjectItem *pFVar9;
  UEnum *pUVar10;
  wchar_t *_Str;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  UEnum *local_res18 [2];
  TObjectIterator<UNetDriver> local_98;
  TObjectIterator<USimulatedClientNetConnection> local_80;
  FNetResult local_68;
  
  iVar5 = -1;
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar5 = _wtoi(_Str);
  }
  uVar13 = 0;
  local_98.Index = 0xffffffff;
  local_98.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ObjectArray.ArrayNum = 0;
  local_98.ObjectArray.ArrayMax = 0;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UNetDriver_NoRegister();
  GetObjectsOfClass(pUVar8,&local_98.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    do {
      TObjectIterator<UNetDriver>::Advance(&local_98);
      lVar11 = (longlong)local_98.Index;
      uVar12 = uVar13;
      if ((local_98.Index < 0) || (local_98.ObjectArray.ArrayNum <= local_98.Index))
      goto LAB_147feda57;
      uVar14 = 0;
      if (local_98.Index < local_98.ObjectArray.ArrayNum) {
        uVar14 = (uint)~local_98.Index >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar12 = *(ulonglong *)
                (*(longlong *)(local_98.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0x218);
      FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
    } while (uVar12 != *(uint *)CONCAT44(extraout_var,FVar7.Value));
    lVar11 = (longlong)local_98.Index;
    uVar14 = 0;
    if (local_98.Index < local_98.ObjectArray.ArrayNum) {
      uVar14 = (uint)~local_98.Index >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(**(longlong **)(local_98.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                        0x3f8))();
  } while (cVar4 == '\0');
  lVar11 = (longlong)local_98.Index;
  uVar14 = 0;
  if (local_98.Index < local_98.ObjectArray.ArrayNum) {
    uVar14 = (uint)~local_98.Index >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = *(ulonglong *)(local_98.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
LAB_147feda57:
  if (local_98.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ObjectArray.AllocatorInstance.Data);
  }
  if (uVar12 != 0) {
    local_80.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ObjectArray.ArrayNum = 0;
    local_80.ObjectArray.ArrayMax = 0;
    local_80.Index = 0xffffffff;
    EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = USimulatedClientNetConnection::StaticClass();
    GetObjectsOfClass(pUVar8,&local_80.ObjectArray,true,RF_ClassDefaultObject,
                      EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<USimulatedClientNetConnection>::Advance(&local_80);
    while ((lVar11 = (longlong)local_80.Index, -1 < local_80.Index &&
           (local_80.Index < local_80.ObjectArray.ArrayNum))) {
      uVar14 = 0;
      if (local_80.Index < local_80.ObjectArray.ArrayNum) {
        uVar14 = (uint)~local_80.Index >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(UNetConnection **)(local_80.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
      if (((this != (UNetConnection *)0x0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar9 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        pUVar10 = StaticEnum<enum_ENetCloseResult>();
        local_68.Result = 0xe;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        local_68.ResultEnumObj.WeakPtr.ObjectIndex = 0;
        local_68.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
        local_res18[0] = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FWeakObjectPtr::operator=(&local_68.ResultEnumObj.WeakPtr,(FObjectPtr)local_res18);
        local_68.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ErrorContext.Data.ArrayNum = 0;
        local_68.ErrorContext.Data.ArrayMax = 0;
        local_68.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
        local_68.RawResultEnumObj = pUVar10;
        UNetConnection::Close(this,&local_68);
        if (local_68.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)local_68.NextResult + -0x10))
                    ((longlong)local_68.NextResult + -0x10);
        }
        if (local_68.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.ErrorContext.Data.AllocatorInstance.Data);
        }
        pFVar9 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        if ((((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("!IsRooted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                               ,0xb8,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
        pFVar9 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        do {
          lVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
          uVar14 = (uint)((ulonglong)lVar11 >> 0x20);
          if ((uVar14 >> 0x15 & 1) != 0) break;
          if (((ulonglong)pFVar9 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar3 = lVar11 == (pFVar9->field0_0x0).FlagsAndRefCount;
          if (bVar3) {
            (pFVar9->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar14 << 0x20 | (longlong)(int)lVar11 | 0x20000000000000;
          }
          UNLOCK();
        } while (!bVar3);
        pFVar9 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        FUObjectItem::ClearRootFlags(pFVar9,Async);
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        if ((0 < iVar5) && (iVar5 <= (int)uVar14)) break;
      }
      TObjectIterator<USimulatedClientNetConnection>::Advance(&local_80);
    }
    if (local_80.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.ObjectArray.AllocatorInstance.Data);
    }
    if (3 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  return;
}

// SerializeMorphLODModels @ 147ff3de0

void __cdecl
`anonymous_namespace'::SerializeMorphLODModels
          (FMemoryArchive *param_1,TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = 0;
  if ((param_1->_padding_ & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
  }
  else {
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar7 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    DestructItems<FMorphTargetLODModel,int>
              ((FMorphTargetLODModel *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar7,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar7 = local_res8[0];
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,local_res8[0],&param_2->AllocatorInstance,&param_2->ArrayNum,piVar1);
    DefaultConstructItems<FMorphTargetLODModel,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40,uVar7);
  }
  uVar7 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::operator<<((FArchive *)param_1,
                   (FMorphTargetLODModel *)
                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x40));
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)local_res8[0]);
  }
  return;
}

// SetCardsFromBounds @ 147ff46f0

void __cdecl
MeshCardRepresentation::SetCardsFromBounds
          (FMeshCardsBuildData *param_1,ELumenCardDilationMode param_2,bool param_3)

{
  TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  float local_124 [4];
  float fStack_114;
  float fStack_110;
  TVector<float>_u_0 TStack_10c;
  TVector<float>_u_0 TStack_100;
  TVector<float>_u_0 TStack_f4;
  undefined8 local_e8;
  float local_e0;
  
  pTVar1 = &param_1->CardBuildData;
  piVar2 = &(param_1->CardBuildData).ArrayNum;
  iVar17 = *piVar2;
  if (iVar17 < 6) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40,4,6 - iVar17,&pTVar1->AllocatorInstance,piVar2,
                        &(param_1->CardBuildData).ArrayMax);
    DefaultConstructItems<FLumenCardBuildData,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 0x40,6 - iVar17);
  }
  else if (6 < iVar17) {
    iVar17 = iVar17 + -6;
    if (iVar17 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (iVar17 == 0) goto LAB_147ff4847;
    pFVar16 = (pTVar1->AllocatorInstance).Data + 0x180;
    iVar15 = (*piVar2 - iVar17) + -6;
    if (iVar15 != 0) {
      memmove(pFVar16,pFVar16 + (longlong)iVar17 * 0x40,(longlong)iVar15 << 6);
    }
    *piVar2 = *piVar2 - iVar17;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,4,&pTVar1->AllocatorInstance,*piVar2,&(param_1->CardBuildData).ArrayMax);
  }
LAB_147ff4847:
  fVar13 = __real_40a00000;
  uVar18 = 0;
  dVar3 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  dVar5 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  dVar23 = (dVar3 + (param_1->Bounds).Min.field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar25 = (dVar5 + (param_1->Bounds).Min.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar24 = (dVar4 + (param_1->Bounds).Min.field0_0x0._s_0.Y) * __real_3fe0000000000000;
  fVar20 = (float)((dVar3 - (param_1->Bounds).Min.field0_0x0._s_0.X) * __real_3fe0000000000000);
  fVar21 = (float)((dVar4 - (param_1->Bounds).Min.field0_0x0._s_0.Y) * __real_3fe0000000000000);
  fVar22 = (float)((dVar5 - (param_1->Bounds).Min.field0_0x0._s_0.Z) * __real_3fe0000000000000);
  fVar26 = __real_bf800000;
  fVar27 = __real_3f800000;
  while( true ) {
    local_124[0] = 0.0;
    local_124[1] = 0.0;
    local_124[2] = 0.0;
    if ((uVar18 & 1) != 0) {
      fVar26 = fVar27;
    }
    if ((2 < uVar18 >> 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_124[uVar18 >> 1] = fVar26;
    TStack_f4._s_0.X = (float)local_124._0_8_;
    TStack_f4._s_0.Y = SUB84(local_124._0_8_,4);
    TStack_f4._s_0.Z = local_124[2];
    UE::Math::TVector<float>::FindBestAxisVectors
              ((TVector<float> *)&TStack_f4._s_0,(TVector<float> *)&TStack_10c._s_0,
               (TVector<float> *)&TStack_100._s_0);
    TStack_10c._s_0.X = TStack_100._s_0.Z * TStack_f4._s_0.Y - TStack_f4._s_0.Z * TStack_100._s_0.Y;
    TStack_10c._s_0.Y = TStack_f4._s_0.Z * TStack_100._s_0.X - TStack_100._s_0.Z * TStack_f4._s_0.X;
    TStack_10c._s_0.Z = TStack_f4._s_0.X * TStack_100._s_0.Y - TStack_f4._s_0.Y * TStack_100._s_0.X;
    fVar27 = TStack_10c._s_0.Y * TStack_10c._s_0.Y + TStack_10c._s_0.X * TStack_10c._s_0.X +
             TStack_10c._s_0.Z * TStack_10c._s_0.Z;
    if (__real_322bcc77 < fVar27) {
      fVar27 = __real_3f800000 / SQRT(fVar27);
      TStack_10c._s_0.X = TStack_10c._s_0.X * fVar27;
      TStack_10c._s_0.Y = TStack_10c._s_0.Y * fVar27;
      TStack_10c._s_0.Z = TStack_10c._s_0.Z * fVar27;
    }
    uVar28 = (uint)(fVar20 * TStack_10c._s_0.X + fVar21 * TStack_10c._s_0.Y +
                   fVar22 * TStack_10c._s_0.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar29 = (uint)(fVar21 * TStack_100._s_0.Y + fVar20 * TStack_100._s_0.X +
                   fVar22 * TStack_100._s_0.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar27 = (float)((uint)(fVar20 * TStack_f4._s_0.X + fVar21 * TStack_f4._s_0.Y +
                           fVar22 * TStack_f4._s_0.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (param_3) {
      fVar27 = fVar27 * __real_3f000000 + fVar13;
      fVar26 = fVar27;
    }
    else {
      fVar27 = fVar27 + fVar13;
      fVar26 = fVar13;
    }
    fStack_110 = TStack_f4._s_0.Z * fVar26 + (float)dVar25;
    local_e8 = CONCAT44(uVar29,uVar28);
    fStack_114 = TStack_f4._s_0.Y * fVar26 + (float)dVar24;
    local_124[3] = TStack_f4._s_0.X * fVar26 + (float)dVar23;
    uVar9 = CONCAT44(TStack_10c._s_0.Z,TStack_10c._s_0.Y);
    uVar10 = CONCAT44(TStack_100._s_0.Y,TStack_100._s_0.X);
    uVar7 = CONCAT44(fStack_114,local_124[3]);
    uVar8 = CONCAT44(TStack_10c._s_0.X,fStack_110);
    uVar11 = CONCAT44(TStack_f4._s_0.X,TStack_100._s_0.Z);
    uVar12 = CONCAT44(TStack_f4._s_0.Z,TStack_f4._s_0.Y);
    local_e0 = fVar27;
    if ((*piVar2 <= (int)uVar18) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) break;
    pFVar16 = (pTVar1->AllocatorInstance).Data;
    lVar19 = (longlong)(int)uVar18 * 0x40;
    *(undefined8 *)(pFVar16 + lVar19) = uVar7;
    *(undefined8 *)(pFVar16 + lVar19 + 8) = uVar8;
    *(undefined8 *)(pFVar16 + lVar19 + 0x10) = uVar9;
    *(undefined8 *)(pFVar16 + lVar19 + 0x10 + 8) = uVar10;
    *(undefined8 *)(pFVar16 + lVar19 + 0x20) = uVar11;
    *(undefined8 *)(pFVar16 + lVar19 + 0x20 + 8) = uVar12;
    *(ulonglong *)(pFVar16 + lVar19 + 0x30) = CONCAT44(uVar29,uVar28);
    *(float *)(pFVar16 + lVar19 + 0x38) = fVar27;
    if ((*piVar2 <= (int)uVar18) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pTVar1->AllocatorInstance).Data[lVar19 + 0x3c] = SUB41(uVar18,0);
    if ((*piVar2 <= (int)uVar18) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar26 = __real_bf800000;
    fVar27 = __real_3f800000;
    uVar18 = uVar18 + 1;
    (pTVar1->AllocatorInstance).Data[lVar19 + 0x3d] = (FScriptContainerElement)param_2;
    if (5 < uVar18) {
      return;
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// SetChannelMode @ 147ff4cb0

void __cdecl MeshPaintVisualize::SetChannelMode(Type param_1)

{
  GChannelMode = param_1;
  return;
}

// SetPaintMode @ 147ff67e0

void __cdecl MeshPaintVisualize::SetPaintMode(Type param_1)

{
  GPaintMode = param_1;
  return;
}

// SetShowMode @ 147ff6d20

void __cdecl MeshPaintVisualize::SetShowMode(Type param_1)

{
  GShowMode = param_1;
  return;
}

// SetTextureAsset @ 147ff6d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MeshPaintVisualize::SetTextureAsset(TWeakObjectPtr<UTexture,FWeakObjectPtr> param_1)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  UTexture *this;
  FTextureResource *pFVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  FWeakObjectPtr local_res8;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FRHITexture *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FRHITexture *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  GTextureAsset = param_1;
  local_res8 = param_1.WeakPtr;
  this = (UTexture *)FWeakObjectPtr::Get(&local_res8);
  if ((this == (UTexture *)0x0) ||
     (pFVar4 = UTexture::GetResource(this), pFVar4 == (FTextureResource *)0x0)) {
    pFStack_70 = (FRHITexture *)0x0;
  }
  else {
    pFVar1 = (FRHITexture *)pFVar4->_padding_;
    pFStack_70 = (FRHITexture *)0x0;
    if ((pFVar1 != (FRHITexture *)0x0) && ((pFVar1->TextureDesc).Dimension == Texture2D)) {
      pFStack_70 = pFVar1;
    }
  }
  if (pFStack_70 != GTextureRHI_GameThread) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`MeshPaintVisualize::SetTextureAsset'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`MeshPaintVisualize::SetTextureAsset'::`5'::<lambda_1>,1,0>::
                _vftable_;
    GTextureRHI_GameThread = pFStack_70;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_MeshPaintVisualize::SetTextureAsset_::__l5::TSTR_SetMeshPaintVisualizeTexture66>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`MeshPaintVisualize::SetTextureAsset'::__l5::TSTR_SetMeshPaintVisualizeTexture66>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar5);
      uVar7 = (ulonglong)local_28;
      if ((2 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar6 = local_30;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar6 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar6 = local_60;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  return;
}

// SetTextureCoordinateIndex @ 147ff6ee0

void __cdecl MeshPaintVisualize::SetTextureCoordinateIndex(int param_1)

{
  GTextureCoordinateIndex = param_1;
  return;
}

// ShouldProxyUseVertexColorVisualization @ 147ff7d30

bool __cdecl ShouldProxyUseVertexColorVisualization(FName param_1)

{
  return false;
}

// SplitParameterName @ 147ff7eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TTuple<FString,int> * __cdecl
SplitParameterName(TTuple<FString,int> *__return_storage_ptr__,FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  wint_t wVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TTuple<FString,int> *pTVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FName local_res10;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_res10 = param_1;
  FName::ToString(&local_res10,&local_38);
  iVar13 = 0;
  iVar9 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar9 = iVar13;
  }
  if ((iVar9 < 0) || (local_38.Data.ArrayNum < iVar9)) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0 && Count <= this->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x55b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TTuple<FString,int> *)(*pcVar2)();
      return pTVar11;
    }
  }
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  pFVar12 = local_38.Data.AllocatorInstance.Data + (longlong)iVar9 * 2;
  iVar9 = local_38.Data.ArrayNum;
  do {
    if (pFVar12 == FVar3.Data) {
      iVar6 = -1;
      goto LAB_147ff7f63;
    }
    pFVar1 = pFVar12 + -2;
    pFVar12 = pFVar12 + -2;
    iVar6 = iswdigit(*(wint_t *)pFVar1);
    iVar9 = local_38.Data.ArrayNum;
  } while (iVar6 != 0);
  iVar6 = (int)((longlong)pFVar12 - (longlong)FVar3.Data >> 1);
LAB_147ff7f63:
  iVar6 = iVar6 + 1;
  iVar7 = 0;
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = iVar7;
  }
  iVar10 = iVar13;
  if (iVar8 <= iVar6) goto LAB_147ff80d9;
  if (((iVar6 < 0) || (iVar9 == 0)) || (iVar9 + -1 <= iVar6)) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TTuple<FString,int> *)(*pcVar2)();
      return pTVar11;
    }
    iVar9 = local_38.Data.ArrayNum;
  }
  pFVar12 = local_38.Data.AllocatorInstance.Data + (longlong)iVar6 * 2;
  wVar5 = *(wint_t *)pFVar12;
  if ((wVar5 == 0x2d) || (wVar5 == 0x2b)) {
    wVar5 = *(wint_t *)(pFVar12 + 2);
    pFVar12 = pFVar12 + 2;
  }
  bVar4 = false;
  if (wVar5 != 0) {
    wVar5 = *(wint_t *)pFVar12;
    do {
      if (wVar5 == 0x2e) {
        if (bVar4) {
LAB_147ff8020:
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7584771069160980089>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                             ,0x187,"TCString<TCHAR>::IsNumeric(&NameString[NumberStartIndex])");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar11 = (TTuple<FString,int> *)(*pcVar2)();
            return pTVar11;
          }
          break;
        }
        bVar4 = true;
      }
      else {
        iVar9 = iswdigit(wVar5);
        if (iVar9 == 0) goto LAB_147ff8020;
      }
      wVar5 = *(wint_t *)(pFVar12 + 2);
      pFVar12 = pFVar12 + 2;
    } while (wVar5 != 0);
    iVar9 = local_38.Data.ArrayNum;
  }
  if (iVar6 < 0) {
code_r0x000147ff8077:
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TTuple<FString,int> *)(*pcVar2)();
      return pTVar11;
    }
  }
  else {
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = iVar7;
    }
    if (iVar8 <= iVar6) goto code_r0x000147ff8077;
  }
  iVar10 = _wtoi((wchar_t *)(local_38.Data.AllocatorInstance.Data + (longlong)iVar6 * 2));
  iVar9 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar9 = iVar7;
  }
  iVar8 = iVar9;
  if (iVar6 < iVar9) {
    iVar8 = iVar6;
  }
  if (0 < iVar8) {
    iVar13 = iVar8;
  }
  FString::RemoveAt(&local_38,iVar13,iVar9 - iVar13,Default);
  iVar9 = local_38.Data.ArrayNum;
LAB_147ff80d9:
  if (iVar9 < 2) {
    FString::operator=(&local_38,L"Param");
    iVar9 = local_38.Data.ArrayNum;
  }
  *(FScriptContainerElement **)__return_storage_ptr__ = local_38.Data.AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0xc = local_38.Data.ArrayMax;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar9;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar10;
  return __return_storage_ptr__;
}

// SubstrateCompilationInfoCreateNullSharedLocalBasis @ 147ff89f0

FSubstrateRegisteredSharedLocalBasis __cdecl
SubstrateCompilationInfoCreateNullSharedLocalBasis(void)

{
  FSubstrateRegisteredSharedLocalBasis *in_RCX;
  
  FSubstrateRegisteredSharedLocalBasis::FSubstrateRegisteredSharedLocalBasis(in_RCX);
  return SUB81(in_RCX,0);
}

// SubstrateCompilationInfoCreateSharedLocalBasis @ 147ff8a10

FSubstrateRegisteredSharedLocalBasis __cdecl
SubstrateCompilationInfoCreateSharedLocalBasis(FMaterialCompiler *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined4 in_register_00000014;
  int in_R9D;
  
  lVar1 = *(longlong *)CONCAT44(in_register_00000014,param_2);
  if (in_R9D == -1) {
    (**(code **)(lVar1 + 0xa70))();
    return SUB81(param_1,0);
  }
  (**(code **)(lVar1 + 0xa68))((longlong *)CONCAT44(in_register_00000014,param_2),param_1);
  return SUB81(param_1,0);
}

// TransposeTransforms @ 147ffa9e0

void __cdecl TransposeTransforms(FMatrix3x4 *param_1,TMatrix<float> *param_2,long64 param_3)

{
  TMatrix<float> *pTVar1;
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
  float (*pafVar13) [4];
  float (*pafVar14) [4];
  
  if (0 < param_3) {
    pafVar13 = param_2->M + 2;
    pafVar14 = param_1->M + 2;
    do {
      pTVar1 = (TMatrix<float> *)(pafVar13 + -2);
      fVar2 = ((TMatrix<float> *)(pafVar13 + -2))->M[0][1];
      fVar3 = ((TMatrix<float> *)(pafVar13 + -2))->M[0][2];
      fVar4 = (*pafVar13)[0];
      fVar5 = (*pafVar13)[1];
      fVar6 = (*pafVar13)[2];
      fVar7 = pafVar13[-1][0];
      fVar8 = pafVar13[-1][1];
      fVar9 = pafVar13[-1][2];
      fVar10 = pafVar13[1][0];
      fVar11 = pafVar13[1][1];
      fVar12 = pafVar13[1][2];
      pafVar13 = pafVar13 + 4;
      ((FMatrix3x4 *)(pafVar14 + -2))->M[0][0] = pTVar1->M[0][0];
      ((FMatrix3x4 *)(pafVar14 + -2))->M[0][1] = fVar7;
      ((FMatrix3x4 *)(pafVar14 + -2))->M[0][2] = fVar4;
      ((FMatrix3x4 *)(pafVar14 + -2))->M[0][3] = fVar10;
      pafVar14[-1][0] = fVar2;
      pafVar14[-1][1] = fVar8;
      pafVar14[-1][2] = fVar5;
      pafVar14[-1][3] = fVar11;
      (*pafVar14)[0] = fVar3;
      (*pafVar14)[1] = fVar9;
      (*pafVar14)[2] = fVar6;
      (*pafVar14)[3] = fVar12;
      param_3 = param_3 + -1;
      pafVar14 = pafVar14 + 3;
    } while (param_3 != 0);
  }
  return;
}

// WriteMaterialUniformAccess @ 148001670

void __cdecl
WriteMaterialUniformAccess
          (EValueComponentType param_1,uint param_2,uint param_3,
          TStringBuilderBase<wchar_t> *param_4)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  bVar3 = false;
  bVar4 = false;
  uVar9 = param_3 & 3;
  if ((param_1 != Float) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ComponentType == UE::Shader::EValueComponentType::Float",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0x26,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = param_2;
  if (param_2 != 0) {
    while( true ) {
      uVar7 = 4 - uVar9;
      if (uVar10 < 4 - uVar9) {
        uVar7 = uVar10;
      }
      if ((uVar7 < param_2) && (!bVar3)) {
        TStringBuilderBase<wchar_t>::AppendfImpl(param_4,L"float%d(");
        bVar3 = true;
        bVar4 = true;
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_4,L"Material.PreshaderBuffer[%u]");
      if (uVar7 < 4) {
        if (param_4->End < param_4->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_4,1);
        }
        uVar8 = 0;
        *param_4->CurPos = L'.';
        pwVar6 = param_4->CurPos + 1;
        param_4->CurPos = pwVar6;
        if (uVar7 != 0) {
          do {
            wVar1 = L"xyzw"[uVar8 + uVar9];
            if (param_4->End < pwVar6 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_4,1);
            }
            uVar8 = uVar8 + 1;
            *param_4->CurPos = wVar1;
            param_4->CurPos = param_4->CurPos + 1;
            pwVar6 = param_4->CurPos;
            bVar3 = bVar4;
          } while (uVar8 < uVar7);
        }
      }
      uVar9 = 0;
      if (uVar10 - uVar7 == 0) break;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4,L", ",2);
      uVar10 = uVar10 - uVar7;
    }
    if (bVar3) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4,L")",1);
    }
  }
  return;
}

// Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister @ 148001d90

UClass * __cdecl Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshMergeCullingVolume",
               &Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton,
               AMeshMergeCullingVolume::StaticRegisterNativesAMeshMergeCullingVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AMeshMergeCullingVolume>,
               InternalVTableHelperCtorCaller<AMeshMergeCullingVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMeshMergeCullingVolume.InnerSingleton;
}

// Z_Construct_UClass_ANavigationObjectBase_NoRegister @ 148001e50

UClass * __cdecl Z_Construct_UClass_ANavigationObjectBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationObjectBase",
               &Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton,
               ANavigationObjectBase::StaticRegisterNativesANavigationObjectBase,0x2e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationObjectBase>,
               InternalVTableHelperCtorCaller<ANavigationObjectBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton;
}

// Z_Construct_UClass_UMeshBudgetProjectSettings_NoRegister @ 148001f10

UClass * __cdecl Z_Construct_UClass_UMeshBudgetProjectSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshBudgetProjectSettings",
               &Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton,
               UMeshBudgetProjectSettings::StaticRegisterNativesUMeshBudgetProjectSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshBudgetProjectSettings>,
               InternalVTableHelperCtorCaller<UMeshBudgetProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton;
}

// Z_Construct_UClass_UMeshSimplificationSettings_NoRegister @ 148001fd0

UClass * __cdecl Z_Construct_UClass_UMeshSimplificationSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshSimplificationSettings",
               &Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton,
               UMeshSimplificationSettings::StaticRegisterNativesUMeshSimplificationSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSimplificationSettings>,
               InternalVTableHelperCtorCaller<UMeshSimplificationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton;
}

// Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister @ 148002090

UClass * __cdecl Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshVertexPainterKismetLibrary",
               &Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton,
               UMeshVertexPainterKismetLibrary::StaticRegisterNativesUMeshVertexPainterKismetLibrary
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPainterKismetLibrary>,
               InternalVTableHelperCtorCaller<UMeshVertexPainterKismetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton;
}

// Z_Construct_UClass_UModel_NoRegister @ 148002150

UClass * __cdecl Z_Construct_UClass_UModel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UModel.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UModel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Model",&Z_Registration_Info_UClass_UModel.InnerSingleton,
               UModel::StaticRegisterNativesUModel,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModel>,InternalVTableHelperCtorCaller<UModel>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModel.InnerSingleton;
}

// Z_Construct_UClass_UMorphTarget_NoRegister @ 148002160

UClass * __cdecl Z_Construct_UClass_UMorphTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMorphTarget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MorphTarget",
               &Z_Registration_Info_UClass_UMorphTarget.InnerSingleton,
               UMorphTarget::StaticRegisterNativesUMorphTarget,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMorphTarget>,
               InternalVTableHelperCtorCaller<UMorphTarget>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMorphTarget.InnerSingleton;
}

// Z_Construct_UClass_UNavMovementInterface_NoRegister @ 148002170

UClass * __cdecl Z_Construct_UClass_UNavMovementInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavMovementInterface",
               &Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton,
               UNavMovementInterface::StaticRegisterNativesUNavMovementInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMovementInterface>,
               InternalVTableHelperCtorCaller<UNavMovementInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton;
}

// Z_Construct_UClass_UNetConnection_NoRegister @ 148002230

UClass * __cdecl Z_Construct_UClass_UNetConnection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetConnection",
               &Z_Registration_Info_UClass_UNetConnection.InnerSingleton,
               UNetConnection::StaticRegisterNativesUNetConnection,0x1f80,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetConnection>,InternalVTableHelperCtorCaller<UNetConnection>,
               local_res8,UPlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetConnection.InnerSingleton;
}

// Z_Construct_UClass_USimulatedClientNetConnection_NoRegister @ 1480022f0

UClass * __cdecl Z_Construct_UClass_USimulatedClientNetConnection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SimulatedClientNetConnection",
               &Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton,
               USimulatedClientNetConnection::StaticRegisterNativesUSimulatedClientNetConnection,
               0x1f80,0x10,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USimulatedClientNetConnection>,
               InternalVTableHelperCtorCaller<USimulatedClientNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMeshMergeType @ 1480023b0

UEnum * __cdecl Z_Construct_UEnum_Engine_EMeshMergeType(void)

{
  if (Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMeshMergeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMemberReference @ 1480023f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMemberReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMemberReference.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMemberReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FMemberReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMemberReference.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMemberReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMeshApproximationSettings @ 148002470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshApproximationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshApproximationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshApproximationSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshApproximationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshApproximationSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMeshInstancingSettings @ 1480024f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshInstancingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshInstancingSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshInstancingSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshInstancingSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshInstancingSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMeshMergingSettings @ 148002570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshMergingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshMergingSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshMergingSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshMergingSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMeshMergingSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMeshProxySettings @ 1480025f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshProxySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshProxySettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshProxySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshProxySettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshProxySettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMeshReductionSettings @ 148002670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshReductionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshReductionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshReductionSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshReductionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshReductionSettings.InnerSingleton;
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

// ShaderTypeRegistration'' @ 1503f3b00

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FClearStreamingRequestCount_CS::ShaderTypeRegistration__
          (void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503f3b10

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FScatterUpdates_CS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503f3b20

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FTranscodePageToGPU_CS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticResource'' @ 1503f3b30

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

// StaticResource'' @ 1503f3bb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_00_0A__07_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503f3c30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503f3cb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__01_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,2,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503f3d30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__03_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,4,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503f3db0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__02_00_00_00_0A__07_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,8,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticType'' @ 1503f3e30

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

void __cdecl `dynamic_atexit_destructor_for_'FMeshParticleVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FMeshParticleVertexFactory::StaticType);
  return;
}

// TempBSPElements'' @ 1503f3e50

void __cdecl `dynamic_atexit_destructor_for_'UModelComponent::TempBSPElements__(void)

{
  UModelComponent::TempBSPElements._72_4_ = 0;
  if (UModelComponent::TempBSPElements._64_8_ != 0) {
    FMemory::Free((void *)UModelComponent::TempBSPElements._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UModelComponent_*,TIndirectArray<FModelElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UModelComponent::TempBSPElements);
  return;
}

// `dynamic_atexit_destructor_for_'AddimulatedConnectionsCmd'' @ 1503f3e90

void __cdecl _dynamic_atexit_destructor_for__AddimulatedConnectionsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AddimulatedConnectionsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBufferBloatCooldownTimeInMS'' @ 1503f3eb0

void __cdecl _dynamic_atexit_destructor_for__CVarBufferBloatCooldownTimeInMS__(void)

{
  CVarBufferBloatCooldownTimeInMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBufferBloatCooldownTimeInMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCardRepresentation'' @ 1503f3ed0

void __cdecl _dynamic_atexit_destructor_for__CVarCardRepresentation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCardRepresentation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCardRepresentationAsyncBuildQueue'' @ 1503f3ef0

void __cdecl _dynamic_atexit_destructor_for__CVarCardRepresentationAsyncBuildQueue__(void)

{
  CVarCardRepresentationAsyncBuildQueue._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCardRepresentationAsyncBuildQueue);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCardRepresentationDebug'' @ 1503f3f10

void __cdecl _dynamic_atexit_destructor_for__CVarCardRepresentationDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCardRepresentationDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCardRepresentationDebugSurfelDirection'' @ 1503f3f30

void __cdecl _dynamic_atexit_destructor_for__CVarCardRepresentationDebugSurfelDirection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCardRepresentationDebugSurfelDirection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCardRepresentationMinDensity'' @ 1503f3f50

void __cdecl _dynamic_atexit_destructor_for__CVarCardRepresentationMinDensity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCardRepresentationMinDensity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCardRepresentationNormalTreshold'' @ 1503f3f70

void __cdecl _dynamic_atexit_destructor_for__CVarCardRepresentationNormalTreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCardRepresentationNormalTreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCloseTimingDebug'' @ 1503f3f90

void __cdecl _dynamic_atexit_destructor_for__CVarCloseTimingDebug__(void)

{
  CVarCloseTimingDebug._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCloseTimingDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeferUpdateRenderStates'' @ 1503f3fb0

void __cdecl _dynamic_atexit_destructor_for__CVarDeferUpdateRenderStates__(void)

{
  CVarDeferUpdateRenderStates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeferUpdateRenderStates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableBandwithThrottling'' @ 1503f3fd0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableBandwithThrottling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableBandwithThrottling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFlushDormancyUseDefaultStateForUnloadedLevels'' @ 1503f3ff0

void __cdecl
UE::Net::Connection::Private::
_dynamic_atexit_destructor_for__CVarFlushDormancyUseDefaultStateForUnloadedLevels__(void)

{
  CVarFlushDormancyUseDefaultStateForUnloadedLevels._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFlushDormancyUseDefaultStateForUnloadedLevels);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceNetFlush'' @ 1503f4010

void __cdecl _dynamic_atexit_destructor_for__CVarForceNetFlush__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceNetFlush);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogAllConnectionCleanup'' @ 1503f4030

void __cdecl _dynamic_atexit_destructor_for__CVarLogAllConnectionCleanup__(void)

{
  CVarLogAllConnectionCleanup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogAllConnectionCleanup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogUnhandledFaults'' @ 1503f4050

void __cdecl _dynamic_atexit_destructor_for__CVarLogUnhandledFaults__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogUnhandledFaults);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialParameterCollectionMaxVectorStorage'' @ 1503f4070

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialParameterCollectionMaxVectorStorage__(void)

{
  CVarMaterialParameterCollectionMaxVectorStorage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaterialParameterCollectionMaxVectorStorage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxChannelSize'' @ 1503f4090

void __cdecl _dynamic_atexit_destructor_for__CVarMaxChannelSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxChannelSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMeshCardRepresentationEstimate'' @ 1503f40b0

void __cdecl _dynamic_atexit_destructor_for__CVarMeshCardRepresentationEstimate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMeshCardRepresentationEstimate)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarMeshReductionModule'' @ 1503f40d0

void __cdecl _dynamic_atexit_destructor_for__CVarMeshReductionModule__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMeshReductionModule);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNanitePickingCrosshair'' @ 1503f40f0

void __cdecl _dynamic_atexit_destructor_for__CVarNanitePickingCrosshair__(void)

{
  CVarNanitePickingCrosshair._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNanitePickingCrosshair);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingAsyncCompute'' @ 1503f4110

void __cdecl Nanite::_dynamic_atexit_destructor_for__CVarNaniteStreamingAsyncCompute__(void)

{
  CVarNaniteStreamingAsyncCompute._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNaniteStreamingAsyncCompute);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingDynamicPageUploadBuffer'' @ 1503f4130

void __cdecl
Nanite::_dynamic_atexit_destructor_for__CVarNaniteStreamingDynamicPageUploadBuffer__(void)

{
  CVarNaniteStreamingDynamicPageUploadBuffer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingDynamicPageUploadBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingGPURequestsBufferMaxSize'' @ 1503f4150

void __cdecl
Nanite::_dynamic_atexit_destructor_for__CVarNaniteStreamingGPURequestsBufferMaxSize__(void)

{
  CVarNaniteStreamingGPURequestsBufferMaxSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingGPURequestsBufferMaxSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingGPURequestsBufferMinSize'' @ 1503f4170

void __cdecl
Nanite::_dynamic_atexit_destructor_for__CVarNaniteStreamingGPURequestsBufferMinSize__(void)

{
  CVarNaniteStreamingGPURequestsBufferMinSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingGPURequestsBufferMinSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteStreamingTranscodeWaveSize'' @ 1503f4190

void __cdecl Nanite::_dynamic_atexit_destructor_for__CVarNaniteStreamingTranscodeWaveSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteStreamingTranscodeWaveSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDoPacketOrderCorrection'' @ 1503f41b0

void __cdecl _dynamic_atexit_destructor_for__CVarNetDoPacketOrderCorrection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDoPacketOrderCorrection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetEnableCongestionControl'' @ 1503f41d0

void __cdecl _dynamic_atexit_destructor_for__CVarNetEnableCongestionControl__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetEnableCongestionControl);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetFlushDormantSubObjects'' @ 1503f41f0

void __cdecl
UE::Net::Connection::Private::_dynamic_atexit_destructor_for__CVarNetFlushDormantSubObjects__(void)

{
  CVarNetFlushDormantSubObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetFlushDormantSubObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetFlushDormantSubObjectsCheckConditions'' @ 1503f4210

void __cdecl
UE::Net::Connection::Private::
_dynamic_atexit_destructor_for__CVarNetFlushDormantSubObjectsCheckConditions__(void)

{
  CVarNetFlushDormantSubObjectsCheckConditions._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetFlushDormantSubObjectsCheckConditions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetGracefulCloseEnabled'' @ 1503f4230

void __cdecl
UE::Net::Connection::Private::_dynamic_atexit_destructor_for__CVarNetGracefulCloseEnabled__(void)

{
  CVarNetGracefulCloseEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetGracefulCloseEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPacketOrderCorrectionEnableThreshold'' @ 1503f4250

void __cdecl _dynamic_atexit_destructor_for__CVarNetPacketOrderCorrectionEnableThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetPacketOrderCorrectionEnableThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPacketOrderMaxCachedPackets'' @ 1503f4270

void __cdecl _dynamic_atexit_destructor_for__CVarNetPacketOrderMaxCachedPackets__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPacketOrderMaxCachedPackets)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPacketOrderMaxMissingPackets'' @ 1503f4290

void __cdecl _dynamic_atexit_destructor_for__CVarNetPacketOrderMaxMissingPackets__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetPacketOrderMaxMissingPackets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetTrackFlushedDormantObjects'' @ 1503f42b0

void __cdecl
UE::Net::Connection::Private::_dynamic_atexit_destructor_for__CVarNetTrackFlushedDormantObjects__
          (void)

{
  CVarNetTrackFlushedDormantObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetTrackFlushedDormantObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPingDisplayServerTime'' @ 1503f42d0

void __cdecl _dynamic_atexit_destructor_for__CVarPingDisplayServerTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPingDisplayServerTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPingExcludeFrameTime'' @ 1503f42f0

void __cdecl _dynamic_atexit_destructor_for__CVarPingExcludeFrameTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPingExcludeFrameTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPingUsePacketRecvTime'' @ 1503f4310

void __cdecl _dynamic_atexit_destructor_for__CVarPingUsePacketRecvTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPingUsePacketRecvTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRandomizeSequence'' @ 1503f4330

void __cdecl _dynamic_atexit_destructor_for__CVarRandomizeSequence__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRandomizeSequence);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipMissingLevelDisconnect'' @ 1503f4350

void __cdecl _dynamic_atexit_destructor_for__CVarSkipMissingLevelDisconnect__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipMissingLevelDisconnect);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTickAllOpenChannels'' @ 1503f4370

void __cdecl _dynamic_atexit_destructor_for__CVarTickAllOpenChannels__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTickAllOpenChannels);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503f4390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<FDepecatedModelVertex,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_155227de8)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f43c0

void __cdecl
```Nanite::FStreamingPageUploader::ResourceUploadTo'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f43c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503f43e0

void __cdecl
`UNetConnection::GetQueuedActorDelinquencyAnalytics'::__l2::_dynamic_atexit_destructor_for__Empty__
          (void)

{
  ::Empty.DelinquentQueuedActors.AllDelinquents.HashSize = 0;
  if (::Empty.DelinquentQueuedActors.AllDelinquents.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Empty.DelinquentQueuedActors.AllDelinquents.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Empty.DelinquentQueuedActors.AllDelinquents.Elements);
  if (::Empty.DelinquentQueuedActors.TopOffenders.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(::Empty.DelinquentQueuedActors.TopOffenders.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 1503f4430

void __cdecl
`UMorphTarget::GetCustomImportedSourceFilename'::__l2::_dynamic_atexit_destructor_for__EmptyString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ExternalTextureNames'' @ 1503f4450

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__ExternalTextureNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = TextureCollectionNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'FMeshParticleUniformParametersMetadataRegistration'' @ 1503f44a0

void __cdecl
_dynamic_atexit_destructor_for__FMeshParticleUniformParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'ForceOnePacketPerBunch'' @ 1503f44b0

void __cdecl _dynamic_atexit_destructor_for__ForceOnePacketPerBunch__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ForceOnePacketPerBunch);
  return;
}

// `dynamic_atexit_destructor_for_'GDefaultMaterialParameterCollectionInstances'' @ 1503f44d0

void __cdecl _dynamic_atexit_destructor_for__GDefaultMaterialParameterCollectionInstances__(void)

{
  GDefaultMaterialParameterCollectionInstances._72_4_ = 0;
  if (GDefaultMaterialParameterCollectionInstances._64_8_ != 0) {
    FMemory::Free((void *)GDefaultMaterialParameterCollectionInstances._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GDefaultMaterialParameterCollectionInstances);
  return;
}

// `dynamic_atexit_destructor_for_'GDummyPrevTransformBuffer'' @ 1503f4510

void __cdecl _dynamic_atexit_destructor_for__GDummyPrevTransformBuffer__(void)

{
  GDummyPrevTransformBuffer._0_8_ = &___7__TGlobalResource_VFDummyPrevTransformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GDummyPrevTransformBuffer);
  GDummyPrevTransformBuffer._0_8_ = &___7FDummyPrevTransformBuffer__6B_;
  if (GDummyPrevTransformBuffer._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GDummyPrevTransformBuffer._40_8_);
  }
  if (GDummyPrevTransformBuffer._32_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GDummyPrevTransformBuffer._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GDummyPrevTransformBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GNaniteVisualizationData'' @ 1503f4580

void __cdecl _dynamic_atexit_destructor_for__GNaniteVisualizationData__(void)

{
  if (GNaniteVisualizationData.ConsoleDocumentationOverviewTargets.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GNaniteVisualizationData.ConsoleDocumentationOverviewTargets.Data.
                  AllocatorInstance.Data);
  }
  if (GNaniteVisualizationData.ConsoleDocumentationVisualizationMode.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GNaniteVisualizationData.ConsoleDocumentationVisualizationMode.Data.
                  AllocatorInstance.Data);
  }
  if (GNaniteVisualizationData.CurrentConsoleVisualizationMode.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GNaniteVisualizationData.CurrentConsoleVisualizationMode.Data.AllocatorInstance.
                  Data);
  }
  if (GNaniteVisualizationData.CurrentOverviewModeIDs.AllocatorInstance.SecondaryData !=
      (ForElementType<int>)0x0) {
    FMemory::Free((void *)GNaniteVisualizationData.CurrentOverviewModeIDs.AllocatorInstance.
                          SecondaryData);
  }
  if (GNaniteVisualizationData.CurrentOverviewModeNames.AllocatorInstance.SecondaryData !=
      (ForElementType<FName>)0x0) {
    FMemory::Free((void *)GNaniteVisualizationData.CurrentOverviewModeNames.AllocatorInstance.
                          SecondaryData);
  }
  if (GNaniteVisualizationData.CurrentOverviewModeList.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GNaniteVisualizationData.CurrentOverviewModeList.Data.AllocatorInstance.Data);
  }
  GNaniteVisualizationData.ModeMap._72_4_ = 0;
  if (GNaniteVisualizationData.ModeMap._64_8_ != 0) {
    FMemory::Free((void *)GNaniteVisualizationData.ModeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNaniteVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNaniteVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNaniteVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GNaniteVisualizationData);
  return;
}

// `dynamic_atexit_destructor_for_'GVertexViewModeOverrideOwnerName'' @ 1503f4620

void __cdecl _dynamic_atexit_destructor_for__GVertexViewModeOverrideOwnerName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GVertexViewModeOverrideOwnerName.Data.AllocatorInstance.Data;
  if (GVertexViewModeOverrideOwnerName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (GVertexViewModeOverrideOwnerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'LogGlobalStatus'' @ 1503f4640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGlobalStatus__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGlobalStatus);
  return;
}

// `dynamic_atexit_destructor_for_'LogModel'' @ 1503f4660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogModel__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogModel);
  return;
}

// `dynamic_atexit_destructor_for_'LogModelComponent'' @ 1503f4680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogModelComponent__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogModelComponent);
  return;
}

// `dynamic_atexit_destructor_for_'LogNavigationPoint'' @ 1503f46a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavigationPoint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavigationPoint);
  return;
}

// `dynamic_atexit_destructor_for_'LoggedResults'' @ 1503f46c0

void __cdecl
``UNetConnection::InitBase'::__l22::<lambda_1>::operator()'::__l2::
_dynamic_atexit_destructor_for__LoggedResults__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LoggedResults.AllocatorInstance.Data;
  if (LoggedResults.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LoggedResults.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'MaterialCacheTagBuffer'' @ 1503f46e0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__MaterialCacheTagBuffer__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = MaterialCacheTagPageTableNames0;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'MaterialCacheTagPageTableNames0'' @ 1503f4730

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__MaterialCacheTagPageTableNames0__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = MaterialCacheTagPhysicalNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'MaterialCacheTagPhysicalNames'' @ 1503f4780

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__MaterialCacheTagPhysicalNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = MaterialCacheTagPhysicalSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'MaterialCacheTagPhysicalSamplerNames'' @ 1503f47d0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__MaterialCacheTagPhysicalSamplerNames__(void)

{
  void *pvVar1;
  longlong lVar2;
  TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo> *pTVar3;
  
  pTVar3 = &Z_Registration_Info_UScriptStruct_FMemberReference;
  lVar2 = 0x80;
  do {
    pvVar1 = (void *)pTVar3[-1].ReloadVersionInfo.Size;
    pTVar3 = (TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo> *)
             &pTVar3[-1].ReloadVersionInfo;
    lVar2 = lVar2 + -1;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'MediaTextureSamplerNames'' @ 1503f4820

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__MediaTextureSamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = VirtualTexturePageTableNames0;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'PrintActorReportCmd'' @ 1503f4870

void __cdecl _dynamic_atexit_destructor_for__PrintActorReportCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&PrintActorReportCmd);
  return;
}

// `dynamic_atexit_destructor_for_'RemoveSimulatedConnectionsCmd'' @ 1503f4890

void __cdecl _dynamic_atexit_destructor_for__RemoveSimulatedConnectionsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&RemoveSimulatedConnectionsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'SparseVolumeTexturePageTableNames'' @ 1503f48b0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__SparseVolumeTexturePageTableNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = SparseVolumeTexturePhysicalANames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'SparseVolumeTexturePhysicalANames'' @ 1503f4900

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__SparseVolumeTexturePhysicalANames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = SparseVolumeTexturePhysicalBNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'SparseVolumeTexturePhysicalBNames'' @ 1503f4950

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__SparseVolumeTexturePhysicalBNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = SparseVolumeTexturePhysicalSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'SparseVolumeTexturePhysicalSamplerNames'' @ 1503f49a0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__SparseVolumeTexturePhysicalSamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = MaterialCacheTagBuffer;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f49f0

void __cdecl
`FMeshParticleUniformParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f4a10

void __cdecl
`Nanite::FClearStreamingRequestCount_CS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_Nanite::FClearStreamingRequestCount_CS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f4a30

void __cdecl
`Nanite::FScatterUpdates_CS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_Nanite::FScatterUpdates_CS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f4a50

void __cdecl
`Nanite::FTranscodePageToGPU_CS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_Nanite::FTranscodePageToGPU_CS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f4a70

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
`Nanite::FClearStreamingRequestCount_CS::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f4a90

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
`Nanite::FScatterUpdates_CS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f4ab0

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
`Nanite::FTranscodePageToGPU_CS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'Texture2DArrayNames'' @ 1503f4ad0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__Texture2DArrayNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = Texture2DArraySamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'Texture2DArraySamplerNames'' @ 1503f4b20

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__Texture2DArraySamplerNames__(void)

{
  void *pvVar1;
  longlong lVar2;
  TRegistrationInfo<UClass,FClassReloadVersionInfo> *pTVar3;
  
  pTVar3 = &Z_Registration_Info_UClass_UMeshSimplificationSettings;
  lVar2 = 0x80;
  do {
    pvVar1 = (void *)pTVar3[-1].ReloadVersionInfo.Size;
    pTVar3 = (TRegistrationInfo<UClass,FClassReloadVersionInfo> *)&pTVar3[-1].ReloadVersionInfo;
    lVar2 = lVar2 + -1;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'Texture2DNames'' @ 1503f4b70

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::_dynamic_atexit_destructor_for__Texture2DNames__
          (void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = Texture2DSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'Texture2DSamplerNames'' @ 1503f4bc0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__Texture2DSamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = TextureCubeNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCollectionNames'' @ 1503f4c10

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCollectionNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = TextureCollectionPhysicalNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCollectionPageTableNames'' @ 1503f4c60

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCollectionPageTableNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = MediaTextureSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCollectionPhysicalNames'' @ 1503f4cb0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCollectionPhysicalNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = TextureCollectionSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCollectionSamplerNames'' @ 1503f4d00

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCollectionSamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = TextureCollectionPageTableNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCubeArrayNames'' @ 1503f4d50

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCubeArrayNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = TextureCubeArraySamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCubeArraySamplerNames'' @ 1503f4da0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCubeArraySamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = VolumeTextureNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCubeNames'' @ 1503f4df0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCubeNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = TextureCubeSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TextureCubeSamplerNames'' @ 1503f4e40

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__TextureCubeSamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = Texture2DArrayNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'TypeMap'' @ 1503f4e90

void __cdecl
`FMaterialUniformExpressionType::GetTypeMap'::__l2::_dynamic_atexit_destructor_for__TypeMap__(void)

{
  TypeMap._72_4_ = 0;
  if (TypeMap._64_8_ != 0) {
    FMemory::Free((void *)TypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMaterialUniformExpressionType_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMaterialUniformExpressionType_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMaterialUniformExpressionType_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TypeMap);
  return;
}

// `dynamic_atexit_destructor_for_'VirtualTexturePageTableIndirectionNames'' @ 1503f4ed0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__VirtualTexturePageTableIndirectionNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = VirtualTexturePhysicalNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'VirtualTexturePageTableNames0'' @ 1503f4f20

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__VirtualTexturePageTableNames0__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = VirtualTexturePageTableNames1;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'VirtualTexturePageTableNames1'' @ 1503f4f70

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__VirtualTexturePageTableNames1__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = VirtualTexturePageTableIndirectionNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'VirtualTexturePhysicalNames'' @ 1503f4fc0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__VirtualTexturePhysicalNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = VirtualTexturePhysicalSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'VirtualTexturePhysicalSamplerNames'' @ 1503f5010

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__VirtualTexturePhysicalSamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = SparseVolumeTexturePageTableNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'VolumeTextureNames'' @ 1503f5060

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__VolumeTextureNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = VolumeTextureSamplerNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'VolumeTextureSamplerNames'' @ 1503f50b0

void __cdecl
`FUniformExpressionSet::CreateBufferStruct'::__l2::
_dynamic_atexit_destructor_for__VolumeTextureSamplerNames__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = ExternalTextureNames;
  lVar2 = 0x80;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

