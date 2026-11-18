// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 629

// ExposedRTVar'' @ 14117dc30

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRenderTarget2D::ExposedRTVar__(void)

{
  UNiagaraDataInterfaceRenderTarget2D::ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&UNiagaraDataInterfaceRenderTarget2D::ExposedRTVar.TypeDefHandle,
                  &FNiagaraTypeDefinition::Vec4Def);
  return;
}

// ExposedRTVar'' @ 14117dc60

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceRenderTarget2DArray::ExposedRTVar__(void)

{
  UNiagaraDataInterfaceRenderTarget2DArray::ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&UNiagaraDataInterfaceRenderTarget2DArray::ExposedRTVar.TypeDefHandle,
                  &FNiagaraTypeDefinition::Vec4Def);
  return;
}

// ExposedRTVar'' @ 14117dc90

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRenderTargetCube::ExposedRTVar__(void)

{
  UNiagaraDataInterfaceRenderTargetCube::ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&UNiagaraDataInterfaceRenderTargetCube::ExposedRTVar.TypeDefHandle,
                  &FNiagaraTypeDefinition::Vec4Def);
  return;
}

// ExposedRTVar'' @ 14117dcc0

void __cdecl `dynamic_initializer_for_'UNiagaraDataInterfaceRenderTargetVolume::ExposedRTVar__(void)

{
  UNiagaraDataInterfaceRenderTargetVolume::ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&UNiagaraDataInterfaceRenderTargetVolume::ExposedRTVar.TypeDefHandle,
                  &FNiagaraTypeDefinition::Vec4Def);
  return;
}

// SetNumCellsFunctionName'' @ 14117dcf0

void __cdecl
`dynamic_initializer_for_'UNiagaraDataInterfaceNeighborGrid3D::SetNumCellsFunctionName__(void)

{
  ::FName::FName(&UNiagaraDataInterfaceNeighborGrid3D::SetNumCellsFunctionName,"SetNumCells");
  return;
}

// StaticResource'' @ 14117dd10

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

// StaticResource'' @ 14117deb0

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

// `dynamic_initializer_for_'AddParticleFunctionName'' @ 14117e050

void __cdecl _dynamic_initializer_for__AddParticleFunctionName__(void)

{
  FName::FName(&AddParticleFunctionName,"AddParticle");
  return;
}

// `dynamic_initializer_for_'CVarMaxNiagaraNeighborGridCells'' @ 14117e070

void __cdecl _dynamic_initializer_for__CVarMaxNiagaraNeighborGridCells__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxNiagaraNeighborGridCells,L"fx.MaxNiagaraNeighborGridCells",
             &GMaxNiagaraNeighborGridCells,
             L"The max number of supported grid cells in Niagara. Overflowing this threshold will cause the sim to warn and fail. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxNiagaraNeighborGridCells__);
  return;
}

// `dynamic_initializer_for_'CVarMaxNiagaraRasterizationGridCells'' @ 14117e0c0

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__CVarMaxNiagaraRasterizationGridCells__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxNiagaraRasterizationGridCells,L"fx.MaxNiagaraRasterizationGridCells",
             &GMaxNiagaraRasterizationGridCells,
             L"The max number of supported grid cells in Niagara. Overflowing this threshold will cause the sim to warn and fail. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxNiagaraRasterizationGridCells__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraParticleReadIgnoreUnsafeReads'' @ 14117e110

void __cdecl _dynamic_initializer_for__CVarNiagaraParticleReadIgnoreUnsafeReads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraParticleReadIgnoreUnsafeReads,L"fx.Niagara.ParticleRead.IgnoreUnsafeReads",
             &GNiagaraParticleReadIgnoreUnsafeReads,
             L"When enabled we will allow unsafe reads to compile with a warning, however the read result will be invalid."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraParticleReadIgnoreUnsafeReads__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRenderTargetIgnoreCookedOut'' @ 14117e160

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
_dynamic_initializer_for__CVarNiagaraRenderTargetIgnoreCookedOut__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRenderTargetIgnoreCookedOut,L"fx.Niagara.RenderTarget.IgnoreCookedOut",
             &GIgnoreCookedOut,
             L"Ignores create render targets for cooked out emitter, i.e. ones that are not used by any GPU emitter."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRenderTargetIgnoreCookedOut__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRenderTargetResolutionMultiplier'' @ 14117e1b0

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
_dynamic_initializer_for__CVarNiagaraRenderTargetResolutionMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRenderTargetResolutionMultiplier,
             L"fx.Niagara.RenderTarget.ResolutionMultiplier",&GResolutionMultiplier,
             L"Optional global modifier to Niagara render target resolution.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRenderTargetResolutionMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarSimCacheCompressed'' @ 14117e200

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__CVarSimCacheCompressed__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimCacheCompressed,L"fx.Niagara.RenderTarget2D.SimCacheCompressed",
             &GSimCacheCompressed,L"When enabled compression is used for the sim cache data.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSimCacheCompressed__);
  return;
}

// `dynamic_initializer_for_'CVarSimCacheCompressed'' @ 14117e250

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__CVarSimCacheCompressed__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimCacheCompressed,L"fx.Niagara.RenderTargetVolume.SimCacheCompressed",
             &GSimCacheCompressed,L"When enabled compression is used for the sim cache data.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSimCacheCompressed__);
  return;
}

// `dynamic_initializer_for_'CVarSimCacheDataStorageMode'' @ 14117e2a0

void __cdecl
NDIRenderTargetVolumeLocal::_dynamic_initializer_for__CVarSimCacheDataStorageMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimCacheDataStorageMode,L"fx.Niagara.RenderTargetVolume.SimCacheDataStorageMode",
             &GSimCacheDataStorageMode,
             L"Backing storage type for Volume RT sim cache data.  0 uses raw data, 1 uses OpenVDB, 2 uses SVT"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSimCacheDataStorageMode__);
  return;
}

// `dynamic_initializer_for_'CVarSimCacheEnabled'' @ 14117e2f0

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__CVarSimCacheEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimCacheEnabled,L"fx.Niagara.RenderTargetVolume.SimCacheEnabled",&GSimCacheEnabled
             ,L"When enabled we can write data into the simulation cache.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSimCacheEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarSimCacheUseOpenVDBFloatGrids'' @ 14117e340

void __cdecl
NDIRenderTargetVolumeLocal::_dynamic_initializer_for__CVarSimCacheUseOpenVDBFloatGrids__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimCacheUseOpenVDBFloatGrids,
             L"fx.Niagara.RenderTargetVolume.SimCacheUseOpenVDBFloatGrids",
             &GSimCacheUseOpenVDBFloatGrids,L"Use OpenVDB float grids as output.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSimCacheUseOpenVDBFloatGrids__);
  return;
}

// `dynamic_initializer_for_'CVarSyncPlatformSet'' @ 14117e390

