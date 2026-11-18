// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// ~FD3D11PlatformCommandList @ 14596eff0

void __thiscall
FD3D11PlatformCommandList::~FD3D11PlatformCommandList(FD3D11PlatformCommandList *this)

{
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar1;
  
  pTVar1 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)&this->field_0x28;
  if (*(TSharedRef<FRHIBreadcrumbAllocator,1> **)&this->field_0x28 ==
      (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
    pTVar1 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&this->field_0x8;
  }
  DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>(pTVar1,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
    return;
  }
  return;
}

