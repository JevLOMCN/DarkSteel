// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 40

// DestroyObject @ 148e62b40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNDIDataChannel_FunctionToDataSetBinding,1>::
DestroyObject(TIntrusiveReferenceController<FNDIDataChannel_FunctionToDataSetBinding,1> *this)

{
  FNDIDataChannel_FunctionToDataSetBinding::~FNDIDataChannel_FunctionToDataSetBinding
            ((FNDIDataChannel_FunctionToDataSetBinding *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148e62b50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataChannelGameData,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraDataChannelGameData,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x38));
  DestructItems<FNiagaraDataChannelVariableBuffer,int>
            (*(FNiagaraDataChannelVariableBuffer **)((this->ObjectStorage).Pad + 0x10),
             *(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148e62ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 148e62bc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataBufferReadback,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraDataBufferReadback,1> *this)

{
  FNiagaraDataBufferReadback::~FNiagaraDataBufferReadback
            ((FNiagaraDataBufferReadback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148eb4150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<NDIDynamicMeshLocal::FNDIRenderableMesh,1>::
DestroyObject(TIntrusiveReferenceController<NDIDynamicMeshLocal::FNDIRenderableMesh,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7INiagaraRenderableMesh__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148eb417b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 148fa8580

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStaticMeshUvMapping,1>::DestroyObject
          (TIntrusiveReferenceController<FStaticMeshUvMapping,1> *this)

{
  FMeshUvMapping::~FMeshUvMapping((FMeshUvMapping *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14903dae0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSystemInstanceController,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraSystemInstanceController,1> *this)

{
  FNiagaraSystemInstanceController::~FNiagaraSystemInstanceController
            ((FNiagaraSystemInstanceController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1490ea3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataChannelData,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraDataChannelData,1> *this)

{
  FNiagaraDataChannelData::~FNiagaraDataChannelData((FNiagaraDataChannelData *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 1490ea3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataChannelDataProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraDataChannelDataProxy,1> *this)

{
  FNiagaraDataChannelDataProxy::~FNiagaraDataChannelDataProxy
            ((FNiagaraDataChannelDataProxy *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1490ea3c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataChannelLayoutInfo,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraDataChannelLayoutInfo,1> *this)

{
  FNiagaraDataChannelLayoutInfo::~FNiagaraDataChannelLayoutInfo
            ((FNiagaraDataChannelLayoutInfo *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1490ea3d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSubmixListener,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraSubmixListener,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  Audio::FPatchInput::~FPatchInput((FPatchInput *)((this->ObjectStorage).Pad + 0x20));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001490ea407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 149176f00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1>::
DestroyObject(TIntrusiveReferenceController<FNDI_Landscape_SharedResource,1> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x170);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x160);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  puVar2 = *(undefined8 **)(this->ObjectStorage).Pad;
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149176f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}

// DestroyObject @ 14922b180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletalMeshConnectivity,1>::DestroyObject
          (TIntrusiveReferenceController<FSkeletalMeshConnectivity,1> *this)

{
  undefined8 *puVar1;
  
  FSkeletalMeshConnectivity::Release((FSkeletalMeshConnectivity *)&this->ObjectStorage);
  puVar1 = *(undefined8 **)((this->ObjectStorage).Pad + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014922b1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14922b1c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletalMeshSkinningData,1>::DestroyObject
          (TIntrusiveReferenceController<FSkeletalMeshSkinningData,1> *this)

{
  FSkeletalMeshSkinningData::~FSkeletalMeshSkinningData
            ((FSkeletalMeshSkinningData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14922b1d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletalMeshUvMapping,1>::DestroyObject
          (TIntrusiveReferenceController<FSkeletalMeshUvMapping,1> *this)

{
  FMeshUvMapping::~FMeshUvMapping((FMeshUvMapping *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14928c900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDebugHUDPerfStats,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraDebugHUDPerfStats,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14928c950

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSimStageExecutionData,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraSimStageExecutionData,1> *this)

{
  void *pvVar1;
  
  DestructItems<FSimulationStageMetaData,int>
            (*(FSimulationStageMetaData **)((this->ObjectStorage).Pad + 0x28),
             *(int *)((this->ObjectStorage).Pad + 0x30));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14928c9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataSetReadback,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraDataSetReadback,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x168));
  FNiagaraParameterStore::~FNiagaraParameterStore
            ((FNiagaraParameterStore *)((this->ObjectStorage).Pad + 0xe0));
  FNiagaraDataSet::~FNiagaraDataSet((FNiagaraDataSet *)((this->ObjectStorage).Pad + 0x20));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014928c9ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14928ca00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDebugHUDStatsListener,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraDebugHUDStatsListener,1> *this)

{
  FNiagaraDebugHUDStatsListener::~FNiagaraDebugHUDStatsListener
            ((FNiagaraDebugHUDStatsListener *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14928ca10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraOutlinerPerfListener,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraOutlinerPerfListener,1> *this)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1492e0900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraGpuFrameResults,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraGpuFrameResults,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001492e093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 1492e0950

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRenderableStaticMesh,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraRenderableStaticMesh,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7INiagaraRenderableMesh__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001492e097b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 149344ff0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRibbonCPUGeneratedVertexData,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraRibbonCPUGeneratedVertexData,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x98);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 149345060

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRibbonIndexBuffer,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraRibbonIndexBuffer,1> *this)

{
  TTypeCompatibleBytes<FNiagaraRibbonIndexBuffer> *this_00;
  FRHIResource *pFVar1;
  
  this_00 = &this->ObjectStorage;
  *(undefined ***)this_00->Pad = &___7FNiagaraRibbonIndexBuffer__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this_00);
  pFVar1 = *(FRHIResource **)((this->ObjectStorage).Pad + 0x38);
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = *(FRHIResource **)((this->ObjectStorage).Pad + 0x30);
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this_00);
  return;
}

// DestroyObject @ 1493450b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRibbonRenderingFrameViewResources,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraRibbonRenderingFrameViewResources,1> *this)

{
  FNiagaraRibbonRenderingFrameViewResources::~FNiagaraRibbonRenderingFrameViewResources
            ((FNiagaraRibbonRenderingFrameViewResources *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1493450c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRWBuffer,1>::DestroyObject
          (TIntrusiveReferenceController<FRWBuffer,1> *this)

{
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1493450d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraPerfBaselineStatsListener,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraPerfBaselineStatsListener,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FAccumulatedParticlePerfStats::~FAccumulatedParticlePerfStats
            ((FAccumulatedParticlePerfStats *)((this->ObjectStorage).Pad + 0x20));
  *(undefined ***)(this->ObjectStorage).Pad = &___7FParticlePerfStatsListener__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149345112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 149345130

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>::
DestroyObject(TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>
              *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x188] = '\0';
  (this->ObjectStorage).Pad[0x189] = '\0';
  (this->ObjectStorage).Pad[0x18a] = '\0';
  (this->ObjectStorage).Pad[0x18b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x180);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x140));
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 149345180

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>::
DestroyObject(TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>
              *this)

{
  FParticlePerfStatsListener_NiagaraPerformanceReporter::
  ~FParticlePerfStatsListener_NiagaraPerformanceReporter
            ((FParticlePerfStatsListener_NiagaraPerformanceReporter *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14939cbd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraShaderScript,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraShaderScript,1> *this)

{
  FNiagaraShaderScript::~FNiagaraShaderScript((FNiagaraShaderScript *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1493de140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGuid,1>::DestroyObject
          (TIntrusiveReferenceController<FGuid,1> *this)

{
  return;
}

// DestroyObject @ 1493de150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraEmitterCompiledData,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraEmitterCompiledData,1> *this)

{
  FNiagaraEmitterCompiledData::~FNiagaraEmitterCompiledData
            ((FNiagaraEmitterCompiledData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1493de160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraScriptDebuggerInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraScriptDebuggerInfo,1> *this)

{
  FNiagaraParameterStore::~FNiagaraParameterStore
            ((FNiagaraParameterStore *)((this->ObjectStorage).Pad + 0xe8));
  FNiagaraDataSet::~FNiagaraDataSet((FNiagaraDataSet *)((this->ObjectStorage).Pad + 0x28));
  return;
}

// DestroyObject @ 1493de190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,int>
            (*(TSharedPtr<FNiagaraScriptDebuggerInfo,1> **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1493de1d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraEmitterInstanceImpl,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraEmitterInstanceImpl,1> *this)

{
  FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl
            ((FNiagaraEmitterInstanceImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1493de1e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraStatelessEmitterInstance,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraStatelessEmitterInstance,1> *this)

{
  FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance
            ((FNiagaraStatelessEmitterInstance *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1493de1f0

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

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSystemInstance,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraSystemInstance,1> *this)

{
  FNiagaraSystemInstance::~FNiagaraSystemInstance((FNiagaraSystemInstance *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1493de200

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

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSystemSimulation,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraSystemSimulation,1> *this)

{
  FNiagaraSystemSimulation::~FNiagaraSystemSimulation
            ((FNiagaraSystemSimulation *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 149440360

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<std::atomic<float>,1>::DestroyObject
          (TIntrusiveReferenceController<std::atomic<float>,1> *this)

{
  return;
}

// DestroyObject @ 149440370

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataSetCompiledData,1>::DestroyObject
          (TIntrusiveReferenceController<FNiagaraDataSetCompiledData,1> *this)

{
  void *pvVar1;
  
  DestructItems<FNiagaraVariableLayoutInfo,int>
            (*(FNiagaraVariableLayoutInfo **)((this->ObjectStorage).Pad + 0x10),
             *(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1494403c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_EffectType,1>::
DestroyObject(TIntrusiveReferenceController<FParticlePerfStatsListener_EffectType,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FParticlePerfStatsListener__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001494403eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