void __cdecl NDIPlatformSetPrivate::_dynamic_initializer_for__CVarSyncPlatformSet__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = RefreshPlatformSet;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarSyncPlatformSet._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarSyncPlatformSet.Command = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58
  ;
  CVarSyncPlatformSet.Handle.Handle.ID = (FDelegateHandle)0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  CVarSyncPlatformSet.Handle.Handle.ID = (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(_dynamic_atexit_destructor_for__CVarSyncPlatformSet__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper271'' @ 14117e520

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper271__(void)

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
            (&DelayedAutoRegisterHelper271,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'Deprecated_GetCameraOcclusionCircleName'' @ 14117e580

void __cdecl
NDIOcclusionImpl::_dynamic_initializer_for__Deprecated_GetCameraOcclusionCircleName__(void)

{
  ::FName::FName(&Deprecated_GetCameraOcclusionCircleName,L"QueryOcclusionFactorWithCircleGPU");
  return;
}

// `dynamic_initializer_for_'Deprecated_GetCameraOcclusionRectangleName'' @ 14117e5a0

void __cdecl
NDIOcclusionImpl::_dynamic_initializer_for__Deprecated_GetCameraOcclusionRectangleName__(void)

{
  ::FName::FName(&Deprecated_GetCameraOcclusionRectangleName,L"QueryOcclusionFactorWithRectangleGPU"
                );
  return;
}

// `dynamic_initializer_for_'Deprecated_GetValueFunctionName'' @ 14117e5c0

void __cdecl
NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__Deprecated_GetValueFunctionName__(void)

{
  ::FName::FName(&Deprecated_GetValueFunctionName,"GetRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'Deprecated_GetValueFunctionName'' @ 14117e5e0

void __cdecl
NDIRenderTarget2DLocal::_dynamic_initializer_for__Deprecated_GetValueFunctionName__(void)

{
  ::FName::FName(&Deprecated_GetValueFunctionName,"GetRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'Deprecated_GetValueFunctionName'' @ 14117e600

void __cdecl
NDIRenderTargetVolumeLocal::_dynamic_initializer_for__Deprecated_GetValueFunctionName__(void)

{
  ::FName::FName(&Deprecated_GetValueFunctionName,"GetRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'ExecToIndexName'' @ 14117e620

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__ExecToIndexName__(void)

{
  ::FName::FName(&ExecToIndexName,"ExecToIndex");
  return;
}

// `dynamic_initializer_for_'ExecToIndexName'' @ 14117e640

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__ExecToIndexName__(void)

{
  ::FName::FName(&ExecToIndexName,"ExecToIndex");
  return;
}

// `dynamic_initializer_for_'ExecToIndexName'' @ 14117e660

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__ExecToIndexName__(void)

{
  ::FName::FName(&ExecToIndexName,"ExecToIndex");
  return;
}

// `dynamic_initializer_for_'ExecToIndexName'' @ 14117e680

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__ExecToIndexName__(void)

{
  ::FName::FName(&ExecToIndexName,"ExecToIndex");
  return;
}

// `dynamic_initializer_for_'ExecToUnitName'' @ 14117e6a0

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__ExecToUnitName__(void)

{
  ::FName::FName(&ExecToUnitName,"ExecToUnit");
  return;
}

// `dynamic_initializer_for_'ExecToUnitName'' @ 14117e6c0

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__ExecToUnitName__(void)

{
  ::FName::FName(&ExecToUnitName,"ExecToUnit");
  return;
}

// `dynamic_initializer_for_'ExecToUnitName'' @ 14117e6e0

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__ExecToUnitName__(void)

{
  ::FName::FName(&ExecToUnitName,"ExecToUnit");
  return;
}

// `dynamic_initializer_for_'ExecToUnitName'' @ 14117e700

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__ExecToUnitName__(void)

{
  ::FName::FName(&ExecToUnitName,"ExecToUnit");
  return;
}

// `dynamic_initializer_for_'FindActorsName'' @ 14117e720

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__FindActorsName__(void)

{
  ::FName::FName(&FindActorsName,L"FindActors");
  return;
}

// `dynamic_initializer_for_'FloatToIntFunctionName'' @ 14117e740

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__FloatToIntFunctionName__(void)

{
  ::FName::FName(&FloatToIntFunctionName,"FloatToInt");
  return;
}

// `dynamic_initializer_for_'GCommandNiagaraRenderTargetOverrideFormat'' @ 14117e760

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
_dynamic_initializer_for__GCommandNiagaraRenderTargetOverrideFormat__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDataInterfaceRenderTargetCommon::<lambda_25>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
                     (IConsoleManager::Singleton,L"fx.Niagara.RenderTarget.OverrideFormat",
                      L"Optional global format override for all Niagara render targets",&local_58,0)
  ;
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GCommandNiagaraRenderTargetOverrideFormat,pIVar5);
  GCommandNiagaraRenderTargetOverrideFormat._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GCommandNiagaraRenderTargetOverrideFormat__);
  return;
}

// `dynamic_initializer_for_'GetBoolByIDFunctionName'' @ 14117e8f0

void __cdecl _dynamic_initializer_for__GetBoolByIDFunctionName__(void)

{
  FName::FName(&GetBoolByIDFunctionName,"Get Bool By ID");
  return;
}

// `dynamic_initializer_for_'GetBoolByIndexFunctionName'' @ 14117e910

void __cdecl _dynamic_initializer_for__GetBoolByIndexFunctionName__(void)

{
  FName::FName(&GetBoolByIndexFunctionName,"Get Bool By Index");
  return;
}

// `dynamic_initializer_for_'GetBoxElementsStartIndexName'' @ 14117e930

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetBoxElementsStartIndexName__(void)

{
  ::FName::FName(&GetBoxElementsStartIndexName,L"GetBoxElementsStartIndex");
  return;
}

// `dynamic_initializer_for_'GetBoxSizeName'' @ 14117e950

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetBoxSizeName__(void)

{
  ::FName::FName(&GetBoxSizeName,L"GetBoxSize");
  return;
}

// `dynamic_initializer_for_'GetCameraOcclusionRectangleName'' @ 14117e970

void __cdecl NDIOcclusionImpl::_dynamic_initializer_for__GetCameraOcclusionRectangleName__(void)

{
  ::FName::FName(&GetCameraOcclusionRectangleName,L"QueryOcclusionFactorWithRectangle");
  return;
}

// `dynamic_initializer_for_'GetCapsuleElementsStartIndexName'' @ 14117e990

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetCapsuleElementsStartIndexName__(void)

{
  ::FName::FName(&GetCapsuleElementsStartIndexName,L"GetCapsuleElementsStartIndex");
  return;
}

// `dynamic_initializer_for_'GetCapsuleSizeName'' @ 14117e9b0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetCapsuleSizeName__(void)

{
  ::FName::FName(&GetCapsuleSizeName,L"GetCapsuleSize");
  return;
}

// `dynamic_initializer_for_'GetClosestDistanceName'' @ 14117e9d0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetClosestDistanceName__(void)

{
  ::FName::FName(&GetClosestDistanceName,L"GetClosestDistance");
  return;
}

// `dynamic_initializer_for_'GetClosestElementName'' @ 14117e9f0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetClosestElementName__(void)

{
  ::FName::FName(&GetClosestElementName,L"GetClosestElement");
  return;
}

// `dynamic_initializer_for_'GetClosestPointMeshDistanceFieldAccurateName'' @ 14117ea10

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetClosestPointMeshDistanceFieldAccurateName__
          (void)

{
  ::FName::FName(&GetClosestPointMeshDistanceFieldAccurateName,
                 L"GetClosestPointMeshDistanceFieldAccurate");
  return;
}

// `dynamic_initializer_for_'GetClosestPointMeshDistanceFieldName'' @ 14117ea30

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetClosestPointMeshDistanceFieldName__(void)

{
  ::FName::FName(&GetClosestPointMeshDistanceFieldName,L"GetClosestPointMeshDistanceField");
  return;
}

// `dynamic_initializer_for_'GetClosestPointMeshDistanceFieldNoNormalName'' @ 14117ea50

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetClosestPointMeshDistanceFieldNoNormalName__
          (void)

{
  ::FName::FName(&GetClosestPointMeshDistanceFieldNoNormalName,
                 L"GetClosestPointMeshDistanceFieldNoNormal");
  return;
}

// `dynamic_initializer_for_'GetClosestPointName'' @ 14117ea70

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetClosestPointName__(void)

{
  ::FName::FName(&GetClosestPointName,L"GetClosestPoint");
  return;
}

// `dynamic_initializer_for_'GetClosestPointSimpleName'' @ 14117ea90

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetClosestPointSimpleName__(void)

{
  ::FName::FName(&GetClosestPointSimpleName,L"GetClosestPointSimple");
  return;
}

// `dynamic_initializer_for_'GetColorByIDFunctionName'' @ 14117eab0

void __cdecl _dynamic_initializer_for__GetColorByIDFunctionName__(void)

{
  FName::FName(&GetColorByIDFunctionName,"Get Color By ID");
  return;
}

// `dynamic_initializer_for_'GetColorByIndexFunctionName'' @ 14117ead0

void __cdecl _dynamic_initializer_for__GetColorByIndexFunctionName__(void)

{
  FName::FName(&GetColorByIndexFunctionName,"Get Color By Index");
  return;
}

// `dynamic_initializer_for_'GetElementDistanceName'' @ 14117eaf0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetElementDistanceName__(void)

{
  ::FName::FName(&GetElementDistanceName,L"GetElementDistance");
  return;
}

// `dynamic_initializer_for_'GetElementPointMeshDistanceFieldNoNormalName'' @ 14117eb10

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetElementPointMeshDistanceFieldNoNormalName__
          (void)

{
  ::FName::FName(&GetElementPointMeshDistanceFieldNoNormalName,
                 L"GetElementPointMeshDistanceFieldNoNormal");
  return;
}

// `dynamic_initializer_for_'GetElementPointName'' @ 14117eb30

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetElementPointName__(void)

{
  ::FName::FName(&GetElementPointName,L"GetElementPoint");
  return;
}

// `dynamic_initializer_for_'GetFloatByIDFunctionName'' @ 14117eb50

void __cdecl _dynamic_initializer_for__GetFloatByIDFunctionName__(void)

{
  FName::FName(&GetFloatByIDFunctionName,"Get Float By ID");
  return;
}

// `dynamic_initializer_for_'GetFloatByIndexFunctionName'' @ 14117eb70

void __cdecl _dynamic_initializer_for__GetFloatByIndexFunctionName__(void)

{
  FName::FName(&GetFloatByIndexFunctionName,"Get Float By Index");
  return;
}

// `dynamic_initializer_for_'GetFloatValueFunctionName'' @ 14117eb90

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__GetFloatValueFunctionName__(void)

{
  ::FName::FName(&GetFloatValueFunctionName,"GetFloatGridValue");
  return;
}

// `dynamic_initializer_for_'GetIDAtSpawnIndexFunctionName'' @ 14117ebb0

void __cdecl _dynamic_initializer_for__GetIDAtSpawnIndexFunctionName__(void)

{
  FName::FName(&GetIDAtSpawnIndexFunctionName,"Get ID At Spawn Index");
  return;
}

// `dynamic_initializer_for_'GetIDByIDFunctionName'' @ 14117ebd0

void __cdecl _dynamic_initializer_for__GetIDByIDFunctionName__(void)

{
  FName::FName(&GetIDByIDFunctionName,"Get ID By ID");
  return;
}

// `dynamic_initializer_for_'GetIDByIndexFunctionName'' @ 14117ebf0

void __cdecl _dynamic_initializer_for__GetIDByIndexFunctionName__(void)

{
  FName::FName(&GetIDByIndexFunctionName,"Get ID By Index");
  return;
}

// `dynamic_initializer_for_'GetIntByIDFunctionName'' @ 14117ec10

void __cdecl _dynamic_initializer_for__GetIntByIDFunctionName__(void)

{
  FName::FName(&GetIntByIDFunctionName,"Get Int By ID");
  return;
}

// `dynamic_initializer_for_'GetIntByIndexFunctionName'' @ 14117ec30

void __cdecl _dynamic_initializer_for__GetIntByIndexFunctionName__(void)

{
  FName::FName(&GetIntByIndexFunctionName,"Get Int By Index");
  return;
}

// `dynamic_initializer_for_'GetIntValueFunctionName'' @ 14117ec50

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__GetIntValueFunctionName__(void)

{
  ::FName::FName(&GetIntValueFunctionName,"GetIntGridValue");
  return;
}

// `dynamic_initializer_for_'GetLocalSpaceName'' @ 14117ec70

void __cdecl _dynamic_initializer_for__GetLocalSpaceName__(void)

{
  FName::FName(&GetLocalSpaceName,"GetLocalSpace");
  return;
}

// `dynamic_initializer_for_'GetMaxEncodedDistanceMeshDistanceFieldName'' @ 14117ec90

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetMaxEncodedDistanceMeshDistanceFieldName__
          (void)

{
  ::FName::FName(&GetMaxEncodedDistanceMeshDistanceFieldName,
                 L"GetMaxEncodedDistanceMeshDistanceField");
  return;
}

// `dynamic_initializer_for_'GetMeshLocalBoundsName'' @ 14117ecb0

void __cdecl NDIMeshRendererInfoInternal::_dynamic_initializer_for__GetMeshLocalBoundsName__(void)

{
  ::FName::FName(&GetMeshLocalBoundsName,"GetMeshLocalBounds");
  return;
}

// `dynamic_initializer_for_'GetNumBoxesName'' @ 14117ecd0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetNumBoxesName__(void)

{
  ::FName::FName(&GetNumBoxesName,L"GetNumBoxes");
  return;
}

// `dynamic_initializer_for_'GetNumCapsulesName'' @ 14117ecf0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetNumCapsulesName__(void)

{
  ::FName::FName(&GetNumCapsulesName,L"GetNumCapsules");
  return;
}

// `dynamic_initializer_for_'GetNumElementsName'' @ 14117ed10

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetNumElementsName__(void)

{
  ::FName::FName(&GetNumElementsName,L"GetNumElements");
  return;
}

// `dynamic_initializer_for_'GetNumMeshesName'' @ 14117ed30

void __cdecl NDIMeshRendererInfoInternal::_dynamic_initializer_for__GetNumMeshesName__(void)

{
  ::FName::FName(&GetNumMeshesName,"GetNumMeshes");
  return;
}

// `dynamic_initializer_for_'GetNumMipLevelsName'' @ 14117ed50

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__GetNumMipLevelsName__(void)

{
  ::FName::FName(&GetNumMipLevelsName,"GetNumMipLevels");
  return;
}

// `dynamic_initializer_for_'GetNumMipLevelsName'' @ 14117ed70

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__GetNumMipLevelsName__(void)

{
  ::FName::FName(&GetNumMipLevelsName,"GetNumMipLevels");
  return;
}

// `dynamic_initializer_for_'GetNumMipLevelsName'' @ 14117ed90

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__GetNumMipLevelsName__(void)

{
  ::FName::FName(&GetNumMipLevelsName,"GetNumMipLevels");
  return;
}

// `dynamic_initializer_for_'GetNumMipLevelsName'' @ 14117edb0

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__GetNumMipLevelsName__(void)

{
  ::FName::FName(&GetNumMipLevelsName,"GetNumMipLevels");
  return;
}

// `dynamic_initializer_for_'GetNumParticlesFunctionName'' @ 14117edd0

void __cdecl _dynamic_initializer_for__GetNumParticlesFunctionName__(void)

{
  FName::FName(&GetNumParticlesFunctionName,"Get Num Particles");
  return;
}

// `dynamic_initializer_for_'GetNumSpawnedParticlesFunctionName'' @ 14117edf0

void __cdecl _dynamic_initializer_for__GetNumSpawnedParticlesFunctionName__(void)

{
  FName::FName(&GetNumSpawnedParticlesFunctionName,"Get Num Spawned Particles");
  return;
}

// `dynamic_initializer_for_'GetNumSpheresName'' @ 14117ee10

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetNumSpheresName__(void)

{
  ::FName::FName(&GetNumSpheresName,L"GetNumSpheres");
  return;
}

// `dynamic_initializer_for_'GetParticleIndexFromIDTableName'' @ 14117ee30

void __cdecl _dynamic_initializer_for__GetParticleIndexFromIDTableName__(void)

{
  FName::FName(&GetParticleIndexFromIDTableName,"Get Particle Index From ID Table");
  return;
}

// `dynamic_initializer_for_'GetParticleIndexFunctionName'' @ 14117ee50

void __cdecl _dynamic_initializer_for__GetParticleIndexFunctionName__(void)

{
  FName::FName(&GetParticleIndexFunctionName,"Get Particle Index");
  return;
}

// `dynamic_initializer_for_'GetParticleNeighborCountFunctionName'' @ 14117ee70

void __cdecl _dynamic_initializer_for__GetParticleNeighborCountFunctionName__(void)

{
  FName::FName(&GetParticleNeighborCountFunctionName,"GetParticleNeighborCount");
  return;
}

// `dynamic_initializer_for_'GetParticleNeighborFunctionName'' @ 14117ee90

void __cdecl _dynamic_initializer_for__GetParticleNeighborFunctionName__(void)

{
  FName::FName(&GetParticleNeighborFunctionName,"GetParticleNeighbor");
  return;
}

// `dynamic_initializer_for_'GetPositionByIDFunctionName'' @ 14117eeb0

void __cdecl _dynamic_initializer_for__GetPositionByIDFunctionName__(void)

{
  FName::FName(&GetPositionByIDFunctionName,"Get Position By ID");
  return;
}

// `dynamic_initializer_for_'GetPositionByIndexFunctionName'' @ 14117eed0

void __cdecl _dynamic_initializer_for__GetPositionByIndexFunctionName__(void)

{
  FName::FName(&GetPositionByIndexFunctionName,"Get Position By Index");
  return;
}

// `dynamic_initializer_for_'GetQuatByIDFunctionName'' @ 14117eef0

void __cdecl _dynamic_initializer_for__GetQuatByIDFunctionName__(void)

{
  FName::FName(&GetQuatByIDFunctionName,"Get Quaternion By ID");
  return;
}

// `dynamic_initializer_for_'GetQuatByIndexFunctionName'' @ 14117ef10

void __cdecl _dynamic_initializer_for__GetQuatByIndexFunctionName__(void)

{
  FName::FName(&GetQuatByIndexFunctionName,"Get Quaternion By Index");
  return;
}

// `dynamic_initializer_for_'GetSizeFunctionName'' @ 14117ef30

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__GetSizeFunctionName__(void)

{
  ::FName::FName(&GetSizeFunctionName,"GetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'GetSizeFunctionName'' @ 14117ef50

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__GetSizeFunctionName__(void)

{
  ::FName::FName(&GetSizeFunctionName,"GetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'GetSizeFunctionName'' @ 14117ef70

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__GetSizeFunctionName__(void)

{
  ::FName::FName(&GetSizeFunctionName,"GetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'GetSizeFunctionName'' @ 14117ef90

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__GetSizeFunctionName__(void)

{
  ::FName::FName(&GetSizeFunctionName,"GetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'GetSphereElementsStartIndexName'' @ 14117efb0

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetSphereElementsStartIndexName__(void)

{
  ::FName::FName(&GetSphereElementsStartIndexName,L"GetSphereElementsStartIndex");
  return;
}

// `dynamic_initializer_for_'GetSphereRadiusName'' @ 14117efd0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__GetSphereRadiusName__(void)

{
  ::FName::FName(&GetSphereRadiusName,L"GetSphereRadius");
  return;
}

// `dynamic_initializer_for_'GetSubUVDetailsName'' @ 14117eff0

void __cdecl NDIMeshRendererInfoInternal::_dynamic_initializer_for__GetSubUVDetailsName__(void)

{
  ::FName::FName(&GetSubUVDetailsName,"GetSubUVDetails");
  return;
}

// `dynamic_initializer_for_'GetVec2ByIDFunctionName'' @ 14117f010

void __cdecl _dynamic_initializer_for__GetVec2ByIDFunctionName__(void)

{
  FName::FName(&GetVec2ByIDFunctionName,"Get Vector 2D By ID");
  return;
}

// `dynamic_initializer_for_'GetVec2ByIndexFunctionName'' @ 14117f030

void __cdecl _dynamic_initializer_for__GetVec2ByIndexFunctionName__(void)

{
  FName::FName(&GetVec2ByIndexFunctionName,"Get Vector 2D By Index");
  return;
}

// `dynamic_initializer_for_'GetVec3ByIDFunctionName'' @ 14117f050

void __cdecl _dynamic_initializer_for__GetVec3ByIDFunctionName__(void)

{
  FName::FName(&GetVec3ByIDFunctionName,"Get Vector By ID");
  return;
}

// `dynamic_initializer_for_'GetVec3ByIndexFunctionName'' @ 14117f070

void __cdecl _dynamic_initializer_for__GetVec3ByIndexFunctionName__(void)

{
  FName::FName(&GetVec3ByIndexFunctionName,"Get Vector By Index");
  return;
}

// `dynamic_initializer_for_'GetVec4ByIDFunctionName'' @ 14117f090

void __cdecl _dynamic_initializer_for__GetVec4ByIDFunctionName__(void)

{
  FName::FName(&GetVec4ByIDFunctionName,"Get Vector 4 By ID");
  return;
}

// `dynamic_initializer_for_'GetVec4ByIndexFunctionName'' @ 14117f0b0

void __cdecl _dynamic_initializer_for__GetVec4ByIndexFunctionName__(void)

{
  FName::FName(&GetVec4ByIndexFunctionName,"Get Vector 4 By Index");
  return;
}

// `dynamic_initializer_for_'IntGridName'' @ 14117f0d0

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__IntGridName__(void)

{
  ::FString::FString(&IntGridName,L"_IntGrid");
  atexit(_dynamic_atexit_destructor_for__IntGridName__);
  return;
}

// `dynamic_initializer_for_'IntToFloatFunctionName'' @ 14117f100

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__IntToFloatFunctionName__(void)

{
  ::FName::FName(&IntToFloatFunctionName,"IntToFloat");
  return;
}

// `dynamic_initializer_for_'InterlockedAddFloatGridValueFunctionName'' @ 14117f120

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__InterlockedAddFloatGridValueFunctionName__
          (void)

{
  ::FName::FName(&InterlockedAddFloatGridValueFunctionName,"InterlockedAddFloatGridValue");
  return;
}

// `dynamic_initializer_for_'InterlockedAddFloatGridValueSafeFunctionName'' @ 14117f140

void __cdecl
NDIRasterizationGrid3DLocal::
_dynamic_initializer_for__InterlockedAddFloatGridValueSafeFunctionName__(void)

{
  ::FName::FName(&InterlockedAddFloatGridValueSafeFunctionName,"InterlockedAddFloatGridValueSafe");
  return;
}

// `dynamic_initializer_for_'InterlockedAddIntGridValueFunctionName'' @ 14117f160

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__InterlockedAddIntGridValueFunctionName__
          (void)

{
  ::FName::FName(&InterlockedAddIntGridValueFunctionName,"InterlockedAddIntGridValue");
  return;
}

// `dynamic_initializer_for_'InterlockedMaxFloatGridValueFunctionName'' @ 14117f180

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__InterlockedMaxFloatGridValueFunctionName__
          (void)

{
  ::FName::FName(&InterlockedMaxFloatGridValueFunctionName,"InterlockedMaxFloatGridValue");
  return;
}

// `dynamic_initializer_for_'InterlockedMinFloatGridValueFunctionName'' @ 14117f1a0

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__InterlockedMinFloatGridValueFunctionName__
          (void)

{
  ::FName::FName(&InterlockedMinFloatGridValueFunctionName,"InterlockedMinFloatGridValue");
  return;
}

// `dynamic_initializer_for_'IsActiveName'' @ 14117f1c0

void __cdecl NDIPlatformSetPrivate::_dynamic_initializer_for__IsActiveName__(void)

{
  ::FName::FName(&IsActiveName,L"IsActive");
  return;
}

// `dynamic_initializer_for_'IsWorldPositionInsideCombinedBoundsName'' @ 14117f1e0

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__IsWorldPositionInsideCombinedBoundsName__
          (void)

{
  ::FName::FName(&IsWorldPositionInsideCombinedBoundsName,L"IsWorldPositionInsideCombinedBounds");
  return;
}

// `dynamic_initializer_for_'LinearToIndexName'' @ 14117f200

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__LinearToIndexName__(void)

{
  ::FName::FName(&LinearToIndexName,"LinearToIndex");
  return;
}

// `dynamic_initializer_for_'LinearToIndexName'' @ 14117f220

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__LinearToIndexName__(void)

{
  ::FName::FName(&LinearToIndexName,"LinearToIndex");
  return;
}

// `dynamic_initializer_for_'LinearToIndexName'' @ 14117f240

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__LinearToIndexName__(void)

{
  ::FName::FName(&LinearToIndexName,"LinearToIndex");
  return;
}

// `dynamic_initializer_for_'LinearToIndexName'' @ 14117f260

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__LinearToIndexName__(void)

{
  ::FName::FName(&LinearToIndexName,"LinearToIndex");
  return;
}

// `dynamic_initializer_for_'LoadValueFunctionName'' @ 14117f280

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__LoadValueFunctionName__(void)

{
  ::FName::FName(&LoadValueFunctionName,"LoadRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'LoadValueFunctionName'' @ 14117f2a0

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__LoadValueFunctionName__(void)

{
  ::FName::FName(&LoadValueFunctionName,"LoadRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'LoadValueFunctionName'' @ 14117f2c0

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__LoadValueFunctionName__(void)

{
  ::FName::FName(&LoadValueFunctionName,"LoadRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'LogRigidMeshCollision'' @ 14117f2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRigidMeshCollision__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRigidMeshCollision,L"LogRigidMeshCollision",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRigidMeshCollision__);
  return;
}

// `dynamic_initializer_for_'MaxNeighborsPerCellFunctionName'' @ 14117f320

void __cdecl _dynamic_initializer_for__MaxNeighborsPerCellFunctionName__(void)

{
  FName::FName(&MaxNeighborsPerCellFunctionName,"MaxNeighborsPerCell");
  return;
}

// `dynamic_initializer_for_'MaxNeighborsPerCellName'' @ 14117f340

void __cdecl _dynamic_initializer_for__MaxNeighborsPerCellName__(void)

{
  FString::FString(&MaxNeighborsPerCellName,L"_MaxNeighborsPerCellValue");
  atexit(_dynamic_atexit_destructor_for__MaxNeighborsPerCellName__);
  return;
}

// `dynamic_initializer_for_'NeighborGridIndexToLinearFunctionName'' @ 14117f370

void __cdecl _dynamic_initializer_for__NeighborGridIndexToLinearFunctionName__(void)

{
  FName::FName(&NeighborGridIndexToLinearFunctionName,"NeighborGridIndexToLinear");
  return;
}

// `dynamic_initializer_for_'OutputIntGridName'' @ 14117f390

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__OutputIntGridName__(void)

{
  ::FString::FString(&OutputIntGridName,L"_OutputIntGrid");
  atexit(_dynamic_atexit_destructor_for__OutputIntGridName__);
  return;
}

// `dynamic_initializer_for_'OutputParticleNeighborCountName'' @ 14117f3c0

void __cdecl _dynamic_initializer_for__OutputParticleNeighborCountName__(void)

{
  FString::FString(&OutputParticleNeighborCountName,L"_OutputParticleNeighborCount");
  atexit(_dynamic_atexit_destructor_for__OutputParticleNeighborCountName__);
  return;
}

// `dynamic_initializer_for_'OutputParticleNeighborsName'' @ 14117f3f0

void __cdecl _dynamic_initializer_for__OutputParticleNeighborsName__(void)

{
  FString::FString(&OutputParticleNeighborsName,L"_OutputParticleNeighbors");
  atexit(_dynamic_atexit_destructor_for__OutputParticleNeighborsName__);
  return;
}

// `dynamic_initializer_for_'OverlapExtentDescription'' @ 14117f420

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__OverlapExtentDescription__(void)

{
  FText::FText(&OverlapExtentDescription);
  atexit(_dynamic_atexit_destructor_for__OverlapExtentDescription__);
  return;
}

// `dynamic_initializer_for_'OverlapOriginDescription'' @ 14117f450

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__OverlapOriginDescription__(void)

{
  FText::FText(&OverlapOriginDescription);
  atexit(_dynamic_atexit_destructor_for__OverlapOriginDescription__);
  return;
}

// `dynamic_initializer_for_'OverlapRotationDescription'' @ 14117f480

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_initializer_for__OverlapRotationDescription__(void)

{
  FText::FText(&OverlapRotationDescription);
  atexit(_dynamic_atexit_destructor_for__OverlapRotationDescription__);
  return;
}

// `dynamic_initializer_for_'ParticleNeighborCountName'' @ 14117f4b0

void __cdecl _dynamic_initializer_for__ParticleNeighborCountName__(void)

{
  FString::FString(&ParticleNeighborCountName,L"_ParticleNeighborCount");
  atexit(_dynamic_atexit_destructor_for__ParticleNeighborCountName__);
  return;
}

// `dynamic_initializer_for_'ParticleNeighborsName'' @ 14117f4e0

void __cdecl _dynamic_initializer_for__ParticleNeighborsName__(void)

{
  FString::FString(&ParticleNeighborsName,L"_ParticleNeighbors");
  atexit(_dynamic_atexit_destructor_for__ParticleNeighborsName__);
  return;
}

// `dynamic_initializer_for_'ParticleReadIDName'' @ 14117f510

void __cdecl _dynamic_initializer_for__ParticleReadIDName__(void)

{
  FName::FName(&ParticleReadIDName,L"ID");
  return;
}

// `dynamic_initializer_for_'PerAttributeDataName'' @ 14117f530

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__PerAttributeDataName__(void)

{
  ::FString::FString(&PerAttributeDataName,L"_PerAttributeData");
  atexit(_dynamic_atexit_destructor_for__PerAttributeDataName__);
  return;
}

// `dynamic_initializer_for_'PrecisionName'' @ 14117f560

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__PrecisionName__(void)

{
  ::FString::FString(&PrecisionName,L"_Precision");
  atexit(_dynamic_atexit_destructor_for__PrecisionName__);
  return;
}

// `dynamic_initializer_for_'QueryCloudOcclusionWithCircleName'' @ 14117f590

void __cdecl NDIOcclusionImpl::_dynamic_initializer_for__QueryCloudOcclusionWithCircleName__(void)

{
  ::FName::FName(&QueryCloudOcclusionWithCircleName,L"QueryCloudOcclusionWithCircle");
  return;
}

// `dynamic_initializer_for_'QueryOcclusionFactorWithCircleName'' @ 14117f5b0

void __cdecl NDIOcclusionImpl::_dynamic_initializer_for__QueryOcclusionFactorWithCircleName__(void)

{
  ::FName::FName(&QueryOcclusionFactorWithCircleName,L"QueryOcclusionFactorWithCircle");
  return;
}

// `dynamic_initializer_for_'ReleaseResourcesFunctionName'' @ 14117f5d0

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__ReleaseResourcesFunctionName__(void)

{
  ::FName::FName(&ReleaseResourcesFunctionName,"ReleaseResources");
  return;
}

// `dynamic_initializer_for_'SampleValueFunctionName'' @ 14117f5f0

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__SampleValueFunctionName__(void)

{
  ::FName::FName(&SampleValueFunctionName,"SampleRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SampleValueFunctionName'' @ 14117f610

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__SampleValueFunctionName__(void)

{
  ::FName::FName(&SampleValueFunctionName,"SampleRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SampleValueFunctionName'' @ 14117f630

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__SampleValueFunctionName__(void)

{
  ::FName::FName(&SampleValueFunctionName,"SampleRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SampleValueFunctionName'' @ 14117f650

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__SampleValueFunctionName__(void)

{
  ::FName::FName(&SampleValueFunctionName,"SampleRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SetFloatResetValueFunctionName'' @ 14117f670

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__SetFloatResetValueFunctionName__(void)

{
  ::FName::FName(&SetFloatResetValueFunctionName,"SetFloatResetValue");
  return;
}

// `dynamic_initializer_for_'SetFloatValueFunctionName'' @ 14117f690

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__SetFloatValueFunctionName__(void)

{
  ::FName::FName(&SetFloatValueFunctionName,"SetFloatGridValue");
  return;
}

// `dynamic_initializer_for_'SetFormatFunctionName'' @ 14117f6b0

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__SetFormatFunctionName__(void)

{
  ::FName::FName(&SetFormatFunctionName,"SetRenderTargetFormat");
  return;
}

// `dynamic_initializer_for_'SetFormatFunctionName'' @ 14117f6d0

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__SetFormatFunctionName__(void)

{
  ::FName::FName(&SetFormatFunctionName,"SetRenderTargetFormat");
  return;
}

// `dynamic_initializer_for_'SetFormatFunctionName'' @ 14117f6f0

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__SetFormatFunctionName__(void)

{
  ::FName::FName(&SetFormatFunctionName,"SetRenderTargetFormat");
  return;
}

// `dynamic_initializer_for_'SetFormatFunctionName'' @ 14117f710

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__SetFormatFunctionName__(void)

{
  ::FName::FName(&SetFormatFunctionName,"SetRenderTargetFormat");
  return;
}

// `dynamic_initializer_for_'SetIntValueFunctionName'' @ 14117f730

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__SetIntValueFunctionName__(void)

{
  ::FName::FName(&SetIntValueFunctionName,"SetIntGridValue");
  return;
}

// `dynamic_initializer_for_'SetNumAttributesFunctionName'' @ 14117f750

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_initializer_for__SetNumAttributesFunctionName__(void)

{
  ::FName::FName(&SetNumAttributesFunctionName,"SetNumAttributes");
  return;
}

// `dynamic_initializer_for_'SetNumCellsFunctionName'' @ 14117f770

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_initializer_for__SetNumCellsFunctionName__(void)

{
  ::FName::FName(&SetNumCellsFunctionName,"SetNumCells");
  return;
}

// `dynamic_initializer_for_'SetParticleNeighborCountFunctionName'' @ 14117f790

void __cdecl _dynamic_initializer_for__SetParticleNeighborCountFunctionName__(void)

{
  FName::FName(&SetParticleNeighborCountFunctionName,"SetParticleNeighborCount");
  return;
}

// `dynamic_initializer_for_'SetParticleNeighborFunctionName'' @ 14117f7b0

void __cdecl _dynamic_initializer_for__SetParticleNeighborFunctionName__(void)

{
  FName::FName(&SetParticleNeighborFunctionName,"SetParticleNeighbor");
  return;
}

// `dynamic_initializer_for_'SetScalarParameterDescription'' @ 14117f7d0

void __cdecl NDIMIDPrivate::_dynamic_initializer_for__SetScalarParameterDescription__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SetScalarParameterDescription,L"NiagaraDataInterfaceMaterialInstanceDynamic",
             L"NiagaraMID_SetScalarParameter_Desc",
             L"Sets a scalar parameter to a Material instance dynamic by name.");
  atexit(_dynamic_atexit_destructor_for__SetScalarParameterDescription__);
  return;
}

// `dynamic_initializer_for_'SetScalarParameterFuncName'' @ 14117f810

void __cdecl NDIMIDPrivate::_dynamic_initializer_for__SetScalarParameterFuncName__(void)

{
  ::FName::FName(&SetScalarParameterFuncName,L"SetScalarParameter");
  return;
}

// `dynamic_initializer_for_'SetScalarParameterFuncName'' @ 14117f830

void __cdecl NDIMPCPrivate::_dynamic_initializer_for__SetScalarParameterFuncName__(void)

{
  ::FName::FName(&SetScalarParameterFuncName,L"SetScalarParameter");
  return;
}

// `dynamic_initializer_for_'SetSizeFunctionName'' @ 14117f850

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__SetSizeFunctionName__(void)

{
  ::FName::FName(&SetSizeFunctionName,"SetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'SetSizeFunctionName'' @ 14117f870

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__SetSizeFunctionName__(void)

{
  ::FName::FName(&SetSizeFunctionName,"SetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'SetSizeFunctionName'' @ 14117f890

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__SetSizeFunctionName__(void)

{
  ::FName::FName(&SetSizeFunctionName,"SetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'SetSizeFunctionName'' @ 14117f8b0

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__SetSizeFunctionName__(void)

{
  ::FName::FName(&SetSizeFunctionName,"SetRenderTargetSize");
  return;
}

// `dynamic_initializer_for_'SetValueFunctionName'' @ 14117f8d0

void __cdecl NDIRenderTarget2DArrayLocal::_dynamic_initializer_for__SetValueFunctionName__(void)

{
  ::FName::FName(&SetValueFunctionName,"SetRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SetValueFunctionName'' @ 14117f8f0

void __cdecl NDIRenderTarget2DLocal::_dynamic_initializer_for__SetValueFunctionName__(void)

{
  ::FName::FName(&SetValueFunctionName,"SetRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SetValueFunctionName'' @ 14117f910

void __cdecl NDIRenderTargetCubeLocal::_dynamic_initializer_for__SetValueFunctionName__(void)

{
  ::FName::FName(&SetValueFunctionName,"SetRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SetValueFunctionName'' @ 14117f930

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_initializer_for__SetValueFunctionName__(void)

{
  ::FName::FName(&SetValueFunctionName,"SetRenderTargetValue");
  return;
}

// `dynamic_initializer_for_'SetVector4ParameterDescription'' @ 14117f950

void __cdecl NDIMIDPrivate::_dynamic_initializer_for__SetVector4ParameterDescription__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SetVector4ParameterDescription,L"NiagaraDataInterfaceMaterialInstanceDynamic",
             L"NiagaraMID_SetVector4Parameter_Desc",
             L"Sets a Vector4 parameter to a Material instance dynamic by name.");
  atexit(_dynamic_atexit_destructor_for__SetVector4ParameterDescription__);
  return;
}

// `dynamic_initializer_for_'SetVector4ParameterFuncName'' @ 14117f990

void __cdecl NDIMIDPrivate::_dynamic_initializer_for__SetVector4ParameterFuncName__(void)

{
  ::FName::FName(&SetVector4ParameterFuncName,L"SetVector4Parameter");
  return;
}

// `dynamic_initializer_for_'SetVector4ParameterFuncName'' @ 14117f9b0

void __cdecl NDIMPCPrivate::_dynamic_initializer_for__SetVector4ParameterFuncName__(void)

{
  ::FName::FName(&SetVector4ParameterFuncName,L"SetVector4Parameter");
  return;
}

// `dynamic_initializer_for_'SkipOverlapDescription'' @ 14117f9d0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__SkipOverlapDescription__(void)

{
  FText::FText(&SkipOverlapDescription);
  atexit(_dynamic_atexit_destructor_for__SkipOverlapDescription__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 14117fa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 14117fa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 14117fb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 14117fbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 14117fc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 14117fcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 14117fd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 14117fdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 14117fe80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 14117ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 14117ffa0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 141180030

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 1411800c0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 141180150

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 1411801e0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 141180270

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 141180300

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 141180390

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 141180420

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 1411804b0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 141180540

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 1411805d0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 141180660

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 1411806f0

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

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 141180780

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

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 141180810

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

// `dynamic_initializer_for_'TraceChannelDescription'' @ 1411808a0

void __cdecl NDIRigidMeshCollisionLocal::_dynamic_initializer_for__TraceChannelDescription__(void)

{
  FText::FText(&TraceChannelDescription);
  atexit(_dynamic_atexit_destructor_for__TraceChannelDescription__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h__Script_Niagara_3940627390'' @ 1411808d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h__Script_Niagara_3940627390__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h__Script_Niagara_2395578552'' @ 141180910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h__Script_Niagara_2395578552__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshRendererInfo_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h__Script_Niagara_3866253175'' @ 141180950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h__Script_Niagara_3866253175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h__Script_Niagara_854823171'' @ 141180990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h__Script_Niagara_854823171__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h__Script_Niagara_707769454'' @ 1411809d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h__Script_Niagara_707769454__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceParticleRead_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h__Script_Niagara_1705847638'' @ 141180a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h__Script_Niagara_1705847638__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRasterizationGrid3D_h__Script_Niagara_1165594159'' @ 141180a50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRasterizationGrid3D_h__Script_Niagara_1165594159__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRasterizationGrid3D_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2DArray_h__Script_Niagara_2271718235'' @ 141180a90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2DArray_h__Script_Niagara_2271718235__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2DArray_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h__Script_Niagara_1949761635'' @ 141180ad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h__Script_Niagara_1949761635__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2D_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTargetCube_h__Script_Niagara_756475334'' @ 141180b10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTargetCube_h__Script_Niagara_756475334__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTargetCube_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTargetVolume_h__Script_Niagara_1712386130'' @ 141180b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTargetVolume_h__Script_Niagara_1712386130__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTargetVolume_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataInterfaceMaterialInstanceDynamic_h__Script_Niagara_2175042861'' @ 141180b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataInterfaceMaterialInstanceDynamic_h__Script_Niagara_2175042861__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataInterfaceMaterialInstanceDynamic_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataInterfaceMaterialParameterCollection_h__Script_Niagara_1239032316'' @ 141180bd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataInterfaceMaterialParameterCollection_h__Script_Niagara_1239032316__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataInterfaceMaterialParameterCollection_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h__Script_Niagara_1461164569'' @ 141180c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h__Script_Niagara_1461164569__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h__Script_Niagara_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D @ 1491985d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceOcclusion @ 149198610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceOcclusion(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic @ 149198690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.OuterSingleton;
}

// NewStructOps @ 1491986d0

void * __cdecl Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshTriCoordinate,&UE::CoreUObject::Private::Construct<FMeshTriCoordinate>,&UE::CoreUObject::Private::ConstructForTests<FMeshTriCoordinate>,&UE::CoreUObject::Private::Destruct<FMeshTriCoordinate>,&UE::CoreUObject::Private::Copy<FMeshTriCoordinate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube @ 149198950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.OuterSingleton;
}

// NewProp_bInheritUserParameterSettings_SetBit @ 149198a50

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::
NewProp_bInheritUserParameterSettings_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 1;
  return;
}

// NewProp_bOverrideFormat_SetBit @ 149198a60

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 2;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D @ 149198a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetVolume @ 149198b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetVolume(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.OuterSingleton;
}

// NewProp_bInheritUserParameterSettings_SetBit @ 149198bb0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetVolume_Statics::
NewProp_bInheritUserParameterSettings_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x4e) = *(byte *)((longlong)param_1 + 0x4e) | 1;
  return;
}

// NewProp_bOverrideFormat_SetBit @ 149198bc0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetVolume_Statics::NewProp_bOverrideFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x4e) = *(byte *)((longlong)param_1 + 0x4e) | 2;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo @ 149198c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray @ 149198ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.OuterSingleton;
}

// NewProp_bInheritUserParameterSettings_SetBit @ 149198f30

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::
NewProp_bInheritUserParameterSettings_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x46) = *(byte *)((longlong)param_1 + 0x46) | 1;
  return;
}

// NewProp_bOverrideFormat_SetBit @ 149198f40

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bOverrideFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x46) = *(byte *)((longlong)param_1 + 0x46) | 2;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery @ 149198f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary @ 149198f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.OuterSingleton;
}

// NewProp_OnlyUseMoveable_SetBit @ 149198fd0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::
NewProp_OnlyUseMoveable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_UseComplexCollisions_SetBit @ 149198fe0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::
NewProp_UseComplexCollisions_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// NewProp_bFilterByObjectType_SetBit @ 149198ff0

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::
NewProp_bFilterByObjectType_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  return;
}

// NewProp_GlobalSearchAllowed_SetBit @ 149199000

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::
NewProp_GlobalSearchAllowed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6b) = 1;
  return;
}

// NewProp_GlobalSearchForced_SetBit @ 149199010

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::
NewProp_GlobalSearchForced_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewProp_GlobalSearchFallback_Unscripted_SetBit @ 149199020

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::
NewProp_GlobalSearchFallback_Unscripted_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors @ 149199030

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149199320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDataInterfaceRenderTargetCommon::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDataInterfaceRenderTargetCommon::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UNiagaraDataInterfacePlatformSet @ 149199590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfacePlatformSet(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceParticleRead @ 1491995d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceParticleRead(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D @ 1491996d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.OuterSingleton;
}

// NewProp_bInheritUserParameterSettings_SetBit @ 149199710

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::
NewProp_bInheritUserParameterSettings_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) | 1;
  return;
}

// NewProp_bOverrideFormat_SetBit @ 149199720

void __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_Statics::NewProp_bOverrideFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) | 2;
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceMaterialParameterCollection @ 149199730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceMaterialParameterCollection(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceMaterialParameterCollection_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 149199830

void __cdecl <lambda_24>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FNiagaraDataInterfaceParametersCS_ParticleRead::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// ApplyAfter<`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::__l27::<lambda_3>_&,FVectorVMExternalFunctionContext_&> @ 14919a320

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction_::__l27::<lambda_3>_&,FVectorVMExternalFunctionContext_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_3> *param_1,
          FVectorVMExternalFunctionContext *param_2)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> local_18;
  
  VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>(&local_18,param_2);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_2->PerInstanceFnInstanceIdx;
  if (0 < param_2->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->MaxNeighborsPerCell;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_2->NumInstances);
  }
  return;
}

// CastChecked<UNiagaraDataInterfaceMaterialInstanceDynamic_const_,UNiagaraDataInterface_const_> @ 14919a6e0

UNiagaraDataInterfaceMaterialInstanceDynamic * __cdecl
CastChecked<UNiagaraDataInterfaceMaterialInstanceDynamic_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceMaterialInstanceDynamic::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceMaterialInstanceDynamic *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceMaterialParameterCollection_const_,UNiagaraDataInterface_const_> @ 14919a7a0

UNiagaraDataInterfaceMaterialParameterCollection * __cdecl
CastChecked<UNiagaraDataInterfaceMaterialParameterCollection_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceMaterialParameterCollection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceMaterialParameterCollection *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceMeshRendererInfo_const_,UNiagaraDataInterface_const_> @ 14919a860

UNiagaraDataInterfaceMeshRendererInfo * __cdecl
CastChecked<UNiagaraDataInterfaceMeshRendererInfo_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceMeshRendererInfo *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceNeighborGrid3D_const_,UNiagaraDataInterface_const_> @ 14919a920

UNiagaraDataInterfaceNeighborGrid3D * __cdecl
CastChecked<UNiagaraDataInterfaceNeighborGrid3D_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceNeighborGrid3D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfacePlatformSet_const_,UNiagaraDataInterface_const_> @ 14919a9e0

UNiagaraDataInterfacePlatformSet * __cdecl
CastChecked<UNiagaraDataInterfacePlatformSet_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfacePlatformSet_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfacePlatformSet::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfacePlatformSet *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfacePlatformSet_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRasterizationGrid3D_const_,UNiagaraDataInterface_const_> @ 14919aaa0

UNiagaraDataInterfaceRasterizationGrid3D * __cdecl
CastChecked<UNiagaraDataInterfaceRasterizationGrid3D_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRasterizationGrid3D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRasterizationGrid3D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTarget2D_const_,UNiagaraDataInterface_const_> @ 14919ab60

UNiagaraDataInterfaceRenderTarget2D * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTarget2D_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTarget2D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTarget2D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTarget2DArray_const_,UNiagaraDataInterface_const_> @ 14919ac20

UNiagaraDataInterfaceRenderTarget2DArray * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTarget2DArray_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTarget2DArray::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTarget2DArray *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTargetCube_const_,UNiagaraDataInterface_const_> @ 14919ace0

UNiagaraDataInterfaceRenderTargetCube * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTargetCube_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTargetCube::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTargetCube *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTargetVolume_const_,UNiagaraDataInterface_const_> @ 14919ada0

UNiagaraDataInterfaceRenderTargetVolume * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTargetVolume_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTargetVolume::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTargetVolume *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume_const_>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_,UNiagaraDataInterface_const_> @ 14919ae60

UNiagaraDataInterfaceRigidMeshCollisionQuery * __cdecl
CastChecked<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRigidMeshCollisionQuery *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_>(&local_28);
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

// CastChecked<UAnimatedSparseVolumeTexture,UObject> @ 14919af20

UAnimatedSparseVolumeTexture * __cdecl
CastChecked<UAnimatedSparseVolumeTexture,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UAnimatedSparseVolumeTexture>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UAnimatedSparseVolumeTexture *)param_1;
  }
  pFVar3 = GetTypeName<UAnimatedSparseVolumeTexture>(&local_28);
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

// CastChecked<UNDIRenderTargetSimCacheData,UObject_const_> @ 14919afe0

UNDIRenderTargetSimCacheData * __cdecl
CastChecked<UNDIRenderTargetSimCacheData,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNDIRenderTargetSimCacheData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNDIRenderTargetSimCacheData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNDIRenderTargetSimCacheData *)param_1;
  }
  pFVar3 = GetTypeName<UNDIRenderTargetSimCacheData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNDIRenderTargetSimCacheData,UObject> @ 14919b0a0

UNDIRenderTargetSimCacheData * __cdecl
CastChecked<UNDIRenderTargetSimCacheData,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNDIRenderTargetSimCacheData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNDIRenderTargetSimCacheData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNDIRenderTargetSimCacheData *)param_1;
  }
  pFVar3 = GetTypeName<UNDIRenderTargetSimCacheData>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceMaterialInstanceDynamic,UNiagaraDataInterface> @ 14919b160

UNiagaraDataInterfaceMaterialInstanceDynamic * __cdecl
CastChecked<UNiagaraDataInterfaceMaterialInstanceDynamic,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceMaterialInstanceDynamic::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceMaterialInstanceDynamic *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceMaterialParameterCollection,UNiagaraDataInterface> @ 14919b220

UNiagaraDataInterfaceMaterialParameterCollection * __cdecl
CastChecked<UNiagaraDataInterfaceMaterialParameterCollection,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceMaterialParameterCollection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceMaterialParameterCollection *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceMeshRendererInfo,UNiagaraDataInterface> @ 14919b2e0

UNiagaraDataInterfaceMeshRendererInfo * __cdecl
CastChecked<UNiagaraDataInterfaceMeshRendererInfo,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceMeshRendererInfo *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceNeighborGrid3D,UNiagaraDataInterface> @ 14919b3a0

UNiagaraDataInterfaceNeighborGrid3D * __cdecl
CastChecked<UNiagaraDataInterfaceNeighborGrid3D,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceNeighborGrid3D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceParticleRead,UNiagaraDataInterface_const_> @ 14919b460

UNiagaraDataInterfaceParticleRead * __cdecl
CastChecked<UNiagaraDataInterfaceParticleRead,UNiagaraDataInterface_const_>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceParticleRead::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceParticleRead *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceParticleRead,UNiagaraDataInterface> @ 14919b520

UNiagaraDataInterfaceParticleRead * __cdecl
CastChecked<UNiagaraDataInterfaceParticleRead,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceParticleRead::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceParticleRead *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
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

// CastChecked<UNiagaraDataInterfacePlatformSet,UNiagaraDataInterface> @ 14919b5e0

UNiagaraDataInterfacePlatformSet * __cdecl
CastChecked<UNiagaraDataInterfacePlatformSet,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfacePlatformSet>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfacePlatformSet::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfacePlatformSet *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfacePlatformSet>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRasterizationGrid3D,UNiagaraDataInterface> @ 14919b6a0

UNiagaraDataInterfaceRasterizationGrid3D * __cdecl
CastChecked<UNiagaraDataInterfaceRasterizationGrid3D,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRasterizationGrid3D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRasterizationGrid3D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTarget2D,UNiagaraDataInterface> @ 14919b760

UNiagaraDataInterfaceRenderTarget2D * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTarget2D,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTarget2D::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTarget2D *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTarget2DArray,UNiagaraDataInterface> @ 14919b820

UNiagaraDataInterfaceRenderTarget2DArray * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTarget2DArray,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTarget2DArray::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTarget2DArray *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTargetCube,UNiagaraDataInterface> @ 14919b8e0

UNiagaraDataInterfaceRenderTargetCube * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTargetCube,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTargetCube::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTargetCube *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRenderTargetVolume,UNiagaraDataInterface> @ 14919b9a0

UNiagaraDataInterfaceRenderTargetVolume * __cdecl
CastChecked<UNiagaraDataInterfaceRenderTargetVolume,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRenderTargetVolume::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRenderTargetVolume *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume>(&local_28);
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

// CastChecked<UNiagaraDataInterfaceRigidMeshCollisionQuery,UNiagaraDataInterface> @ 14919ba60

UNiagaraDataInterfaceRigidMeshCollisionQuery * __cdecl
CastChecked<UNiagaraDataInterfaceRigidMeshCollisionQuery,UNiagaraDataInterface>
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
    pFVar3 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceRigidMeshCollisionQuery *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery>(&local_28);
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

// CastChecked<UNiagaraSimCache,UObject> @ 14919bb20

UNiagaraSimCache * __cdecl CastChecked<UNiagaraSimCache,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraSimCache>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraSimCache *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraSimCache>(&local_28);
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

// CastChecked<UTextureRenderTarget2DArray,UObject> @ 14919bbe0

UTextureRenderTarget2DArray * __cdecl
CastChecked<UTextureRenderTarget2DArray,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UTextureRenderTarget2DArray>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UTextureRenderTarget2DArray *)param_1;
  }
  pFVar3 = GetTypeName<UTextureRenderTarget2DArray>(&local_28);
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

// CastChecked<UTextureRenderTargetCube,UObject> @ 14919bca0

UTextureRenderTargetCube * __cdecl CastChecked<UTextureRenderTargetCube,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UTextureRenderTargetCube>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UTextureRenderTargetCube *)param_1;
  }
  pFVar3 = GetTypeName<UTextureRenderTargetCube>(&local_28);
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

// CastChecked<UTextureRenderTargetVolume,UObject> @ 14919bd60

UTextureRenderTargetVolume * __cdecl
CastChecked<UTextureRenderTargetVolume,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UTextureRenderTargetVolume>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UTextureRenderTargetVolume *)param_1;
  }
  pFVar3 = GetTypeName<UTextureRenderTargetVolume>(&local_28);
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

// CollectComponents<USkeletalMeshComponent> @ 14919be20

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
NDIRigidMeshCollisionLocal::CollectComponents<USkeletalMeshComponent>
          (TArrayView<AActor_*_const,int> *param_1,TArrayView<FName_const_,int> *param_2,
          TInlineComponentArray<USkeletalMeshComponent_*,24> *param_3)

{
  TArrayView<FName_const_,int> local_28;
  TArrayView<AActor_*_const,int> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GenerateComponentList<USkeletalMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<USkeletalMeshComponent>_::__l2::<lambda_1>_>
            (&local_18,&local_28,(<lambda_1>)0x0,param_3);
  return;
}

// CollectComponents<UStaticMeshComponent> @ 14919be60

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
NDIRigidMeshCollisionLocal::CollectComponents<UStaticMeshComponent>
          (TArrayView<AActor_*_const,int> *param_1,TArrayView<FName_const_,int> *param_2,
          TInlineComponentArray<UStaticMeshComponent_*,24> *param_3)

{
  TArrayView<FName_const_,int> local_28;
  TArrayView<AActor_*_const,int> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  GenerateComponentList<UStaticMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<UStaticMeshComponent>_::__l2::<lambda_1>_>
            (&local_18,&local_28,(<lambda_1>)0x0,param_3);
  return;
}

// CompareItems<TSoftObjectPtr<AActor>,int> @ 14919bea0

bool __cdecl
CompareItems<TSoftObjectPtr<AActor>,int>
          (TSoftObjectPtr<AActor> *param_1,TSoftObjectPtr<AActor> *param_2,int param_3)

{
  bool bVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar1 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
                       (FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
    if (!bVar1) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return false;
}

// CompareItems<TWeakObjectPtr<AActor,FWeakObjectPtr>,int> @ 14919bf10

bool __cdecl
CompareItems<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>
          (TWeakObjectPtr<AActor,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<AActor,FWeakObjectPtr> *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)(lVar2 + (longlong)param_2),
                         param_2);
      if (!bVar1) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TSoftObjectPtr<AActor>,TSoftObjectPtr<AActor>,int> @ 14919bf80

void __cdecl
ConstructItems<TSoftObjectPtr<AActor>,TSoftObjectPtr<AActor>,int>
          (void *param_1,TSoftObjectPtr<AActor> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
                ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar1 + (longlong)param_2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CountCollisionPrimitives<USkeletalMeshComponent> @ 14919bfd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::CountCollisionPrimitives<USkeletalMeshComponent>
          (TArrayView<USkeletalMeshComponent_*_const,int> *param_1,
          TArray<FNDIRigidMeshCollisionData::FComponentBodyCount,TSizedDefaultAllocator<32>_>
          *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  USkeletalMeshComponent *this;
  UBodySetup *pUVar3;
  FName FVar4;
  int iVar5;
  uint uVar6;
  UPhysicsAsset *pUVar7;
  USkeletalMesh *pUVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  USkeletalMeshComponent **ppUVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  TArray<FNDIRigidMeshCollisionData::FComponentBodyCount,TSizedDefaultAllocator<32>_> *local_res10;
  uint *local_res18;
  uint *local_res20;
  FScriptContainerElement *local_60;
  USkeletalMeshComponent **local_58;
  
  uVar6 = param_1->ArrayNum;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar11 = &param_2->ArrayMax;
  piVar1 = &param_2->ArrayNum;
  if (*piVar11 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar6,&param_2->AllocatorInstance,*piVar1,piVar11);
  }
  ppUVar13 = param_1->DataPtr;
  local_58 = ppUVar13 + (int)uVar6;
  if (ppUVar13 != local_58) {
    do {
      iVar5 = *piVar1;
      this = *ppUVar13;
      if (iVar5 == *piVar11) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_2->AllocatorInstance,piVar11);
        *piVar1 = iVar5;
      }
      *piVar1 = iVar5 + 1;
      pFVar14 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      DefaultConstructItems<FNDIRigidMeshCollisionData::FComponentBodyCount,int>(pFVar14,1);
      uVar6 = MeshComponentHash(this);
      *(uint *)pFVar14 = uVar6;
      local_60 = pFVar14;
      pUVar7 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this);
      if (pUVar7 != (UPhysicsAsset *)0x0) {
        pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
        if (pUVar8 == (USkeletalMesh *)0x0) {
          pUVar8 = (USkeletalMesh *)(**(code **)(pUVar7->_padding_ + 0x20))(&pUVar7->_padding_);
        }
        else {
          pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
        }
        lVar9 = (**(code **)(pUVar8->_padding_ + 800))(pUVar8);
        pFVar12 = (pUVar7->SkeletalBodySetups).AllocatorInstance.Data;
        iVar5 = (pUVar7->SkeletalBodySetups).ArrayNum;
        pFVar2 = pFVar12 + (longlong)iVar5 * 8;
        while( true ) {
          if ((pUVar7->SkeletalBodySetups).ArrayNum != iVar5) {
            `TCheckedPointerIterator<TObjectPtr<USkeletalBodySetup>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          param_2 = local_res10;
          if (pFVar12 == pFVar2) break;
          pUVar3 = *(UBodySetup **)pFVar12;
          FVar4 = (FName)pUVar3->_padding_;
          if ((((FVar4 != (FName)0x0) &&
               (piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)(lVar9 + 0x90),FVar4), piVar10 != (int *)0x0)) &&
              (*piVar10 != -1)) && (*piVar10 < *(int *)(lVar9 + 0x28))) {
            `NDIRigidMeshCollisionLocal::CountCollisionPrimitives<USkeletalMeshComponent>'::__l6::
            <lambda_1>::operator()(&local_60,this,pUVar3);
          }
          pFVar12 = pFVar12 + 8;
        }
      }
      ppUVar13 = ppUVar13 + 1;
      *local_res18 = *local_res18 + *(uint *)(pFVar14 + 4);
      *local_res20 = *local_res20 + *(uint *)(pFVar14 + 8);
      *param_5 = *param_5 + *(uint *)(pFVar14 + 0xc);
    } while (ppUVar13 != local_58);
  }
  return;
}

// CountCollisionPrimitives<UStaticMeshComponent> @ 14919c210

void __cdecl
NDIRigidMeshCollisionLocal::CountCollisionPrimitives<UStaticMeshComponent>
          (TArrayView<UStaticMeshComponent_*_const,int> *param_1,
          TArray<FNDIRigidMeshCollisionData::FComponentBodyCount,TSizedDefaultAllocator<32>_>
          *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  UStaticMeshComponent **ppUVar2;
  UStaticMeshComponent *pUVar3;
  int iVar4;
  uint uVar5;
  UBodySetup *pUVar6;
  FScriptContainerElement *pFVar7;
  UStaticMeshComponent **ppUVar8;
  FScriptContainerElement *local_res8;
  
  uVar5 = param_1->ArrayNum;
  if (-1 < (int)uVar5) {
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar5,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    ppUVar8 = param_1->DataPtr;
    ppUVar2 = ppUVar8 + (int)uVar5;
    for (; ppUVar8 != ppUVar2; ppUVar8 = ppUVar8 + 1) {
      iVar4 = param_2->ArrayNum;
      pUVar3 = *ppUVar8;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_2->AllocatorInstance,piVar1);
        param_2->ArrayNum = iVar4;
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      DefaultConstructItems<FNDIRigidMeshCollisionData::FComponentBodyCount,int>(pFVar7,1);
      uVar5 = MeshComponentHash(pUVar3);
      *(uint *)pFVar7 = uVar5;
      local_res8 = pFVar7;
      pUVar6 = (UBodySetup *)(**(code **)(pUVar3->_padding_ + 0x800))(pUVar3);
      `NDIRigidMeshCollisionLocal::CountCollisionPrimitives<UStaticMeshComponent>'::__l6::<lambda_1>
      ::operator()(&local_res8,pUVar3,pUVar6);
      *param_3 = *param_3 + *(uint *)(pFVar7 + 4);
      *param_4 = *param_4 + *(uint *)(pFVar7 + 8);
      *param_5 = *param_5 + *(uint *)(pFVar7 + 0xc);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// CreateElementTransform<USkeletalMeshComponent> @ 14919c360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __cdecl
NDIRigidMeshCollisionLocal::CreateElementTransform<USkeletalMeshComponent>
          (TTransform<double> *__return_storage_ptr__,USkeletalMeshComponent *param_1,
          UBodySetup *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  USkeletalMesh *pUVar4;
  longlong lVar5;
  int *piVar6;
  
  pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  if (pUVar4 != (USkeletalMesh *)0x0) {
    lVar5 = (**(code **)(pUVar4->_padding_ + 800))(pUVar4);
    iVar1 = *(int *)(lVar5 + 0x28);
    if ((((0 < iVar1) && ((FName)param_2->_padding_ != (FName)0x0)) &&
        (piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)(lVar5 + 0x90),(FName)param_2->_padding_), piVar6 != (int *)0x0)) &&
       ((iVar2 = *piVar6, iVar2 != -1 && (iVar2 < iVar1)))) {
      USkinnedMeshComponent::GetBoneTransform
                ((USkinnedMeshComponent *)param_1,__return_storage_ptr__,iVar2);
      return __return_storage_ptr__;
    }
  }
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)param_1->_padding_;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)param_1->_padding_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)param_1->_padding_;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar3;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)param_1->_padding_;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// CreateElementTransform<UStaticMeshComponent> @ 14919c440

TTransform<double> * __cdecl
NDIRigidMeshCollisionLocal::CreateElementTransform<UStaticMeshComponent>
          (TTransform<double> *__return_storage_ptr__,UStaticMeshComponent *param_1,
          UBodySetup *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (double)param_1->_padding_;
  dVar4 = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (double)param_1->_padding_;
  dVar4 = (double)param_1->_padding_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// CreateInternalBuffer<unsigned_int,28> @ 14919c490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::CreateInternalBuffer<unsigned_int,28>
          (FRHICommandListBase *param_1,FReadBuffer *param_2,uint param_3)

{
  if (param_3 != 0) {
    FReadBuffer::Initialize
              (param_2,param_1,L"FNDIRigidMeshCollisionBuffer",4,param_3,PF_R32_UINT,Static,
               (FResourceArrayUploadInterface *)0x0);
  }
  return;
}

// CreateInternalBuffer<UE::Math::TVector4<float>,1> @ 14919c4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::CreateInternalBuffer<UE::Math::TVector4<float>,1>
          (FRHICommandListBase *param_1,FReadBuffer *param_2,uint param_3)

{
  if (param_3 != 0) {
    FReadBuffer::Initialize
              (param_2,param_1,L"FNDIRigidMeshCollisionBuffer",0x10,param_3,PF_A32B32G32R32F,Static,
               (FResourceArrayUploadInterface *)0x0);
  }
  return;
}

// DefaultConstructItems<FNDIRigidMeshCollisionData::FComponentBodyCount,int> @ 14919c730

void __cdecl
DefaultConstructItems<FNDIRigidMeshCollisionData::FComponentBodyCount,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMemoryImageName,int> @ 14919c760

void __cdecl DefaultConstructItems<FMemoryImageName,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<UNiagaraDataInterfaceMeshRendererInfo::FMeshData,int> @ 14919c790

void __cdecl
DefaultConstructItems<UNiagaraDataInterfaceMeshRendererInfo::FMeshData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<AActor>,int> @ 14919c880

void __cdecl DestructItems<TSoftObjectPtr<AActor>,int>(TSoftObjectPtr<AActor> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::TSTR_DeleteResource812>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919e1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNDIRigidMeshCollisionData::ReleaseBuffers_::__l5::TSTR_DeleteResource812>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::TSTR_DeleteResource812>
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
      if (bVar8) goto LAB_14919e341;
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
    goto LAB_14919e535;
  }
LAB_14919e341:
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
LAB_14919e41f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919e41f;
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
LAB_14919e535:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::TSTR_FDIMeshRendererInfoPushToRT319>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919e570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl_::__l2::TSTR_FDIMeshRendererInfoPushToRT319>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::TSTR_FDIMeshRendererInfoPushToRT319>
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
      if (bVar8) goto LAB_14919e6c1;
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
    goto LAB_14919e8b5;
  }
LAB_14919e6c1:
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
LAB_14919e79f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919e79f;
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
LAB_14919e8b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::TSTR_FNDIParticleReadCreateRTInstance475>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919e8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceParticleRead::InitPerInstanceData_::__l2::TSTR_FNDIParticleReadCreateRTInstance475>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::TSTR_FNDIParticleReadCreateRTInstance475>
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
      if (bVar8) goto LAB_14919ea41;
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
    goto LAB_14919ec35;
  }
LAB_14919ea41:
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
LAB_14919eb1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919eb1f;
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
LAB_14919ec35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::TSTR_FNDIParticleReadDestroyRTInstance491>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919ec70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData_::__l2::TSTR_FNDIParticleReadDestroyRTInstance491>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::TSTR_FNDIParticleReadDestroyRTInstance491>
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
      if (bVar8) goto LAB_14919edc1;
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
    goto LAB_14919efb5;
  }
LAB_14919edc1:
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
LAB_14919ee9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919ee9f;
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
LAB_14919efb5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData1062>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919eff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData1062>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData1062>
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
      if (bVar8) goto LAB_14919f141;
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
    goto LAB_14919f335;
  }
LAB_14919f141:
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
LAB_14919f21f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919f21f;
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
LAB_14919f335:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData1349>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919f370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData1349>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData1349>
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
      if (bVar8) goto LAB_14919f4c1;
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
    goto LAB_14919f6b5;
  }
LAB_14919f4c1:
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
LAB_14919f59f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919f59f;
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
LAB_14919f6b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData454>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919f6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData454>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData454>
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
      if (bVar8) goto LAB_14919f841;
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
    goto LAB_14919fa35;
  }
LAB_14919f841:
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
LAB_14919f91f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919f91f;
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
LAB_14919fa35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData491>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919fa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData491>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData491>
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
      if (bVar8) goto LAB_14919fbc1;
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
    goto LAB_14919fdb5;
  }
LAB_14919fbc1:
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
LAB_14919fc9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14919fc9f;
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
LAB_14919fdb5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData531>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14919fdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData531>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData531>
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
      if (bVar8) goto LAB_14919ff41;
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
    goto LAB_1491a0135;
  }
LAB_14919ff41:
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
LAB_1491a001f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a001f;
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
LAB_1491a0135:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData553>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a0170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData553>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData553>
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
      if (bVar8) goto LAB_1491a02c1;
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
    goto LAB_1491a04b5;
  }
LAB_1491a02c1:
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
LAB_1491a039f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a039f;
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
LAB_1491a04b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData688>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a04f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData688>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData688>
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
      if (bVar8) goto LAB_1491a0641;
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
    goto LAB_1491a0835;
  }
LAB_1491a0641:
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
LAB_1491a071f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a071f;
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
LAB_1491a0835:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData1033>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a0870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData1033>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData1033>
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
      if (bVar8) goto LAB_1491a09c1;
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
    goto LAB_1491a0bb5;
  }
LAB_1491a09c1:
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
LAB_1491a0a9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a0a9f;
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
LAB_1491a0bb5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::TSTR_FUpdateData586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a0bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData_::__l2::TSTR_FUpdateData586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::TSTR_FUpdateData586>
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
      if (bVar8) goto LAB_1491a0d41;
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
    goto LAB_1491a0f35;
  }
LAB_1491a0d41:
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
LAB_1491a0e1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a0e1f;
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
LAB_1491a0f35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData662>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a0f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData662>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData662>
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
      if (bVar8) goto LAB_1491a10c1;
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
    goto LAB_1491a12b5;
  }
LAB_1491a10c1:
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
LAB_1491a119f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a119f;
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
LAB_1491a12b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::TSTR_FUpdateData907>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a12f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData_::__l2::TSTR_FUpdateData907>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::TSTR_FUpdateData907>
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
      if (bVar8) goto LAB_1491a1441;
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
    goto LAB_1491a1635;
  }
LAB_1491a1441:
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
LAB_1491a151f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a151f;
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
LAB_1491a1635:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTarget2DArrayUpdate713>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a1670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate_::__l27::TSTR_NDIRenderTarget2DArrayUpdate713>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTarget2DArrayUpdate713>
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
      if (bVar8) goto LAB_1491a17c1;
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
    goto LAB_1491a19b5;
  }
LAB_1491a17c1:
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
LAB_1491a189f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a189f;
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
LAB_1491a19b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::TSTR_NDIRenderTarget2DUpdate974>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a19f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate_::__l35::TSTR_NDIRenderTarget2DUpdate974>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::TSTR_NDIRenderTarget2DUpdate974>
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
      if (bVar8) goto LAB_1491a1b41;
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
    goto LAB_1491a1d35;
  }
LAB_1491a1b41:
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
LAB_1491a1c1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a1c1f;
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
LAB_1491a1d35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTargetCubeUpdate665>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a1d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate_::__l27::TSTR_NDIRenderTargetCubeUpdate665>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTargetCubeUpdate665>
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
      if (bVar8) goto LAB_1491a1ec1;
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
    goto LAB_1491a20b5;
  }
LAB_1491a1ec1:
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
LAB_1491a1f9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a1f9f;
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
LAB_1491a20b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::TSTR_NDIRenderTargetUpdate722>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a20f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame_::__l9::TSTR_NDIRenderTargetUpdate722>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::TSTR_NDIRenderTargetUpdate722>
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
      if (bVar8) goto LAB_1491a2241;
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
    goto LAB_1491a2435;
  }
LAB_1491a2241:
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
LAB_1491a231f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a231f;
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
LAB_1491a2435:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::TSTR_NDIRenderTargetVolumeRead627>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a2470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame_::__l12::TSTR_NDIRenderTargetVolumeRead627>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::TSTR_NDIRenderTargetVolumeRead627>
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
      if (bVar8) goto LAB_1491a25c1;
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
    goto LAB_1491a27b5;
  }
LAB_1491a25c1:
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
LAB_1491a269f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a269f;
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
LAB_1491a27b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTargetVolumeUpdate1086>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a27f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate_::__l27::TSTR_NDIRenderTargetVolumeUpdate1086>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTargetVolumeUpdate1086>
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
      if (bVar8) goto LAB_1491a2941;
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
    goto LAB_1491a2b35;
  }
LAB_1491a2941:
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
LAB_1491a2a1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a2a1f;
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
LAB_1491a2b35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::TSTR_NDIRenderTargetVolumeUpdate764>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a2b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame_::__l27::TSTR_NDIRenderTargetVolumeUpdate764>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::TSTR_NDIRenderTargetVolumeUpdate764>
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
      if (bVar8) goto LAB_1491a2cc1;
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
    goto LAB_1491a2eb5;
  }
LAB_1491a2cc1:
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
LAB_1491a2d9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a2d9f;
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
LAB_1491a2eb5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::TSTR_NDIRenderTargetVolumeUpdate874>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a2ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame_::__l37::TSTR_NDIRenderTargetVolumeUpdate874>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::TSTR_NDIRenderTargetVolumeUpdate874>
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
      if (bVar8) goto LAB_1491a3041;
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
    goto LAB_1491a3235;
  }
LAB_1491a3041:
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
LAB_1491a311f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a311f;
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
LAB_1491a3235:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::TSTR_NDIRenderTargetVolume_CacheFrame628>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1491a3270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame_::__l12::TSTR_NDIRenderTargetVolume_CacheFrame628>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::TSTR_NDIRenderTargetVolume_CacheFrame628>
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
      if (bVar8) goto LAB_1491a33c1;
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
    goto LAB_1491a35b5;
  }
LAB_1491a33c1:
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
LAB_1491a349f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1491a349f;
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
LAB_1491a35b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,`FNDIRigidMeshCollisionData::MergeActors'::__l2::<lambda_1>_> @ 1491a3960

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
Algo::
ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,_FNDIRigidMeshCollisionData::MergeActors_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FWeakObjectPtr *this;
  undefined1 local_res8 [8];
  AActor *local_res18;
  
  this = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<AActor,FWeakObjectPtr>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this == pFVar1) break;
    local_res18 = (AActor *)FWeakObjectPtr::Get(this);
    if (local_res18 != (AActor *)0x0) {
      TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<AActor_*_const_&>(param_2.MergedActors,&local_res18);
    }
    this = this + 1;
  }
  return;
}

// ForEachBodySetup<`NDIRigidMeshCollisionLocal::UpdateAssetArrays<USkeletalMeshComponent,1>'::__l2::<lambda_1>_> @ 1491a39e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::
ForEachBodySetup<_NDIRigidMeshCollisionLocal::UpdateAssetArrays<USkeletalMeshComponent,1>_::__l2::<lambda_1>_>
          (USkeletalMeshComponent *param_1,<lambda_1> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UBodySetup *pUVar3;
  FName FVar4;
  UPhysicsAsset *pUVar5;
  USkeletalMesh *pUVar6;
  longlong lVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  
  pUVar5 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)param_1);
  if (pUVar5 != (UPhysicsAsset *)0x0) {
    pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    if (pUVar6 == (USkeletalMesh *)0x0) {
      pUVar6 = (USkeletalMesh *)(**(code **)(pUVar5->_padding_ + 0x20))(&pUVar5->_padding_);
    }
    else {
      pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    }
    lVar7 = (**(code **)(pUVar6->_padding_ + 800))(pUVar6);
    pFVar9 = (pUVar5->SkeletalBodySetups).AllocatorInstance.Data;
    iVar2 = (pUVar5->SkeletalBodySetups).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar5->SkeletalBodySetups).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<USkeletalBodySetup>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar1) break;
      pUVar3 = *(UBodySetup **)pFVar9;
      FVar4 = (FName)pUVar3->_padding_;
      if ((((FVar4 != (FName)0x0) &&
           (piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)(lVar7 + 0x90),FVar4), piVar8 != (int *)0x0)) && (*piVar8 != -1)) &&
         (*piVar8 < *(int *)(lVar7 + 0x28))) {
        `NDIRigidMeshCollisionLocal::UpdateAssetArrays<USkeletalMeshComponent,1>'::__l2::<lambda_1>
        ::operator()(param_2,param_1,pUVar3);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// ForEachBodySetup<`NDIRigidMeshCollisionLocal::UpdateAssetArrays<UStaticMeshComponent,1>'::__l2::<lambda_1>_> @ 1491a3ae0

void __cdecl
NDIRigidMeshCollisionLocal::
ForEachBodySetup<_NDIRigidMeshCollisionLocal::UpdateAssetArrays<UStaticMeshComponent,1>_::__l2::<lambda_1>_>
          (UStaticMeshComponent *param_1,<lambda_1> *param_2)

{
  UBodySetup *pUVar1;
  
  pUVar1 = (UBodySetup *)(**(code **)(param_1->_padding_ + 0x800))();
  `NDIRigidMeshCollisionLocal::UpdateAssetArrays<UStaticMeshComponent,1>'::__l2::<lambda_1>::
  operator()(param_2,param_1,pUVar1);
  return;
}

// ForEachBodySetup<`NDIRigidMeshCollisionLocal::CountCollisionPrimitives<USkeletalMeshComponent>'::__l6::<lambda_1>_> @ 1491a3b20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::
ForEachBodySetup<_NDIRigidMeshCollisionLocal::CountCollisionPrimitives<USkeletalMeshComponent>_::__l6::<lambda_1>_>
          (USkeletalMeshComponent *param_1,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UBodySetup *pUVar3;
  FName FVar4;
  UPhysicsAsset *pUVar5;
  USkeletalMesh *pUVar6;
  longlong lVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FComponentBodyCount *local_res10;
  undefined1 local_res18 [8];
  
  local_res10 = param_2.BodyCount;
  pUVar5 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)param_1);
  if (pUVar5 != (UPhysicsAsset *)0x0) {
    pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    if (pUVar6 == (USkeletalMesh *)0x0) {
      pUVar6 = (USkeletalMesh *)(**(code **)(pUVar5->_padding_ + 0x20))(&pUVar5->_padding_);
    }
    else {
      pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    }
    lVar7 = (**(code **)(pUVar6->_padding_ + 800))(pUVar6);
    pFVar9 = (pUVar5->SkeletalBodySetups).AllocatorInstance.Data;
    iVar2 = (pUVar5->SkeletalBodySetups).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar5->SkeletalBodySetups).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<USkeletalBodySetup>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar1) break;
      pUVar3 = *(UBodySetup **)pFVar9;
      FVar4 = (FName)pUVar3->_padding_;
      if ((((FVar4 != (FName)0x0) &&
           (piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)(lVar7 + 0x90),FVar4), piVar8 != (int *)0x0)) && (*piVar8 != -1)) &&
         (*piVar8 < *(int *)(lVar7 + 0x28))) {
        `NDIRigidMeshCollisionLocal::CountCollisionPrimitives<USkeletalMeshComponent>'::__l6::
        <lambda_1>::operator()(&local_res10,param_1,pUVar3);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// ForEachBodySetup<`NDIRigidMeshCollisionLocal::CountCollisionPrimitives<UStaticMeshComponent>'::__l6::<lambda_1>_> @ 1491a3c10

void __cdecl
NDIRigidMeshCollisionLocal::
ForEachBodySetup<_NDIRigidMeshCollisionLocal::CountCollisionPrimitives<UStaticMeshComponent>_::__l6::<lambda_1>_>
          (UStaticMeshComponent *param_1,<lambda_1> param_2)

{
  UBodySetup *pUVar1;
  FComponentBodyCount *local_res10 [3];
  
  local_res10[0] = param_2.BodyCount;
  pUVar1 = (UBodySetup *)(**(code **)(param_1->_padding_ + 0x800))();
  `NDIRigidMeshCollisionLocal::CountCollisionPrimitives<UStaticMeshComponent>'::__l6::<lambda_1>::
  operator()(local_res10,param_1,pUVar1);
  return;
}

// GenerateComponentList<USkeletalMeshComponent,`NDIRigidMeshCollisionLocal::CollectComponents<USkeletalMeshComponent>'::__l2::<lambda_1>_> @ 1491a3c50

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
NDIRigidMeshCollisionLocal::
GenerateComponentList<USkeletalMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<USkeletalMeshComponent>_::__l2::<lambda_1>_>
          (TArrayView<AActor_*_const,int> *param_1,TArrayView<FName_const_,int> *param_2,
          <lambda_1> param_3,TInlineComponentArray<USkeletalMeshComponent_*,24> *param_4)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  USkeletalMeshComponent *this;
  code *pcVar7;
  bool bVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  UClass *pUVar10;
  UPhysicsAsset *pUVar11;
  USkeletalMesh *pUVar12;
  longlong lVar13;
  TInlineComponentArray<USkeletalMeshComponent_*,24> *pTVar14;
  AActor **ppAVar15;
  TInlineComponentArray<USkeletalMeshComponent_*,24> *pTVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FName *pFVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  USkeletalMeshComponent *local_d8;
  undefined8 local_d0;
  AActor **local_c8;
  int local_c0;
  int local_bc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_b8;
  AActor **local_b0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  int iStack_50;
  undefined4 local_2c;
  
  local_c8 = param_1->DataPtr;
  ppAVar15 = local_c8 + param_1->ArrayNum;
  local_b0 = ppAVar15;
  if (local_c8 != ppAVar15) {
    do {
      if (*local_c8 != (AActor *)0x0) {
        pTVar9 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                           (&(*local_c8)->OwnedComponents);
        iStack_a0 = 0;
        local_88 = 0;
        uStack_9c = 1;
        local_98 = &(pTVar9->Elements).field_0x10;
        iVar17 = *(int *)&(pTVar9->Elements).field_0x28;
        iStack_8c = 0;
        if (iVar17 != 0) {
          puVar5 = *(uint **)&(pTVar9->Elements).field_0x20;
          puVar22 = (uint *)local_98;
          if (puVar5 != (uint *)0x0) {
            puVar22 = puVar5;
          }
          uVar19 = *puVar22;
          while (uVar19 == 0) {
            iStack_a0 = iStack_a0 + 1;
            local_88 = local_88 + 0x20;
            iStack_8c = iVar17;
            if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0)
            goto LAB_1491a3d40;
            uVar19 = puVar22[iStack_a0];
          }
          uStack_9c = ~(uVar19 - 1) & uVar19;
          uVar3 = (ulonglong)uStack_9c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_c0 = (int)lVar13;
          iStack_8c = local_c0 + -1 + local_88;
          if (iVar17 < iStack_8c) {
            iStack_8c = iVar17;
          }
        }
LAB_1491a3d40:
        uVar19 = *(uint *)&(pTVar9->Elements).field_0x28;
        puVar1 = &(pTVar9->Elements).field_0x10;
        uStack_84 = local_2c;
        iStack_80 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
        uVar18 = uVar19 & 0xffffffe0;
        TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
        uStack_90 = 0xffffffff;
        TStack_70.CurrentBitIndex = iStack_8c;
        TStack_70.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar19 >> 5;
        TStack_70._28_4_ = local_2c;
        TStack_70.BaseBitIndex = local_88;
        unique0x100002c3 = uStack_7c;
        iStack_50 = iStack_80;
        local_b8 = pTVar9;
        local_a8 = pTVar9;
        local_78 = pTVar9;
        TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
        if ((((int)uVar19 < 0) || (*(int *)&(pTVar9->Elements).field_0x28 < (int)uVar19)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar4 = *(uint *)&(pTVar9->Elements).field_0x28;
        if (uVar19 != uVar4) {
          puVar6 = *(undefined1 **)&(pTVar9->Elements).field_0x20;
          puVar21 = puVar1;
          if (puVar6 != (undefined1 *)0x0) {
            puVar21 = puVar6;
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
          while (uVar19 == 0) {
            iVar17 = iVar17 + 1;
            uVar18 = uVar18 + 0x20;
            uVar19 = uVar4;
            if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17)
            goto LAB_1491a3e40;
            uVar19 = *(uint *)(puVar21 + (longlong)iVar17 * 4);
          }
          uVar3 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_bc = (int)lVar13;
          uVar19 = local_bc + -1 + uVar18;
          if ((int)uVar4 < (int)uVar19) {
            uVar19 = uVar4;
          }
        }
LAB_1491a3e40:
        do {
          pTVar9 = local_78;
          if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
              iStack_50) {
            local_res8[0] = 0;
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_70.CurrentBitIndex == uVar19) &&
              (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (ppAVar15 = local_b0, pTVar9 == local_b8)) break;
          this = *(USkeletalMeshComponent **)
                  (*(longlong *)&pTVar9->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
          if (this == (USkeletalMeshComponent *)0x0) {
LAB_1491a4042:
            local_d8 = (USkeletalMeshComponent *)0x0;
          }
          else {
            pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar17 = (int)pUVar10->_padding_;
            if ((*(int *)(this->_padding_ + 0x38) < iVar17) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
                &pUVar10->_padding_)) goto LAB_1491a4042;
            local_d8 = this;
            if ((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
               (pUVar11 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this),
               pUVar11 != (UPhysicsAsset *)0x0)) {
              pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
              if (pUVar12 == (USkeletalMesh *)0x0) {
                pUVar12 = (USkeletalMesh *)
                          (**(code **)(pUVar11->_padding_ + 0x20))(&pUVar11->_padding_);
              }
              else {
                pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
              }
              if ((pUVar12 != (USkeletalMesh *)0x0) &&
                 (lVar13 = (**(code **)(pUVar12->_padding_ + 800))(pUVar12),
                 *(int *)(lVar13 + 0x28) != 0)) {
                if (param_2->ArrayNum == 0) {
LAB_1491a3f66:
                  pTVar16 = *(TInlineComponentArray<USkeletalMeshComponent_*,24> **)
                             &param_4->field_0xc0;
                  pTVar14 = param_4;
                  if (pTVar16 != (TInlineComponentArray<USkeletalMeshComponent_*,24> *)0x0) {
                    pTVar14 = pTVar16;
                  }
                  if (pTVar14 <= (TInlineComponentArray<USkeletalMeshComponent_*,24> *)&local_d8) {
                    pTVar14 = param_4;
                    if (pTVar16 != (TInlineComponentArray<USkeletalMeshComponent_*,24> *)0x0) {
                      pTVar14 = pTVar16;
                    }
                    if ((&local_d8 <
                         (USkeletalMeshComponent **)
                         ((longlong)&pTVar14->field_0x0 + (longlong)*(int *)&param_4->field_0xcc * 8
                         )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar8)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  iVar17 = *(int *)&param_4->field_0xc8;
                  if (iVar17 == *(int *)&param_4->field_0xcc) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USkeletalMeshComponent_*>_>
                                       (0x808,(ForElementType<USkeletalMeshComponent_*> *)param_4,
                                        (int *)&param_4->field_0xcc);
                  }
                  *(int *)&param_4->field_0xc8 = iVar17 + 1;
                  pTVar16 = param_4;
                  if (*(TInlineComponentArray<USkeletalMeshComponent_*,24> **)&param_4->field_0xc0
                      != (TInlineComponentArray<USkeletalMeshComponent_*,24> *)0x0) {
                    pTVar16 = *(TInlineComponentArray<USkeletalMeshComponent_*,24> **)
                               &param_4->field_0xc0;
                  }
                  *(USkeletalMeshComponent **)(&pTVar16->field_0x0 + (longlong)iVar17 * 8) =
                       local_d8;
                }
                else {
                  pFVar20 = param_2->DataPtr;
                  pFVar2 = pFVar20 + param_2->ArrayNum;
                  if (pFVar20 != pFVar2) {
                    local_d0 = 0;
                    do {
                      if ((*pFVar20 == (FName)0x0) ||
                         (bVar8 = UActorComponent::ComponentHasTag
                                            ((UActorComponent *)local_d8,*pFVar20), bVar8))
                      goto LAB_1491a3f66;
                      pFVar20 = pFVar20 + 1;
                    } while (pFVar20 != pFVar2);
                  }
                }
              }
            }
          }
          TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        } while( true );
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 != ppAVar15);
  }
  return;
}

// GenerateComponentList<UStaticMeshComponent,`NDIRigidMeshCollisionLocal::CollectComponents<UStaticMeshComponent>'::__l2::<lambda_1>_> @ 1491a40c0

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
NDIRigidMeshCollisionLocal::
GenerateComponentList<UStaticMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<UStaticMeshComponent>_::__l2::<lambda_1>_>
          (TArrayView<AActor_*_const,int> *param_1,TArrayView<FName_const_,int> *param_2,
          <lambda_1> param_3,TInlineComponentArray<UStaticMeshComponent_*,24> *param_4)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  UActorComponent *pUVar7;
  code *pcVar8;
  bool bVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  UClass *pUVar11;
  longlong lVar12;
  TInlineComponentArray<UStaticMeshComponent_*,24> *pTVar13;
  AActor **ppAVar14;
  TInlineComponentArray<UStaticMeshComponent_*,24> *pTVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FName *pFVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  UActorComponent *local_d8;
  undefined8 local_d0;
  AActor **local_c8;
  int local_c0;
  int local_bc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_b8;
  AActor **local_b0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  int iStack_50;
  undefined4 local_2c;
  
  local_c8 = param_1->DataPtr;
  ppAVar14 = local_c8 + param_1->ArrayNum;
  local_b0 = ppAVar14;
  if (local_c8 != ppAVar14) {
    do {
      if (*local_c8 != (AActor *)0x0) {
        pTVar10 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            (&(*local_c8)->OwnedComponents);
        iStack_a0 = 0;
        local_88 = 0;
        uStack_9c = 1;
        local_98 = &(pTVar10->Elements).field_0x10;
        iVar16 = *(int *)&(pTVar10->Elements).field_0x28;
        iStack_8c = 0;
        if (iVar16 != 0) {
          puVar5 = *(uint **)&(pTVar10->Elements).field_0x20;
          puVar21 = (uint *)local_98;
          if (puVar5 != (uint *)0x0) {
            puVar21 = puVar5;
          }
          uVar18 = *puVar21;
          while (uVar18 == 0) {
            iStack_a0 = iStack_a0 + 1;
            local_88 = local_88 + 0x20;
            iStack_8c = iVar16;
            if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0)
            goto LAB_1491a41b0;
            uVar18 = puVar21[iStack_a0];
          }
          uStack_9c = ~(uVar18 - 1) & uVar18;
          uVar3 = (ulonglong)uStack_9c * 2 + 1;
          lVar12 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_c0 = (int)lVar12;
          iStack_8c = local_c0 + -1 + local_88;
          if (iVar16 < iStack_8c) {
            iStack_8c = iVar16;
          }
        }
LAB_1491a41b0:
        uVar18 = *(uint *)&(pTVar10->Elements).field_0x28;
        puVar1 = &(pTVar10->Elements).field_0x10;
        uStack_84 = local_2c;
        iStack_80 = *(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34
        ;
        uVar17 = uVar18 & 0xffffffe0;
        TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
        uStack_90 = 0xffffffff;
        TStack_70.CurrentBitIndex = iStack_8c;
        TStack_70.UnvisitedBitMask = 0xffffffff;
        iVar16 = (int)uVar18 >> 5;
        TStack_70._28_4_ = local_2c;
        TStack_70.BaseBitIndex = local_88;
        unique0x10000273 = uStack_7c;
        iStack_50 = iStack_80;
        local_b8 = pTVar10;
        local_a8 = pTVar10;
        local_78 = pTVar10;
        TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
        if ((((int)uVar18 < 0) || (*(int *)&(pTVar10->Elements).field_0x28 < (int)uVar18)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar4 = *(uint *)&(pTVar10->Elements).field_0x28;
        if (uVar18 != uVar4) {
          puVar6 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
          puVar20 = puVar1;
          if (puVar6 != (undefined1 *)0x0) {
            puVar20 = puVar6;
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
          while (uVar18 == 0) {
            iVar16 = iVar16 + 1;
            uVar17 = uVar17 + 0x20;
            uVar18 = uVar4;
            if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar16)
            goto LAB_1491a42b0;
            uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
          }
          uVar3 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_bc = (int)lVar12;
          uVar18 = (uVar17 - 1) + local_bc;
          if ((int)uVar4 < (int)uVar18) {
            uVar18 = uVar4;
          }
        }
LAB_1491a42b0:
        do {
          pTVar10 = local_78;
          if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
              iStack_50) {
            local_res8[0] = 0;
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_70.CurrentBitIndex == uVar18) &&
              (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (ppAVar14 = local_b0, pTVar10 == local_b8)) break;
          pUVar7 = *(UActorComponent **)
                    (*(longlong *)&pTVar10->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
          if (pUVar7 == (UActorComponent *)0x0) {
LAB_1491a4472:
            local_d8 = (UActorComponent *)0x0;
          }
          else {
            pUVar11 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar16 = (int)pUVar11->_padding_;
            if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar16) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
                &pUVar11->_padding_)) goto LAB_1491a4472;
            local_d8 = pUVar7;
            if ((((uint)pUVar7->_padding_ >> 0x1e & 1) == 0) &&
               (lVar12 = (**(code **)(pUVar7->_padding_ + 0x800))(pUVar7), lVar12 != 0)) {
              if (param_2->ArrayNum == 0) {
LAB_1491a4396:
                pTVar15 = *(TInlineComponentArray<UStaticMeshComponent_*,24> **)&param_4->field_0xc0
                ;
                pTVar13 = param_4;
                if (pTVar15 != (TInlineComponentArray<UStaticMeshComponent_*,24> *)0x0) {
                  pTVar13 = pTVar15;
                }
                if (pTVar13 <= (TInlineComponentArray<UStaticMeshComponent_*,24> *)&local_d8) {
                  pTVar13 = param_4;
                  if (pTVar15 != (TInlineComponentArray<UStaticMeshComponent_*,24> *)0x0) {
                    pTVar13 = pTVar15;
                  }
                  if ((&local_d8 <
                       (UActorComponent **)
                       ((longlong)&pTVar13->field_0x0 + (longlong)*(int *)&param_4->field_0xcc * 8))
                     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar9)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                iVar16 = *(int *)&param_4->field_0xc8;
                if (iVar16 == *(int *)&param_4->field_0xcc) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UStaticMeshComponent_*>_>
                                     (0x808,(ForElementType<UStaticMeshComponent_*> *)param_4,
                                      (int *)&param_4->field_0xcc);
                }
                *(int *)&param_4->field_0xc8 = iVar16 + 1;
                pTVar15 = param_4;
                if (*(TInlineComponentArray<UStaticMeshComponent_*,24> **)&param_4->field_0xc0 !=
                    (TInlineComponentArray<UStaticMeshComponent_*,24> *)0x0) {
                  pTVar15 = *(TInlineComponentArray<UStaticMeshComponent_*,24> **)
                             &param_4->field_0xc0;
                }
                *(UActorComponent **)(&pTVar15->field_0x0 + (longlong)iVar16 * 8) = local_d8;
              }
              else {
                pFVar19 = param_2->DataPtr;
                pFVar2 = pFVar19 + param_2->ArrayNum;
                if (pFVar19 != pFVar2) {
                  local_d0 = 0;
                  do {
                    if ((*pFVar19 == (FName)0x0) ||
                       (bVar9 = UActorComponent::ComponentHasTag(local_d8,*pFVar19), bVar9))
                    goto LAB_1491a4396;
                    pFVar19 = pFVar19 + 1;
                  } while (pFVar19 != pFVar2);
                }
              }
            }
          }
          TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        } while( true );
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 != ppAVar14);
  }
  return;
}

// GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic_const_> @ 1491a4630

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceMaterialInstanceDynamic::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection_const_> @ 1491a4670

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection_const_>
          (FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceMaterialParameterCollection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceMeshRendererInfo_const_> @ 1491a46b0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceMeshRendererInfo_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceNeighborGrid3D_const_> @ 1491a46f0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceNeighborGrid3D_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfacePlatformSet_const_> @ 1491a4730

FString * __cdecl
GetTypeName<UNiagaraDataInterfacePlatformSet_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfacePlatformSet::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D_const_> @ 1491a4770

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRasterizationGrid3D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTarget2D_const_> @ 1491a47b0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRenderTarget2D_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTarget2D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray_const_> @ 1491a47f0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTarget2DArray::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTargetCube_const_> @ 1491a4830

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRenderTargetCube_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTargetCube::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTargetVolume_const_> @ 1491a4870

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRenderTargetVolume_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTargetVolume::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_> @ 1491a48b0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UAnimatedSparseVolumeTexture> @ 1491a48f0

FString * __cdecl GetTypeName<UAnimatedSparseVolumeTexture>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNDIRenderTargetSimCacheData> @ 1491a4930

FString * __cdecl GetTypeName<UNDIRenderTargetSimCacheData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNDIRenderTargetSimCacheData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic> @ 1491a4970

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceMaterialInstanceDynamic::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection> @ 1491a49b0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceMaterialParameterCollection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceMeshRendererInfo> @ 1491a49f0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceMeshRendererInfo>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceNeighborGrid3D> @ 1491a4a30

FString * __cdecl GetTypeName<UNiagaraDataInterfaceNeighborGrid3D>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceParticleRead> @ 1491a4a70

FString * __cdecl GetTypeName<UNiagaraDataInterfaceParticleRead>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceParticleRead::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfacePlatformSet> @ 1491a4ab0

FString * __cdecl GetTypeName<UNiagaraDataInterfacePlatformSet>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfacePlatformSet::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D> @ 1491a4af0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRasterizationGrid3D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTarget2D> @ 1491a4b30

FString * __cdecl GetTypeName<UNiagaraDataInterfaceRenderTarget2D>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTarget2D::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray> @ 1491a4b70

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRenderTarget2DArray>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTarget2DArray::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTargetCube> @ 1491a4bb0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRenderTargetCube>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTargetCube::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRenderTargetVolume> @ 1491a4bf0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRenderTargetVolume>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRenderTargetVolume::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery> @ 1491a4c30

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraSimCache> @ 1491a4c70

FString * __cdecl GetTypeName<UNiagaraSimCache>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UTextureRenderTarget2DArray> @ 1491a4cb0

FString * __cdecl GetTypeName<UTextureRenderTarget2DArray>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UTextureRenderTargetCube> @ 1491a4cf0

FString * __cdecl GetTypeName<UTextureRenderTargetCube>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UTextureRenderTargetVolume> @ 1491a4d30

FString * __cdecl GetTypeName<UTextureRenderTargetVolume>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<USkeletalMeshComponent_*,`FNDIRigidMeshCollisionData::Update'::__l15::<lambda_1>_>_> @ 1491a4de0

void __cdecl
AlgoImpl::
HeapSortInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<USkeletalMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
          (USkeletalMeshComponent **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<USkeletalMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>
          param_4)

{
  USkeletalMeshComponent *pUVar1;
  USkeletalMeshComponent *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<USkeletalMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<USkeletalMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>
              *)&local_res20);
  iVar10 = param_2 + -1;
  lVar11 = (longlong)iVar10;
  if (0 < iVar10) {
    do {
      iVar8 = 0;
      pUVar1 = *param_1;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = pUVar1;
      if (1 < iVar10) {
        do {
          iVar4 = iVar8 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < iVar10) {
            uVar7 = ((uint)((ulonglong)param_1[(longlong)iVar4 + 2] >> 0x14) & 0xffff ^
                    (uint)((ulonglong)param_1[(longlong)iVar4 + 2] >> 4)) * -0x7a143595;
            uVar9 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            uVar7 = ((uint)((ulonglong)param_1[iVar6] >> 0x14) & 0xffff ^
                    (uint)((ulonglong)param_1[iVar6] >> 4)) * -0x7a143595;
            uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            if ((uVar9 >> 0x10 ^ uVar9) < (uVar7 >> 0x10 ^ uVar7)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          pUVar1 = param_1[iVar8];
          uVar7 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          pUVar2 = param_1[iVar6];
          uVar7 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                  -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          if ((uVar7 >> 0x10 ^ uVar7) <= (uVar9 >> 0x10 ^ uVar9)) break;
          param_1[iVar8] = pUVar2;
          param_1[iVar6] = pUVar1;
          iVar8 = iVar6;
        } while (iVar6 * 2 + 1 < iVar10);
      }
      iVar10 = iVar10 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapSortInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<UStaticMeshComponent_*,`FNDIRigidMeshCollisionData::Update'::__l15::<lambda_1>_>_> @ 1491a4fb0

void __cdecl
AlgoImpl::
HeapSortInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<UStaticMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
          (UStaticMeshComponent **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UStaticMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>
          param_4)

{
  UStaticMeshComponent *pUVar1;
  UStaticMeshComponent *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UStaticMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<UStaticMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>
              *)&local_res20);
  iVar10 = param_2 + -1;
  lVar11 = (longlong)iVar10;
  if (0 < iVar10) {
    do {
      iVar8 = 0;
      pUVar1 = *param_1;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = pUVar1;
      if (1 < iVar10) {
        do {
          iVar4 = iVar8 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < iVar10) {
            uVar7 = ((uint)((ulonglong)param_1[(longlong)iVar4 + 2] >> 0x14) & 0xffff ^
                    (uint)((ulonglong)param_1[(longlong)iVar4 + 2] >> 4)) * -0x7a143595;
            uVar9 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            uVar7 = ((uint)((ulonglong)param_1[iVar6] >> 0x14) & 0xffff ^
                    (uint)((ulonglong)param_1[iVar6] >> 4)) * -0x7a143595;
            uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            if ((uVar9 >> 0x10 ^ uVar9) < (uVar7 >> 0x10 ^ uVar7)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          pUVar1 = param_1[iVar8];
          uVar7 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          pUVar2 = param_1[iVar6];
          uVar7 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                  -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          if ((uVar7 >> 0x10 ^ uVar7) <= (uVar9 >> 0x10 ^ uVar9)) break;
          param_1[iVar8] = pUVar2;
          param_1[iVar6] = pUVar1;
          iVar8 = iVar6;
        } while (iVar6 * 2 + 1 < iVar10);
      }
      iVar10 = iVar10 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapSortInternal<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&)> @ 1491a5180

void __cdecl
AlgoImpl::
HeapSortInternal<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&)>
          (TWeakObjectPtr<AActor,FWeakObjectPtr> *param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_TWeakObjectPtr<AActor,FWeakObjectPtr>_ptr_TWeakObjectPtr<AActor,FWeakObjectPtr>_ptr
          *param_4)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr *pFVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
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
  iVar11 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1491a527b:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar11 = 0;
            FVar3 = param_1->WeakPtr;
            param_1->WeakPtr = param_1[lVar10].WeakPtr;
            param_1[lVar10].WeakPtr = FVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = (*param_4)(param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = &param_1[iVar6].WeakPtr;
                pFVar2 = &param_1[iVar11].WeakPtr;
                bVar5 = (*param_4)((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar2,
                                   (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar1);
                if (!bVar5) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = (*param_4)(param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = &param_1[iVar8].WeakPtr;
    pFVar2 = &param_1[iVar6].WeakPtr;
    bVar5 = (*param_4)((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar2,
                       (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar1);
    if (!bVar5) goto LAB_1491a527b;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapifyInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<USkeletalMeshComponent_*,`FNDIRigidMeshCollisionData::Update'::__l15::<lambda_1>_>_>_> @ 1491a5350

void __cdecl
AlgoImpl::
HeapifyInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<USkeletalMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>_>
          (USkeletalMeshComponent **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<USkeletalMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>_>
          param_4)

{
  USkeletalMeshComponent *pUVar1;
  USkeletalMeshComponent *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar4 = iVar8;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_1491a54d0:
      if (iVar10 == 0) {
        return;
      }
      iVar6 = iVar10 + -1;
      iVar8 = iVar4 + -2;
      iVar4 = iVar8;
      iVar10 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar7 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      uVar9 = ((uint)((ulonglong)param_1[(longlong)iVar8 + 2] >> 0x14) & 0xffff ^
              (uint)((ulonglong)param_1[(longlong)iVar8 + 2] >> 4)) * -0x7a143595;
      uVar11 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar9 = ((uint)((ulonglong)param_1[iVar7] >> 0x14) & 0xffff ^
              (uint)((ulonglong)param_1[iVar7] >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if ((uVar11 >> 0x10 ^ uVar11) < (uVar9 >> 0x10 ^ uVar9)) {
        iVar7 = iVar8;
      }
      iVar7 = iVar7 + 1;
    }
    pUVar1 = param_1[iVar6];
    uVar9 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar11 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    pUVar2 = param_1[iVar7];
    uVar9 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    if ((uVar9 >> 0x10 ^ uVar9) <= (uVar11 >> 0x10 ^ uVar11)) goto LAB_1491a54d0;
    param_1[iVar6] = pUVar2;
    param_1[iVar7] = pUVar1;
    iVar8 = iVar7 * 2 + 1;
    iVar6 = iVar7;
  } while( true );
}

// HeapifyInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UStaticMeshComponent_*,`FNDIRigidMeshCollisionData::Update'::__l15::<lambda_1>_>_>_> @ 1491a5510

void __cdecl
AlgoImpl::
HeapifyInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UStaticMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>_>
          (UStaticMeshComponent **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<UStaticMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>_>
          param_4)

{
  UStaticMeshComponent *pUVar1;
  UStaticMeshComponent *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar4 = iVar8;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_1491a5690:
      if (iVar10 == 0) {
        return;
      }
      iVar6 = iVar10 + -1;
      iVar8 = iVar4 + -2;
      iVar4 = iVar8;
      iVar10 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar7 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      uVar9 = ((uint)((ulonglong)param_1[(longlong)iVar8 + 2] >> 0x14) & 0xffff ^
              (uint)((ulonglong)param_1[(longlong)iVar8 + 2] >> 4)) * -0x7a143595;
      uVar11 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar9 = ((uint)((ulonglong)param_1[iVar7] >> 0x14) & 0xffff ^
              (uint)((ulonglong)param_1[iVar7] >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if ((uVar11 >> 0x10 ^ uVar11) < (uVar9 >> 0x10 ^ uVar9)) {
        iVar7 = iVar8;
      }
      iVar7 = iVar7 + 1;
    }
    pUVar1 = param_1[iVar6];
    uVar9 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar11 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    pUVar2 = param_1[iVar7];
    uVar9 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    if ((uVar9 >> 0x10 ^ uVar9) <= (uVar11 >> 0x10 ^ uVar11)) goto LAB_1491a5690;
    param_1[iVar6] = pUVar2;
    param_1[iVar7] = pUVar1;
    iVar8 = iVar7 * 2 + 1;
    iVar6 = iVar7;
  } while( true );
}

// InternalConstructor<UNiagaraDIRigidMeshCollisionFunctionLibrary> @ 1491a56d0

void __cdecl
InternalConstructor<UNiagaraDIRigidMeshCollisionFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UNiagaraDIRigidMeshCollisionFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceMaterialInstanceDynamic> @ 1491a5700

void __cdecl
InternalConstructor<UNiagaraDataInterfaceMaterialInstanceDynamic>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialInstanceDynamic__6B_;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[1]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[1]._padding_ = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceMaterialParameterCollection> @ 1491a5750

void __cdecl
InternalConstructor<UNiagaraDataInterfaceMaterialParameterCollection>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  int iVar1;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialParameterCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[1]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[1]._padding_ = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceMeshRendererInfo> @ 1491a57a0

void __cdecl InternalConstructor<UNiagaraDataInterfaceMeshRendererInfo>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceMeshRendererInfo *this;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this = (UNiagaraDataInterfaceMeshRendererInfo *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceMeshRendererInfo *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
    puVar3 = (undefined8 *)0x0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMeshRendererInfo__6B_;
    (this->MeshRenderer).field0_0x0.DebugPtr = (UNiagaraMeshRendererProperties *)0x0;
    (this->CachedMeshData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedMeshData).ArrayNum = 0;
    (this->CachedMeshData).ArrayMax = 0;
    puVar2 = operator_new(0x38);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &___7FNDIMeshRendererInfoProxy__6B_;
      *(undefined1 *)(puVar2 + 2) = 0;
      ((TVector2<float>_u_0 *)((longlong)puVar2 + 0x14))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      puVar3 = puVar2;
    }
    puVar2 = (undefined8 *)this->_padding_;
    if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      pcVar1 = *(code **)(this->_padding_ + 0x448);
      if (pcVar1 == UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl) {
        UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl(this);
        *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
        return;
      }
      (*pcVar1)();
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceNeighborGrid3D> @ 1491a5880

void __cdecl InternalConstructor<UNiagaraDataInterfaceNeighborGrid3D>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceGrid3D *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this = (UNiagaraDataInterfaceGrid3D *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceGrid3D *)0x0) {
    UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 8;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceNeighborGrid3D__6B_;
    this->SetResolutionMethod = CellSize;
    puVar1 = operator_new(0x60);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[9] = 0;
      puVar1[0xb] = 0;
      puVar1[1] = 0;
      *puVar1 = &___7FNiagaraDataInterfaceProxyNeighborGrid3D__6B_;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      puVar1[10] = 0;
      puVar2 = puVar1;
    }
    puVar1 = (undefined8 *)this->_padding_;
    if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001491a592b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceOcclusion> @ 1491a5940

void __cdecl InternalConstructor<UNiagaraDataInterfaceOcclusion>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceOcclusion__6B_;
    pFVar2 = operator_new(0x10);
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2->_padding_ = (longlong)&___7FNiagaraDataIntefaceProxyOcclusionQuery__6B_;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001491a59a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceParticleRead> @ 1491a59c0

void __cdecl InternalConstructor<UNiagaraDataInterfaceParticleRead>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceRWBase *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this = (UNiagaraDataInterfaceRWBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    puVar2 = (undefined8 *)0x0;
    *(undefined ***)this = &___7UNiagaraDataInterfaceParticleRead__6B_;
    *(undefined8 *)(this + 1) = 1;
    *(undefined4 *)&this[1].field_0x8 = 0;
    puVar1 = operator_new(0x60);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[9] = 0;
      puVar1[0xb] = 0;
      *puVar1 = &___7FNiagaraDataInterfaceProxyParticleRead__6B_;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      puVar1[10] = 0;
      puVar2 = puVar1;
    }
    puVar1 = *(undefined8 **)&this->field_0x28;
    if ((puVar1 != puVar2) &&
       (*(undefined8 **)&this->field_0x28 = puVar2, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001491a5a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfacePlatformSet> @ 1491a5a90

void __cdecl InternalConstructor<UNiagaraDataInterfacePlatformSet>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfacePlatformSet__6B_;
    FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)(this + 1));
    pFVar2 = operator_new(0x18);
    if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar2->_padding_ = 0;
      (pFVar2->SourceDIName).ComparisonIndex = 0;
      (pFVar2->SourceDIName).Number = 0;
      pFVar2[1]._padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FNDIPlatformSetProxy_NDIPlatformSetPrivate__6B_;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001491a5b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceRasterizationGrid3D> @ 1491a5b10

void __cdecl
InternalConstructor<UNiagaraDataInterfaceRasterizationGrid3D>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceGrid3D *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this = (UNiagaraDataInterfaceGrid3D *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceGrid3D *)0x0) {
    UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRasterizationGrid3D__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    puVar2 = (undefined8 *)0x0;
    puVar1 = operator_new(0x60);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[9] = 0;
      puVar1[0xb] = 0;
      *puVar1 = &___7FNiagaraDataInterfaceProxyRasterizationGrid3D__6B_;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      puVar1[10] = 0;
      puVar2 = puVar1;
    }
    puVar1 = (undefined8 *)this->_padding_;
    if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001491a5bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceRenderTarget2D> @ 1491a5be0

void __cdecl InternalConstructor<UNiagaraDataInterfaceRenderTarget2D>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceRWBase *this;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterfaceRWBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined2 *)&this[1].field_0x10 = 0x100;
    *(undefined ***)this =
         &UNiagaraDataInterfaceRenderTarget2D::_vftable__for__UNiagaraDataInterfaceRWBase__;
    this[1].field_0x13 = 3;
    *(undefined ***)(this + 1) =
         &UNiagaraDataInterfaceRenderTarget2D::
          _vftable__for__INiagaraSimCacheCustomStorageInterface__;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x18);
    puVar3 = (undefined8 *)0x0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined4 *)&this[2].field_0x2c = 0x80;
    *(undefined4 *)&this[2].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x34 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    puVar2 = operator_new(0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &___7FNiagaraDataInterfaceProxyRenderTarget2DProxy__6B_;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar3 = puVar2;
    }
    puVar2 = *(undefined8 **)&this->field_0x28;
    if ((puVar2 != puVar3) &&
       (*(undefined8 **)&this->field_0x28 = puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
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
    *(int *)&this[1].field_0x20 = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceRenderTarget2DArray> @ 1491a5d40

void __cdecl
InternalConstructor<UNiagaraDataInterfaceRenderTarget2DArray>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceRWBase *this;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterfaceRWBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceRenderTarget2DArray__6B_;
    this[1].field_0xd = 3;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x10);
    puVar2 = operator_new(0x60);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &___7FNiagaraDataInterfaceProxyRenderTarget2DArrayProxy__6B_;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar3 = puVar2;
    }
    puVar2 = *(undefined8 **)&this->field_0x28;
    if ((puVar2 != puVar3) &&
       (*(undefined8 **)&this->field_0x28 = puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
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
    *(int *)&this[1].field_0x18 = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceRenderTargetCube> @ 1491a5e60

void __cdecl InternalConstructor<UNiagaraDataInterfaceRenderTargetCube>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceRWBase *this;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterfaceRWBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceRenderTargetCube__6B_;
    this[1].field_0x5 = 3;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x8);
    puVar2 = operator_new(0x60);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[9] = 0;
      puVar2[0xb] = 0;
      puVar2[1] = 0;
      *puVar2 = &___7FNiagaraDataInterfaceProxyRenderTargetCubeProxy__6B_;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      puVar3 = puVar2;
    }
    puVar2 = *(undefined8 **)&this->field_0x28;
    if ((puVar2 != puVar3) &&
       (*(undefined8 **)&this->field_0x28 = puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
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
    *(int *)&this[1].field_0x10 = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceRenderTargetVolume> @ 1491a5f90

void __cdecl
InternalConstructor<UNiagaraDataInterfaceRenderTargetVolume>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceRWBase *this;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this = (UNiagaraDataInterfaceRWBase *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    this[1].field_0x15 = 3;
    *(undefined ***)this =
         &UNiagaraDataInterfaceRenderTargetVolume::_vftable__for__UNiagaraDataInterfaceRWBase__;
    *(undefined ***)(this + 1) =
         &UNiagaraDataInterfaceRenderTargetVolume::
          _vftable__for__INiagaraSimCacheCustomStorageInterface__;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x18);
    puVar2 = operator_new(0x60);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[9] = 0;
      puVar2[0xb] = 0;
      puVar2[1] = 0;
      *puVar2 = &___7FNiagaraDataInterfaceProxyRenderTargetVolumeProxy__6B_;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      puVar2[10] = 0;
      puVar3 = puVar2;
    }
    puVar2 = *(undefined8 **)&this->field_0x28;
    if ((puVar2 != puVar3) &&
       (*(undefined8 **)&this->field_0x28 = puVar3, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
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
    *(int *)&this[1].field_0x20 = iVar1;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceRigidMeshCollisionQuery> @ 1491a60c0

void __cdecl
InternalConstructor<UNiagaraDataInterfaceRigidMeshCollisionQuery>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar2 = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined4 *)&this[1].field_0x30 = 1;
    *(undefined2 *)&this[1].field_0x34 = 0;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRigidMeshCollisionQuery__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined4 *)&this[2]._padding_ = 100;
    pFVar1 = operator_new(0x60);
    if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar1[2]._padding_ = 0;
      pFVar1[2].SourceDIName.ComparisonIndex = 0;
      pFVar1[2].SourceDIName.Number = 0;
      pFVar1[4].SourceDIName.ComparisonIndex = 0;
      pFVar1[4].SourceDIName.Number = 0;
      pFVar1[5].SourceDIName.ComparisonIndex = 0;
      pFVar1[5].SourceDIName.Number = 0;
      pFVar1->_padding_ = (longlong)&___7FNDIRigidMeshCollisionProxy__6B_;
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
                    /* WARNING: Could not recover jumptable at 0x0001491a6193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UNiagaraDIRigidMeshCollisionFunctionLibrary> @ 1491a61b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDIRigidMeshCollisionFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDIRigidMeshCollisionFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraDIRigidMeshCollisionFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialInstanceDynamic> @ 1491a6260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialInstanceDynamic>(FVTableHelper *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraDataInterface *this;
  UNiagaraDataInterface *pUVar4;
  
  pUVar4 = (UNiagaraDataInterface *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraDataInterfaceMaterialInstanceDynamic::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialInstanceDynamic__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[1]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[1]._padding_ = iVar1;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialParameterCollection> @ 1491a6320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialParameterCollection>
          (FVTableHelper *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraDataInterface *this;
  UNiagaraDataInterface *pUVar4;
  
  pUVar4 = (UNiagaraDataInterface *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraDataInterfaceMaterialParameterCollection::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialParameterCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[1]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[1]._padding_ = iVar1;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMeshRendererInfo> @ 1491a63e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMeshRendererInfo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceMeshRendererInfo::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMeshRendererInfo__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceNeighborGrid3D> @ 1491a64a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceNeighborGrid3D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceGrid3D *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceNeighborGrid3D::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceGrid3D *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceGrid3D *)0x0) {
    UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceNeighborGrid3D__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceOcclusion> @ 1491a6550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceOcclusion>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceOcclusion::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceOcclusion__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceParticleRead> @ 1491a6600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceParticleRead>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceParticleRead::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceParticleRead__6B_;
    *(undefined8 *)(this + 1) = 1;
    *(undefined4 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfacePlatformSet> @ 1491a66c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfacePlatformSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfacePlatformSet::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfacePlatformSet__6B_;
    FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRasterizationGrid3D> @ 1491a6780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRasterizationGrid3D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceGrid3D *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceRasterizationGrid3D::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceGrid3D *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceGrid3D *)0x0) {
    UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRasterizationGrid3D__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2D> @ 1491a6830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceRenderTarget2D::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined2 *)&this[1].field_0x10 = 0x100;
    *(undefined ***)this =
         &UNiagaraDataInterfaceRenderTarget2D::_vftable__for__UNiagaraDataInterfaceRWBase__;
    this[1].field_0x13 = 3;
    *(undefined ***)(this + 1) =
         &UNiagaraDataInterfaceRenderTarget2D::
          _vftable__for__INiagaraSimCacheCustomStorageInterface__;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x18);
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined4 *)&this[2].field_0x2c = 0x80;
    *(undefined4 *)&this[2].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x34 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2DArray> @ 1491a6940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2DArray>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceRenderTarget2DArray::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceRenderTarget2DArray__6B_;
    this[1].field_0xd = 3;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x10);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetCube> @ 1491a6a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetCube>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceRenderTargetCube::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceRenderTargetCube__6B_;
    this[1].field_0x5 = 3;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x8);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetVolume> @ 1491a6ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceRenderTargetVolume::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    this[1].field_0x15 = 3;
    *(undefined ***)this =
         &UNiagaraDataInterfaceRenderTargetVolume::_vftable__for__UNiagaraDataInterfaceRWBase__;
    *(undefined ***)(this + 1) =
         &UNiagaraDataInterfaceRenderTargetVolume::
          _vftable__for__INiagaraSimCacheCustomStorageInterface__;
    FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
              ((FNiagaraUserParameterBinding *)&this[1].field_0x18);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRigidMeshCollisionQuery> @ 1491a6b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRigidMeshCollisionQuery>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceRigidMeshCollisionQuery::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    *(undefined4 *)&this[1].field_0x30 = 1;
    this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRigidMeshCollisionQuery__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)0x0;
    *(undefined2 *)&this[1].field_0x34 = 0;
    *(undefined4 *)&this[2]._padding_ = 100;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> @ 1491a6c70

uint __cdecl
Freeze::IntrinsicAppendHash<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>
          (TArray<ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> @ 1491a6c90

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>
          (TArray<ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> @ 1491a6cb0

void __cdecl
Freeze::IntrinsicToString<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>
          (TArray<ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<enum_ENiagaraParticleDataValueType>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicUnfrozenCopy<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> @ 1491a6d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<enum_ENiagaraParticleDataValueType>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicWriteMemoryImage<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> @ 1491a6db0

void __cdecl
Freeze::IntrinsicWriteMemoryImage<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<enum_ENiagaraParticleDataValueType>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntroSortInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<USkeletalMeshComponent_*,`FNDIRigidMeshCollisionData::Update'::__l15::<lambda_1>_>_> @ 1491a6e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<USkeletalMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
          (USkeletalMeshComponent **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<USkeletalMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>
          param_4)

{
  USkeletalMeshComponent **ppUVar1;
  USkeletalMeshComponent *pUVar2;
  int iVar3;
  uint uVar4;
  USkeletalMeshComponent **ppUVar5;
  uint uVar6;
  USkeletalMeshComponent **ppUVar7;
  USkeletalMeshComponent **ppUVar8;
  USkeletalMeshComponent **ppUVar9;
  USkeletalMeshComponent **ppUVar10;
  USkeletalMeshComponent ***pppUVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  USkeletalMeshComponent **local_348;
  USkeletalMeshComponent **local_338;
  USkeletalMeshComponent **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    pppUVar11 = &local_338;
    do {
      ppUVar5 = pppUVar11[1];
      ppUVar7 = *pppUVar11;
      ppUVar1 = pppUVar11[2];
      iVar3 = (int)((longlong)ppUVar5 - (longlong)ppUVar7 >> 3) + 1;
      local_348._0_4_ = (int)ppUVar1;
      ppUVar10 = ppUVar7;
      if ((int)local_348 != 0) {
LAB_1491a6ee0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar8 = ppUVar5 + 1;
          pUVar2 = ppUVar10[iVar3 >> 1];
          ppUVar10[iVar3 >> 1] = *ppUVar10;
          *ppUVar10 = pUVar2;
          ppUVar7 = ppUVar10;
LAB_1491a6f10:
          ppUVar7 = ppUVar7 + 1;
          if (ppUVar7 <= ppUVar5) goto code_r0x0001491a6f19;
          goto LAB_1491a6f70;
        }
        for (; ppUVar7 = ppUVar10, ppUVar1 = ppUVar10, ppUVar10 < ppUVar5; ppUVar5 = ppUVar5 + -1) {
          while (ppUVar8 = ppUVar7, ppUVar1 = ppUVar1 + 1, ppUVar1 <= ppUVar5) {
            uVar4 = ((uint)((ulonglong)*ppUVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar8 >> 4)
                    ) * -0x7a143595;
            uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            uVar4 = ((uint)((ulonglong)*ppUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar1 >> 4)
                    ) * -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            ppUVar7 = ppUVar1;
            if ((uVar4 >> 0x10 ^ uVar4) <= (uVar6 >> 0x10 ^ uVar6)) {
              ppUVar7 = ppUVar8;
            }
          }
          pUVar2 = *ppUVar8;
          *ppUVar8 = *ppUVar5;
          *ppUVar5 = pUVar2;
        }
        goto LAB_1491a707a;
      }
LAB_1491a7069:
      local_348 = ppUVar1;
      HeapSortInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<USkeletalMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
                (ppUVar7,iVar3,param_3,param_4);
LAB_1491a707a:
      pppUVar11 = pppUVar11 + -3;
    } while (&local_338 <= pppUVar11);
  }
  return;
code_r0x0001491a6f19:
  uVar4 = ((uint)((ulonglong)*ppUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar10 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = ((uint)((ulonglong)*ppUVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar7 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if ((uVar4 >> 0x10 ^ uVar4) <= (uVar6 >> 0x10 ^ uVar6)) goto LAB_1491a6f10;
LAB_1491a6f70:
  do {
    ppUVar9 = ppUVar8;
    ppUVar8 = ppUVar9 + -1;
    if (ppUVar8 <= ppUVar10) break;
    uVar4 = ((uint)((ulonglong)*ppUVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar8 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = ((uint)((ulonglong)*ppUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar10 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  } while ((uVar4 >> 0x10 ^ uVar4) <= (uVar6 >> 0x10 ^ uVar6));
  if (ppUVar7 <= ppUVar8) {
    pUVar2 = *ppUVar7;
    *ppUVar7 = *ppUVar8;
    *ppUVar8 = pUVar2;
    goto LAB_1491a6f10;
  }
  pUVar2 = *ppUVar10;
  local_348._0_4_ = (int)local_348 + -1;
  *ppUVar10 = *ppUVar8;
  *ppUVar8 = pUVar2;
  if ((longlong)((longlong)ppUVar8 + (-8 - (longlong)ppUVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar5 - (longlong)ppUVar7 & 0xfffffffffffffff8U)) {
    if (ppUVar7 < ppUVar5) {
      *pppUVar11 = ppUVar7;
      pppUVar11[1] = ppUVar5;
      *(int *)(pppUVar11 + 2) = (int)local_348;
      pppUVar11 = pppUVar11 + 3;
    }
    if (ppUVar8 <= ppUVar10 + 1) goto LAB_1491a707a;
    ppUVar5 = ppUVar9 + -2;
    ppUVar7 = ppUVar10;
  }
  else {
    if (ppUVar10 + 1 < ppUVar8) {
      *pppUVar11 = ppUVar10;
      pppUVar11[1] = ppUVar9 + -2;
      *(int *)(pppUVar11 + 2) = (int)local_348;
      pppUVar11 = pppUVar11 + 3;
    }
    if (ppUVar5 <= ppUVar7) goto LAB_1491a707a;
  }
  iVar3 = (int)((longlong)ppUVar5 - (longlong)ppUVar7 >> 3) + 1;
  ppUVar10 = ppUVar7;
  if ((int)local_348 == 0) goto LAB_1491a7069;
  goto LAB_1491a6ee0;
}

// IntroSortInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<UStaticMeshComponent_*,`FNDIRigidMeshCollisionData::Update'::__l15::<lambda_1>_>_> @ 1491a7170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<UStaticMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
          (UStaticMeshComponent **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UStaticMeshComponent_*,_public:_void___cdecl_FNDIRigidMeshCollisionData::Update(UNiagaraDataInterfaceRigidMeshCollisionQuery_*)_::_15_::<lambda_1>_>
          param_4)

{
  UStaticMeshComponent **ppUVar1;
  UStaticMeshComponent *pUVar2;
  int iVar3;
  uint uVar4;
  UStaticMeshComponent **ppUVar5;
  uint uVar6;
  UStaticMeshComponent **ppUVar7;
  UStaticMeshComponent **ppUVar8;
  UStaticMeshComponent **ppUVar9;
  UStaticMeshComponent **ppUVar10;
  UStaticMeshComponent ***pppUVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  UStaticMeshComponent **local_348;
  UStaticMeshComponent **local_338;
  UStaticMeshComponent **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    pppUVar11 = &local_338;
    do {
      ppUVar5 = pppUVar11[1];
      ppUVar7 = *pppUVar11;
      ppUVar1 = pppUVar11[2];
      iVar3 = (int)((longlong)ppUVar5 - (longlong)ppUVar7 >> 3) + 1;
      local_348._0_4_ = (int)ppUVar1;
      ppUVar10 = ppUVar7;
      if ((int)local_348 != 0) {
LAB_1491a7220:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar8 = ppUVar5 + 1;
          pUVar2 = ppUVar10[iVar3 >> 1];
          ppUVar10[iVar3 >> 1] = *ppUVar10;
          *ppUVar10 = pUVar2;
          ppUVar7 = ppUVar10;
LAB_1491a7250:
          ppUVar7 = ppUVar7 + 1;
          if (ppUVar7 <= ppUVar5) goto code_r0x0001491a7259;
          goto LAB_1491a72b0;
        }
        for (; ppUVar7 = ppUVar10, ppUVar1 = ppUVar10, ppUVar10 < ppUVar5; ppUVar5 = ppUVar5 + -1) {
          while (ppUVar8 = ppUVar7, ppUVar1 = ppUVar1 + 1, ppUVar1 <= ppUVar5) {
            uVar4 = ((uint)((ulonglong)*ppUVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar8 >> 4)
                    ) * -0x7a143595;
            uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            uVar4 = ((uint)((ulonglong)*ppUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar1 >> 4)
                    ) * -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            ppUVar7 = ppUVar1;
            if ((uVar4 >> 0x10 ^ uVar4) <= (uVar6 >> 0x10 ^ uVar6)) {
              ppUVar7 = ppUVar8;
            }
          }
          pUVar2 = *ppUVar8;
          *ppUVar8 = *ppUVar5;
          *ppUVar5 = pUVar2;
        }
        goto LAB_1491a73ba;
      }
LAB_1491a73a9:
      local_348 = ppUVar1;
      HeapSortInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<UStaticMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
                (ppUVar7,iVar3,param_3,param_4);
LAB_1491a73ba:
      pppUVar11 = pppUVar11 + -3;
    } while (&local_338 <= pppUVar11);
  }
  return;
code_r0x0001491a7259:
  uVar4 = ((uint)((ulonglong)*ppUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar10 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = ((uint)((ulonglong)*ppUVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar7 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if ((uVar4 >> 0x10 ^ uVar4) <= (uVar6 >> 0x10 ^ uVar6)) goto LAB_1491a7250;
LAB_1491a72b0:
  do {
    ppUVar9 = ppUVar8;
    ppUVar8 = ppUVar9 + -1;
    if (ppUVar8 <= ppUVar10) break;
    uVar4 = ((uint)((ulonglong)*ppUVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar8 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = ((uint)((ulonglong)*ppUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar10 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  } while ((uVar4 >> 0x10 ^ uVar4) <= (uVar6 >> 0x10 ^ uVar6));
  if (ppUVar7 <= ppUVar8) {
    pUVar2 = *ppUVar7;
    *ppUVar7 = *ppUVar8;
    *ppUVar8 = pUVar2;
    goto LAB_1491a7250;
  }
  pUVar2 = *ppUVar10;
  local_348._0_4_ = (int)local_348 + -1;
  *ppUVar10 = *ppUVar8;
  *ppUVar8 = pUVar2;
  if ((longlong)((longlong)ppUVar8 + (-8 - (longlong)ppUVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar5 - (longlong)ppUVar7 & 0xfffffffffffffff8U)) {
    if (ppUVar7 < ppUVar5) {
      *pppUVar11 = ppUVar7;
      pppUVar11[1] = ppUVar5;
      *(int *)(pppUVar11 + 2) = (int)local_348;
      pppUVar11 = pppUVar11 + 3;
    }
    if (ppUVar8 <= ppUVar10 + 1) goto LAB_1491a73ba;
    ppUVar5 = ppUVar9 + -2;
    ppUVar7 = ppUVar10;
  }
  else {
    if (ppUVar10 + 1 < ppUVar8) {
      *pppUVar11 = ppUVar10;
      pppUVar11[1] = ppUVar9 + -2;
      *(int *)(pppUVar11 + 2) = (int)local_348;
      pppUVar11 = pppUVar11 + 3;
    }
    if (ppUVar5 <= ppUVar7) goto LAB_1491a73ba;
  }
  iVar3 = (int)((longlong)ppUVar5 - (longlong)ppUVar7 >> 3) + 1;
  ppUVar10 = ppUVar7;
  if ((int)local_348 == 0) goto LAB_1491a73a9;
  goto LAB_1491a7220;
}

// IntroSortInternal<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&)> @ 1491a74b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&)>
          (TWeakObjectPtr<AActor,FWeakObjectPtr> *param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_TWeakObjectPtr<AActor,FWeakObjectPtr>_ptr_TWeakObjectPtr<AActor,FWeakObjectPtr>_ptr
          *param_4)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr *pFVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr *pFVar7;
  TWeakObjectPtr<AActor,FWeakObjectPtr> **ppTVar8;
  int iVar9;
  FWeakObjectPtr *pFVar10;
  float fVar11;
  undefined1 auStack_398 [48];
  TWeakObjectPtr<AActor,FWeakObjectPtr> *local_368;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *local_358;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar11;
    memset(local_340,0,0x2e8);
    ppTVar8 = &local_358;
    do {
      pFVar4 = &ppTVar8[1]->WeakPtr;
      pFVar7 = &(*ppTVar8)->WeakPtr;
      local_368 = ppTVar8[2];
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar7 >> 3) + 1;
      pFVar10 = pFVar7;
      iVar9 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_1491a7570:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar5 = pFVar4 + 1;
          FVar1 = pFVar10[iVar3 >> 1];
          pFVar10[iVar3 >> 1] = *pFVar10;
          *pFVar10 = FVar1;
          pFVar7 = pFVar10;
LAB_1491a75a0:
          pFVar7 = pFVar7 + 1;
          if (pFVar7 <= pFVar4) goto code_r0x0001491a75a9;
          goto LAB_1491a75b6;
        }
        for (; pFVar5 = pFVar10, pFVar7 = pFVar10, pFVar10 < pFVar4; pFVar4 = pFVar4 + -1) {
          while (pFVar6 = pFVar5, pFVar7 = pFVar7 + 1, pFVar7 <= pFVar4) {
            bVar2 = (*param_4)((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar6,
                               (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar7);
            pFVar5 = pFVar7;
            if (!bVar2) {
              pFVar5 = pFVar6;
            }
          }
          FVar1 = *pFVar6;
          *pFVar6 = *pFVar4;
          *pFVar4 = FVar1;
        }
        goto LAB_1491a767b;
      }
LAB_1491a766a:
      HeapSortInternal<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&)>
                ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar7,iVar3,param_3,param_4);
LAB_1491a767b:
      ppTVar8 = ppTVar8 + -3;
    } while (&local_358 <= ppTVar8);
  }
  return;
code_r0x0001491a75a9:
  bVar2 = (*param_4)((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar10,
                     (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar7);
  if (!bVar2) goto LAB_1491a75a0;
LAB_1491a75b6:
  do {
    pFVar6 = pFVar5;
    pFVar5 = pFVar6 + -1;
    if (pFVar5 <= pFVar10) break;
    bVar2 = (*param_4)((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar5,
                       (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar10);
  } while (!bVar2);
  if (pFVar7 <= pFVar5) {
    FVar1 = *pFVar7;
    *pFVar7 = *pFVar5;
    *pFVar5 = FVar1;
    goto LAB_1491a75a0;
  }
  FVar1 = *pFVar10;
  iVar9 = iVar9 + -1;
  *pFVar10 = *pFVar5;
  *pFVar5 = FVar1;
  if ((longlong)((longlong)pFVar5 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar4 - (longlong)pFVar7 & 0xfffffffffffffff8U)) {
    if (pFVar7 < pFVar4) {
      *ppTVar8 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar7;
      ppTVar8[1] = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar4;
      *(int *)(ppTVar8 + 2) = iVar9;
      ppTVar8 = ppTVar8 + 3;
    }
    if (pFVar5 <= pFVar10 + 1) goto LAB_1491a767b;
    pFVar4 = pFVar6 + -2;
    pFVar7 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar5) {
      *ppTVar8 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar10;
      ppTVar8[1] = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)(pFVar6 + -2);
      *(int *)(ppTVar8 + 2) = iVar9;
      ppTVar8 = ppTVar8 + 3;
    }
    if (pFVar4 <= pFVar7) goto LAB_1491a767b;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar7 >> 3) + 1;
  pFVar10 = pFVar7;
  if (iVar9 == 0) goto LAB_1491a766a;
  goto LAB_1491a7570;
}

// NewObject<UAnimatedSparseVolumeTexture> @ 1491a7740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimatedSparseVolumeTexture * __cdecl NewObject<UAnimatedSparseVolumeTexture>(UObject *param_1)

{
  UClass *pUVar1;
  UAnimatedSparseVolumeTexture *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAnimatedSparseVolumeTexture *)
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

// NewObject<UNDIRenderTargetSimCacheData> @ 1491a77e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNDIRenderTargetSimCacheData * __cdecl NewObject<UNDIRenderTargetSimCacheData>(UObject *param_1)

{
  UClass *pUVar1;
  UNDIRenderTargetSimCacheData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNDIRenderTargetSimCacheData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNDIRenderTargetSimCacheData *)
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

// ReleaseRenderTarget<FRenderTarget2DArrayRWInstanceData_GameThread> @ 1491a7b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
ReleaseRenderTarget<FRenderTarget2DArrayRWInstanceData_GameThread>
          (FNiagaraSystemInstance *param_1,FRenderTarget2DArrayRWInstanceData_GameThread *param_2)

{
  FNiagaraWorldManager *this;
  
  if (((param_2->bManagedTexture != false) &&
      (param_2->TargetTexture != (UTextureRenderTarget2DArray *)0x0)) &&
     (this = FNiagaraSystemInstance::GetWorldManager(param_1), this != (FNiagaraWorldManager *)0x0))
  {
    (param_2->TargetTexture->OverrideFormat).Value = '\0';
    FNiagaraWorldManager::ObjectPoolReturn(this,(UObject *)param_2->TargetTexture);
    FNiagaraWorldManager::RemoveReferencedObject(this,(UObject *)param_2->TargetTexture);
    param_2->TargetTexture = (UTextureRenderTarget2DArray *)0x0;
    param_2->bManagedTexture = false;
  }
  return;
}

// ReleaseRenderTarget<FRenderTarget2DRWInstanceData_GameThread> @ 1491a7be0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
ReleaseRenderTarget<FRenderTarget2DRWInstanceData_GameThread>
          (FNiagaraSystemInstance *param_1,FRenderTarget2DRWInstanceData_GameThread *param_2)

{
  FNiagaraWorldManager *this;
  
  if (((param_2->bManagedTexture != false) &&
      (param_2->TargetTexture != (UTextureRenderTarget2D *)0x0)) &&
     (this = FNiagaraSystemInstance::GetWorldManager(param_1), this != (FNiagaraWorldManager *)0x0))
  {
    (param_2->TargetTexture->OverrideFormat).Value = '\0';
    FNiagaraWorldManager::ObjectPoolReturn(this,(UObject *)param_2->TargetTexture);
    FNiagaraWorldManager::RemoveReferencedObject(this,(UObject *)param_2->TargetTexture);
    param_2->TargetTexture = (UTextureRenderTarget2D *)0x0;
    param_2->bManagedTexture = false;
  }
  return;
}

// ReleaseRenderTarget<FRenderTargetCubeRWInstanceData_GameThread> @ 1491a7c50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
ReleaseRenderTarget<FRenderTargetCubeRWInstanceData_GameThread>
          (FNiagaraSystemInstance *param_1,FRenderTargetCubeRWInstanceData_GameThread *param_2)

{
  FNiagaraWorldManager *this;
  
  if (((param_2->bManagedTexture != false) &&
      (param_2->TargetTexture != (UTextureRenderTargetCube *)0x0)) &&
     (this = FNiagaraSystemInstance::GetWorldManager(param_1), this != (FNiagaraWorldManager *)0x0))
  {
    (param_2->TargetTexture->OverrideFormat).Value = '\0';
    FNiagaraWorldManager::ObjectPoolReturn(this,(UObject *)param_2->TargetTexture);
    FNiagaraWorldManager::RemoveReferencedObject(this,(UObject *)param_2->TargetTexture);
    param_2->TargetTexture = (UTextureRenderTargetCube *)0x0;
    param_2->bManagedTexture = false;
  }
  return;
}

// ReleaseRenderTarget<FRenderTargetVolumeRWInstanceData_GameThread> @ 1491a7cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
ReleaseRenderTarget<FRenderTargetVolumeRWInstanceData_GameThread>
          (FNiagaraSystemInstance *param_1,FRenderTargetVolumeRWInstanceData_GameThread *param_2)

{
  FNiagaraWorldManager *this;
  
  if (((param_2->bManagedTexture != false) &&
      (param_2->TargetTexture != (UTextureRenderTargetVolume *)0x0)) &&
     (this = FNiagaraSystemInstance::GetWorldManager(param_1), this != (FNiagaraWorldManager *)0x0))
  {
    (param_2->TargetTexture->OverrideFormat).Value = '\0';
    FNiagaraWorldManager::ObjectPoolReturn(this,(UObject *)param_2->TargetTexture);
    FNiagaraWorldManager::RemoveReferencedObject(this,(UObject *)param_2->TargetTexture);
    param_2->TargetTexture = (UTextureRenderTargetVolume *)0x0;
    param_2->bManagedTexture = false;
  }
  return;
}

// RemapPreviousTransforms<1> @ 1491a7d30

void __cdecl
NDIRigidMeshCollisionLocal::RemapPreviousTransforms<1>
          (TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> *param_1,
          TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> *param_2,
          FNDIRigidMeshCollisionElementOffset *param_3,FNDIRigidMeshCollisionElementOffset *param_4,
          FNDIRigidMeshCollisionArrays *param_5)

{
  code *pcVar1;
  bool bVar2;
  FComponentBodyCount *pFVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FComponentBodyCount *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  FNDIRigidMeshCollisionElementOffset *local_res18;
  FNDIRigidMeshCollisionElementOffset *local_res20;
  uint local_48;
  uint local_44;
  
  pFVar8 = param_2->DataPtr;
  uVar9 = 0;
  pFVar3 = pFVar8 + param_2->ArrayNum;
  local_48 = 0;
  local_44 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  do {
    if (pFVar8 == pFVar3) {
      return;
    }
    uVar6 = 0;
    uVar10 = 0;
    uVar11 = 0;
    iVar5 = 0;
    lVar7 = 0;
    while( true ) {
      if ((iVar5 < 0) || (param_1->ArrayNum <= iVar5)) goto LAB_1491a7eec;
      if ((iVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar4 = (uint *)((longlong)&param_1->DataPtr->ComponentHash + lVar7);
      if ((((*puVar4 == pFVar8->ComponentHash) && (puVar4[1] == pFVar8->BoxCount)) &&
          (puVar4[2] == pFVar8->SphereCount)) && (puVar4[3] == pFVar8->CapsuleCount)) break;
      uVar6 = uVar6 + puVar4[1];
      iVar5 = iVar5 + 1;
      uVar10 = uVar10 + puVar4[2];
      lVar7 = lVar7 + 0x10;
      uVar11 = uVar11 + puVar4[3];
    }
    `NDIRigidMeshCollisionLocal::RemapPreviousTransforms<1>'::__l2::<lambda_1>::operator()
              (local_res10,&param_5->CurrentTransform,&param_5->PreviousTransform,uVar6,uVar10,
               uVar11,uVar9,local_48,local_44,local_res18,local_res20,pFVar8);
    `NDIRigidMeshCollisionLocal::RemapPreviousTransforms<1>'::__l2::<lambda_1>::operator()
              (local_res10,&param_5->CurrentInverse,&param_5->PreviousInverse,uVar6,uVar10,uVar11,
               uVar9,local_48,local_44,local_res18,local_res20,pFVar8);
LAB_1491a7eec:
    local_48 = local_48 + pFVar8->SphereCount;
    local_44 = local_44 + pFVar8->CapsuleCount;
    uVar9 = uVar9 + pFVar8->BoxCount;
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// RemapPreviousTransforms<0> @ 1491a7f50

void __cdecl
NDIRigidMeshCollisionLocal::RemapPreviousTransforms<0>
          (TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> *param_1,
          TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> *param_2,
          FNDIRigidMeshCollisionElementOffset *param_3,FNDIRigidMeshCollisionElementOffset *param_4,
          FNDIRigidMeshCollisionArrays *param_5)

{
  code *pcVar1;
  FNDIRigidMeshCollisionElementOffset *pFVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FComponentBodyCount *pFVar8;
  uint uVar9;
  FComponentBodyCount *pFVar10;
  uint uVar11;
  undefined1 local_res10 [16];
  FNDIRigidMeshCollisionElementOffset *local_res20;
  
  pFVar8 = param_2->DataPtr;
  uVar6 = 0;
  uVar11 = 0;
  uVar9 = 0;
  pFVar10 = pFVar8 + param_2->ArrayNum;
  local_res20 = param_4;
  do {
    if (pFVar8 == pFVar10) {
      return;
    }
    lVar7 = 0;
    for (iVar5 = 0; (pFVar2 = local_res20, -1 < iVar5 && (iVar5 < param_1->ArrayNum));
        iVar5 = iVar5 + 1) {
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar4 = (uint *)((longlong)&param_1->DataPtr->ComponentHash + lVar7);
      if ((((*puVar4 == pFVar8->ComponentHash) && (puVar4[1] == pFVar8->BoxCount)) &&
          (puVar4[2] == pFVar8->SphereCount)) && (puVar4[3] == pFVar8->CapsuleCount))
      goto LAB_1491a809e;
      lVar7 = lVar7 + 0x10;
    }
    `NDIRigidMeshCollisionLocal::RemapPreviousTransforms<0>'::__l2::<lambda_1>::operator()
              (local_res10,&param_5->CurrentTransform,&param_5->PreviousTransform,uVar6,uVar11,uVar9
               ,uVar6,uVar11,uVar9,local_res20,local_res20,pFVar8);
    `NDIRigidMeshCollisionLocal::RemapPreviousTransforms<0>'::__l2::<lambda_1>::operator()
              (local_res10,&param_5->CurrentInverse,&param_5->PreviousInverse,uVar6,uVar11,uVar9,
               uVar6,uVar11,uVar9,pFVar2,pFVar2,pFVar8);
LAB_1491a809e:
    uVar6 = uVar6 + pFVar8->BoxCount;
    uVar11 = uVar11 + pFVar8->SphereCount;
    uVar9 = uVar9 + pFVar8->CapsuleCount;
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// StableRemoveIf<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,`FNDIRigidMeshCollisionData::TrimMissingActors'::__l2::<lambda_1>_> @ 1491a8f30

int __cdecl
Algo::
StableRemoveIf<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,_FNDIRigidMeshCollisionData::TrimMissingActors_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  bool bVar3;
  FWeakObjectPtr *this;
  FWeakObjectPtr *this_00;
  
  pFVar2 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  this_00 = pFVar2;
  do {
    this = this_00;
    if (this == pFVar2 + iVar1) goto LAB_1491a8f9f;
    this_00 = this + 1;
    bVar3 = FWeakObjectPtr::IsValid(this);
  } while (bVar3);
  for (; this_00 != pFVar2 + iVar1; this_00 = this_00 + 1) {
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if (bVar3) {
      *this = *this_00;
      this = this + 1;
    }
  }
LAB_1491a8f9f:
  return (int)((longlong)this - (longlong)pFVar2 >> 3);
}

// StaticGetTypeLayoutDesc<enum_ENiagaraParticleDataValueType> @ 1491a8fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<enum_ENiagaraParticleDataValueType>(void)

{
  if ((DAT_1552756ef & 2) == 0) {
    DAT_1552756ef = DAT_1552756ef | 3;
    _DAT_1552756e0 = 1;
    _DAT_155275690 = L"ENiagaraParticleDataValueType";
    _DAT_1552756a8 =
         TStaticGetTypeLayoutHelper<enum_ENiagaraParticleDataValueType>::CallWriteMemoryImage;
    _DAT_1552756b0 =
         TStaticGetTypeLayoutHelper<enum_ENiagaraParticleDataValueType>::CallUnfrozenCopy;
    _DAT_1552756b8 = TStaticGetTypeLayoutHelper<enum_ENiagaraParticleDataValueType>::CallAppendHash;
    _DAT_1552756c0 =
         TStaticGetTypeLayoutHelper<enum_ENiagaraParticleDataValueType>::CallGetTargetAlignment;
    _DAT_1552756c8 = TStaticGetTypeLayoutHelper<enum_ENiagaraParticleDataValueType>::CallToString;
    _DAT_1552756a0 = TStaticGetTypeLayoutHelper<enum_ENiagaraParticleDataValueType>::CallDestroy;
    _DAT_1552756e8 = 1;
    DAT_1552756ec = 0;
    _DAT_1552756e4 = 1;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ENiagaraParticleDataValueType>::Do(void)'
          ::__l2::TypeBuffer;
}

// Transform<TArray<AActor_*,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>_&,`UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors'::__l5::<lambda_1>_> @ 1491a9080

/* WARNING: Removing unreachable block (ram,0x0001491a9204) */

void __cdecl
Algo::
Transform<TArray<AActor_*,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>_&,_UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors_::__l5::<lambda_1>_>
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UObject *local_68;
  undefined1 local_60 [24];
  FUtf8String local_48;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60._16_8_ = 0;
    local_60._8_8_ = 0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_60._0_8_ = 0;
    FUtf8String::Reset(&local_48,0);
    local_68 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_60,(FObjectPtr)&local_68);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_60) &&
        ((FScriptContainerElement *)local_60 < pFVar4 + (longlong)param_2->ArrayMax * 0x28)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
    *(undefined8 *)pFVar4 = local_60._0_8_;
    *(undefined8 *)(pFVar4 + 8) = local_60._8_8_;
    *(undefined8 *)(pFVar4 + 0x10) = local_60._16_8_;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x18) = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar4 + 0x20) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + 0x24) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FNiagaraCopySVTToDenseBufferCS> @ 1491a9240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FNiagaraCopySVTToDenseBufferCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FNiagaraCopySVTToDenseBufferCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FNiagaraCopySVTToDenseBufferCS *pFVar4;
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

// UpdateAssetArrays<USkeletalMeshComponent,1> @ 1491a9500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::UpdateAssetArrays<USkeletalMeshComponent,1>
          (TArrayView<USkeletalMeshComponent_*_const,int> *param_1,TVector<double> *param_2,
          FNDIRigidMeshCollisionArrays *param_3,uint *param_4,uint *param_5,uint *param_6,
          Builder *param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeletalMeshComponent *this;
  UBodySetup *pUVar3;
  FName FVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  UPhysicsAsset *pUVar13;
  USkeletalMesh *pUVar14;
  longlong lVar15;
  int *piVar16;
  FScriptContainerElement *pFVar17;
  USkeletalMeshComponent **ppUVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  FNDIRigidMeshCollisionArrays *local_res18 [2];
  undefined1 local_288 [8];
  USkeletalMeshComponent **local_280;
  Builder *local_278;
  USkeletalMeshComponent **local_270;
  TVector<double> *local_268;
  FNDIRigidMeshCollisionArrays **ppFStack_260;
  uint *local_258;
  uint *puStack_250;
  uint *local_248;
  TVector<double>_u_0 local_240;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double dStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  TVector<double> *local_1c8;
  FNDIRigidMeshCollisionArrays **ppFStack_1c0;
  uint *local_1b8;
  uint *puStack_1b0;
  uint *local_1a8;
  undefined1 local_198 [48];
  double local_168;
  TMatrix<double> local_158 [2];
  
  uVar12 = _UNK_15061cc8c;
  uVar11 = _UNK_15061cc88;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  ppUVar18 = param_1->DataPtr;
  ppFStack_260 = local_res18;
  puStack_250 = param_5;
  local_248 = param_6;
  local_278 = param_7;
  local_270 = ppUVar18 + param_1->ArrayNum;
  local_res18[0] = param_3;
  local_268 = param_2;
  local_258 = param_4;
  if (ppUVar18 != local_270) {
    do {
      this = *ppUVar18;
      local_280 = ppUVar18;
      USceneComponent::GetLocalBounds
                ((USceneComponent *)this,(TBoxSphereBounds<double,double> *)&local_240._s_0);
      UE::Math::TTransform<double>::ToMatrixWithScale
                ((TTransform<double> *)&this->_padding_,local_158);
      dVar8 = (double)CONCAT44((uint)((ulonglong)(dStack_220 * local_158[0].M[1][0]) >> 0x20) &
                               uVar10,SUB84(dStack_220 * local_158[0].M[1][0],0) & uVar9) +
              (double)CONCAT44((uint)((ulonglong)(local_228 * local_158[0].M[0][0]) >> 0x20) &
                               uVar10,SUB84(local_228 * local_158[0].M[0][0],0) & uVar9) +
              (double)CONCAT44((uint)((ulonglong)(local_218 * local_158[0].M[2][0]) >> 0x20) &
                               uVar10,SUB84(local_218 * local_158[0].M[2][0],0) & uVar9);
      uStack_1e8 = (double)CONCAT44((uint)((ulonglong)(dStack_220 * local_158[0].M[1][1]) >> 0x20) &
                                    uVar12,SUB84(dStack_220 * local_158[0].M[1][1],0) & uVar11) +
                   (double)CONCAT44((uint)((ulonglong)(local_228 * local_158[0].M[0][1]) >> 0x20) &
                                    uVar12,SUB84(local_228 * local_158[0].M[0][1],0) & uVar11) +
                   (double)CONCAT44((uint)((ulonglong)(local_218 * local_158[0].M[2][1]) >> 0x20) &
                                    uVar12,SUB84(local_218 * local_158[0].M[2][1],0) & uVar11);
      dStack_1e0 = (double)CONCAT44((uint)((ulonglong)(dStack_220 * local_158[0].M[1][2]) >> 0x20) &
                                    uVar10,SUB84(dStack_220 * local_158[0].M[1][2],0) & uVar9) +
                   (double)CONCAT44((uint)((ulonglong)(local_228 * local_158[0].M[0][2]) >> 0x20) &
                                    uVar10,SUB84(local_228 * local_158[0].M[0][2],0) & uVar9) +
                   (double)CONCAT44((uint)((ulonglong)(local_218 * local_158[0].M[2][2]) >> 0x20) &
                                    uVar10,SUB84(local_218 * local_158[0].M[2][2],0) & uVar9);
      local_1f0._0_4_ = SUB84(dVar8,0);
      local_1f0._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar19._0_8_ =
           local_158[0].M[1][0] * local_158[0].M[1][0] + local_158[0].M[0][0] * local_158[0].M[0][0]
           + local_158[0].M[2][0] * local_158[0].M[2][0];
      auVar19._8_8_ =
           local_158[0].M[1][1] * local_158[0].M[1][1] + local_158[0].M[0][1] * local_158[0].M[0][1]
           + local_158[0].M[2][1] * local_158[0].M[2][1];
      auVar20._8_4_ = SUB84(auVar19._8_8_,0);
      auVar20._0_8_ = auVar19._8_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
      auVar20 = maxpd(auVar19,auVar20);
      dVar7 = local_158[0].M[1][2] * local_158[0].M[1][2] +
              local_158[0].M[0][2] * local_158[0].M[0][2] +
              local_158[0].M[2][2] * local_158[0].M[2][2];
      dVar5 = local_240._s_0.Y * local_158[0].M[1][1] + local_240._s_0.X * local_158[0].M[0][1] +
              local_240._s_0.Z * local_158[0].M[2][1] + local_158[0].M[3][1];
      dStack_1f8 = local_240._s_0.Y * local_158[0].M[1][2] + local_240._s_0.X * local_158[0].M[0][2]
                   + local_240._s_0.Z * local_158[0].M[2][2] + local_158[0].M[3][2];
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar20 = maxpd(auVar20,auVar6);
      local_168 = SQRT(dStack_1e0 * dStack_1e0 + dVar8 * dVar8 + uStack_1e8 * uStack_1e8);
      dVar7 = SQRT(auVar20._0_8_) * local_210;
      local_198._8_4_ = SUB84(dVar5,0);
      local_198._0_8_ =
           local_240._s_0.Y * local_158[0].M[1][0] + local_240._s_0.X * local_158[0].M[0][0] +
           local_240._s_0.Z * local_158[0].M[2][0] + local_158[0].M[3][0];
      local_198._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      if (dVar7 <= local_168) {
        local_168 = dVar7;
      }
      local_198._24_4_ = (undefined4)local_1f0;
      local_198._16_8_ = dStack_1f8;
      local_198._28_4_ = local_1f0._4_4_;
      local_198._40_8_ = dStack_1e0;
      local_1f0 = dVar8;
      local_198._32_8_ = uStack_1e8;
      UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                (param_7,(TBoxSphereBounds<double,double> *)local_198);
      local_1a8 = param_6;
      local_1c8 = local_268;
      ppFStack_1c0 = ppFStack_260;
      local_1b8 = local_258;
      puStack_1b0 = puStack_250;
      pUVar13 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this);
      if (pUVar13 != (UPhysicsAsset *)0x0) {
        pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
        if (pUVar14 == (USkeletalMesh *)0x0) {
          pUVar14 = (USkeletalMesh *)(**(code **)(pUVar13->_padding_ + 0x20))(&pUVar13->_padding_);
        }
        else {
          pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
        }
        lVar15 = (**(code **)(pUVar14->_padding_ + 800))(pUVar14);
        pFVar17 = (pUVar13->SkeletalBodySetups).AllocatorInstance.Data;
        iVar2 = (pUVar13->SkeletalBodySetups).ArrayNum;
        pFVar1 = pFVar17 + (longlong)iVar2 * 8;
        while( true ) {
          if ((pUVar13->SkeletalBodySetups).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TObjectPtr<USkeletalBodySetup>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_288);
          }
          param_7 = local_278;
          ppUVar18 = local_280;
          if (pFVar17 == pFVar1) break;
          pUVar3 = *(UBodySetup **)pFVar17;
          FVar4 = (FName)pUVar3->_padding_;
          if (FVar4 != (FName)0x0) {
            piVar16 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)(lVar15 + 0x90),FVar4);
            if (((piVar16 != (int *)0x0) && (*piVar16 != -1)) &&
               (*piVar16 < *(int *)(lVar15 + 0x28))) {
              `NDIRigidMeshCollisionLocal::UpdateAssetArrays<USkeletalMeshComponent,1>'::__l2::
              <lambda_1>::operator()(&local_1c8,this,pUVar3);
            }
          }
          pFVar17 = pFVar17 + 8;
        }
      }
      ppUVar18 = ppUVar18 + 1;
    } while (ppUVar18 != local_270);
  }
  return;
}

// UpdateAssetArrays<UStaticMeshComponent,1> @ 1491a9930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::UpdateAssetArrays<UStaticMeshComponent,1>
          (TArrayView<UStaticMeshComponent_*_const,int> *param_1,TVector<double> *param_2,
          FNDIRigidMeshCollisionArrays *param_3,uint *param_4,uint *param_5,uint *param_6,
          Builder *param_7)

{
  UStaticMeshComponent **ppUVar1;
  UStaticMeshComponent *this;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UBodySetup *pUVar10;
  UStaticMeshComponent **ppUVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  FNDIRigidMeshCollisionArrays *local_res18;
  TVector<double>_u_0 local_220;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  TVector<double> *local_1a8;
  FNDIRigidMeshCollisionArrays **ppFStack_1a0;
  uint *local_198;
  uint *puStack_190;
  uint *local_188;
  undefined1 local_178 [48];
  double local_148;
  TMatrix<double> local_138 [2];
  
  uVar9 = _UNK_15061cc8c;
  uVar8 = _UNK_15061cc88;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  ppUVar11 = param_1->DataPtr;
  ppUVar1 = ppUVar11 + param_1->ArrayNum;
  local_res18 = param_3;
  for (; ppUVar11 != ppUVar1; ppUVar11 = ppUVar11 + 1) {
    this = *ppUVar11;
    USceneComponent::GetLocalBounds
              ((USceneComponent *)this,(TBoxSphereBounds<double,double> *)&local_220._s_0);
    UE::Math::TTransform<double>::ToMatrixWithScale
              ((TTransform<double> *)&this->_padding_,local_138);
    dVar5 = (double)CONCAT44((uint)((ulonglong)(local_138[0].M[1][0] * dStack_200) >> 0x20) & uVar7,
                             SUB84(local_138[0].M[1][0] * dStack_200,0) & uVar6) +
            (double)CONCAT44((uint)((ulonglong)(local_138[0].M[0][0] * local_208) >> 0x20) & uVar7,
                             SUB84(local_138[0].M[0][0] * local_208,0) & uVar6) +
            (double)CONCAT44((uint)((ulonglong)(local_138[0].M[2][0] * local_1f8) >> 0x20) & uVar7,
                             SUB84(local_138[0].M[2][0] * local_1f8,0) & uVar6);
    uStack_1c8 = (double)CONCAT44((uint)((ulonglong)(local_138[0].M[1][1] * dStack_200) >> 0x20) &
                                  uVar9,SUB84(local_138[0].M[1][1] * dStack_200,0) & uVar8) +
                 (double)CONCAT44((uint)((ulonglong)(local_138[0].M[0][1] * local_208) >> 0x20) &
                                  uVar9,SUB84(local_138[0].M[0][1] * local_208,0) & uVar8) +
                 (double)CONCAT44((uint)((ulonglong)(local_138[0].M[2][1] * local_1f8) >> 0x20) &
                                  uVar9,SUB84(local_138[0].M[2][1] * local_1f8,0) & uVar8);
    dStack_1c0 = (double)CONCAT44((uint)((ulonglong)(local_138[0].M[1][2] * dStack_200) >> 0x20) &
                                  uVar7,SUB84(local_138[0].M[1][2] * dStack_200,0) & uVar6) +
                 (double)CONCAT44((uint)((ulonglong)(local_138[0].M[0][2] * local_208) >> 0x20) &
                                  uVar7,SUB84(local_138[0].M[0][2] * local_208,0) & uVar6) +
                 (double)CONCAT44((uint)((ulonglong)(local_138[0].M[2][2] * local_1f8) >> 0x20) &
                                  uVar7,SUB84(local_138[0].M[2][2] * local_1f8,0) & uVar6);
    dVar2 = local_138[0].M[1][1] * local_220._s_0.Y + local_138[0].M[0][1] * local_220._s_0.X +
            local_138[0].M[2][1] * local_220._s_0.Z + local_138[0].M[3][1];
    auVar12._0_8_ =
         local_138[0].M[1][0] * local_138[0].M[1][0] + local_138[0].M[0][0] * local_138[0].M[0][0] +
         local_138[0].M[2][0] * local_138[0].M[2][0];
    auVar12._8_8_ =
         local_138[0].M[1][1] * local_138[0].M[1][1] + local_138[0].M[0][1] * local_138[0].M[0][1] +
         local_138[0].M[2][1] * local_138[0].M[2][1];
    dVar4 = local_138[0].M[1][2] * local_138[0].M[1][2] +
            local_138[0].M[0][2] * local_138[0].M[0][2] +
            local_138[0].M[2][2] * local_138[0].M[2][2];
    auVar13._8_4_ = SUB84(auVar12._8_8_,0);
    auVar13._0_8_ = auVar12._8_8_;
    auVar13._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
    auVar13 = maxpd(auVar12,auVar13);
    dStack_1d8 = local_138[0].M[1][2] * local_220._s_0.Y + local_138[0].M[0][2] * local_220._s_0.X +
                 local_138[0].M[2][2] * local_220._s_0.Z + local_138[0].M[3][2];
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar13 = maxpd(auVar13,auVar3);
    local_1d0._0_4_ = SUB84(dVar5,0);
    local_1d0._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
    local_178._8_4_ = SUB84(dVar2,0);
    local_178._0_8_ =
         local_138[0].M[1][0] * local_220._s_0.Y + local_138[0].M[0][0] * local_220._s_0.X +
         local_138[0].M[2][0] * local_220._s_0.Z + local_138[0].M[3][0];
    local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_148 = SQRT(dStack_1c0 * dStack_1c0 + dVar5 * dVar5 + uStack_1c8 * uStack_1c8);
    dVar2 = SQRT(auVar13._0_8_) * local_1f0;
    if (dVar2 <= local_148) {
      local_148 = dVar2;
    }
    local_178._24_4_ = (undefined4)local_1d0;
    local_178._16_8_ = dStack_1d8;
    local_178._28_4_ = local_1d0._4_4_;
    local_178._40_8_ = dStack_1c0;
    local_1d0 = dVar5;
    local_178._32_8_ = uStack_1c8;
    UE::Math::TBoxSphereBounds<double,double>::Builder::Append
              (param_7,(TBoxSphereBounds<double,double> *)local_178);
    puStack_190 = param_5;
    local_188 = param_6;
    local_1a8 = param_2;
    ppFStack_1a0 = &local_res18;
    local_198 = param_4;
    pUVar10 = (UBodySetup *)(**(code **)(this->_padding_ + 0x800))(this);
    `NDIRigidMeshCollisionLocal::UpdateAssetArrays<UStaticMeshComponent,1>'::__l2::<lambda_1>::
    operator()(&local_1a8,this,pUVar10);
  }
  return;
}

// UpdateInternalBuffer<unsigned_int,28> @ 1491a9ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::UpdateInternalBuffer<unsigned_int,28>
          (FRHICommandListBase *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          FReadBuffer *param_3)

{
  uint uVar1;
  FRHIBuffer *pFVar2;
  void *_Dst;
  
  if ((param_2->ArrayNum != 0) &&
     (pFVar2 = (param_3->Buffer).Reference, pFVar2 != (FRHIBuffer *)0x0)) {
    uVar1 = param_2->ArrayNum * 4;
    _Dst = FRHICommandListBase::LockBuffer(param_1,pFVar2,0,uVar1,RLM_WriteOnly);
    memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
    FRHICommandListBase::UnlockBuffer(param_1,(param_3->Buffer).Reference);
  }
  return;
}

// UpdateInternalBuffer<UE::Math::TVector4<float>,1> @ 1491a9d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
NDIRigidMeshCollisionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>,1>
          (FRHICommandListBase *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,
          FReadBuffer *param_3)

{
  FRHIBuffer *pFVar1;
  uint uVar2;
  void *_Dst;
  
  if ((param_2->ArrayNum != 0) &&
     (pFVar1 = (param_3->Buffer).Reference, pFVar1 != (FRHIBuffer *)0x0)) {
    uVar2 = param_2->ArrayNum << 4;
    _Dst = FRHICommandListBase::LockBuffer(param_1,pFVar1,0,uVar2,RLM_WriteOnly);
    memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar2);
    FRHICommandListBase::UnlockBuffer(param_1,(param_3->Buffer).Reference);
  }
  return;
}

// RasterizationGrid3DRWInstanceData @ 1491ab980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

RasterizationGrid3DRWInstanceData * __thiscall
RasterizationGrid3DRWInstanceData::RasterizationGrid3DRWInstanceData
          (RasterizationGrid3DRWInstanceData *this,RasterizationGrid3DRWInstanceData *param_1)

{
  IPooledRenderTarget *pIVar1;
  
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  this->TotalNumAttributes = param_1->TotalNumAttributes;
  *(undefined8 *)&(this->NumCells).field0_0x0 = *(undefined8 *)&(param_1->NumCells).field0_0x0;
  (this->NumCells).field0_0x0._s_0.Z = (param_1->NumCells).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NumTiles).field0_0x0 = *(undefined8 *)&(param_1->NumTiles).field0_0x0;
  (this->NumTiles).field0_0x0._s_0.Z = (param_1->NumTiles).field0_0x0._s_0.Z;
  this->Precision = param_1->Precision;
  this->ResetValue = param_1->ResetValue;
  this->NeedsRealloc = param_1->NeedsRealloc;
  (this->RasterizationTexture).Texture.Reference = (IPooledRenderTarget *)0x0;
  pIVar1 = (param_1->RasterizationTexture).Texture.Reference;
  (this->RasterizationTexture).Texture.Reference = pIVar1;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x30))();
  }
  (this->RasterizationTexture).TransientRDGTexture =
       (param_1->RasterizationTexture).TransientRDGTexture;
  (this->RasterizationTexture).TransientRDGSRV = (param_1->RasterizationTexture).TransientRDGSRV;
  (this->RasterizationTexture).TransientRDGUAV = (param_1->RasterizationTexture).TransientRDGUAV;
  (this->RasterizationTexture).NumBytes = (param_1->RasterizationTexture).NumBytes;
  (this->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->PerAttributeData).Buffer.Reference = (param_1->PerAttributeData).Buffer.Reference;
  (param_1->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PerAttributeData).SRV.Reference = (param_1->PerAttributeData).SRV.Reference;
  (param_1->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PerAttributeData).NumBytes = (param_1->PerAttributeData).NumBytes;
  return this;
}

