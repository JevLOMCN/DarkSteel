// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 669

// OnCreateRenderThreadResources'' @ 14119ac10

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 14119ac30

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// PositionCurve'' @ 14119ac50

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 14119ac70

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 14119ac90

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// StaticResource'' @ 14119acb0

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

// StaticResource'' @ 14119ae50

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

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 14119aff0

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'CVarCreatePrimitivesComponentless'' @ 14119b010

void __cdecl
PCGStaticMeshSpawnerDataInterface::_dynamic_initializer_for__CVarCreatePrimitivesComponentless__
          (void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCreatePrimitivesComponentless,L"pcg.RuntimeGeneration.ISM.ComponentlessPrimitives"
             ,local_res8,
             L"Uses a component-less path for creating primitives in game worlds (PIE and standalone)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCreatePrimitivesComponentless__);
  return;
}

// `dynamic_initializer_for_'CVarEnableLandscapeVTSampling'' @ 14119b060

void __cdecl
PCGLandscapeDataInterface::_dynamic_initializer_for__CVarEnableLandscapeVTSampling__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableLandscapeVTSampling,L"pcg.GPU.EnableLandscapeVTSampling",local_res8,
             L"Allow the landscape data interface to use landscape virtual textures if available.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarEnableLandscapeVTSampling__);
  return;
}

// `dynamic_initializer_for_'CVarTriggerGPUCaptureDispatchIndex'' @ 14119b0b0

void __cdecl
PCGInstanceDataInterface::_dynamic_initializer_for__CVarTriggerGPUCaptureDispatchIndex__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTriggerGPUCaptureDispatchIndex,
             L"pcg.GPU.TriggerRenderCaptures.InstanceSceneWriter",&TriggerGPUCaptureDispatchIndex,
             L"Index of the next dispatch to capture. I.e. if set to 2, will ignore one dispatch and then trigger a capture on the next one."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTriggerGPUCaptureDispatchIndex__);
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 14119b100

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 14119b120

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'ControlPointDomainName'' @ 14119b140

void __cdecl PCGSplineData::_dynamic_initializer_for__ControlPointDomainName__(void)

{
  ::FName::FName(&ControlPointDomainName,"ControlPoints");
  return;
}

// `dynamic_initializer_for_'CouldNotLoadStaticMeshFormat'' @ 14119b160

void __cdecl
PCGSkinnedMeshSpawnerDataInterface::_dynamic_initializer_for__CouldNotLoadStaticMeshFormat__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&CouldNotLoadStaticMeshFormat,L"PCGSkinnedMeshSpawnerDataInterface",
             L"CouldNotLoadSkinnedMesh",L"Could not load Skinned mesh from path \'{0}\'.");
  atexit(_dynamic_atexit_destructor_for__CouldNotLoadStaticMeshFormat__);
  return;
}

// `dynamic_initializer_for_'CouldNotLoadStaticMeshFormat'' @ 14119b1a0

void __cdecl
PCGStaticMeshSpawnerDataInterface::_dynamic_initializer_for__CouldNotLoadStaticMeshFormat__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&CouldNotLoadStaticMeshFormat,L"PCGStaticMeshSpawnerDataInterface",
             L"CouldNotLoadStaticMesh",L"Could not load static mesh from path \'{0}\'.");
  atexit(_dynamic_atexit_destructor_for__CouldNotLoadStaticMeshFormat__);
  return;
}

// `dynamic_initializer_for_'Data'' @ 14119b1e0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Data__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Data");
  Data.DebugName = *pFVar1;
  Data.Flag = Data;
  Data.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DataDomainName'' @ 14119b220

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 14119b240

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Default__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Default");
  Default.DebugName = *pFVar1;
  Default.Flag = Default;
  Default.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 14119b280

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 14119b2a0

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 14119b2c0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 14119b2e0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 14119b300

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 14119b320

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 14119b340

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 14119b360

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 14119b380

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 14119b3a0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 14119b3c0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'ElementCountsPinLabel'' @ 14119b3e0

void __cdecl PCGMetadataPartitionConstants::_dynamic_initializer_for__ElementCountsPinLabel__(void)

{
  ::FName::FName(&ElementCountsPinLabel,L"ElementCounts");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 14119b400

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Elements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Elements");
  Elements.DebugName = *pFVar1;
  Elements.Flag = Elements;
  Elements.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 14119b440

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 14119b460

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 14119b480

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 14119b4a0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'InstanceCountsPinLabel'' @ 14119b4c0

void __cdecl
PCGSkinnedMeshSpawnerConstants::_dynamic_initializer_for__InstanceCountsPinLabel__(void)

{
  ::FName::FName(&InstanceCountsPinLabel,L"InstanceCounts");
  return;
}

// `dynamic_initializer_for_'InstanceCountsPinLabel'' @ 14119b4e0

void __cdecl
PCGStaticMeshSpawnerKernelConstants::_dynamic_initializer_for__InstanceCountsPinLabel__(void)

{
  ::FName::FName(&InstanceCountsPinLabel,L"InstanceCounts");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 14119b500

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Invalid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Invalid");
  Invalid.DebugName = *pFVar1;
  Invalid.Flag = Invalid;
  Invalid.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'LastAttributeName'' @ 14119b540

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 14119b560

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 14119b580

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 14119b5a0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 14119b5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 14119b600

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 14119b620

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14119b640

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGBlueprintElement_ExecuteWithContext'' @ 14119b660

void __cdecl _dynamic_initializer_for__NAME_UPCGBlueprintElement_ExecuteWithContext__(void)

{
  FName::FName(&NAME_UPCGBlueprintElement_ExecuteWithContext,L"ExecuteWithContext");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGBlueprintElement_IterationLoopBody'' @ 14119b680

void __cdecl _dynamic_initializer_for__NAME_UPCGBlueprintElement_IterationLoopBody__(void)

{
  FName::FName(&NAME_UPCGBlueprintElement_IterationLoopBody,L"IterationLoopBody");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGBlueprintElement_NestedLoopBody'' @ 14119b6a0

void __cdecl _dynamic_initializer_for__NAME_UPCGBlueprintElement_NestedLoopBody__(void)

{
  FName::FName(&NAME_UPCGBlueprintElement_NestedLoopBody,L"NestedLoopBody");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGBlueprintElement_PointLoopBody'' @ 14119b6c0

void __cdecl _dynamic_initializer_for__NAME_UPCGBlueprintElement_PointLoopBody__(void)

{
  FName::FName(&NAME_UPCGBlueprintElement_PointLoopBody,L"PointLoopBody");
  return;
}

// `dynamic_initializer_for_'NAME_UPCGBlueprintElement_VariableLoopBody'' @ 14119b6e0

void __cdecl _dynamic_initializer_for__NAME_UPCGBlueprintElement_VariableLoopBody__(void)

{
  FName::FName(&NAME_UPCGBlueprintElement_VariableLoopBody,L"VariableLoopBody");
  return;
}

// `dynamic_initializer_for_'NoMeshEntriesFormat'' @ 14119b700

void __cdecl
PCGSkinnedMeshSpawnerDataInterface::_dynamic_initializer_for__NoMeshEntriesFormat__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&NoMeshEntriesFormat,L"PCGSkinnedMeshSpawnerDataInterface",L"NoMeshEntries",
             L"No mesh entries provided in weighted mesh selector.");
  atexit(_dynamic_atexit_destructor_for__NoMeshEntriesFormat__);
  return;
}

// `dynamic_initializer_for_'NoMeshEntriesFormat'' @ 14119b740

void __cdecl
PCGStaticMeshSpawnerDataInterface::_dynamic_initializer_for__NoMeshEntriesFormat__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&NoMeshEntriesFormat,L"PCGStaticMeshSpawnerDataInterface",L"NoMeshEntries",
             L"No mesh entries provided in weighted mesh selector.");
  atexit(_dynamic_atexit_destructor_for__NoMeshEntriesFormat__);
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 14119b780

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 14119b7a0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 14119b7c0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 14119b7e0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 14119b800

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 14119b820

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 14119b840

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 14119b860

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 14119b880

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 14119b8a0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 14119b8c0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SelectedFlagAttributeName'' @ 14119b8e0

void __cdecl PCGCopyPointsConstants::_dynamic_initializer_for__SelectedFlagAttributeName__(void)

{
  ::FName::FName(&SelectedFlagAttributeName,L"SelectForCopy");
  return;
}

// `dynamic_initializer_for_'SelectedFlagsPinLabel'' @ 14119b900

void __cdecl PCGCopyPointsConstants::_dynamic_initializer_for__SelectedFlagsPinLabel__(void)

{
  ::FName::FName(&SelectedFlagsPinLabel,L"SelectedFlags");
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 14119b920

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 14119b940

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'SourcePointsLabel'' @ 14119b960

void __cdecl PCGCopyPointsConstants::_dynamic_initializer_for__SourcePointsLabel__(void)

{
  ::FName::FName(&SourcePointsLabel,L"Source");
  return;
}

// `dynamic_initializer_for_'TargetPointsLabel'' @ 14119b980

void __cdecl PCGCopyPointsConstants::_dynamic_initializer_for__TargetPointsLabel__(void)

{
  ::FName::FName(&TargetPointsLabel,L"Target");
  return;
}

// `dynamic_initializer_for_'TooManyPrimitivesFormat'' @ 14119b9a0

void __cdecl
PCGSkinnedMeshSpawnerDataInterface::_dynamic_initializer_for__TooManyPrimitivesFormat__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&TooManyPrimitivesFormat,L"PCGSkinnedMeshSpawnerDataInterface",L"TooManyPrimitives",
             L"Attempted to emit too many primitive components, terminated after creating \'{0}\'.")
  ;
  atexit(_dynamic_atexit_destructor_for__TooManyPrimitivesFormat__);
  return;
}

// `dynamic_initializer_for_'TooManyPrimitivesFormat'' @ 14119b9e0

void __cdecl
PCGStaticMeshSpawnerDataInterface::_dynamic_initializer_for__TooManyPrimitivesFormat__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&TooManyPrimitivesFormat,L"PCGStaticMeshSpawnerDataInterface",L"TooManyPrimitives",
             L"Attempted to emit too many primitive components, terminated after creating \'{0}\'.")
  ;
  atexit(_dynamic_atexit_destructor_for__TooManyPrimitivesFormat__);
  return;
}

// `dynamic_initializer_for_'ValueAttributeName'' @ 14119ba20

void __cdecl
PCGCountUniqueAttributeValuesConstants::_dynamic_initializer_for__ValueAttributeName__(void)

{
  ::FName::FName(&ValueAttributeName,L"UniqueValue");
  return;
}

// `dynamic_initializer_for_'ValueCountAttributeName'' @ 14119ba40

void __cdecl
PCGCountUniqueAttributeValuesConstants::_dynamic_initializer_for__ValueCountAttributeName__(void)

{
  ::FName::FName(&ValueCountAttributeName,L"UniqueValueCount");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Internal_Data_Tool_PCGToolSplineData_h__Script_PCG_3764884018'' @ 14119ba60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Internal_Data_Tool_PCGToolSplineData_h__Script_PCG_3764884018__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Internal_Data_Tool_PCGToolSplineData_h__Script_PCG_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Internal_Data_Tool_PCGToolVolumeData_h__Script_PCG_3392840031'' @ 14119baa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Internal_Data_Tool_PCGToolVolumeData_h__Script_PCG_3392840031__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Internal_Data_Tool_PCGToolVolumeData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h__Script_PCG_1354305261'' @ 14119bae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h__Script_PCG_1354305261__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h__Script_PCG_2473490691'' @ 14119bb20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h__Script_PCG_2473490691__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGCountUniqueAttributeValuesKernel_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h__Script_PCG_3016960395'' @ 14119bb60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h__Script_PCG_3016960395__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_BuiltInKernels_PCGDataNumKernel_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGCountUniqueAttributeValuesDataInterface_h__Script_PCG_1939707732'' @ 14119bba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGCountUniqueAttributeValuesDataInterface_h__Script_PCG_1939707732__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGCountUniqueAttributeValuesDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h__Script_PCG_2003803019'' @ 14119bbe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h__Script_PCG_2003803019__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCopyPointsAnalysisDataInterface_h__Script_PCG_2213133090'' @ 14119bc20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCopyPointsAnalysisDataInterface_h__Script_PCG_2213133090__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCopyPointsAnalysisDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCopyPointsDataInterface_h__Script_PCG_2664554595'' @ 14119bc60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCopyPointsDataInterface_h__Script_PCG_2664554595__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCopyPointsDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCullPointsOutsideActorBoundsDataInterface_h__Script_PCG_1724651239'' @ 14119bca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCullPointsOutsideActorBoundsDataInterface_h__Script_PCG_1724651239__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCullPointsOutsideActorBoundsDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCustomHLSLDataInterface_h__Script_PCG_3561519783'' @ 14119bce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCustomHLSLDataInterface_h__Script_PCG_3561519783__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGCustomHLSLDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGMetadataPartitionDataInterface_h__Script_PCG_80951355'' @ 14119bd20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGMetadataPartitionDataInterface_h__Script_PCG_80951355__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGMetadataPartitionDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGNormalToDensityDataInterface_h__Script_PCG_24025072'' @ 14119bd60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGNormalToDensityDataInterface_h__Script_PCG_24025072__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGNormalToDensityDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGSkinnedMeshSpawnerDataInterface_h__Script_PCG_1800424573'' @ 14119bda0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGSkinnedMeshSpawnerDataInterface_h__Script_PCG_1800424573__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGSkinnedMeshSpawnerDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGStaticMeshSpawnerDataInterface_h__Script_PCG_2077242589'' @ 14119bde0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGStaticMeshSpawnerDataInterface_h__Script_PCG_2077242589__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGStaticMeshSpawnerDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGTransformPointsDataInterface_h__Script_PCG_2243653038'' @ 14119be20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGTransformPointsDataInterface_h__Script_PCG_2243653038__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_Elements_PCGTransformPointsDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h__Script_PCG_1725118297'' @ 14119be60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h__Script_PCG_1725118297__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h__Script_PCG_593063616'' @ 14119bea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h__Script_PCG_593063616__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h__Script_PCG_2048242527'' @ 14119bee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h__Script_PCG_2048242527__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h__Script_PCG_3061624681'' @ 14119bf20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h__Script_PCG_3061624681__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h__Script_PCG_2752170731'' @ 14119bf60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h__Script_PCG_2752170731__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h__Script_PCG_3294407245'' @ 14119bfa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h__Script_PCG_3294407245__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h__Script_PCG_1005786513'' @ 14119bfe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h__Script_PCG_1005786513__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h__Script_PCG_1014859513'' @ 14119c020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h__Script_PCG_1014859513__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGTextureDataInterface_h__Script_PCG_244159541'' @ 14119c060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGTextureDataInterface_h__Script_PCG_244159541__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGTextureDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h__Script_PCG_2386994612'' @ 14119c0a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h__Script_PCG_2386994612__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h__Script_PCG_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Components_PCGProceduralISMComponentDescriptor_h__Script_PCG_432893935'' @ 14119c0e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Components_PCGProceduralISMComponentDescriptor_h__Script_PCG_432893935__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Components_PCGProceduralISMComponentDescriptor_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h__Script_PCG_238594674'' @ 14119c120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h__Script_PCG_238594674__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h__Script_PCG_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h__Script_PCG_1316463814'' @ 14119c160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h__Script_PCG_1316463814__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h__Script_PCG_1229219154'' @ 14119c1a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h__Script_PCG_1229219154__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Blueprint_PCGBlueprintDeprecatedElement_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `scalar_deleting_destructor' @ 149729890

void * __thiscall
FPCGInteractiveToolWorkingData_Spline::_scalar_deleting_destructor_
          (FPCGInteractiveToolWorkingData_Spline *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->SplineComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149729920

void * __thiscall
FPCGInteractiveToolWorkingData_SplineSurface::_scalar_deleting_destructor_
          (FPCGInteractiveToolWorkingData_SplineSurface *this,uint param_1)

{
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Spline @ 149729970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Spline(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Spline.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Spline.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Spline_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Spline.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Spline.InnerSingleton;
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

// NewStructOps @ 1497299f0

void * __cdecl
Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Spline_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGInteractiveToolWorkingData_Spline,&UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData_Spline>,&UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData_Spline>,&UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData_Spline>,&UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData_Spline>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGManagedProceduralISMComponent @ 149729bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedProceduralISMComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedProceduralISMComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.OuterSingleton;
}

// Z_Construct_UClass_UPCGProceduralISMComponent @ 149729bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGProceduralISMComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGProceduralISMComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGProceduralISMComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGProceduralISMComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGProceduralISMComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGProceduralISMComponentDescriptor @ 149729c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGProceduralISMComponentDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGProceduralISMComponentDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGProceduralISMComponentDescriptor.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGProceduralISMComponentDescriptor_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FPCGProceduralISMComponentDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGProceduralISMComponentDescriptor.InnerSingleton;
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

// Z_Construct_UFunction_UPCGProceduralISMComponent_ClearInstances @ 149729cb0

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_ClearInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_ClearInstances_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGBlueprintElement @ 149729cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGBlueprintElement(void)

{
  if (Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton,
               &Z_Construct_UClass_UPCGBlueprintElement_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintElement.OuterSingleton;
}

// NewStructOps @ 149729df0

void * __cdecl
Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGInteractiveToolWorkingData_SplineSurface,&UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData_SplineSurface>,&UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData_SplineSurface>,&UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData_SplineSurface>,&UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData_SplineSurface>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_GetBounds @ 149729e30

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_GetBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_GetBounds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_GetCullDistances @ 149729f30

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_GetCullDistances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_GetCullDistances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_GetMinDrawDistance @ 14972a0f0

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_GetMinDrawDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_GetMinDrawDistance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_GetNumCustomDataFloats @ 14972a230

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_GetNumCustomDataFloats(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_GetNumCustomDataFloats_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_GetNumInstances @ 14972a330

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_GetNumInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_GetNumInstances_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_SetBounds @ 14972a5b0

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_SetBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_SetBounds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext @ 14972a5f0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_ExecuteWithContext_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_SetCullDistances @ 14972a630

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_SetCullDistances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_SetCullDistances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_SetLocalBounds @ 14972a8b0

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_SetLocalBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_SetLocalBounds_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataInterface @ 14972a8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataInterface.
                OuterSingleton,
               &Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataInterface_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataInterface.OuterSingleton;
}

// Z_Construct_UFunction_UPCGBlueprintElement_GetContext @ 14972a930

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_GetContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_GetContext_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataProvider @ 14972a970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.
                OuterSingleton,
               &Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataProvider_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.OuterSingleton;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_SetMinDrawDistance @ 14972a9b0

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_SetMinDrawDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_SetMinDrawDistance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream @ 14972a9f0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_GetRandomStream_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_SetNumCustomDataFloats @ 14972aa30

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_SetNumCustomDataFloats(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_SetNumCustomDataFloats_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14972aa70

void * __thiscall
FPCGInteractiveToolWorkingData_Volume::_scalar_deleting_destructor_
          (FPCGInteractiveToolWorkingData_Volume *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->BoxComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->BrushComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// Z_Construct_UFunction_UPCGBlueprintElement_GetSeed @ 14972aad0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_GetSeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_GetSeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel @ 14972ab10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel(void)

{
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.OuterSingleton,
               &Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.OuterSingleton;
}

// NewStructOps @ 14972ab50

void * __cdecl
Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Volume_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGInteractiveToolWorkingData_Volume,&UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData_Volume>,&UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData_Volume>,&UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData_Volume>,&UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData_Volume>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGProceduralISMComponent_SetNumInstances @ 14972ab90

UFunction * __cdecl Z_Construct_UFunction_UPCGProceduralISMComponent_SetNumInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGProceduralISMComponent_SetNumInstances_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bEmitPerDataCounts_SetBit @ 14972abd0

void __cdecl
Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_Statics::NewProp_bEmitPerDataCounts_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_bOutputRawBuffer_SetBit @ 14972abe0

void __cdecl
Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_Statics::NewProp_bOutputRawBuffer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  return;
}

// Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop @ 14972abf0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGNormalToDensityDataInterface @ 14972ac30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGNormalToDensityDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGNormalToDensityDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGNormalToDensityDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGNormalToDensityDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGNormalToDensityProvider @ 14972ac70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGNormalToDensityProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGNormalToDensityProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGNormalToDensityProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGNormalToDensityProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGDataCollectionDataInterface @ 14972acb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataCollectionDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGDataCollectionDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataCollectionDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGDataCollectionDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGDataCollectionDataProvider @ 14972acf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataCollectionDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGDataCollectionDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.OuterSingleton;
}

// NewProp_bRequiresZeroInitialization_SetBit @ 14972ad30

void __cdecl
Z_Construct_UClass_UPCGDataCollectionDataInterface_Statics::
NewProp_bRequiresZeroInitialization_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UClass_UPCGUserParametersData_NoRegister @ 14972ad40

UClass * __cdecl Z_Construct_UClass_UPCGUserParametersData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUserParametersData",
               &Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton,
               UPCGUserParametersData::StaticRegisterNativesUPCGUserParametersData,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGUserParametersData>,
               InternalVTableHelperCtorCaller<UPCGUserParametersData>,local_res8,
               UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton;
}

// Z_Construct_UClass_UPCGRawBufferDataInterface @ 14972aec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGRawBufferDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGRawBufferDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGRawBufferDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGRawBufferDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGRawBufferDataProvider @ 14972af00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGRawBufferDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGRawBufferDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGRawBufferDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGRawBufferDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferDataProvider.OuterSingleton;
}

// NewProp_bRequiresZeroInitialization_SetBit @ 14972af40

void __cdecl
Z_Construct_UClass_UPCGRawBufferDataInterface_Statics::NewProp_bRequiresZeroInitialization_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14972af50

void __cdecl
Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x348) = 1;
  return;
}

// NewProp_bHasRootLocation_SetBit @ 14972af60

void __cdecl
Z_Construct_UClass_UPCGManagedProceduralISMComponent_Statics::NewProp_bHasRootLocation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody @ 14972af70

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_IterationLoopBody_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGUserParametersData @ 14972b070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGUserParametersData(void)

{
  if (Z_Registration_Info_UClass_UPCGUserParametersData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGUserParametersData.OuterSingleton,
               &Z_Construct_UClass_UPCGUserParametersData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGUserParametersData.OuterSingleton;
}

// Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop @ 14972b0b0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14972b1b0

void __cdecl
Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4f8) = 1;
  return;
}

// Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody @ 14972b1c0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_NestedLoopBody_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBlueprintElement_PointLoop @ 14972b200

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_PointLoop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_PointLoop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14972b240

void __cdecl
Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x410) = 1;
  return;
}

// Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody @ 14972b310

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_PointLoopBody_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop @ 14972b350

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_VariableLoop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody @ 14972b510

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintElement_VariableLoopBody_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14972b6d0

void * __cdecl
Z_Construct_UScriptStruct_FPCGProceduralISMComponentDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGProceduralISMComponentDescriptor,&UE::CoreUObject::Private::Construct<FPCGProceduralISMComponentDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FPCGProceduralISMComponentDescriptor>,&UE::CoreUObject::Private::Destruct<FPCGProceduralISMComponentDescriptor>,&UE::CoreUObject::Private::Copy<FPCGProceduralISMComponentDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGProceduralISMComponentDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGDataNumKernel @ 14972b7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataNumKernel(void)

{
  if (Z_Registration_Info_UClass_UPCGDataNumKernel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataNumKernel.OuterSingleton,
               &Z_Construct_UClass_UPCGDataNumKernel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataNumKernel.OuterSingleton;
}

// Z_Construct_UClass_UPCGDataNumDataInterface @ 14972ba50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataNumDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGDataNumDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataNumDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGDataNumDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataNumDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGDataNumDataProvider @ 14972ba90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataNumDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGDataNumDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataNumDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGDataNumDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataNumDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGDataLabelResolverDataInterface @ 14972bf10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataLabelResolverDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGDataLabelResolverDataInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataLabelResolverDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGDataLabelResolverDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataLabelResolverDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGDataLabelResolverDataProvider @ 14972bf50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDataLabelResolverDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGDataLabelResolverDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.OuterSingleton;
}

// NewProp_bIsInput_SetBit @ 14972bf90

void __cdecl
Z_Construct_UClass_UPCGDataLabelResolverDataInterface_Statics::NewProp_bIsInput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataInterface @ 14972bfa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataProvider @ 14972bfe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGCustomHLSLDataInterface @ 14972c020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCustomHLSLDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGCustomHLSLDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCustomHLSLDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGCustomHLSLDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGCustomHLSLDataProvider @ 14972c060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCustomHLSLDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGCustomHLSLDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.OuterSingleton;
}

// NewProp_bIsInput_SetBit @ 14972c0a0

void __cdecl
Z_Construct_UClass_UPCGDataLabelResolverDataProvider_Statics::NewProp_bIsInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// Z_Construct_UClass_UPCGStaticMeshDataInterface @ 14972c0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshDataProvider @ 14972c0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGVirtualTextureDataInterface @ 14972c1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGVirtualTextureDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGVirtualTextureDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGVirtualTextureDataProvider @ 14972c230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGVirtualTextureDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGVirtualTextureDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGCopyPointsAnalysisDataInterface @ 14972c460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsAnalysisDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataInterface.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGCopyPointsAnalysisDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGCopyPointsAnalysisDataProvider @ 14972c4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsAnalysisDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGCopyPointsAnalysisDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGKernelParamsDataInterface @ 14972c4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGKernelParamsDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGKernelParamsDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGKernelParamsDataProvider @ 14972c520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGKernelParamsDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGKernelParamsDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGLandscapeDataInterface @ 14972c8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGLandscapeDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGLandscapeDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGLandscapeDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGLandscapeDataProvider @ 14972c920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGLandscapeDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGLandscapeDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGLandscapeDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGMetadataPartitionDataInterface @ 14972c980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGMetadataPartitionDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGMetadataPartitionDataInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGMetadataPartitionDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGMetadataPartitionDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGMetadataPartitionDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGMetaDataPartitionDataProvider @ 14972c9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGMetaDataPartitionDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGMetaDataPartitionDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerDataInterface @ 14972ca70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshSpawnerDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerDataProvider @ 14972cab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGStaticMeshSpawnerDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGDebugDataInterface @ 14972cbb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDebugDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGDebugDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDebugDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGDebugDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGDebugDataProvider @ 14972cbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDebugDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGDebugDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDebugDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGDebugDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGExportableDataInterface @ 14972ccf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGExportableDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGExportableDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGExportableDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGExportableDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGExportableDataProvider @ 14972cd30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGExportableDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGExportableDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGExportableDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGExportableDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataProvider.OuterSingleton;
}

// NewProp_bProducedByCPU_SetBit @ 14972cd70

void __cdecl
Z_Construct_UClass_UPCGComputeDataInterface_Statics::NewProp_bProducedByCPU_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bRequiresExport_SetBit @ 14972cd80

void __cdecl
Z_Construct_UClass_UPCGExportableDataInterface_Statics::NewProp_bRequiresExport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UClass_UPCGCopyPointsDataInterface @ 14972d390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGCopyPointsDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGCopyPointsDataProvider @ 14972d3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGCopyPointsDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGInstanceDataInterface @ 14972d650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGInstanceDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGInstanceDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGInstanceDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGInstanceDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGInstanceDataProvider @ 14972d690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGInstanceDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGInstanceDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGInstanceDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGInstanceDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGCustomComputeKernelDataProvider @ 14972d850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCustomComputeKernelDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGCustomKernelDataInterface @ 14972d890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCustomKernelDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGCustomKernelDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGTransformPointsDataInterface @ 14972da80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTransformPointsDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGTransformPointsDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTransformPointsDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGTransformPointsDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGTransformPointsDataProvider @ 14972dac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTransformPointsDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGTransformPointsDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGTextureDataInterface @ 14972db00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTextureDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGTextureDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTextureDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGTextureDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTextureDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGTextureDataProvider @ 14972db40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTextureDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGTextureDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTextureDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGTextureDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTextureDataProvider.OuterSingleton;
}

// NewProp_bInitializeFromDataCollection_SetBit @ 14972db80

void __cdecl
Z_Construct_UClass_UPCGTextureDataInterface_Statics::NewProp_bInitializeFromDataCollection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UClass_UPCGComputeDataInterface @ 14972dc50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGComputeDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGComputeDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGComputeDataInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGComputeDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGComputeDataProvider @ 14972dc90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGComputeDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGComputeDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGComputeDataProvider.OuterSingleton,
               &Z_Construct_UClass_UPCGComputeDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataProvider.OuterSingleton;
}

// Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataInterface @ 14972dcd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.
                OuterSingleton,
               &Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataInterface_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataProvider @ 14972dd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataProvider(void)

{
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.OuterSingleton
               ,&Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataProvider_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.OuterSingleton;
}

// NewProp_bEmitPerDataCounts_SetBit @ 14972dd50

void __cdecl
Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataInterface_Statics::
NewProp_bEmitPerDataCounts_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_bOutputRawBuffer_SetBit @ 14972dd60

void __cdecl
Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataInterface_Statics::
NewProp_bOutputRawBuffer_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x99) = 1;
  return;
}

// AddPass<`FComputeShaderUtils::AddPass<FPCGSceneWriterCS>'::__l2::<lambda_1>_> @ 14972dd70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FPCGSceneWriterCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFPCGSceneWriterCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFPCGSceneWriterCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FPCGSceneWriterCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairClusterAABBCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FPCGSceneWriterCS>'::__l2::<lambda_1>_> @ 14972e160

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FPCGSceneWriterCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFPCGSceneWriterCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFPCGSceneWriterCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FPCGSceneWriterCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairClusterAABBCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// Cast<UPCGParamData> @ 14972e650

UPCGParamData * __cdecl Cast<UPCGParamData>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGParamData *)local_res8[0].Handle == (UPCGParamData *)0x0) {
      return (UPCGParamData *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGParamData *)local_res8[0].Handle != (UPCGParamData *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGParamData_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGParamData *)local_res8[0].Handle;
    }
  }
  return (UPCGParamData *)0x0;
}

