// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// ~TQueue<TUniquePtr<FD3D11DynamicRHI::FProfiler::FFrame,TDefaultDelete<FD3D11DynamicRHI::FProfiler::FFrame>_>,1> @ 14596e680

void __thiscall
TQueue<TUniquePtr<FD3D11DynamicRHI::FProfiler::FFrame,TDefaultDelete<FD3D11DynamicRHI::FProfiler::FFrame>_>,1>
::
~TQueue<TUniquePtr<FD3D11DynamicRHI::FProfiler::FFrame,TDefaultDelete<FD3D11DynamicRHI::FProfiler::FFrame>_>,1>
          (TQueue<TUniquePtr<FD3D11DynamicRHI::FProfiler::FFrame,TDefaultDelete<FD3D11DynamicRHI::FProfiler::FFrame>_>,1>
           *this)

{
  TNode *pTVar1;
  FFrame *pFVar2;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar3;
  void *pvVar4;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar5;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Ptr;
    if (pFVar2 != (FFrame *)0x0) {
      pTVar3 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)&(pFVar2->BreadcrumbAllocators).field_0x20
      ;
      pTVar5 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&pFVar2->BreadcrumbAllocators;
      if (pTVar3 != (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
        pTVar5 = pTVar3;
      }
      DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                (pTVar5,*(int *)&(pFVar2->BreadcrumbAllocators).field_0x28);
      pvVar4 = *(void **)&(pFVar2->BreadcrumbAllocators).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar2->EventStream);
      ::operator_delete(pFVar2,0x50);
    }
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