// RasterizationGrid3DRWInstanceData @ 1491aba50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

RasterizationGrid3DRWInstanceData * __thiscall
RasterizationGrid3DRWInstanceData::RasterizationGrid3DRWInstanceData
          (RasterizationGrid3DRWInstanceData *this,RasterizationGrid3DRWInstanceData *param_1)

{
  IPooledRenderTarget *pIVar1;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  this->TotalNumAttributes = param_1->TotalNumAttributes;
  *(undefined8 *)&(this->NumCells).field0_0x0 = *(undefined8 *)&(param_1->NumCells).field0_0x0;
  (this->NumCells).field0_0x0._s_0.Z = (param_1->NumCells).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NumTiles).field0_0x0 = *(undefined8 *)&(param_1->NumTiles).field0_0x0;
  (this->NumTiles).field0_0x0._s_0.Z = (param_1->NumTiles).field0_0x0._s_0.Z;
  this->Precision = param_1->Precision;
  this->ResetValue = param_1->ResetValue;
  this->NeedsRealloc = param_1->NeedsRealloc;
  (this->RasterizationTexture).Texture.Reference = (IPooledRenderTarget *)0x0;
  pIVar1 = (param_1->RasterizationTexture).Texture.Reference;
  (this->RasterizationTexture).Texture.Reference = pIVar1;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x30))();
  }
  (this->RasterizationTexture).TransientRDGTexture =
       (param_1->RasterizationTexture).TransientRDGTexture;
  (this->RasterizationTexture).TransientRDGSRV = (param_1->RasterizationTexture).TransientRDGSRV;
  (this->RasterizationTexture).TransientRDGUAV = (param_1->RasterizationTexture).TransientRDGUAV;
  (this->RasterizationTexture).NumBytes = (param_1->RasterizationTexture).NumBytes;
  (this->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
  this_00 = (param_1->PerAttributeData).Buffer.Reference;
  (this->PerAttributeData).Buffer.Reference = this_00;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  (this->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  this_01 = (param_1->PerAttributeData).SRV.Reference;
  (this->PerAttributeData).SRV.Reference = this_01;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  (this->PerAttributeData).NumBytes = (param_1->PerAttributeData).NumBytes;
  return this;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491aca40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491aca60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491aca80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491acaa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491acac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491acae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491acb00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 1491acb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1> @ 1491acb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,1,1> @ 1491acb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceParticleRead::InitPerInstanceData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x20);
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

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1> @ 1491acb80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 0x90) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x90));
  }
  if (*(FRHIResource **)((longlong)this + 0x88) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x88));
  }
  FNiagaraPooledRWTexture::Release((FNiagaraPooledRWTexture *)((longlong)this + 0x60));
  if (*(longlong **)((longlong)this + 0x60) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491acbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)this + 0x60) + 0x38))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1> @ 1491acbe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1> @ 1491acc00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1> @ 1491acc20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 0x90) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x90));
  }
  if (*(FRHIResource **)((longlong)this + 0x88) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x88));
  }
  FNiagaraPooledRWTexture::Release((FNiagaraPooledRWTexture *)((longlong)this + 0x60));
  if (*(longlong **)((longlong)this + 0x60) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491acc6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)this + 0x60) + 0x38))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,1,0> @ 1491acc80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNDIRigidMeshCollisionData::ReleaseBuffers_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1> @ 1491acca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_NDIMIDPrivate::VMSetScalarParameter_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1> @ 1491accc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_NDIMPCPrivate::VMSetScalarParameter_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1> @ 1491acce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_NDIMIDPrivate::VMSetVector4Parameter_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1> @ 1491acd00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_NDIMPCPrivate::VMSetVector4Parameter_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,1,1> @ 1491acd20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame_::__l9::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::`9'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1> @ 1491acd40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate_::__l27::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x58);
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

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1> @ 1491acd60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate_::__l27::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x50);
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

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1> @ 1491acd80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate_::__l27::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x58);
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

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,1,1> @ 1491acda0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame_::__l27::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,1,1> @ 1491acdc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,1,1> @ 1491acde0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,1,1> @ 1491ace00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate_::__l35::<lambda_2>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::`35'::<lambda_2>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x58);
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

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,1,1> @ 1491ace20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame_::__l37::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`37'::<lambda_2>,1,1>
        ::_vftable_;
  return;
}

// operator() @ 1491ada50

void __thiscall
`NDIRigidMeshCollisionLocal::RemapPreviousTransforms<1>'::__l2::<lambda_1>::operator()
          (void *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,
          FNDIRigidMeshCollisionElementOffset *param_9,FNDIRigidMeshCollisionElementOffset *param_10
          ,FComponentBodyCount *param_11)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = param_9->BoxOffset;
  iVar10 = param_10->BoxOffset + param_6;
  uVar12 = iVar10 * 3;
  if (param_11->BoxCount * 3 != 0) {
    do {
      uVar13 = (uVar2 + param_3) * 3 + iVar10 * -3 + uVar12;
      uVar9 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      uVar12 = uVar12 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    } while (uVar12 + iVar10 * -3 < param_11->BoxCount * 3);
  }
  uVar2 = param_9->SphereOffset;
  iVar10 = param_10->SphereOffset + param_7;
  uVar12 = iVar10 * 3;
  if (param_11->SphereCount * 3 != 0) {
    do {
      uVar13 = (uVar2 + param_4) * 3 + iVar10 * -3 + uVar12;
      uVar9 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      uVar12 = uVar12 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    } while (uVar12 + iVar10 * -3 < param_11->SphereCount * 3);
  }
  uVar2 = param_9->CapsuleOffset;
  iVar10 = param_10->CapsuleOffset + param_8;
  uVar12 = iVar10 * 3;
  if (param_11->CapsuleCount * 3 != 0) {
    do {
      uVar13 = (uVar2 + param_5) * 3 + iVar10 * -3 + uVar12;
      uVar9 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      uVar12 = uVar12 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    } while (uVar12 + iVar10 * -3 < param_11->CapsuleCount * 3);
  }
  return;
}

