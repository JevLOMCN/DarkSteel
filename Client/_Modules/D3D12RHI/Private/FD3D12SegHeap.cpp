// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~FD3D12SegHeap @ 1459acb00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall FD3D12SegHeap::~FD3D12SegHeap(FD3D12SegHeap *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeBlockOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FD3D12Heap::~FD3D12Heap((FD3D12Heap *)this);
  return;
}

// IsFull @ 1459c74a0

bool __thiscall FD3D12SegHeap::IsFull(FD3D12SegHeap *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < this->FirstFreeOffset) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstFreeOffset <= HeapSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                       ,0x25a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (((this->FreeBlockOffsets).ArrayNum == 0) && (this->FirstFreeOffset == param_1)) {
    return true;
  }
  return false;
}

