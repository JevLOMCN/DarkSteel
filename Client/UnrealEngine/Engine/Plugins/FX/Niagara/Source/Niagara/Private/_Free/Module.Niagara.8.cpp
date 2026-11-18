// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 532

// CellSizeFunctionName'' @ 141180c50

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::CellSizeFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::CellSizeFunctionName,"GetCellSize");
  return;
}

// CellSizeName'' @ 141180c70

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::CellSizeName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceRWBase::CellSizeName,L"_CellSize");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::CellSizeName__);
  return;
}

// Channels'' @ 141180ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl `dynamic_initializer_for_'FNiagaraDataInterfaceRWAttributeHelper::Channels__(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_98 [32];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_98;
  ::FString::FString(&local_58,"r");
  ::FString::FString(&local_48,"g");
  ::FString::FString(&local_38,"b");
  ::FString::FString(&local_28,"a");
  lVar2 = 4;
  FNiagaraDataInterfaceRWAttributeHelper::Channels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FNiagaraDataInterfaceRWAttributeHelper::Channels.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&FNiagaraDataInterfaceRWAttributeHelper::Channels.AllocatorInstance,4,
             &FNiagaraDataInterfaceRWAttributeHelper::Channels.ArrayMax);
  ConstructItems<FString,FString,int>
            (FNiagaraDataInterfaceRWAttributeHelper::Channels.AllocatorInstance.Data,&local_58,4);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  atexit(`dynamic_atexit_destructor_for_'FNiagaraDataInterfaceRWAttributeHelper::Channels__);
  return;
}

// CritSec'' @ 141180dc0

void __cdecl `dynamic_initializer_for_'FNiagaraSharedObject::CritSec__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FNiagaraSharedObject::CritSec,4000);
  atexit(`dynamic_atexit_destructor_for_'FNiagaraSharedObject::CritSec__);
  return;
}

// DeferredDeletionList'' @ 141180df0

void __cdecl `dynamic_initializer_for_'FNiagaraSharedObject::DeferredDeletionList__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraSharedObject::DeferredDeletionList__);
  return;
}

// DummyCompiledData'' @ 141180e10

void __cdecl `dynamic_initializer_for_'FNiagaraDataSetCompiledData::DummyCompiledData__(void)

{
  ENiagaraDataSetType local_10;
  undefined3 uStack_f;
  
  FNiagaraDataSetCompiledData::DummyCompiledData.bRequiresPersistentIDs = 0;
  DestructItems<FNiagaraVariableLayoutInfo,int>((FNiagaraVariableLayoutInfo *)0x0,0);
  FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.ArrayNum = 0;
  if (FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.
                         AllocatorInstance,0,
               &FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.ArrayMax);
  }
  FNiagaraDataSetCompiledData::DummyCompiledData.ID.Name.ComparisonIndex.Value = 0;
  FNiagaraDataSetCompiledData::DummyCompiledData.ID.Name.Number = 0;
  FNiagaraDataSetCompiledData::DummyCompiledData.ID.Type = Event;
  FNiagaraDataSetCompiledData::DummyCompiledData.ID._9_3_ = uStack_f;
  FNiagaraDataSetCompiledData::DummyCompiledData.SimTarget = CPUSim;
  atexit(`dynamic_atexit_destructor_for_'FNiagaraDataSetCompiledData::DummyCompiledData__);
  return;
}

// ExecutionIndexToGridIndexFunctionName'' @ 141180ea0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::ExecutionIndexToGridIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::ExecutionIndexToGridIndexFunctionName,
                 "ExecutionIndexToGridIndex");
  return;
}

// ExecutionIndexToUnitFunctionName'' @ 141180ec0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::ExecutionIndexToUnitFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::ExecutionIndexToUnitFunctionName,
                 "ExecutionIndexToUnit");
  return;
}

// GatherRedTexture2DName'' @ 141180ee0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceTexture::GatherRedTexture2DName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceTexture::GatherRedTexture2DName,L"GatherRedTexture2D");
  return;
}

// GetCurrentFrameNumCells'' @ 141180f00

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVolumeCache::GetCurrentFrameNumCells__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeCache::GetCurrentFrameNumCells,
                 L"GetCurrentFrameNumCells");
  return;
}

// GetCurrentFrameValue'' @ 141180f20

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVolumeCache::GetCurrentFrameValue__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeCache::GetCurrentFrameValue,L"GetCurrentFrameValue");
  return;
}

// GetNumCellsName'' @ 141180f40

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVolumeCache::GetNumCellsName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeCache::GetNumCellsName,"GetNumCells");
  return;
}

// GetNumFramesName'' @ 141180f60

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceSparseVolumeTexture::GetNumFramesName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceSparseVolumeTexture::GetNumFramesName,
                 L"GetSparseVolumeTextureNumFrames");
  return;
}

// GetNumMipLevelsName'' @ 141180f80

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceSparseVolumeTexture::GetNumMipLevelsName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceSparseVolumeTexture::GetNumMipLevelsName,
                 L"GetSparseVolumeTextureNumMipLevels");
  return;
}

// GetNumMipLevelsName'' @ 141180fa0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceTexture::GetNumMipLevelsName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceTexture::GetNumMipLevelsName,L"GetNumMipLevels");
  return;
}

// GetNumMipLevelsName'' @ 141180fc0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVirtualTextureSample::GetNumMipLevelsName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVirtualTextureSample::GetNumMipLevelsName,L"GetNumMipLevels")
  ;
  return;
}

// GetTextureDimensionsName'' @ 141180fe0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceSparseVolumeTexture::GetTextureDimensionsName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceSparseVolumeTexture::GetTextureDimensionsName,
                 L"GetSparseVolumeTextureDimensions");
  return;
}

// GetTextureDimensionsName'' @ 141181000

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceTexture::GetTextureDimensionsName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceTexture::GetTextureDimensionsName,L"GetTextureDimensions");
  return;
}

// GetTextureDimensionsName'' @ 141181020

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVirtualTextureSample::GetTextureDimensionsName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceVirtualTextureSample::GetTextureDimensionsName,
                 L"GetTextureDimensions");
  return;
}

// IndexToLinearFunctionName'' @ 141181040

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::IndexToLinearFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::IndexToLinearFunctionName,"IndexToLinear");
  return;
}

// IndexToUnitFunctionName'' @ 141181060

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::IndexToUnitFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::IndexToUnitFunctionName,"IndexToUnit");
  return;
}

// IndexToUnitName'' @ 141181080

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVolumeCache::IndexToUnitName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeCache::IndexToUnitName,"IndexToUnit");
  return;
}

// IndexToUnitStaggeredXFunctionName'' @ 1411810a0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::IndexToUnitStaggeredXFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::IndexToUnitStaggeredXFunctionName,
                 "IndexToUnitStaggeredX");
  return;
}

// IndexToUnitStaggeredYFunctionName'' @ 1411810c0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::IndexToUnitStaggeredYFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::IndexToUnitStaggeredYFunctionName,
                 "IndexToUnitStaggeredY");
  return;
}

// LinearToIndexFunctionName'' @ 1411810e0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::LinearToIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::LinearToIndexFunctionName,"LinearToIndex");
  return;
}

// LoadSparseVolumeTextureName'' @ 141181100

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceSparseVolumeTexture::LoadSparseVolumeTextureName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceSparseVolumeTexture::LoadSparseVolumeTextureName,
                 L"LoadSparseVolumeTexture");
  return;
}

// LoadTexture2DName'' @ 141181120

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceTexture::LoadTexture2DName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceTexture::LoadTexture2DName,L"LoadTexture2D");
  return;
}

// LoadVolumeTextureName'' @ 141181140

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVolumeTexture::LoadVolumeTextureName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeTexture::LoadVolumeTextureName,L"LoadVolumeTexture");
  return;
}

// NAME_Attribute'' @ 141181160

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::NAME_Attribute__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::NAME_Attribute,"Attribute");
  return;
}

// NumAttributesName'' @ 141181180

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::NumAttributesName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceRWBase::NumAttributesName,L"_NumAttributes");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::NumAttributesName__);
  return;
}

// NumCellsFunctionName'' @ 1411811b0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::NumCellsFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::NumCellsFunctionName,"GetNumCells");
  return;
}

// NumCellsName'' @ 1411811d0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::NumCellsName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceRWBase::NumCellsName,L"_NumCells");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::NumCellsName__);
  return;
}

// NumNamedAttributesName'' @ 141181200

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::NumNamedAttributesName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceRWBase::NumNamedAttributesName,L"_NumNamedAttributes");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::NumNamedAttributesName__);
  return;
}

// PositionCurve'' @ 141181230

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// ReadFileName'' @ 141181250

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVolumeCache::ReadFileName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeCache::ReadFileName,"ReadFile");
  return;
}

// RequestSparseVolumeTextureFrameName'' @ 141181270

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceSparseVolumeTexture::
RequestSparseVolumeTextureFrameName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceSparseVolumeTexture::RequestSparseVolumeTextureFrameName,
                 L"RequestSparseVolumeTextureFrame");
  return;
}

// RotationCurve'' @ 141181290

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// SampleCurrentFrameValueName'' @ 1411812b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVolumeCache::SampleCurrentFrameValueName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeCache::SampleCurrentFrameValueName,
                 L"SampleCurrentFrameValue");
  return;
}

// SampleCurveName'' @ 1411812d0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVector2DCurve::SampleCurveName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVector2DCurve::SampleCurveName,"SampleVector2DCurve");
  return;
}

// SampleCurveName'' @ 1411812f0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVector4Curve::SampleCurveName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVector4Curve::SampleCurveName,L"SampleColorCurve");
  return;
}

// SampleCurveName'' @ 141181310

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVectorCurve::SampleCurveName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVectorCurve::SampleCurveName,L"SampleVectorCurve");
  return;
}

// SamplePseudoVolumeTextureName'' @ 141181330

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceTexture::SamplePseudoVolumeTextureName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceTexture::SamplePseudoVolumeTextureName,
                 L"SamplePseudoVolumeTexture");
  return;
}

// SampleSparseVolumeTextureName'' @ 141181350

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceSparseVolumeTexture::SampleSparseVolumeTextureName__
          (void)

{
  ::FName::FName(&UNiagaraDataInterfaceSparseVolumeTexture::SampleSparseVolumeTextureName,
                 L"SampleSparseVolumeTexture");
  return;
}

// SampleTexture2DName'' @ 141181370

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceTexture::SampleTexture2DName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceTexture::SampleTexture2DName,L"SampleTexture2D");
  return;
}

// SampleTexture2DName'' @ 141181390

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVirtualTextureSample::SampleTexture2DName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVirtualTextureSample::SampleTexture2DName,L"SampleTexture2D")
  ;
  return;
}

// SampleVolumeTextureName'' @ 1411813b0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceVolumeTexture::SampleVolumeTextureName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeTexture::SampleVolumeTextureName,L"SampleVolumeTexture"
                );
  return;
}

// ScaleCurve'' @ 1411813d0

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// SetFrameName'' @ 1411813f0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVolumeCache::SetFrameName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeCache::SetFrameName,"SetFrame");
  return;
}

// SimulationToUnitFunctionName'' @ 141181410

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::SimulationToUnitFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::SimulationToUnitFunctionName,"SimulationToUnit");
  return;
}

// StaticResource'' @ 141181430

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

// StaticResource'' @ 1411815d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x10101;
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
    this = TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141181770

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_0A__00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1000101;
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
    this = TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141181910

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_0A__0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x101;
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
    this = TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141181ab0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1010001;
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
    this = TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141181c50

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x10001;
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
    this = TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141181df0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__0A__00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 0x1000001;
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
    this = TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141181f90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
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
             &TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__0A__0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    local_28 = 1;
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
    this = TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
    ::StaticResource.StateRHI.Reference = (FRHISamplerState *)local_res10;
    local_res10 = (FRHIResource *)0x0;
    if (this.Reference != (FRHISamplerState *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
      if (local_res10 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res10);
        atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource__);
        return;
      }
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141182130

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

// TextureDimsName'' @ 1411822d0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceVolumeTexture::TextureDimsName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceVolumeTexture::TextureDimsName,L"TextureDimensions3D");
  return;
}

// UnitToFloatIndexFunctionName'' @ 1411822f0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::UnitToFloatIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::UnitToFloatIndexFunctionName,"UnitToFloatIndex");
  return;
}

// UnitToIndexFunctionName'' @ 141182310

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::UnitToIndexFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::UnitToIndexFunctionName,"UnitToIndex");
  return;
}

// UnitToSimulationFunctionName'' @ 141182330

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::UnitToSimulationFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::UnitToSimulationFunctionName,"UnitToSimulation");
  return;
}

// UnitToUVName'' @ 141182350

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::UnitToUVName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceRWBase::UnitToUVName,L"_UnitToUV");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::UnitToUVName__);
  return;
}

// WorldBBoxSizeFunctionName'' @ 141182380

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::WorldBBoxSizeFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceRWBase::WorldBBoxSizeFunctionName,"GetWorldBBoxSize");
  return;
}

// WorldBBoxSizeName'' @ 1411823a0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRWBase::WorldBBoxSizeName__(void)

{
  ::FString::FString(&UNiagaraDataInterfaceRWBase::WorldBBoxSizeName,L"_WorldBBoxSize");
  atexit(`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::WorldBBoxSizeName__);
  return;
}

// `dynamic_initializer_for_'CVarGbNiagaraDISplineDisableLUTs'' @ 1411823d0

void __cdecl NDISplineLocal::_dynamic_initializer_for__CVarGbNiagaraDISplineDisableLUTs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGbNiagaraDISplineDisableLUTs,L"fx.Niagara.NDISpline.GDisableLUTs",
             &GbNiagaraDISplineDisableLUTs,L"Should we turn off all LUTs on CPU?",0);
  atexit(_dynamic_atexit_destructor_for__CVarGbNiagaraDISplineDisableLUTs__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGPUDataBufferChunkSize'' @ 141182420

void __cdecl _dynamic_initializer_for__CVarNiagaraGPUDataBufferChunkSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGPUDataBufferChunkSize,L"fx.NiagaraGPUDataBufferChunkSize",
             &GNiagaraGPUDataBufferChunkSize,
             L"Niagara GPU data buffer allocation chunk size used to round GPU allocations in bytes, must be power of 2 (Default=4096)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGPUDataBufferChunkSize__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGPUDataBufferShrinkFactor'' @ 141182470

void __cdecl _dynamic_initializer_for__CVarNiagaraGPUDataBufferShrinkFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGPUDataBufferShrinkFactor,L"fx.NiagaraGPUDataBufferShrinkFactor",
             &GNiagaraGPUDataBufferShrinkFactor,
             L"Niagara GPU data buffer size threshold for shrinking. (Default=2) \nThe buffer will be reallocated when the used size becomes 1/F of the allocated size. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGPUDataBufferShrinkFactor__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGPUDataWarningSize'' @ 1411824c0

void __cdecl _dynamic_initializer_for__CVarNiagaraGPUDataWarningSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGPUDataWarningSize,L"fx.NiagaraGPUDataWarningSize",
             &GNiagaraGPUDataWarningSize,L"Allocation size where we should log a warning.",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGPUDataWarningSize__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraReleaseBuffersOnReset'' @ 141182510

void __cdecl _dynamic_initializer_for__CVarNiagaraReleaseBuffersOnReset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraReleaseBuffersOnReset,L"fx.NiagaraReleaseBuffersOnReset",
             &GNiagaraReleaseBuffersOnReset,
             L"Will release all memory associated with data buffers when the dataset is reset.",0x40
            );
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraReleaseBuffersOnReset__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRenderBufferShrinkFactor'' @ 141182560

void __cdecl _dynamic_initializer_for__CVarNiagaraRenderBufferShrinkFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRenderBufferShrinkFactor,L"fx.NiagaraDataBufferShrinkFactor",
             &GNiagaraDataBufferShrinkFactor,
             L"Niagara data buffer size threshold for shrinking. (Default=3) \nThe buffer will be reallocated when the used size becomes 1/F of the allocated size."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRenderBufferShrinkFactor__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraVectorFieldUseIspc'' @ 1411825b0

void __cdecl _dynamic_initializer_for__CVarNiagaraVectorFieldUseIspc__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraVectorFieldUseIspc,L"fx.NiagaraVectorFieldUseIspc",
             &GNiagaraVectorFieldUseIspc,
             L"When enabled VectorField will use ISPC for sampling if appropriate.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraVectorFieldUseIspc__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDataBlockSize'' @ 141182600

void __cdecl _dynamic_initializer_for__CVarRenderDataBlockSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRenderDataBlockSize,L"fx.NiagaraDataBufferMinSize",&GNiagaraDataBufferMinSize,
             L"Niagara data buffer minimum allocation size in bytes (Default=512).",0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDataBlockSize__);
  return;
}

// `dynamic_initializer_for_'FindClosestUnitDistanceFromPositionWSName'' @ 141182650

void __cdecl
NDISplineLocal::_dynamic_initializer_for__FindClosestUnitDistanceFromPositionWSName__(void)

{
  ::FName::FName(&FindClosestUnitDistanceFromPositionWSName,"FindClosestUnitDistanceFromPositionWS")
  ;
  return;
}

// `dynamic_initializer_for_'GetAlignmentName'' @ 141182670

void __cdecl NDISpriteRendererInfoLocal::_dynamic_initializer_for__GetAlignmentName__(void)

{
  ::FName::FName(&GetAlignmentName,"GetAlignment");
  return;
}

// `dynamic_initializer_for_'GetFacingModeName'' @ 141182690

void __cdecl NDISpriteRendererInfoLocal::_dynamic_initializer_for__GetFacingModeName__(void)

{
  ::FName::FName(&GetFacingModeName,"GetFacingMode");
  return;
}

// `dynamic_initializer_for_'GetSourceModeName'' @ 1411826b0

void __cdecl NDISpriteRendererInfoLocal::_dynamic_initializer_for__GetSourceModeName__(void)

{
  ::FName::FName(&GetSourceModeName,"GetSourceMode");
  return;
}

// `dynamic_initializer_for_'GetSplineLengthName'' @ 1411826d0

void __cdecl NDISplineLocal::_dynamic_initializer_for__GetSplineLengthName__(void)

{
  ::FName::FName(&GetSplineLengthName,"GetSplineLength");
  return;
}

// `dynamic_initializer_for_'GetSplineLocalToWorldInverseTransposedName'' @ 1411826f0

void __cdecl
NDISplineLocal::_dynamic_initializer_for__GetSplineLocalToWorldInverseTransposedName__(void)

{
  ::FName::FName(&GetSplineLocalToWorldInverseTransposedName,
                 "GetSplineLocalToWorldInverseTransposed");
  return;
}

// `dynamic_initializer_for_'GetSplineLocalToWorldName'' @ 141182710

void __cdecl NDISplineLocal::_dynamic_initializer_for__GetSplineLocalToWorldName__(void)

{
  ::FName::FName(&GetSplineLocalToWorldName,"GetSplineLocalToWorld");
  return;
}

// `dynamic_initializer_for_'GetSubUVDetailsName'' @ 141182730

