// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// DestroyObject @ 1459bdd10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
::DestroyObject(TIntrusiveReferenceController<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
                *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<FD3D12UniqueSamplerTable>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FD3D12UniqueSamplerTable>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FD3D12UniqueSamplerTable>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145a11720

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12ShaderResourceView,1>::DestroyObject
          (TIntrusiveReferenceController<FD3D12ShaderResourceView,1> *this)

{
  FD3D12View::~FD3D12View((FD3D12View *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145a63610

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12DepthStencilView,1>::DestroyObject
          (TIntrusiveReferenceController<FD3D12DepthStencilView,1> *this)

{
  FD3D12View::~FD3D12View((FD3D12View *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145a63620

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12RenderTargetView,1>::DestroyObject
          (TIntrusiveReferenceController<FD3D12RenderTargetView,1> *this)

{
  FD3D12View::~FD3D12View((FD3D12View *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145a63630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRHIBreadcrumbAllocatorArray,1>::DestroyObject
          (TIntrusiveReferenceController<FRHIBreadcrumbAllocatorArray,1> *this)

{
  void *pvVar1;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar2;
  
  pTVar2 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)((this->ObjectStorage).Pad + 0x20);
  if (pTVar2 == (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
    pTVar2 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&this->ObjectStorage;
  }
  DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
            (pTVar2,*(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

