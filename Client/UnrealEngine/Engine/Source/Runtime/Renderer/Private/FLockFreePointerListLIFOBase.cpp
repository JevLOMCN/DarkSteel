// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FLockFreePointerListLIFOBase<FViewInfo,64,1> @ 145478740

void __thiscall
FLockFreePointerListLIFOBase<FViewInfo,64,1>::~FLockFreePointerListLIFOBase<FViewInfo,64,1>
          (FLockFreePointerListLIFOBase<FViewInfo,64,1> *this)

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

