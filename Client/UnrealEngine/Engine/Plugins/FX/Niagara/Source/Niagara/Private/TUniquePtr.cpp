// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Reset @ 148ecf380

void __thiscall
TUniquePtr<NDIDynamicMeshLocal::FGameToRenderData,TDefaultDelete<NDIDynamicMeshLocal::FGameToRenderData>_>
::Reset(TUniquePtr<NDIDynamicMeshLocal::FGameToRenderData,TDefaultDelete<NDIDynamicMeshLocal::FGameToRenderData>_>
        *this,FGameToRenderData *param_1)

{
  FGameToRenderData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FGameToRenderData *)0x0)) {
    pFVar2 = (pFVar1->MeshSections).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&(pFVar1->VertexData)._padding_);
    (pFVar1->VertexData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&(pFVar1->IndexData)._padding_);
    (pFVar1->IndexData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    ::operator_delete(pFVar1,0xb0);
  }
  return;
}

// Reset @ 149303f10

void __thiscall
TUniquePtr<FNiagaraGpuReadbackManager,TDefaultDelete<FNiagaraGpuReadbackManager>_>::Reset
          (TUniquePtr<FNiagaraGpuReadbackManager,TDefaultDelete<FNiagaraGpuReadbackManager>_> *this,
          FNiagaraGpuReadbackManager *param_1)

{
  FNiagaraGpuReadbackManager *pFVar1;
  TNode *pTVar2;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FNiagaraGpuReadbackManager *)0x0)) {
    pTVar2 = (pFVar1->PendingReadbacks).Tail;
    while (pTVar2 != (TNode *)0x0) {
      (pFVar1->PendingReadbacks).Tail = pTVar2->NextNode;
      FNiagaraGpuReadbackManager::FPendingReadback::~FPendingReadback(&pTVar2->Item);
      ::operator_delete(pTVar2,0x70);
      pTVar2 = (pFVar1->PendingReadbacks).Tail;
    }
    ::operator_delete(pFVar1,0x10);
  }
  return;
}