void __cdecl NDISpriteRendererInfoLocal::_dynamic_initializer_for__GetSubUVDetailsName__(void)

{
  ::FName::FName(&GetSubUVDetailsName,"GetSubUVDetails");
  return;
}

// `dynamic_initializer_for_'GetVectorFieldBoundsName'' @ 141182750

void __cdecl _dynamic_initializer_for__GetVectorFieldBoundsName__(void)

{
  FName::FName(&GetVectorFieldBoundsName,"FieldBounds");
  return;
}

// `dynamic_initializer_for_'GetVectorFieldDimensionsName'' @ 141182770

void __cdecl _dynamic_initializer_for__GetVectorFieldDimensionsName__(void)

{
  FName::FName(&GetVectorFieldDimensionsName,"FieldDimensions");
  return;
}

// `dynamic_initializer_for_'GetVectorFieldTilingAxesName'' @ 141182790

void __cdecl _dynamic_initializer_for__GetVectorFieldTilingAxesName__(void)

{
  FName::FName(&GetVectorFieldTilingAxesName,"FieldTilingAxes");
  return;
}

// `dynamic_initializer_for_'IsValidName'' @ 1411827b0

void __cdecl NDISpriteRendererInfoLocal::_dynamic_initializer_for__IsValidName__(void)

{
  ::FName::FName(&IsValidName,"IsValid");
  return;
}

// `dynamic_initializer_for_'LoadVectorFieldName'' @ 1411827d0

void __cdecl _dynamic_initializer_for__LoadVectorFieldName__(void)

{
  FName::FName(&LoadVectorFieldName,"LoadField");
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1411827f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'NAME_GetPreSkinnedLocalBounds'' @ 141182830

void __cdecl NDISkelMeshLocal::_dynamic_initializer_for__NAME_GetPreSkinnedLocalBounds__(void)

{
  ::FName::FName(&NAME_GetPreSkinnedLocalBounds,"GetPreSkinnedLocalBounds");
  return;
}

// `dynamic_initializer_for_'SampleSplineDirectionByUnitDistanceName'' @ 141182850

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineDirectionByUnitDistanceName__(void)

{
  ::FName::FName(&SampleSplineDirectionByUnitDistanceName,"SampleSplineDirectionByUnitDistance");
  return;
}

// `dynamic_initializer_for_'SampleSplineDirectionByUnitDistanceWSName'' @ 141182870

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineDirectionByUnitDistanceWSName__(void)

{
  ::FName::FName(&SampleSplineDirectionByUnitDistanceWSName,"SampleSplineDirectionByUnitDistanceWS")
  ;
  return;
}

// `dynamic_initializer_for_'SampleSplinePositionByUnitDistanceName'' @ 141182890

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplinePositionByUnitDistanceName__(void)

{
  ::FName::FName(&SampleSplinePositionByUnitDistanceName,"SampleSplinePositionByUnitDistance");
  return;
}

// `dynamic_initializer_for_'SampleSplinePositionByUnitDistanceWSName'' @ 1411828b0

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplinePositionByUnitDistanceWSName__(void)

{
  ::FName::FName(&SampleSplinePositionByUnitDistanceWSName,"SampleSplinePositionByUnitDistanceWS");
  return;
}

// `dynamic_initializer_for_'SampleSplineRightVectorByUnitDistanceName'' @ 1411828d0

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineRightVectorByUnitDistanceName__(void)

{
  ::FName::FName(&SampleSplineRightVectorByUnitDistanceName,"SampleSplineRightVectorByUnitDistance")
  ;
  return;
}

// `dynamic_initializer_for_'SampleSplineRightVectorByUnitDistanceWSName'' @ 1411828f0

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineRightVectorByUnitDistanceWSName__(void)

{
  ::FName::FName(&SampleSplineRightVectorByUnitDistanceWSName,
                 "SampleSplineRightVectorByUnitDistanceWS");
  return;
}

// `dynamic_initializer_for_'SampleSplineRotationByUnitDistanceName'' @ 141182910

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineRotationByUnitDistanceName__(void)

{
  ::FName::FName(&SampleSplineRotationByUnitDistanceName,"SampleSplineRotationByUnitDistance");
  return;
}

// `dynamic_initializer_for_'SampleSplineRotationByUnitDistanceWSName'' @ 141182930

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineRotationByUnitDistanceWSName__(void)

{
  ::FName::FName(&SampleSplineRotationByUnitDistanceWSName,"SampleSplineRotationByUnitDistanceWS");
  return;
}

// `dynamic_initializer_for_'SampleSplineTangentByUnitDistanceName'' @ 141182950

void __cdecl NDISplineLocal::_dynamic_initializer_for__SampleSplineTangentByUnitDistanceName__(void)

{
  ::FName::FName(&SampleSplineTangentByUnitDistanceName,"SampleSplineTangentByUnitDistance");
  return;
}

// `dynamic_initializer_for_'SampleSplineTangentByUnitDistanceWSName'' @ 141182970

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineTangentByUnitDistanceWSName__(void)

{
  ::FName::FName(&SampleSplineTangentByUnitDistanceWSName,"SampleSplineTangentByUnitDistanceWS");
  return;
}

// `dynamic_initializer_for_'SampleSplineUpVectorByUnitDistanceName'' @ 141182990

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineUpVectorByUnitDistanceName__(void)

{
  ::FName::FName(&SampleSplineUpVectorByUnitDistanceName,"SampleSplineUpVectorByUnitDistance");
  return;
}

// `dynamic_initializer_for_'SampleSplineUpVectorByUnitDistanceWSName'' @ 1411829b0

void __cdecl
NDISplineLocal::_dynamic_initializer_for__SampleSplineUpVectorByUnitDistanceWSName__(void)

{
  ::FName::FName(&SampleSplineUpVectorByUnitDistanceWSName,"SampleSplineUpVectorByUnitDistanceWS");
  return;
}

// `dynamic_initializer_for_'SampleVectorFieldName'' @ 1411829d0

void __cdecl _dynamic_initializer_for__SampleVectorFieldName__(void)

{
  FName::FName(&SampleVectorFieldName,"SampleField");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitRenderData'' @ 1411829f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitRenderData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitRenderData == (FThreadSafeStaticStat<FStat_STAT_InitRenderData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitRenderData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitRenderData,*pFVar1,L"InitRenderData",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 141182a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar1,L"Collision",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 141182b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraConstants__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraConstants == (FThreadSafeStaticStat<FStat_STAT_NiagaraConstants>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraConstants");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraConstants,*pFVar1,
               L"Constant Setup [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 141182ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUDataInterfaceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,*pFVar1,
               L"Niagara GPU data interface memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 141182c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar1,
               L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 141182cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumParticles == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumParticles,*pFVar1,
               L"# CPU Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 141182d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumSystems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumSystems == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumSystems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSystems,*pFVar1,L"NumSystems",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 141182de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar1,L"GT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 141182e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar1,
               L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 141182f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT,*pFVar1,L"RT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 141182f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT_CNC,*pFVar1,
               L"RT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 141183020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar1,
               L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 1411830b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderTargetMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderTargetMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderTargetMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderTargetMemory,*pFVar1,
               L"Niagara RenderTarget memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency'' @ 141183140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_Connectivity_Adjacency>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSkel_Connectivity_Adjacency");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency,*pFVar1
               ,L"Niagara - SkelMesh - BuildAdjacencyBuffer","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSkel_PreSkin'' @ 1411831d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSkel_PreSkin__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSkel_PreSkin == (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_PreSkin>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSkel_PreSkin");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSkel_PreSkin,*pFVar1,L"PreSkin",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 141183260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraTick,*pFVar1,L"Emitter Tick [CNC]",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 1411832f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraVBMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraVBMemory == (FThreadSafeStaticStat<FStat_STAT_NiagaraVBMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraVBMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraVBMemory,*pFVar1,
               L"Niagara vertex buffer memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 141183380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstances ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstances,*pFVar1,
               L"Total System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 141183410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstancesSolo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstancesSolo ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstancesSolo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstancesSolo,*pFVar1,
               L"Total Solo System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h__Script_Niagara_372920072'' @ 1411834a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h__Script_Niagara_372920072__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h__Script_Niagara_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h__Script_Niagara_3207318845'' @ 1411834f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h__Script_Niagara_3207318845__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h__Script_Niagara_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h__Script_Niagara_4126292203'' @ 141183540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h__Script_Niagara_4126292203__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSparseVolumeTexture_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h__Script_Niagara_3262725123'' @ 141183580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h__Script_Niagara_3262725123__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpline_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h__Script_Niagara_2118998451'' @ 1411835d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h__Script_Niagara_2118998451__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSpriteRendererInfo_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceTexture_h__Script_Niagara_1009380660'' @ 141183610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceTexture_h__Script_Niagara_1009380660__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceTexture_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h__Script_Niagara_3662593534'' @ 141183650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h__Script_Niagara_3662593534__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h__Script_Niagara_2008658506'' @ 141183690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h__Script_Niagara_2008658506__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorCurve_h__Script_Niagara_2620816991'' @ 1411836d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorCurve_h__Script_Niagara_2620816991__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorCurve_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h__Script_Niagara_2262241527'' @ 141183710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h__Script_Niagara_2262241527__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVirtualTextureSample_h__Script_Niagara_3821662953'' @ 141183750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVirtualTextureSample_h__Script_Niagara_3821662953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVirtualTextureSample_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeCache_h__Script_Niagara_3594718435'' @ 141183790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeCache_h__Script_Niagara_3594718435__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeCache_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeTexture_h__Script_Niagara_26177851'' @ 1411837d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeTexture_h__Script_Niagara_26177851__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeTexture_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVectorField @ 1491eda00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVectorField(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton;
}

// NewProp_bTileX_SetBit @ 1491eda40

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bTileY_SetBit @ 1491eda50

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache @ 1491eda60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.OuterSingleton;
}

// NewProp_bTileZ_SetBit @ 1491edaa0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceTexture @ 1491edb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceTexture(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture @ 1491edbb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.OuterSingleton;
}

// NewProp_BlockingStreamingRequests_SetBit @ 1491edbf0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_Statics::
NewProp_BlockingStreamingRequests_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh @ 1491ede40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode @ 1491ede80

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode(void)

{
  if (Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode @ 1491edec0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode(void)

{
  if (Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton;
}

// ENDISkeletalMesh_SourceMode_StaticEnum @ 1491edf00

UEnum * __cdecl ENDISkeletalMesh_SourceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode,(UObject *)pUVar1,
                       L"ENDISkeletalMesh_SourceMode");
  }
  return Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton;
}

// ENDISkeletalMesh_SkinningMode_StaticEnum @ 1491edf40

UEnum * __cdecl ENDISkeletalMesh_SkinningMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode,(UObject *)pUVar1,
                       L"ENDISkeletalMesh_SkinningMode");
  }
  return Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay @ 1491edf80

UFunction * __cdecl Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExcludeBone_SetBit @ 1491edfc0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf0) = *(byte *)((longlong)param_1 + 0xf0) | 1;
  return;
}

// NewProp_bRequireCurrentFrameData_SetBit @ 1491edfd0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::
NewProp_bRequireCurrentFrameData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
  return;
}

// NewProp_bReadDeformedGeometry_SetBit @ 1491edfe0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bReadDeformedGeometry_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf9) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVirtualTextureSample @ 1491edff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVirtualTextureSample(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVirtualTextureSample_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid2D @ 1491ee030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid2D(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid3D @ 1491ee070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid3D(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRWBase @ 1491ee0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRWBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ESetResolutionMethod @ 1491ee0f0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ESetResolutionMethod(void)

{
  if (Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton;
}

// ESetResolutionMethod_StaticEnum @ 1491ee130

UEnum * __cdecl ESetResolutionMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ESetResolutionMethod,(UObject *)pUVar1,
                       L"ESetResolutionMethod");
  }
  return Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton;
}

// NewProp_ClearBeforeNonIterationStage_SetBit @ 1491ee1b0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_ClearBeforeNonIterationStage_SetBit @ 1491ee1c0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_SetGridFromMaxAxis_SetBit @ 1491ee290

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve @ 1491ee360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSpline @ 1491ee520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSpline(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.OuterSingleton;
}

// NewStructOps @ 1491ee560

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDataInterfaceSplineLUT,&UE::CoreUObject::Private::Construct<FNiagaraDataInterfaceSplineLUT>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDataInterfaceSplineLUT>,&UE::CoreUObject::Private::Destruct<FNiagaraDataInterfaceSplineLUT>,&UE::CoreUObject::Private::Copy<FNiagaraDataInterfaceSplineLUT>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve @ 1491ee5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.OuterSingleton;
}

// NewProp_bUseLUT_SetBit @ 1491ee6a0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceSpline_Statics::NewProp_bUseLUT_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture @ 1491ee6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVectorCurve @ 1491ee7b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVectorCurve(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVectorCurve_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo @ 1491ee7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1491eeaf0

void * __thiscall
TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491eed30

void * __thiscall
TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::FStaticStateResource::_scalar_deleting_destructor_(FStaticStateResource *this,uint param_1)

{
  ~FStaticStateResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// AddPass<FNDIGpuComputeDispatchArgsGenParameters,`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>_> @ 1491ef040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FNDIGpuComputeDispatchArgsGenParameters,_FNDIGpuComputeDispatchArgsGenContext::FlushPass_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FNDIGpuComputeDispatchArgsGenParameters *param_2
          ,ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  ERDGPassFlags EVar2;
  int iVar3;
  wchar_t *pwVar4;
  void *this_00;
  TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>
  *pTVar5;
  code *pcVar6;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar6 = FNDIGpuComputeDispatchArgsGenParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar6 = (code *)(*pcVar6)(local_res8,&local_28);
      } while (pcVar6 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNDIGpuComputeDispatchArgsGenParameters",
                 L"FNDIGpuComputeDispatchArgsGenParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceRW.h"
                 ,0xd,0x50,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar4 = FRDGEventName::GetTCHAR(param_1);
  EVar2 = OverridePassFlags(this,pwVar4,param_3);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x228,8);
  pTVar5 = TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>_>
           ::
           TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_FNDIGpuComputeDispatchArgsGenContext::FlushPass_::__l2::<lambda_1>_>
                     (this_00,param_1,
                      &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
                       ::__l2::StaticStructMetadata,param_2,EVar2,param_4);
  ClobberPassOutputs(this,(FRDGPass *)pTVar5);
  iVar3 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar3 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)pTVar5;
  *(int *)((longlong)&pTVar5->_padding_ + 4) = (this->Passes).Array.ArrayNum + -1;
  SetupParameterPass(this,(FRDGPass *)pTVar5);
  return (FRDGPass *)pTVar5;
}

// BuildAdjacencyBuffer<unsigned_short,1> @ 1491f33c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
BuildAdjacencyBuffer<unsigned_short,1>
          (FSkeletalMeshLODRenderData *param_1,int param_2,TResourceArray<unsigned_char,0> *param_3,
          int *param_4)

{
  longlong *this;
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  float fVar10;
  ForAnyElementType FVar11;
  FRawStaticIndexBuffer16or32Interface *pFVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_Connectivity_Adjacency> FVar21;
  void *_Dst;
  FName FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  TVector<float>_u_0 *pTVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_238 [32];
  ushort local_1d6;
  uint local_1c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1a8;
  FColor_u_0 local_198;
  uint local_194;
  int local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  longlong local_180;
  FName local_178;
  FRawStaticIndexBuffer16or32Interface *local_170;
  TVector<float>_u_0 *local_168;
  uint *local_160;
  longlong local_158;
  FName local_150;
  FName local_148;
  uint local_138;
  int local_134;
  int local_130;
  FSkeletalMeshLODRenderData *local_128;
  ulonglong local_120;
  TVector<float>_u_0 *local_118;
  uint *local_110;
  FName local_108 [2];
  TSet<TTuple<UE::Math::TVector<float>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,int,0>,FDefaultSetAllocator>
  local_f8;
  TVector<float>_u_0 local_a8;
  undefined8 local_9c;
  float local_94;
  undefined8 local_90;
  float local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar24 = 0;
  uVar26 = (ulonglong)param_2;
  FVar21 = StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency;
  local_128 = param_1;
  if (StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_Connectivity_Adjacency>)0x0) {
    pFVar20 = FName::FName(local_108,"STAT_NiagaraSkel_Connectivity_Adjacency");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_Connectivity_Adjacency>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency,*pFVar20,
                        L"Niagara - SkelMesh - BuildAdjacencyBuffer","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar21;
  bVar7 = false;
  bVar8 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_178.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                   ,0xff);
        bVar7 = true;
        bVar8 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar14 = true;
      goto LAB_1491f3540;
    }
  }
  bVar8 = bVar15;
  bVar7 = bVar14;
  bVar14 = false;
  local_150 = local_148;
  FVar22 = local_148;