// operator() @ 1491addf0

void __thiscall
`NDIRigidMeshCollisionLocal::RemapPreviousTransforms<0>'::__l2::<lambda_1>::operator()
          (void *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,
          FNDIRigidMeshCollisionElementOffset *param_9,FNDIRigidMeshCollisionElementOffset *param_10
          ,FComponentBodyCount *param_11)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = param_9->BoxOffset;
  iVar10 = param_10->BoxOffset + param_6;
  uVar12 = iVar10 * 3;
  if (param_11->BoxCount * 3 != 0) {
    do {
      uVar13 = (uVar2 + param_3) * 3 + iVar10 * -3 + uVar12;
      uVar9 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      uVar12 = uVar12 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    } while (uVar12 + iVar10 * -3 < param_11->BoxCount * 3);
  }
  uVar2 = param_9->SphereOffset;
  iVar10 = param_10->SphereOffset + param_7;
  uVar12 = iVar10 * 3;
  if (param_11->SphereCount * 3 != 0) {
    do {
      uVar13 = (uVar2 + param_4) * 3 + iVar10 * -3 + uVar12;
      uVar9 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      uVar12 = uVar12 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    } while (uVar12 + iVar10 * -3 < param_11->SphereCount * 3);
  }
  uVar2 = param_9->CapsuleOffset;
  iVar10 = param_10->CapsuleOffset + param_8;
  uVar12 = iVar10 * 3;
  if (param_11->CapsuleCount * 3 != 0) {
    do {
      uVar13 = (uVar2 + param_5) * 3 + iVar10 * -3 + uVar12;
      uVar9 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar11 = (longlong)(int)uVar12;
      uVar12 = uVar12 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    } while (uVar12 + iVar10 * -3 < param_11->CapsuleCount * 3);
  }
  return;
}

// operator() @ 1491ae190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`NDIRigidMeshCollisionLocal::UpdateAssetArrays<USkeletalMeshComponent,1>'::__l2::<lambda_1>::
operator()(void *this,USkeletalMeshComponent *param_1,UBodySetup *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  USkeletalMesh *pUVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  TQuat<double> *pTVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_6b8 [32];
  longlong local_698;
  longlong local_690;
  undefined1 local_688;
  undefined1 local_687;
  undefined1 local_686;
  undefined1 local_685;
  uint local_684;
  int local_680;
  FScriptContainerElement *local_678;
  FPrimitiveComponentId local_670 [2];
  float local_668;
  float fStack_664;
  float fStack_660;
  undefined4 uStack_65c;
  USkeletalMeshComponent *local_658;
  TVector<double>_u_0 local_650;
  double local_638;
  double local_630;
  double local_628;
  undefined1 local_618 [16];
  double local_608;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined8 local_5f0;
  double local_5d8;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  TQuat<double> local_588;
  TQuat<double> local_568 [2];
  undefined8 local_518;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  local_658 = param_1;
  pUVar18 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  if (pUVar18 != (USkeletalMesh *)0x0) {
    lVar19 = (**(code **)(pUVar18->_padding_ + 800))(pUVar18);
    iVar14 = *(int *)(lVar19 + 0x28);
    if ((0 < iVar14) && ((FName)param_2->_padding_ != (FName)0x0)) {
      piVar20 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)(lVar19 + 0x90),(FName)param_2->_padding_);
      if ((piVar20 != (int *)0x0) && ((iVar3 = *piVar20, iVar3 != -1 && (iVar3 < iVar14)))) {
        USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)param_1,&local_508,iVar3);
        goto LAB_1491ae2df;
      }
    }
  }
  local_508.Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  local_508.Rotation.XY.m128d_f64[1] = (double)param_1->_padding_;
  local_508.Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  local_508.Rotation.ZW.m128d_f64[1] = (double)param_1->_padding_;
  local_508.Translation.XY.m128d_f64[0]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_508.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Translation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_508.Translation.ZW.m128d_f64[0]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Translation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_508.Translation.ZW.m128d_f64[1]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Translation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_508.Scale3D.XY.m128d_f64[0]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Scale3D.XY.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_508.Scale3D.XY.m128d_f64[1]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Scale3D.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_508.Scale3D.ZW.m128d_f64[0]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Scale3D.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_508.Scale3D.ZW.m128d_f64[1]._0_4_ = (undefined4)param_1->_padding_;
  local_508.Scale3D.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
