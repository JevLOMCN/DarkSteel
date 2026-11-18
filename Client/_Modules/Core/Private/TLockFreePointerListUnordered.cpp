// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TLockFreePointerListUnordered<void,64> @ 1416d3ff0

TLockFreePointerListUnordered<void,64> * __thiscall
TLockFreePointerListUnordered<void,64>::TLockFreePointerListUnordered<void,64>
          (TLockFreePointerListUnordered<void,64> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)this = 0;
  return this;
}

// ~TLockFreePointerListUnordered<void,64> @ 1416d7a60

void __thiscall
TLockFreePointerListUnordered<void,64>::~TLockFreePointerListUnordered<void,64>
          (TLockFreePointerListUnordered<void,64> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

