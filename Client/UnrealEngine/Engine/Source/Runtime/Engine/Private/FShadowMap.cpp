// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Cleanup @ 1485ae5b0

void __thiscall FShadowMap::Cleanup(FShadowMap *this)

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
  pFVar2->Payload = (atomic<void_*>)this;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)&PendingCleanupObjectsList,uVar1);
  return;
}

// Serialize @ 1485d77a0

void __thiscall FShadowMap::Serialize(FShadowMap *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>(param_1,&this->LightGuids);
  return;
}

