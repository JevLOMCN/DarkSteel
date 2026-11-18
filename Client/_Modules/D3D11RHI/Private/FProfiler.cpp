// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// ~FProfiler @ 14596fa50

void __thiscall FD3D11DynamicRHI::FProfiler::~FProfiler(FProfiler *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar3;
  
  pFVar1 = (this->TimestampPoolEndFrame).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TimestampPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TQueue<TUniquePtr<FD3D11DynamicRHI::FProfiler::FFrame,TDefaultDelete<FD3D11DynamicRHI::FProfiler::FFrame>_>,1>
  ::
  ~TQueue<TUniquePtr<FD3D11DynamicRHI::FProfiler::FFrame,TDefaultDelete<FD3D11DynamicRHI::FProfiler::FFrame>_>,1>
            (&this->Pending);
  pTVar3 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)
            &(this->Current).BreadcrumbAllocators.field_0x20;
  if (pTVar3 == (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
    pTVar3 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&(this->Current).BreadcrumbAllocators;
  }
  DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
            (pTVar3,*(int *)&(this->Current).BreadcrumbAllocators.field_0x28);
  pvVar2 = *(void **)&(this->Current).BreadcrumbAllocators.field_0x20;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UE::RHI::GPUProfiler::FEventStream::~FEventStream(&(this->Current).EventStream);
  return;
}

