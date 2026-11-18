// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ~FLockFreePointerListLIFOBase<FNotificationInfo,0,1> @ 1427b64d0

void __thiscall
FLockFreePointerListLIFOBase<FNotificationInfo,0,1>::
~FLockFreePointerListLIFOBase<FNotificationInfo,0,1>
          (FLockFreePointerListLIFOBase<FNotificationInfo,0,1> *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  FIndexedLockFreeLink *pFVar3;
  atomic<void_*> aVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar8;
  uint uVar7;
  
  while( true ) {
    aVar2 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar7 = aVar2._0_4_;
    uVar6 = uVar7 & 0x3ffffff;
    if (((ulonglong)aVar2 & 0x3ffffff) == 0) break;
    uVar5 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar5 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe];
    aVar1 = pFVar3[uVar7 & 0x3fff].SingleNext;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar8 = aVar2 == (this->RootList).Head.Ptrs;
    if (bVar8) {
      (this->RootList).Head.Ptrs = (atomic<unsigned___int64>)(uVar5 | (uint)aVar1);
    }
    UNLOCK();
    if (bVar8) {
      pFVar3[uVar7 & 0x3fff].SingleNext = (atomic<unsigned_int>)0x0;
      aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe][uVar7 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar6);
      if (aVar4 == (atomic<void_*>)0x0) {
        return;
      }
    }
  }
  return;
}

// Pop @ 14282cf60

/* WARNING: Enum "Type": Some values do not have unique names */

FNotificationInfo * __thiscall
FLockFreePointerListLIFOBase<FNotificationInfo,0,1>::Pop
          (FLockFreePointerListLIFOBase<FNotificationInfo,0,1> *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  FIndexedLockFreeLink *pFVar3;
  atomic<void_*> aVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar8;
  uint uVar7;
  
  do {
    aVar2 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar7 = aVar2._0_4_;
    uVar6 = uVar7 & 0x3ffffff;
    if (((ulonglong)aVar2 & 0x3ffffff) == 0) {
      return (FNotificationInfo *)0x0;
    }
    uVar5 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar5 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe];
    aVar1 = pFVar3[uVar7 & 0x3fff].SingleNext;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar8 = aVar2 == (this->RootList).Head.Ptrs;
    if (bVar8) {
      (this->RootList).Head.Ptrs = (atomic<unsigned___int64>)(uVar5 | (uint)aVar1);
    }
    UNLOCK();
  } while (!bVar8);
  pFVar3[uVar7 & 0x3fff].SingleNext = (atomic<unsigned_int>)0x0;
  aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe][uVar7 & 0x3fff].Payload;
  FLockFreeLinkPolicy::FreeLockFreeLink(uVar6);
  return (FNotificationInfo *)aVar4;
}

