// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Trim @ 1418fca90

void __thiscall
TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter>::Trim
          (TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  while( true ) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    if (aVar1 == (atomic<void_*>)0x0) break;
    FMemory::Free((void *)aVar1);
    LOCK();
    (this->NumFree).Counter = (this->NumFree).Counter + -1;
    UNLOCK();
  }
  return;
}