// Cast<UPCGRawBufferData> @ 14972e6b0

UPCGRawBufferData * __cdecl Cast<UPCGRawBufferData>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGRawBufferData *)local_res8[0].Handle == (UPCGRawBufferData *)0x0) {
      return (UPCGRawBufferData *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGRawBufferData *)local_res8[0].Handle != (UPCGRawBufferData *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGRawBufferData_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGRawBufferData *)local_res8[0].Handle;
    }
  }
  return (UPCGRawBufferData *)0x0;
}

// CastChecked<UPCGComputeDataInterface,UComputeDataInterface_const_> @ 14972e710

UPCGComputeDataInterface * __cdecl
CastChecked<UPCGComputeDataInterface,UComputeDataInterface_const_>(UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGComputeDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGComputeDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGComputeDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGComputeDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGComputeDataInterface,UObject> @ 14972e7d0

UPCGComputeDataInterface * __cdecl CastChecked<UPCGComputeDataInterface,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGComputeDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGComputeDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGComputeDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGComputeDataInterface>(&local_28);
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

// CastChecked<UPCGComputeDataProvider,UObject> @ 14972e890

UPCGComputeDataProvider * __cdecl CastChecked<UPCGComputeDataProvider,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGComputeDataProvider>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGComputeDataProvider::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGComputeDataProvider *)param_1;
  }
  pFVar3 = GetTypeName<UPCGComputeDataProvider>(&local_28);
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

// CastChecked<UPCGCountUniqueAttributeValuesDataInterface,UComputeDataInterface_const_> @ 14972e950

UPCGCountUniqueAttributeValuesDataInterface * __cdecl
CastChecked<UPCGCountUniqueAttributeValuesDataInterface,UComputeDataInterface_const_>
          (UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGCountUniqueAttributeValuesDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGCountUniqueAttributeValuesDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGCountUniqueAttributeValuesDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGCountUniqueAttributeValuesDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGCullPointsOutsideActorBoundsSettings,UPCGSettings_const_> @ 14972ea10

UPCGCullPointsOutsideActorBoundsSettings * __cdecl
CastChecked<UPCGCullPointsOutsideActorBoundsSettings,UPCGSettings_const_>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGCullPointsOutsideActorBoundsSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGCullPointsOutsideActorBoundsSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGCullPointsOutsideActorBoundsSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGCustomKernelDataInterface,UComputeDataInterface_const_> @ 14972ead0

UPCGCustomKernelDataInterface * __cdecl
CastChecked<UPCGCustomKernelDataInterface,UComputeDataInterface_const_>
          (UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGCustomKernelDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGCustomKernelDataInterface::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGCustomKernelDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGCustomKernelDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGCustomKernelDataInterface,UObject> @ 14972eb90

UPCGCustomKernelDataInterface * __cdecl
CastChecked<UPCGCustomKernelDataInterface,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGCustomKernelDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGCustomKernelDataInterface::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGCustomKernelDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGCustomKernelDataInterface>(&local_28);
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

// CastChecked<UPCGDataBinding,UPCGDataBinding> @ 14972ec50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDataBinding * __cdecl CastChecked<UPCGDataBinding,UPCGDataBinding>(UPCGDataBinding *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UPCGDataBinding *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UPCGDataBinding>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CastChecked<UPCGDataBinding,UObject> @ 14972ec90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDataBinding * __cdecl CastChecked<UPCGDataBinding,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGDataBinding>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGDataBinding_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGDataBinding *)param_1;
  }
  pFVar3 = GetTypeName<UPCGDataBinding>(&local_28);
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

// CastChecked<UPCGDataCollectionDataInterface,UComputeDataInterface_const_> @ 14972ed50

UPCGDataCollectionDataInterface * __cdecl
CastChecked<UPCGDataCollectionDataInterface,UComputeDataInterface_const_>
          (UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGDataCollectionDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGDataCollectionDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGDataCollectionDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGDataCollectionDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGDataLabelResolverDataInterface,UComputeDataInterface_const_> @ 14972ee10

UPCGDataLabelResolverDataInterface * __cdecl
CastChecked<UPCGDataLabelResolverDataInterface,UComputeDataInterface_const_>
          (UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGDataLabelResolverDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGDataLabelResolverDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGDataLabelResolverDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGDataLabelResolverDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGDataNumSettings,UPCGSettings_const_> @ 14972eed0

UPCGDataNumSettings * __cdecl
CastChecked<UPCGDataNumSettings,UPCGSettings_const_>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGDataNumSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGDataNumSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGDataNumSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGDataNumSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGDebugDataInterface,UComputeDataInterface_const_> @ 14972ef90

UPCGDebugDataInterface * __cdecl
CastChecked<UPCGDebugDataInterface,UComputeDataInterface_const_>(UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGDebugDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGDebugDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGDebugDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGDebugDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGExportableDataInterface,UComputeDataInterface_const_> @ 14972f050

UPCGExportableDataInterface * __cdecl
CastChecked<UPCGExportableDataInterface,UComputeDataInterface_const_>
          (UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGExportableDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGExportableDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGExportableDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGExportableDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGLandscapeDataInterface,UComputeDataInterface_const_> @ 14972f110

UPCGLandscapeDataInterface * __cdecl
CastChecked<UPCGLandscapeDataInterface,UComputeDataInterface_const_>(UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGLandscapeDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGLandscapeDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGLandscapeDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGLandscapeDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGNormalToDensitySettings,UPCGSettings_const_> @ 14972f1d0

UPCGNormalToDensitySettings * __cdecl
CastChecked<UPCGNormalToDensitySettings,UPCGSettings_const_>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGNormalToDensitySettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGNormalToDensitySettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGNormalToDensitySettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGRawBufferDataInterface,UComputeDataInterface_const_> @ 14972f290

UPCGRawBufferDataInterface * __cdecl
CastChecked<UPCGRawBufferDataInterface,UComputeDataInterface_const_>(UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGRawBufferDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGRawBufferDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGRawBufferDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGRawBufferDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGSkinnedMeshSpawnerSettings,UPCGSettings_const_> @ 14972f350

UPCGSkinnedMeshSpawnerSettings * __cdecl
CastChecked<UPCGSkinnedMeshSpawnerSettings,UPCGSettings_const_>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGSkinnedMeshSpawnerSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGSkinnedMeshSpawnerSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGSkinnedMeshSpawnerSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSkinnedMeshSpawnerSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_> @ 14972f410

UPCGStaticMeshSpawnerSettings * __cdecl
CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGStaticMeshSpawnerSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGStaticMeshSpawnerSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGStaticMeshSpawnerSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGTextureDataInterface,UComputeDataInterface_const_> @ 14972f4d0

UPCGTextureDataInterface * __cdecl
CastChecked<UPCGTextureDataInterface,UComputeDataInterface_const_>(UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGTextureDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGTextureDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGTextureDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGTextureDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGTransformPointsSettings,UPCGSettings_const_> @ 14972f590

UPCGTransformPointsSettings * __cdecl
CastChecked<UPCGTransformPointsSettings,UPCGSettings_const_>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGTransformPointsSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGTransformPointsSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGTransformPointsSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGTransformPointsSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGVirtualTextureDataInterface,UComputeDataInterface_const_> @ 14972f650

UPCGVirtualTextureDataInterface * __cdecl
CastChecked<UPCGVirtualTextureDataInterface,UComputeDataInterface_const_>
          (UComputeDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGVirtualTextureDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGVirtualTextureDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGVirtualTextureDataInterface *)param_1;
  }
  pFVar3 = GetTypeName<UPCGVirtualTextureDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ClearUnusedGraphResources<FPCGSceneWriterCS> @ 14972f710

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
ClearUnusedGraphResources<FPCGSceneWriterCS>
          (TShaderRefBase<FPCGSceneWriterCS,FShaderMapPointerTable> *param_1,
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

// ConstructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,TTuple<FPCGDataCollection,FPCGDataCollection>,int> @ 14972f790

void __cdecl
ConstructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,TTuple<FPCGDataCollection,FPCGDataCollection>,int>
          (void *param_1,TTuple<FPCGDataCollection,FPCGDataCollection> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FPCGDataCollection::FPCGDataCollection
                ((FPCGDataCollection *)(lVar1 + (longlong)param_2),(FPCGDataCollection *)param_2);
      FPCGDataCollection::FPCGDataCollection
                ((FPCGDataCollection *)(lVar1 + 0x30 + (longlong)param_2),
                 (FPCGDataCollection *)&param_2->field_0x30);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int> @ 14972f7f0

void __cdecl
ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
          (void *param_1,FPCGKernelAttributeDesc *param_2,int param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FName FVar2;
  FPCGKernelAttributeDesc *pFVar3;
  FPCGKernelAttributeKey *pFVar4;
  FName *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = (FName *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pFVar4 = &pFVar3->AttributeKey;
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pFVar4) =
           *(undefined4 *)((longlong)(pFVar4 + -1) + 0x58);
      FVar2 = *(FName *)&(pFVar4->Identifier).MetadataDomain;
      *pFVar5 = (pFVar4->Identifier).Name;
      pFVar5[1] = FVar2;
      pFVar5[2] = (pFVar4->Identifier).MetadataDomain.DebugName;
      *(EPCGKernelAttributeType *)&pFVar5[3].ComparisonIndex.Value = pFVar4->Type;
      FPCGAttributePropertySelector::FPCGAttributePropertySelector
                ((FPCGAttributePropertySelector *)(pFVar5 + 4),
                 (FPCGAttributePropertySelector *)&pFVar4->Name);
      pFVar5[4] = (FName)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
      pFVar5[0xc].ComparisonIndex = 0;
      pFVar5[0xc].Number = 0;
      uVar1 = ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar4 + 1))->ArrayNum;
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar4 + 1))->AllocatorInstance).Data;
      pFVar5[0xd].ComparisonIndex.Value = uVar1;
      if (uVar1 == 0) {
        pFVar5[0xd].Number = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,0,(ForAnyElementType *)(pFVar5 + 0xc),uVar1,(int *)&pFVar5[0xd].Number)
        ;
        memcpy(*(FScriptContainerElement **)&pFVar5[0xc].ComparisonIndex,_Src,
               (longlong)(int)uVar1 << 2);
      }
      pFVar5 = pFVar5 + 0xf;
      pFVar3 = (FPCGKernelAttributeDesc *)
               ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar4 + 1) + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPCGProceduralISMComponentDescriptor,FPCGProceduralISMComponentDescriptor,int> @ 14972f910

void __cdecl
ConstructItems<FPCGProceduralISMComponentDescriptor,FPCGProceduralISMComponentDescriptor,int>
          (void *param_1,FPCGProceduralISMComponentDescriptor *param_2,int param_3)

{
  int *piVar1;
  FProceduralISMComponentDescriptor *this;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0xd0);
    pTVar4 = &param_2->ComponentTags;
    do {
      this = (FProceduralISMComponentDescriptor *)
             ((longlong)param_1 + (-0xd0 - (longlong)param_2) + (longlong)pTVar4);
      FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
                (this,(FProceduralISMComponentDescriptor *)(pTVar4 + -0xd));
      this->_padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 3);
      }
      pTVar4 = pTVar4 + 0xe;
      pFVar3 = pFVar3 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPCGSoftSkinnedMeshComponentDescriptor,FPCGSoftSkinnedMeshComponentDescriptor,int> @ 14972fa20

void __cdecl
ConstructItems<FPCGSoftSkinnedMeshComponentDescriptor,FPCGSoftSkinnedMeshComponentDescriptor,int>
          (void *param_1,FPCGSoftSkinnedMeshComponentDescriptor *param_2,int param_3)

{
  int *piVar1;
  FSoftSkinnedMeshComponentDescriptor *this;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 200);
    pTVar4 = &param_2->ComponentTags;
    do {
      this = (FSoftSkinnedMeshComponentDescriptor *)
             ((longlong)param_1 + (-200 - (longlong)param_2) + (longlong)pTVar4);
      FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
                (this,(FSoftSkinnedMeshComponentDescriptor *)((longlong)(pTVar4 + -0xd) + 8));
      this->_padding_ = (longlong)&___7FPCGSoftSkinnedMeshComponentDescriptor__6B_;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 3);
      }
      pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar4 + 0xd) + 8);
      pFVar3 = pFVar3 + 0x1b;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPCGTextureBindingInfo,FPCGTextureBindingInfo,int> @ 14972fb30

