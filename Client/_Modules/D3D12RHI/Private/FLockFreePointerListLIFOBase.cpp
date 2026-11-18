// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// ~FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1> @ 1459f5ea0

void __thiscall
FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1>::
~FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1>
          (FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// ~FLockFreePointerListLIFOBase<FD3D12CommandList,64,1> @ 1459f5f10

void __thiscall
FLockFreePointerListLIFOBase<FD3D12CommandList,64,1>::
~FLockFreePointerListLIFOBase<FD3D12CommandList,64,1>
          (FLockFreePointerListLIFOBase<FD3D12CommandList,64,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// ~FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1> @ 1459f5f80

void __thiscall
FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1>::
~FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1>
          (FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// ~FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1> @ 1459f5ff0

void __thiscall
FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1>::
~FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1>
          (FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