LAB_1491ae2df:
  pdVar4 = *(double **)this;
  local_608 = pdVar4[2] * __real_c140000000000000;
  dVar6 = pdVar4[1] * __real_c140000000000000;
  dVar7 = (double)CONCAT44(local_508.Translation.ZW.m128d_f64[1]._4_4_,
                           local_508.Translation.ZW.m128d_f64[1]._0_4_) + 0.0;
  dVar9 = (double)CONCAT44(local_508.Translation.XY.m128d_f64[1]._4_4_,
                           local_508.Translation.XY.m128d_f64[1]._0_4_) + dVar6;
  local_508.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
  local_508.Translation.ZW.m128d_f64[0] =
       (double)CONCAT44(local_508.Translation.ZW.m128d_f64[0]._4_4_,
                        local_508.Translation.ZW.m128d_f64[0]._0_4_) + local_608;
  local_508.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_508.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_508.Translation.XY.m128d_f64[0] =
       (double)CONCAT44(local_508.Translation.XY.m128d_f64[0]._4_4_,
                        local_508.Translation.XY.m128d_f64[0]._0_4_) +
       *pdVar4 * __real_c140000000000000;
  local_508.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_670[0].PrimIDValue = *(uint *)((longlong)&param_1->_padding_ + 4);
  fVar35 = (float)(double)CONCAT44(local_508.Scale3D.XY.m128d_f64[0]._4_4_,
                                   local_508.Scale3D.XY.m128d_f64[0]._0_4_);
  local_618._8_4_ = SUB84(dVar6,0);
  local_618._0_8_ = *pdVar4 * __real_c140000000000000;
  local_618._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  fVar36 = (float)(double)CONCAT44(local_508.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_508.Scale3D.XY.m128d_f64[1]._0_4_);
  local_5f0 = CONCAT44(local_508.Scale3D.ZW.m128d_f64[0]._4_4_,
                       local_508.Scale3D.ZW.m128d_f64[0]._0_4_);
  fVar37 = (float)(double)CONCAT44(local_508.Scale3D.ZW.m128d_f64[0]._4_4_,
                                   local_508.Scale3D.ZW.m128d_f64[0]._0_4_);
  local_600 = local_508.Scale3D.XY.m128d_f64[0]._0_4_;
  uStack_5fc = local_508.Scale3D.XY.m128d_f64[0]._4_4_;
  uStack_5f8 = local_508.Scale3D.XY.m128d_f64[1]._0_4_;
  uStack_5f4 = local_508.Scale3D.XY.m128d_f64[1]._4_4_;
  iVar14 = TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_>::
           AddUniqueImpl<FPrimitiveComponentId>
                     ((TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *)
                      (**(longlong **)((longlong)this + 8) + 0x90),local_670);
  dVar6 = __real_3fe0000000000000;
  pFVar23 = (param_2->AggGeom).ConvexElems.AllocatorInstance.Data;
  local_684 = (param_2->AggGeom).ConvexElems.ArrayNum;
  uVar21 = (ulonglong)(int)local_684;
  pFVar25 = pFVar23 + uVar21 * 0x100;
  local_680 = iVar14;
  local_678 = pFVar25;
  while( true ) {
    if ((param_2->AggGeom).ConvexElems.ArrayNum != (int)uVar21) {
      local_688 = 0;
      `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_688);
    }
    dVar8 = _UNK_150689688;
    dVar10 = ___xmm_3ff00000000000003ff0000000000000;
    dVar9 = _UNK_150689518;
    dVar7 = ___xmm_00000000000000003ff0000000000000;
    uVar24 = 0;
    uVar16 = 0;
    if (pFVar23 == pFVar25) break;
    if (pFVar23[0x19] != (FScriptContainerElement)0x0) {
      dVar7 = *(double *)(pFVar23 + 0x60);
      dVar9 = *(double *)(pFVar23 + 0x68);
      dVar10 = *(double *)(pFVar23 + 0x50);
      dVar8 = *(double *)(pFVar23 + 0x58);
      uStack_65c = 0;
      dVar11 = *(double *)(pFVar23 + 0x70);
      dVar12 = *(double *)(pFVar23 + 0x78);
      lVar19 = **(longlong **)((longlong)this + 8);
      local_518 = *(undefined8 *)(pFVar23 + 0x80);
      iVar14 = *(int *)(lVar19 + 0x58);
      uVar17 = **(uint **)((longlong)this + 0x10);
      local_668 = (float)(dVar9 - dVar10);
      uVar15 = uVar24;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      fStack_664 = (float)(dVar11 - dVar8);
      fStack_660 = (float)(dVar12 - dVar7);
      if (uVar15 == 0) {
        local_698 = (longlong)(int)uVar17;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar19 + 0x50) + (longlong)(int)uVar17 * 0x10);
      *puVar1 = CONCAT44(fStack_664,local_668);
      puVar1[1] = CONCAT44(uStack_65c,fStack_660);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x68);
      uVar17 = **(uint **)((longlong)this + 0x10);
      lVar26 = (longlong)(int)uVar17;
      uVar15 = uVar24;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = lVar26;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x60);
      *(float *)(lVar19 + lVar26 * 0x10) = fVar35;
      *(float *)(lVar19 + 4 + lVar26 * 0x10) = fVar36;
      *(float *)(lVar19 + 8 + lVar26 * 0x10) = fVar37;
      *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
      FVar2 = pFVar23[0x19];
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x78);
      uVar17 = **(uint **)((longlong)this + 0x10);
      if ((int)uVar17 < iVar14) {
        uVar24 = ~uVar17 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_698 = (longlong)(int)uVar17;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar19 + 0x70) + (longlong)(int)uVar17 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x88);
      uVar24 = **(uint **)((longlong)this + 0x10);
      if ((int)uVar24 < iVar14) {
        uVar16 = ~uVar24 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = (longlong)(int)uVar24;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar14 = local_680;
      *(int *)(*(longlong *)(lVar19 + 0x80) + (longlong)(int)uVar24 * 4) = local_680;
      uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      dVar8 = (dVar11 + dVar8) * dVar6;
      local_2c8.Translation.ZW.m128d_f64[0] = (dVar12 + dVar7) * dVar6;
      local_2c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
      local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
      local_2c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar31;
      local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
      local_2c8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
      local_2c8.Translation.XY.m128d_f64[0] = (dVar9 + dVar10) * dVar6;
      local_2c8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
      uVar29 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_2c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_4a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
      local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar30;
      local_4a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
      local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
      local_4a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
      local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
      local_4a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar31;
      local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_4a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
      local_4a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
      local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_4a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar30;
      local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
      local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
      UE::Math::TTransform<double>::Multiply(&local_4a8,&local_2c8,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_4a8,**(uint **)((longlong)this + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
      pFVar25 = local_678;
    }
    uVar21 = (ulonglong)local_684;
    pFVar23 = pFVar23 + 0x100;
  }
  local_684 = (param_2->AggGeom).BoxElems.ArrayNum;
  uVar21 = (ulonglong)(int)local_684;
  pFVar23 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data;
  pFVar25 = pFVar23 + uVar21 * 0x70;
  local_678 = pFVar25;
  while( true ) {
    if ((param_2->AggGeom).BoxElems.ArrayNum != (int)uVar21) {
      local_687 = 0;
      `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_687);
    }
    if (pFVar23 == pFVar25) break;
    if (pFVar23[0x19] != (FScriptContainerElement)0x0) {
      uVar27 = *(undefined4 *)(pFVar23 + 0x60);
      uVar28 = *(undefined4 *)(pFVar23 + 100);
      uVar29 = *(undefined4 *)(pFVar23 + 0x68);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x58);
      uVar17 = **(uint **)((longlong)this + 0x10);
      lVar26 = (longlong)(int)uVar17;
      uVar15 = uVar16;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = lVar26;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x50);
      *(undefined4 *)(lVar19 + lVar26 * 0x10) = uVar27;
      *(undefined4 *)(lVar19 + 4 + lVar26 * 0x10) = uVar28;
      *(undefined4 *)(lVar19 + 8 + lVar26 * 0x10) = uVar29;
      *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x68);
      uVar17 = **(uint **)((longlong)this + 0x10);
      lVar26 = (longlong)(int)uVar17;
      uVar15 = uVar24;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = lVar26;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x60);
      *(float *)(lVar19 + lVar26 * 0x10) = fVar35;
      *(float *)(lVar19 + 4 + lVar26 * 0x10) = fVar36;
      *(float *)(lVar19 + 8 + lVar26 * 0x10) = fVar37;
      *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
      FVar2 = pFVar23[0x19];
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x78);
      uVar17 = **(uint **)((longlong)this + 0x10);
      uVar15 = uVar24;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = (longlong)(int)uVar17;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar19 + 0x70) + (longlong)(int)uVar17 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x88);
      uVar17 = **(uint **)((longlong)this + 0x10);
      uVar15 = uVar16;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = (longlong)(int)uVar17;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar14 = local_680;
      *(int *)(*(longlong *)(lVar19 + 0x80) + (longlong)(int)uVar17 * 4) = local_680;
      pTVar22 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(pFVar23 + 0x48),&local_588);
      local_268.Translation.ZW.m128d_f64[0] = *(double *)(pFVar23 + 0x40);
      local_5c8 = pTVar22->X;
      dStack_5c0 = pTVar22->Y;
      local_5b8 = pTVar22->Z;
      dStack_5b0 = pTVar22->W;
      local_268.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar23 + 0x30);
      local_268.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar23 + 0x34);
      local_268.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)*(undefined8 *)(pFVar23 + 0x38);
      local_268.Translation.XY.m128d_f64[1]._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(pFVar23 + 0x38) >> 0x20);
      local_448.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_448.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_268.Translation.ZW.m128d_f64[1] = 0.0;
      local_448.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_448.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_448.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_448.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_448.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_448.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_268.Scale3D.XY.m128d_f64[0] = dVar10;
      local_268.Scale3D.XY.m128d_f64[1] = dVar8;
      local_448.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_448.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_268.Scale3D.ZW.m128d_f64[0] = dVar7;
      local_268.Scale3D.ZW.m128d_f64[1] = dVar9;
      local_448.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_448.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_268.Rotation.XY.m128d_f64[0] = local_5c8;
      local_268.Rotation.XY.m128d_f64[1] = dStack_5c0;
      local_268.Rotation.ZW.m128d_f64[0] = local_5b8;
      local_268.Rotation.ZW.m128d_f64[1] = dStack_5b0;
      UE::Math::TTransform<double>::Multiply(&local_448,&local_268,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_448,**(uint **)((longlong)this + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
      pFVar25 = local_678;
    }
    uVar21 = (ulonglong)local_684;
    pFVar23 = pFVar23 + 0x70;
  }
  local_684 = (param_2->AggGeom).SphereElems.ArrayNum;
  uVar21 = (ulonglong)(int)local_684;
  pFVar23 = (param_2->AggGeom).SphereElems.AllocatorInstance.Data;
  pFVar25 = pFVar23 + uVar21 * 0x50;
  local_678 = pFVar25;
  while( true ) {
    if ((param_2->AggGeom).SphereElems.ArrayNum != (int)uVar21) {
      local_686 = 0;
      `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_686);
    }
    uVar24 = 0;
    if (pFVar23 == pFVar25) break;
    if (pFVar23[0x19] != (FScriptContainerElement)0x0) {
      uVar27 = *(undefined4 *)(pFVar23 + 0x48);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x58);
      uVar17 = **(uint **)((longlong)this + 0x18);
      lVar26 = (longlong)(int)uVar17;
      uVar15 = uVar16;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = lVar26;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x50);
      *(undefined4 *)(lVar19 + lVar26 * 0x10) = uVar27;
      *(undefined8 *)(lVar19 + 4 + lVar26 * 0x10) = 0;
      *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x68);
      uVar17 = **(uint **)((longlong)this + 0x18);
      lVar26 = (longlong)(int)uVar17;
      uVar15 = uVar24;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = lVar26;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x60);
      *(float *)(lVar19 + lVar26 * 0x10) = fVar35;
      *(float *)(lVar19 + 4 + lVar26 * 0x10) = fVar36;
      *(float *)(lVar19 + 8 + lVar26 * 0x10) = fVar37;
      *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
      FVar2 = pFVar23[0x19];
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x78);
      uVar17 = **(uint **)((longlong)this + 0x18);
      if ((int)uVar17 < iVar14) {
        uVar24 = ~uVar17 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_698 = (longlong)(int)uVar17;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar19 + 0x70) + (longlong)(int)uVar17 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x88);
      uVar24 = **(uint **)((longlong)this + 0x18);
      uVar17 = uVar16;
      if ((int)uVar24 < iVar14) {
        uVar17 = ~uVar24 >> 0x1f;
      }
      if (uVar17 == 0) {
        local_698 = (longlong)(int)uVar24;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar14 = local_680;
      *(int *)(*(longlong *)(lVar19 + 0x80) + (longlong)(int)uVar24 * 4) = local_680;
      local_208.Translation.ZW.m128d_f64[0] = *(double *)(pFVar23 + 0x40);
      uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      local_208.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar23 + 0x30);
      local_208.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar23 + 0x34);
      local_208.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar23 + 0x38);
      local_208.Translation.XY.m128d_f64[1]._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(pFVar23 + 0x38) >> 0x20);
      uVar29 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      local_208.Translation.ZW.m128d_f64[1] = 0.0;
      uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_3e8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_3e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_3e8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_208.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
      local_3e8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_3e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_3e8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_208.Rotation.ZW.m128d_f64[1]._0_4_ = uVar31;
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
      local_208.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1]._4_4_ = uVar30;
      local_208.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
      local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
      local_3e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
      local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar31;
      local_3e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
      local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
      local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar30;
      local_3e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
      local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_3e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
      UE::Math::TTransform<double>::Multiply(&local_3e8,&local_208,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_3e8,**(uint **)((longlong)this + 0x18),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
      pFVar25 = local_678;
    }
    uVar21 = (ulonglong)local_684;
    pFVar23 = pFVar23 + 0x50;
  }
  local_684 = (param_2->AggGeom).SphylElems.ArrayNum;
  uVar21 = (ulonglong)(int)local_684;
  pFVar23 = (param_2->AggGeom).SphylElems.AllocatorInstance.Data;
  pFVar25 = pFVar23 + uVar21 * 0x68;
  local_678 = pFVar25;
  while( true ) {
    if ((param_2->AggGeom).SphylElems.ArrayNum != (int)uVar21) {
      local_685 = 0;
      `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_685);
    }
    if (pFVar23 == pFVar25) break;
    if (pFVar23[0x19] != (FScriptContainerElement)0x0) {
      uVar27 = *(undefined4 *)(pFVar23 + 0x60);
      uVar28 = *(undefined4 *)(pFVar23 + 100);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x58);
      uVar17 = **(uint **)((longlong)this + 0x20);
      lVar26 = (longlong)(int)uVar17;
      uVar15 = uVar16;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = lVar26;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x50);
      *(undefined4 *)(lVar19 + lVar26 * 0x10) = uVar27;
      *(undefined4 *)(lVar19 + 4 + lVar26 * 0x10) = uVar28;
      *(undefined8 *)(lVar19 + 8 + lVar26 * 0x10) = 0;
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x68);
      uVar17 = **(uint **)((longlong)this + 0x20);
      lVar26 = (longlong)(int)uVar17;
      uVar15 = uVar24;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = lVar26;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x60);
      *(float *)(lVar19 + lVar26 * 0x10) = fVar35;
      *(float *)(lVar19 + 4 + lVar26 * 0x10) = fVar36;
      *(float *)(lVar19 + 8 + lVar26 * 0x10) = fVar37;
      *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
      FVar2 = pFVar23[0x19];
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x78);
      uVar17 = **(uint **)((longlong)this + 0x20);
      uVar15 = uVar24;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = (longlong)(int)uVar17;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar19 + 0x70) + (longlong)(int)uVar17 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar19 = **(longlong **)((longlong)this + 8);
      iVar14 = *(int *)(lVar19 + 0x88);
      uVar17 = **(uint **)((longlong)this + 0x20);
      uVar15 = uVar16;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_698 = (longlong)(int)uVar17;
        local_690 = (longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar14 = local_680;
      *(int *)(*(longlong *)(lVar19 + 0x80) + (longlong)(int)uVar17 * 4) = local_680;
      pTVar22 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(pFVar23 + 0x48),local_568);
      local_1a8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar23 + 0x40);
      local_5a8 = pTVar22->X;
      dStack_5a0 = pTVar22->Y;
      local_598 = pTVar22->Z;
      dStack_590 = pTVar22->W;
      local_1a8.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar23 + 0x30);
      local_1a8.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar23 + 0x34);
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)*(undefined8 *)(pFVar23 + 0x38);
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(pFVar23 + 0x38) >> 0x20);
      local_388.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_388.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
      local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_388.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_388.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_388.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_388.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1a8.Scale3D.XY.m128d_f64[0] = dVar10;
      local_1a8.Scale3D.XY.m128d_f64[1] = dVar8;
      local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_1a8.Scale3D.ZW.m128d_f64[0] = dVar7;
      local_1a8.Scale3D.ZW.m128d_f64[1] = dVar9;
      local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1a8.Rotation.XY.m128d_f64[0] = local_5a8;
      local_1a8.Rotation.XY.m128d_f64[1] = dStack_5a0;
      local_1a8.Rotation.ZW.m128d_f64[0] = local_598;
      local_1a8.Rotation.ZW.m128d_f64[1] = dStack_590;
      UE::Math::TTransform<double>::Multiply(&local_388,&local_1a8,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_388,**(uint **)((longlong)this + 0x20),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
      pFVar25 = local_678;
    }
    uVar21 = (ulonglong)local_684;
    pFVar23 = pFVar23 + 0x68;
  }
  if (((((param_2->AggGeom).ConvexElems.ArrayNum == 0) &&
       ((param_2->AggGeom).BoxElems.ArrayNum == 0)) &&
      ((param_2->AggGeom).SphereElems.ArrayNum == 0)) &&
     ((param_2->AggGeom).SphylElems.ArrayNum == 0)) {
    USceneComponent::GetLocalBounds
              ((USceneComponent *)local_658,(TBoxSphereBounds<double,double> *)&local_650._s_0);
    lVar19 = **(longlong **)((longlong)this + 8);
    local_638 = local_638 * __real_4000000000000000;
    iVar3 = *(int *)(lVar19 + 0x58);
    uVar24 = **(uint **)((longlong)this + 0x10);
    lVar26 = (longlong)(int)uVar24;
    local_5d8 = local_650._s_0.Z;
    uVar17 = uVar16;
    if ((int)uVar24 < iVar3) {
      uVar17 = ~uVar24 >> 0x1f;
    }
    dVar6 = local_630 * __real_4000000000000000;
    dVar7 = local_628 * __real_4000000000000000;
    if (uVar17 == 0) {
      local_698 = lVar26;
      local_690 = (longlong)iVar3;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar19 = *(longlong *)(lVar19 + 0x50);
    *(float *)(lVar19 + lVar26 * 0x10) = (float)local_638;
    *(float *)(lVar19 + 4 + lVar26 * 0x10) = (float)dVar6;
    *(float *)(lVar19 + 8 + lVar26 * 0x10) = (float)dVar7;
    *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
    lVar19 = **(longlong **)((longlong)this + 8);
    iVar3 = *(int *)(lVar19 + 0x68);
    uVar24 = **(uint **)((longlong)this + 0x10);
    lVar26 = (longlong)(int)uVar24;
    uVar17 = uVar16;
    if ((int)uVar24 < iVar3) {
      uVar17 = ~uVar24 >> 0x1f;
    }
    if (uVar17 == 0) {
      local_698 = lVar26;
      local_690 = (longlong)iVar3;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar19 = *(longlong *)(lVar19 + 0x60);
    *(float *)(lVar19 + lVar26 * 0x10) = fVar35;
    *(float *)(lVar19 + 4 + lVar26 * 0x10) = fVar36;
    *(float *)(lVar19 + 8 + lVar26 * 0x10) = fVar37;
    *(undefined4 *)(lVar19 + 0xc + lVar26 * 0x10) = 0;
    lVar19 = **(longlong **)((longlong)this + 8);
    iVar3 = *(int *)(lVar19 + 0x78);
    uVar24 = **(uint **)((longlong)this + 0x10);
    uVar17 = uVar16;
    if ((int)uVar24 < iVar3) {
      uVar17 = ~uVar24 >> 0x1f;
    }
    if (uVar17 == 0) {
      local_698 = (longlong)(int)uVar24;
      local_690 = (longlong)iVar3;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)(*(longlong *)(lVar19 + 0x70) + (longlong)(int)uVar24 * 4) = 1;
    lVar19 = **(longlong **)((longlong)this + 8);
    iVar3 = *(int *)(lVar19 + 0x88);
    uVar24 = **(uint **)((longlong)this + 0x10);
    if ((int)uVar24 < iVar3) {
      uVar16 = ~uVar24 >> 0x1f;
    }
    if (uVar16 == 0) {
      local_698 = (longlong)(int)uVar24;
      local_690 = (longlong)iVar3;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(int *)(*(longlong *)(lVar19 + 0x80) + (longlong)(int)uVar24 * 4) = iVar14;
    uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_148.Rotation.XY.m128d_f64[1]._0_4_ = uVar27;
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1]._4_4_ = uVar28;
    local_148.Rotation.ZW.m128d_f64[1]._0_4_ = uVar31;
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
    local_328.Rotation.XY.m128d_f64[1]._0_4_ = uVar27;
    local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_328.Rotation.XY.m128d_f64[1]._4_4_ = uVar28;
    local_148.Translation.XY.m128d_f64[0] = local_650._s_0.X;
    local_148.Translation.XY.m128d_f64[1] = local_650._s_0.Y;
    uVar29 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_148.Translation.ZW.m128d_f64[0] = local_5d8;
    local_148.Translation.ZW.m128d_f64[1] = 0.0;
    local_328.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_328.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_148.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1]._4_4_ = uVar30;
    local_328.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_328.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
    local_328.Rotation.ZW.m128d_f64[1]._0_4_ = uVar31;
    local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_328.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
    local_328.Scale3D.XY.m128d_f64[1]._0_4_ = uVar29;
    local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_328.Scale3D.XY.m128d_f64[1]._4_4_ = uVar30;
    local_328.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar27;
    local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_328.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar28;
    UE::Math::TTransform<double>::Multiply(&local_328,&local_148,&local_508);
    NDIRigidMeshCollisionLocal::FillCurrentTransforms
              (&local_328,**(uint **)((longlong)this + 0x10),
               (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
               (**(longlong **)((longlong)this + 8) + 0x10),
               (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
               (**(longlong **)((longlong)this + 8) + 0x20));
    **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  }
  return;
}

// operator() @ 1491af3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`NDIRigidMeshCollisionLocal::UpdateAssetArrays<UStaticMeshComponent,1>'::__l2::<lambda_1>::
operator()(void *this,UStaticMeshComponent *param_1,UBodySetup *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  TQuat<double> *pTVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_6b8 [32];
  longlong local_698;
  longlong local_690;
  undefined1 local_688;
  undefined1 local_687;
  undefined1 local_686;
  undefined1 local_685;
  uint local_684;
  int local_680;
  FScriptContainerElement *local_678;
  FPrimitiveComponentId local_670 [2];
  float local_668;
  float fStack_664;
  float fStack_660;
  undefined4 uStack_65c;
  UStaticMeshComponent *local_658;
  TVector<double>_u_0 local_650;
  double local_638;
  double local_630;
  double local_628;
  undefined1 local_618 [16];
  double local_608;
  double local_600;
  double dStack_5f8;
  double local_5f0;
  double local_5d8;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  TQuat<double> local_588;
  TQuat<double> local_568 [2];
  undefined8 local_518;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  pdVar4 = *(double **)this;
  local_600 = (double)param_1->_padding_;
  dStack_5f8 = (double)param_1->_padding_;
  local_5f0 = (double)param_1->_padding_;
  local_508.Scale3D.ZW.m128d_f64[1] = (double)param_1->_padding_;
  local_508.Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  local_508.Rotation.XY.m128d_f64[1] = (double)param_1->_padding_;
  local_508.Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  local_508.Rotation.ZW.m128d_f64[1] = (double)param_1->_padding_;
  local_608 = pdVar4[2] * __real_c140000000000000;
  dVar7 = pdVar4[1] * __real_c140000000000000;
  dVar9 = (double)param_1->_padding_ + 0.0;
  dVar8 = (double)param_1->_padding_ + dVar7;
  local_508.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_508.Translation.ZW.m128d_f64[0] = (double)param_1->_padding_ + local_608;
  local_508.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_508.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
  local_508.Translation.XY.m128d_f64[0] =
       (double)param_1->_padding_ + *pdVar4 * __real_c140000000000000;
  local_508.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_670[0].PrimIDValue = *(uint *)((longlong)&param_1->_padding_ + 4);
  fVar33 = (float)local_600;
  local_618._8_4_ = SUB84(dVar7,0);
  local_618._0_8_ = *pdVar4 * __real_c140000000000000;
  local_618._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  fVar34 = (float)dStack_5f8;
  fVar35 = (float)local_5f0;
  local_658 = param_1;
  local_508.Scale3D.XY.m128d_f64[0] = local_600;
  local_508.Scale3D.XY.m128d_f64[1] = dStack_5f8;
  local_508.Scale3D.ZW.m128d_f64[0] = local_5f0;
  iVar15 = TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_>::
           AddUniqueImpl<FPrimitiveComponentId>
                     ((TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *)
                      (**(longlong **)((longlong)this + 8) + 0x90),local_670);
  dVar7 = __real_3fe0000000000000;
  pFVar21 = (param_2->AggGeom).ConvexElems.AllocatorInstance.Data;
  local_684 = (param_2->AggGeom).ConvexElems.ArrayNum;
  uVar19 = (ulonglong)(int)local_684;
  pFVar23 = pFVar21 + uVar19 * 0x100;
  local_680 = iVar15;
  local_678 = pFVar23;
  while( true ) {
    if ((param_2->AggGeom).ConvexElems.ArrayNum != (int)uVar19) {
      local_688 = 0;
      `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_688);
    }
    dVar10 = _UNK_150689688;
    dVar11 = ___xmm_3ff00000000000003ff0000000000000;
    dVar9 = _UNK_150689518;
    dVar8 = ___xmm_00000000000000003ff0000000000000;
    uVar22 = 0;
    uVar17 = 0;
    if (pFVar21 == pFVar23) break;
    if (pFVar21[0x19] != (FScriptContainerElement)0x0) {
      dVar8 = *(double *)(pFVar21 + 0x60);
      dVar9 = *(double *)(pFVar21 + 0x68);
      dVar11 = *(double *)(pFVar21 + 0x50);
      dVar10 = *(double *)(pFVar21 + 0x58);
      uStack_65c = 0;
      dVar12 = *(double *)(pFVar21 + 0x70);
      dVar13 = *(double *)(pFVar21 + 0x78);
      lVar5 = **(longlong **)((longlong)this + 8);
      local_518 = *(undefined8 *)(pFVar21 + 0x80);
      iVar15 = *(int *)(lVar5 + 0x58);
      uVar18 = **(uint **)((longlong)this + 0x10);
      local_668 = (float)(dVar9 - dVar11);
      uVar16 = uVar22;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      fStack_664 = (float)(dVar12 - dVar10);
      fStack_660 = (float)(dVar13 - dVar8);
      if (uVar16 == 0) {
        local_698 = (longlong)(int)uVar18;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar5 + 0x50) + (longlong)(int)uVar18 * 0x10);
      *puVar1 = CONCAT44(fStack_664,local_668);
      puVar1[1] = CONCAT44(uStack_65c,fStack_660);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x68);
      uVar18 = **(uint **)((longlong)this + 0x10);
      lVar24 = (longlong)(int)uVar18;
      uVar16 = uVar22;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = lVar24;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x60);
      *(float *)(lVar5 + lVar24 * 0x10) = fVar33;
      *(float *)(lVar5 + 4 + lVar24 * 0x10) = fVar34;
      *(float *)(lVar5 + 8 + lVar24 * 0x10) = fVar35;
      *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
      FVar2 = pFVar21[0x19];
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x78);
      uVar18 = **(uint **)((longlong)this + 0x10);
      if ((int)uVar18 < iVar15) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_698 = (longlong)(int)uVar18;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar5 + 0x70) + (longlong)(int)uVar18 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x88);
      uVar22 = **(uint **)((longlong)this + 0x10);
      if ((int)uVar22 < iVar15) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if (uVar17 == 0) {
        local_698 = (longlong)(int)uVar22;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar15 = local_680;
      *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)(int)uVar22 * 4) = local_680;
      uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      uVar29 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      dVar10 = (dVar12 + dVar10) * dVar7;
      local_2c8.Translation.ZW.m128d_f64[0] = (dVar13 + dVar8) * dVar7;
      local_2c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
      local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
      local_2c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar29;
      local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar30;
      local_2c8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
      local_2c8.Translation.XY.m128d_f64[0] = (dVar9 + dVar11) * dVar7;
      local_2c8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      uVar25 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_2c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_4a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
      local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
      local_4a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar25;
      local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar26;
      local_4a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
      local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
      local_4a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar29;
      local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_4a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar30;
      local_4a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
      local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_4a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
      local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar25;
      local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar26;
      UE::Math::TTransform<double>::Multiply(&local_4a8,&local_2c8,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_4a8,**(uint **)((longlong)this + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
      pFVar23 = local_678;
    }
    uVar19 = (ulonglong)local_684;
    pFVar21 = pFVar21 + 0x100;
  }
  local_684 = (param_2->AggGeom).BoxElems.ArrayNum;
  uVar19 = (ulonglong)(int)local_684;
  pFVar21 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data;
  pFVar23 = pFVar21 + uVar19 * 0x70;
  local_678 = pFVar23;
  while( true ) {
    if ((param_2->AggGeom).BoxElems.ArrayNum != (int)uVar19) {
      local_687 = 0;
      `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_687);
    }
    if (pFVar21 == pFVar23) break;
    if (pFVar21[0x19] != (FScriptContainerElement)0x0) {
      uVar25 = *(undefined4 *)(pFVar21 + 0x60);
      uVar26 = *(undefined4 *)(pFVar21 + 100);
      uVar27 = *(undefined4 *)(pFVar21 + 0x68);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x58);
      uVar18 = **(uint **)((longlong)this + 0x10);
      lVar24 = (longlong)(int)uVar18;
      uVar16 = uVar17;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = lVar24;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x50);
      *(undefined4 *)(lVar5 + lVar24 * 0x10) = uVar25;
      *(undefined4 *)(lVar5 + 4 + lVar24 * 0x10) = uVar26;
      *(undefined4 *)(lVar5 + 8 + lVar24 * 0x10) = uVar27;
      *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x68);
      uVar18 = **(uint **)((longlong)this + 0x10);
      lVar24 = (longlong)(int)uVar18;
      uVar16 = uVar22;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = lVar24;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x60);
      *(float *)(lVar5 + lVar24 * 0x10) = fVar33;
      *(float *)(lVar5 + 4 + lVar24 * 0x10) = fVar34;
      *(float *)(lVar5 + 8 + lVar24 * 0x10) = fVar35;
      *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
      FVar2 = pFVar21[0x19];
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x78);
      uVar18 = **(uint **)((longlong)this + 0x10);
      uVar16 = uVar22;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = (longlong)(int)uVar18;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar5 + 0x70) + (longlong)(int)uVar18 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x88);
      uVar18 = **(uint **)((longlong)this + 0x10);
      uVar16 = uVar17;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = (longlong)(int)uVar18;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar15 = local_680;
      *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)(int)uVar18 * 4) = local_680;
      pTVar20 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(pFVar21 + 0x48),&local_588);
      local_268.Translation.ZW.m128d_f64[0] = *(double *)(pFVar21 + 0x40);
      local_5c8 = pTVar20->X;
      dStack_5c0 = pTVar20->Y;
      local_5b8 = pTVar20->Z;
      dStack_5b0 = pTVar20->W;
      local_268.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar21 + 0x30);
      local_268.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar21 + 0x34);
      local_268.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)*(undefined8 *)(pFVar21 + 0x38);
      local_268.Translation.XY.m128d_f64[1]._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 0x38) >> 0x20);
      local_448.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_448.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_268.Translation.ZW.m128d_f64[1] = 0.0;
      local_448.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_448.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_448.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_448.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_448.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_448.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_268.Scale3D.XY.m128d_f64[0] = dVar11;
      local_268.Scale3D.XY.m128d_f64[1] = dVar10;
      local_448.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_448.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_268.Scale3D.ZW.m128d_f64[0] = dVar8;
      local_268.Scale3D.ZW.m128d_f64[1] = dVar9;
      local_448.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_448.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_268.Rotation.XY.m128d_f64[0] = local_5c8;
      local_268.Rotation.XY.m128d_f64[1] = dStack_5c0;
      local_268.Rotation.ZW.m128d_f64[0] = local_5b8;
      local_268.Rotation.ZW.m128d_f64[1] = dStack_5b0;
      UE::Math::TTransform<double>::Multiply(&local_448,&local_268,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_448,**(uint **)((longlong)this + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
      pFVar23 = local_678;
    }
    uVar19 = (ulonglong)local_684;
    pFVar21 = pFVar21 + 0x70;
  }
  local_684 = (param_2->AggGeom).SphereElems.ArrayNum;
  uVar19 = (ulonglong)(int)local_684;
  pFVar21 = (param_2->AggGeom).SphereElems.AllocatorInstance.Data;
  pFVar23 = pFVar21 + uVar19 * 0x50;
  local_678 = pFVar23;
  while( true ) {
    if ((param_2->AggGeom).SphereElems.ArrayNum != (int)uVar19) {
      local_686 = 0;
      `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_686);
    }
    uVar22 = 0;
    if (pFVar21 == pFVar23) break;
    if (pFVar21[0x19] != (FScriptContainerElement)0x0) {
      uVar25 = *(undefined4 *)(pFVar21 + 0x48);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x58);
      uVar18 = **(uint **)((longlong)this + 0x18);
      lVar24 = (longlong)(int)uVar18;
      uVar16 = uVar17;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = lVar24;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x50);
      *(undefined4 *)(lVar5 + lVar24 * 0x10) = uVar25;
      *(undefined8 *)(lVar5 + 4 + lVar24 * 0x10) = 0;
      *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x68);
      uVar18 = **(uint **)((longlong)this + 0x18);
      lVar24 = (longlong)(int)uVar18;
      uVar16 = uVar22;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = lVar24;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x60);
      *(float *)(lVar5 + lVar24 * 0x10) = fVar33;
      *(float *)(lVar5 + 4 + lVar24 * 0x10) = fVar34;
      *(float *)(lVar5 + 8 + lVar24 * 0x10) = fVar35;
      *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
      FVar2 = pFVar21[0x19];
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x78);
      uVar18 = **(uint **)((longlong)this + 0x18);
      if ((int)uVar18 < iVar15) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_698 = (longlong)(int)uVar18;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar5 + 0x70) + (longlong)(int)uVar18 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x88);
      uVar22 = **(uint **)((longlong)this + 0x18);
      uVar18 = uVar17;
      if ((int)uVar22 < iVar15) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_698 = (longlong)(int)uVar22;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar15 = local_680;
      *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)(int)uVar22 * 4) = local_680;
      local_208.Translation.ZW.m128d_f64[0] = *(double *)(pFVar21 + 0x40);
      uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      uVar29 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      local_208.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar21 + 0x30);
      local_208.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar21 + 0x34);
      local_208.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar21 + 0x38);
      local_208.Translation.XY.m128d_f64[1]._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 0x38) >> 0x20);
      uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      local_208.Translation.ZW.m128d_f64[1] = 0.0;
      uVar25 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_3e8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_3e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_3e8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_208.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
      local_3e8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_3e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_3e8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_208.Rotation.ZW.m128d_f64[1]._0_4_ = uVar29;
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1]._4_4_ = uVar30;
      local_208.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
      local_208.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar25;
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar26;
      local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
      local_3e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
      local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar29;
      local_3e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar30;
      local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
      local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
      local_3e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar25;
      local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_3e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar26;
      UE::Math::TTransform<double>::Multiply(&local_3e8,&local_208,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_3e8,**(uint **)((longlong)this + 0x18),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
      pFVar23 = local_678;
    }
    uVar19 = (ulonglong)local_684;
    pFVar21 = pFVar21 + 0x50;
  }
  local_684 = (param_2->AggGeom).SphylElems.ArrayNum;
  uVar19 = (ulonglong)(int)local_684;
  pFVar21 = (param_2->AggGeom).SphylElems.AllocatorInstance.Data;
  pFVar23 = pFVar21 + uVar19 * 0x68;
  local_678 = pFVar23;
  while( true ) {
    if ((param_2->AggGeom).SphylElems.ArrayNum != (int)uVar19) {
      local_685 = 0;
      `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_685);
    }
    if (pFVar21 == pFVar23) break;
    if (pFVar21[0x19] != (FScriptContainerElement)0x0) {
      uVar25 = *(undefined4 *)(pFVar21 + 0x60);
      uVar26 = *(undefined4 *)(pFVar21 + 100);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x58);
      uVar18 = **(uint **)((longlong)this + 0x20);
      lVar24 = (longlong)(int)uVar18;
      uVar16 = uVar17;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = lVar24;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x50);
      *(undefined4 *)(lVar5 + lVar24 * 0x10) = uVar25;
      *(undefined4 *)(lVar5 + 4 + lVar24 * 0x10) = uVar26;
      *(undefined8 *)(lVar5 + 8 + lVar24 * 0x10) = 0;
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x68);
      uVar18 = **(uint **)((longlong)this + 0x20);
      lVar24 = (longlong)(int)uVar18;
      uVar16 = uVar22;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = lVar24;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x60);
      *(float *)(lVar5 + lVar24 * 0x10) = fVar33;
      *(float *)(lVar5 + 4 + lVar24 * 0x10) = fVar34;
      *(float *)(lVar5 + 8 + lVar24 * 0x10) = fVar35;
      *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
      FVar2 = pFVar21[0x19];
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x78);
      uVar18 = **(uint **)((longlong)this + 0x20);
      uVar16 = uVar22;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = (longlong)(int)uVar18;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(uint *)(*(longlong *)(lVar5 + 0x70) + (longlong)(int)uVar18 * 4) =
           (uint)(FVar2 == (FScriptContainerElement)0x3);
      lVar5 = **(longlong **)((longlong)this + 8);
      iVar15 = *(int *)(lVar5 + 0x88);
      uVar18 = **(uint **)((longlong)this + 0x20);
      uVar16 = uVar17;
      if ((int)uVar18 < iVar15) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_698 = (longlong)(int)uVar18;
        local_690 = (longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar15 = local_680;
      *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)(int)uVar18 * 4) = local_680;
      pTVar20 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(pFVar21 + 0x48),local_568);
      local_1a8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar21 + 0x40);
      local_5a8 = pTVar20->X;
      dStack_5a0 = pTVar20->Y;
      local_598 = pTVar20->Z;
      dStack_590 = pTVar20->W;
      local_1a8.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pFVar21 + 0x30);
      local_1a8.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar21 + 0x34);
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)*(undefined8 *)(pFVar21 + 0x38);
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 0x38) >> 0x20);
      local_388.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_388.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
      local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_388.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_388.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_388.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_388.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1a8.Scale3D.XY.m128d_f64[0] = dVar11;
      local_1a8.Scale3D.XY.m128d_f64[1] = dVar10;
      local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_1a8.Scale3D.ZW.m128d_f64[0] = dVar8;
      local_1a8.Scale3D.ZW.m128d_f64[1] = dVar9;
      local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1a8.Rotation.XY.m128d_f64[0] = local_5a8;
      local_1a8.Rotation.XY.m128d_f64[1] = dStack_5a0;
      local_1a8.Rotation.ZW.m128d_f64[0] = local_598;
      local_1a8.Rotation.ZW.m128d_f64[1] = dStack_590;
      UE::Math::TTransform<double>::Multiply(&local_388,&local_1a8,&local_508);
      NDIRigidMeshCollisionLocal::FillCurrentTransforms
                (&local_388,**(uint **)((longlong)this + 0x20),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (**(longlong **)((longlong)this + 8) + 0x20));
      **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
      pFVar23 = local_678;
    }
    uVar19 = (ulonglong)local_684;
    pFVar21 = pFVar21 + 0x68;
  }
  if (((((param_2->AggGeom).ConvexElems.ArrayNum == 0) &&
       ((param_2->AggGeom).BoxElems.ArrayNum == 0)) &&
      ((param_2->AggGeom).SphereElems.ArrayNum == 0)) &&
     ((param_2->AggGeom).SphylElems.ArrayNum == 0)) {
    USceneComponent::GetLocalBounds
              ((USceneComponent *)local_658,(TBoxSphereBounds<double,double> *)&local_650._s_0);
    lVar5 = **(longlong **)((longlong)this + 8);
    local_638 = local_638 * __real_4000000000000000;
    iVar3 = *(int *)(lVar5 + 0x58);
    uVar22 = **(uint **)((longlong)this + 0x10);
    lVar24 = (longlong)(int)uVar22;
    local_5d8 = local_650._s_0.Z;
    uVar18 = uVar17;
    if ((int)uVar22 < iVar3) {
      uVar18 = ~uVar22 >> 0x1f;
    }
    dVar7 = local_630 * __real_4000000000000000;
    dVar8 = local_628 * __real_4000000000000000;
    if (uVar18 == 0) {
      local_698 = lVar24;
      local_690 = (longlong)iVar3;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x50);
    *(float *)(lVar5 + lVar24 * 0x10) = (float)local_638;
    *(float *)(lVar5 + 4 + lVar24 * 0x10) = (float)dVar7;
    *(float *)(lVar5 + 8 + lVar24 * 0x10) = (float)dVar8;
    *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
    lVar5 = **(longlong **)((longlong)this + 8);
    iVar3 = *(int *)(lVar5 + 0x68);
    uVar22 = **(uint **)((longlong)this + 0x10);
    lVar24 = (longlong)(int)uVar22;
    uVar18 = uVar17;
    if ((int)uVar22 < iVar3) {
      uVar18 = ~uVar22 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_698 = lVar24;
      local_690 = (longlong)iVar3;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x60);
    *(float *)(lVar5 + lVar24 * 0x10) = fVar33;
    *(float *)(lVar5 + 4 + lVar24 * 0x10) = fVar34;
    *(float *)(lVar5 + 8 + lVar24 * 0x10) = fVar35;
    *(undefined4 *)(lVar5 + 0xc + lVar24 * 0x10) = 0;
    lVar5 = **(longlong **)((longlong)this + 8);
    iVar3 = *(int *)(lVar5 + 0x78);
    uVar22 = **(uint **)((longlong)this + 0x10);
    uVar18 = uVar17;
    if ((int)uVar22 < iVar3) {
      uVar18 = ~uVar22 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_698 = (longlong)(int)uVar22;
      local_690 = (longlong)iVar3;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(undefined4 *)(*(longlong *)(lVar5 + 0x70) + (longlong)(int)uVar22 * 4) = 1;
    lVar5 = **(longlong **)((longlong)this + 8);
    iVar3 = *(int *)(lVar5 + 0x88);
    uVar22 = **(uint **)((longlong)this + 0x10);
    if ((int)uVar22 < iVar3) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    if (uVar17 == 0) {
      local_698 = (longlong)(int)uVar22;
      local_690 = (longlong)iVar3;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(int *)(*(longlong *)(lVar5 + 0x80) + (longlong)(int)uVar22 * 4) = iVar15;
    uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    uVar29 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_148.Rotation.XY.m128d_f64[1]._0_4_ = uVar25;
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1]._4_4_ = uVar26;
    local_148.Rotation.ZW.m128d_f64[1]._0_4_ = uVar29;
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1]._4_4_ = uVar30;
    local_328.Rotation.XY.m128d_f64[1]._0_4_ = uVar25;
    local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_328.Rotation.XY.m128d_f64[1]._4_4_ = uVar26;
    local_148.Translation.XY.m128d_f64[0] = local_650._s_0.X;
    local_148.Translation.XY.m128d_f64[1] = local_650._s_0.Y;
    uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    uVar25 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_148.Translation.ZW.m128d_f64[0] = local_5d8;
    local_148.Translation.ZW.m128d_f64[1] = 0.0;
    local_328.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_328.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_148.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
    local_328.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_328.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar25;
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar26;
    local_328.Rotation.ZW.m128d_f64[1]._0_4_ = uVar29;
    local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_328.Rotation.ZW.m128d_f64[1]._4_4_ = uVar30;
    local_328.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
    local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_328.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
    local_328.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar25;
    local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_328.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar26;
    UE::Math::TTransform<double>::Multiply(&local_328,&local_148,&local_508);
    NDIRigidMeshCollisionLocal::FillCurrentTransforms
              (&local_328,**(uint **)((longlong)this + 0x10),
               (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
               (**(longlong **)((longlong)this + 8) + 0x10),
               (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
               (**(longlong **)((longlong)this + 8) + 0x20));
    **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  }
  return;
}

// operator() @ 1491b18d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction'::__l5::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res10 [8];
  
  bVar2 = FNiagaraVMExecutableData::IsValid(&param_1->CachedScriptVM);
  if (bVar2) {
    pFVar3 = (FName *)(param_1->CachedScriptVM).CalledVMExternalFunctions.AllocatorInstance.Data;
    iVar1 = (param_1->CachedScriptVM).CalledVMExternalFunctions.ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0xb;
    while( true ) {
      if ((param_1->CachedScriptVM).CalledVMExternalFunctions.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVMExternalFunctionBindingInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar4) {
        return;
      }
      if (*pFVar3 == NDIRigidMeshCollisionLocal::FindActorsName) break;
      pFVar3 = pFVar3 + 0xb;
    }
    **(undefined1 **)this = 1;
  }
  return;
}