void __cdecl
ConstructItems<FPCGTextureBindingInfo,FPCGTextureBindingInfo,int>
          (void *param_1,FPCGTextureBindingInfo *param_2,int param_3)

{
  uchar *puVar1;
  FRHITexture *this;
  IPooledRenderTarget *pIVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  TRefCountPtr<IPooledRenderTarget> *pTVar6;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_1 + 0x10);
    pTVar6 = &param_2->ExportedTexture;
    do {
      *(EPCGTextureResourceType *)
       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar6) =
           ((FPCGTextureBindingInfo *)(pTVar6 + -2))->ResourceType;
      plVar5[-1] = 0;
      this = ((TRefCountPtr<FRHITexture> *)(pTVar6 + -1))->Reference;
      plVar5[-1] = (longlong)this;
      if (this != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this);
      }
      *plVar5 = 0;
      pIVar2 = pTVar6->Reference;
      *plVar5 = (longlong)pIVar2;
      if (pIVar2 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar2->_padding_ + 0x30))();
      }
      *(TIntPoint<int>_u_0 *)(plVar5 + 1) = *(TIntPoint<int>_u_0 *)(pTVar6 + 1);
      *(ETextureDimension *)(plVar5 + 2) = *(ETextureDimension *)(pTVar6 + 2);
      *(bool *)((longlong)plVar5 + 0x11) = *(bool *)((longlong)(pTVar6 + 2) + 1);
      dVar3 = *(double *)(pTVar6 + 5);
      plVar5[4] = (longlong)(((TTransform<double> *)(pTVar6 + 4))->Rotation).XY.m128d_f64[0];
      plVar5[5] = (longlong)dVar3;
      dVar3 = *(double *)(pTVar6 + 7);
      plVar5[6] = (longlong)((__m128d *)(pTVar6 + 6))->m128d_f64[0];
      plVar5[7] = (longlong)dVar3;
      dVar3 = *(double *)(pTVar6 + 9);
      plVar5[8] = (longlong)(((VectorRegister4Double *)(pTVar6 + 8))->XY).m128d_f64[0];
      plVar5[9] = (longlong)dVar3;
      dVar3 = *(double *)(pTVar6 + 0xb);
      plVar5[10] = (longlong)((__m128d *)(pTVar6 + 10))->m128d_f64[0];
      plVar5[0xb] = (longlong)dVar3;
      dVar3 = *(double *)(pTVar6 + 0xd);
      plVar5[0xc] = (longlong)(((VectorRegister4Double *)(pTVar6 + 0xc))->XY).m128d_f64[0];
      plVar5[0xd] = (longlong)dVar3;
      dVar3 = *(double *)(pTVar6 + 0xf);
      plVar5[0xe] = (longlong)((__m128d *)(pTVar6 + 0xe))->m128d_f64[0];
      plVar5[0xf] = (longlong)dVar3;
      lVar4 = *(longlong *)(pTVar6 + 0x11);
      plVar5[0x10] = (longlong)(((TBox<double> *)(pTVar6 + 0x10))->Min).field0_0x0._s_0.X;
      plVar5[0x11] = lVar4;
      dVar3 = (((TVector<double> *)(pTVar6 + 0x13))->field0_0x0)._s_0.X;
      plVar5[0x12] = *(longlong *)(pTVar6 + 0x12);
      plVar5[0x13] = (longlong)dVar3;
      lVar4 = *(longlong *)(pTVar6 + 0x15);
      plVar5[0x14] = *(longlong *)(pTVar6 + 0x14);
      plVar5[0x15] = lVar4;
      puVar1 = (uchar *)(pTVar6 + 0x16);
      pTVar6 = pTVar6 + 0x1a;
      plVar5[0x16] = *(longlong *)puVar1;
      plVar5 = plVar5 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FPCGTaggedData_const_,int> @ 14972fc70

void __cdecl DestructItems<FPCGTaggedData_const_,int>(FPCGTaggedData *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Tags).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)(pFVar1 + -10));
      pFVar1 = pFVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,int> @ 14972fce0

void __cdecl
DestructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,int>
          (TTuple<FPCGDataCollection,FPCGDataCollection> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Core::Private::Tuple::
    TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPCGDataCollection,FPCGDataCollection>::
    ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPCGDataCollection,FPCGDataCollection>
              ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPCGDataCollection,FPCGDataCollection>
                *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPCGKernelAttributeDesc,int> @ 14972fd20

void __cdecl
DestructItems<FPCGKernelAttributeDesc,int>(FPCGKernelAttributeDesc *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->AttributeKey).Name.field_0x28;
    do {
      if ((void *)puVar1[3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[3]);
      }
      DestructItems<FString,int>((FString *)*puVar1,*(int *)(puVar1 + 1));
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGProceduralISMComponentDescriptor,int> @ 14972fd80

void __cdecl
DestructItems<FPCGProceduralISMComponentDescriptor,int>
          (FPCGProceduralISMComponentDescriptor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = &param_1->_padding_;
    do {
      pFVar1 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(plVar2 + 0x10))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((void *)*plVar2 != (void *)0x0) {
        FMemory::Free((void *)*plVar2);
      }
      if ((void *)plVar2[-3] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-3]);
      }
      if ((void *)plVar2[-5] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-5]);
      }
      plVar2 = plVar2 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int> @ 14972fdf0

