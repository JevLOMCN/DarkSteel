// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// Push @ 148cd32b0

void __thiscall
TLockFreePointerListLIFOPad<IBuiltInHttpClientSocket,64>::Push
          (TLockFreePointerListLIFOPad<IBuiltInHttpClientSocket,64> *this,
          IBuiltInHttpClientSocket *param_1)

{
  uint uVar1;
  FIndexedLockFreeLink *pFVar2;
  
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar1 == 0) {
    pFVar2 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar2 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe] + (uVar1 & 0x3fff);
  }
  pFVar2->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push((FLockFreePointerListLIFORoot<64,1> *)this,uVar1);
  return;
}