// operator() @ 1491b1960

void __thiscall
`NDIRigidMeshCollisionLocal::CountCollisionPrimitives<USkeletalMeshComponent>'::__l6::<lambda_1>::
operator()(void *this,USkeletalMeshComponent *param_1,UBodySetup *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [16];
  
  iVar1 = (param_2->AggGeom).ConvexElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).ConvexElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x100;
  while( true ) {
    if ((param_2->AggGeom).ConvexElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 4) = *(int *)(*(longlong *)this + 4) + 1;
    }
    pFVar3 = pFVar3 + 0x100;
  }
  iVar1 = (param_2->AggGeom).BoxElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((param_2->AggGeom).BoxElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 4) = *(int *)(*(longlong *)this + 4) + 1;
    }
    pFVar3 = pFVar3 + 0x70;
  }
  iVar1 = (param_2->AggGeom).SphereElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).SphereElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((param_2->AggGeom).SphereElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 8) = *(int *)(*(longlong *)this + 8) + 1;
    }
    pFVar3 = pFVar3 + 0x50;
  }
  iVar1 = (param_2->AggGeom).SphylElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).SphylElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((param_2->AggGeom).SphylElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 0xc) = *(int *)(*(longlong *)this + 0xc) + 1;
    }
    pFVar3 = pFVar3 + 0x68;
  }
  if (((((param_2->AggGeom).ConvexElems.ArrayNum == 0) &&
       ((param_2->AggGeom).BoxElems.ArrayNum == 0)) &&
      ((param_2->AggGeom).SphereElems.ArrayNum == 0)) &&
     ((param_2->AggGeom).SphylElems.ArrayNum == 0)) {
    *(int *)(*(longlong *)this + 4) = *(int *)(*(longlong *)this + 4) + 1;
  }
  return;
}

// operator() @ 1491b1ab0

void __thiscall
`NDIRigidMeshCollisionLocal::CountCollisionPrimitives<UStaticMeshComponent>'::__l6::<lambda_1>::
operator()(void *this,UStaticMeshComponent *param_1,UBodySetup *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [16];
  
  iVar1 = (param_2->AggGeom).ConvexElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).ConvexElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x100;
  while( true ) {
    if ((param_2->AggGeom).ConvexElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 4) = *(int *)(*(longlong *)this + 4) + 1;
    }
    pFVar3 = pFVar3 + 0x100;
  }
  iVar1 = (param_2->AggGeom).BoxElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((param_2->AggGeom).BoxElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 4) = *(int *)(*(longlong *)this + 4) + 1;
    }
    pFVar3 = pFVar3 + 0x70;
  }
  iVar1 = (param_2->AggGeom).SphereElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).SphereElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((param_2->AggGeom).SphereElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 8) = *(int *)(*(longlong *)this + 8) + 1;
    }
    pFVar3 = pFVar3 + 0x50;
  }
  iVar1 = (param_2->AggGeom).SphylElems.ArrayNum;
  pFVar3 = (param_2->AggGeom).SphylElems.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((param_2->AggGeom).SphylElems.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3[0x19] != (FScriptContainerElement)0x0) {
      *(int *)(*(longlong *)this + 0xc) = *(int *)(*(longlong *)this + 0xc) + 1;
    }
    pFVar3 = pFVar3 + 0x68;
  }
  if (((((param_2->AggGeom).ConvexElems.ArrayNum == 0) &&
       ((param_2->AggGeom).BoxElems.ArrayNum == 0)) &&
      ((param_2->AggGeom).SphereElems.ArrayNum == 0)) &&
     ((param_2->AggGeom).SphylElems.ArrayNum == 0)) {
    *(int *)(*(longlong *)this + 4) = *(int *)(*(longlong *)this + 4) + 1;
  }
  return;
}