void __cdecl
DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
          (FPCGSoftSkinnedMeshComponentDescriptor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ComponentTags).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
              ((FSoftSkinnedMeshComponentDescriptor *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPCGTextureBindingInfo,int> @ 14972fe40

void __cdecl DestructItems<FPCGTextureBindingInfo,int>(FPCGTextureBindingInfo *param_1,int param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Texture;
    do {
      if (((TRefCountPtr<IPooledRenderTarget> *)(pTVar1 + 1))->Reference !=
          (IPooledRenderTarget *)0x0) {
        (**(code **)(((TRefCountPtr<IPooledRenderTarget> *)(pTVar1 + 1))->Reference->_padding_ +
                    0x38))();
      }
      if (pTVar1->Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int> @ 14972fe90

void __cdecl
DestructItems<TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
          (TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(param_1->Object);
      param_1->Object = (UObject *)0x0;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::TSTR_BeginDestroyCommand148>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1497303c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FPCGLandscapeResource::~FPCGLandscapeResource_::__l5::TSTR_BeginDestroyCommand148>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::TSTR_BeginDestroyCommand148>
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
      if (bVar8) goto LAB_149730511;
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
    goto LAB_149730705;
  }
LAB_149730511:
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
LAB_1497305ef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1497305ef;
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
LAB_149730705:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_> @ 149730740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
ExecuteOnGameThread<_FPCGDataCollectionDataProviderProxy::AllocateResources_::__l27::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EPCGExportMode EVar3;
  FRDGPooledBuffer *pFVar4;
  FPCGDataCollectionDesc *pFVar5;
  FWeakObjectPtr FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName FVar8;
  FName FVar9;
  code *pcVar10;
  code *pcVar11;
  longlong lVar12;
  FTSTicker *this;
  code **ppcVar13;
  longlong *plVar14;
  undefined1 auStackY_d8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this = FTSTicker::GetCoreTicker();
  pFVar4 = (param_2->ExportedPooledBuffer).Reference;
  if (pFVar4 == (FRDGPooledBuffer *)0x0) {
    plVar14 = (longlong *)&DAT_00000008;
  }
  else {
    plVar14 = &pFVar4->_padding_;
    LOCK();
    *(int *)plVar14 = (int)*plVar14 + 1;
    UNLOCK();
  }
  pFVar5 = (param_2->PinDesc).Object;
  FVar6 = (param_2->DataProviderWeakPtr).WeakPtr;
  (param_2->PinDesc).Object = (FPCGDataCollectionDesc *)0x0;
  pTVar7 = (param_2->PinDesc).SharedReferenceCount.ReferenceController;
  (param_2->PinDesc).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar8 = param_2->OutputPinLabel;
  FVar9 = param_2->OutputPinLabelAlias;
  pcVar10 = (code *)param_2->SizeBytes;
  EVar3 = param_2->ExportMode;
  pcVar11 = (code *)param_2->GenerationCount;
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x50,8);
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::`27'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_50[1] = (code *)pFVar4;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)plVar14 = (int)*plVar14 + 1;
    UNLOCK();
  }
  *(FWeakObjectPtr *)(local_50 + 2) = FVar6;
  local_50[3] = (code *)pFVar5;
  local_50[4] = (code *)pTVar7;
  local_50[6] = pcVar10;
  *(EPCGExportMode *)(local_50 + 7) = EVar3;
  *(FName *)(local_50 + 5) = FVar8;
  *(FName *)((longlong)local_50 + 0x3c) = FVar9;
  local_50[9] = pcVar11;
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker(this,&local_88,param_1,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_78);
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_88.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_78[0] != (code *)0x0) {
    ppcVar13 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar13 = local_50;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar14 = &pFVar4->_padding_;
    LOCK();
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (plVar14 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

// GetFullNameForCastLogError<UComputeDataInterface_const_> @ 149730940

FString * __cdecl
GetFullNameForCastLogError<UComputeDataInterface_const_>
          (FString *__return_storage_ptr__,UComputeDataInterface *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UPCGSettings_const_> @ 149730970

FString * __cdecl
GetFullNameForCastLogError<UPCGSettings_const_>
          (FString *__return_storage_ptr__,UPCGSettings *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UPCGDataBinding> @ 1497309a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UPCGDataBinding>
          (FString *__return_storage_ptr__,UPCGDataBinding *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGComputeDataInterface> @ 1497309d0

FString * __cdecl GetTypeName<UPCGComputeDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGComputeDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGComputeDataProvider> @ 149730a10

FString * __cdecl GetTypeName<UPCGComputeDataProvider>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGComputeDataProvider::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGCountUniqueAttributeValuesDataInterface> @ 149730a50

FString * __cdecl
GetTypeName<UPCGCountUniqueAttributeValuesDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGCountUniqueAttributeValuesDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGCullPointsOutsideActorBoundsSettings> @ 149730a90

FString * __cdecl
GetTypeName<UPCGCullPointsOutsideActorBoundsSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGCustomKernelDataInterface> @ 149730ad0

FString * __cdecl GetTypeName<UPCGCustomKernelDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGCustomKernelDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGDataBinding> @ 149730b10

FString * __cdecl GetTypeName<UPCGDataBinding>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGDataBinding_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGDataCollectionDataInterface> @ 149730b50

FString * __cdecl GetTypeName<UPCGDataCollectionDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGDataCollectionDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGDataLabelResolverDataInterface> @ 149730b90

FString * __cdecl GetTypeName<UPCGDataLabelResolverDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGDataLabelResolverDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGDataNumSettings> @ 149730bd0

FString * __cdecl GetTypeName<UPCGDataNumSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGDataNumSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGDebugDataInterface> @ 149730c10

FString * __cdecl GetTypeName<UPCGDebugDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGDebugDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGExportableDataInterface> @ 149730c50

FString * __cdecl GetTypeName<UPCGExportableDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGExportableDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGLandscapeDataInterface> @ 149730c90

FString * __cdecl GetTypeName<UPCGLandscapeDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGLandscapeDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGNormalToDensitySettings> @ 149730cd0

FString * __cdecl GetTypeName<UPCGNormalToDensitySettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGNormalToDensitySettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGRawBufferDataInterface> @ 149730d10

FString * __cdecl GetTypeName<UPCGRawBufferDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGRawBufferDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSkinnedMeshSpawnerSettings> @ 149730d50

FString * __cdecl GetTypeName<UPCGSkinnedMeshSpawnerSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGSkinnedMeshSpawnerSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGStaticMeshSpawnerSettings> @ 149730d90

FString * __cdecl GetTypeName<UPCGStaticMeshSpawnerSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGTextureDataInterface> @ 149730dd0

FString * __cdecl GetTypeName<UPCGTextureDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGTextureDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGTransformPointsSettings> @ 149730e10

FString * __cdecl GetTypeName<UPCGTransformPointsSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGTransformPointsSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGVirtualTextureDataInterface> @ 149730e50

FString * __cdecl GetTypeName<UPCGVirtualTextureDataInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGVirtualTextureDataInterface::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UPCGBlueprintElement> @ 1497311f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGBlueprintElement>(FObjectInitializer *param_1)

{
  UPCGBlueprintBaseElement *this;
  
  this = (UPCGBlueprintBaseElement *)param_1->Obj;
  if (this != (UPCGBlueprintBaseElement *)0x0) {
    UPCGBlueprintBaseElement::UPCGBlueprintBaseElement(this,param_1);
    this->_padding_ = (longlong)&___7UPCGBlueprintElement__6B_;
  }
  return;
}

// InternalConstructor<UPCGComputeDataInterface> @ 149731220

void __cdecl InternalConstructor<UPCGComputeDataInterface>(FObjectInitializer *param_1)

{
  if ((UPCGComputeDataInterface *)param_1->Obj != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface
              ((UPCGComputeDataInterface *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGComputeDataProvider> @ 149731240

void __cdecl InternalConstructor<UPCGComputeDataProvider>(FObjectInitializer *param_1)

{
  if ((UPCGComputeDataProvider *)param_1->Obj != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider
              ((UPCGComputeDataProvider *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGCopyPointsAnalysisDataInterface> @ 149731260

void __cdecl InternalConstructor<UPCGCopyPointsAnalysisDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCopyPointsAnalysisDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGCopyPointsAnalysisDataProvider> @ 149731290

void __cdecl InternalConstructor<UPCGCopyPointsAnalysisDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCopyPointsAnalysisDataProvider__6B_;
    this[1]._padding_ = -1;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPCGCopyPointsDataInterface> @ 1497312e0

void __cdecl InternalConstructor<UPCGCopyPointsDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCopyPointsDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGCopyPointsDataProvider> @ 149731310

void __cdecl InternalConstructor<UPCGCopyPointsDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCopyPointsDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGCountUniqueAttributeValuesDataInterface> @ 149731360

void __cdecl
InternalConstructor<UPCGCountUniqueAttributeValuesDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataInterface__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGCountUniqueAttributeValuesDataProvider> @ 1497313b0

void __cdecl
InternalConstructor<UPCGCountUniqueAttributeValuesDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = -1;
    this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataProvider__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UPCGCountUniqueAttributeValuesKernel> @ 149731410

void __cdecl InternalConstructor<UPCGCountUniqueAttributeValuesKernel>(FObjectInitializer *param_1)

{
  UPCGComputeKernel *this;
  
  this = (UPCGComputeKernel *)param_1->Obj;
  if (this != (UPCGComputeKernel *)0x0) {
    UPCGComputeKernel::UPCGComputeKernel(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesKernel__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGCullPointsOutsideActorBoundsDataInterface> @ 149731460

void __cdecl
InternalConstructor<UPCGCullPointsOutsideActorBoundsDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCullPointsOutsideActorBoundsDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGCullPointsOutsideActorBoundsDataProvider> @ 149731490

void __cdecl
InternalConstructor<UPCGCullPointsOutsideActorBoundsDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCullPointsOutsideActorBoundsDataProvider__6B_;
  }
  return;
}

// InternalConstructor<UPCGCustomComputeKernelDataProvider> @ 1497314c0

void __cdecl InternalConstructor<UPCGCustomComputeKernelDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGCustomComputeKernelDataProvider__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].bProducedByCPU = false;
    *(undefined4 *)&this[1]._padding_ = 0x2a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x2a;
    *(undefined4 *)&this[1]._padding_ = 0x2a;
  }
  return;
}

// InternalConstructor<UPCGCustomHLSLDataInterface> @ 149731530

void __cdecl InternalConstructor<UPCGCustomHLSLDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCustomHLSLDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGCustomHLSLDataProvider> @ 149731560

void __cdecl InternalConstructor<UPCGCustomHLSLDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGCustomHLSLDataProvider__6B_;
  }
  return;
}

// InternalConstructor<UPCGCustomKernelDataInterface> @ 1497315a0

void __cdecl InternalConstructor<UPCGCustomKernelDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  undefined8 local_res8;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCustomKernelDataInterface__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    local_res8 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res8);
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
  }
  return;
}

// InternalConstructor<UPCGDataCollectionDataInterface> @ 149731640

void __cdecl InternalConstructor<UPCGDataCollectionDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDataCollectionDataInterface__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UPCGDataCollectionDataProvider> @ 149731690

void __cdecl InternalConstructor<UPCGDataCollectionDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    this->_padding_ = (longlong)&___7UPCGDataCollectionDataProvider__6B_;
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined2 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    *(undefined8 *)&this[1].ProducerSettings.SoftObjectPtr = 0;
    this[1]._padding_ = 2;
  }
  return;
}

// InternalConstructor<UPCGDataLabelResolverDataInterface> @ 149731730

void __cdecl InternalConstructor<UPCGDataLabelResolverDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataInterface__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGDataLabelResolverDataProvider> @ 149731780

void __cdecl InternalConstructor<UPCGDataLabelResolverDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGDataNumDataInterface> @ 1497317e0

void __cdecl InternalConstructor<UPCGDataNumDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataNumDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGDataNumDataProvider> @ 149731810

void __cdecl InternalConstructor<UPCGDataNumDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataNumDataProvider__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
  }
  return;
}

// InternalConstructor<UPCGDataNumKernel> @ 149731860

void __cdecl InternalConstructor<UPCGDataNumKernel>(FObjectInitializer *param_1)

{
  UPCGComputeKernel *this;
  
  this = (UPCGComputeKernel *)param_1->Obj;
  if (this != (UPCGComputeKernel *)0x0) {
    UPCGComputeKernel::UPCGComputeKernel(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataNumKernel__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PCGKernelFlags = None;
    this[1].KernelIndex = 0;
    *(undefined4 *)&this[1].SettingsPath.SoftObjectPtr = 0;
    *(undefined8 *)&this[1].SettingsPath.SoftObjectPtr.field_0x8 = 0;
    *(undefined8 *)&this[1].SettingsPath.SoftObjectPtr.field_0x10 = 0;
    this[1].SettingsPath.SoftObjectPtr.field_0x18 = 0;
    this[1]._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  }
  return;
}

// InternalConstructor<UPCGDebugDataInterface> @ 149731900

void __cdecl InternalConstructor<UPCGDebugDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDebugDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGDebugDataProvider> @ 149731940

void __cdecl InternalConstructor<UPCGDebugDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDebugDataProvider__6B_;
  }
  return;
}

// InternalConstructor<UPCGExportableDataInterface> @ 149731980

void __cdecl InternalConstructor<UPCGExportableDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGExportableDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGExportableDataProvider> @ 1497319c0

void __cdecl InternalConstructor<UPCGExportableDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGExportableDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    this[1]._padding_ = 2;
  }
  return;
}

// InternalConstructor<UPCGInstanceDataInterface> @ 149731a30

void __cdecl InternalConstructor<UPCGInstanceDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGInstanceDataInterface__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGInstanceDataProvider> @ 149731a70

void __cdecl InternalConstructor<UPCGInstanceDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGInstanceDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
  }
  return;
}

// InternalConstructor<UPCGKernelParamsDataInterface> @ 149731ad0

void __cdecl InternalConstructor<UPCGKernelParamsDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGKernelParamsDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGKernelParamsDataProvider> @ 149731b00

void __cdecl InternalConstructor<UPCGKernelParamsDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGKernelParamsDataProvider__6B_;
  }
  return;
}

// InternalConstructor<UPCGLandscapeDataInterface> @ 149731b30

void __cdecl InternalConstructor<UPCGLandscapeDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGLandscapeDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGLandscapeDataProvider> @ 149731b60

void __cdecl InternalConstructor<UPCGLandscapeDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1].OutputPinLabel.Number = 8;
    this->_padding_ = (longlong)&___7UPCGLandscapeDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex.Value = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0x3ff0000000000000;
    this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data =
         (FScriptContainerElement *)0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<UPCGManagedProceduralISMComponent> @ 149731be0

void __cdecl InternalConstructor<UPCGManagedProceduralISMComponent>(FObjectInitializer *param_1)

{
  UPCGManagedComponent *this;
  undefined8 uVar1;
  
  this = (UPCGManagedComponent *)param_1->Obj;
  if (this != (UPCGManagedComponent *)0x0) {
    UPCGManagedComponent::UPCGManagedComponent(this,param_1);
    this->_padding_ = (longlong)&___7UPCGManagedProceduralISMComponent__6B_;
    FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
              ((FProceduralISMComponentDescriptor *)(this + 1));
    this[1]._padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[3]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[3]._padding_ = uVar1;
    *(double *)&this[3].GeneratedComponent.SoftObjectPtr =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[3].GeneratedComponent.SoftObjectPtr.field_0x8 = 0xffffffffffffffff;
  }
  return;
}

// InternalConstructor<UPCGMetaDataPartitionDataProvider> @ 149731c70

void __cdecl InternalConstructor<UPCGMetaDataPartitionDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = -1;
    this->_padding_ = (longlong)&___7UPCGMetaDataPartitionDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
  }
  return;
}

// InternalConstructor<UPCGMetadataPartitionDataInterface> @ 149731ce0

void __cdecl InternalConstructor<UPCGMetadataPartitionDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGMetadataPartitionDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGNormalToDensityDataInterface> @ 149731d10

void __cdecl InternalConstructor<UPCGNormalToDensityDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGNormalToDensityDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGNormalToDensityProvider> @ 149731d40

void __cdecl InternalConstructor<UPCGNormalToDensityProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGNormalToDensityProvider__6B_;
  }
  return;
}

// InternalConstructor<UPCGProceduralISMComponent> @ 149731d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGProceduralISMComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UStaticMeshComponent *this;
  TAtomic<FMinimalName> TVar2;
  double dVar3;
  UStaticMeshComponent *pUVar4;
  FUObjectItem *pFVar5;
  FUObjectItem *this_00;
  UStaticMeshComponent *pUVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    dVar9 = __real_407f400000000000;
    this->_padding_ = (longlong)&UPCGProceduralISMComponent::_vftable__for__UObject__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UPCGProceduralISMComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPCGProceduralISMComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPCGProceduralISMComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPCGProceduralISMComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPCGProceduralISMComponent::_vftable__for__IPhysicsComponent__;
    dVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar9;
    dVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar9;
    dVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar9;
    dVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c07f400000000000;
    dVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c07f400000000000;
    this[1]._padding_ =
         (longlong)
         (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c07f400000000000);
    this[1]._padding_ = (longlong)dVar8;
    this[1]._padding_ = (longlong)dVar7;
    this[1]._padding_ = (longlong)dVar3;
    this[1]._padding_ = (longlong)dVar10;
    this[1]._padding_ = (longlong)dVar9;
    *(undefined1 *)&this[1]._padding_ = 1;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xeb;
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
    this[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    *(undefined1 *)&this[1]._padding_ = 0;
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
    this->bEnableVertexColorMeshPainting = '\0';
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0x3f;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 | 2;
    pUVar4 = (UStaticMeshComponent *)UStaticMeshComponent::AdditionalStatObject(this);
    pUVar6 = this;
    if (pUVar4 != (UStaticMeshComponent *)0x0) {
      pUVar6 = pUVar4;
    }
    pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4))
    ;
    TVar2 = ((pFVar5->StatID).StatIdPtr)->Name;
    if ((TVar2._0_4_ == 0) && (TVar2._4_4_ == 0)) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
      FUObjectItem::CreateStatID(this_00);
    }
    this[1]._padding_ = (longlong)(pFVar5->StatID).StatIdPtr;
  }
  return;
}

// InternalConstructor<UPCGRawBufferDataInterface> @ 149731f30

void __cdecl InternalConstructor<UPCGRawBufferDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGRawBufferDataInterface__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGRawBufferDataProvider> @ 149731f70

void __cdecl InternalConstructor<UPCGRawBufferDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    this->_padding_ = (longlong)&___7UPCGRawBufferDataProvider__6B_;
    *(undefined1 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    this[1]._padding_ = 2;
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0xffffffff;
  }
  return;
}

// InternalConstructor<UPCGSkinnedMeshSpawnerDataInterface> @ 149732010

void __cdecl InternalConstructor<UPCGSkinnedMeshSpawnerDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGSkinnedMeshSpawnerDataProvider> @ 149732040

void __cdecl InternalConstructor<UPCGSkinnedMeshSpawnerDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    *(undefined8 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x8 = 0;
    *(undefined4 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x10 = 0;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x14 = 0x80;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x18 = 0xffffffff;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x1c = 0;
    this[1].ResolvedProducerSettings.field0_0x0.DebugPtr = (UPCGSettings *)0x0;
    *(undefined4 *)&this[1].GenerationCounter = 0;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 6) = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGStaticMeshDataInterface> @ 149732140

void __cdecl InternalConstructor<UPCGStaticMeshDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGStaticMeshDataProvider> @ 149732170

void __cdecl InternalConstructor<UPCGStaticMeshDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGStaticMeshSpawnerDataInterface> @ 1497321c0

void __cdecl InternalConstructor<UPCGStaticMeshSpawnerDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGStaticMeshSpawnerDataProvider> @ 1497321f0

void __cdecl InternalConstructor<UPCGStaticMeshSpawnerDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    *(undefined8 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x10 = 0;
    *(undefined4 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = -1;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x18 = 0;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x1c = 0x80;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x20 = 0xffffffff;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x24 = 0;
    this[1].GenerationCounter = (atomic<unsigned___int64>)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 6) = 0;
    this[2].GraphBindingIndex = 0;
    *(undefined8 *)&this[2].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[2].OutputPinLabelAlias.Number = 0;
  }
  return;
}

// InternalConstructor<UPCGTextureDataInterface> @ 149732300

void __cdecl InternalConstructor<UPCGTextureDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGTextureDataInterface__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGTextureDataProvider> @ 149732340

void __cdecl InternalConstructor<UPCGTextureDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    this->_padding_ = (longlong)&___7UPCGTextureDataProvider__6B_;
    this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    *(undefined1 *)&this[1].ProducerSettings.SoftObjectPtr = 0;
    this[1]._padding_ = 2;
  }
  return;
}

// InternalConstructor<UPCGTransformPointsDataInterface> @ 1497323d0

void __cdecl InternalConstructor<UPCGTransformPointsDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGTransformPointsDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGTransformPointsDataProvider> @ 149732400

void __cdecl InternalConstructor<UPCGTransformPointsDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGTransformPointsDataProvider__6B_;
  }
  return;
}

// InternalConstructor<UPCGUserParametersData> @ 149732440

void __cdecl InternalConstructor<UPCGUserParametersData>(FObjectInitializer *param_1)

{
  UPCGData *this;
  undefined8 local_res8;
  
  this = (UPCGData *)param_1->Obj;
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGUserParametersData__6B_;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(this + 1));
    this[1].UID = 0;
    this[1].Crc.Value = 0;
    this[1].Crc.bValid = false;
    *(undefined3 *)&this[1].Crc.field_0x5 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].UID,0);
    local_res8 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res8);
  }
  return;
}

// InternalConstructor<UPCGVirtualTextureDataInterface> @ 1497324c0

void __cdecl InternalConstructor<UPCGVirtualTextureDataInterface>(FObjectInitializer *param_1)

{
  UPCGComputeDataInterface *this;
  
  this = (UPCGComputeDataInterface *)param_1->Obj;
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGVirtualTextureDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGVirtualTextureDataProvider> @ 1497324f0

void __cdecl InternalConstructor<UPCGVirtualTextureDataProvider>(FObjectInitializer *param_1)

{
  UPCGComputeDataProvider *this;
  
  this = (UPCGComputeDataProvider *)param_1->Obj;
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGVirtualTextureDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPCGBlueprintElement> @ 149732530

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

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGBlueprintElement>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGBlueprintBaseElement *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGBlueprintElement::GetPrivateStaticClass();
  this = (UPCGBlueprintBaseElement *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGBlueprintBaseElement *)0x0) {
    UPCGBlueprintBaseElement::UPCGBlueprintBaseElement(this,param_1);
    this->_padding_ = (longlong)&___7UPCGBlueprintElement__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGComputeDataInterface> @ 1497325e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGComputeDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGComputeDataInterface::GetPrivateStaticClass();
  pUVar3 = (UPCGComputeDataInterface *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGComputeDataInterface *)0x0) {
    pUVar3 = UPCGComputeDataInterface::UPCGComputeDataInterface(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGComputeDataProvider> @ 149732680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGComputeDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGComputeDataProvider::GetPrivateStaticClass();
  pUVar3 = (UPCGComputeDataProvider *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGComputeDataProvider *)0x0) {
    pUVar3 = UPCGComputeDataProvider::UPCGComputeDataProvider(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataInterface> @ 149732720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCopyPointsAnalysisDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCopyPointsAnalysisDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataProvider> @ 1497327d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCopyPointsAnalysisDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCopyPointsAnalysisDataProvider__6B_;
    this[1]._padding_ = -1;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCopyPointsDataInterface> @ 149732890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCopyPointsDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCopyPointsDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCopyPointsDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCopyPointsDataProvider> @ 149732940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGCopyPointsDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCopyPointsDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGCopyPointsDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataInterface> @ 149732a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCountUniqueAttributeValuesDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataInterface__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataProvider> @ 149732ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCountUniqueAttributeValuesDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = -1;
    this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataProvider__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesKernel> @ 149732b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesKernel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeKernel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCountUniqueAttributeValuesKernel::GetPrivateStaticClass();
  this = (UPCGComputeKernel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeKernel *)0x0) {
    UPCGComputeKernel::UPCGComputeKernel(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesKernel__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataInterface> @ 149732c50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataInterface>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCullPointsOutsideActorBoundsDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCullPointsOutsideActorBoundsDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataProvider> @ 149732d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCullPointsOutsideActorBoundsDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCullPointsOutsideActorBoundsDataProvider__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCustomComputeKernelDataProvider> @ 149732db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCustomComputeKernelDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCustomComputeKernelDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGCustomComputeKernelDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1].bProducedByCPU = false;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x2a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x2a;
    *(undefined4 *)&this[1]._padding_ = 0x2a;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCustomHLSLDataInterface> @ 149732ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCustomHLSLDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCustomHLSLDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCustomHLSLDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCustomHLSLDataProvider> @ 149732f50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGCustomHLSLDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCustomHLSLDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGCustomHLSLDataProvider__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCustomKernelDataInterface> @ 149733010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCustomKernelDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  UPCGComputeDataInterface *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UPCGComputeDataInterface *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCustomKernelDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCustomKernelDataInterface__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    local_res10 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res10);
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGDataCollectionDataInterface> @ 149733100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDataCollectionDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataCollectionDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDataCollectionDataInterface__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataCollectionDataProvider> @ 1497331c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDataCollectionDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataCollectionDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDataCollectionDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined2 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    *(undefined8 *)&this[1].ProducerSettings.SoftObjectPtr = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataInterface> @ 1497332e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataLabelResolverDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataInterface__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataProvider> @ 1497333a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataLabelResolverDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataNumDataInterface> @ 149733470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDataNumDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataNumDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataNumDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataNumDataProvider> @ 149733520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDataNumDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataNumDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataNumDataProvider__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDataNumKernel> @ 1497335e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDataNumKernel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeKernel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDataNumKernel::GetPrivateStaticClass();
  this = (UPCGComputeKernel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeKernel *)0x0) {
    UPCGComputeKernel::UPCGComputeKernel(this,param_1);
    this->_padding_ = (longlong)&___7UPCGDataNumKernel__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PCGKernelFlags = None;
    this[1].KernelIndex = 0;
    *(undefined4 *)&this[1].SettingsPath.SoftObjectPtr = 0;
    this[1]._padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
    *(undefined8 *)&this[1].SettingsPath.SoftObjectPtr.field_0x8 = 0;
    *(undefined8 *)&this[1].SettingsPath.SoftObjectPtr.field_0x10 = 0;
    this[1].SettingsPath.SoftObjectPtr.field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDebugDataInterface> @ 149733700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDebugDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDebugDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDebugDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDebugDataProvider> @ 1497337b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGDebugDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDebugDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGDebugDataProvider__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGExportableDataInterface> @ 149733860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGExportableDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGExportableDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGExportableDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGExportableDataProvider> @ 149733920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGExportableDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGExportableDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGExportableDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGInstanceDataInterface> @ 149733a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGInstanceDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGInstanceDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGInstanceDataInterface__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGInstanceDataProvider> @ 149733ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGInstanceDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGInstanceDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGInstanceDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGKernelParamsDataInterface> @ 149733bb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGKernelParamsDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGKernelParamsDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGKernelParamsDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGKernelParamsDataProvider> @ 149733c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGKernelParamsDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGKernelParamsDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGKernelParamsDataProvider__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGLandscapeDataInterface> @ 149733d10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGLandscapeDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGLandscapeDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGLandscapeDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGLandscapeDataProvider> @ 149733dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGLandscapeDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGLandscapeDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1].GraphBindingIndex = 0;
    this->_padding_ = (longlong)&___7UPCGLandscapeDataProvider__6B_;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0x3ff0000000000000;
    this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data =
         (FScriptContainerElement *)0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].OutputPinLabel.ComparisonIndex.Value = 0;
    *(undefined1 *)&this[1].OutputPinLabel.Number = 8;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedProceduralISMComponent> @ 149733ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGManagedProceduralISMComponent>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPCGManagedComponent *this;
  UPCGManagedComponent *pUVar4;
  
  pUVar4 = (UPCGManagedComponent *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPCGManagedProceduralISMComponent::GetPrivateStaticClass();
  this = (UPCGManagedComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGManagedComponent *)0x0) {
    UPCGManagedComponent::UPCGManagedComponent(this,param_1);
    this->_padding_ = (longlong)&___7UPCGManagedProceduralISMComponent__6B_;
    FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
              ((FProceduralISMComponentDescriptor *)(this + 1));
    this[1]._padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[3]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[3]._padding_ = uVar1;
    *(double *)&this[3].GeneratedComponent.SoftObjectPtr =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[3].GeneratedComponent.SoftObjectPtr.field_0x8 = 0xffffffffffffffff;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UPCGMetaDataPartitionDataProvider> @ 149733fc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGMetaDataPartitionDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGMetaDataPartitionDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this[1]._padding_ = -1;
    this->_padding_ = (longlong)&___7UPCGMetaDataPartitionDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGMetadataPartitionDataInterface> @ 1497340a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGMetadataPartitionDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGMetadataPartitionDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGMetadataPartitionDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGNormalToDensityDataInterface> @ 149734150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGNormalToDensityDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGNormalToDensityDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGNormalToDensityDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGNormalToDensityProvider> @ 149734200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGNormalToDensityProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGNormalToDensityProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGNormalToDensityProvider__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGProceduralISMComponent> @ 1497342b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGProceduralISMComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UStaticMeshComponent *this;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPCGProceduralISMComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    dVar6 = __real_407f400000000000;
    this->_padding_ = (longlong)&UPCGProceduralISMComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPCGProceduralISMComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPCGProceduralISMComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UPCGProceduralISMComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UPCGProceduralISMComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UPCGProceduralISMComponent::_vftable__for__IPhysicsComponent__;
    *(undefined4 *)&this[1]._padding_ = 0;
    dVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar6;
    dVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar6;
    dVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar6;
    dVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c07f400000000000;
    dVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c07f400000000000;
    this[1]._padding_ =
         (longlong)
         (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c07f400000000000);
    this[1]._padding_ = (longlong)dVar5;
    this[1]._padding_ = (longlong)dVar4;
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = (longlong)dVar7;
    this[1]._padding_ = (longlong)dVar6;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGRawBufferDataInterface> @ 149734450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGRawBufferDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGRawBufferDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGRawBufferDataInterface__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGRawBufferDataProvider> @ 149734510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGRawBufferDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGRawBufferDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGRawBufferDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0xffffffff;
    *(undefined1 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataInterface> @ 149734620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSkinnedMeshSpawnerDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataProvider> @ 1497346d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSkinnedMeshSpawnerDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    *(undefined8 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x8 = 0;
    *(undefined4 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x10 = 0;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x14 = 0x80;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x18 = 0xffffffff;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x1c = 0;
    this[1].ResolvedProducerSettings.field0_0x0.DebugPtr = (UPCGSettings *)0x0;
    *(undefined4 *)&this[1].GenerationCounter = 0;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 6) = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshDataInterface> @ 149734850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGStaticMeshDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshDataProvider> @ 149734900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGStaticMeshDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataInterface> @ 1497349c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshSpawnerDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataProvider> @ 149734a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGStaticMeshSpawnerDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    *(undefined8 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x10 = 0;
    *(undefined4 *)((longlong)&this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data + 4) =
         0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = -1;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x18 = 0;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x1c = 0x80;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x20 = 0xffffffff;
    *(undefined4 *)&this[1].ProducerSettings.SoftObjectPtr.field_0x24 = 0;
    this[1].GenerationCounter = (atomic<unsigned___int64>)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 6) = 0;
    this[2].GraphBindingIndex = 0;
    *(undefined8 *)&this[2].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[2].OutputPinLabelAlias.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGTextureDataInterface> @ 149734c00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGTextureDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGTextureDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGTextureDataInterface__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGTextureDataProvider> @ 149734cc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGTextureDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGTextureDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGTextureDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1].GraphBindingIndex = 0;
    this[1].OutputPinLabel.ComparisonIndex = 0;
    *(undefined8 *)&this[1].OutputPinLabel.Number = 0;
    *(undefined8 *)&this[1].OutputPinLabelAlias.Number = 0;
    this[1].DownstreamInputPinLabelAliases.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DownstreamInputPinLabelAliases.ArrayNum = 0;
    this[1].DownstreamInputPinLabelAliases.ArrayMax = 0;
    *(undefined8 *)&this[1].bProducedByCPU = 0;
    this[1].ProducerKernel.field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
    *(undefined1 *)&this[1].ProducerSettings.SoftObjectPtr = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGTransformPointsDataInterface> @ 149734dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGTransformPointsDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGTransformPointsDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGTransformPointsDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGTransformPointsDataProvider> @ 149734e80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGTransformPointsDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGTransformPointsDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&___7UPCGTransformPointsDataProvider__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGUserParametersData> @ 149734f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGUserParametersData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  UPCGData *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UPCGData *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGUserParametersData::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGUserParametersData__6B_;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(this + 1));
    this[1]._padding_ = 0;
    this[1].UID = 0;
    this[1].Crc.Value = 0;
    this[1].Crc.bValid = false;
    *(undefined3 *)&this[1].Crc.field_0x5 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].UID,0);
    local_res10 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res10);
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGVirtualTextureDataInterface> @ 149735020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGVirtualTextureDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGVirtualTextureDataInterface::GetPrivateStaticClass();
  this = (UPCGComputeDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataInterface *)0x0) {
    UPCGComputeDataInterface::UPCGComputeDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UPCGVirtualTextureDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGVirtualTextureDataProvider> @ 1497350d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGVirtualTextureDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGComputeDataProvider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGVirtualTextureDataProvider::GetPrivateStaticClass();
  this = (UPCGComputeDataProvider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGComputeDataProvider *)0x0) {
    UPCGComputeDataProvider::UPCGComputeDataProvider(this,param_1);
    this->_padding_ = (longlong)&___7UPCGVirtualTextureDataProvider__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MutableView<TObjectPtr<UPCGPointData>_> @ 1497351e0

TMutableView<TObjectPtr<UPCGPointData>_> __cdecl
MutableView<TObjectPtr<UPCGPointData>_>(TObjectPtr<UPCGPointData> *param_1)

{
  TObjectPtr<UPCGPointData>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UPCGPointData>_>)(UPCGPointData **)param_1;
}

// NewObject<UPCGCopyPointsAnalysisDataProvider> @ 1497351f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCopyPointsAnalysisDataProvider * __cdecl
NewObject<UPCGCopyPointsAnalysisDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCopyPointsAnalysisDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCopyPointsAnalysisDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCopyPointsAnalysisDataProvider *)
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

// NewObject<UPCGCopyPointsDataProvider> @ 149735290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCopyPointsDataProvider * __cdecl NewObject<UPCGCopyPointsDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCopyPointsDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCopyPointsDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCopyPointsDataProvider *)
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

// NewObject<UPCGCountUniqueAttributeValuesDataProvider> @ 149735330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCountUniqueAttributeValuesDataProvider * __cdecl
NewObject<UPCGCountUniqueAttributeValuesDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCountUniqueAttributeValuesDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCountUniqueAttributeValuesDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCountUniqueAttributeValuesDataProvider *)
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

// NewObject<UPCGCullPointsOutsideActorBoundsDataProvider> @ 1497353d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCullPointsOutsideActorBoundsDataProvider * __cdecl
NewObject<UPCGCullPointsOutsideActorBoundsDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCullPointsOutsideActorBoundsDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCullPointsOutsideActorBoundsDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCullPointsOutsideActorBoundsDataProvider *)
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

// NewObject<UPCGCustomComputeKernelDataProvider> @ 149735470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCustomComputeKernelDataProvider * __cdecl
NewObject<UPCGCustomComputeKernelDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCustomComputeKernelDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCustomComputeKernelDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCustomComputeKernelDataProvider *)
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

// NewObject<UPCGCustomHLSLDataProvider> @ 149735510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGCustomHLSLDataProvider * __cdecl NewObject<UPCGCustomHLSLDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGCustomHLSLDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGCustomHLSLDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGCustomHLSLDataProvider *)
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

// NewObject<UPCGDataCollectionDataProvider> @ 1497355b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDataCollectionDataProvider * __cdecl NewObject<UPCGDataCollectionDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGDataCollectionDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGDataCollectionDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGDataCollectionDataProvider *)
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

// NewObject<UPCGDataLabelResolverDataProvider> @ 149735650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDataLabelResolverDataProvider * __cdecl
NewObject<UPCGDataLabelResolverDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGDataLabelResolverDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGDataLabelResolverDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGDataLabelResolverDataProvider *)
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

// NewObject<UPCGDataNumDataProvider> @ 1497356f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDataNumDataProvider * __cdecl NewObject<UPCGDataNumDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGDataNumDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGDataNumDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGDataNumDataProvider *)
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

// NewObject<UPCGDebugDataProvider> @ 149735790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGDebugDataProvider * __cdecl NewObject<UPCGDebugDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGDebugDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGDebugDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGDebugDataProvider *)
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

// NewObject<UPCGInstanceDataProvider> @ 149735830

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

UPCGInstanceDataProvider * __cdecl NewObject<UPCGInstanceDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGInstanceDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGInstanceDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGInstanceDataProvider *)
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

// NewObject<UPCGLandscapeDataProvider> @ 1497358d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGLandscapeDataProvider * __cdecl NewObject<UPCGLandscapeDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGLandscapeDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGLandscapeDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGLandscapeDataProvider *)
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

// NewObject<UPCGManagedProceduralISMComponent> @ 149735970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGManagedProceduralISMComponent * __cdecl
NewObject<UPCGManagedProceduralISMComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGManagedProceduralISMComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGManagedProceduralISMComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGManagedProceduralISMComponent *)
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

// NewObject<UPCGMetaDataPartitionDataProvider> @ 149735a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGMetaDataPartitionDataProvider * __cdecl
NewObject<UPCGMetaDataPartitionDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGMetaDataPartitionDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGMetaDataPartitionDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGMetaDataPartitionDataProvider *)
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

// NewObject<UPCGNormalToDensityProvider> @ 149735ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGNormalToDensityProvider * __cdecl NewObject<UPCGNormalToDensityProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGNormalToDensityProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGNormalToDensityProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGNormalToDensityProvider *)
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

// NewObject<UPCGPointData> @ 149735b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGPointData * __cdecl NewObject<UPCGPointData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGPointData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGPointData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGPointData *)
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

// NewObject<UPCGProceduralISMComponent> @ 149735bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGProceduralISMComponent * __cdecl
NewObject<UPCGProceduralISMComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UPCGProceduralISMComponent *pUVar2;
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
  pUVar1 = UPCGProceduralISMComponent::StaticClass();
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
  pUVar2 = (UPCGProceduralISMComponent *)
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

// NewObject<UPCGProxyForGPUData> @ 149735cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGProxyForGPUData * __cdecl NewObject<UPCGProxyForGPUData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGProxyForGPUData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGProxyForGPUData *)
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

// NewObject<UPCGRawBufferData> @ 149735d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGRawBufferData * __cdecl NewObject<UPCGRawBufferData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGRawBufferData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGRawBufferData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGRawBufferData *)
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

// NewObject<UPCGRawBufferDataProvider> @ 149735e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGRawBufferDataProvider * __cdecl NewObject<UPCGRawBufferDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGRawBufferDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGRawBufferDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGRawBufferDataProvider *)
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

// NewObject<UPCGSkinnedMeshSpawnerDataProvider> @ 149735ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSkinnedMeshSpawnerDataProvider * __cdecl
NewObject<UPCGSkinnedMeshSpawnerDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSkinnedMeshSpawnerDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGSkinnedMeshSpawnerDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSkinnedMeshSpawnerDataProvider *)
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

// NewObject<UPCGStaticMeshDataProvider> @ 149735f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGStaticMeshDataProvider * __cdecl NewObject<UPCGStaticMeshDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGStaticMeshDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGStaticMeshDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGStaticMeshDataProvider *)
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

// NewObject<UPCGStaticMeshSpawnerDataProvider> @ 149736010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGStaticMeshSpawnerDataProvider * __cdecl
NewObject<UPCGStaticMeshSpawnerDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGStaticMeshSpawnerDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGStaticMeshSpawnerDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGStaticMeshSpawnerDataProvider *)
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

// NewObject<UPCGTextureData> @ 1497360b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGTextureData * __cdecl NewObject<UPCGTextureData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGTextureData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGTextureData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGTextureData *)
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

// NewObject<UPCGTextureDataProvider> @ 149736150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGTextureDataProvider * __cdecl NewObject<UPCGTextureDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGTextureDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGTextureDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGTextureDataProvider *)
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

// NewObject<UPCGTransformPointsDataProvider> @ 1497361f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGTransformPointsDataProvider * __cdecl
NewObject<UPCGTransformPointsDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGTransformPointsDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGTransformPointsDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGTransformPointsDataProvider *)
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

// NewObject<UPCGVirtualTextureDataProvider> @ 149736290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGVirtualTextureDataProvider * __cdecl NewObject<UPCGVirtualTextureDataProvider>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGVirtualTextureDataProvider *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGVirtualTextureDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGVirtualTextureDataProvider *)
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

// ObjectPtrWrap<UPCGPointData_*,TObjectPtr<UPCGPointData>_> @ 149736480

TObjectPtr<UPCGPointData> * __cdecl
ObjectPtrWrap<UPCGPointData_*,TObjectPtr<UPCGPointData>_>(UPCGPointData **param_1)

{
  return (TObjectPtr<UPCGPointData> *)param_1;
}

// RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>,void> @ 149736490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,_IPCGAsyncLoadingContext::RequestResourceLoad_::__l13::<lambda_1>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2,
          int param_3,bool param_4,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  int iVar1;
  int iVar2;
  FSoftObjectPath *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  ForElementType<TAlignedBytes<16,16>_> FVar6;
  char cVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 local_118 [16];
  char *local_108;
  FDelegateAllocation *local_100;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  int local_b8;
  undefined1 local_b0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  int local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  int local_58;
  undefined2 local_54;
  FStreamableDownloadCachePin local_50;
  bool local_38;
  
  pFVar3 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  iVar2 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  local_b0._0_8_ = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  local_54._0_1_ = false;
  local_54._1_1_ = false;
  local_38 = false;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  local_b0._0_8_ = pFVar3;
  local_b0._8_4_ = iVar1;
  local_b0._12_4_ = iVar2;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)local_118);
  local_100 = &local_d8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_d8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::`13'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = (param_2->ContextHandle).Object;
    puVar8[4] = (param_2->ContextHandle).WeakReferenceCount.ReferenceController;
    (param_2->ContextHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->ContextHandle).Object = (FPCGContextHandle *)0x0;
  }
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_e0,(FReadAccessScope *)local_118);
  if ((local_d8.DelegateSize == 0) ||
     (local_d8.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
LAB_1497365e5:
    bVar5 = false;
  }
  else {
    cVar7 = (**(code **)(*(longlong *)local_d8.DelegateAllocator + 0x38))();
    if (cVar7 == '\0') goto LAB_1497365e5;
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_118);
  if (bVar5) {
    local_c8 = (undefined1  [8])0x0;
    local_c0.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e0,(FWriteAccessScope *)local_118);
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    local_c0.Data = (FScriptContainerElement *)local_d8.DelegateAllocator;
    local_b8 = local_d8.DelegateSize;
    local_d8.DelegateSize = 0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_108._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
    }
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0._8_8_ = (ulonglong)(uint)local_f0._12_4_ << 0x20;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)local_118);
    local_100 = &local_f0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_f0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__V<lambda_1>__4__WrapDelegate_Private_StreamableManager_UE__YA_AV__TDelegate___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar8 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    }
    if (local_108._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)local_118);
    if ((local_b8 != 0) &&
       ((ForElementType<TAlignedBytes<16,16>_>)local_c0.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
      local_b8 = 0;
    }
    if (local_108._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
    }
    if ((ForElementType<TAlignedBytes<16,16>_>)local_c0.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(local_c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
  }
  else {
    local_f0._8_8_ = 0;
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)local_118);
  FVar6 = local_f0.DelegateAllocator;
  iVar1 = local_f0.DelegateSize;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0._8_8_ = local_f0._8_8_ & 0xffffffff00000000;
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_118);
  if (local_90 != 0) {
    if (FStack_98.Data == (FScriptContainerElement *)0x0) goto LAB_1497367cd;
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
LAB_1497367cd:
  FStack_98.Data = (FScriptContainerElement *)FVar6;
  local_90 = iVar1;
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)local_118);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0._8_8_ = local_f0._8_8_ & 0xffffffff00000000;
  }
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)local_118);
  if ((local_d8.DelegateSize != 0) &&
     (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d8,0,0,0x10);
    local_d8.DelegateSize = 0;
  }
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  local_58 = param_3;
  local_54._1_1_ = param_5;
  local_54._0_1_ = param_4;
  local_f8 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.DelegateAllocator = *(ForElementType<TAlignedBytes<16,16>_> *)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_118._0_4_ = (param_7->Impl)._Line;
  local_118._4_4_ = (param_7->Impl)._Column;
  local_118._8_8_ = (param_7->Impl)._File;
  local_108 = (param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_b0,
                   (FString *)local_f8,(FSourceLocation *)local_118);
  if (local_38 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)local_118);
  if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_118);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_118);
  if ((local_90 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_98.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_108._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._8_8_,(FDestructionSentinel *)local_118);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_98.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_b0._0_8_,local_b0._8_4_);
  if ((FSoftObjectPath *)local_b0._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  pFVar4 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FPCGSceneWriterCS> @ 149736f10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FPCGSceneWriterCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FPCGSceneWriterCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FPCGSceneWriterCS *pFVar4;
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

// TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_> @ 1497371d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,_public:___cdecl__public:_virtual_void___cdecl_FPCGInstanceDataProviderProxy::PostSubmit(FComputeContext_&)const_::_2_::<lambda_1>::operator()(float)const_::_38_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,__FPCGInstanceDataProviderProxy::PostSubmit_::__l2::<lambda_1>::operator()_::__l38::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,_public:___cdecl__public:_virtual_void___cdecl_FPCGInstanceDataProviderProxy::PostSubmit(FComputeContext_&)const_::_2_::<lambda_1>::operator()(float)const_::_38_::<lambda_1>_>
          *param_1)

