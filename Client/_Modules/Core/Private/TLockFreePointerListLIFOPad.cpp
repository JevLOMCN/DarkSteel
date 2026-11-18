// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Push @ 1414abc60

void __thiscall
TLockFreePointerListLIFOPad<void_*,64>::Push
          (TLockFreePointerListLIFOPad<void_*,64> *this,void **param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  FIndexedLockFreeLink *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
  uVar6 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    pFVar4 = (FIndexedLockFreeLink *)0x0;
    uVar6 = 0;
  }
  else {
    pFVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe] + (uVar3 & 0x3fff);
  }
  pFVar4->Payload = (atomic<void_*>)param_1;
  do {
    uVar2 = *(ulonglong *)this;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar5 = ((uVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar5 < (uVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (uVar3 == 0) {
      pFVar4 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe] + ((uint)uVar6 & 0x3fff);
    }
    pFVar4->SingleNext = (atomic<unsigned_int>)((uint)uVar2 & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    uVar1 = *(ulonglong *)this;
    if (uVar2 == uVar1) {
      *(ulonglong *)this = uVar5 | uVar6;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return;
}

// Push @ 141652080

void __thiscall
TLockFreePointerListLIFOPad<FEvent,64>::Push
          (TLockFreePointerListLIFOPad<FEvent,64> *this,FEvent *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  FIndexedLockFreeLink *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
  uVar6 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    pFVar4 = (FIndexedLockFreeLink *)0x0;
    uVar6 = 0;
  }
  else {
    pFVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe] + (uVar3 & 0x3fff);
  }
  pFVar4->Payload = (atomic<void_*>)param_1;
  do {
    uVar2 = *(ulonglong *)this;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar5 = ((uVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar5 < (uVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (uVar3 == 0) {
      pFVar4 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe] + ((uint)uVar6 & 0x3fff);
    }
    pFVar4->SingleNext = (atomic<unsigned_int>)((uint)uVar2 & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    uVar1 = *(ulonglong *)this;
    if (uVar2 == uVar1) {
      *(ulonglong *)this = uVar5 | uVar6;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return;
}

// Pop @ 1417eb0e0

void ** __thiscall
TLockFreePointerListLIFOPad<void_*,64>::Pop(TLockFreePointerListLIFOPad<void_*,64> *this)

{
  ulonglong uVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  FIndexedLockFreeLink *pFVar4;
  atomic<void_*> aVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  do {
    uVar3 = *(ulonglong *)this;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar8 = (uint)uVar3;
    uVar7 = uVar8 & 0x3ffffff;
    if ((uVar3 & 0x3ffffff) == 0) {
      return (void **)0x0;
    }
    uVar6 = ((uVar3 >> 0x1a) + 1) * 0x4000000;
    if (uVar6 < (uVar3 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    pFVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe];
    aVar2 = pFVar4[uVar8 & 0x3fff].SingleNext;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    uVar1 = *(ulonglong *)this;
    if (uVar3 == uVar1) {
      *(ulonglong *)this = uVar6 | (uint)aVar2;
    }
    UNLOCK();
  } while (uVar3 != uVar1);
  pFVar4[uVar8 & 0x3fff].SingleNext = (atomic<unsigned_int>)0x0;
  aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar8 & 0x3fff].Payload;
  FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
  return (void **)aVar5;
}