LAB_1491f3540:
  if (((param_1->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0
      ) && (bVar15 = FDebug::CheckVerifyFailedImpl2
                               ("IndexBuffer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                ,0x56,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    uVar16 = (*pcVar6)();
    return (bool)uVar16;
  }
  local_170 = (param_1->MultiSizeIndexContainer).IndexBuffer;
  uVar17 = (**(code **)(local_170->_padding_ + 0x50))(local_170);
  uVar29 = uVar17 / 3;
  local_188 = uVar29;
  if (uVar29 < 0xfffe) {
    uVar28 = (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
    this = &param_3->_padding_;
    iVar18 = param_2 * 2 * uVar28 + 3;
    local_184 = uVar28;
    TArray<unsigned_char,TMemoryImageAllocator<0>_>::SetNum
              ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)this,
               (iVar18 >> 0x1f & 3U) + iVar18 & 0xfffffffc,Default);
    _Dst = (void *)*this;
    if (((ulonglong)_Dst & 1) != 0) {
      _Dst = (void *)((longlong)this + ((longlong)_Dst >> 0x18));
    }
    memset(_Dst,0xff,(longlong)(int)param_3->_padding_);
    uVar23 = *this;
    if ((uVar23 & 1) != 0) {
      uVar23 = (longlong)this + ((longlong)uVar23 >> 0x18);
    }
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_4_ = 0;
    local_f8.Elements._44_4_ = 0x80;
    local_f8.Elements._48_4_ = 0xffffffff;
    local_f8.Elements._52_4_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 0;
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_1a8,uVar28,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_1b8,uVar29,Default);
    fVar10 = __real_3f000000;
    local_1d6 = 0;
    iVar18 = param_2;
    if (uVar17 / 3 != 0) {
      local_1c0 = 0;
      uVar27 = uVar26;
      do {
        pFVar12 = local_170;
        iVar18 = (int)uVar24 * 3;
        uVar29 = (**(code **)(local_170->_padding_ + 0x60))(local_170,iVar18);
        local_138 = uVar29;
        iVar19 = (**(code **)(pFVar12->_padding_ + 0x60))(pFVar12,iVar18 + 1);
        local_134 = iVar19;
        local_130 = (**(code **)(local_170->_padding_ + 0x60))(local_170,iVar18 + 2);
        puVar5 = (local_128->StaticVertexBuffers).PositionVertexBuffer.Data;
        uVar17 = (local_128->StaticVertexBuffers).PositionVertexBuffer.Stride;
        uVar1 = *(undefined8 *)(puVar5 + uVar17 * uVar29);
        local_a8._0_8_ = uVar1;
        uVar1 = local_a8._0_8_;
        local_a8._s_0.Z = (float)*(undefined4 *)(puVar5 + (ulonglong)(uVar17 * uVar29) + 8);
        local_9c = *(undefined8 *)(puVar5 + uVar17 * iVar19);
        uVar13 = local_9c;
        local_9c._4_4_ = (float)((ulonglong)local_9c >> 0x20);
        local_94 = *(float *)(puVar5 + (ulonglong)(uVar17 * iVar19) + 8);
        uVar2 = *(undefined8 *)(puVar5 + uVar17 * local_130);
        local_90 = uVar2;
        uVar2 = local_90;
        local_90._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_90._0_4_ = (float)uVar2;
        fVar33 = *(float *)(puVar5 + (ulonglong)(uVar17 * iVar19) + 8) - local_a8._s_0.Z;
        local_88 = *(float *)(puVar5 + (ulonglong)(uVar17 * local_130) + 8);
        fVar34 = *(float *)(puVar5 + (ulonglong)(uVar17 * local_130) + 8) - local_a8._s_0.Z;
        local_a8._s_0.Y = (float)((ulonglong)uVar1 >> 0x20);
        local_a8._s_0.X = (float)uVar1;
        fVar36 = (local_9c._4_4_ - local_a8._s_0.Y) * ((float)local_90 - local_a8._s_0.X) -
                 ((float)local_9c - local_a8._s_0.X) * (local_90._4_4_ - local_a8._s_0.Y);
        fVar35 = fVar33 * (local_90._4_4_ - local_a8._s_0.Y) -
                 (local_9c._4_4_ - local_a8._s_0.Y) * fVar34;
        fVar33 = ((float)local_9c - local_a8._s_0.X) * fVar34 -
                 fVar33 * ((float)local_90 - local_a8._s_0.X);
        local_a8._0_8_ = uVar1;
        local_9c = uVar13;
        local_90 = uVar2;
        if ((local_1b8.ArrayNum <= (int)uVar24) &&
           (bVar15 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        pTVar30 = &local_a8;
        local_120 = uVar24;
        local_158 = 3;
        *(float *)(local_1b8.AllocatorInstance.Data + uVar24 * 4) =
             SQRT(fVar33 * fVar33 + fVar35 * fVar35 + fVar36 * fVar36) * fVar10;
        local_160 = &local_138;
        do {
          uVar17 = *local_160;
          local_194 = uVar17;
          local_168 = pTVar30;
          uVar29 = FCrc::MemCrc_DEPRECATED(pTVar30,0xc,0);
          iVar18 = TSet<TTuple<UE::Math::TVector<float>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,int,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<UE::Math::TVector<float>_>
                             (&local_f8,uVar29,(TVector<float> *)&pTVar30->_s_0);
          if ((iVar18 == -1) ||
             (lVar25 = local_f8.Elements._0_8_ + (longlong)iVar18 * 0x18, lVar25 == 0)) {
            local_110 = &local_194;
            local_118 = pTVar30;
            TSet<TTuple<UE::Math::TVector<float>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,int,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TPairInitializer<UE::Math::TVector<float>_const_&,int_&&>_>
                      (&local_f8,(uint)&local_190,
                       (TPairInitializer<UE::Math::TVector<float>_const_&,int_&&> *)
                       (ulonglong)uVar29,(bool *)&local_118);
            lVar25 = local_f8.Elements._0_8_ + (longlong)local_190 * 0x18;
          }
          iVar18 = *(int *)(lVar25 + 0xc);
          uVar29 = 0;
          if ((int)uVar17 < local_1a8.ArrayNum) {
            uVar29 = ~uVar17 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar15 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          *(int *)(local_1a8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) = iVar18;
          iVar19 = (int)uVar27;
          lVar25 = uVar23 + (ulonglong)(uint)(iVar19 * iVar18) * 2;
          local_180 = lVar25;
          if ((iVar19 < 0) &&
             (bVar15 = FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          uVar31 = 0;
          uVar32 = uVar31;
          if (0 < (longlong)uVar26) {
LAB_1491f39a0:
            uVar17 = (uint)uVar32;
            local_18c = 0;
            if ((int)uVar17 < iVar19) {
              local_18c = ~uVar17 >> 0x1f;
            }
            if ((local_18c == 0) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            uVar3 = *(ushort *)(lVar25 + uVar31 * 2);
            if ((local_1b8.ArrayNum <= (int)(uint)uVar3) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            FVar11.Data = local_1b8.AllocatorInstance.Data;
            if ((local_1b8.ArrayNum <= (int)local_1c0) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            if (*(float *)(local_1b8.AllocatorInstance.Data + uVar24 * 4) <=
                *(float *)(FVar11.Data + (ulonglong)uVar3 * 4)) goto code_r0x0001491f3a7c;
            uVar29 = iVar19 - 1;
            iVar19 = iVar19 + -2;
            lVar25 = uVar26 - 1;
            uVar17 = 0;
            if (iVar19 < param_2) {
              uVar17 = -uVar29 >> 0x1f;
            }
            lVar9 = local_180;
            if ((uVar17 == 0) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               lVar9 = local_180, bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            do {
              uVar17 = 0;
              if (iVar19 < param_2) {
                uVar17 = -uVar29 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar15)) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
              uVar4 = *(undefined2 *)(lVar9 + -2 + lVar25 * 2);
              uVar17 = 0;
              if ((int)uVar29 < param_2) {
                uVar17 = ~uVar29 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar15)) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
              uVar29 = uVar29 - 1;
              *(undefined2 *)(lVar9 + lVar25 * 2) = uVar4;
              iVar19 = iVar19 + -1;
              lVar25 = lVar25 + -1;
            } while ((longlong)uVar31 < lVar25);
            if ((local_18c == 0) &&
               (bVar15 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            uVar27 = (ulonglong)(uint)param_2;
            *(ushort *)(lVar9 + uVar31 * 2) = local_1d6;
            uVar24 = local_120;
          }
LAB_1491f3a9b:
          iVar18 = (int)uVar27;
          pTVar30 = local_168 + 1;
          local_160 = local_160 + 1;
          local_158 = local_158 + -1;
        } while (local_158 != 0);
        local_1d6 = local_1d6 + 1;
        uVar24 = (ulonglong)local_1d6;
        local_1c0 = (uint)local_1d6;
        local_158 = 0;
        local_168 = pTVar30;
      } while (local_1c0 < local_188);
      local_158 = 0;
      FVar22 = local_150;
      uVar28 = local_184;
    }
    uVar17 = 1;
    if (1 < uVar28) {
      do {
        uVar29 = 0;
        if ((int)uVar17 < local_1a8.ArrayNum) {
          uVar29 = ~uVar17 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar15 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        if (*(uint *)(local_1a8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) != uVar17) {
          memcpy((void *)(uVar23 + (ulonglong)(iVar18 * uVar17) * 2),
                 (void *)(uVar23 + (longlong)
                                   (int)(iVar18 * *(uint *)(local_1a8.AllocatorInstance.Data +
                                                           (longlong)(int)uVar17 * 4)) * 2),
                 (longlong)(iVar18 * 2));
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar28);
    }
    bVar15 = true;
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<float>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<float>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
  }
  else {
    bVar15 = false;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return bVar15;
code_r0x0001491f3a7c:
  uVar32 = (ulonglong)(uVar17 + 1);
  uVar31 = uVar31 + 1;
  lVar25 = local_180;
  if ((longlong)uVar26 <= (longlong)uVar31) goto LAB_1491f3a9b;
  goto LAB_1491f39a0;
}

// BuildAdjacencyBuffer<unsigned_int,1> @ 1491f3dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
BuildAdjacencyBuffer<unsigned_int,1>
          (FSkeletalMeshLODRenderData *param_1,int param_2,TResourceArray<unsigned_char,0> *param_3,
          int *param_4)

{
  longlong *this;
  undefined8 uVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  ForAnyElementType FVar8;
  FRawStaticIndexBuffer16or32Interface *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_Connectivity_Adjacency> FVar21;
  void *_Dst;
  int *piVar22;
  ulonglong uVar23;
  FName FVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  TVector<float>_u_0 *pTVar30;
  longlong lVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_238 [32];
  uint local_1d0;
  uint local_1c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1b8;
  ulonglong local_1a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1a0;
  FColor_u_0 local_190;
  uint local_18c;
  int local_188;
  uint local_184;
  undefined4 local_180;
  uint local_178;
  FName local_170;
  FRawStaticIndexBuffer16or32Interface *local_168;
  TVector<float>_u_0 *local_160;
  uint *local_158;
  longlong local_150;
  FName local_148;
  FName local_140;
  uint local_130;
  int local_12c;
  int local_128;
  FSkeletalMeshLODRenderData *local_120;
  TVector<float>_u_0 *local_118;
  uint *local_110;
  FName local_108 [2];
  TSet<TTuple<UE::Math::TVector<float>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,int,0>,FDefaultSetAllocator>
  local_f8;
  TVector<float>_u_0 local_a8;
  undefined8 local_9c;
  float local_94;
  undefined8 local_90;
  float local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar25 = (ulonglong)param_2;
  FVar21 = StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency;
  local_120 = param_1;
  if (StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_Connectivity_Adjacency>)0x0) {
    pFVar20 = FName::FName(local_108,"STAT_NiagaraSkel_Connectivity_Adjacency");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSkel_Connectivity_Adjacency>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraSkel_Connectivity_Adjacency,*pFVar20,
                        L"Niagara - SkelMesh - BuildAdjacencyBuffer","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar21;
  bVar5 = false;
  bVar6 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_190.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_190._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_170.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMeshConnectivity.cpp"
                   ,0xff);
        bVar5 = true;
        bVar6 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar12 = true;
      goto LAB_1491f3f54;
    }
  }
  bVar6 = bVar13;
  bVar5 = bVar12;
  bVar12 = false;
  local_148 = local_140;
  FVar24 = local_140;
LAB_1491f3f54:
  if (((param_1->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0
      ) && (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("IndexBuffer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                ,0x56,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  local_168 = (param_1->MultiSizeIndexContainer).IndexBuffer;
  uVar15 = (**(code **)(local_168->_padding_ + 0x50))(local_168);
  uVar29 = uVar15 / 3;
  local_178 = uVar29;
  if (uVar29 < 0xfffffffe) {
    uVar2 = (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
    this = &param_3->_padding_;
    iVar16 = param_2 * 4 * uVar2 + 3;
    TArray<unsigned_char,TMemoryImageAllocator<0>_>::SetNum
              ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)this,
               (iVar16 >> 0x1f & 3U) + iVar16 & 0xfffffffc,Default);
    _Dst = (void *)*this;
    if (((ulonglong)_Dst & 1) != 0) {
      _Dst = (void *)((longlong)this + ((longlong)_Dst >> 0x18));
    }
    memset(_Dst,0xff,(longlong)(int)param_3->_padding_);
    uVar32 = *this;
    if ((uVar32 & 1) != 0) {
      uVar32 = (longlong)this + ((longlong)uVar32 >> 0x18);
    }
    uVar28 = 0;
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_4_ = 0;
    local_f8.Elements._52_4_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    local_f8.Elements._44_4_ = 0x80;
    local_f8.Elements._48_4_ = 0xffffffff;
    local_1a8 = uVar32;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_1a0,uVar2,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_1b8,uVar29,Default);
    fVar7 = __real_3f000000;
    local_1d0 = 0;
    uVar23 = uVar25;
    if (uVar15 / 3 != 0) {
      do {
        pFVar9 = local_168;
        uVar29 = (uint)uVar28;
        iVar16 = uVar29 * 3;
        uVar17 = (**(code **)(local_168->_padding_ + 0x60))(local_168,iVar16);
        local_130 = uVar17;
        iVar18 = (**(code **)(pFVar9->_padding_ + 0x60))(pFVar9,iVar16 + 1);
        local_12c = iVar18;
        local_128 = (**(code **)(local_168->_padding_ + 0x60))(local_168,iVar16 + 2);
        puVar3 = (local_120->StaticVertexBuffers).PositionVertexBuffer.Data;
        uVar15 = (local_120->StaticVertexBuffers).PositionVertexBuffer.Stride;
        uVar1 = *(undefined8 *)(puVar3 + uVar15 * uVar17);
        local_a8._0_8_ = uVar1;
        uVar10 = local_a8._0_8_;
        local_a8._s_0.Z = (float)*(undefined4 *)(puVar3 + (ulonglong)(uVar15 * uVar17) + 8);
        local_9c = *(undefined8 *)(puVar3 + uVar15 * iVar18);
        uVar11 = local_9c;
        local_9c._4_4_ = (float)((ulonglong)local_9c >> 0x20);
        local_a8._s_0.Y = (float)((ulonglong)uVar1 >> 0x20);
        local_a8._s_0.X = (float)uVar1;
        local_94 = *(float *)(puVar3 + (ulonglong)(uVar15 * iVar18) + 8);
        uVar1 = *(undefined8 *)(puVar3 + uVar15 * local_128);
        local_90 = uVar1;
        uVar1 = local_90;
        local_90._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_90._0_4_ = (float)uVar1;
        fVar33 = *(float *)(puVar3 + (ulonglong)(uVar15 * iVar18) + 8) - local_a8._s_0.Z;
        local_184 = ~uVar29 >> 0x1f;
        fVar34 = *(float *)(puVar3 + (ulonglong)(uVar15 * local_128) + 8) - local_a8._s_0.Z;
        local_88 = *(float *)(puVar3 + (ulonglong)(uVar15 * local_128) + 8);
        fVar36 = (local_9c._4_4_ - local_a8._s_0.Y) * ((float)local_90 - local_a8._s_0.X) -
                 ((float)local_9c - local_a8._s_0.X) * (local_90._4_4_ - local_a8._s_0.Y);
        fVar35 = fVar33 * (local_90._4_4_ - local_a8._s_0.Y) -
                 (local_9c._4_4_ - local_a8._s_0.Y) * fVar34;
        fVar33 = ((float)local_9c - local_a8._s_0.X) * fVar34 -
                 fVar33 * ((float)local_90 - local_a8._s_0.X);
        uVar15 = 0;
        if ((int)uVar29 < local_1b8.ArrayNum) {
          uVar15 = local_184;
        }
        local_a8._0_8_ = uVar10;
        local_9c = uVar11;
        local_90 = uVar1;
        if ((uVar15 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        pTVar30 = &local_a8;
        local_150 = 3;
        *(float *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar29 * 4) =
             SQRT(fVar33 * fVar33 + fVar35 * fVar35 + fVar36 * fVar36) * fVar7;
        local_158 = &local_130;
        do {
          uVar15 = *local_158;
          local_18c = uVar15;
          local_160 = pTVar30;
          uVar29 = FCrc::MemCrc_DEPRECATED(pTVar30,0xc,0);
          iVar16 = TSet<TTuple<UE::Math::TVector<float>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,int,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<UE::Math::TVector<float>_>
                             (&local_f8,uVar29,(TVector<float> *)&pTVar30->_s_0);
          if ((iVar16 == -1) ||
             (lVar27 = local_f8.Elements._0_8_ + (longlong)iVar16 * 0x18, lVar27 == 0)) {
            local_110 = &local_18c;
            local_118 = pTVar30;
            TSet<TTuple<UE::Math::TVector<float>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<float>,int,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TPairInitializer<UE::Math::TVector<float>_const_&,int_&&>_>
                      (&local_f8,(uint)&local_188,
                       (TPairInitializer<UE::Math::TVector<float>_const_&,int_&&> *)
                       (ulonglong)uVar29,(bool *)&local_118);
            lVar27 = local_f8.Elements._0_8_ + (longlong)local_188 * 0x18;
          }
          iVar16 = *(int *)(lVar27 + 0xc);
          uVar29 = 0;
          if ((int)uVar15 < local_1a0.ArrayNum) {
            uVar29 = ~uVar15 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          *(int *)(local_1a0.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = iVar16;
          uVar15 = (uint)uVar23;
          lVar27 = uVar32 + (ulonglong)(uVar15 * iVar16) * 4;
          if (((int)uVar15 < 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          lVar31 = 0;
          local_1c0 = 0;
          if (0 < (longlong)uVar25) {
LAB_1491f43c0:
            uVar29 = 0;
            if ((int)local_1c0 < (int)uVar15) {
              uVar29 = ~local_1c0 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            uVar17 = *(uint *)(lVar27 + lVar31 * 4);
            if (uVar17 == 0xffffffff) {
              if ((uVar29 == 0) &&
                 (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar14 = (*pcVar4)();
                return (bool)uVar14;
              }
              *(int *)(lVar27 + lVar31 * 4) = (int)uVar28;
            }
            else {
              uVar19 = 0;
              if ((int)uVar17 < local_1b8.ArrayNum) {
                uVar19 = ~uVar17 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar14 = (*pcVar4)();
                return (bool)uVar14;
              }
              FVar8.Data = local_1b8.AllocatorInstance.Data;
              uVar19 = 0;
              if ((int)local_1d0 < local_1b8.ArrayNum) {
                uVar19 = local_184;
              }
              if ((uVar19 == 0) &&
                 (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar14 = (*pcVar4)();
                return (bool)uVar14;
              }
              uVar28 = (ulonglong)(int)local_1d0;
              if (*(float *)(local_1b8.AllocatorInstance.Data + uVar28 * 4) <=
                  *(float *)(FVar8.Data + (longlong)(int)uVar17 * 4)) goto code_r0x0001491f44c1;
              lVar26 = uVar25 - 1;
              iVar16 = uVar15 - 2;
              piVar22 = (int *)(lVar27 + -4 + lVar26 * 4);
              while( true ) {
                uVar15 = uVar15 - 1;
                uVar17 = 0;
                if (iVar16 < param_2) {
                  uVar17 = -uVar15 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar13)) {
                  pcVar4 = (code *)swi(3);
                  uVar14 = (*pcVar4)();
                  return (bool)uVar14;
                }
                if (*piVar22 != -1) break;
                iVar16 = iVar16 + -1;
                lVar26 = lVar26 + -1;
                piVar22 = piVar22 + -1;
              }
              uVar23 = (ulonglong)(uint)param_2;
              do {
                uVar17 = 0;
                if ((int)(uVar15 - 1) < param_2) {
                  uVar17 = -uVar15 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar13)) {
                  pcVar4 = (code *)swi(3);
                  uVar14 = (*pcVar4)();
                  return (bool)uVar14;
                }
                local_180 = *(undefined4 *)(lVar27 + -4 + lVar26 * 4);
                uVar17 = 0;
                if ((int)uVar15 < param_2) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar13)) {
                  pcVar4 = (code *)swi(3);
                  uVar14 = (*pcVar4)();
                  return (bool)uVar14;
                }
                *(undefined4 *)(lVar27 + lVar26 * 4) = local_180;
                lVar26 = lVar26 + -1;
                uVar15 = uVar15 - 1;
              } while (lVar31 < lVar26);
              if ((uVar29 == 0) &&
                 (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar14 = (*pcVar4)();
                return (bool)uVar14;
              }
              uVar28 = (ulonglong)local_1d0;
              *(uint *)(lVar27 + lVar31 * 4) = local_1d0;
            }
          }
LAB_1491f46a4:
          pTVar30 = local_160 + 1;
          local_158 = local_158 + 1;
          local_150 = local_150 + -1;
          uVar32 = local_1a8;
        } while (local_150 != 0);
        local_1d0 = (int)uVar28 + 1;
        uVar28 = (ulonglong)local_1d0;
        local_150 = 0;
        local_160 = pTVar30;
      } while (local_1d0 < local_178);
      local_150 = 0;
      FVar24 = local_148;
    }
    uVar15 = 1;
    if (1 < uVar2) {
      do {
        uVar29 = 0;
        if ((int)uVar15 < local_1a0.ArrayNum) {
          uVar29 = ~uVar15 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        if (*(uint *)(local_1a0.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) != uVar15) {
          memcpy((void *)(uVar32 + (ulonglong)(param_2 * uVar15) * 4),
                 (void *)(uVar32 + (longlong)
                                   (int)(param_2 *
                                        *(uint *)(local_1a0.AllocatorInstance.Data +
                                                 (longlong)(int)uVar15 * 4)) * 4),
                 (longlong)(param_2 * 4));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar2);
    }
    bVar13 = true;
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<float>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<float>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
  }
  else {
    bVar13 = false;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return bVar13;
code_r0x0001491f44c1:
  local_1c0 = local_1c0 + 1;
  lVar31 = lVar31 + 1;
  if ((longlong)uVar25 <= lVar31) goto LAB_1491f46a4;
  goto LAB_1491f43c0;
}

// CastChecked<UNiagaraDataInterfaceGrid2D_const_,UNiagaraDataInterface_const_> @ 1491f4860

UNiagaraDataInterfaceGrid2D * __cdecl
CastChecked<UNiagaraDataInterfaceGrid2D_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2D_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid2D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid2D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2D_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid3D_const_,UNiagaraDataInterface_const_> @ 1491f4920

UNiagaraDataInterfaceGrid3D * __cdecl
CastChecked<UNiagaraDataInterfaceGrid3D_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3D_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid3D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid3D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3D_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceSkeletalMesh_const_,UNiagaraDataInterface_const_> @ 1491f49e0

UNiagaraDataInterfaceSkeletalMesh * __cdecl
CastChecked<UNiagaraDataInterfaceSkeletalMesh_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceSkeletalMesh_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceSkeletalMesh::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceSkeletalMesh *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceSkeletalMesh_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceSparseVolumeTexture_const_,UNiagaraDataInterface_const_> @ 1491f4aa0

UNiagaraDataInterfaceSparseVolumeTexture * __cdecl
CastChecked<UNiagaraDataInterfaceSparseVolumeTexture_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceSparseVolumeTexture::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceSparseVolumeTexture *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceSpline_const_,UNiagaraDataInterface_const_> @ 1491f4b60

UNiagaraDataInterfaceSpline * __cdecl
CastChecked<UNiagaraDataInterfaceSpline_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceSpline_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceSpline::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceSpline *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceSpline_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceSpriteRendererInfo_const_,UNiagaraDataInterface_const_> @ 1491f4c20

UNiagaraDataInterfaceSpriteRendererInfo * __cdecl
CastChecked<UNiagaraDataInterfaceSpriteRendererInfo_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceSpriteRendererInfo *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceTexture_const_,UNiagaraDataInterface_const_> @ 1491f4ce0

UNiagaraDataInterfaceTexture * __cdecl
CastChecked<UNiagaraDataInterfaceTexture_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceTexture_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceTexture::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceTexture *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceTexture_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVector2DCurve_const_,UNiagaraDataInterface_const_> @ 1491f4da0

UNiagaraDataInterfaceVector2DCurve * __cdecl
CastChecked<UNiagaraDataInterfaceVector2DCurve_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVector2DCurve_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVector2DCurve::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVector2DCurve *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVector2DCurve_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVector4Curve_const_,UNiagaraDataInterface_const_> @ 1491f4e60

UNiagaraDataInterfaceVector4Curve * __cdecl
CastChecked<UNiagaraDataInterfaceVector4Curve_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVector4Curve_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVector4Curve::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVector4Curve *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVector4Curve_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVectorCurve_const_,UNiagaraDataInterface_const_> @ 1491f4f20

UNiagaraDataInterfaceVectorCurve * __cdecl
CastChecked<UNiagaraDataInterfaceVectorCurve_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorCurve_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVectorCurve::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVectorCurve *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorCurve_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVectorField_const_,UNiagaraDataInterface_const_> @ 1491f4fe0

UNiagaraDataInterfaceVectorField * __cdecl
CastChecked<UNiagaraDataInterfaceVectorField_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorField_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVectorField::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVectorField *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorField_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVirtualTextureSample_const_,UNiagaraDataInterface_const_> @ 1491f50a0

UNiagaraDataInterfaceVirtualTextureSample * __cdecl
CastChecked<UNiagaraDataInterfaceVirtualTextureSample_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVirtualTextureSample::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVirtualTextureSample *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVolumeCache_const_,UNiagaraDataInterface_const_> @ 1491f5160

UNiagaraDataInterfaceVolumeCache * __cdecl
CastChecked<UNiagaraDataInterfaceVolumeCache_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeCache_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVolumeCache::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVolumeCache *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeCache_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVolumeTexture_const_,UNiagaraDataInterface_const_> @ 1491f5220

UNiagaraDataInterfaceVolumeTexture * __cdecl
CastChecked<UNiagaraDataInterfaceVolumeTexture_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeTexture_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVolumeTexture::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVolumeTexture *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeTexture_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid2D,UNiagaraDataInterface> @ 1491f52e0

UNiagaraDataInterfaceGrid2D * __cdecl
CastChecked<UNiagaraDataInterfaceGrid2D,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2D>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid2D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid2D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid2D>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceGrid3D,UNiagaraDataInterface> @ 1491f53a0

UNiagaraDataInterfaceGrid3D * __cdecl
CastChecked<UNiagaraDataInterfaceGrid3D,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3D>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceGrid3D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceGrid3D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceGrid3D>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceSparseVolumeTexture,UNiagaraDataInterface> @ 1491f5460

UNiagaraDataInterfaceSparseVolumeTexture * __cdecl
CastChecked<UNiagaraDataInterfaceSparseVolumeTexture,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceSparseVolumeTexture::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceSparseVolumeTexture *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface> @ 1491f5520

UNiagaraDataInterfaceSpline * __cdecl
CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceSpline>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceSpline::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceSpline *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceSpline>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceSpriteRendererInfo,UNiagaraDataInterface> @ 1491f55e0

UNiagaraDataInterfaceSpriteRendererInfo * __cdecl
CastChecked<UNiagaraDataInterfaceSpriteRendererInfo,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceSpriteRendererInfo *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceTexture,UNiagaraDataInterface> @ 1491f56a0

UNiagaraDataInterfaceTexture * __cdecl
CastChecked<UNiagaraDataInterfaceTexture,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceTexture>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceTexture::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceTexture *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceTexture>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVector2DCurve,UNiagaraDataInterface> @ 1491f5760

UNiagaraDataInterfaceVector2DCurve * __cdecl
CastChecked<UNiagaraDataInterfaceVector2DCurve,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVector2DCurve>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVector2DCurve::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVector2DCurve *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVector2DCurve>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVector4Curve,UNiagaraDataInterface> @ 1491f5820

UNiagaraDataInterfaceVector4Curve * __cdecl
CastChecked<UNiagaraDataInterfaceVector4Curve,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVector4Curve>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVector4Curve::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVector4Curve *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVector4Curve>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVectorCurve,UNiagaraDataInterface> @ 1491f58e0

UNiagaraDataInterfaceVectorCurve * __cdecl
CastChecked<UNiagaraDataInterfaceVectorCurve,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorCurve>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVectorCurve::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVectorCurve *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorCurve>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVectorField,UNiagaraDataInterface> @ 1491f59a0

UNiagaraDataInterfaceVectorField * __cdecl
CastChecked<UNiagaraDataInterfaceVectorField,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorField>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVectorField::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVectorField *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVectorField>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVirtualTextureSample,UNiagaraDataInterface> @ 1491f5a60

UNiagaraDataInterfaceVirtualTextureSample * __cdecl
CastChecked<UNiagaraDataInterfaceVirtualTextureSample,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVirtualTextureSample::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVirtualTextureSample *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVolumeCache,UNiagaraDataInterface> @ 1491f5b20

UNiagaraDataInterfaceVolumeCache * __cdecl
CastChecked<UNiagaraDataInterfaceVolumeCache,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeCache>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVolumeCache::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVolumeCache *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeCache>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVolumeTexture,UNiagaraDataInterface> @ 1491f5be0

UNiagaraDataInterfaceVolumeTexture * __cdecl
CastChecked<UNiagaraDataInterfaceVolumeTexture,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeTexture>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVolumeTexture::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVolumeTexture *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVolumeTexture>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// DefaultConstructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int> @ 1491f62e0

void __cdecl
DefaultConstructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    do {
      puVar1[-6] = 0;
      puVar1[-1] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraDataInterfaceRWAttributeHelper::FAttributeInfo,int> @ 1491f6310

void __cdecl
DefaultConstructItems<FNiagaraDataInterfaceRWAttributeHelper::FAttributeInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNDISkeletalMesh_InstanceData::FCachedSocketInfo,int> @ 1491f6360

void __cdecl
DefaultConstructItems<FNDISkeletalMesh_InstanceData::FCachedSocketInfo,int>
          (void *param_1,int param_2)

{
  __m128 *p_Var1;
  
  if (param_2 != 0) {
    p_Var1 = (__m128 *)((longlong)param_1 + 0x20);
    do {
      p_Var1[-2] = GlobalVectorConstants::Float0001;
      p_Var1[-1] = GlobalVectorConstants::FloatZero;
      *p_Var1 = GlobalVectorConstants::Float1110;
      p_Var1[1].m128_i32[0] = -1;
      param_2 = param_2 + -1;
      p_Var1 = p_Var1 + 4;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSkeletalMeshSkinningData::FLODData,int> @ 1491f63b0

void __cdecl
DefaultConstructItems<FSkeletalMeshSkinningData::FLODData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    do {
      *(undefined4 *)(lVar1 + -0x14) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraVariableLayoutInfo,int> @ 1491f6400

void __cdecl DefaultConstructItems<FNiagaraVariableLayoutInfo,int>(void *param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined2 *)((longlong)param_1 + 4);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[4] = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<float,FString>,int> @ 1491f6540

void __cdecl DestructItems<TTuple<float,FString>,int>(TTuple<float,FString> *param_1,int param_2)

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

// DestructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int> @ 1491f6580

void __cdecl
DestructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int>
          (TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSkeletalMeshSkinningData::FLODData,int> @ 1491f65d0

void __cdecl DestructItems<FSkeletalMeshSkinningData::FLODData,int>(FLODData *param_1,int param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_2 != 0) {
    pTVar5 = param_1->SkinnedTangentBasis;
    do {
      lVar4 = (longlong)(pTVar5 + 2);
      lVar3 = 2;
      do {
        puVar1 = (undefined8 *)(lVar4 + -0x10);
        lVar4 = lVar4 + -0x10;
        lVar3 = lVar3 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar3 != 0);
      lVar4 = 2;
      pTVar6 = pTVar5;
      do {
        pFVar2 = pTVar6[-1].AllocatorInstance.Data;
        pTVar6 = pTVar6 + -1;
        lVar4 = lVar4 + -1;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      } while (lVar4 != 0);
      pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar5 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FSkeletalMeshConnectivity,1>,int> @ 1491f6670

void __cdecl
DestructItems<TSharedPtr<FSkeletalMeshConnectivity,1>,int>
          (TSharedPtr<FSkeletalMeshConnectivity,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FSkeletalMeshUvMapping,1>,int> @ 1491f66b0

void __cdecl
DestructItems<TSharedPtr<FSkeletalMeshUvMapping,1>,int>
          (TSharedPtr<FSkeletalMeshUvMapping,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`FSkeletalMeshConnectivity::Release'::__l5::TSTR_BeginDestroyCommand144>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491f8860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshConnectivity::Release_::__l5::TSTR_BeginDestroyCommand144>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSkeletalMeshConnectivity::Release'::__l5::TSTR_BeginDestroyCommand144>
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
      if (bVar8) goto LAB_1491f89b1;
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
    goto LAB_1491f8ba5;
  }
LAB_1491f89b1:
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
LAB_1491f8a8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491f8a8f;
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
LAB_1491f8ba5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNDISkeletalMesh_InstanceData::Release'::__l5::TSTR_DeleteResource2279>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491f8be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNDISkeletalMesh_InstanceData::Release_::__l5::TSTR_DeleteResource2279>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNDISkeletalMesh_InstanceData::Release'::__l5::TSTR_DeleteResource2279>
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
      if (bVar8) goto LAB_1491f8d31;
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
    goto LAB_1491f8f25;
  }
LAB_1491f8d31:
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
LAB_1491f8e0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491f8e0f;
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
LAB_1491f8f25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData570>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491f8f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSpline::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData570>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData570>
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
      if (bVar8) goto LAB_1491f90b1;
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
    goto LAB_1491f92a5;
  }
LAB_1491f90b1:
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
LAB_1491f918f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491f918f;
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
LAB_1491f92a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDestroySkeletalMeshInstanceData2566>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491f92e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDestroySkeletalMeshInstanceData2566>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDestroySkeletalMeshInstanceData2566>
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
      if (bVar8) goto LAB_1491f9431;
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
    goto LAB_1491f9625;
  }
LAB_1491f9431:
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
LAB_1491f950f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491f950f;
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
LAB_1491f9625:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::TSTR_FUpdateDIColorCurve691>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491f9660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSpline::PerInstanceTick_[::F]::TSTR_FUpdateDIColorCurve691>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::TSTR_FUpdateDIColorCurve691>
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
      if (bVar8) goto LAB_1491f97b1;
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
    goto LAB_1491f99a5;
  }
LAB_1491f97b1:
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
LAB_1491f988f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491f988f;
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
LAB_1491f99a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::TSTR_FUpdateDIVectorField836>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491f99e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl_::__l2::TSTR_FUpdateDIVectorField836>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::TSTR_FUpdateDIVectorField836>
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
      if (bVar8) goto LAB_1491f9b31;
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
    goto LAB_1491f9d25;
  }
LAB_1491f9b31:
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
LAB_1491f9c0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491f9c0f;
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
LAB_1491f9d25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::TSTR_FUpdateData139>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491f9d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeCache::InitPerInstanceData_::__l12::TSTR_FUpdateData139>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::TSTR_FUpdateData139>
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
      if (bVar8) goto LAB_1491f9eb1;
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
    goto LAB_1491fa0a5;
  }
LAB_1491f9eb1:
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
LAB_1491f9f8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491f9f8f;
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
LAB_1491fa0a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSharedObject::FlushDeletionList'::__l2::TSTR_FlushDeletionListCommand32>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fa0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSharedObject::FlushDeletionList_::__l2::TSTR_FlushDeletionListCommand32>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraSharedObject::FlushDeletionList'::__l2::TSTR_FlushDeletionListCommand32>
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
      if (bVar8) goto LAB_1491fa231;
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
    goto LAB_1491fa425;
  }
LAB_1491fa231:
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
LAB_1491fa30f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fa30f;
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
LAB_1491fa425:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::TSTR_NDISparseVolumeTextureTexture_RemoveInstance235>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fa460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData_::__l2::TSTR_NDISparseVolumeTextureTexture_RemoveInstance235>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::TSTR_NDISparseVolumeTextureTexture_RemoveInstance235>
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
      if (bVar8) goto LAB_1491fa5b1;
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
    goto LAB_1491fa7a5;
  }
LAB_1491fa5b1:
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
LAB_1491fa68f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fa68f;
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
LAB_1491fa7a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::TSTR_NDISparseVolumeTexture_UpdateInstance281>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fa7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick_::__l14::TSTR_NDISparseVolumeTexture_UpdateInstance281>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::TSTR_NDISparseVolumeTexture_UpdateInstance281>
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
      if (bVar8) goto LAB_1491fa931;
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
    goto LAB_1491fab25;
  }
LAB_1491fa931:
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
LAB_1491faa0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491faa0f;
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
LAB_1491fab25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::TSTR_NDISpriteRendererInfo_Update49>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fab60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread_::__l2::TSTR_NDISpriteRendererInfo_Update49>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::TSTR_NDISpriteRendererInfo_Update49>
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
      if (bVar8) goto LAB_1491facb1;
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
    goto LAB_1491faea5;
  }
LAB_1491facb1:
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
LAB_1491fad8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fad8f;
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
LAB_1491faea5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance183>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491faee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance183>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance183>
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
      if (bVar8) goto LAB_1491fb031;
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
    goto LAB_1491fb225;
  }
LAB_1491fb031:
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
LAB_1491fb10f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fb10f;
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
LAB_1491fb225:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fb260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceTexture::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance265>
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
      if (bVar8) goto LAB_1491fb3b1;
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
    goto LAB_1491fb5a5;
  }
LAB_1491fb3b1:
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
LAB_1491fb48f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fb48f;
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
LAB_1491fb5a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::TSTR_NDITexture_UpdateInstance210>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fb5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeTexture::PerInstanceTick_::__l8::TSTR_NDITexture_UpdateInstance210>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::TSTR_NDITexture_UpdateInstance210>
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
      if (bVar8) goto LAB_1491fb731;
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
    goto LAB_1491fb925;
  }
LAB_1491fb731:
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
LAB_1491fb80f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fb80f;
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
LAB_1491fb925:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::TSTR_NDITexture_UpdateInstance306>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fb960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceTexture::PerInstanceTick_::__l17::TSTR_NDITexture_UpdateInstance306>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::TSTR_NDITexture_UpdateInstance306>
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
      if (bVar8) goto LAB_1491fbab1;
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
    goto LAB_1491fbca5;
  }
LAB_1491fbab1:
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
LAB_1491fbb8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fbb8f;
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
LAB_1491fbca5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::TSTR_NDIVirtualTexture_RemoveInstance174>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fbce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData_::__l2::TSTR_NDIVirtualTexture_RemoveInstance174>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::TSTR_NDIVirtualTexture_RemoveInstance174>
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
      if (bVar8) goto LAB_1491fbe31;
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
    goto LAB_1491fc025;
  }
LAB_1491fbe31:
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
LAB_1491fbf0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fbf0f;
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
LAB_1491fc025:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::TSTR_NDIVirtualTexture_UpdateInstance235>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fc060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick_::__l25::TSTR_NDIVirtualTexture_UpdateInstance235>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::TSTR_NDIVirtualTexture_UpdateInstance235>
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
      if (bVar8) goto LAB_1491fc1b1;
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
    goto LAB_1491fc3a5;
  }
LAB_1491fc1b1:
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
LAB_1491fc28f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fc28f;
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
LAB_1491fc3a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::TSTR_NDIVirtualTexture_UpdateInstance254>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fc3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick_::__l27::TSTR_NDIVirtualTexture_UpdateInstance254>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::TSTR_NDIVirtualTexture_UpdateInstance254>
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
      if (bVar8) goto LAB_1491fc531;
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
    goto LAB_1491fc725;
  }
LAB_1491fc531:
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
LAB_1491fc60f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fc60f;
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
LAB_1491fc725:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::TSTR_RemoveInstance160>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fc760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData_::__l2::TSTR_RemoveInstance160>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::TSTR_RemoveInstance160>
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
      if (bVar8) goto LAB_1491fc8b1;
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
    goto LAB_1491fcaa5;
  }
LAB_1491fc8b1:
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
LAB_1491fc98f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fc98f;
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
LAB_1491fcaa5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraDataSet::ResetBuffers'::__l17::TSTR_ResetBuffersCommand212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fcae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraDataSet::ResetBuffers_::__l17::TSTR_ResetBuffersCommand212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraDataSet::ResetBuffers'::__l17::TSTR_ResetBuffersCommand212>::
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
      if (bVar8) goto LAB_1491fcc31;
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
    goto LAB_1491fce25;
  }
LAB_1491fcc31:
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
LAB_1491fcd0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fcd0f;
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
LAB_1491fce25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::TSTR_UpdateSpawnInfoForSkinnedMesh1431>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491fce60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshGpuDynamicBufferProxy::NewFrame_::__l2::TSTR_UpdateSpawnInfoForSkinnedMesh1431>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::TSTR_UpdateSpawnInfoForSkinnedMesh1431>
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
      if (bVar8) goto LAB_1491fcfb1;
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
    goto LAB_1491fd1a5;
  }
LAB_1491fcfb1:
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
LAB_1491fd08f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491fd08f;
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
LAB_1491fd1a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindByPredicate<`FNDI_SkeletalMesh_GeneratedData::GetCachedUvMapping'::__l2::<lambda_1>_> @ 1491fdf50

TSharedPtr<FSkeletalMeshUvMapping,1> * __thiscall
TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FNDI_SkeletalMesh_GeneratedData::GetCachedUvMapping_::__l2::<lambda_1>_>
          (TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSkeletalMeshUvMapping,1> *pTVar3;
  TSharedPtr<FSkeletalMeshUvMapping,1> *pTVar4;
  
  pTVar3 = (TSharedPtr<FSkeletalMeshUvMapping,1> *)(this->AllocatorInstance).Data;
  pTVar4 = pTVar3 + this->ArrayNum;
  while( true ) {
    if (pTVar3 == pTVar4) {
      return (TSharedPtr<FSkeletalMeshUvMapping,1> *)0x0;
    }
    if ((pTVar3->Object == (FSkeletalMeshUvMapping *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) break;
    bVar2 = FSkeletalMeshUvMapping::Matches
                      (pTVar3->Object,param_1->MeshObject,*param_1->InLodIndex,
                       *param_1->InUvSetIndex);
    if (bVar2) {
      return pTVar3;
    }
    pTVar3 = pTVar3 + 1;
  }
  pcVar1 = (code *)swi(3);
  pTVar3 = (TSharedPtr<FSkeletalMeshUvMapping,1> *)(*pcVar1)();
  return pTVar3;
}

// GetTypeName<UNiagaraDataInterfaceGrid2D_const_> @ 149200610

FString * __cdecl GetTypeName<UNiagaraDataInterfaceGrid2D_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid2D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid3D_const_> @ 149200650

FString * __cdecl GetTypeName<UNiagaraDataInterfaceGrid3D_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid3D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceSkeletalMesh_const_> @ 149200690

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceSkeletalMesh_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceSkeletalMesh::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture_const_> @ 1492006d0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceSparseVolumeTexture::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceSpline_const_> @ 149200710

FString * __cdecl GetTypeName<UNiagaraDataInterfaceSpline_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceSpline::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo_const_> @ 149200750

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceTexture_const_> @ 149200790

FString * __cdecl GetTypeName<UNiagaraDataInterfaceTexture_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceTexture::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVector2DCurve_const_> @ 1492007d0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVector2DCurve_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVector2DCurve::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVector4Curve_const_> @ 149200810

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVector4Curve_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVector4Curve::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVectorCurve_const_> @ 149200850

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVectorCurve_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVectorCurve::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVectorField_const_> @ 149200890

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVectorField_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVectorField::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVirtualTextureSample_const_> @ 1492008d0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVirtualTextureSample_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVirtualTextureSample::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVolumeCache_const_> @ 149200910

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVolumeCache_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVolumeCache::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVolumeTexture_const_> @ 149200950

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVolumeTexture_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVolumeTexture::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid2D> @ 149200990

FString * __cdecl GetTypeName<UNiagaraDataInterfaceGrid2D>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid2D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceGrid3D> @ 1492009d0

FString * __cdecl GetTypeName<UNiagaraDataInterfaceGrid3D>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceGrid3D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture> @ 149200a10

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceSparseVolumeTexture::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceSpline> @ 149200a50

FString * __cdecl GetTypeName<UNiagaraDataInterfaceSpline>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceSpline::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo> @ 149200a90

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceSpriteRendererInfo::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceTexture> @ 149200ad0

FString * __cdecl GetTypeName<UNiagaraDataInterfaceTexture>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceTexture::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVector2DCurve> @ 149200b10

FString * __cdecl GetTypeName<UNiagaraDataInterfaceVector2DCurve>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVector2DCurve::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVector4Curve> @ 149200b50

FString * __cdecl GetTypeName<UNiagaraDataInterfaceVector4Curve>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVector4Curve::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVectorCurve> @ 149200b90

FString * __cdecl GetTypeName<UNiagaraDataInterfaceVectorCurve>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVectorCurve::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVectorField> @ 149200bd0

FString * __cdecl GetTypeName<UNiagaraDataInterfaceVectorField>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVectorField::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVirtualTextureSample> @ 149200c10

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVirtualTextureSample>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVirtualTextureSample::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVolumeCache> @ 149200c50

FString * __cdecl GetTypeName<UNiagaraDataInterfaceVolumeCache>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVolumeCache::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVolumeTexture> @ 149200c90

FString * __cdecl GetTypeName<UNiagaraDataInterfaceVolumeTexture>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVolumeTexture::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IntCastChecked<unsigned_int,int> @ 149201b90

uint __cdecl IntCastChecked<unsigned_int,int>(int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return param_1;
}

// InternalConstructor<UNiagaraDataInterfaceGrid2D> @ 149201be0

void __cdecl InternalConstructor<UNiagaraDataInterfaceGrid2D>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2D__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 3;
    *(undefined4 *)&this[1]._padding_ = 3;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 3;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceGrid3D> @ 149201c40

void __cdecl InternalConstructor<UNiagaraDataInterfaceGrid3D>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3D__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x4059000000000000;
    *(undefined8 *)&this[1].field_0x30 = 0x4059000000000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 3;
    *(undefined4 *)&this[1]._padding_ = 3;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 3;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 10;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceRWBase> @ 149201cb0

void __cdecl InternalConstructor<UNiagaraDataInterfaceRWBase>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRWBase__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceSkeletalMesh> @ 149201ce0

void __cdecl InternalConstructor<UNiagaraDataInterfaceSkeletalMesh>(FObjectInitializer *param_1)

{
  if ((UNiagaraDataInterfaceSkeletalMesh *)param_1->Obj != (UNiagaraDataInterfaceSkeletalMesh *)0x0)
  {
    UNiagaraDataInterfaceSkeletalMesh::UNiagaraDataInterfaceSkeletalMesh
              ((UNiagaraDataInterfaceSkeletalMesh *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceSparseVolumeTexture> @ 149201d00

void __cdecl
InternalConstructor<UNiagaraDataInterfaceSparseVolumeTexture>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar3 = (FNiagaraDataInterfaceProxy *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSparseVolumeTexture__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    *(undefined1 *)&this[1].Proxy.Ptr = 1;
    pFVar2 = operator_new(0x60);
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar2[2]._padding_ = 0;
      pFVar2[2].SourceDIName.ComparisonIndex = 0;
      pFVar2[2].SourceDIName.Number = 0;
      pFVar2[4].SourceDIName.ComparisonIndex = 0;
      pFVar2[4].SourceDIName.Number = 0;
      pFVar2[5].SourceDIName.ComparisonIndex = 0;
      pFVar2[5].SourceDIName.Number = 0;
      pFVar2->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxySparseVolumeTexture__6B_;
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2[1]._padding_ = 0;
      pFVar2[1].SourceDIName.ComparisonIndex = 0;
      pFVar2[1].SourceDIName.Number = 0;
      pFVar2[3]._padding_ = 0;
      pFVar2[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar2[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar2[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar2[4]._padding_ + 4) = 0;
      pFVar2[5]._padding_ = 0;
      pFVar3 = pFVar2;
    }
    pFVar2 = (this->Proxy).Ptr;
    if ((pFVar2 != pFVar3) &&
       ((this->Proxy).Ptr = pFVar3, pFVar2 != (FNiagaraDataInterfaceProxy *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&this[1]._padding_ = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceSpline> @ 149201e30

void __cdecl InternalConstructor<UNiagaraDataInterfaceSpline>(FObjectInitializer *param_1)

{
  if ((UNiagaraDataInterfaceSpline *)param_1->Obj != (UNiagaraDataInterfaceSpline *)0x0) {
    UNiagaraDataInterfaceSpline::UNiagaraDataInterfaceSpline
              ((UNiagaraDataInterfaceSpline *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceSpriteRendererInfo> @ 149201e50

void __cdecl
InternalConstructor<UNiagaraDataInterfaceSpriteRendererInfo>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceSpriteRendererInfo *this;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this = (UNiagaraDataInterfaceSpriteRendererInfo *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
    puVar3 = (undefined8 *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpriteRendererInfo__6B_;
    (this->SpriteRenderer).field0_0x0.DebugPtr = (UNiagaraSpriteRendererProperties *)0x0;
    puVar2 = operator_new(0x30);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[1] = 0;
      *puVar2 = &___7FNDIProxy_NDISpriteRendererInfoLocal__6B_;
      puVar3 = puVar2;
    }
    puVar2 = (undefined8 *)this->_padding_;
    if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      pcVar1 = *(code **)(this->_padding_ + 0x448);
      if (pcVar1 == UNiagaraDataInterfaceSpriteRendererInfo::PushToRenderThreadImpl) {
        UNiagaraDataInterfaceSpriteRendererInfo::PushToRenderThreadImpl(this);
        *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
        return;
      }
      (*pcVar1)();
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceTexture> @ 149201f20

void __cdecl InternalConstructor<UNiagaraDataInterfaceTexture>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar3 = (FNiagaraDataInterfaceProxy *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceTexture__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    pFVar2 = operator_new(0x60);
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar2[2]._padding_ = 0;
      pFVar2[2].SourceDIName.ComparisonIndex = 0;
      pFVar2[2].SourceDIName.Number = 0;
      pFVar2[4].SourceDIName.ComparisonIndex = 0;
      pFVar2[4].SourceDIName.Number = 0;
      pFVar2[5].SourceDIName.ComparisonIndex = 0;
      pFVar2[5].SourceDIName.Number = 0;
      pFVar2->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxyTexture__6B_;
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2[1]._padding_ = 0;
      pFVar2[1].SourceDIName.ComparisonIndex = 0;
      pFVar2[1].SourceDIName.Number = 0;
      pFVar2[3]._padding_ = 0;
      pFVar2[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar2[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar2[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar2[4]._padding_ + 4) = 0;
      pFVar2[5]._padding_ = 0;
      pFVar3 = pFVar2;
    }
    pFVar2 = (this->Proxy).Ptr;
    if ((pFVar2 != pFVar3) &&
       ((this->Proxy).Ptr = pFVar3, pFVar2 != (FNiagaraDataInterfaceProxy *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&this[1]._padding_ = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVector2DCurve> @ 149202050

void __cdecl InternalConstructor<UNiagaraDataInterfaceVector2DCurve>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceCurveBase *this;
  FName local_res8 [4];
  
  this = (UNiagaraDataInterfaceCurveBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceCurveBase *)0x0) {
    UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector2DCurve__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].ShaderLUT.AllocatorInstance.Data + 4) = 0;
    *(undefined4 *)&this[1].ShaderLUT.AllocatorInstance.Data = 0xffffffff;
    this[1].LUTMinTime = 0.0;
    this[1].LUTMaxTime = 0.0;
    this[1].LUTInvTimeRange = 0.0;
    *(undefined8 *)&this[1].LUTOffset = 0;
    this[1].ExposedName.ComparisonIndex = 0;
    this[1].ExposedName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[1].ExposedTexture.field0_0x0 = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[1].ExposedTexture.field0_0x0 + 4) = 0x404;
    this[1]._padding_ = (longlong)&___7FRichCurve__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ShaderLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ShaderLUT.ArrayNum = 0;
    this[2].ShaderLUT.ArrayMax = 0x80;
    this[2].LUTMaxTime = 0.0;
    this[2].LUTMinTime = -NAN;
    *(undefined8 *)&this[2].LUTOffset = 0;
    this[2].ExposedName.ComparisonIndex.Value = 0;
    this[2].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[3]._padding_ + 4) = 0x404;
    this[2]._padding_ = (longlong)&___7FRichCurve__6B_;
    FName::FName(local_res8,L"Vector2 Curve");
    this->ExposedName = local_res8[0];
    UNiagaraDataInterfaceCurveBase::SetDefaultLUT(this);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVector4Curve> @ 1492021a0

void __cdecl InternalConstructor<UNiagaraDataInterfaceVector4Curve>(FObjectInitializer *param_1)

{
  if ((UNiagaraDataInterfaceVector4Curve *)param_1->Obj != (UNiagaraDataInterfaceVector4Curve *)0x0)
  {
    UNiagaraDataInterfaceVector4Curve::UNiagaraDataInterfaceVector4Curve
              ((UNiagaraDataInterfaceVector4Curve *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVectorCurve> @ 1492021c0

void __cdecl InternalConstructor<UNiagaraDataInterfaceVectorCurve>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceCurveBase *this;
  FName local_res8 [4];
  
  this = (UNiagaraDataInterfaceCurveBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceCurveBase *)0x0) {
    UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorCurve__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].ShaderLUT.AllocatorInstance.Data + 4) = 0;
    *(undefined4 *)&this[1].ShaderLUT.AllocatorInstance.Data = 0xffffffff;
    this[1].LUTMinTime = 0.0;
    this[1].LUTMaxTime = 0.0;
    this[1].LUTInvTimeRange = 0.0;
    *(undefined8 *)&this[1].LUTOffset = 0;
    this[1].ExposedName.ComparisonIndex = 0;
    this[1].ExposedName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[1].ExposedTexture.field0_0x0 = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[1].ExposedTexture.field0_0x0 + 4) = 0x404;
    this[1]._padding_ = (longlong)&___7FRichCurve__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ShaderLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ShaderLUT.ArrayNum = 0;
    this[2].ShaderLUT.ArrayMax = 0x80;
    this[2].LUTMaxTime = 0.0;
    this[2].LUTMinTime = -NAN;
    *(undefined8 *)&this[2].LUTOffset = 0;
    this[2].ExposedName.ComparisonIndex.Value = 0;
    this[2].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[3]._padding_ + 4) = 0x404;
    this[2]._padding_ = (longlong)&___7FRichCurve__6B_;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].LUTMinTime = 0.0;
    this[3].LUTMaxTime = 0.0;
    this[3].LUTInvTimeRange = 0.0;
    this[3].LUTNumSamplesMinusOne = 1.79366e-43;
    *(undefined4 *)&this[3].field_0x5c = 0;
    this[3].LUTOffset = 0xffffffff;
    this[3].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[4]._padding_ + 4) = 0x404;
    this[3]._padding_ = (longlong)&___7FRichCurve__6B_;
    FName::FName(local_res8,L"Vector3 Curve");
    this->ExposedName = local_res8[0];
    UNiagaraDataInterfaceCurveBase::SetDefaultLUT(this);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVectorField> @ 149202390

void __cdecl InternalConstructor<UNiagaraDataInterfaceVectorField>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceVectorField *this;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this = (UNiagaraDataInterfaceVectorField *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceVectorField *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
    puVar3 = (undefined8 *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorField__6B_;
    (this->Field).field0_0x0.DebugPtr = (UVectorField *)0x0;
    this->bTileX = false;
    this->bTileY = false;
    this->bTileZ = false;
    puVar2 = operator_new(0x68);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[1] = 0;
      *puVar2 = &___7FNiagaraDataInterfaceProxyVectorField__6B_;
      puVar2[0xc] = 0;
      puVar3 = puVar2;
    }
    puVar2 = (undefined8 *)this->_padding_;
    if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      pcVar1 = *(code **)(this->_padding_ + 0x448);
      if (pcVar1 == UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl) {
        UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl(this);
        *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
        return;
      }
      (*pcVar1)();
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVirtualTextureSample> @ 149202470

void __cdecl
InternalConstructor<UNiagaraDataInterfaceVirtualTextureSample>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar3 = (FNiagaraDataInterfaceProxy *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTextureSample__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    pFVar2 = operator_new(0x60);
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar2[2]._padding_ = 0;
      pFVar2[2].SourceDIName.ComparisonIndex = 0;
      pFVar2[2].SourceDIName.Number = 0;
      pFVar2[4].SourceDIName.ComparisonIndex = 0;
      pFVar2[4].SourceDIName.Number = 0;
      pFVar2[5].SourceDIName.ComparisonIndex = 0;
      pFVar2[5].SourceDIName.Number = 0;
      pFVar2->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxyVirtualTextureSample__6B_;
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2[1]._padding_ = 0;
      pFVar2[1].SourceDIName.ComparisonIndex = 0;
      pFVar2[1].SourceDIName.Number = 0;
      pFVar2[3]._padding_ = 0;
      pFVar2[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar2[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar2[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar2[4]._padding_ + 4) = 0;
      pFVar2[5]._padding_ = 0;
      pFVar3 = pFVar2;
    }
    pFVar2 = (this->Proxy).Ptr;
    if ((pFVar2 != pFVar3) &&
       ((this->Proxy).Ptr = pFVar3, pFVar2 != (FNiagaraDataInterfaceProxy *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&this[1]._padding_ = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVolumeCache> @ 1492025a0

void __cdecl InternalConstructor<UNiagaraDataInterfaceVolumeCache>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar2 = (FNiagaraDataInterfaceProxy *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeCache__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x34 = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar1 = operator_new(0x60);
    if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar1[2]._padding_ = 0;
      pFVar1[2].SourceDIName.ComparisonIndex = 0;
      pFVar1[2].SourceDIName.Number = 0;
      pFVar1[4].SourceDIName.ComparisonIndex = 0;
      pFVar1[4].SourceDIName.Number = 0;
      pFVar1[5].SourceDIName.ComparisonIndex = 0;
      pFVar1[5].SourceDIName.Number = 0;
      pFVar1->_padding_ = (longlong)&___7FNiagaraDataInterfaceVolumeCacheProxy__6B_;
      (pFVar1->SourceDIName).ComparisonIndex = 0;
      (pFVar1->SourceDIName).Number = 0;
      pFVar1[1]._padding_ = 0;
      pFVar1[1].SourceDIName.ComparisonIndex = 0;
      pFVar1[1].SourceDIName.Number = 0;
      pFVar1[3]._padding_ = 0;
      pFVar1[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar1[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar1[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar1[4]._padding_ + 4) = 0;
      pFVar1[5]._padding_ = 0;
      pFVar2 = pFVar1;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014920267a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVolumeTexture> @ 149202690

void __cdecl InternalConstructor<UNiagaraDataInterfaceVolumeTexture>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar3 = (FNiagaraDataInterfaceProxy *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeTexture__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    pFVar2 = operator_new(0x60);
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar2[2]._padding_ = 0;
      pFVar2[2].SourceDIName.ComparisonIndex = 0;
      pFVar2[2].SourceDIName.Number = 0;
      pFVar2[4].SourceDIName.ComparisonIndex = 0;
      pFVar2[4].SourceDIName.Number = 0;
      pFVar2[5].SourceDIName.ComparisonIndex = 0;
      pFVar2[5].SourceDIName.Number = 0;
      pFVar2->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxyVolumeTexture__6B_;
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2[1]._padding_ = 0;
      pFVar2[1].SourceDIName.ComparisonIndex = 0;
      pFVar2[1].SourceDIName.Number = 0;
      pFVar2[3]._padding_ = 0;
      pFVar2[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar2[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar2[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar2[4]._padding_ + 4) = 0;
      pFVar2[5]._padding_ = 0;
      pFVar3 = pFVar2;
    }
    pFVar2 = (this->Proxy).Ptr;
    if ((pFVar2 != pFVar3) &&
       ((this->Proxy).Ptr = pFVar3, pFVar2 != (FNiagaraDataInterfaceProxy *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 1;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    *(int *)&this[1]._padding_ = iVar1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2D> @ 1492027c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceGrid2D::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2D__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3D> @ 149202870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceGrid3D::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3D__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRWBase> @ 149202920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRWBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceRWBase::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRWBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSkeletalMesh> @ 1492029d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSkeletalMesh>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceSkeletalMesh::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSkeletalMesh__6B_;
    this[1]._padding_ = 0;
    this[1].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].Proxy,0);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[2]._padding_);
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined8 *)&this[3].field_0x30 = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    *(undefined2 *)&this[4]._padding_ = 0x101;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSparseVolumeTexture> @ 149202b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSparseVolumeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceSparseVolumeTexture::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSparseVolumeTexture__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpline> @ 149202bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceSpline::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].Proxy);
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3].Proxy.Ptr = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpriteRendererInfo> @ 149202ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpriteRendererInfo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceSpriteRendererInfo::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpriteRendererInfo__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceTexture> @ 149202d90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceTexture::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceTexture__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector2DCurve> @ 149202e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector2DCurve>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceCurveBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVector2DCurve::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceCurveBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceCurveBase *)0x0) {
    UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector2DCurve__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].ShaderLUT.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ShaderLUT.AllocatorInstance.Data + 4) = 0;
    this[1].LUTMinTime = 0.0;
    this[1].LUTMaxTime = 0.0;
    this[1].LUTInvTimeRange = 0.0;
    *(undefined8 *)&this[1].LUTOffset = 0;
    this[1].ExposedName.ComparisonIndex = 0;
    this[1].ExposedName.Number = 0;
    this[1]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[1].ExposedTexture.field0_0x0 = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[1].ExposedTexture.field0_0x0 + 4) = 0x404;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ShaderLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ShaderLUT.ArrayNum = 0;
    this[2].ShaderLUT.ArrayMax = 0x80;
    this[2].LUTMinTime = -NAN;
    this[2].LUTMaxTime = 0.0;
    *(undefined8 *)&this[2].LUTOffset = 0;
    this[2].ExposedName.ComparisonIndex.Value = 0;
    this[2].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    this[3]._padding_ = 0;
    this[2]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[3]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[3]._padding_ + 4) = 0x404;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector4Curve> @ 149202ff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector4Curve>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceVector4Curve *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVector4Curve::GetPrivateStaticClass();
  pUVar3 = (UNiagaraDataInterfaceVector4Curve *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraDataInterfaceVector4Curve *)0x0) {
    pUVar3 = UNiagaraDataInterfaceVector4Curve::UNiagaraDataInterfaceVector4Curve(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorCurve> @ 149203090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorCurve>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceCurveBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVectorCurve::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceCurveBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceCurveBase *)0x0) {
    UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorCurve__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].ShaderLUT.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ShaderLUT.AllocatorInstance.Data + 4) = 0;
    this[1].LUTMinTime = 0.0;
    this[1].LUTMaxTime = 0.0;
    this[1].LUTInvTimeRange = 0.0;
    *(undefined8 *)&this[1].LUTOffset = 0;
    this[1].ExposedName.ComparisonIndex = 0;
    this[1].ExposedName.Number = 0;
    this[1]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[1].ExposedTexture.field0_0x0 = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[1].ExposedTexture.field0_0x0 + 4) = 0x404;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ShaderLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ShaderLUT.ArrayNum = 0;
    this[2].ShaderLUT.ArrayMax = 0x80;
    this[2].LUTMinTime = -NAN;
    this[2].LUTMaxTime = 0.0;
    *(undefined8 *)&this[2].LUTOffset = 0;
    this[2].ExposedName.ComparisonIndex.Value = 0;
    this[2].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    this[3]._padding_ = 0;
    this[2]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[3]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[3]._padding_ + 4) = 0x404;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].LUTMinTime = 0.0;
    this[3].LUTMaxTime = 0.0;
    this[3].LUTInvTimeRange = 0.0;
    this[3].LUTNumSamplesMinusOne = 1.79366e-43;
    this[3].LUTOffset = 0xffffffff;
    *(undefined4 *)&this[3].field_0x5c = 0;
    this[3].ExposedTexture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[3]._padding_ = (longlong)&___7FRichCurve__6B_;
    *(undefined4 *)&this[4]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[4]._padding_ + 4) = 0x404;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorField> @ 1492030a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorField>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVectorField::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorField__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVirtualTextureSample> @ 149203150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVirtualTextureSample>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVirtualTextureSample::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTextureSample__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeCache> @ 149203210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeCache>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVolumeCache::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeCache__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x34 = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeTexture> @ 1492032f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVolumeTexture::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeTexture__6B_;
    this[1]._padding_ = 0;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// Merge<TTuple<float,FString>,FIdentityFunctor,TDereferenceWrapper<TTuple<float,FString>,`FNiagaraDataBuffer::Dump'::__l29::<lambda_1>_>_> @ 1492033b0

void __cdecl
AlgoImpl::
Merge<TTuple<float,FString>,FIdentityFunctor,TDereferenceWrapper<TTuple<float,FString>,_FNiagaraDataBuffer::Dump_::__l29::<lambda_1>_>_>
          (TTuple<float,FString> *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<TTuple<float,FString>,_public:_void___cdecl_FNiagaraDataBuffer::Dump(int,int,FString_const_&,FName_const_&)const_::_29_::<lambda_1>_>
          param_5)

{
  TTuple<float,FString> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TTuple<float,FString> *pTVar10;
  TTuple<float,FString> *pTVar12;
  int iVar13;
  TTuple<float,FString> *pTVar14;
  TTuple<float,FString> *pTVar15;
  int iVar16;
  TTuple<float,FString> *pTVar11;
  
  if (0 < param_2) {
    iVar16 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar13 = 0;
      if (0 < param_2 - iVar16) {
        uVar8 = param_2 - iVar16;
        do {
          iVar6 = (uVar8 >> 1) + iVar13;
          iVar7 = iVar6 + (uVar8 & 1);
          if (*(float *)(param_1 + param_2) <
              *(float *)(param_1 + (longlong)iVar6 + (longlong)iVar16)) {
            iVar7 = iVar13;
          }
          iVar13 = iVar7;
          uVar9 = uVar8 >> 1;
          uVar8 = uVar8 >> 1;
        } while (uVar9 != 0);
      }
      iVar16 = iVar16 + iVar13;
      if (param_2 <= iVar16) {
        return;
      }
      iVar13 = 0;
      pTVar1 = param_1 + iVar16;
      if (0 < param_3 - param_2) {
        uVar8 = param_3 - param_2;
        do {
          uVar9 = uVar8 >> 1;
          if (*(float *)(param_1 + (longlong)(int)(uVar9 + iVar13) + (longlong)param_2) <=
              *(float *)pTVar1 &&
              *(float *)pTVar1 !=
              *(float *)(param_1 + (longlong)(int)(uVar9 + iVar13) + (longlong)param_2)) {
            iVar13 = uVar9 + iVar13 + (uVar8 & 1);
          }
          uVar8 = uVar9;
        } while (uVar9 != 0);
      }
      iVar7 = (iVar13 - iVar16) + param_2;
      iVar6 = param_2 - iVar16;
      if ((iVar6 != 0) && (iVar6 < iVar7)) {
        pTVar10 = pTVar1 + iVar6;
        pTVar14 = pTVar1;
        pTVar11 = pTVar1 + iVar6;
        do {
          while( true ) {
            pTVar12 = pTVar10 + 1;
            pTVar15 = pTVar14 + 1;
            uVar2 = *(undefined8 *)&pTVar14->field_0x10;
            uVar3 = *(undefined8 *)&pTVar10->field_0x8;
            uVar4 = *(undefined8 *)pTVar14;
            uVar5 = *(undefined8 *)&pTVar14->field_0x8;
            *(undefined8 *)pTVar14 = *(undefined8 *)pTVar10;
            *(undefined8 *)&pTVar14->field_0x8 = uVar3;
            *(undefined8 *)&pTVar14->field_0x10 = *(undefined8 *)&pTVar10->field_0x10;
            *(undefined8 *)pTVar10 = uVar4;
            *(undefined8 *)&pTVar10->field_0x8 = uVar5;
            *(undefined8 *)&pTVar10->field_0x10 = uVar2;
            pTVar14 = pTVar15;
            if (pTVar12 == pTVar1 + iVar7) break;
            pTVar10 = pTVar12;
            if (pTVar15 == pTVar11) {
              pTVar11 = pTVar12;
            }
          }
          pTVar10 = pTVar11;
        } while (pTVar15 != pTVar11);
      }
      param_2 = param_2 + iVar13;
      iVar16 = iVar16 + 1 + iVar13;
    } while (iVar16 < param_2);
  }
  return;
}

// RotateInternal<TTuple<float,FString>_> @ 1492048e0

int __cdecl
AlgoImpl::RotateInternal<TTuple<float,FString>_>
          (TTuple<float,FString> *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TTuple<float,FString> *pTVar5;
  TTuple<float,FString> *pTVar7;
  TTuple<float,FString> *pTVar8;
  TTuple<float,FString> *pTVar9;
  TTuple<float,FString> *pTVar6;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar5 = param_1 + param_3;
    pTVar8 = param_1;
    pTVar6 = param_1 + param_3;
    do {
      while( true ) {
        pTVar7 = pTVar5 + 1;
        pTVar9 = pTVar8 + 1;
        uVar1 = *(undefined8 *)&pTVar8->field_0x10;
        uVar2 = *(undefined8 *)&pTVar5->field_0x8;
        uVar3 = *(undefined8 *)pTVar8;
        uVar4 = *(undefined8 *)&pTVar8->field_0x8;
        *(undefined8 *)pTVar8 = *(undefined8 *)pTVar5;
        *(undefined8 *)&pTVar8->field_0x8 = uVar2;
        *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar5->field_0x10;
        *(undefined8 *)pTVar5 = uVar3;
        *(undefined8 *)&pTVar5->field_0x8 = uVar4;
        *(undefined8 *)&pTVar5->field_0x10 = uVar1;
        pTVar8 = pTVar9;
        if (pTVar7 == param_1 + param_2) break;
        pTVar5 = pTVar7;
        if (pTVar9 == pTVar6) {
          pTVar6 = pTVar7;
        }
      }
      pTVar5 = pTVar6;
    } while (pTVar9 != pTVar6);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TTuple<float,FString>,FIdentityFunctor,TDereferenceWrapper<TTuple<float,FString>,`FNiagaraDataBuffer::Dump'::__l29::<lambda_1>_>_> @ 149210b30

void __cdecl
AlgoImpl::
StableSortInternal<TTuple<float,FString>,FIdentityFunctor,TDereferenceWrapper<TTuple<float,FString>,_FNiagaraDataBuffer::Dump_::__l29::<lambda_1>_>_>
          (TTuple<float,FString> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,FString>,_public:_void___cdecl_FNiagaraDataBuffer::Dump(int,int,FString_const_&,FName_const_&)const_::_29_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TTuple<float,FString> *pTVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (0 < param_2) {
    iVar7 = 1;
    lVar11 = ((longlong)param_2 - 1U >> 1) + 1;
    pTVar6 = param_1;
    do {
      if ((iVar7 < param_2) &&
         (*(float *)(pTVar6 + 1) <= *(float *)pTVar6 && *(float *)pTVar6 != *(float *)(pTVar6 + 1)))
      {
        uVar3 = *(undefined8 *)&pTVar6[1].field_0x8;
        uVar4 = *(undefined8 *)pTVar6;
        uVar5 = *(undefined8 *)&pTVar6->field_0x8;
        uVar1 = *(undefined8 *)&pTVar6->field_0x10;
        *(undefined8 *)pTVar6 = *(undefined8 *)(pTVar6 + 1);
        *(undefined8 *)&pTVar6->field_0x8 = uVar3;
        *(undefined8 *)&pTVar6->field_0x10 = *(undefined8 *)&pTVar6[1].field_0x10;
        *(undefined8 *)(pTVar6 + 1) = uVar4;
        *(undefined8 *)&pTVar6[1].field_0x8 = uVar5;
        *(undefined8 *)&pTVar6[1].field_0x10 = uVar1;
      }
      iVar7 = iVar7 + 2;
      pTVar6 = pTVar6 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar7 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar7 * 2;
      iVar9 = 0;
      iVar8 = param_2;
      do {
        iVar10 = iVar8;
        if (iVar2 <= iVar8) {
          iVar10 = iVar2;
        }
        Merge<TTuple<float,FString>,FIdentityFunctor,TDereferenceWrapper<TTuple<float,FString>,_FNiagaraDataBuffer::Dump_::__l29::<lambda_1>_>_>
                  (param_1 + iVar9,iVar7,iVar10,param_3,param_4);
        iVar9 = iVar9 + iVar2;
        iVar8 = iVar8 + iVar7 * -2;
      } while (iVar9 < param_2);
      iVar7 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StaticEnum<enum_ENDISkeletalMesh_SkinningMode> @ 149210c50

UEnum * __cdecl StaticEnum<enum_ENDISkeletalMesh_SkinningMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode,(UObject *)pUVar1,
                       L"ENDISkeletalMesh_SkinningMode");
  }
  return Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton;
}

// StaticEnum<enum_ENDISkeletalMesh_SourceMode> @ 149210c90

UEnum * __cdecl StaticEnum<enum_ENDISkeletalMesh_SourceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode,(UObject *)pUVar1,
                       L"ENDISkeletalMesh_SourceMode");
  }
  return Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton;
}

// StaticEnum<enum_ESetResolutionMethod> @ 149210cd0

UEnum * __cdecl StaticEnum<enum_ESetResolutionMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ESetResolutionMethod,(UObject *)pUVar1,
                       L"ESetResolutionMethod");
  }
  return Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FNiagaraDispatchIndirectArgsGenCS> @ 149210e10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FNiagaraDispatchIndirectArgsGenCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FNiagaraDispatchIndirectArgsGenCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FNiagaraDispatchIndirectArgsGenCS *pFVar4;
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

// VisitElements<`FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle'::__l2::<lambda_1>_> @ 1492110d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraUvQuadTree::FSubTree::
VisitElements<_FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle_::__l2::<lambda_1>_>
          (FSubTree *this,FNiagaraUvQuadTree *param_1,TBox2<double> *param_2,<lambda_1> *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  <lambda_1> local_98;
  TStaticArray<int,4,4294967295> local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar11 = (this->ContentIndices).AllocatorInstance.Data;
  iVar9 = (this->ContentIndices).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar9 * 4;
  while( true ) {
    if ((this->ContentIndices).ArrayNum != iVar9) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar11 == pFVar1) {
      iVar9 = GetQuads(this,param_2,&local_68);
      if (iVar9 < 1) {
        return true;
      }
      lVar10 = 0;
      do {
        uVar2 = local_68.Elements[lVar10];
        iVar3 = (param_1->ChildTrees).ArrayNum;
        uVar8 = 0;
        if ((int)uVar2 < iVar3) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_b8 = (longlong)(int)uVar2, local_b0 = (longlong)iVar3,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_98.__this = param_3->__this;
        local_98.NormalizeScale = param_3->NormalizeScale;
        local_98.NormalizeBias = param_3->NormalizeBias;
        local_98.BarycentricCoord = param_3->BarycentricCoord;
        local_98.UvRef = param_3->UvRef;
        local_98.FoundTriangleIndex = param_3->FoundTriangleIndex;
        bVar6 = VisitElements<_FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle_::__l2::<lambda_1>_>
                          ((FSubTree *)
                           ((param_1->ChildTrees).AllocatorInstance.Data +
                           (longlong)(int)uVar2 * 0x50),param_1,param_2,&local_98);
        if (!bVar6) {
          return false;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar9);
      return true;
    }
    uVar2 = *(uint *)pFVar11;
    lVar10 = (longlong)(int)uVar2;
    iVar3 = (param_1->ChildNodes).ArrayNum;
    uVar8 = 0;
    if ((int)uVar2 < iVar3) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_b8 = lVar10, local_b0 = (longlong)iVar3,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar4 = (param_1->ChildNodes).AllocatorInstance.Data;
    if (((((param_2->Min).field0_0x0._s_0.X <= *(double *)(pFVar4 + lVar10 * 0x30 + 0x10)) &&
         (*(double *)(pFVar4 + lVar10 * 0x30) <= (param_2->Max).field0_0x0._s_0.X)) &&
        ((param_2->Min).field0_0x0._s_0.Y <= *(double *)(pFVar4 + lVar10 * 0x30 + 0x18))) &&
       ((*(double *)(pFVar4 + lVar10 * 0x30 + 8) <= (param_2->Max).field0_0x0._s_0.Y &&
        (bVar6 = `FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle'::__l2::
                 <lambda_1>::operator()(param_3,uVar2), !bVar6)))) {
      return false;
    }
    pFVar11 = pFVar11 + 4;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

// VisitElements<`FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle'::__l2::<lambda_1>_> @ 1492112c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraUvQuadTree::FSubTree::
VisitElements<_FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle_::__l2::<lambda_1>_>
          (FSubTree *this,FNiagaraUvQuadTree *param_1,TBox2<double> *param_2,
          <lambda_1>_conflict *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TVector<double> *pTVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  TVector<double>_u_0 local_d0;
  <lambda_1>_conflict local_b8;
  TStaticArray<int,4,4294967295> local_88;
  ulonglong local_78;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar8 = __real_3f800000;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar15 = (this->ContentIndices).AllocatorInstance.Data;
  iVar12 = (this->ContentIndices).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar12 * 4;
  while( true ) {
    if ((this->ContentIndices).ArrayNum != iVar12) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_d8);
    }
    if (pFVar15 == pFVar1) {
      iVar12 = GetQuads(this,param_2,&local_88);
      if (iVar12 < 1) {
        return true;
      }
      lVar14 = 0;
      do {
        uVar3 = local_88.Elements[lVar14];
        iVar2 = (param_1->ChildTrees).ArrayNum;
        uVar13 = 0;
        if ((int)uVar3 < iVar2) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (local_e8 = (longlong)(int)uVar3, local_e0 = (longlong)iVar2,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_b8.__this = param_3->__this;
        local_b8.InUv = param_3->InUv;
        local_b8.Tolerance = param_3->Tolerance;
        local_b8.FoundTriangleIndex = param_3->FoundTriangleIndex;
        local_b8.BarycentricCoord = param_3->BarycentricCoord;
        bVar9 = VisitElements<_FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle_::__l2::<lambda_1>_>
                          ((FSubTree *)
                           ((param_1->ChildTrees).AllocatorInstance.Data +
                           (longlong)(int)uVar3 * 0x50),param_1,param_2,&local_b8);
        if (!bVar9) {
          return false;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar12);
      return true;
    }
    uVar13 = *(uint *)pFVar15;
    lVar14 = (longlong)(int)uVar13;
    iVar2 = (param_1->ChildNodes).ArrayNum;
    uVar11 = 0;
    if ((int)uVar13 < iVar2) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (local_e8 = lVar14, local_e0 = (longlong)iVar2,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    pFVar4 = (param_1->ChildNodes).AllocatorInstance.Data;
    if (((((param_2->Min).field0_0x0._s_0.X <= *(double *)(pFVar4 + lVar14 * 0x30 + 0x10)) &&
         (*(double *)(pFVar4 + lVar14 * 0x30) <= (param_2->Max).field0_0x0._s_0.X)) &&
        ((param_2->Min).field0_0x0._s_0.Y <= *(double *)(pFVar4 + lVar14 * 0x30 + 0x18))) &&
       (*(double *)(pFVar4 + lVar14 * 0x30 + 8) <= (param_2->Max).field0_0x0._s_0.Y)) {
      FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::BuildTriangleCoordinate
                (param_3->__this,(TVector<double> *)&local_d0._s_0,param_3->InUv,uVar13);
      uVar16 = SUB84(local_d0._s_0.X,0);
      uVar17 = (undefined4)((ulonglong)local_d0._0_8_ >> 0x20);
      if (local_d0._s_0.Y <= local_d0._s_0.X) {
        uVar16 = SUB84(local_d0._s_0.Y,0);
        uVar17 = (undefined4)((ulonglong)local_d0._8_8_ >> 0x20);
      }
      dVar7 = (double)(float)((uint)*param_3->Tolerance ^ uVar3);
      if (local_d0._s_0.Z <= (double)CONCAT44(uVar17,uVar16)) {
        uVar16 = SUB84(local_d0._s_0.Z,0);
        uVar17 = (undefined4)((ulonglong)local_d0._16_8_ >> 0x20);
      }
      if (dVar7 <= (double)CONCAT44(uVar17,uVar16) && (double)CONCAT44(uVar17,uVar16) != dVar7) {
        uVar18 = local_d0._s_0.X;
        if (local_d0._s_0.X <= local_d0._s_0.Y) {
          uVar18 = local_d0._s_0.Y;
        }
        if ((double)uVar18 <= local_d0._s_0.Z) {
          uVar18 = local_d0._s_0.Z;
        }
        if ((double)uVar18 < (double)(*param_3->Tolerance + fVar8)) {
          *param_3->FoundTriangleIndex = uVar13;
          pTVar5 = param_3->BarycentricCoord;
          (pTVar5->field0_0x0)._s_0.X = local_d0._s_0.X;
          (pTVar5->field0_0x0)._s_0.Y = local_d0._s_0.Y;
          (pTVar5->field0_0x0)._s_0.Z = local_d0._s_0.Z;
          return false;
        }
      }
    }
    pFVar15 = pFVar15 + 4;
  }
  pcVar6 = (code *)swi(3);
  uVar10 = (*pcVar6)();
  return (bool)uVar10;
}

// TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>_> @ 149212140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>
* __thiscall
TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>_>
::
TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_FNDIGpuComputeDispatchArgsGenContext::FlushPass_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FNDIGpuComputeDispatchArgsGenParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5
          )

{
  FParameters *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_28;
  
  local_28.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,_protected:_void___cdecl_FNDIGpuComputeDispatchArgsGenContext::FlushPass(void)const_::_2_::<lambda_1>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_28.Layout.Reference = (param_2->Layout).Reference;
  if (local_28.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_28.Layout.Reference);
  }
  local_28.Metadata = param_2;
  FRDGPass::FRDGPass(this,param_1,&local_28,param_4,Inline);
  *(undefined ***)this =
       &TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::`2'::<lambda_1>_>
        ::_vftable_;
  *(FNDIGpuComputeDispatchArgsGenParameters **)((longlong)this + 0x180) = param_5->PassParameters;
  pFVar1 = param_5->IndirectArgsGenParameters;
  *(undefined8 *)((longlong)this + 400) = 0;
  *(FParameters **)((longlong)this + 0x188) = pFVar1;
  *(FScriptContainerElement **)((longlong)this + 400) =
       (param_5->CreateCallbacks).AllocatorInstance.Data;
  (param_5->CreateCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x198) = (param_5->CreateCallbacks).ArrayNum;
  *(int *)((longlong)this + 0x19c) = (param_5->CreateCallbacks).ArrayMax;
  (param_5->CreateCallbacks).ArrayNum = 0;
  (param_5->CreateCallbacks).ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x1d0) = 0;
  if ((param_5->TransitionsBefore).AllocatorInstance.SecondaryData ==
      (ForElementType<FRHITransitionInfo>)0x0) {
    memmove((void *)((longlong)this + 0x1a0),&param_5->TransitionsBefore,0x30);
  }
  if (*(void **)((longlong)this + 0x1d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1d0));
  }
  *(ForElementType<FRHITransitionInfo> *)((longlong)this + 0x1d0) =
       (param_5->TransitionsBefore).AllocatorInstance.SecondaryData;
  (param_5->TransitionsBefore).AllocatorInstance.SecondaryData =
       (ForElementType<FRHITransitionInfo>)0x0;
  *(int *)((longlong)this + 0x1d8) = (param_5->TransitionsBefore).ArrayNum;
  *(int *)((longlong)this + 0x1dc) = (param_5->TransitionsBefore).ArrayMax;
  (param_5->TransitionsBefore).ArrayNum = 0;
  (param_5->TransitionsBefore).ArrayMax = 1;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  if ((param_5->TransitionsAfter).AllocatorInstance.SecondaryData ==
      (ForElementType<FRHITransitionInfo>)0x0) {
    memmove((void *)((longlong)this + 0x1e0),&param_5->TransitionsAfter,0x30);
  }
  if (*(void **)((longlong)this + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x210));
  }
  *(ForElementType<FRHITransitionInfo> *)((longlong)this + 0x210) =
       (param_5->TransitionsAfter).AllocatorInstance.SecondaryData;
  (param_5->TransitionsAfter).AllocatorInstance.SecondaryData =
       (ForElementType<FRHITransitionInfo>)0x0;
  *(int *)((longlong)this + 0x218) = (param_5->TransitionsAfter).ArrayNum;
  *(int *)((longlong)this + 0x21c) = (param_5->TransitionsAfter).ArrayMax;
  (param_5->TransitionsAfter).ArrayNum = 0;
  (param_5->TransitionsAfter).ArrayMax = 1;
  *(FNDIGpuComputeDispatchArgsGenParameters **)((longlong)this + 0x220) = param_3;
  return this;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 149214880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1492148a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1492148c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceSpline::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1492148e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceTexture::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 149214900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 149214920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 149214940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,1,0> @ 149214960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraSharedObject::FlushDeletionList_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,1,1> @ 149214980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__PushToRenderThread_FNDIProxy_NDISpriteRendererInfoLocal__QEAAXPEBVUNiagaraSpriteRendererProperties___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1> @ 1492149a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  FVectorFieldTextureAccessor::~FVectorFieldTextureAccessor
            ((FVectorFieldTextureAccessor *)((longlong)this + 0x60));
  return;
}

// ~TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,1,0> @ 1492149c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNDISkeletalMesh_InstanceData::Release_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,1,0> @ 1492149e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSkeletalMeshConnectivity::Release_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1> @ 149214a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVolumeTexture::PerInstanceTick_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,1,1> @ 149214a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceTexture::PerInstanceTick_::__l17::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::`17'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,1,0> @ 149214a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraDataSet::ResetBuffers_::__l17::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::`17'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,1,1> @ 149214a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick_::__l25::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::`25'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,1,1> @ 149214a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceSpline::PerInstanceTick_[::F]::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(void **)((longlong)this + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf8));
  }
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
  }
  if (*(void **)((longlong)this + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,1,1> @ 149214ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVolumeCache::InitPerInstanceData_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,1,1> @ 149214b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick_::__l14::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,1,0> @ 149214b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick_::__l27::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::`27'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,1,1> @ 149214b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FSkeletalMeshGpuDynamicBufferProxy::NewFrame_::__l2::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::`2'::<lambda_3>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// operator== @ 1492166b0

bool __cdecl operator==(FAdjacencyVertexOverlapKey *param_1,FAdjacencyVertexOverlapKey *param_2)

{
  if ((((param_2->Position).field0_0x0._s_0.X == (param_1->Position).field0_0x0._s_0.X) &&
      ((param_2->Position).field0_0x0._s_0.Y == (param_1->Position).field0_0x0._s_0.Y)) &&
     ((param_2->Position).field0_0x0._s_0.Z == (param_1->Position).field0_0x0._s_0.Z)) {
    return true;
  }
  return false;
}

// `scalar_deleting_destructor' @ 14921a430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_FindClosestUnitDistanceFromPositionWSBinder::Bind<TIntegralConstant<bool,1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a460

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVector2DCurve_SampleCurveBinder::Bind<TIntegralConstant<bool,1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a490

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVector4Curve_SampleCurveBinder::Bind<TIntegralConstant<bool,1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a4c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVectorCurve_SampleCurveBinder::Bind<TIntegralConstant<bool,1>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a4f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a550

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a5b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a5e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a610

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a640

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a670

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a6a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a6d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a700

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a730

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a760

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a790

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a7c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a7f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a820

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a850

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a880

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a8b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a8e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a910

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a940

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a970

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_FindClosestUnitDistanceFromPositionWSBinder::Bind<TIntegralConstant<bool,0>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a9a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVector2DCurve_SampleCurveBinder::Bind<TIntegralConstant<bool,0>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921a9d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVector4Curve_SampleCurveBinder::Bind<TIntegralConstant<bool,0>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aa00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVectorCurve_SampleCurveBinder::Bind<TIntegralConstant<bool,0>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aa30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aa60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aa90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aaf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ab20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ab50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ab80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921abb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921abe0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ac10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ac40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ac70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aca0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921acd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ad00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ad30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ad60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ad90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921adc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921adf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ae20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ae50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ae80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aeb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVectorField_LoadVectorFieldBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921aee0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVectorField_SampleVectorFieldBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921af10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVolumeCache_GetNumCellsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921af40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVolumeCache_ReadFileBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921af70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVolumeCache_SetFrameBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921afa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVolumeTexture_SampleVolumeTextureBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921afd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b030

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b0c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b0f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b120

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__PushToRenderThread_FNDIProxy_NDISpriteRendererInfoLocal__QEAAXPEBVUNiagaraSpriteRendererProperties___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  FVectorFieldTextureAccessor::~FVectorFieldTextureAccessor
            ((FVectorFieldTextureAccessor *)((longlong)this + 0x60));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::`17'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::`17'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::`25'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(void **)((longlong)this + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf8));
  }
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
  }
  if (*(void **)((longlong)this + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::`27'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::`2'::<lambda_3>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b710

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletalMeshConnectivity,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSkeletalMeshConnectivity,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b750

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletalMeshSkinningData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSkeletalMeshSkinningData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b790

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletalMeshUvMapping,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSkeletalMeshUvMapping,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b7d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FNDIGpuComputeDispatchArgsGenParameters>::_scalar_deleting_destructor_
          (TObject<FNDIGpuComputeDispatchArgsGenParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b800

void * __thiscall
TRDGLambdaPass<FNDIGpuComputeDispatchArgsGenParameters,`FNDIGpuComputeDispatchArgsGenContext::FlushPass'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x210));
  }
  if (*(void **)((longlong)this + 0x1d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1d0));
  }
  DestructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int>
            (*(TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
               **)((longlong)this + 400),*(int *)((longlong)this + 0x198));
  if (*(void **)((longlong)this + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 400));
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
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b8b0

void * __thiscall
NDISpriteRendererInfoLocal::FNDIProxy::_scalar_deleting_destructor_(FNDIProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921b8f0

void * __thiscall
FNDI_SkeletalMesh_GeneratedData::_scalar_deleting_destructor_
          (FNDI_SkeletalMesh_GeneratedData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  DestructItems<TSharedPtr<FSkeletalMeshConnectivity,1>,int>
            ((TSharedPtr<FSkeletalMeshConnectivity,1> *)
             (this->CachedConnectivity).AllocatorInstance.Data,(this->CachedConnectivity).ArrayNum);
  pFVar1 = (this->CachedConnectivity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CachedConnectivityGuard);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CachedConnectivityGuard);
  }
  DestructItems<TSharedPtr<FSkeletalMeshUvMapping,1>,int>
            ((TSharedPtr<FSkeletalMeshUvMapping,1> *)(this->CachedUvMapping).AllocatorInstance.Data,
             (this->CachedUvMapping).ArrayNum);
  pFVar1 = (this->CachedUvMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CachedUvMappingGuard);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CachedUvMappingGuard);
  }
  *(undefined4 *)&(this->CachedSkinningData).field_0x48 = 0;
  pvVar5 = *(void **)&(this->CachedSkinningData).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSharedPtr<FSkeletalMeshSkinningData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedSkinningData);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CachedSkinningDataGuard);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CachedSkinningDataGuard);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ba50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraDataBuffer::_scalar_deleting_destructor_(FNiagaraDataBuffer *this,uint param_1)

{
  ~FNiagaraDataBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921ba90

void * __thiscall
FNiagaraDataInterfaceProxySkeletalMesh::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxySkeletalMesh *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToData);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bb00

void * __thiscall
FNiagaraDataInterfaceProxySparseVolumeTexture::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxySparseVolumeTexture *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InstanceData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISparseVolumeTextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bb70

void * __thiscall
FNiagaraDataInterfaceProxySpline::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxySpline *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bbe0

void * __thiscall
FNiagaraDataInterfaceProxyTexture::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyTexture *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InstanceData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDITextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDITextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDITextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bc50

void * __thiscall
FNiagaraDataInterfaceProxyVectorField::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyVectorField *this,uint param_1)

{
  FRHITexture *this_00;
  
  this_00 = (this->TextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bca0

void * __thiscall
FNiagaraDataInterfaceProxyVirtualTextureSample::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyVirtualTextureSample *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InstanceData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVirtualTextureSampleInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bd10

void * __thiscall
FNiagaraDataInterfaceProxyVolumeTexture::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyVolumeTexture *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InstanceData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bd80

void * __thiscall
FNiagaraDataInterfaceVolumeCacheProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceVolumeCacheProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InstanceData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InstanceData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bdf0

void * __thiscall
FNiagaraSharedObject::_scalar_deleting_destructor_(FNiagaraSharedObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraSharedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921be30

void * __thiscall
FSkeletalMeshConnectivityProxy::_scalar_deleting_destructor_
          (FSkeletalMeshConnectivityProxy *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->AdjacencySrv).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->AdjacencyBuffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->AdjacencyResource)._padding_);
  (this->AdjacencyResource)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bea0

void * __thiscall
FSkeletalMeshGpuDynamicBufferProxy::_scalar_deleting_destructor_
          (FSkeletalMeshGpuDynamicBufferProxy *this,uint param_1)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  FSkeletalBuffer *pFVar3;
  longlong lVar4;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshGpuDynamicBufferProxy__6B_;
  lVar4 = 2;
  pFVar3 = (FSkeletalBuffer *)&this->CurrentBoneBufferId;
  do {
    pFVar1 = pFVar3[-1].SamplingSRV.Reference;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pFVar3[-1].SamplingBuffer.Reference;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar1 = pFVar3[-1].SectionSRV.Reference;
    if (pFVar1 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pFVar3[-1].SectionBuffer.Reference;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = pFVar3 + -1;
  } while (lVar4 != 0);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bf50

void * __thiscall
FSkeletalMeshGpuSpawnStaticBuffers::_scalar_deleting_destructor_
          (FSkeletalMeshGpuSpawnStaticBuffers *this,uint param_1)

{
  ~FSkeletalMeshGpuSpawnStaticBuffers(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bf90

void * __thiscall
FSkeletalMeshSamplingRegionAreaWeightedSampler::_scalar_deleting_destructor_
          (FSkeletalMeshSamplingRegionAreaWeightedSampler *this,uint param_1)

{
  FWeightedRandomSampler::~FWeightedRandomSampler((FWeightedRandomSampler *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921bfd0

void * __thiscall
FStaticMeshUvMapping::_scalar_deleting_destructor_(FStaticMeshUvMapping *this,uint param_1)

{
  FMeshUvMapping::~FMeshUvMapping((FMeshUvMapping *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c010

void * __thiscall
UNiagaraDataInterfaceGrid2D::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceGrid2D *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRWBase__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c070

void * __thiscall
UNiagaraDataInterfaceGrid3D::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceGrid3D *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRWBase__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c0d0

void * __thiscall
UNiagaraDataInterfaceRWBase::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceRWBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceRWBase__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c130

void * __thiscall
UNiagaraDataInterfaceSkeletalMesh::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceSkeletalMesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSkeletalMesh__6B_;
  pFVar1 = (this->FilteredSockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilteredBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SamplingRegions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c200

void * __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceSparseVolumeTexture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSparseVolumeTexture__6B_;
  pFVar1 = (this->SparseVolumeTextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c270

void * __thiscall
UNiagaraDataInterfaceSpline::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceSpline *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpline__6B_;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  pFVar2 = (this->SplineUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c330

void * __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceSpriteRendererInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpriteRendererInfo__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c390

void * __thiscall
UNiagaraDataInterfaceTexture::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceTexture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceTexture__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c400

void * __thiscall
UNiagaraDataInterfaceVector2DCurve::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVector2DCurve *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVector2DCurve__6B_;
  pFVar1 = (this->YCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->YCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->YCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->YCurve)._padding_ = 0;
  pvVar2 = (void *)(this->YCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->YCurve)._padding_);
  pFVar1 = (this->XCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->XCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->XCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->XCurve)._padding_ = 0;
  pvVar2 = (void *)(this->XCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->XCurve)._padding_);
  UNiagaraDataInterfaceCurveBase::~UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x170);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c510

void * __thiscall
UNiagaraDataInterfaceVector4Curve::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVector4Curve *this,uint param_1)

{
  ~UNiagaraDataInterfaceVector4Curve(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c570

void * __thiscall
UNiagaraDataInterfaceVectorCurve::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVectorCurve *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorCurve__6B_;
  pFVar1 = (this->ZCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ZCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ZCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ZCurve)._padding_ = 0;
  pvVar2 = (void *)(this->ZCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ZCurve)._padding_);
  pFVar1 = (this->YCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->YCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->YCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->YCurve)._padding_ = 0;
  pvVar2 = (void *)(this->YCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->YCurve)._padding_);
  pFVar1 = (this->XCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->XCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->XCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->XCurve)._padding_ = 0;
  pvVar2 = (void *)(this->XCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->XCurve)._padding_);
  UNiagaraDataInterfaceCurveBase::~UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1f0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c6d0

void * __thiscall
UNiagaraDataInterfaceVectorField::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVectorField *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorField__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c730

void * __thiscall
UNiagaraDataInterfaceVirtualTextureSample::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVirtualTextureSample *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTextureSample__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c7a0

void * __thiscall
UNiagaraDataInterfaceVolumeCache::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVolumeCache *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeCache__6B_;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVolumeCacheInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14921c840

void * __thiscall
UNiagaraDataInterfaceVolumeTexture::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVolumeTexture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeTexture__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRW @ 14922d090

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRW(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSkeletalMesh @ 14922d0a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSkeletalMesh(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSparseVolumeTexture @ 14922d0b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSparseVolumeTexture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSpline @ 14922d0c0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSpline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSpriteRendererInfo @ 14922d0d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSpriteRendererInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceTexture @ 14922d0e0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceTexture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVector2DCurve @ 14922d0f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVector2DCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVector4Curve @ 14922d100

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVector4Curve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVectorCurve @ 14922d110

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVectorCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVectorField @ 14922d120

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVectorField(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVirtualTextureSample @ 14922d130

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVirtualTextureSample(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVolumeCache @ 14922d140

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVolumeCache(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVolumeTexture @ 14922d150

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVolumeTexture(void)

{
  return;
}

// GetComponentTickGroup @ 1492350d0

ETickingGroup __cdecl NDISkelMeshLocal::GetComponentTickGroup(USkeletalMeshComponent *param_1)

{
  byte bVar1;
  uint uVar2;
  ETickingGroup EVar3;
  ETickingGroup EVar4;
  byte bVar5;
  uint uVar6;
  
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 1);
  bVar1 = (byte)param_1->_padding_;
  if (bVar5 < bVar1) {
    bVar5 = bVar1;
  }
  uVar6 = (uint)bVar5;
  if (param_1->bBlendPhysics != '\0') {
    uVar2 = 3;
    if (3 < uVar6) {
      uVar2 = uVar6;
    }
    EVar4 = TG_LastDemotable;
    if (uVar2 + TG_StartPhysics < TG_LastDemotable) {
      EVar4 = uVar2 + TG_StartPhysics;
    }
    EVar3 = TG_PrePhysics;
    if (EVar4 != TG_PrePhysics) {
      EVar3 = EVar4;
    }
    return EVar3;
  }
  EVar4 = TG_LastDemotable;
  if (uVar6 + TG_StartPhysics < TG_LastDemotable) {
    EVar4 = uVar6 + TG_StartPhysics;
  }
  EVar3 = TG_PrePhysics;
  if (EVar4 != TG_PrePhysics) {
    EVar3 = EVar4;
  }
  return EVar3;
}

// GetProbAliasDWORDSize @ 1492376c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl NDISkelMeshLocal::GetProbAliasDWORDSize(int param_1)

{
  char cVar1;
  UClass *this;
  
  this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  cVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x27;
  if (cVar1 != '\0') {
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return 0;
    }
    return param_1;
  }
  return param_1 * 2;
}

// GetTypeHash @ 149238bc0

uint __cdecl GetTypeHash(FAdjacencyVertexOverlapKey *param_1)

{
  uint uVar1;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0x18,0);
  return uVar1;
}

// NiagaraWarnGpuBufferSize @ 149244170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl NiagaraWarnGpuBufferSize(int param_1,wchar_t *param_2)

{
  if ((((0 < GNiagaraGPUDataWarningSize) && (GNiagaraGPUDataWarningSize < param_1)) &&
      (MaxEncountered < param_1)) && (MaxEncountered = param_1, 2 < (byte)LogNiagara._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return;
  }
  return;
}

// PackProbAlias @ 149244240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
NDISkelMeshLocal::PackProbAlias
          (uint *param_1,FSkeletalMeshAreaWeightedTriangleSampler *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UClass *this;
  int *piVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  int local_res10 [2];
  int local_res18;
  int local_res20 [2];
  int *local_88;
  int *local_80 [9];
  
  uVar11 = param_2->_padding_;
  if ((uVar11 & 1) != 0) {
    uVar11 = (longlong)&param_2->_padding_ + ((longlong)uVar11 >> 0x18);
  }
  iVar2 = (int)param_2->_padding_;
  local_res18 = param_3;
  if ((iVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar10 = (int *)param_2->_padding_;
  if (((ulonglong)piVar10 & 1) != 0) {
    piVar10 = (int *)((longlong)&param_2->_padding_ + ((longlong)piVar10 >> 0x18));
  }
  iVar3 = (int)param_2->_padding_;
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  fVar15 = __real_43ff8000;
  fVar14 = __real_437f0000;
  fVar6 = __real_3f800000;
  cVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x27;
  if (cVar1 == '\0') {
    uVar13 = 0;
    if (0 < (int)param_2->_padding_) {
      lVar12 = uVar11 - (longlong)piVar10;
      do {
        uVar8 = 0;
        if ((int)uVar13 < iVar2) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)((longlong)piVar10 + lVar12);
        uVar9 = 0;
        if ((int)uVar13 < iVar3) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = uVar13 + 1;
        iVar4 = *piVar10;
        piVar10 = piVar10 + 1;
        *param_1 = uVar8;
        param_1[1] = local_res18 + iVar4;
        param_1 = param_1 + 2;
      } while ((int)uVar13 < (int)param_2->_padding_);
    }
  }
  else if (cVar1 == '\x01') {
    uVar13 = 0;
    if (0 < (int)param_2->_padding_) {
      lVar12 = uVar11 - (longlong)piVar10;
      do {
        uVar8 = 0;
        if ((int)uVar13 < iVar2) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar15 = *(float *)((longlong)piVar10 + lVar12);
        uVar8 = 0;
        if ((int)uVar13 < iVar3) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res20[0] = local_res18 + *piVar10;
        if (local_res20[0] < 0x1000000) {
LAB_14924459c:
          if (fVar6 <= fVar15) {
            fVar15 = fVar6;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          uVar8 = (int)(fVar15 * fVar14) & 0xffU | local_res20[0] << 8;
        }
        else {
          local_80[0] = local_res20;
          bVar7 = `NDISkelMeshLocal::PackProbAlias'::__l11::<lambda_1>::operator()(local_80);
          if (bVar7) goto LAB_14924459c;
          uVar8 = 0;
        }
        *param_1 = uVar8;
        uVar13 = uVar13 + 1;
        param_1 = param_1 + 1;
        piVar10 = piVar10 + 1;
      } while ((int)uVar13 < (int)param_2->_padding_);
    }
  }
  else if (cVar1 == '\x02') {
    uVar13 = 0;
    if (0 < (int)param_2->_padding_) {
      lVar12 = uVar11 - (longlong)piVar10;
      do {
        uVar8 = 0;
        if ((int)uVar13 < iVar2) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar14 = *(float *)((longlong)piVar10 + lVar12);
        uVar8 = 0;
        if ((int)uVar13 < iVar3) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res10[0] = local_res18 + *piVar10;
        if (local_res10[0] < 0x800000) {
LAB_149244478:
          if (fVar6 <= fVar14) {
            fVar14 = fVar6;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          uVar8 = (int)(fVar14 * fVar15) & 0x1ffU | local_res10[0] << 9;
        }
        else {
          local_88 = local_res10;
          bVar7 = `NDISkelMeshLocal::PackProbAlias'::__l19::<lambda_2>::operator()(&local_88);
          if (bVar7) goto LAB_149244478;
          uVar8 = 0;
        }
        *param_1 = uVar8;
        uVar13 = uVar13 + 1;
        param_1 = param_1 + 1;
        piVar10 = piVar10 + 1;
      } while ((int)uVar13 < (int)param_2->_padding_);
    }
  }
  else {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister @ 149255430

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton,
               UNiagaraDataInterfaceGrid2D::StaticRegisterNativesUNiagaraDataInterfaceGrid2D,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister @ 1492554f0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton,
               UNiagaraDataInterfaceGrid3D::StaticRegisterNativesUNiagaraDataInterfaceGrid3D,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister @ 1492555b0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRWBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton,
               UNiagaraDataInterfaceRWBase::StaticRegisterNativesUNiagaraDataInterfaceRWBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRWBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRWBase>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister @ 149255670

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSkeletalMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.InnerSingleton,
               UNiagaraDataInterfaceSkeletalMesh::
               StaticRegisterNativesUNiagaraDataInterfaceSkeletalMesh,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSkeletalMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSkeletalMesh>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_NoRegister @ 149255730

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSparseVolumeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSparseVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton,
               UNiagaraDataInterfaceSparseVolumeTexture::
               StaticRegisterNativesUNiagaraDataInterfaceSparseVolumeTexture,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSparseVolumeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSpline_NoRegister @ 1492557f0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSpline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSpline",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton,
               UNiagaraDataInterfaceSpline::StaticRegisterNativesUNiagaraDataInterfaceSpline,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceSpline>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpline>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_NoRegister @ 1492558b0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceSpriteRendererInfo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSpriteRendererInfo",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton,
               UNiagaraDataInterfaceSpriteRendererInfo::
               StaticRegisterNativesUNiagaraDataInterfaceSpriteRendererInfo,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSpriteRendererInfo>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpriteRendererInfo>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister @ 149255970

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton,
               UNiagaraDataInterfaceTexture::StaticRegisterNativesUNiagaraDataInterfaceTexture,0x60,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_NoRegister @ 149255a30

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVector2DCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton,
               UNiagaraDataInterfaceVector2DCurve::
               StaticRegisterNativesUNiagaraDataInterfaceVector2DCurve,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVector2DCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector2DCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_NoRegister @ 149255af0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVector4Curve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton,
               UNiagaraDataInterfaceVector4Curve::
               StaticRegisterNativesUNiagaraDataInterfaceVector4Curve,0x270,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVector4Curve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVector4Curve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVectorCurve_NoRegister @ 149255bb0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVectorCurve_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVectorCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton,
               UNiagaraDataInterfaceVectorCurve::
               StaticRegisterNativesUNiagaraDataInterfaceVectorCurve,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVectorCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorCurve.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister @ 149255c70

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVectorField",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton,
               UNiagaraDataInterfaceVectorField::
               StaticRegisterNativesUNiagaraDataInterfaceVectorField,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVectorField>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorField>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVirtualTextureSample_NoRegister @ 149255d30

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVirtualTextureSample_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVirtualTextureSample",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton,
               UNiagaraDataInterfaceVirtualTextureSample::
               StaticRegisterNativesUNiagaraDataInterfaceVirtualTextureSample,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceVirtualTextureSample>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVirtualTextureSample>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_NoRegister @ 149255df0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVolumeCache",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton,
               UNiagaraDataInterfaceVolumeCache::
               StaticRegisterNativesUNiagaraDataInterfaceVolumeCache,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVolumeCache>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeCache>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister @ 149255eb0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton,
               UNiagaraDataInterfaceVolumeTexture::
               StaticRegisterNativesUNiagaraDataInterfaceVolumeTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT @ 149255f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceSplineLUT.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceSplineLUT.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDataInterfaceSplineLUT_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceSplineLUT.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceSplineLUT.InnerSingleton;
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

// CellSizeName'' @ 150411b70

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::CellSizeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceRWBase::CellSizeName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceRWBase::CellSizeName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceRWBase::CellSizeName.Data.AllocatorInstance.Data !=
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

// Channels'' @ 150411b90

void __cdecl
`dynamic_atexit_destructor_for_'FNiagaraDataInterfaceRWAttributeHelper::Channels__(void)

{
  DestructItems<FString,int>
            ((FString *)FNiagaraDataInterfaceRWAttributeHelper::Channels.AllocatorInstance.Data,
             FNiagaraDataInterfaceRWAttributeHelper::Channels.ArrayNum);
  if (FNiagaraDataInterfaceRWAttributeHelper::Channels.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FNiagaraDataInterfaceRWAttributeHelper::Channels.AllocatorInstance.Data);
    return;
  }
  return;
}

// CritSec'' @ 150411bd0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraSharedObject::CritSec__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150411bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FNiagaraSharedObject::CritSec);
  return;
}

// DeferredDeletionList'' @ 150411bf0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraSharedObject::DeferredDeletionList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data;
  if (FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FNiagaraSharedObject::DeferredDeletionList.AllocatorInstance.Data !=
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

// DummyCompiledData'' @ 150411c10

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraDataSetCompiledData::DummyCompiledData__(void)

{
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.AllocatorInstance.Data,
             FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.ArrayNum);
  if (FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FNiagaraDataSetCompiledData::DummyCompiledData.VariableLayouts.AllocatorInstance.
                  Data);
  }
  if (FNiagaraDataSetCompiledData::DummyCompiledData.Variables.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FNiagaraDataSetCompiledData::DummyCompiledData.Variables.AllocatorInstance.Data);
    return;
  }
  return;
}

// NumAttributesName'' @ 150411c60

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::NumAttributesName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceRWBase::NumAttributesName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceRWBase::NumAttributesName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceRWBase::NumAttributesName.Data.AllocatorInstance.Data !=
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

// NumCellsName'' @ 150411c80

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::NumCellsName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceRWBase::NumCellsName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceRWBase::NumCellsName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceRWBase::NumCellsName.Data.AllocatorInstance.Data !=
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

// NumNamedAttributesName'' @ 150411ca0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::NumNamedAttributesName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceRWBase::NumNamedAttributesName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceRWBase::NumNamedAttributesName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceRWBase::NumNamedAttributesName.Data.AllocatorInstance.Data !=
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

// PositionCurve'' @ 150411cc0

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

// RotationCurve'' @ 150411ce0

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

// ScaleCurve'' @ 150411d00

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

// StaticResource'' @ 150411d20

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

// StaticResource'' @ 150411da0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150411e20

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_0A__00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150411ea0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_00_0A__0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150411f20

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150411fa0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150412020

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__0A__00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1504120a0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__00_0A__0A__0A__0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
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
             &TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 150412120

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

// UnitToUVName'' @ 1504121a0

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::UnitToUVName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceRWBase::UnitToUVName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceRWBase::UnitToUVName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceRWBase::UnitToUVName.Data.AllocatorInstance.Data !=
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

// WorldBBoxSizeName'' @ 1504121c0

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraDataInterfaceRWBase::WorldBBoxSizeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraDataInterfaceRWBase::WorldBBoxSizeName.Data.AllocatorInstance.Data;
  if (UNiagaraDataInterfaceRWBase::WorldBBoxSizeName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraDataInterfaceRWBase::WorldBBoxSizeName.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarGbNiagaraDISplineDisableLUTs'' @ 1504121e0

void __cdecl
NDISplineLocal::_dynamic_atexit_destructor_for__CVarGbNiagaraDISplineDisableLUTs__(void)

{
  CVarGbNiagaraDISplineDisableLUTs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGbNiagaraDISplineDisableLUTs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGPUDataBufferChunkSize'' @ 150412200

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGPUDataBufferChunkSize__(void)

{
  CVarNiagaraGPUDataBufferChunkSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGPUDataBufferChunkSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGPUDataBufferShrinkFactor'' @ 150412220

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGPUDataBufferShrinkFactor__(void)

{
  CVarNiagaraGPUDataBufferShrinkFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGPUDataBufferShrinkFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGPUDataWarningSize'' @ 150412240

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGPUDataWarningSize__(void)

{
  CVarNiagaraGPUDataWarningSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraGPUDataWarningSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraReleaseBuffersOnReset'' @ 150412260

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraReleaseBuffersOnReset__(void)

{
  CVarNiagaraReleaseBuffersOnReset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraReleaseBuffersOnReset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRenderBufferShrinkFactor'' @ 150412280

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRenderBufferShrinkFactor__(void)

{
  CVarNiagaraRenderBufferShrinkFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRenderBufferShrinkFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraVectorFieldUseIspc'' @ 1504122a0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraVectorFieldUseIspc__(void)

{
  CVarNiagaraVectorFieldUseIspc._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraVectorFieldUseIspc);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDataBlockSize'' @ 1504122c0

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDataBlockSize__(void)

{
  CVarRenderDataBlockSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDataBlockSize);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1504122e0

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

// `dynamic_atexit_destructor_for_'Default'' @ 150412310

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

// `dynamic_atexit_destructor_for_'Default'' @ 150412340

void __cdecl
`InternalGetDefaultObject<TResourceArray<int,0>_>'::__l3::_dynamic_atexit_destructor_for__Default__
          (void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<int,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150412370

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

// `dynamic_atexit_destructor_for_'Desc'' @ 1504123a0

void __cdecl
``FNiagaraDataSet::AllocateGPUFreeIDs'::__l11::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504123a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 1504123c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'Sep'' @ 1504123e0

void __cdecl `FNiagaraDataBuffer::Dump'::__l2::_dynamic_atexit_destructor_for__Sep__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Sep.Data.AllocatorInstance.Data;
  if (Sep.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Sep.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150412400

void __cdecl
`FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNDIGpuComputeDispatchArgsGenParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150412420

void __cdecl
`NDISkelMeshLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDISkelMeshLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150412440

void __cdecl
`NDISplineLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDISplineLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150412460

void __cdecl
`NDISpriteRendererInfoLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDISpriteRendererInfoLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150412480

void __cdecl
`UNiagaraDataInterfaceSparseVolumeTexture::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceSparseVolumeTexture::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504124a0

void __cdecl
`UNiagaraDataInterfaceTexture::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceTexture::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504124c0

void __cdecl
`UNiagaraDataInterfaceVectorField::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceVectorField::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504124e0

void __cdecl
`UNiagaraDataInterfaceVirtualTextureSample::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceVirtualTextureSample::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150412500

void __cdecl
`UNiagaraDataInterfaceVolumeCache::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceVolumeCache::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150412520

void __cdecl
`UNiagaraDataInterfaceVolumeTexture::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceVolumeTexture::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// operator() @ 15053eb70

bool __thiscall `NDISkelMeshLocal::PackProbAlias'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4024959817545154397>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4024959817545154397>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053ebc0

bool __thiscall `NDISkelMeshLocal::PackProbAlias'::__l19::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4024959817545154379>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4024959817545154379>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