{
  FRDGPooledBuffer *pFVar1;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder__AEBUFGPUSceneWriteDelegateParams___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::`2'::<lambda_1>::operator()'::`38'::<lambda_1>_>
        ::_vftable_;
  *(int *)((longlong)this + 0x18) = (param_1->Functor).PrimitiveIndex;
  *(int *)((longlong)this + 0x1c) = (param_1->Functor).PrimitiveNumInstances;
  *(int *)((longlong)this + 0x20) = (param_1->Functor).CumulativeInstanceCount;
  *(uint *)((longlong)this + 0x24) = (param_1->Functor).Seed;
  *(bool *)((longlong)this + 0x28) = (param_1->Functor).bTriggerCapture;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  pFVar1 = (param_1->Functor).InstanceDataExported.Reference;
  *(FRDGPooledBuffer **)((longlong)this + 0x30) = pFVar1;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x38) = 0;
  pFVar1 = (param_1->Functor).InstanceCustomFloatDataExported.Reference;
  *(FRDGPooledBuffer **)((longlong)this + 0x38) = pFVar1;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x40) = 0;
  pFVar1 = (param_1->Functor).WriteCountersExported.Reference;
  *(FRDGPooledBuffer **)((longlong)this + 0x40) = pFVar1;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  return this;
}

// ~<lambda_1> @ 14973d0d0

void __thiscall
``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>::
~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)((longlong)this + 0x28);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14973d170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<__UPCGRawBufferDataProvider::GetRenderProxy_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14973d190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FPCGTextureDataProviderProxy::ExportTextureUAVs_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            (*(TRefCountPtr<IPooledRenderTarget> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14973d1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FPCGDataCollectionDataProviderProxy::AllocateResources_::__l27::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::`27'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014973d229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1> @ 14973d240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGDebugDataProvider::GetRenderProxy_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1> @ 14973d280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGRawBufferDataProvider::GetRenderProxy_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined **)this =
       &TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>,0,1> @ 14973d2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGBlueprintElement::IterationLoop_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>,0,1> @ 14973d2c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGBlueprintElement::NestedLoop_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>,0,1> @ 14973d2e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGBlueprintElement::PointLoop_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>,1,1> @ 14973d300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FPCGInstanceDataProviderProxy::PostSubmit_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::`2'::<lambda_1>,1,1>::
        _vftable_;
  `FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>,0,1> @ 14973d320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UPCGBlueprintElement::VariableLoop_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>,1,0> @ 14973d340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FPCGLandscapeResource::~FPCGLandscapeResource_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// operator() @ 14973fdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  UPCGData *pUVar1;
  EPCGExportMode EVar2;
  FName FVar3;
  FName FVar4;
  UPCGDataBinding *this_00;
  UPCGComputeDataProvider *this_01;
  UObject *pUVar5;
  UClass *pUVar6;
  UPCGData *pUVar7;
  UPCGData *pUVar8;
  UPCGSettings *pUVar9;
  longlong *plVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this_00 = (UPCGDataBinding *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x34));
  if (this_00 != (UPCGDataBinding *)0x0) {
    this_01 = (UPCGComputeDataProvider *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
    if (this_01 == (UPCGComputeDataProvider *)0x0) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Could_not_resol_151edcad8,
                   (FLogCategoryBase *)&LogPCG);
      }
    }
    else if (this_01->GenerationCounter == *(atomic<unsigned___int64> *)((longlong)this + 0x18)) {
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UPCGRawBufferData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar6);
      local_a8._8_8_ = pUVar5;
      pUVar7 = (UPCGData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar10 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      pUVar8 = (UPCGData *)TSharedPtr<UPCGRawBufferDataProvider::FReadbackState,1>::operator->(this)
      ;
      pUVar1 = pUVar7 + 1;
      if (pUVar1 != pUVar8) {
        if ((void *)pUVar1->_padding_ != (void *)0x0) {
          FMemory::Free((void *)pUVar1->_padding_);
        }
        pUVar1->_padding_ = pUVar8->_padding_;
        pUVar8->_padding_ = 0;
        *(int *)&pUVar7[1]._padding_ = (int)pUVar8->_padding_;
        *(undefined4 *)((longlong)&pUVar7[1]._padding_ + 4) =
             *(undefined4 *)((longlong)&pUVar8->_padding_ + 4);
        pUVar8->_padding_ = 0;
      }
      FVar3 = *(FName *)((longlong)this + 0x2c);
      FVar4 = *(FName *)((longlong)this + 0x24);
      EVar2 = *(EPCGExportMode *)((longlong)this + 0x20);
      pUVar9 = UPCGComputeDataProvider::GetProducerSettings(this_01);
      UPCGDataBinding::ReceiveDataFromGPU_GameThread(this_00,pUVar7,pUVar9,EVar2,FVar4,FVar3);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this_01[1]._padding_);
    }
  }
  return false;
}

// operator() @ 149742480

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

void __thiscall
``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>::
operator()(void *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  FRDGBufferUAV *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  FRDGScope *this_00;
  FRDGBuffer *pFVar10;
  FRDGBuffer *pFVar11;
  FRDGBuffer *pFVar12;
  undefined8 *puVar13;
  FRDGBufferSRV *pFVar14;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar15;
  FName this_02;
  FRDGEventName *pFVar16;
  FShaderParametersMetadata *pFVar17;
  undefined8 *puVar18;
  undefined1 local_res20 [8];
  undefined8 *local_198 [2];
  TIntVector3<int>_u_0 local_188;
  TRDGEventScopeGuard<FRDGScope_RHI> local_178;
  char local_168;
  FRDGBufferSRVDesc local_160;
  FRDGBufferSRVDesc local_140;
  FRDGBufferSRVDesc local_120;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<43>_const_*,std::tuple<>_> local_e8;
  FString local_d8;
  TShaderRefBase<FPCGSceneWriterCS,FShaderMapPointerTable> local_c8;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  FRDGEventName local_98;
  FScopedCapture local_80;
  
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  puVar18 = (undefined8 *)0x0;
  local_168 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_a8 = 0;
      uStack_a4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_ac);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x1a9;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SceneComputeUpd;
      ::Desc._padding_ = (longlong)u_SceneComputeUpd;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(`````FPCGInstanceDataProviderProxy::PostSubmit'::__l2::Desc::operator()'::__l38::Desc::
             operator()'::__l7::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_e8._Myfirst._Val = &::Desc;
    local_178.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_178.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<43>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_e8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_168 = '\x01';
  }
  if ((param_2->PersistentPrimitiveId == 0xffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.PersistentPrimitiveId != (uint32)INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
                         ,0x1aa,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RenderCaptureInterface::FScopedCapture::FScopedCapture
            (&local_80,*(bool *)((longlong)this + 0x10),param_1,
             L"SceneComputeUpdateInterface->EnqueueUpdate",(wchar_t *)0x0);
  pFVar10 = FRDGBuilder::RegisterExternalBuffer
                      (param_1,(TRefCountPtr<FRDGPooledBuffer> *)((longlong)this + 0x18),None);
  pFVar11 = FRDGBuilder::RegisterExternalBuffer
                      (param_1,(TRefCountPtr<FRDGPooledBuffer> *)((longlong)this + 0x20),None);
  pFVar12 = FRDGBuilder::RegisterExternalBuffer
                      (param_1,(TRefCountPtr<FRDGPooledBuffer> *)((longlong)this + 0x28),None);
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xb0,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar13[4] = 0;
    *puVar13 = &___7__TObject_VFParameters_FPCGSceneWriterCS___FRDGAllocator__6B_;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0x10] = 0;
    *(undefined1 *)(puVar13 + 0x11) = 1;
    puVar18 = puVar13;
  }
  local_198[0] = puVar18;
  if ((((undefined8 **)param_1->_padding_ <= local_198) &&
      (local_198 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar8 + 1;
  local_160._padding_._4_4_ = 0;
  local_160._padding_._0_4_ = 0xffffffff;
  local_160._padding_ = 0;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_198[0];
  ((FParameters *)(puVar18 + 2))->InPrimitiveIndex = *(uint *)this;
  *(undefined4 *)((longlong)puVar18 + 0x14) = *(undefined4 *)((longlong)this + 4);
  *(undefined4 *)(puVar18 + 3) = *(undefined4 *)((longlong)this + 8);
  local_160._padding_._0_1_ = 0;
  if (((pFVar10->Desc).Usage & DrawIndirect) != None) {
    local_160._padding_._0_1_ = 0x1c;
  }
  local_160.Buffer = pFVar10;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_160);
  puVar18[4] = pFVar14;
  local_140._padding_._0_1_ = 0;
  local_140._padding_._4_4_ = 0;
  local_140._padding_._0_4_ = 0xffffffff;
  local_140._padding_ = 0;
  if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
    local_140._padding_._0_1_ = 0x1c;
  }
  local_140.Buffer = pFVar11;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_140);
  puVar18[5] = pFVar14;
  local_120._padding_._0_1_ = 0;
  local_120._padding_._4_4_ = 0;
  local_120._padding_._0_4_ = 0xffffffff;
  local_120._padding_ = 0;
  if (((pFVar12->Desc).Usage & DrawIndirect) != None) {
    local_120._padding_._0_1_ = 0x1c;
  }
  local_120.Buffer = pFVar12;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_120);
  puVar18[6] = pFVar14;
  *(uint *)(puVar18 + 7) = param_2->PersistentPrimitiveId;
  pFVar4 = (param_2->GPUWriteParams).GPUSceneInstancePayloadDataRW;
  puVar18[10] = (param_2->GPUWriteParams).GPUSceneInstanceSceneDataRW;
  puVar18[0xb] = pFVar4;
  uVar5 = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneInstanceSceneDataSOAStride;
  puVar18[0xc] = (param_2->GPUWriteParams).GPUScenePrimitiveSceneDataRW;
  puVar18[0xd] = uVar5;
  lVar6 = (param_2->GPUWriteParams)._padding_;
  puVar18[0xe] = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneNumAllocatedPrimitives;
  puVar18[0xf] = lVar6;
  uVar5 = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneWriterUB.field_0x8;
  puVar18[0x10] = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneWriterUB;
  puVar18[0x11] = uVar5;
  uVar5 = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneInstanceDataTileStride;
  puVar18[0x12] = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters;
  puVar18[0x13] = uVar5;
  uVar5 = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneNumLightmapDataItems;
  puVar18[0x14] =
       *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneMaxAllocatedInstanceId;
  puVar18[0x15] = uVar5;
  *(uint *)((longlong)puVar18 + 0x3c) = param_2->NumCustomDataFloats;
  *(uint *)(puVar18 + 8) = param_2->PackedInstanceSceneDataFlags;
  *(undefined4 *)((longlong)puVar18 + 0x44) = *(undefined4 *)((longlong)this + 0xc);
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar15 = (FShaderType *)FPCGSceneWriterCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_f8,pFVar15,0);
  if (local_f8.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    ::FName::ToString((FName *)this_02,&local_d8);
    FPCGSceneWriterCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FPCGSceneWriterCS::GetStaticType();
  iVar8 = *(int *)((longlong)this + 4) + 0x3f;
  local_c8.ShaderContent = (FPCGSceneWriterCS *)local_f8.ShaderContent;
  local_c8.ShaderMap = local_f8.ShaderMap;
  uVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6;
  if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar9) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<801890460250407377>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
                         ,0x1d1,"GroupCount <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar9) {
    uVar9 = GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X;
  }
  pFVar16 = FRDGEventName::FRDGEventName(&local_98,1,L"PCGWriteInstanceData");
  pFVar17 = FPCGSceneWriterCS::FParameters::FTypeInfo::GetStructMetadata();
  local_188._s_0.Y = 1;
  local_188._s_0.Z = 1;
  local_188._s_0.X = uVar9;
  FComputeShaderUtils::AddPass<FPCGSceneWriterCS>
            (param_1,pFVar16,NeverCull|Compute,&local_c8,pFVar17,(FParameters *)(puVar18 + 2),
             (TIntVector3<int> *)&local_188._s_0);
  if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
  }
  RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_80);
  if (local_168 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_178);
  }
  return;
}

