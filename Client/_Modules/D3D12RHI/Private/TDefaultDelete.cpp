// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// operator() @ 1459ae7d0

void __thiscall
TDefaultDelete<FD3D12BindlessResourceManager>::operator()
          (TDefaultDelete<FD3D12BindlessResourceManager> *this,
          FD3D12BindlessResourceManager *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FD3D12DescriptorHeap *pFVar3;
  longlong lVar4;
  
  if (param_1 != (FD3D12BindlessResourceManager *)0x0) {
    DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
              ((FGpuHeapData *)(param_1->PooledGpuHeaps).AllocatorInstance.Data,
               (param_1->PooledGpuHeaps).ArrayNum);
    pFVar2 = (param_1->PooledGpuHeaps).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
              ((FGpuHeapData *)(param_1->ActiveGpuHeaps).AllocatorInstance.Data,
               (param_1->ActiveGpuHeaps).ArrayNum);
    pFVar2 = (param_1->ActiveGpuHeaps).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar3 = (param_1->CpuHeap).Reference;
    if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    ::operator_delete(param_1,0x1f8);
  }
  return;
}

