// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// operator() @ 148f855c0

void __thiscall
TDefaultDelete<NDIStaticMeshLocal::FGpuInitializeData>::operator()
          (TDefaultDelete<NDIStaticMeshLocal::FGpuInitializeData> *this,FGpuInitializeData *param_1)

{
  longlong *plVar1;
  FStaticMeshLODResources *pFVar2;
  longlong lVar3;
  
  if (param_1 != (FGpuInitializeData *)0x0) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&(param_1->FilteredAndUnfilteredSockets)._padding_);
    (param_1->FilteredAndUnfilteredSockets)._padding_ =
         (longlong)&___7FResourceArrayUploadInterface__6B_;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&(param_1->SocketTransforms)._padding_);
    (param_1->SocketTransforms)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&(param_1->FilteredAndUnfilteredSections)._padding_);
    (param_1->FilteredAndUnfilteredSections)._padding_ =
         (longlong)&___7FResourceArrayUploadInterface__6B_;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&(param_1->SectionInfos)._padding_);
    (param_1->SectionInfos)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    pFVar2 = (param_1->LODResource).Reference;
    if (pFVar2 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    ::operator_delete(param_1,0xd8);
  }
  return;
}

// operator() @ 1491b3770

void __thiscall
TDefaultDelete<FNDIRigidMeshCollisionArrays>::operator()
          (TDefaultDelete<FNDIRigidMeshCollisionArrays> *this,FNDIRigidMeshCollisionArrays *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FNDIRigidMeshCollisionArrays *)0x0) {
    pFVar1 = (param_1->UniqueCompnentId).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ComponentIdIndex).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PhysicsType).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->MeshScale).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ElementExtent).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PreviousInverse).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PreviousTransform).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->CurrentInverse).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->CurrentTransform).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xc0);
  }
  return;
}

// operator() @ 149282100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData>::operator()
          (TDefaultDelete<FNiagaraEmitterInstanceImpl::FEventInstanceData> *this,
          FEventInstanceData *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FEventInstanceData *)0x0) {
    DestructItems<FNiagaraEventHandlingInfo,int>
              ((FNiagaraEventHandlingInfo *)(param_1->EventHandlingInfo).AllocatorInstance.Data,
               (param_1->EventHandlingInfo).ArrayNum);
    pFVar1 = (param_1->EventHandlingInfo).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SpawnEventGeneratorIsSharedByIndex).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->UpdateEventGeneratorIsSharedByIndex).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SpawnScriptEventDataSets).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->UpdateScriptEventDataSets).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FNiagaraParameterDirectBinding<int>,int>
              ((FNiagaraParameterDirectBinding<int> *)
               (param_1->EventExecCountBindings).AllocatorInstance.Data,
               (param_1->EventExecCountBindings).ArrayNum);
    pFVar1 = (param_1->EventExecCountBindings).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FNiagaraScriptExecutionContext,int>
              ((FNiagaraScriptExecutionContext *)(param_1->EventExecContexts).AllocatorInstance.Data
               ,(param_1->EventExecContexts).ArrayNum);
    pFVar1 = (param_1->EventExecContexts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0x78);
  }
  return;
}

// operator() @ 1492d8060

void __thiscall
TDefaultDelete<FNiagaraEmptyUAVPool>::operator()
          (TDefaultDelete<FNiagaraEmptyUAVPool> *this,FNiagaraEmptyUAVPool *param_1)

{
  void *pvVar1;
  
  if (param_1 != (FNiagaraEmptyUAVPool *)0x0) {
    *(undefined4 *)&(param_1->TextureRDGUAVPool).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->TextureRDGUAVPool).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&param_1->TextureRDGUAVPool);
    *(undefined4 *)&(param_1->BufferRDGUAVPool).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->BufferRDGUAVPool).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&param_1->BufferRDGUAVPool);
    *(undefined4 *)&param_1->UAVPools[5].field_0x48 = 0;
    pvVar1 = *(void **)&param_1->UAVPools[5].field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (param_1->UAVPools + 5);
    *(undefined4 *)&param_1->UAVPools[4].field_0x48 = 0;
    pvVar1 = *(void **)&param_1->UAVPools[4].field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (param_1->UAVPools + 4);
    *(undefined4 *)&param_1->UAVPools[3].field_0x48 = 0;
    pvVar1 = *(void **)&param_1->UAVPools[3].field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (param_1->UAVPools + 3);
    *(undefined4 *)&param_1->UAVPools[2].field_0x48 = 0;
    pvVar1 = *(void **)&param_1->UAVPools[2].field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (param_1->UAVPools + 2);
    *(undefined4 *)&param_1->UAVPools[1].field_0x48 = 0;
    pvVar1 = *(void **)&param_1->UAVPools[1].field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (param_1->UAVPools + 1);
    *(undefined4 *)&param_1->UAVPools[0].field_0x48 = 0;
    pvVar1 = *(void **)&param_1->UAVPools[0].field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (param_1->UAVPools);
    ::operator_delete(param_1,0x290);
  }
  return;
}

// operator() @ 14942e320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>::operator()
          (TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache> *this,
          FStatelessDataCache *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 != (FStatelessDataCache *)0x0) {
    pFVar1 = (param_1->DataBuffer).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)pFVar1);
      pFVar1 = (param_1->DataBuffer).Reference;
      if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
        (param_1->DataBuffer).Reference = (FNiagaraDataBuffer *)0x0;
        if ((int)pFVar1->_padding_ < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        LOCK();
        *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
        UNLOCK();
      }
    }
    pFVar1 = (param_1->DataBuffer).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      if ((int)pFVar1->_padding_ < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBeingRead()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x2c,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
    FNiagaraDataSet::~FNiagaraDataSet(&param_1->DataSet);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->DataSetCompiledData).SharedReferenceCount.ReferenceController);
    ::operator_delete(param_1,0xe0);
  }
  return;
}