// operator() @ 149742a80

void __thiscall
`PCGManagedProceduralISMComponent::GetOrCreateManagedProceduralISMC'::__l13::<lambda_1>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int iVar1;
  uint uVar2;
  FProceduralISMComponentDescriptor *pFVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  UPCGProceduralISMComponent *pUVar7;
  
  if ((**(longlong **)this == 0) && (param_1 != (UPCGManagedResource *)0x0)) {
    pUVar6 = UPCGManagedProceduralISMComponent::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        (((((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_ &&
           (cVar4 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1), cVar4 != '\0')) &&
          (param_1->bIsMarkedUnused != false)) &&
         ((param_1[6]._padding_ == *(longlong *)((longlong)this + 0x20) &&
          (pUVar7 = UPCGManagedProceduralISMComponent::GetComponent
                              ((UPCGManagedProceduralISMComponent *)param_1),
          pUVar7 != (UPCGProceduralISMComponent *)0x0)))))) &&
       ((((uint)pUVar7->_padding_ >> 0x1e & 1) == 0 &&
        (pUVar7->_padding_ == **(longlong **)((longlong)this + 0x10))))) {
      pFVar3 = *(FProceduralISMComponentDescriptor **)((longlong)this + 0x18);
      bVar5 = FProceduralISMComponentDescriptor::operator==
                        ((FProceduralISMComponentDescriptor *)&param_1[1].Crc,pFVar3);
      if (((bVar5) && (uVar2 = (uint)param_1[5]._padding_, uVar2 == pFVar3[1].Hash)) &&
         (bVar5 = CompareItems<FName,int>
                            ((FName *)param_1[5]._padding_,(FName *)pFVar3[1]._padding_,uVar2),
         bVar5)) {
        **(undefined8 **)this = param_1;
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 149742c44

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGProceduralISMComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UPCGProceduralISMComponent::_vector_deleting_destructor__adjustor_592__
          (UPCGProceduralISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGProceduralISMComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149742c58

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGProceduralISMComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UPCGProceduralISMComponent::_vector_deleting_destructor__adjustor_600__
          (UPCGProceduralISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGProceduralISMComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 149742c6c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGProceduralISMComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UPCGProceduralISMComponent::_vector_deleting_destructor__adjustor_608__
          (UPCGProceduralISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGProceduralISMComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149742c80

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGProceduralISMComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGProceduralISMComponent::_vector_deleting_destructor__adjustor_40__
          (UPCGProceduralISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPCGProceduralISMComponent *)
                      ((longlong)&this[-1].LocalBounds.Min.field0_0x0 + 0x10),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 149742c90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742cd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            (*(TRefCountPtr<IPooledRenderTarget> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742df0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::`27'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined **)this =
       &TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149742fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::`2'::<lambda_1>,1,1>::
        _vftable_;
  `FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497430b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGContextHandle,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPCGContextHandle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497430f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGProxyForGPUDataCollection,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGProxyForGPUDataCollection,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743130

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UPCGRawBufferDataProvider::FReadbackState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UPCGRawBufferDataProvider::FReadbackState,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743170

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGDataUploadAdaptor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGDataUploadAdaptor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497431b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLandscapeResource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGLandscapeResource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497431f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPrimitiveFactoryISKMC,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGPrimitiveFactoryISKMC,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743230

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPrimitiveFactoryPISMC,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGPrimitiveFactoryPISMC,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FPCGSceneWriterCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FPCGSceneWriterCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497432a0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FPCGSceneWriterCS>'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 149743300

void * __thiscall
FPCGAttributePropertyOutputNoSourceSelector::_scalar_deleting_destructor_
          (FPCGAttributePropertyOutputNoSourceSelector *this,uint param_1)