// operator() @ 1491b1c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
``UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>::operator()'::__l8
::<lambda_1>::operator()(void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  undefined8 uVar1;
  int iVar2;
  FParameters *pFVar3;
  FShaderParametersMetadata *pFVar4;
  TIntVector3<int>_u_0 local_18;
  
  uVar1 = *(undefined8 *)((longlong)this + 0x18);
  iVar2 = *(int *)((longlong)this + 0x20);
  pFVar3 = *(FParameters **)this;
  pFVar4 = FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata();
  local_18._0_8_ = uVar1;
  local_18._s_0.Z = iVar2;
  FComputeShaderUtils::Dispatch<FNiagaraCopySVTToDenseBufferCS>
            (param_2,(TShaderRefBase<FNiagaraCopySVTToDenseBufferCS,FShaderMapPointerTable> *)
                     ((longlong)this + 8),pFVar4,pFVar3,(TIntVector3<int> *)&local_18._s_0);
  return;
}

// operator() @ 1491b3020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
NiagaraDataInterfaceRenderTargetCommon::<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  ETextureRenderTargetFormat EVar3;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    TextureRenderTargetFormatEnum = StaticEnum<enum_ETextureRenderTargetFormat>();
    _Init_thread_footer(&::_TSS0);
  }
  if (TextureRenderTargetFormatEnum == (UEnum *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6813174185775333338>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetCommon.cpp"
                       ,0x26,"TextureRenderTargetFormatEnum");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (param_1->ArrayNum == 1) {
      EVar3 = UEnum::GetIndexByNameString
                        (TextureRenderTargetFormatEnum,(FString *)(param_1->AllocatorInstance).Data,
                         None);
      if (EVar3 == ~RTF_R8) {
        GNiagaraRenderTargetOverrideFormatEnabled = false;
      }
      else {
        GNiagaraRenderTargetOverrideFormatEnabled = true;
        GNiagaraRenderTargetOverrideFormat = EVar3;
      }
    }
    if (4 < (byte)LogNiagara._0_1_) {
      UEnum::GetNameStringByIndex
                (TextureRenderTargetFormatEnum,&local_18,GNiagaraRenderTargetOverrideFormat);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{56}' @ 1491b3820

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraDataInterfaceRenderTarget2D::`vector
   deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraDataInterfaceRenderTarget2D::_vector_deleting_destructor__adjustor_56__
          (UNiagaraDataInterfaceRenderTarget2D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraDataInterfaceRenderTarget2D *)
                      &this[-1].SystemInstancesToProxyData_GT.field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 1491b3830

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraDataInterfaceRenderTargetVolume::`vector
   deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraDataInterfaceRenderTargetVolume::_vector_deleting_destructor__adjustor_56__
          (UNiagaraDataInterfaceRenderTargetVolume *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraDataInterfaceRenderTargetVolume *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1491b3840

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadBoolBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3870

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadBoolByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b38a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadColorBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b38d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadColorByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3900

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadFloatBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3930

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadFloatByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3960

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadIDBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3990

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadIDByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b39c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadIntBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b39f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadIntByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3a20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadPositionBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3a50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadPositionByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3a80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadQuatBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3ab0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadQuatByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3ae0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadVector2Binder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3b10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadVector2ByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3b40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadVector3Binder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3b70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadVector3ByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3ba0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadVector4Binder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3bd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_ReadVector4ByIndexBinder::Bind<FName>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3c00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceNeighborGrid3D_SetNumCellsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3c30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_GetNumParticlesBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3c60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_GetNumSpawnedParticlesBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3c90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_GetParticleIndexBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3cc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_GetParticleIndexFromIDTableBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3cf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceParticleRead_GetSpawnedIDAtIndexBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3d20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePlatformSet_IsActiveBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3d50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceRigidMeshCollisionQuery_FindActorsCPUBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3d80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceRigidMeshCollisionQuery_GetNumElementsCPUBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3db0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceRigidMeshCollisionQuery_IsWorldPositionInsideCombinedBoundsCPUBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3de0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialInstanceDynamic::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3e10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialParameterCollection::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3e40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3e70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceParticleRead::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3ea0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialInstanceDynamic::GetVMExternalFunction'::__l9::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3ed0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialParameterCollection::GetVMExternalFunction'::__l9::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3f00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::__l16::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3f30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::__l27::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3f60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3f90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3fc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b3ff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4050

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b40c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b41c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b42c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4310

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 0x90) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x90));
  }
  if (*(FRHIResource **)((longlong)this + 0x88) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x88));
  }
  FNiagaraPooledRWTexture::Release((FNiagaraPooledRWTexture *)((longlong)this + 0x60));
  if (*(longlong **)((longlong)this + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x60) + 0x38))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b43a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b43f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4430

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 0x90) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x90));
  }
  if (*(FRHIResource **)((longlong)this + 0x88) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x88));
  }
  FNiagaraPooledRWTexture::Release((FNiagaraPooledRWTexture *)((longlong)this + 0x60));
  if (*(longlong **)((longlong)this + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 0x60) + 0x38))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b44c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b45c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::`9'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b46e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b47b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b47f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::`35'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`37'::<lambda_2>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4880

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FNiagaraCopySVTToDenseBufferCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FNiagaraCopySVTToDenseBufferCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b48b0

void * __thiscall
TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,``UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>::operator()'::__l8::<lambda_1>_>
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
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4910

void * __thiscall
FNDIMeshRendererInfoProxy::_scalar_deleting_destructor_
          (FNDIMeshRendererInfoProxy *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->GPUMeshData).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->GPUMeshData).Buffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4970

void * __thiscall
NDIPlatformSetPrivate::FNDIPlatformSetProxy::_scalar_deleting_destructor_
          (FNDIPlatformSetProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b49b0

void * __thiscall
FNDIRigidMeshCollisionBuffer::_scalar_deleting_destructor_
          (FNDIRigidMeshCollisionBuffer *this,uint param_1)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  
  pFVar1 = (this->DFIndexBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->DFIndexBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->PhysicsTypeBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->PhysicsTypeBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->MeshScaleBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->MeshScaleBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->ElementExtentBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->ElementExtentBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->InverseTransformBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->InverseTransformBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->WorldTransformBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->WorldTransformBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4ab0

void * __thiscall
FNDIRigidMeshCollisionProxy::_scalar_deleting_destructor_
          (FNDIRigidMeshCollisionProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4b20

void * __thiscall
FNiagaraDataIntefaceProxyOcclusionQuery::_scalar_deleting_destructor_
          (FNiagaraDataIntefaceProxyOcclusionQuery *this,uint param_1)

{
  *(undefined ***)this = &___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4b60

void * __thiscall
FNiagaraDataInterfaceProxyNeighborGrid3D::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyNeighborGrid3D *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4bd0

void * __thiscall
FNiagaraDataInterfaceProxyParticleRead::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyParticleRead *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemsRenderData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemsRenderData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemsRenderData);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4c40

void * __thiscall
FNiagaraDataInterfaceProxyRasterizationGrid3D::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyRasterizationGrid3D *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4cb0

void * __thiscall
FNiagaraDataInterfaceProxyRenderTarget2DArrayProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyRenderTarget2DArrayProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DArrayRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4d20

void * __thiscall
FNiagaraDataInterfaceProxyRenderTarget2DProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyRenderTarget2DProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4d90

void * __thiscall
FNiagaraDataInterfaceProxyRenderTargetCubeProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyRenderTargetCubeProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4e00

void * __thiscall
FNiagaraDataInterfaceProxyRenderTargetVolumeProxy::_scalar_deleting_destructor_
          (FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4e70

void * __thiscall
UNiagaraDIRigidMeshCollisionFunctionLibrary::_scalar_deleting_destructor_
          (UNiagaraDIRigidMeshCollisionFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraDIRigidMeshCollisionFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1491b4ed0

void * __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialInstanceDynamic__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4f30

void * __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceMaterialParameterCollection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialParameterCollection__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b4f90

void * __thiscall
UNiagaraDataInterfaceMeshRendererInfo::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceMeshRendererInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMeshRendererInfo__6B_;
  pFVar1 = (this->CachedMeshData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b5000

void * __thiscall
UNiagaraDataInterfaceNeighborGrid3D::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceNeighborGrid3D *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceNeighborGrid3D__6B_;
  UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D((UNiagaraDataInterfaceGrid3D *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b5060

void * __thiscall
UNiagaraDataInterfaceOcclusion::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceOcclusion *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceOcclusion__6B_;
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

// `scalar_deleting_destructor' @ 1491b50c0

void * __thiscall
UNiagaraDataInterfaceParticleRead::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceParticleRead *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceParticleRead__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b5120

void * __thiscall
UNiagaraDataInterfacePlatformSet::_scalar_deleting_destructor_
          (UNiagaraDataInterfacePlatformSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfacePlatformSet__6B_;
  pFVar1 = (this->Platforms).CVarConditions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 1491b51a0

void * __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceRasterizationGrid3D *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRasterizationGrid3D__6B_;
  UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D((UNiagaraDataInterfaceGrid3D *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b5200

void * __thiscall
UNiagaraDataInterfaceRenderTarget2D::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceRenderTarget2D *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  pFVar2 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b52c0

void * __thiscall
UNiagaraDataInterfaceRenderTarget2DArray::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceRenderTarget2DArray *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRenderTarget2DArray__6B_;
  pFVar1 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b5330

void * __thiscall
UNiagaraDataInterfaceRenderTargetCube::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceRenderTargetCube *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRenderTargetCube__6B_;
  pFVar1 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b53a0

void * __thiscall
UNiagaraDataInterfaceRenderTargetVolume::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceRenderTargetVolume *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  pFVar1 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1491b5430

void * __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRigidMeshCollisionQuery__6B_;
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->SourceActors).AllocatorInstance.Data,
             (this->SourceActors).ArrayNum);
  pFVar1 = (this->SourceActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// CheckVariableType @ 1491b6db0

bool __cdecl
CheckVariableType(FNiagaraTypeDefinition *param_1,ENiagaraParticleDataValueType param_2)

{
  TObjectPtr<UObject>_u_0 TVar1;
  uchar uVar2;
  
  switch(param_2) {
  case Int:
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::IntDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::IntDef.Flags)) {
      return true;
    }
    break;
  case Float:
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
      return true;
    }
    break;
  case Vec2:
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
      return true;
    }
    break;
  case Vec3:
    TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
    if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
          FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
      return true;
    }
    goto LAB_1491b6ed0;
  case Vec4:
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) {
      return true;
    }
    break;
  case Bool:
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::BoolDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::BoolDef.Flags)) {
      return true;
    }
    break;
  case Color:
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::ColorDef.Flags)) {
      return true;
    }
    break;
  case Quat:
    if ((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr !=
        FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) {
      return false;
    }
    uVar2 = FNiagaraTypeDefinition::QuatDef.Flags;
    if (param_1->UnderlyingType != FNiagaraTypeDefinition::QuatDef.UnderlyingType) {
      return false;
    }
    goto LAB_1491b6eee;
  case ID:
    if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::IDDef.ClassStructOrEnum.field0_0x0) &&
        (param_1->UnderlyingType == FNiagaraTypeDefinition::IDDef.UnderlyingType)) &&
       (param_1->Flags == FNiagaraTypeDefinition::IDDef.Flags)) {
      return true;
    }
    break;
  case Position:
    TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