{
  DestructItems<FString,int>(*(FString **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743350

void * __thiscall
FPCGAttributePropertySelector::_scalar_deleting_destructor_
          (FPCGAttributePropertySelector *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->ExtraNames).AllocatorInstance.Data,(this->ExtraNames).ArrayNum);
  pFVar1 = (this->ExtraNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497433a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall FPCGContext::_scalar_deleting_destructor_(FPCGContext *this,uint param_1)

{
  ~FPCGContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497433e0

void * __thiscall
FPCGCopyPointsAnalysisDataProviderProxy::_scalar_deleting_destructor_
          (FPCGCopyPointsAnalysisDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGCopyPointsDataProviderProxy::_scalar_deleting_destructor_
          (FPCGCopyPointsDataProviderProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).SourceAndTargetDataIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743470

void * __thiscall
FPCGCountUniqueAttributeValuesProviderProxy::_scalar_deleting_destructor_
          (FPCGCountUniqueAttributeValuesProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497434b0

void * __thiscall
FPCGCullPointsOutsideActorBoundsDataProviderProxy::_scalar_deleting_destructor_
          (FPCGCullPointsOutsideActorBoundsDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497434f0

void * __thiscall
FPCGCustomComputeKernelDataProviderProxy::_scalar_deleting_destructor_
          (FPCGCustomComputeKernelDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743530

void * __thiscall
FPCGCustomHLSLDataProviderProxy::_scalar_deleting_destructor_
          (FPCGCustomHLSLDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGDataCollectionDataProviderProxy::_scalar_deleting_destructor_
          (FPCGDataCollectionDataProviderProxy *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataAdaptor).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinDesc).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497435d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGDataLabelResolverDataProviderProxy::_scalar_deleting_destructor_
          (FPCGDataLabelResolverDataProviderProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataIdToDataIndexMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743620

void * __thiscall
FPCGDataNumDataProviderProxy::_scalar_deleting_destructor_
          (FPCGDataNumDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGDebugDataProviderProxy::_scalar_deleting_destructor_
          (FPCGDebugDataProviderProxy *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->AsyncReadbackCallback_RenderThread != 0) {
    plVar1 = *(longlong **)&(this->AsyncReadbackCallback_RenderThread).field_0x28;
    plVar2 = (longlong *)&(this->AsyncReadbackCallback_RenderThread).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497436c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FPCGInstanceDataProviderProxy::_scalar_deleting_destructor_
          (FPCGInstanceDataProviderProxy *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
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
            ((this->PrimitiveFactory).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743730

void * __thiscall
FPCGLandscapeDataProviderProxy::_scalar_deleting_destructor_
          (FPCGLandscapeDataProviderProxy *this,uint param_1)

{
  FRHIShaderResourceView *pFVar1;
  FRHITexture *pFVar2;
  
  pFVar1 = (this->NormalVirtualLayer1).TextureSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->NormalVirtualLayer0).TextureSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->NormalVirtualPage).PageTableIndirectionRef.Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->NormalVirtualPage).PageTableRef.Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->HeightVirtualLayer).TextureSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->HeightVirtualPage).PageTableIndirectionRef.Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->HeightVirtualPage).PageTableRef.Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->BaseColorVirtualLayer).TextureSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->BaseColorVirtualPage).PageTableIndirectionRef.Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->BaseColorVirtualPage).PageTableRef.Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Resource).SharedReferenceCount.ReferenceController);
  *(undefined ***)this = &___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743820

void * __thiscall
FPCGLandscapeTextureResource::_scalar_deleting_destructor_
          (FPCGLandscapeTextureResource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->HeightValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTextureReadBuffer2D::~FTextureReadBuffer2D(&this->HeightTexture);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743880

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGMetaDataPartitionProviderProxy::_scalar_deleting_destructor_
          (FPCGMetaDataPartitionProviderProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data,
             (this->UniqueStringKeyValuesPerInputData).ArrayNum);
  pFVar1 = (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497438e0

void * __thiscall
FPCGNormalToDensityDataProviderProxy::_scalar_deleting_destructor_
          (FPCGNormalToDensityDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743920

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
FPCGPrimitiveFactoryISKMC::_scalar_deleting_destructor_
          (FPCGPrimitiveFactoryISKMC *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MeshBounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
            ((FPCGSoftSkinnedMeshComponentDescriptor *)(this->Descriptors).AllocatorInstance.Data,
             (this->Descriptors).ArrayNum);
  pFVar1 = (this->Descriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497439a0

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
FPCGPrimitiveFactoryPISMC::_scalar_deleting_destructor_
          (FPCGPrimitiveFactoryPISMC *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MeshBounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGProceduralISMComponentDescriptor,int>
            ((FPCGProceduralISMComponentDescriptor *)(this->Descriptors).AllocatorInstance.Data,
             (this->Descriptors).ArrayNum);
  pFVar1 = (this->Descriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743a20

void * __thiscall
FPCGProceduralISMComponentDescriptor::_scalar_deleting_destructor_
          (FPCGProceduralISMComponentDescriptor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGRawBufferDataProviderProxy::_scalar_deleting_destructor_
          (FPCGRawBufferDataProviderProxy *this,uint param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->AsyncReadbackCallback_RenderThread != 0) {
    plVar1 = *(longlong **)&(this->AsyncReadbackCallback_RenderThread).field_0x28;
    plVar3 = (longlong *)&(this->AsyncReadbackCallback_RenderThread).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->DataToUpload).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGSkinnedMeshSpawnerDataProviderProxy::_scalar_deleting_destructor_
          (FPCGSkinnedMeshSpawnerDataProviderProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrimitiveMeshBoundsMax).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveMeshBoundsMin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveStringKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectionCDF).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeIdOffsetStrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743ba0

void * __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::_scalar_deleting_destructor_
          (FPCGSoftSkinnedMeshComponentDescriptor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743bf0

void * __thiscall
FPCGStaticMeshDataProviderProxy::_scalar_deleting_destructor_
          (FPCGStaticMeshDataProviderProxy *this,uint param_1)

{
  longlong *plVar1;
  FRHIShaderResourceView *pFVar2;
  FStaticMeshLODResources *pFVar3;
  longlong lVar4;
  
  this->_padding_ = (longlong)&___7FPCGStaticMeshDataProviderProxy__6B_;
  pFVar2 = (this->IndexBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->IndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->IndexBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->LODResources).Reference;
  if (pFVar3 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FPCGStaticMeshSpawnerDataProviderProxy::_scalar_deleting_destructor_
          (FPCGStaticMeshSpawnerDataProviderProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrimitiveMeshBoundsMax).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveMeshBoundsMin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveStringKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectionCDF).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeIdOffsetStrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743d20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FPCGTextureDataProviderProxy::_scalar_deleting_destructor_
          (FPCGTextureDataProviderProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinDesc).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TextureInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTextureBindingInfo,int>
            ((FPCGTextureBindingInfo *)(this->BindingInfos).AllocatorInstance.Data,
             (this->BindingInfos).ArrayNum);
  pFVar1 = (this->BindingInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743da0

void * __thiscall
FPCGTransformPointsDataProviderProxy::_scalar_deleting_destructor_
          (FPCGTransformPointsDataProviderProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743de0

void * __thiscall
FPCGVirtualTextureDataProviderProxy::_scalar_deleting_destructor_
          (FPCGVirtualTextureDataProviderProxy *this,uint param_1)

{
  FRHITexture *pFVar1;
  FRHIShaderResourceView *this_00;
  FVirtualTexturePageTable *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0xc;
  lVar3 = 0xc;
  pFVar2 = (FVirtualTexturePageTable *)&this->NumVirtualTextures;
  do {
    lVar3 = lVar3 + -1;
    pFVar1 = pFVar2[-1].PageTableIndirectionRef.Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar1 = pFVar2[-1].PageTableRef.Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pFVar2 + -1;
  } while (lVar3 != 0);
  pFVar2 = this->PageTables;
  do {
    this_00 = ((FVirtualTextureLayer *)(pFVar2 + -1))[7].TextureSRV.Reference;
    pFVar2 = (FVirtualTexturePageTable *)((FVirtualTextureLayer *)(pFVar2 + -1) + 7);
    lVar4 = lVar4 + -1;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  } while (lVar4 != 0);
  *(undefined ***)this = &___7FComputeDataProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743eb0

void * __thiscall
IPCGAsyncLoadingContext::_scalar_deleting_destructor_(IPCGAsyncLoadingContext *this,uint param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  FStreamableHandle *this_00;
  FScriptContainerElement *pFVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->LoadHandle;
  this->_padding_ = (longlong)&___7IPCGAsyncLoadingContext__6B_;
  this_00 = pTVar1->Object;
  if (((this_00 != (FStreamableHandle *)0x0) && (this_00->bCanceled == false)) &&
     (this_00->bReleased == false)) {
    FStreamableHandle::CancelHandle(this_00);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    pTVar1->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->AlreadyLoadedObjects).AllocatorInstance.Data,
             (this->AlreadyLoadedObjects).ArrayNum);
  pFVar2 = (this->AlreadyLoadedObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743f80

void * __thiscall
IPCGPrimitiveFactoryISMBase::_scalar_deleting_destructor_
          (IPCGPrimitiveFactoryISMBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743fb0

void * __thiscall
IPCGRuntimePrimitiveFactory::_scalar_deleting_destructor_
          (IPCGRuntimePrimitiveFactory *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149743fe0

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
UPCGBlueprintElement::_scalar_deleting_destructor_(UPCGBlueprintElement *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGBlueprintElement__6B_;
  UPCGBlueprintBaseElement::~UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744040

void * __thiscall
UPCGComputeDataInterface::_scalar_deleting_destructor_(UPCGComputeDataInterface *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  pvVar1 = *(void **)&(this->ProducerSettings).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497440c0

void * __thiscall
UPCGComputeDataProvider::_scalar_deleting_destructor_(UPCGComputeDataProvider *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  pvVar1 = *(void **)&(this->ProducerSettings).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->DownstreamInputPinLabelAliases).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744140

void * __thiscall
UPCGCopyPointsAnalysisDataInterface::_scalar_deleting_destructor_
          (UPCGCopyPointsAnalysisDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497441c0

void * __thiscall
UPCGCopyPointsAnalysisDataProvider::_scalar_deleting_destructor_
          (UPCGCopyPointsAnalysisDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744240

void * __thiscall
UPCGCopyPointsDataInterface::_scalar_deleting_destructor_
          (UPCGCopyPointsDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497442c0

void * __thiscall
UPCGCopyPointsDataProvider::_scalar_deleting_destructor_
          (UPCGCopyPointsDataProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGCopyPointsDataProvider__6B_;
  pFVar1 = (this->SourceAndTargetDataIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744360

void * __thiscall
UPCGCountUniqueAttributeValuesDataInterface::_scalar_deleting_destructor_
          (UPCGCountUniqueAttributeValuesDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497443e0

void * __thiscall
UPCGCountUniqueAttributeValuesDataProvider::_scalar_deleting_destructor_
          (UPCGCountUniqueAttributeValuesDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744460

void * __thiscall
UPCGCountUniqueAttributeValuesKernel::_scalar_deleting_destructor_
          (UPCGCountUniqueAttributeValuesKernel *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesKernel__6B_;
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497444c0

void * __thiscall
UPCGCullPointsOutsideActorBoundsDataInterface::_scalar_deleting_destructor_
          (UPCGCullPointsOutsideActorBoundsDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744540

void * __thiscall
UPCGCullPointsOutsideActorBoundsDataProvider::_scalar_deleting_destructor_
          (UPCGCullPointsOutsideActorBoundsDataProvider *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataProvider__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497445c0

void * __thiscall
UPCGCustomComputeKernelDataProvider::_scalar_deleting_destructor_
          (UPCGCustomComputeKernelDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744640

void * __thiscall
UPCGCustomHLSLDataInterface::_scalar_deleting_destructor_
          (UPCGCustomHLSLDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497446c0

void * __thiscall
UPCGCustomHLSLDataProvider::_scalar_deleting_destructor_
          (UPCGCustomHLSLDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744740

void * __thiscall
UPCGCustomKernelDataInterface::_scalar_deleting_destructor_
          (UPCGCustomKernelDataInterface *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGCustomKernelDataInterface__6B_;
  pvVar1 = *(void **)&(this->Settings).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497447e0

void * __thiscall
UPCGDataCollectionDataInterface::_scalar_deleting_destructor_
          (UPCGDataCollectionDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UPCGDataCollectionDataProvider::_scalar_deleting_destructor_
          (UPCGDataCollectionDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGDataCollectionDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataAdaptor).SharedReferenceCount.ReferenceController);
  UPCGExportableDataProvider::~UPCGExportableDataProvider((UPCGExportableDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497448d0

void * __thiscall
UPCGDataLabelResolverDataInterface::_scalar_deleting_destructor_
          (UPCGDataLabelResolverDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744950

void * __thiscall
UPCGDataLabelResolverDataProvider::_scalar_deleting_destructor_
          (UPCGDataLabelResolverDataProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataProvider__6B_;
  pFVar1 = (this->DataIdToDataIndexMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497449f0

void * __thiscall
UPCGDataNumDataInterface::_scalar_deleting_destructor_(UPCGDataNumDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744a70

void * __thiscall
UPCGDataNumDataProvider::_scalar_deleting_destructor_(UPCGDataNumDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744af0

void * __thiscall
UPCGDataNumKernel::_scalar_deleting_destructor_(UPCGDataNumKernel *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataNumKernel__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutCountAttributeKey).Name.field_0x28,
             *(int *)&(this->OutCountAttributeKey).Name.field_0x30);
  pvVar1 = *(void **)&(this->OutCountAttributeKey).Name.field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGComputeKernel::~UPCGComputeKernel((UPCGComputeKernel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744b80

void * __thiscall
UPCGDebugDataInterface::_scalar_deleting_destructor_(UPCGDebugDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744c00

void * __thiscall
UPCGDebugDataProvider::_scalar_deleting_destructor_(UPCGDebugDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744c80

void * __thiscall
UPCGExportableDataInterface::_scalar_deleting_destructor_
          (UPCGExportableDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744d00

void * __thiscall
UPCGExportableDataProvider::_scalar_deleting_destructor_
          (UPCGExportableDataProvider *this,uint param_1)

{
  ~UPCGExportableDataProvider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744d60

void * __thiscall
UPCGInstanceDataInterface::_scalar_deleting_destructor_
          (UPCGInstanceDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744de0

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
UPCGInstanceDataProvider::_scalar_deleting_destructor_(UPCGInstanceDataProvider *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UPCGInstanceDataProvider__6B_;
  pTVar3 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
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
            ((this->PrimitiveFactory).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744ea0

void * __thiscall
UPCGKernelParamsDataInterface::_scalar_deleting_destructor_
          (UPCGKernelParamsDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744f20

void * __thiscall
UPCGKernelParamsDataProvider::_scalar_deleting_destructor_
          (UPCGKernelParamsDataProvider *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataProvider__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149744fa0

void * __thiscall
UPCGLandscapeDataInterface::_scalar_deleting_destructor_
          (UPCGLandscapeDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745020

void * __thiscall
UPCGLandscapeDataProvider::_scalar_deleting_destructor_
          (UPCGLandscapeDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGLandscapeDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Resource).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497450c0

void * __thiscall
UPCGManagedProceduralISMComponent::_scalar_deleting_destructor_
          (UPCGManagedProceduralISMComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGManagedProceduralISMComponent__6B_;
  pFVar1 = (this->Descriptor).ComponentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->Descriptor)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Descriptor)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Descriptor)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGManagedComponent::~UPCGManagedComponent((UPCGManagedComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745170

void * __thiscall
UPCGMetaDataPartitionDataProvider::_scalar_deleting_destructor_
          (UPCGMetaDataPartitionDataProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMetaDataPartitionDataProvider__6B_;
  pFVar1 = (this->AnalysisDataIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data,
             (this->UniqueStringKeyValuesPerInputData).ArrayNum);
  pFVar1 = (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxAttributeValuePerInputData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745240

void * __thiscall
UPCGMetadataPartitionDataInterface::_scalar_deleting_destructor_
          (UPCGMetadataPartitionDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497452c0

void * __thiscall
UPCGNormalToDensityDataInterface::_scalar_deleting_destructor_
          (UPCGNormalToDensityDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745340

void * __thiscall
UPCGNormalToDensityProvider::_scalar_deleting_destructor_
          (UPCGNormalToDensityProvider *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataProvider__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497453c0

void * __thiscall
UPCGProceduralISMComponent::_scalar_deleting_destructor_
          (UPCGProceduralISMComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745460

void * __thiscall
UPCGRawBufferDataInterface::_scalar_deleting_destructor_
          (UPCGRawBufferDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497454e0

void * __thiscall
UPCGRawBufferDataProvider::_scalar_deleting_destructor_
          (UPCGRawBufferDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGRawBufferDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReadbackState).SharedReferenceCount.ReferenceController);
  UPCGExportableDataProvider::~UPCGExportableDataProvider((UPCGExportableDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745550

void * __thiscall
UPCGSkinnedMeshSpawnerDataInterface::_scalar_deleting_destructor_
          (UPCGSkinnedMeshSpawnerDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497455d0

void * __thiscall
UPCGSkinnedMeshSpawnerDataProvider::_scalar_deleting_destructor_
          (UPCGSkinnedMeshSpawnerDataProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataProvider__6B_;
  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
            ((FPCGSoftSkinnedMeshComponentDescriptor *)
             (this->PrimitiveDescriptors).AllocatorInstance.Data,
             (this->PrimitiveDescriptors).ArrayNum);
  pFVar1 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StringKeyToInstanceCount).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringKeyToInstanceCount);
  pFVar1 = (this->PrimitiveSelectionCDF).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveMeshBounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveStringKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeIdOffsetStrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745700

void * __thiscall
UPCGStaticMeshDataInterface::_scalar_deleting_destructor_
          (UPCGStaticMeshDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745780

void * __thiscall
UPCGStaticMeshDataProvider::_scalar_deleting_destructor_
          (UPCGStaticMeshDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGStaticMeshDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745820

void * __thiscall
UPCGStaticMeshSpawnerDataInterface::_scalar_deleting_destructor_
          (UPCGStaticMeshSpawnerDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497458a0

void * __thiscall
UPCGStaticMeshSpawnerDataProvider::_scalar_deleting_destructor_
          (UPCGStaticMeshSpawnerDataProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  DestructItems<FPCGProceduralISMComponentDescriptor,int>
            ((FPCGProceduralISMComponentDescriptor *)
             (this->PrimitiveDescriptors).AllocatorInstance.Data,
             (this->PrimitiveDescriptors).ArrayNum);
  pFVar1 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StringKeyToInstanceCount).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringKeyToInstanceCount);
  pFVar1 = (this->PrimitiveSelectionCDF).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveMeshBounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveStringKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeIdOffsetStrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1497459d0

void * __thiscall
UPCGTextureDataInterface::_scalar_deleting_destructor_(UPCGTextureDataInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745a50

void * __thiscall
UPCGTextureDataProvider::_scalar_deleting_destructor_(UPCGTextureDataProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGTextureDataProvider__6B_;
  pFVar1 = (this->TextureInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTextureBindingInfo,int>
            ((FPCGTextureBindingInfo *)(this->BindingInfos).AllocatorInstance.Data,
             (this->BindingInfos).ArrayNum);
  pFVar1 = (this->BindingInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGExportableDataProvider::~UPCGExportableDataProvider((UPCGExportableDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745af0

void * __thiscall
UPCGTransformPointsDataInterface::_scalar_deleting_destructor_
          (UPCGTransformPointsDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745b70

void * __thiscall
UPCGTransformPointsDataProvider::_scalar_deleting_destructor_
          (UPCGTransformPointsDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745bf0

void * __thiscall
UPCGUserParametersData::_scalar_deleting_destructor_(UPCGUserParametersData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGUserParametersData__6B_;
  pvVar1 = *(void **)&(this->UpstreamData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FInstancedStruct::Reset(&this->UserParameters);
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745c70

void * __thiscall
UPCGVirtualTextureDataInterface::_scalar_deleting_destructor_
          (UPCGVirtualTextureDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149745cf0

void * __thiscall
UPCGVirtualTextureDataProvider::_scalar_deleting_destructor_
          (UPCGVirtualTextureDataProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGVirtualTextureDataProvider__6B_;
  pFVar1 = (this->VirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// ComputePackedSizeBytes @ 14974a6f0

ulong64 __cdecl PCGRawBufferDataInterface::ComputePackedSizeBytes(FPCGDataDesc *param_1)

{
  return (longlong)(param_1->ElementCount).field0_0x0._s_0.X << 2;
}

// ComputePackedSizeBytes @ 14974a700

ulong64 __cdecl
PCGRawBufferDataInterface::ComputePackedSizeBytes
          (TSharedPtr<FPCGDataCollectionDesc_const_,1> *param_1)

{
  int iVar1;
  FPCGDataCollectionDesc *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId31,"PCGRawBufferPacking::ComputePackedSizeBytes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
               ,0x1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
  }
  pFVar2 = param_1->Object;
  uVar5 = 0;
  if (pFVar2 != (FPCGDataCollectionDesc *)0x0) {
    iVar1 = (pFVar2->DataDescs).ArrayNum;
    pFVar7 = (pFVar2->DataDescs).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x68;
    if (pFVar7 != pFVar8) {
      pFVar6 = pFVar7 + 0x18;
      do {
        iVar1 = *(int *)pFVar6;
        pFVar6 = pFVar6 + 0x68;
        pFVar7 = pFVar7 + 0x68;
        uVar5 = uVar5 + (longlong)iVar1 * 4;
      } while (pFVar7 != pFVar8);
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return uVar5;
}

// EmptyLinkFunctionForGeneratedCodePCGBlueprintDeprecatedElement @ 14974feb0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGBlueprintDeprecatedElement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGComputeDataInterface @ 14974fec0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGComputeDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCopyPointsAnalysisDataInterface @ 14974fed0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCopyPointsAnalysisDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCopyPointsDataInterface @ 14974fee0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCopyPointsDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCountUniqueAttributeValuesDataInterface @ 14974fef0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCountUniqueAttributeValuesDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCountUniqueAttributeValuesKernel @ 14974ff00

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCountUniqueAttributeValuesKernel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCullPointsOutsideActorBoundsDataInterface @ 14974ff10

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCullPointsOutsideActorBoundsDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCustomHLSLDataInterface @ 14974ff20

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCustomHLSLDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGCustomKernelDataInterface @ 14974ff30

void __cdecl EmptyLinkFunctionForGeneratedCodePCGCustomKernelDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDataCollectionDataInterface @ 14974ff40

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDataCollectionDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDataLabelResolverDataInterface @ 14974ff50

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDataLabelResolverDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDataNumDataInterface @ 14974ff60

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDataNumDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDataNumKernel @ 14974ff70

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDataNumKernel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDebugDataInterface @ 14974ff80

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDebugDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGInstanceDataInterface @ 14974ff90

void __cdecl EmptyLinkFunctionForGeneratedCodePCGInstanceDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGLandscapeDataInterface @ 14974ffa0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGLandscapeDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGMetadataPartitionDataInterface @ 14974ffb0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGMetadataPartitionDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGNormalToDensityDataInterface @ 14974ffc0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGNormalToDensityDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGProceduralISMComponent @ 14974ffd0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGProceduralISMComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGProceduralISMComponentDescriptor @ 14974ffe0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGProceduralISMComponentDescriptor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGRawBufferDataInterface @ 14974fff0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGRawBufferDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSkinnedMeshSpawnerDataInterface @ 149750000

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSkinnedMeshSpawnerDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStaticMeshDataInterface @ 149750010

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStaticMeshDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawnerDataInterface @ 149750020

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawnerDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGTextureDataInterface @ 149750030

void __cdecl EmptyLinkFunctionForGeneratedCodePCGTextureDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGToolSplineData @ 149750040

void __cdecl EmptyLinkFunctionForGeneratedCodePCGToolSplineData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGToolVolumeData @ 149750050

void __cdecl EmptyLinkFunctionForGeneratedCodePCGToolVolumeData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGTransformPointsDataInterface @ 149750060

void __cdecl EmptyLinkFunctionForGeneratedCodePCGTransformPointsDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGUserParametersData @ 149750070

void __cdecl EmptyLinkFunctionForGeneratedCodePCGUserParametersData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGVirtualTextureDataInterface @ 149750080

void __cdecl EmptyLinkFunctionForGeneratedCodePCGVirtualTextureDataInterface(void)

{
  return;
}

// GetOrCreateManagedProceduralISMC @ 14975a150

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

UPCGManagedProceduralISMComponent * __cdecl
PCGManagedProceduralISMComponent::GetOrCreateManagedProceduralISMC
          (AActor *param_1,UPCGComponent *param_2,ulong64 param_3,
          FPCGProceduralISMCBuilderParameters *param_4,FPCGContext *param_5)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  USceneComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  AActor *pAVar6;
  ulong64 uVar7;
  bool bVar8;
  char cVar9;
  UPCGManagedProceduralISMComponent *pUVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UPCGProceduralISMComponent *pUVar13;
  FName *pFVar14;
  FName FVar15;
  FName FVar16;
  UClass *pUVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStackY_328 [32];
  undefined4 local_2e8 [2];
  AActor *local_2e0;
  UPCGManagedProceduralISMComponent *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  ulong64 local_2c0;
  FName local_2b8;
  FName local_2b0;
  UPCGProceduralISMComponent *local_2a8;
  FName local_2a0;
  FString local_298;
  code *local_288;
  UPCGManagedProceduralISMComponent ***local_280;
  FString local_278;
  UPCGManagedProceduralISMComponent **local_268;
  FPCGProceduralISMCBuilderParameters *local_260;
  AActor **local_258;
  FPCGProceduralISMComponentDescriptor *local_250;
  ulong64 local_248;
  FName local_240;
  undefined1 local_238 [24];
  AActor *local_220;
  longlong local_218;
  undefined4 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  longlong local_1d8 [3];
  longlong *local_1c0;
  undefined1 local_1a8 [128];
  FPCGProceduralISMComponentDescriptor local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2e0 = param_1;
  local_2c0 = param_3;
  if (((param_1 == (AActor *)0x0) || (param_2 == (UPCGComponent *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetActor && InSourceComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                         ,0x1a,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar10 = (UPCGManagedProceduralISMComponent *)(*pcVar4)();
    return pUVar10;
  }
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_4->Descriptor)._padding_);
  if (pUVar11 != (UObject *)0x0) {
    pUVar12 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar12->_padding_)) {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId34,"UPCGActorHelpers::GetOrCreateManagedISMC",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                   ,0x22);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId34);
      }
      FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
                ((FProceduralISMComponentDescriptor *)&local_128,
                 (FProceduralISMComponentDescriptor *)param_4);
      local_128.ComponentTags.ArrayNum = (param_4->Descriptor).ComponentTags.ArrayNum;
      lVar19 = (longlong)local_128.ComponentTags.ArrayNum;
      _Src = (param_4->Descriptor).ComponentTags.AllocatorInstance.Data;
      local_128._padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
      local_128.ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_128.ComponentTags.ArrayNum == 0) {
        local_128.ComponentTags.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_128.ComponentTags.ArrayNum,0,&local_128.ComponentTags.AllocatorInstance
                   ,local_128.ComponentTags.ArrayNum,&local_128.ComponentTags.ArrayMax);
        memcpy(local_128.ComponentTags.AllocatorInstance.Data,_Src,lVar19 << 3);
      }
      bVar20 = -1 < CpuChannel->Enabled;
      if (bVar20) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId39,
                   "UPCGActorHelpers::GetOrCreateManagedISMC::FindMatchingMISMC",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                   ,0x27);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId39);
      }
      uVar7 = local_2c0;
      local_268 = &local_2d8;
      local_258 = &local_2e0;
      local_2d8 = (UPCGManagedProceduralISMComponent *)0x0;
      local_250 = &local_128;
      local_280 = &local_268;
      local_288 = UE::Core::Private::Function::
                  TFunctionRefCaller<`PCGManagedProceduralISMComponent::GetOrCreateManagedProceduralISMC'::__l13::<lambda_1>,void,UPCGManagedResource_*>
                  ::Call;
      local_248 = local_2c0;
      local_260 = param_4;
      UPCGComponent::ForEachManagedResource
                (param_2,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_288);
      if (local_2d8 == (UPCGManagedProceduralISMComponent *)0x0) {
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        local_2b0.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
        local_2b0.Number = *(uint *)&pUVar11->field_0x1c;
        ::FName::ToString(&local_2b0,&local_278);
        ::FString::ConcatCF(&local_298,L"PISM_",&local_278);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        if (local_298.Data.ArrayNum == 0) {
          local_298.Data.ArrayNum = 0;
        }
        else {
          local_298.Data.ArrayNum = local_298.Data.ArrayNum + -1;
        }
        pFVar14 = ::FName::FName(&local_240,local_298.Data.ArrayNum,
                                 (wchar_t *)local_298.Data.AllocatorInstance.Data,FNAME_Add);
        FVar16 = *pFVar14;
        FVar15 = (FName)UPCGProceduralISMComponent::StaticClass();
        FVar16 = MakeUniqueObjectName
                           ((UObject *)local_238,(UClass *)local_2e0,FVar15,
                            FVar16.ComparisonIndex.Value.Value);
        lVar19 = *(longlong *)FVar16;
        pUVar12 = UPCGProceduralISMComponent::StaticClass();
        pAVar6 = local_2e0;
        local_2d0 = 0;
        if (lVar19 == 0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)local_2e0,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar17 = UPCGProceduralISMComponent::StaticClass();
        CheckIsClassChildOf_Internal(pUVar17,pUVar12);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)(local_238 + 0x10),pUVar12);
        local_220 = pAVar6;
        local_200 = 0;
        local_208 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_210 = 0x40;
        local_218 = lVar19;
        pUVar13 = (UPCGProceduralISMComponent *)
                  StaticConstructObject_Internal
                            ((FStaticConstructObjectParameters *)(local_238 + 0x10));
        if (local_1e8 != 0) {
          plVar18 = local_1d8;
          if (local_1c0 != (longlong *)0x0) {
            plVar18 = local_1c0;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        UPCGProceduralISMComponent::InitFromDescriptor(pUVar13,&local_128);
        UActorComponent::RegisterComponent((UActorComponent *)pUVar13);
        AActor::AddInstanceComponent(local_2e0,(UActorComponent *)pUVar13);
        local_2e8[0] = 0x10100;
        local_2c8 = 0;
        cVar9 = (**(code **)(pUVar13->_padding_ + 0x508))
                          (pUVar13,(local_2e0->RootComponent).field0_0x0.DebugPtr,local_2e8,0);
        if (cVar9 == '\0') {
          PCGLog::Component::LogComponentAttachmentFailedWarning(param_5);
        }
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)param_2,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar12 = UPCGManagedProceduralISMComponent::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1a8,pUVar12);
        local_1a8._8_8_ = param_2;
        pUVar10 = (UPCGManagedProceduralISMComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
        if (local_1a8._64_8_ != 0) {
          plVar18 = (longlong *)(local_1a8 + 0x50);
          if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
            plVar18 = (longlong *)local_1a8._104_8_;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        local_2a8 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)&pUVar10->_padding_,(FObjectPtr)&local_2a8);
        FProceduralISMComponentDescriptor::operator=
                  ((FProceduralISMComponentDescriptor *)&pUVar10->Descriptor,
                   (FProceduralISMComponentDescriptor *)&local_128);
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&(pUVar10->Descriptor).ComponentTags,&local_128.ComponentTags);
        pUVar3 = (local_2e0->RootComponent).field0_0x0.DebugPtr;
        if (pUVar3 != (USceneComponent *)0x0) {
          dVar5 = (pUVar3->ComponentToWorld).Translation.XY.m128d_f64[1];
          dVar1 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
          (pUVar10->RootLocation).field0_0x0._s_0.X =
               (pUVar3->ComponentToWorld).Translation.XY.m128d_f64[0];
          (pUVar10->RootLocation).field0_0x0._s_0.Y = dVar5;
          pUVar10->bHasRootLocation = true;
          (pUVar10->RootLocation).field0_0x0._s_0.Z = dVar1;
        }
        pUVar10->SettingsUID = uVar7;
        UPCGComponent::AddToManagedResources(param_2,(UPCGManagedResource *)pUVar10);
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar13->_padding_,
                   &PCGHelpers::DefaultPCGTag);
        local_2a0 = (FName)param_2->_padding_;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
                  ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar13->_padding_,&local_2a0);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar21 = -1 < CpuChannel->Enabled;
        if (bVar21) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId71,
                     "UPCGActorHelpers::GetOrCreateManagedISMC::MarkAsUsed",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                     ,0x47);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId71);
        }
        (**(code **)(local_2d8->_padding_ + 0x2d8))();
        pUVar13 = UPCGManagedProceduralISMComponent::GetComponent(local_2d8);
        if (pUVar13 != (UPCGProceduralISMComponent *)0x0) {
          plVar18 = &pUVar13->_padding_;
          TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)plVar18,&local_128.ComponentTags);
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)plVar18,&PCGHelpers::DefaultPCGTag
                    );
          local_2b8 = (FName)param_2->_padding_;
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)plVar18,&local_2b8);
        }
        pUVar10 = local_2d8;
        if (bVar21) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      if (local_128.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.ComponentTags.AllocatorInstance.Data);
      }
      if ((void *)local_128._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_128._padding_);
      }
      if ((void *)local_128._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_128._padding_);
      }
      if ((void *)local_128._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_128._padding_);
      }
      if (!bVar8) {
        return pUVar10;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return pUVar10;
    }
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6044557769174941667>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                     ,0x1d,"StaticMesh");
  if (!bVar8) {
    return (UPCGManagedProceduralISMComponent *)0x0;
  }
  pcVar4 = (code *)swi(3);
  pUVar10 = (UPCGManagedProceduralISMComponent *)(*pcVar4)();
  return pUVar10;
}

// GetSharedFunctions @ 149762510

void __cdecl
PCGTextureDataInterfaceHelpers::GetSharedFunctions
          (TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FString *pFVar2;
  FShaderFunctionDefinition *pFVar3;
  FString local_18;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetNumData");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetNumElements");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,2,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetThreadData");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Bool,0,0);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,Out);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,2,0,Out);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetTexCoords");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,2,0);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,3,0,None);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetTexelSize");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,2,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"GetTexelSizeWorld");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,2,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// Z_Construct_UClass_UPCGBlueprintElement_NoRegister @ 1497792e0

UClass * __cdecl Z_Construct_UClass_UPCGBlueprintElement_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintElement",
               &Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton,
               UPCGBlueprintElement::StaticRegisterNativesUPCGBlueprintElement,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBlueprintElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton;
}

// Z_Construct_UClass_UPCGComputeDataInterface_NoRegister @ 1497793a0

UClass * __cdecl Z_Construct_UClass_UPCGComputeDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeDataInterface",
               &Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton,
               UPCGComputeDataInterface::StaticRegisterNativesUPCGComputeDataInterface,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGComputeDataInterface>,
               InternalVTableHelperCtorCaller<UPCGComputeDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGComputeDataProvider_NoRegister @ 149779460

UClass * __cdecl Z_Construct_UClass_UPCGComputeDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeDataProvider",
               &Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton,
               UPCGComputeDataProvider::StaticRegisterNativesUPCGComputeDataProvider,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGComputeDataProvider>,
               InternalVTableHelperCtorCaller<UPCGComputeDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGCopyPointsAnalysisDataInterface_NoRegister @ 149779520

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsAnalysisDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsAnalysisDataInterface",
               &Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataInterface.InnerSingleton,
               UPCGCopyPointsAnalysisDataInterface::
               StaticRegisterNativesUPCGCopyPointsAnalysisDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsAnalysisDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataInterface>,local_res8,
               UPCGKernelParamsDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGCopyPointsAnalysisDataProvider_NoRegister @ 1497795e0

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsAnalysisDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsAnalysisDataProvider",
               &Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton,
               UPCGCopyPointsAnalysisDataProvider::
               StaticRegisterNativesUPCGCopyPointsAnalysisDataProvider,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsAnalysisDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGCopyPointsDataInterface_NoRegister @ 1497796a0

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsDataInterface",
               &Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton,
               UPCGCopyPointsDataInterface::StaticRegisterNativesUPCGCopyPointsDataInterface,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCopyPointsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsDataInterface>,local_res8,
               UPCGKernelParamsDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGCopyPointsDataProvider_NoRegister @ 149779760

UClass * __cdecl Z_Construct_UClass_UPCGCopyPointsDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsDataProvider",
               &Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton,
               UPCGCopyPointsDataProvider::StaticRegisterNativesUPCGCopyPointsDataProvider,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCopyPointsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataInterface_NoRegister @ 149779820

UClass * __cdecl Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesDataInterface",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.
                InnerSingleton,
               UPCGCountUniqueAttributeValuesDataInterface::
               StaticRegisterNativesUPCGCountUniqueAttributeValuesDataInterface,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCountUniqueAttributeValuesDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataInterface>,
               local_res8,UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataProvider_NoRegister @ 1497798e0

UClass * __cdecl Z_Construct_UClass_UPCGCountUniqueAttributeValuesDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesDataProvider",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton
               ,UPCGCountUniqueAttributeValuesDataProvider::
                StaticRegisterNativesUPCGCountUniqueAttributeValuesDataProvider,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCountUniqueAttributeValuesDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataProvider>,local_res8
               ,UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_NoRegister @ 1497799a0

UClass * __cdecl Z_Construct_UClass_UPCGCountUniqueAttributeValuesKernel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesKernel",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton,
               UPCGCountUniqueAttributeValuesKernel::
               StaticRegisterNativesUPCGCountUniqueAttributeValuesKernel,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCountUniqueAttributeValuesKernel>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesKernel.InnerSingleton;
}

// Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataInterface_NoRegister @ 149779a60

UClass * __cdecl Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsDataInterface",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataInterface.
                InnerSingleton,
               UPCGCullPointsOutsideActorBoundsDataInterface::
               StaticRegisterNativesUPCGCullPointsOutsideActorBoundsDataInterface,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCullPointsOutsideActorBoundsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataInterface>,
               local_res8,UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataProvider_NoRegister @ 149779b20

UClass * __cdecl Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsDataProvider",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.
                InnerSingleton,
               UPCGCullPointsOutsideActorBoundsDataProvider::
               StaticRegisterNativesUPCGCullPointsOutsideActorBoundsDataProvider,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCullPointsOutsideActorBoundsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsDataProvider>,
               local_res8,UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_NoRegister @ 149779be0

UClass * __cdecl Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomComputeKernelDataProvider",
               &Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton,
               UPCGCustomComputeKernelDataProvider::
               StaticRegisterNativesUPCGCustomComputeKernelDataProvider,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCustomComputeKernelDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCustomComputeKernelDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGCustomHLSLDataInterface_NoRegister @ 149779ca0

UClass * __cdecl Z_Construct_UClass_UPCGCustomHLSLDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLDataInterface",
               &Z_Registration_Info_UClass_UPCGCustomHLSLDataInterface.InnerSingleton,
               UPCGCustomHLSLDataInterface::StaticRegisterNativesUPCGCustomHLSLDataInterface,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCustomHLSLDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLDataInterface>,local_res8,
               UPCGKernelParamsDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGCustomHLSLDataProvider_NoRegister @ 149779d60

UClass * __cdecl Z_Construct_UClass_UPCGCustomHLSLDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLDataProvider",
               &Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton,
               UPCGCustomHLSLDataProvider::StaticRegisterNativesUPCGCustomHLSLDataProvider,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCustomHLSLDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGCustomKernelDataInterface_NoRegister @ 149779e20

UClass * __cdecl Z_Construct_UClass_UPCGCustomKernelDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGCustomKernelDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomKernelDataInterface",
               &Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton,
               UPCGCustomKernelDataInterface::StaticRegisterNativesUPCGCustomKernelDataInterface,200
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCustomKernelDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCustomKernelDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomKernelDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataCollectionDataInterface_NoRegister @ 149779ee0

UClass * __cdecl Z_Construct_UClass_UPCGDataCollectionDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataCollectionDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataCollectionDataInterface",
               &Z_Registration_Info_UClass_UPCGDataCollectionDataInterface.InnerSingleton,
               UPCGDataCollectionDataInterface::StaticRegisterNativesUPCGDataCollectionDataInterface
               ,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataCollectionDataInterface>,
               InternalVTableHelperCtorCaller<UPCGDataCollectionDataInterface>,local_res8,
               UPCGExportableDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataCollectionDataProvider_NoRegister @ 149779fa0

UClass * __cdecl Z_Construct_UClass_UPCGDataCollectionDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataCollectionDataProvider",
               &Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton,
               UPCGDataCollectionDataProvider::StaticRegisterNativesUPCGDataCollectionDataProvider,
               0x100,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataCollectionDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataCollectionDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataLabelResolverDataInterface_NoRegister @ 14977a060

UClass * __cdecl Z_Construct_UClass_UPCGDataLabelResolverDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataLabelResolverDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataLabelResolverDataInterface",
               &Z_Registration_Info_UClass_UPCGDataLabelResolverDataInterface.InnerSingleton,
               UPCGDataLabelResolverDataInterface::
               StaticRegisterNativesUPCGDataLabelResolverDataInterface,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataLabelResolverDataInterface>,
               InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataLabelResolverDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataLabelResolverDataProvider_NoRegister @ 14977a120

UClass * __cdecl Z_Construct_UClass_UPCGDataLabelResolverDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataLabelResolverDataProvider",
               &Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton,
               UPCGDataLabelResolverDataProvider::
               StaticRegisterNativesUPCGDataLabelResolverDataProvider,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataLabelResolverDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataNumDataInterface_NoRegister @ 14977a1e0

UClass * __cdecl Z_Construct_UClass_UPCGDataNumDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataNumDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataNumDataInterface",
               &Z_Registration_Info_UClass_UPCGDataNumDataInterface.InnerSingleton,
               UPCGDataNumDataInterface::StaticRegisterNativesUPCGDataNumDataInterface,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataNumDataInterface>,
               InternalVTableHelperCtorCaller<UPCGDataNumDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataNumDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataNumDataProvider_NoRegister @ 14977a2a0

UClass * __cdecl Z_Construct_UClass_UPCGDataNumDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataNumDataProvider",
               &Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton,
               UPCGDataNumDataProvider::StaticRegisterNativesUPCGDataNumDataProvider,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataNumDataProvider>
               ,InternalVTableHelperCtorCaller<UPCGDataNumDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGDataNumKernel_NoRegister @ 14977a360

UClass * __cdecl Z_Construct_UClass_UPCGDataNumKernel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeKernel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataNumKernel",
               &Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton,
               UPCGDataNumKernel::StaticRegisterNativesUPCGDataNumKernel,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataNumKernel>,
               InternalVTableHelperCtorCaller<UPCGDataNumKernel>,local_res8,
               UPCGComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataNumKernel.InnerSingleton;
}

// Z_Construct_UClass_UPCGDebugDataInterface_NoRegister @ 14977a420

UClass * __cdecl Z_Construct_UClass_UPCGDebugDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDataInterface",
               &Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton,
               UPCGDebugDataInterface::StaticRegisterNativesUPCGDebugDataInterface,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGDebugDataInterface>,
               InternalVTableHelperCtorCaller<UPCGDebugDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGDebugDataProvider_NoRegister @ 14977a4e0

UClass * __cdecl Z_Construct_UClass_UPCGDebugDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDataProvider",
               &Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton,
               UPCGDebugDataProvider::StaticRegisterNativesUPCGDebugDataProvider,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGDebugDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDebugDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGExportableDataInterface_NoRegister @ 14977a5a0

UClass * __cdecl Z_Construct_UClass_UPCGExportableDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportableDataInterface",
               &Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton,
               UPCGExportableDataInterface::StaticRegisterNativesUPCGExportableDataInterface,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGExportableDataInterface>,
               InternalVTableHelperCtorCaller<UPCGExportableDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGExportableDataProvider_NoRegister @ 14977a660

UClass * __cdecl Z_Construct_UClass_UPCGExportableDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportableDataProvider",
               &Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton,
               UPCGExportableDataProvider::StaticRegisterNativesUPCGExportableDataProvider,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGExportableDataProvider>,
               InternalVTableHelperCtorCaller<UPCGExportableDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGInstanceDataInterface_NoRegister @ 14977a720

UClass * __cdecl Z_Construct_UClass_UPCGInstanceDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataInterface",
               &Z_Registration_Info_UClass_UPCGInstanceDataInterface.InnerSingleton,
               UPCGInstanceDataInterface::StaticRegisterNativesUPCGInstanceDataInterface,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGInstanceDataInterface>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGInstanceDataProvider_NoRegister @ 14977a7e0

UClass * __cdecl Z_Construct_UClass_UPCGInstanceDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataProvider",
               &Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton,
               UPCGInstanceDataProvider::StaticRegisterNativesUPCGInstanceDataProvider,200,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGInstanceDataProvider>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGKernelParamsDataInterface_NoRegister @ 14977a8a0

UClass * __cdecl Z_Construct_UClass_UPCGKernelParamsDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGKernelParamsDataInterface",
               &Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton,
               UPCGKernelParamsDataInterface::StaticRegisterNativesUPCGKernelParamsDataInterface,
               0x90,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGKernelParamsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGKernelParamsDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGKernelParamsDataProvider_NoRegister @ 14977a960

UClass * __cdecl Z_Construct_UClass_UPCGKernelParamsDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGKernelParamsDataProvider",
               &Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton,
               UPCGKernelParamsDataProvider::StaticRegisterNativesUPCGKernelParamsDataProvider,0x98,
               8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGKernelParamsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGKernelParamsDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGLandscapeDataInterface_NoRegister @ 14977aa20

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeDataInterface",
               &Z_Registration_Info_UClass_UPCGLandscapeDataInterface.InnerSingleton,
               UPCGLandscapeDataInterface::StaticRegisterNativesUPCGLandscapeDataInterface,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGLandscapeDataInterface>,
               InternalVTableHelperCtorCaller<UPCGLandscapeDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGLandscapeDataProvider_NoRegister @ 14977aae0

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeDataProvider",
               &Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton,
               UPCGLandscapeDataProvider::StaticRegisterNativesUPCGLandscapeDataProvider,0xe0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGLandscapeDataProvider>,
               InternalVTableHelperCtorCaller<UPCGLandscapeDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedProceduralISMComponent_NoRegister @ 14977aba0

UClass * __cdecl Z_Construct_UClass_UPCGManagedProceduralISMComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedProceduralISMComponent",
               &Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton,
               UPCGManagedProceduralISMComponent::
               StaticRegisterNativesUPCGManagedProceduralISMComponent,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedProceduralISMComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedProceduralISMComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedProceduralISMComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGMetaDataPartitionDataProvider_NoRegister @ 14977ac60

UClass * __cdecl Z_Construct_UClass_UPCGMetaDataPartitionDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetaDataPartitionDataProvider",
               &Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton,
               UPCGMetaDataPartitionDataProvider::
               StaticRegisterNativesUPCGMetaDataPartitionDataProvider,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetaDataPartitionDataProvider>,
               InternalVTableHelperCtorCaller<UPCGMetaDataPartitionDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetaDataPartitionDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGMetadataPartitionDataInterface_NoRegister @ 14977ad20

UClass * __cdecl Z_Construct_UClass_UPCGMetadataPartitionDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataPartitionDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataPartitionDataInterface",
               &Z_Registration_Info_UClass_UPCGMetadataPartitionDataInterface.InnerSingleton,
               UPCGMetadataPartitionDataInterface::
               StaticRegisterNativesUPCGMetadataPartitionDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataPartitionDataInterface>,
               InternalVTableHelperCtorCaller<UPCGMetadataPartitionDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataPartitionDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGNormalToDensityDataInterface_NoRegister @ 14977ade0

UClass * __cdecl Z_Construct_UClass_UPCGNormalToDensityDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensityDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensityDataInterface",
               &Z_Registration_Info_UClass_UPCGNormalToDensityDataInterface.InnerSingleton,
               UPCGNormalToDensityDataInterface::
               StaticRegisterNativesUPCGNormalToDensityDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNormalToDensityDataInterface>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensityDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGNormalToDensityProvider_NoRegister @ 14977aea0

UClass * __cdecl Z_Construct_UClass_UPCGNormalToDensityProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensityProvider",
               &Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton,
               UPCGNormalToDensityProvider::StaticRegisterNativesUPCGNormalToDensityProvider,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGNormalToDensityProvider>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensityProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensityProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGProceduralISMComponent_NoRegister @ 14977af60

UClass * __cdecl Z_Construct_UClass_UPCGProceduralISMComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProceduralISMComponent",
               &Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton,
               UPCGProceduralISMComponent::StaticRegisterNativesUPCGProceduralISMComponent,0x6e0,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGProceduralISMComponent>,
               InternalVTableHelperCtorCaller<UPCGProceduralISMComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGRawBufferDataInterface_NoRegister @ 14977b020

UClass * __cdecl Z_Construct_UClass_UPCGRawBufferDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRawBufferDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRawBufferDataInterface",
               &Z_Registration_Info_UClass_UPCGRawBufferDataInterface.InnerSingleton,
               UPCGRawBufferDataInterface::StaticRegisterNativesUPCGRawBufferDataInterface,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGRawBufferDataInterface>,
               InternalVTableHelperCtorCaller<UPCGRawBufferDataInterface>,local_res8,
               UPCGExportableDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGRawBufferDataProvider_NoRegister @ 14977b0e0

UClass * __cdecl Z_Construct_UClass_UPCGRawBufferDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRawBufferDataProvider",
               &Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton,
               UPCGRawBufferDataProvider::StaticRegisterNativesUPCGRawBufferDataProvider,0xf8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGRawBufferDataProvider>,
               InternalVTableHelperCtorCaller<UPCGRawBufferDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataInterface_NoRegister @ 14977b1a0

UClass * __cdecl Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerDataInterface",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton,
               UPCGSkinnedMeshSpawnerDataInterface::
               StaticRegisterNativesUPCGSkinnedMeshSpawnerDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerDataInterface>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataProvider_NoRegister @ 14977b260

UClass * __cdecl Z_Construct_UClass_UPCGSkinnedMeshSpawnerDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerDataProvider",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton,
               UPCGSkinnedMeshSpawnerDataProvider::
               StaticRegisterNativesUPCGSkinnedMeshSpawnerDataProvider,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerDataProvider>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshDataInterface_NoRegister @ 14977b320

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshDataInterface",
               &Z_Registration_Info_UClass_UPCGStaticMeshDataInterface.InnerSingleton,
               UPCGStaticMeshDataInterface::StaticRegisterNativesUPCGStaticMeshDataInterface,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGStaticMeshDataInterface>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshDataProvider_NoRegister @ 14977b3e0

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshDataProvider",
               &Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton,
               UPCGStaticMeshDataProvider::StaticRegisterNativesUPCGStaticMeshDataProvider,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGStaticMeshDataProvider>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerDataInterface_NoRegister @ 14977b4a0

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerDataInterface",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataInterface.InnerSingleton,
               UPCGStaticMeshSpawnerDataInterface::
               StaticRegisterNativesUPCGStaticMeshSpawnerDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerDataInterface>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGStaticMeshSpawnerDataProvider_NoRegister @ 14977b560

UClass * __cdecl Z_Construct_UClass_UPCGStaticMeshSpawnerDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerDataProvider",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton,
               UPCGStaticMeshSpawnerDataProvider::
               StaticRegisterNativesUPCGStaticMeshSpawnerDataProvider,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerDataProvider>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGTextureDataInterface_NoRegister @ 14977b620

UClass * __cdecl Z_Construct_UClass_UPCGTextureDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureDataInterface",
               &Z_Registration_Info_UClass_UPCGTextureDataInterface.InnerSingleton,
               UPCGTextureDataInterface::StaticRegisterNativesUPCGTextureDataInterface,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGTextureDataInterface>,
               InternalVTableHelperCtorCaller<UPCGTextureDataInterface>,local_res8,
               UPCGExportableDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGTextureDataProvider_NoRegister @ 14977b6e0

UClass * __cdecl Z_Construct_UClass_UPCGTextureDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureDataProvider",
               &Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton,
               UPCGTextureDataProvider::StaticRegisterNativesUPCGTextureDataProvider,0x100,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGTextureDataProvider>
               ,InternalVTableHelperCtorCaller<UPCGTextureDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGTransformPointsDataInterface_NoRegister @ 14977b7a0

UClass * __cdecl Z_Construct_UClass_UPCGTransformPointsDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsDataInterface",
               &Z_Registration_Info_UClass_UPCGTransformPointsDataInterface.InnerSingleton,
               UPCGTransformPointsDataInterface::
               StaticRegisterNativesUPCGTransformPointsDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTransformPointsDataInterface>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGTransformPointsDataProvider_NoRegister @ 14977b860

UClass * __cdecl Z_Construct_UClass_UPCGTransformPointsDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsDataProvider",
               &Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton,
               UPCGTransformPointsDataProvider::StaticRegisterNativesUPCGTransformPointsDataProvider
               ,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGTransformPointsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsDataProvider.InnerSingleton;
}

// Z_Construct_UClass_UPCGVirtualTextureDataInterface_NoRegister @ 14977b920

UClass * __cdecl Z_Construct_UClass_UPCGVirtualTextureDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureDataInterface",
               &Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton,
               UPCGVirtualTextureDataInterface::StaticRegisterNativesUPCGVirtualTextureDataInterface
               ,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGVirtualTextureDataInterface>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGVirtualTextureDataProvider_NoRegister @ 14977b9e0

UClass * __cdecl Z_Construct_UClass_UPCGVirtualTextureDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureDataProvider",
               &Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton,
               UPCGVirtualTextureDataProvider::StaticRegisterNativesUPCGVirtualTextureDataProvider,
               0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGVirtualTextureDataProvider>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface @ 14977baa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_SplineSurface.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Volume @ 14977bb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Volume(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Volume.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Volume.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData_Volume_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Volume.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData_Volume.InnerSingleton;
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

// OnCreateRenderThreadResources'' @ 150416ee0

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

// OnDestroyRenderThreadResources'' @ 150416f20

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

// PositionCurve'' @ 150416f60

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 150416f80

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 150416fa0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// StaticResource'' @ 150416fc0

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

// StaticResource'' @ 150417040

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

// `dynamic_atexit_destructor_for_'CVarCreatePrimitivesComponentless'' @ 1504170c0

void __cdecl
PCGStaticMeshSpawnerDataInterface::
_dynamic_atexit_destructor_for__CVarCreatePrimitivesComponentless__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCreatePrimitivesComponentless);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableLandscapeVTSampling'' @ 1504170e0

void __cdecl
PCGLandscapeDataInterface::_dynamic_atexit_destructor_for__CVarEnableLandscapeVTSampling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableLandscapeVTSampling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTriggerGPUCaptureDispatchIndex'' @ 150417100

void __cdecl
PCGInstanceDataInterface::_dynamic_atexit_destructor_for__CVarTriggerGPUCaptureDispatchIndex__(void)

{
  CVarTriggerGPUCaptureDispatchIndex._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTriggerGPUCaptureDispatchIndex)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CouldNotLoadStaticMeshFormat'' @ 150417120

void __cdecl
PCGSkinnedMeshSpawnerDataInterface::_dynamic_atexit_destructor_for__CouldNotLoadStaticMeshFormat__
          (void)

{
  if (CouldNotLoadStaticMeshFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041712f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CouldNotLoadStaticMeshFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CouldNotLoadStaticMeshFormat'' @ 150417140

void __cdecl
PCGStaticMeshSpawnerDataInterface::_dynamic_atexit_destructor_for__CouldNotLoadStaticMeshFormat__
          (void)

{
  if (CouldNotLoadStaticMeshFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041714f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*CouldNotLoadStaticMeshFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150417160

void __cdecl
`````FPCGInstanceDataProviderProxy::PostSubmit'::__l2::Desc::operator()'::__l38::Desc::operator()'::
__l7::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150417167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150417180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 1504171a0

void __cdecl
`FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:___cdecl_FPCGTextureDataInterfacePermutationIds::FPCGTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 1504171c0

void __cdecl
`FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds'::__l2
::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:___cdecl_FPCGVirtualTextureDataInterfacePermutationIds::FPCGVirtualTextureDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Name'' @ 1504171e0

void __cdecl
`FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds'::__l3::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
               ::__l3::Name.Data.AllocatorInstance.Data;
  if (`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
      ::__l3::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
      ::__l3::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NoMeshEntriesFormat'' @ 150417200

void __cdecl
PCGSkinnedMeshSpawnerDataInterface::_dynamic_atexit_destructor_for__NoMeshEntriesFormat__(void)

{
  if (NoMeshEntriesFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041720f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*NoMeshEntriesFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NoMeshEntriesFormat'' @ 150417220

void __cdecl
PCGStaticMeshSpawnerDataInterface::_dynamic_atexit_destructor_for__NoMeshEntriesFormat__(void)

{
  if (NoMeshEntriesFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041722f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*NoMeshEntriesFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417240

void __cdecl
`FPCGCopyPointsAnalysisDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsAnalysisDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417260

void __cdecl
`FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCopyPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417280

void __cdecl
`FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504172a0

void __cdecl
`FPCGCullPointsOutsideActorBoundsDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCullPointsOutsideActorBoundsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504172c0

void __cdecl
`FPCGCustomHLSLDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomHLSLDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504172e0

void __cdecl
`FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCustomKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417300

void __cdecl
`FPCGDataCollectionDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDataCollectionDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417320

void __cdecl
`FPCGDataLabelResolverDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDataLabelResolverDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417340

void __cdecl
`FPCGDataNumDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDataNumDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417360

void __cdecl
`FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417380

void __cdecl
`FPCGInstanceDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGInstanceDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504173a0

void __cdecl
`FPCGLandscapeDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGLandscapeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504173c0

void __cdecl
`FPCGMetadataPartitionDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGMetadataPartitionDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504173e0

void __cdecl
`FPCGNormalToDensityDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGNormalToDensityDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417400

void __cdecl
`FPCGRawBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGRawBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417420

void __cdecl
`FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417440

void __cdecl
`FPCGStaticMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGStaticMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417460

void __cdecl
`FPCGStaticMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGStaticMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150417480

void __cdecl
`FPCGTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504174a0

void __cdecl
`FPCGTransformPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGTransformPointsDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504174c0

void __cdecl
`FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'TooManyPrimitivesFormat'' @ 1504174e0

void __cdecl
PCGSkinnedMeshSpawnerDataInterface::_dynamic_atexit_destructor_for__TooManyPrimitivesFormat__(void)

{
  if (TooManyPrimitivesFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504174ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*TooManyPrimitivesFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TooManyPrimitivesFormat'' @ 150417500

void __cdecl
PCGStaticMeshSpawnerDataInterface::_dynamic_atexit_destructor_for__TooManyPrimitivesFormat__(void)

{
  if (TooManyPrimitivesFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041750f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*TooManyPrimitivesFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