LAB_1491b6ed0:
    if (((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
         FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
       (uVar2 = FNiagaraTypeDefinition::PositionDef.Flags,
       param_1->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) {
LAB_1491b6eee:
      if (param_1->Flags == uVar2) {
        return true;
      }
    }
  }
  return false;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMaterialInstanceDynamic @ 1491c0d50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMaterialInstanceDynamic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMaterialParameterCollection @ 1491c0d60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMaterialParameterCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshCommon @ 1491c0d70

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshRendererInfo @ 1491c0d80

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshRendererInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceNeighborGrid3D @ 1491c0d90

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceNeighborGrid3D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceOcclusion @ 1491c0da0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceOcclusion(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceParticleRead @ 1491c0db0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceParticleRead(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePlatformSet @ 1491c0dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePlatformSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRasterizationGrid3D @ 1491c0dd0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRasterizationGrid3D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTarget2D @ 1491c0de0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTarget2D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTarget2DArray @ 1491c0df0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTarget2DArray(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTargetCube @ 1491c0e00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTargetCube(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTargetVolume @ 1491c0e10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTargetVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRigidMeshCollisionQuery @ 1491c0e20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRigidMeshCollisionQuery(void)

{
  return;
}

// FillCurrentTransforms @ 1491c2f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
NDIRigidMeshCollisionLocal::FillCurrentTransforms
          (TTransform<double> *param_1,uint param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  TMatrix<double> *pTVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  TMatrix<double> local_1a8;
  TMatrix<float> local_128;
  TMatrix<float> local_e8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_218;
  uVar4 = param_2 * 3;
  pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_1a8);
  local_128.M[0][0] = (float)pTVar7->M[0][0];
  local_128.M[0][1] = (float)pTVar7->M[0][1];
  local_128.M[0][2] = (float)pTVar7->M[0][2];
  local_128.M[0][3] = (float)pTVar7->M[0][3];
  local_128.M[1][2] = (float)pTVar7->M[1][2];
  local_128.M[1][3] = (float)pTVar7->M[1][3];
  local_128.M[3][0] = (float)pTVar7->M[3][0];
  local_128.M[3][1] = (float)pTVar7->M[3][1];
  local_128.M[1][0] = (float)pTVar7->M[1][0];
  local_128.M[1][1] = (float)pTVar7->M[1][1];
  local_128.M[2][2] = (float)pTVar7->M[2][2];
  local_128.M[2][3] = (float)pTVar7->M[2][3];
  local_128.M[2][0] = (float)pTVar7->M[2][0];
  local_128.M[2][1] = (float)pTVar7->M[2][1];
  local_128.M[3][3] = (float)pTVar7->M[3][3];
  local_128.M[3][2] = (float)pTVar7->M[3][2];
  if ((((((__real_322bcc77 <
           (float)((uint)local_128.M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
         (__real_322bcc77 <
          (float)((uint)local_128.M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
        (__real_322bcc77 < (float)((uint)local_128.M[0][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
        )) || ((__real_322bcc77 <
                (float)((uint)local_128.M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
               (__real_322bcc77 <
                (float)((uint)local_128.M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))))) ||
      ((__real_322bcc77 < (float)((uint)local_128.M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
       || ((__real_322bcc77 <
            (float)((uint)local_128.M[2][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
           (__real_322bcc77 <
            (float)((uint)local_128.M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))))))) ||
     (fVar9 = UE::Math::TMatrix<float>::Identity.M[1][0],
     fVar10 = UE::Math::TMatrix<float>::Identity.M[1][1],
     fVar11 = UE::Math::TMatrix<float>::Identity.M[1][2],
     fStack_1cc = UE::Math::TMatrix<float>::Identity.M[1][3],
     fVar12 = UE::Math::TMatrix<float>::Identity.M[3][0],
     fVar13 = UE::Math::TMatrix<float>::Identity.M[3][1],
     fVar14 = UE::Math::TMatrix<float>::Identity.M[3][2],
     fStack_1ac = UE::Math::TMatrix<float>::Identity.M[3][3],
     fVar15 = UE::Math::TMatrix<float>::Identity.M[0][0],
     fVar16 = UE::Math::TMatrix<float>::Identity.M[0][1],
     fVar17 = UE::Math::TMatrix<float>::Identity.M[0][2],
     fStack_1dc = UE::Math::TMatrix<float>::Identity.M[0][3],
     fVar18 = UE::Math::TMatrix<float>::Identity.M[2][0],
     fVar19 = UE::Math::TMatrix<float>::Identity.M[2][1],
     fVar20 = UE::Math::TMatrix<float>::Identity.M[2][2],
     fStack_1bc = UE::Math::TMatrix<float>::Identity.M[2][3],
     __real_322bcc77 < (float)((uint)local_128.M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    FMath::MatrixInverse(&local_e8,&local_128);
    fVar9 = local_e8.M[1][0];
    fVar10 = local_e8.M[1][1];
    fVar11 = local_e8.M[1][2];
    fStack_1cc = local_e8.M[1][3];
    fVar12 = local_e8.M[3][0];
    fVar13 = local_e8.M[3][1];
    fVar14 = local_e8.M[3][2];
    fStack_1ac = local_e8.M[3][3];
    fVar15 = local_e8.M[0][0];
    fVar16 = local_e8.M[0][1];
    fVar17 = local_e8.M[0][2];
    fStack_1dc = local_e8.M[0][3];
    fVar18 = local_e8.M[2][0];
    fVar19 = local_e8.M[2][1];
    fVar20 = local_e8.M[2][2];
    fStack_1bc = local_e8.M[2][3];
  }
  local_1f0 = (longlong)param_3->ArrayNum;
  uVar6 = 0;
  if ((int)uVar4 < param_3->ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  local_1e8 = fVar15;
  fStack_1e4 = fVar16;
  fStack_1e0 = fVar17;
  local_1d8 = fVar9;
  fStack_1d4 = fVar10;
  fStack_1d0 = fVar11;
  local_1c8 = fVar18;
  fStack_1c4 = fVar19;
  fStack_1c0 = fVar20;
  local_1b8 = fVar12;
  fStack_1b4 = fVar13;
  fStack_1b0 = fVar14;
  if (uVar6 == 0) {
    local_1f8 = (longlong)(int)uVar4;
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
  pFVar2 = (param_3->AllocatorInstance).Data;
  lVar8 = (longlong)(int)uVar4;
  pFVar1 = pFVar2 + lVar8 * 0x10;
  *(float *)pFVar1 = local_128.M[0][0];
  *(float *)(pFVar1 + 4) = local_128.M[1][0];
  *(float *)(pFVar1 + 8) = local_128.M[2][0];
  *(float *)(pFVar1 + 0xc) = local_128.M[3][0];
  pFVar1 = pFVar2 + lVar8 * 0x10 + 0x10;
  *(float *)pFVar1 = local_128.M[0][1];
  *(float *)(pFVar1 + 4) = local_128.M[1][1];
  *(float *)(pFVar1 + 8) = local_128.M[2][1];
  *(float *)(pFVar1 + 0xc) = local_128.M[3][1];
  pFVar2 = pFVar2 + lVar8 * 0x10 + 0x20;
  *(float *)pFVar2 = local_128.M[0][2];
  *(float *)(pFVar2 + 4) = local_128.M[1][2];
  *(float *)(pFVar2 + 8) = local_128.M[2][2];
  *(float *)(pFVar2 + 0xc) = local_128.M[3][2];
  local_1f0 = (longlong)param_4->ArrayNum;
  uVar6 = 0;
  if ((int)uVar4 < param_4->ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_1f8 = lVar8,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_4->AllocatorInstance).Data;
  pFVar1 = pFVar2 + lVar8 * 0x10;
  *(float *)pFVar1 = fVar15;
  *(float *)(pFVar1 + 4) = fVar9;
  *(float *)(pFVar1 + 8) = fVar18;
  *(float *)(pFVar1 + 0xc) = fVar12;
  pFVar1 = pFVar2 + lVar8 * 0x10 + 0x10;
  *(float *)pFVar1 = fVar16;
  *(float *)(pFVar1 + 4) = fVar10;
  *(float *)(pFVar1 + 8) = fVar19;
  *(float *)(pFVar1 + 0xc) = fVar13;
  pFVar2 = pFVar2 + lVar8 * 0x10 + 0x20;
  *(float *)pFVar2 = fVar17;
  *(float *)(pFVar2 + 4) = fVar11;
  *(float *)(pFVar2 + 8) = fVar20;
  *(float *)(pFVar2 + 0xc) = fVar14;
  return;
}

// FilterShape @ 1491c33c0

bool __cdecl NDIRigidMeshCollisionLocal::FilterShape(FKShapeElem *param_1)

{
  return (param_1->CollisionEnabled).Value != '\0';
}

// GetRenderTargetFormat @ 1491ca930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
NiagaraDataInterfaceRenderTargetCommon::GetRenderTargetFormat
          (bool param_1,ETextureRenderTargetFormat param_2,ETextureRenderTargetFormat *param_3)

{
  longlong *plVar1;
  ETextureRenderTargetFormat EVar2;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar3;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar4;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar5;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar6;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar7;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar8;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar9;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar10;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar11;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> TVar12;
  EPixelFormatCapabilities EVar13;
  UClass *this;
  TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> *pTVar14;
  ETextureRenderTargetFormat local_res8 [2];
  ETextureRenderTargetFormat *local_res18 [2];
  
  if (!param_1) {
    this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    param_2 = (ETextureRenderTargetFormat)
              (byte)(this->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x18;
  }
  *param_3 = param_2;
  GetPixelFormatFromRenderTargetFormat(param_2);
  if (GNiagaraRenderTargetOverrideFormatEnabled != false) {
    *param_3 = GNiagaraRenderTargetOverrideFormat;
  }
  TVar12 = _UNK_151da7db8;
  TVar11 = ___xmm_00000009000000090000000900000008;
  TVar10 = _UNK_151da7da8;
  TVar9 = ___xmm_00000009000000070000000900000006;
  TVar8 = _UNK_151da7d98;
  TVar7 = ___xmm_00000008000000050000000700000004;
  TVar6 = _UNK_151da7d88;
  TVar5 = ___xmm_00000006000000030000000600000002;
  TVar4 = _UNK_151da7d78;
  TVar3 = ___xmm_00000005000000010000000400000000;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    local_res8[0] = *param_3;
    switch(local_res8[0]) {
    case RTF_R8:
      EVar13 = GPixelFormats[3].Capabilities;
      break;
    case RTF_RG8:
      EVar13 = GPixelFormats[0x28].Capabilities;
      break;
    case RTF_RGBA8:
    case RTF_RGBA8_SRGB:
      EVar13 = GPixelFormats[2].Capabilities;
      break;
    case RTF_R16f:
      EVar13 = GPixelFormats[0x15].Capabilities;
      break;
    case RTF_RG16f:
      EVar13 = GPixelFormats[0xf].Capabilities;
      break;
    case RTF_RGBA16f:
      EVar13 = GPixelFormats[10].Capabilities;
      break;
    case RTF_R32f:
      EVar13 = GPixelFormats[0xd].Capabilities;
      break;
    case RTF_RG32f:
      EVar13 = GPixelFormats[0x11].Capabilities;
      break;
    case RTF_RGBA32f:
      EVar13 = GPixelFormats[1].Capabilities;
      break;
    case RTF_RGB10A2:
      EVar13 = GPixelFormats[0x12].Capabilities;
      break;
    default:
      local_res18[0] = local_res8;
      `GetPixelFormatFromRenderTargetFormat'::__l2::<lambda_1>::operator()(local_res18);
      EVar13 = GPixelFormats[0].Capabilities;
    }
    if ((EVar13 >> 0x16 & 1) != 0) {
      return true;
    }
    if ((*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FormatRemapTable[0] = TVar3;
      FormatRemapTable[1] = TVar4;
      FormatRemapTable[2] = TVar5;
      FormatRemapTable[3] = TVar6;
      FormatRemapTable[4] = TVar7;
      FormatRemapTable[5] = TVar8;
      FormatRemapTable[6] = TVar9;
      FormatRemapTable[7] = TVar10;
      FormatRemapTable[8] = TVar11;
      FormatRemapTable[9] = TVar12;
      FormatRemapTable[10]._0_4_ = 10;
      FormatRemapTable[10]._4_4_ = 9;
      _Init_thread_footer(&::_TSS0);
    }
    EVar2 = *param_3;
    pTVar14 = FormatRemapTable;
    do {
      if (*(ETextureRenderTargetFormat *)pTVar14 == EVar2) {
        *param_3 = *(ETextureRenderTargetFormat *)&pTVar14->field_0x4;
        break;
      }
      pTVar14 = pTVar14 + 1;
    } while (pTVar14 != (TTuple<ETextureRenderTargetFormat,ETextureRenderTargetFormat> *)&::_TSS0);
    if (EVar2 == *param_3) {
      return false;
    }
  } while( true );
}

// GetRenderTargetFormatFromPixelFormat @ 1491caba0

/* WARNING: Enum "Type": Some values do not have unique names */

ETextureRenderTargetFormat __cdecl
NiagaraDataInterfaceRenderTargetCommon::GetRenderTargetFormatFromPixelFormat(EPixelFormat param_1)

{
  switch(param_1) {
  case PF_A32B32G32R32F:
    return RTF_RGBA32f;
  case PF_B8G8R8A8:
    goto switchD_1491cabc9_caseD_2;
  case PF_G8:
    return RTF_R8;
  default:
    if (1 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
switchD_1491cabc9_caseD_2:
    return RTF_RGBA8;
  case PF_FloatRGBA:
    return RTF_RGBA16f;
  case PF_R32_FLOAT:
    return RTF_R32f;
  case PF_G16R16F:
    return RTF_RG16f;
  case PF_G32R32F:
    return RTF_RG32f;
  case PF_A2B10G10R10:
    return RTF_RGB10A2;
  case PF_R16F:
    return RTF_R16f;
  case PF_R8G8:
    return RTF_RG8;
  }
}

// HasMatchingVariable @ 1491d10d0

bool __cdecl
HasMatchingVariable(TArrayView<FNiagaraVariableBase_const_,int> *param_1,FName param_2,
                   FNiagaraTypeDefinition *param_3)

{
  FNiagaraVariableBase *pFVar1;
  int iVar2;
  FNiagaraVariableBase *pFVar3;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  iVar2 = FNiagaraTypeDefinitionHandle::Register(local_10,param_3);
  pFVar1 = param_1->DataPtr;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + param_1->ArrayNum) {
      return false;
    }
    if ((pFVar3->Name == param_2) && ((pFVar3->TypeDefHandle).RegisteredTypeIndex == iVar2)) break;
    pFVar3 = pFVar3 + 1;
  }
  return (int)(((longlong)pFVar3 - (longlong)pFVar1) / 0xc) != -1;
}

// IsMeshDistanceFieldEnabled @ 1491d3e70

bool __cdecl NDIRigidMeshCollisionLocal::IsMeshDistanceFieldEnabled(void)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  
  pTVar5 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.GenerateMeshDistanceFields",1);
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar3 + 0x68))(plVar3);
    }
    CVarGenerateMeshDistanceFields = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = CVarGenerateMeshDistanceFields;
  if (CVarGenerateMeshDistanceFields != (TConsoleVariableData<int> *)0x0) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar5 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (0 < *(int *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar5->ShadowedValue)) {
      return true;
    }
  }
  return false;
}

// MeshComponentHash @ 1491d44a0

uint __cdecl NDIRigidMeshCollisionLocal::MeshComponentHash(USkeletalMeshComponent *param_1)

{
  USkeletalMesh *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    uVar2 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    uVar4 = uVar3 - uVar2 ^ uVar2 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    return (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  }
  return uVar3;
}

// MeshComponentHash @ 1491d4580

uint __cdecl NDIRigidMeshCollisionLocal::MeshComponentHash(UStaticMeshComponent *param_1)

{
  UStaticMesh *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  if (param_1 != (UStaticMeshComponent *)0x0) {
    pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    uVar2 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    uVar4 = uVar3 - uVar2 ^ uVar2 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    return (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  }
  return uVar3;
}

// NDIParticleRead_FindAttributeIndices @ 1491d4680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
NDIParticleRead_FindAttributeIndices
          (FNDIParticleRead_RenderInstanceData *param_1,FNiagaraDataSet *param_2,
          FNiagaraDataInterfaceParametersCS_ParticleRead *param_3)

{
  FMemoryImageName *this;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  ENiagaraParticleDataValueType EVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  FNiagaraTypeDefinition *pFVar8;
  int iVar9;
  int *piVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  FName *this_01;
  FScriptContainerElement *pFVar21;
  longlong local_e8;
  longlong local_c8;
  FString local_b8;
  FName local_a8;
  FName local_a0;
  undefined1 local_98 [8];
  FString local_90;
  FString local_80;
  FName local_70;
  undefined4 local_68;
  
  if (((param_3->AttributeNames).ArrayNum != (param_3->AttributeTypes).ArrayNum) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ShaderStorage.AttributeNames.Num() == ShaderStorage.AttributeTypes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                         ,299,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = &param_1->AttributeIndices;
  uVar12 = (param_3->AttributeNames).ArrayNum + 3U & 0xfffffffc;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,uVar12,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->AttributeCompressed,uVar12,Default);
  pFVar2 = (param_2->CompiledData).StructPtr;
  uVar12 = 0;
  iVar9 = (param_3->AttributeNames).ArrayNum;
  if (0 < iVar9) {
    local_e8 = 0;
    local_c8 = 0;
    do {
      uVar16 = ~uVar12 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar12 < iVar9) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar7 = (param_3->AttributeNames).AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&(param_3->AttributeNames).AllocatorInstance.field_0x0 +
                ((longlong)FVar7 >> 0x18));
      }
      this = (FMemoryImageName *)((longlong)FVar7 + local_e8 * 8);
      if ((*(int *)((longlong)FVar7 + local_e8 * 8) == 0) && (this->Number == 0)) {
        uVar13 = 0;
        if ((int)uVar12 < (param_1->AttributeIndices).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((param_1->AttributeIndices).AllocatorInstance.Data + local_c8) = 0xffffffff;
        uVar13 = 0;
        if ((int)uVar12 < (param_1->AttributeCompressed).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        uVar13 = 0;
        piVar10 = &(pFVar2->Variables).ArrayNum;
        lVar19 = 0;
        iVar9 = *piVar10;
        if (0 < iVar9) {
          lVar18 = 0;
          do {
            uVar20 = ~uVar13 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar13 < iVar9) {
              uVar6 = uVar20;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_01 = (FName *)((pFVar2->Variables).AllocatorInstance.Data + lVar18);
            if (((*this_01).ComparisonIndex.Value == (*this).ComparisonIndex.Value) &&
               ((*this_01).Number == (*this).Number)) {
              uVar6 = 0;
              if ((int)uVar12 < (param_3->AttributeTypes).ArrayNum) {
                uVar6 = uVar16;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar7 = (param_3->AttributeTypes).AllocatorInstance;
              if (((ulonglong)FVar7 & 1) != 0) {
                FVar7 = (ForAnyElementType)
                        ((longlong)&(param_3->AttributeTypes).AllocatorInstance.field_0x0 +
                        ((longlong)FVar7 >> 0x18));
              }
              EVar1 = *(ENiagaraParticleDataValueType *)((longlong)FVar7 + local_e8);
              pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                                 ((FNiagaraTypeDefinitionHandle *)(this_01 + 1));
              bVar4 = CheckVariableType(pFVar8,EVar1);
              if (bVar4) {
                uVar17 = 0;
                uVar6 = uVar17;
                if ((int)uVar13 < (pFVar2->VariableLayouts).ArrayNum) {
                  uVar6 = uVar20;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar21 = (pFVar2->VariableLayouts).AllocatorInstance.Data + lVar19 * 0x20;
                if ((EVar1 < Position) && ((0x242U >> (EVar1 & 0x1f) & 1) != 0)) {
                  uVar11 = *(ushort *)(pFVar21 + 2);
                }
                else {
                  uVar11 = *(ushort *)pFVar21;
                }
                uVar13 = uVar17;
                if ((int)uVar12 < (param_1->AttributeIndices).ArrayNum) {
                  uVar13 = uVar16;
                }
                if ((uVar13 == 0) &&
                   (bVar4 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(uint *)((this_00->AllocatorInstance).Data + local_e8 * 4) = (uint)uVar11;
                if ((int)uVar12 < (param_1->AttributeCompressed).ArrayNum) {
                  uVar17 = uVar16;
                }
                if ((uVar17 == 0) &&
                   (bVar4 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                                   ((FNiagaraTypeDefinitionHandle *)(this_01 + 1));
                switch(EVar1) {
                case Float:
                  if (((TObjectPtr<UObject>_u_0)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr !=
                       FNiagaraTypeDefinition::HalfDef.ClassStructOrEnum.field0_0x0) ||
                     (uVar5 = FNiagaraTypeDefinition::HalfDef.Flags,
                     pFVar8->UnderlyingType != FNiagaraTypeDefinition::HalfDef.UnderlyingType))
                  break;
LAB_1491d4bea:
                  if (pFVar8->Flags != uVar5) break;
                  bVar4 = true;
                  goto LAB_1491d4bf6;
                case Vec2:
                  if (((TObjectPtr<UObject>_u_0)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr ==
                       FNiagaraTypeDefinition::HalfVec2Def.ClassStructOrEnum.field0_0x0) &&
                     (uVar5 = FNiagaraTypeDefinition::HalfVec2Def.Flags,
                     pFVar8->UnderlyingType == FNiagaraTypeDefinition::HalfVec2Def.UnderlyingType))
                  goto LAB_1491d4bea;
                  break;
                case Vec3:
                case Position:
                  if (((TObjectPtr<UObject>_u_0)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr ==
                       FNiagaraTypeDefinition::HalfVec3Def.ClassStructOrEnum.field0_0x0) &&
                     (uVar5 = FNiagaraTypeDefinition::HalfVec3Def.Flags,
                     pFVar8->UnderlyingType == FNiagaraTypeDefinition::HalfVec3Def.UnderlyingType))
                  goto LAB_1491d4bea;
                  break;
                case Vec4:
                case Color:
                case Quat:
                  if (((TObjectPtr<UObject>_u_0)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr ==
                       FNiagaraTypeDefinition::HalfVec4Def.ClassStructOrEnum.field0_0x0) &&
                     (uVar5 = FNiagaraTypeDefinition::HalfVec4Def.Flags,
                     pFVar8->UnderlyingType == FNiagaraTypeDefinition::HalfVec4Def.UnderlyingType))
                  goto LAB_1491d4bea;
                  break;
                default:
                  goto switchD_1491d4b5a_caseD_6;
                }
                bVar4 = false;
LAB_1491d4bf6:
                if (bVar4) {
                  uVar17 = 0;
                  uVar6 = uVar17;
                  if ((int)uVar13 < (pFVar2->VariableLayouts).ArrayNum) {
                    uVar6 = uVar20;
                  }
                  if ((uVar6 == 0) &&
                     (bVar4 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar11 = *(ushort *)
                            ((pFVar2->VariableLayouts).AllocatorInstance.Data + lVar19 * 0x20 + 4);
                  uVar13 = uVar17;
                  if ((int)uVar12 < (param_1->AttributeIndices).ArrayNum) {
                    uVar13 = uVar16;
                  }
                  if ((uVar13 == 0) &&
                     (bVar4 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(uint *)((this_00->AllocatorInstance).Data + local_e8 * 4) = (uint)uVar11;
                  if ((int)uVar12 < (param_1->AttributeCompressed).ArrayNum) {
                    uVar17 = uVar16;
                  }
                  if ((uVar17 == 0) &&
                     (bVar4 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined4 *)
                   ((param_1->AttributeCompressed).AllocatorInstance.Data + local_e8 * 4) = 1;
                  goto LAB_1491d5053;
                }
switchD_1491d4b5a_caseD_6:
                if (1 < (byte)LogNiagara._0_1_) {
                  switch(EVar1) {
                  case Invalid:
                    break;
                  case Int:
                    break;
                  case Float:
                    break;
                  case Vec2:
                    break;
                  case Vec3:
                    break;
                  case Vec4:
                    break;
                  case Bool:
                    break;
                  case Color:
                    break;
                  case Quat:
                    break;
                  case ID:
                    break;
                  case Position:
                  }
                  pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                                     ((FNiagaraTypeDefinitionHandle *)(this_01 + 1));
                  if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
                    FString::FString(&local_b8,L"Invalid");
                  }
                  else {
                    local_a8 = UE::CoreUObject::Private::GetFName((UObject *)local_98);
                    local_a8 = *(FName *)local_a8;
                    FName::ToString(&local_a8,&local_b8);
                  }
                  FName::ToString(this_01,&local_90);
                  UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogNiagara);
                  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data.AllocatorInstance.Data);
                  }
                  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                  }
                }
                uVar13 = 0;
                if ((int)uVar12 < (param_1->AttributeIndices).ArrayNum) {
                  uVar13 = uVar16;
                }
                if ((uVar13 == 0) &&
                   (bVar4 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(undefined4 *)((this_00->AllocatorInstance).Data + local_e8 * 4) = 0xffffffff;
                uVar13 = 0;
                if ((int)uVar12 < (param_1->AttributeCompressed).ArrayNum) {
                  uVar13 = uVar16;
                }
                if ((uVar13 == 0) &&
                   (bVar4 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              *(undefined4 *)((param_1->AttributeCompressed).AllocatorInstance.Data + local_e8 * 4)
                   = 0;
              goto LAB_1491d5053;
            }
            iVar9 = *piVar10;
            uVar13 = uVar13 + 1;
            lVar19 = lVar19 + 1;
            lVar18 = lVar18 + 0xc;
          } while ((int)uVar13 < iVar9);
        }
        if (1 < (byte)LogNiagara._0_1_) {
          FMemoryImageName::ToString(this,&local_80);
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = 0;
        if ((int)uVar12 < (param_1->AttributeIndices).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((param_1->AttributeIndices).AllocatorInstance.Data + local_e8 * 4) =
             0xffffffff;
        uVar13 = 0;
        if ((int)uVar12 < (param_1->AttributeCompressed).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)((param_1->AttributeCompressed).AllocatorInstance.Data + local_e8 * 4) = 0;
LAB_1491d5053:
      local_c8 = local_c8 + 4;
      local_e8 = local_e8 + 1;
      iVar9 = (param_3->AttributeNames).ArrayNum;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar9);
  }
  piVar10 = &(pFVar2->Variables).ArrayNum;
  uVar14 = 0;
  FName::FName(&local_a0,L"ID");
  param_1->AcquireTagRegisterIndex = -1;
  uVar12 = 0;
  iVar9 = *piVar10;
  uVar15 = uVar14;
  if (0 < iVar9) {
    do {
      uVar16 = (uint)uVar14;
      uVar13 = uVar12;
      if ((int)uVar16 < iVar9) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar21 = (pFVar2->Variables).AllocatorInstance.Data;
      local_70 = *(FName *)(pFVar21 + uVar15);
      local_68 = *(undefined4 *)(pFVar21 + uVar15 + 8);
      if (local_70 == local_a0) {
        uVar13 = uVar12;
        if ((int)uVar16 < (pFVar2->VariableLayouts).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        param_1->AcquireTagRegisterIndex =
             *(ushort *)
              ((pFVar2->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20 + 2)
             + 1;
        break;
      }
      iVar9 = *piVar10;
      uVar14 = (ulonglong)(uVar16 + 1);
      uVar15 = uVar15 + 0xc;
    } while ((int)(uVar16 + 1) < iVar9);
  }
  iVar9 = (param_3->AttributeNames).ArrayNum;
  uVar15 = (ulonglong)iVar9;
  if (iVar9 < (param_1->AttributeIndices).ArrayNum) {
    lVar19 = uVar15 * 4;
    do {
      uVar16 = (uint)uVar15;
      uVar13 = uVar12;
      if ((int)uVar16 < (param_1->AttributeIndices).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((param_1->AttributeIndices).AllocatorInstance.Data + lVar19) = 0xffffffff;
      uVar13 = uVar12;
      if ((int)uVar16 < (param_1->AttributeCompressed).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = (ulonglong)(uVar16 + 1);
      *(undefined4 *)((param_1->AttributeCompressed).AllocatorInstance.Data + lVar19) = 0;
      lVar19 = lVar19 + 4;
    } while ((int)(uVar16 + 1) < (param_1->AttributeIndices).ArrayNum);
  }
  return;
}

// RefreshPlatformSet @ 1491dd7d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl NDIPlatformSetPrivate::RefreshPlatformSet(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UNiagaraDataInterfacePlatformSet> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = UNiagaraDataInterfacePlatformSet::StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraDataInterfacePlatformSet>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar6 = *(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8);
    if (((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) &&
       ((*(uint *)(lVar6 + 8) & 0x10) == 0)) {
      bVar2 = FNiagaraPlatformSet::IsActive((FNiagaraPlatformSet *)(lVar6 + 0x38));
      *(bool *)(*(longlong *)(lVar6 + 0x28) + 0x10) = bVar2;
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// SystemHasFindActorsFunction @ 1491e3650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __cdecl NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction(UNiagaraSystem *param_1)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  int iVar3;
  UNiagaraScript *pUVar4;
  longlong lVar5;
  bool bVar6;
  FVersionedNiagaraEmitterData *pFVar7;
  ulonglong uVar8;
  FName *pFVar9;
  FName *pFVar10;
  FNiagaraEmitterHandle *this;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  uint local_res20;
  
  local_res10[0] = 0;
  if (param_1 == (UNiagaraSystem *)0x0) {
    return false;
  }
  local_res18 = local_res10;
  `NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction'::__l5::<lambda_1>::operator()
            (&local_res18,(param_1->SystemSpawnScript).field0_0x0.DebugPtr);
  `NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction'::__l5::<lambda_1>::operator()
            (&local_res18,(param_1->SystemUpdateScript).field0_0x0.DebugPtr);
  local_res20 = (param_1->EmitterHandles).ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  this = (FNiagaraEmitterHandle *)(param_1->EmitterHandles).AllocatorInstance.Data;
  pFVar1 = this + uVar8;
  do {
    if ((param_1->EmitterHandles).ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    if (this == pFVar1) {
      return (bool)local_res10[0];
    }
    bVar6 = FNiagaraEmitterHandle::GetIsEnabled(this);
    if ((bVar6) &&
       (pFVar7 = FNiagaraEmitterHandle::GetEmitterData(this),
       pFVar7 != (FVersionedNiagaraEmitterData *)0x0)) {
      local_res18 = local_res10;
      `NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction'::__l5::<lambda_1>::operator()
                (&local_res18,(pFVar7->SpawnScriptProps).Script.field0_0x0.DebugPtr);
      `NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction'::__l5::<lambda_1>::operator()
                (&local_res18,(pFVar7->UpdateScriptProps).Script.field0_0x0.DebugPtr);
      pUVar4 = (pFVar7->GPUComputeScript).field0_0x0.DebugPtr;
      if (pUVar4 != (UNiagaraScript *)0x0) {
        `NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction'::__l5::<lambda_1>::operator()
                  (&local_res18,pUVar4);
      }
      iVar2 = (pFVar7->EventHandlerScriptProps).ArrayNum;
      pFVar12 = (pFVar7->EventHandlerScriptProps).AllocatorInstance.Data;
      pFVar11 = pFVar12 + (longlong)iVar2 * 0x58;
      while( true ) {
        if ((pFVar7->EventHandlerScriptProps).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (pFVar12 == pFVar11) break;
        lVar5 = *(longlong *)pFVar12;
        bVar6 = FNiagaraVMExecutableData::IsValid((FNiagaraVMExecutableData *)(lVar5 + 0x1b8));
        if (bVar6) {
          iVar3 = *(int *)(lVar5 + 0x238);
          pFVar9 = *(FName **)(lVar5 + 0x230);
          pFVar10 = pFVar9 + (longlong)iVar3 * 0xb;
          while( true ) {
            if (*(int *)(lVar5 + 0x238) != iVar3) {
              `TCheckedPointerIterator<FVMExternalFunctionBindingInfo_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_res18);
            }
            if (pFVar9 == pFVar10) goto LAB_1491e37fb;
            if (*pFVar9 == FindActorsName) break;
            pFVar9 = pFVar9 + 0xb;
          }
          local_res10[0] = 1;
        }
LAB_1491e37fb:
        pFVar12 = pFVar12 + 0x58;
      }
    }
    uVar8 = (ulonglong)local_res20;
    this = this + 1;
  } while( true );
}

// UpdateInternalArrays @ 1491e4620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
NDIRigidMeshCollisionLocal::UpdateInternalArrays
          (FNiagaraSystemInstance *param_1,TArrayView<UStaticMeshComponent_*_const,int> *param_2,
          TArrayView<USkeletalMeshComponent_*_const,int> *param_3,TVector<double> *param_4,
          bool param_5,
          TArray<FNDIRigidMeshCollisionData::FComponentBodyCount,TSizedDefaultAllocator<32>_>
          *param_6,FNDIRigidMeshCollisionArrays *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  UStaticMeshComponent *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FNDIRigidMeshCollisionArrays *pFVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  TVector<float> *pTVar18;
  UBodySetup *pUVar19;
  TVector<double>_u_0 *pTVar20;
  ulonglong uVar21;
  FComponentBodyCount *pFVar22;
  uint *puVar23;
  UStaticMeshComponent **ppUVar24;
  TArray<FNDIRigidMeshCollisionData::FComponentBodyCount,TSizedDefaultAllocator<32>_> local_438;
  uint local_428 [2];
  FComponentBodyCount *local_420;
  FComponentBodyCount *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  FComponentBodyCount *local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  FNDIRigidMeshCollisionElementOffset local_3f8;
  FComponentBodyCount *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  FComponentBodyCount *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  double local_3b8;
  double local_3a0;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  FNiagaraLWCConverter local_348;
  TArrayView<UStaticMeshComponent_*_const,int> local_328;
  TArrayView<USkeletalMeshComponent_*_const,int> local_318;
  TArrayView<USkeletalMeshComponent_*_const,int> local_308;
  TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> local_2f8;
  TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> local_2e8;
  TArrayView<UStaticMeshComponent_*_const,int> local_2d8;
  TArrayView<USkeletalMeshComponent_*_const,int> local_2c8;
  TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> local_2b8;
  TArrayView<FNDIRigidMeshCollisionData::FComponentBodyCount_const_,int> local_2a8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278;
  FNiagaraLWCConverter local_258;
  TVector<double>_u_0 local_240;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  TVector<double>_u_0 local_208;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  TVector<float> local_1d0;
  TVector<float> local_1c4;
  TVector<float> local_1b8;
  TVector<float> local_1ac;
  TVector<double>_u_0 local_198 [2];
  char local_160;
  TVector<double>_u_0 local_158 [2];
  char local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  UStaticMeshComponent **local_d8;
  undefined8 uStack_d0;
  
  puVar23 = param_10;
  puVar13 = param_9;
  puVar12 = param_8;
  pFVar11 = param_7;
  uVar21 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  if ((param_7 == (FNDIRigidMeshCollisionArrays *)0x0) ||
     (param_7->MaxPrimitives <= (param_7->ElementOffsets).NumElements)) {
    bVar14 = false;
  }
  else if (param_5) {
    ppUVar24 = param_2->DataPtr;
    uStack_d0 = *(undefined8 *)&param_2->ArrayNum;
    local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_438.ArrayNum = 0;
    local_438.ArrayMax = 0;
    iVar16 = (int)*(ulonglong *)&param_2->ArrayNum;
    local_d8 = ppUVar24;
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(*(ulonglong *)&param_2->ArrayNum & 0xffffffff);
    }
    if (0 < iVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar16,&local_438.AllocatorInstance,0,&local_438.ArrayMax);
      uVar21 = local_438._8_8_ & 0xffffffff;
    }
    param_8 = (uint *)(ppUVar24 + iVar16);
    if (ppUVar24 != (UStaticMeshComponent **)param_8) {
      while( true ) {
        pUVar1 = *ppUVar24;
        iVar16 = (int)uVar21;
        if (iVar16 == local_438.ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_438.AllocatorInstance,&local_438.ArrayMax);
        }
        local_438.ArrayNum = iVar16 + 1;
        pFVar22 = (FComponentBodyCount *)
                  (local_438.AllocatorInstance.Data + (longlong)iVar16 * 0x10);
        DefaultConstructItems<FNDIRigidMeshCollisionData::FComponentBodyCount,int>(pFVar22,1);
        uVar17 = MeshComponentHash(pUVar1);
        pFVar22->ComponentHash = uVar17;
        local_420 = pFVar22;
        pUVar19 = (UBodySetup *)(**(code **)(pUVar1->_padding_ + 0x800))(pUVar1);
        `NDIRigidMeshCollisionLocal::CountCollisionPrimitives<UStaticMeshComponent>'::__l6::
        <lambda_1>::operator()(&local_420,pUVar1,pUVar19);
        ppUVar24 = ppUVar24 + 1;
        *puVar12 = *puVar12 + pFVar22->BoxCount;
        *puVar13 = *puVar13 + pFVar22->SphereCount;
        *param_10 = *param_10 + pFVar22->CapsuleCount;
        puVar23 = param_10;
        if (ppUVar24 == (UStaticMeshComponent **)param_8) break;
        uVar21 = local_438._8_8_ & 0xffffffff;
      }
    }
    local_308.DataPtr = param_3->DataPtr;
    local_308.ArrayNum = param_3->ArrayNum;
    local_308._12_4_ = *(undefined4 *)&param_3->field_0xc;
    CountCollisionPrimitives<USkeletalMeshComponent>(&local_308,&local_438,puVar12,puVar13,puVar23);
    if (*puVar12 + *puVar13 + *puVar23 < pFVar11->MaxPrimitives) {
      local_3f8.BoxOffset = (pFVar11->ElementOffsets).BoxOffset;
      local_3f8.SphereOffset = (pFVar11->ElementOffsets).SphereOffset;
      local_3f8.CapsuleOffset = (pFVar11->ElementOffsets).CapsuleOffset;
      local_3f8.NumElements = (pFVar11->ElementOffsets).NumElements;
      (pFVar11->ElementOffsets).BoxOffset = 0;
      local_428[0] = *puVar12;
      (pFVar11->ElementOffsets).SphereOffset = local_428[0];
      param_7._0_4_ = *puVar13 + local_428[0];
      local_428[1] = 0;
      (pFVar11->ElementOffsets).CapsuleOffset = (uint)param_7;
      iVar16 = local_438.ArrayNum;
      (pFVar11->ElementOffsets).NumElements = *puVar23 + (uint)param_7;
      local_3e8 = (FComponentBodyCount *)local_438.AllocatorInstance.Data;
      if (local_438.ArrayNum < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      iStack_3e0 = iVar16;
      local_3d8 = (FComponentBodyCount *)(param_6->AllocatorInstance).Data;
      iVar16 = param_6->ArrayNum;
      if (iVar16 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      local_2f8._12_4_ = uStack_3dc;
      local_2f8.ArrayNum = iStack_3e0;
      local_2e8._12_4_ = uStack_3cc;
      local_2e8.ArrayNum = iVar16;
      local_2e8.DataPtr = local_3d8;
      local_2f8.DataPtr = local_3e8;
      iStack_3d0 = iVar16;
      RemapPreviousTransforms<1>(&local_2e8,&local_2f8,&local_3f8,&pFVar11->ElementOffsets,pFVar11);
      (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.X = 3.4028235e+38;
      (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Y = 3.4028235e+38;
      (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Z = 3.4028235e+38;
      (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.X = -3.4028235e+38;
      (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Y = -3.4028235e+38;
      (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Z = -3.4028235e+38;
      local_120 = '\0';
      local_2d8.DataPtr = param_2->DataPtr;
      local_2d8.ArrayNum = param_2->ArrayNum;
      local_2d8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      UpdateAssetArrays<UStaticMeshComponent,1>
                (&local_2d8,param_4,pFVar11,local_428 + 1,local_428,(uint *)&param_7,
                 (Builder *)&local_158[0]._s_0);
      local_2c8.DataPtr = param_3->DataPtr;
      local_2c8.ArrayNum = param_3->ArrayNum;
      local_2c8._12_4_ = *(undefined4 *)&param_3->field_0xc;
      UpdateAssetArrays<USkeletalMeshComponent,1>
                (&local_2c8,param_4,pFVar11,local_428 + 1,local_428,(uint *)&param_7,
                 (Builder *)&local_158[0]._s_0);
      local_1d8 = 0;
      pTVar20 = local_158;
      if (local_120 == '\0') {
        pTVar20 = &local_208;
      }
      local_208._s_0.X = 0.0;
      local_208._s_0.Y = 0.0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_208._s_0.Z = 0.0;
      uStack_1f0 = 0;
      local_f8 = (&pTVar20->_s_0)[1].Y;
      dStack_f0 = (&pTVar20->_s_0)[1].Z;
      local_108 = (pTVar20->_s_0).Z;
      dStack_100 = (&pTVar20->_s_0)[1].X;
      local_118 = (pTVar20->_s_0).X;
      dStack_110 = (pTVar20->_s_0).Y;
      local_e8 = (&pTVar20->_s_0)[2].X;
      dVar7 = local_118 + dStack_100;
      dVar5 = dStack_110 + local_f8;
      dVar4 = dStack_110 - local_f8;
      local_3a0 = local_108 + dStack_f0;
      local_3b8 = local_108 - dStack_f0;
      dVar6 = local_118 - dStack_100;
      (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.X = (float)dVar6;
      (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Y = (float)dVar4;
      (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Z = (float)local_3b8;
      (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.X = (float)dVar7;
      (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Y = (float)dVar5;
      (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Z = (float)local_3a0;
      FNiagaraSystemInstance::GetLWCConverter(param_1,&local_348,false);
      local_388._8_4_ = SUB84(dVar4,0);
      local_388._0_8_ = dVar6;
      local_388._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_388._s_0.Z = local_3b8;
      pTVar18 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                          (&local_348,&local_1b8,(TVector<double> *)&local_388._s_0);
      *(undefined8 *)&(pFVar11->CombinedBBoxWorldMin).field0_0x0 =
           *(undefined8 *)&pTVar18->field0_0x0;
      local_368._8_4_ = SUB84(dVar5,0);
      local_368._0_8_ = dVar7;
      local_368._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_368._s_0.Z = local_3a0;
      (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
      pTVar18 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                          (&local_348,&local_1ac,(TVector<double> *)&local_368._s_0);
      iStack_410 = local_438.ArrayNum;
      *(undefined8 *)&(pFVar11->CombinedBBoxWorldMax).field0_0x0 =
           *(undefined8 *)&pTVar18->field0_0x0;
      (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
      local_418 = (FComponentBodyCount *)local_438.AllocatorInstance.Data;
      if (local_438.ArrayNum < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      local_408 = (FComponentBodyCount *)(param_6->AllocatorInstance).Data;
      iVar16 = param_6->ArrayNum;
      if (iVar16 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      local_2b8._12_4_ = uStack_40c;
      local_2b8.ArrayNum = iStack_410;
      local_2a8._12_4_ = uStack_3fc;
      local_2a8.ArrayNum = iVar16;
      local_2a8.DataPtr = local_408;
      local_2b8.DataPtr = local_418;
      iStack_400 = iVar16;
      RemapPreviousTransforms<0>(&local_2a8,&local_2b8,&local_3f8,&pFVar11->ElementOffsets,pFVar11);
      if (param_6 != &local_438) {
        pFVar2 = (param_6->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_6->AllocatorInstance).Data = local_438.AllocatorInstance.Data;
        param_6->ArrayNum = local_438.ArrayNum;
        param_6->ArrayMax = local_438.ArrayMax;
        local_438.ArrayNum = 0;
        local_438.ArrayMax = 0;
        local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.AllocatorInstance.Data);
    }
  }
  else {
    iVar16 = (param_7->CurrentTransform).ArrayNum;
    iVar8 = (param_7->CurrentTransform).ArrayMax;
    pFVar2 = (param_7->PreviousTransform).AllocatorInstance.Data;
    iVar9 = (param_7->PreviousTransform).ArrayNum;
    iVar10 = (param_7->PreviousTransform).ArrayMax;
    (param_7->PreviousTransform).AllocatorInstance.Data =
         (param_7->CurrentTransform).AllocatorInstance.Data;
    (param_7->PreviousTransform).ArrayNum = iVar16;
    (param_7->PreviousTransform).ArrayMax = iVar8;
    (param_7->CurrentTransform).AllocatorInstance.Data = pFVar2;
    (param_7->CurrentTransform).ArrayNum = iVar9;
    (param_7->CurrentTransform).ArrayMax = iVar10;
    iVar16 = (param_7->CurrentInverse).ArrayNum;
    iVar8 = (param_7->CurrentInverse).ArrayMax;
    pFVar2 = (param_7->PreviousInverse).AllocatorInstance.Data;
    iVar9 = (param_7->PreviousInverse).ArrayNum;
    iVar10 = (param_7->PreviousInverse).ArrayMax;
    (param_7->PreviousInverse).AllocatorInstance.Data =
         (param_7->CurrentInverse).AllocatorInstance.Data;
    (param_7->PreviousInverse).ArrayNum = iVar16;
    (param_7->PreviousInverse).ArrayMax = iVar8;
    (param_7->CurrentInverse).AllocatorInstance.Data = pFVar2;
    (param_7->CurrentInverse).ArrayNum = iVar9;
    (param_7->CurrentInverse).ArrayMax = iVar10;
    param_9._0_4_ = (param_7->ElementOffsets).BoxOffset;
    param_8 = (uint *)CONCAT44(param_8._4_4_,(param_7->ElementOffsets).SphereOffset);
    param_10._0_4_ = (param_7->ElementOffsets).CapsuleOffset;
    (param_7->CombinedBBoxWorldMin).field0_0x0._s_0.X = 3.4028235e+38;
    (param_7->CombinedBBoxWorldMin).field0_0x0._s_0.Y = 3.4028235e+38;
    (param_7->CombinedBBoxWorldMin).field0_0x0._s_0.Z = 3.4028235e+38;
    (param_7->CombinedBBoxWorldMax).field0_0x0._s_0.X = -3.4028235e+38;
    (param_7->CombinedBBoxWorldMax).field0_0x0._s_0.Y = -3.4028235e+38;
    (param_7->CombinedBBoxWorldMax).field0_0x0._s_0.Z = -3.4028235e+38;
    local_328.DataPtr = param_2->DataPtr;
    local_328.ArrayNum = param_2->ArrayNum;
    local_328._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_160 = '\0';
    UpdateAssetArrays<UStaticMeshComponent,1>
              (&local_328,param_4,param_7,(uint *)&param_9,(uint *)&param_8,(uint *)&param_10,
               (Builder *)&local_198[0]._s_0);
    local_318.DataPtr = param_3->DataPtr;
    local_318.ArrayNum = param_3->ArrayNum;
    local_318._12_4_ = *(undefined4 *)&param_3->field_0xc;
    UpdateAssetArrays<USkeletalMeshComponent,1>
              (&local_318,param_4,pFVar11,(uint *)&param_9,(uint *)&param_8,(uint *)&param_10,
               (Builder *)&local_198[0]._s_0);
    local_210 = 0;
    local_240._s_0.X = 0.0;
    local_240._s_0.Y = 0.0;
    pTVar20 = local_198;
    if (local_160 == '\0') {
      pTVar20 = &local_240;
    }
    local_220 = 0;
    uStack_218 = 0;
    local_240._s_0.Z = 0.0;
    uStack_228 = 0;
    dVar7 = (&pTVar20->_s_0)[1].X + (pTVar20->_s_0).X;
    dVar5 = (pTVar20->_s_0).X - (&pTVar20->_s_0)[1].X;
    local_3a0 = (&pTVar20->_s_0)[1].Z + (pTVar20->_s_0).Z;
    local_3b8 = (pTVar20->_s_0).Z - (&pTVar20->_s_0)[1].Z;
    dVar6 = (&pTVar20->_s_0)[1].Y + (pTVar20->_s_0).Y;
    dVar4 = (pTVar20->_s_0).Y - (&pTVar20->_s_0)[1].Y;
    (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.X = (float)dVar5;
    (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Y = (float)dVar4;
    (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Z = (float)local_3b8;
    (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.X = (float)dVar7;
    (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Y = (float)dVar6;
    (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Z = (float)local_3a0;
    FNiagaraSystemInstance::GetLWCConverter(param_1,&local_258,false);
    local_298._8_4_ = SUB84(dVar4,0);
    local_298._0_8_ = dVar5;
    local_298._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_298._s_0.Z = local_3b8;
    pTVar18 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                        (&local_258,&local_1d0,(TVector<double> *)&local_298._s_0);
    *(undefined8 *)&(pFVar11->CombinedBBoxWorldMin).field0_0x0 = *(undefined8 *)&pTVar18->field0_0x0
    ;
    local_278._8_4_ = SUB84(dVar6,0);
    local_278._0_8_ = dVar7;
    local_278._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_278._s_0.Z = local_3a0;
    (pFVar11->CombinedBBoxWorldMin).field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
    pTVar18 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                        (&local_258,&local_1c4,(TVector<double> *)&local_278._s_0);
    *(undefined8 *)&(pFVar11->CombinedBBoxWorldMax).field0_0x0 = *(undefined8 *)&pTVar18->field0_0x0
    ;
    (pFVar11->CombinedBBoxWorldMax).field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
    bVar14 = true;
  }
  return bVar14;
}

// WeakActorPtrLess @ 1491e7b00

bool __cdecl
NDIRigidMeshCollisionLocal::WeakActorPtrLess
          (TWeakObjectPtr<AActor,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<AActor,FWeakObjectPtr> *param_2)

{
  return (uint)((param_1->WeakPtr).ObjectSerialNumber ^ (param_1->WeakPtr).ObjectIndex) <
         (uint)((param_2->WeakPtr).ObjectSerialNumber ^ (param_2->WeakPtr).ObjectIndex);
}

// Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_NoRegister @ 1491e7b20

UClass * __cdecl Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDIRigidMeshCollisionFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.
                InnerSingleton,
               UNiagaraDIRigidMeshCollisionFunctionLibrary::
               StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDIRigidMeshCollisionFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraDIRigidMeshCollisionFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic_NoRegister @ 1491e7be0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMaterialInstanceDynamic",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.
                InnerSingleton,
               UNiagaraDataInterfaceMaterialInstanceDynamic::
               StaticRegisterNativesUNiagaraDataInterfaceMaterialInstanceDynamic,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceMaterialInstanceDynamic>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialInstanceDynamic>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceMaterialParameterCollection_NoRegister @ 1491e7ca0

UClass * __cdecl
Z_Construct_UClass_UNiagaraDataInterfaceMaterialParameterCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMaterialParameterCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.
                InnerSingleton,
               UNiagaraDataInterfaceMaterialParameterCollection::
               StaticRegisterNativesUNiagaraDataInterfaceMaterialParameterCollection,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceMaterialParameterCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialParameterCollection>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_NoRegister @ 1491e7d60

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMeshRendererInfo",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton,
               UNiagaraDataInterfaceMeshRendererInfo::
               StaticRegisterNativesUNiagaraDataInterfaceMeshRendererInfo,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceMeshRendererInfo>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMeshRendererInfo>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister @ 1491e7e20

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceNeighborGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton,
               UNiagaraDataInterfaceNeighborGrid3D::
               StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceNeighborGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceNeighborGrid3D>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_NoRegister @ 1491e7ee0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceOcclusion",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton,
               UNiagaraDataInterfaceOcclusion::StaticRegisterNativesUNiagaraDataInterfaceOcclusion,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceOcclusion>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceOcclusion>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_NoRegister @ 1491e7fa0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceParticleRead_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceParticleRead",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton,
               UNiagaraDataInterfaceParticleRead::
               StaticRegisterNativesUNiagaraDataInterfaceParticleRead,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceParticleRead>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceParticleRead>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister @ 1491e8060

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfacePlatformSet",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton,
               UNiagaraDataInterfacePlatformSet::
               StaticRegisterNativesUNiagaraDataInterfacePlatformSet,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePlatformSet>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePlatformSet>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_NoRegister @ 1491e8120

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRasterizationGrid3D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRasterizationGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton,
               UNiagaraDataInterfaceRasterizationGrid3D::
               StaticRegisterNativesUNiagaraDataInterfaceRasterizationGrid3D,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRasterizationGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRasterizationGrid3D>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_NoRegister @ 1491e81e0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTarget2DArray",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.InnerSingleton,
               UNiagaraDataInterfaceRenderTarget2DArray::
               StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2DArray,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRenderTarget2DArray>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2DArray>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister @ 1491e82a0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTarget2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton,
               UNiagaraDataInterfaceRenderTarget2D::
               StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTarget2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_NoRegister @ 1491e8360

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTargetCube",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton,
               UNiagaraDataInterfaceRenderTargetCube::
               StaticRegisterNativesUNiagaraDataInterfaceRenderTargetCube,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTargetCube>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetCube>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetVolume_NoRegister @ 1491e8420

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTargetVolume",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton,
               UNiagaraDataInterfaceRenderTargetVolume::
               StaticRegisterNativesUNiagaraDataInterfaceRenderTargetVolume,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTargetVolume>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetVolume>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister @ 1491e84e0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRigidMeshCollisionQuery",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.
                InnerSingleton,
               UNiagaraDataInterfaceRigidMeshCollisionQuery::
               StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRigidMeshCollisionQuery>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRigidMeshCollisionQuery>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMeshTriCoordinate @ 1491e85a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshTriCoordinate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshTriCoordinate.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshTriCoordinate.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshTriCoordinate.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshTriCoordinate.InnerSingleton;
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

// StaticResource'' @ 150411500

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

// StaticResource'' @ 150411580

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

// `dynamic_atexit_destructor_for_'CVarMaxNiagaraNeighborGridCells'' @ 150411600

void __cdecl _dynamic_atexit_destructor_for__CVarMaxNiagaraNeighborGridCells__(void)

{
  CVarMaxNiagaraNeighborGridCells._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxNiagaraNeighborGridCells);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxNiagaraRasterizationGridCells'' @ 150411620

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_atexit_destructor_for__CVarMaxNiagaraRasterizationGridCells__
          (void)

{
  CVarMaxNiagaraRasterizationGridCells._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxNiagaraRasterizationGridCells);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraParticleReadIgnoreUnsafeReads'' @ 150411640

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraParticleReadIgnoreUnsafeReads__(void)

{
  CVarNiagaraParticleReadIgnoreUnsafeReads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraParticleReadIgnoreUnsafeReads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRenderTargetIgnoreCookedOut'' @ 150411660

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
_dynamic_atexit_destructor_for__CVarNiagaraRenderTargetIgnoreCookedOut__(void)

{
  CVarNiagaraRenderTargetIgnoreCookedOut._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRenderTargetIgnoreCookedOut);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRenderTargetResolutionMultiplier'' @ 150411680

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
_dynamic_atexit_destructor_for__CVarNiagaraRenderTargetResolutionMultiplier__(void)

{
  CVarNiagaraRenderTargetResolutionMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRenderTargetResolutionMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimCacheCompressed'' @ 1504116a0

void __cdecl NDIRenderTarget2DLocal::_dynamic_atexit_destructor_for__CVarSimCacheCompressed__(void)

{
  CVarSimCacheCompressed._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimCacheCompressed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimCacheCompressed'' @ 1504116c0

void __cdecl
NDIRenderTargetVolumeLocal::_dynamic_atexit_destructor_for__CVarSimCacheCompressed__(void)

{
  CVarSimCacheCompressed._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimCacheCompressed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimCacheDataStorageMode'' @ 1504116e0

void __cdecl
NDIRenderTargetVolumeLocal::_dynamic_atexit_destructor_for__CVarSimCacheDataStorageMode__(void)

{
  CVarSimCacheDataStorageMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimCacheDataStorageMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimCacheEnabled'' @ 150411700

void __cdecl NDIRenderTargetVolumeLocal::_dynamic_atexit_destructor_for__CVarSimCacheEnabled__(void)

{
  CVarSimCacheEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimCacheEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimCacheUseOpenVDBFloatGrids'' @ 150411720

void __cdecl
NDIRenderTargetVolumeLocal::_dynamic_atexit_destructor_for__CVarSimCacheUseOpenVDBFloatGrids__(void)

{
  CVarSimCacheUseOpenVDBFloatGrids._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimCacheUseOpenVDBFloatGrids);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSyncPlatformSet'' @ 150411740

void __cdecl NDIPlatformSetPrivate::_dynamic_atexit_destructor_for__CVarSyncPlatformSet__(void)

{
  CVarSyncPlatformSet._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150411760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<UE::Math::TVector4<float>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_155198f40)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150411790

void __cdecl
```FNiagaraDataInterfaceProxyNeighborGrid3D::PreStage'::__l13::Desc::operator()<>'::__l3::<lambda_1>
::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150411797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504117b0

void __cdecl
``FNiagaraDataInterfaceProxyNeighborGrid3D::PreStage'::__l18::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504117b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GCommandNiagaraRenderTargetOverrideFormat'' @ 1504117d0

void __cdecl
NiagaraDataInterfaceRenderTargetCommon::
_dynamic_atexit_destructor_for__GCommandNiagaraRenderTargetOverrideFormat__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCommandNiagaraRenderTargetOverrideFormat);
  return;
}

// `dynamic_atexit_destructor_for_'IntGridName'' @ 1504117f0

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_atexit_destructor_for__IntGridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IntGridName.Data.AllocatorInstance.Data;
  if (IntGridName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IntGridName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogRigidMeshCollision'' @ 150411810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRigidMeshCollision__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRigidMeshCollision);
  return;
}

// `dynamic_atexit_destructor_for_'MaxNeighborsPerCellName'' @ 150411830

void __cdecl _dynamic_atexit_destructor_for__MaxNeighborsPerCellName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MaxNeighborsPerCellName.Data.AllocatorInstance.Data;
  if (MaxNeighborsPerCellName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MaxNeighborsPerCellName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OutputIntGridName'' @ 150411850

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_atexit_destructor_for__OutputIntGridName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OutputIntGridName.Data.AllocatorInstance.Data;
  if (OutputIntGridName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OutputIntGridName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OutputParticleNeighborCountName'' @ 150411870

void __cdecl _dynamic_atexit_destructor_for__OutputParticleNeighborCountName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OutputParticleNeighborCountName.Data.AllocatorInstance.Data;
  if (OutputParticleNeighborCountName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (OutputParticleNeighborCountName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'OutputParticleNeighborsName'' @ 150411890

void __cdecl _dynamic_atexit_destructor_for__OutputParticleNeighborsName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OutputParticleNeighborsName.Data.AllocatorInstance.Data;
  if (OutputParticleNeighborsName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OutputParticleNeighborsName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OverlapExtentDescription'' @ 1504118b0

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_atexit_destructor_for__OverlapExtentDescription__(void)

{
  if (OverlapExtentDescription.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504118bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OverlapExtentDescription.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OverlapOriginDescription'' @ 1504118d0

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_atexit_destructor_for__OverlapOriginDescription__(void)

{
  if (OverlapOriginDescription.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504118df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OverlapOriginDescription.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OverlapRotationDescription'' @ 1504118f0

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_atexit_destructor_for__OverlapRotationDescription__(void)

{
  if (OverlapRotationDescription.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504118ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OverlapRotationDescription.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ParticleNeighborCountName'' @ 150411910

void __cdecl _dynamic_atexit_destructor_for__ParticleNeighborCountName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ParticleNeighborCountName.Data.AllocatorInstance.Data;
  if (ParticleNeighborCountName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ParticleNeighborCountName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ParticleNeighborsName'' @ 150411930

void __cdecl _dynamic_atexit_destructor_for__ParticleNeighborsName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ParticleNeighborsName.Data.AllocatorInstance.Data;
  if (ParticleNeighborsName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ParticleNeighborsName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PerAttributeDataName'' @ 150411950

void __cdecl
NDIRasterizationGrid3DLocal::_dynamic_atexit_destructor_for__PerAttributeDataName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PerAttributeDataName.Data.AllocatorInstance.Data;
  if (PerAttributeDataName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PerAttributeDataName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrecisionName'' @ 150411970

void __cdecl NDIRasterizationGrid3DLocal::_dynamic_atexit_destructor_for__PrecisionName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PrecisionName.Data.AllocatorInstance.Data;
  if (PrecisionName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PrecisionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SetScalarParameterDescription'' @ 150411990

void __cdecl NDIMIDPrivate::_dynamic_atexit_destructor_for__SetScalarParameterDescription__(void)

{
  if (SetScalarParameterDescription.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041199f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SetScalarParameterDescription.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SetVector4ParameterDescription'' @ 1504119b0

void __cdecl NDIMIDPrivate::_dynamic_atexit_destructor_for__SetVector4ParameterDescription__(void)

{
  if (SetVector4ParameterDescription.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504119bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SetVector4ParameterDescription.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SkipOverlapDescription'' @ 1504119d0

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_atexit_destructor_for__SkipOverlapDescription__(void)

{
  if (SkipOverlapDescription.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504119df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SkipOverlapDescription.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504119f0

void __cdecl
`NDIMeshRendererInfoInternal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIMeshRendererInfoInternal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411a10

void __cdecl
`NDIPlatformSetPrivate::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPlatformSetPrivate::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411a30

void __cdecl
`NDIRasterizationGrid3DLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIRasterizationGrid3DLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411a50

void __cdecl
`NDIRenderTarget2DArrayLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIRenderTarget2DArrayLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411a70

void __cdecl
`NDIRenderTarget2DLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIRenderTarget2DLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411a90

void __cdecl
`NDIRenderTargetCubeLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIRenderTargetCubeLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411ab0

void __cdecl
`NDIRenderTargetVolumeLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIRenderTargetVolumeLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411ad0

void __cdecl
`NDIRigidMeshCollisionLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIRigidMeshCollisionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411af0

void __cdecl
`UNiagaraDataInterfaceNeighborGrid3D::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceNeighborGrid3D::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411b10

void __cdecl
`UNiagaraDataInterfaceOcclusion::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceOcclusion::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150411b30

void __cdecl
`UNiagaraDataInterfaceParticleRead::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceParticleRead::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'TraceChannelDescription'' @ 150411b50

void __cdecl
NDIRigidMeshCollisionLocal::_dynamic_atexit_destructor_for__TraceChannelDescription__(void)

{
  if (TraceChannelDescription.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150411b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*TraceChannelDescription.TextData.Reference + 0x10))();
    return;
  }
  return;
}

