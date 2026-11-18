// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// ~FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> @ 142ad8060

void __thiscall
FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::
~FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>
          (FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *this)

{
  atomic<unsigned___int64> aVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  atomic<unsigned___int64> aVar4;
  atomic<void_*> aVar5;
  uint uVar6;
  FIndexedLockFreeLink *pFVar7;
  ulonglong uVar8;
  bool bVar9;
  
  do {
    while( true ) {
      do {
        aVar1 = (this->Head).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        aVar2 = (this->Tail).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar6 = aVar1._0_4_;
        if (((ulonglong)aVar1 & 0x3ffffff) == 0) {
          pFVar7 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar7 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uVar6 & 0x3ffffff) >> 0xe] +
                   (uVar6 & 0x3fff);
        }
        aVar3 = (pFVar7->DoubleNext).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        aVar4 = (this->Head).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
      } while (aVar1 != aVar4);
      if (((uVar6 ^ aVar2._0_4_) & 0x3ffffff) != 0) break;
      if (((ulonglong)aVar3 & 0x3ffffff) == 0) goto LAB_142ad82b9;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar8 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
      if (uVar8 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      LOCK();
      if (aVar2 == (this->Tail).Ptrs) {
        (this->Tail).Ptrs =
             (atomic<unsigned___int64>)
             ((uVar8 ^ (ulonglong)aVar3 & 0xffffffff) & 0xfffffffffc000000 ^
             (ulonglong)aVar3 & 0xffffffff);
      }
      UNLOCK();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    if (((ulonglong)aVar3 & 0x3ffffff) == 0) {
      pFVar7 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar7 = FLockFreeLinkPolicy::LinkAllocator.Pages[(aVar3._0_4_ & 0x3ffffff) >> 0xe] +
               (aVar3._0_4_ & 0x3fff);
    }
    aVar5 = pFVar7->Payload;
    uVar8 = (((ulonglong)aVar1 >> 0x1a) + 1) * 0x4000000;
    if (uVar8 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar9 = aVar1 == (this->Head).Ptrs;
    if (bVar9) {
      (this->Head).Ptrs =
           (atomic<unsigned___int64>)
           ((uVar8 ^ (ulonglong)aVar3 & 0xffffffff) & 0xfffffffffc000000 ^
           (ulonglong)aVar3 & 0xffffffff);
    }
    UNLOCK();
  } while ((!bVar9) ||
          (FLockFreeLinkPolicy::FreeLockFreeLink(uVar6 & 0x3ffffff), aVar5 != (atomic<void_*>)0x0));
LAB_142ad82b9:
  FLockFreeLinkPolicy::FreeLockFreeLink(SUB84((this->Head).Ptrs,0) & 0x3ffffff);
  return;
}

// Pop @ 142b0b970

FNonBufferingReadOnlyArchive * __thiscall
FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::Pop
          (FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *this)

{
  atomic<unsigned___int64> aVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  atomic<unsigned___int64> aVar4;
  atomic<void_*> aVar5;
  uint uVar6;
  FIndexedLockFreeLink *pFVar7;
  ulonglong uVar8;
  bool bVar9;
  
  do {
    while( true ) {
      do {
        aVar1 = (this->Head).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        aVar2 = (this->Tail).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar6 = aVar1._0_4_;
        if (((ulonglong)aVar1 & 0x3ffffff) == 0) {
          pFVar7 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar7 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uVar6 & 0x3ffffff) >> 0xe] +
                   (uVar6 & 0x3fff);
        }
        aVar3 = (pFVar7->DoubleNext).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        aVar4 = (this->Head).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
      } while (aVar1 != aVar4);
      if (((aVar2._0_4_ ^ uVar6) & 0x3ffffff) != 0) break;
      if (((ulonglong)aVar3 & 0x3ffffff) == 0) {
        return (FNonBufferingReadOnlyArchive *)0x0;
      }
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar8 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
      if (uVar8 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      LOCK();
      if (aVar2 == (this->Tail).Ptrs) {
        (this->Tail).Ptrs =
             (atomic<unsigned___int64>)
             ((uVar8 ^ (ulonglong)aVar3 & 0xffffffff) & 0xfffffffffc000000 ^
             (ulonglong)aVar3 & 0xffffffff);
      }
      UNLOCK();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    if (((ulonglong)aVar3 & 0x3ffffff) == 0) {
      pFVar7 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar7 = FLockFreeLinkPolicy::LinkAllocator.Pages[(aVar3._0_4_ & 0x3ffffff) >> 0xe] +
               (aVar3._0_4_ & 0x3fff);
    }
    aVar5 = pFVar7->Payload;
    uVar8 = (((ulonglong)aVar1 >> 0x1a) + 1) * 0x4000000;
    if (uVar8 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar9 = aVar1 == (this->Head).Ptrs;
    if (bVar9) {
      (this->Head).Ptrs =
           (atomic<unsigned___int64>)
           ((uVar8 ^ (ulonglong)aVar3 & 0xffffffff) & 0xfffffffffc000000 ^
           (ulonglong)aVar3 & 0xffffffff);
    }
    UNLOCK();
  } while (!bVar9);
  FLockFreeLinkPolicy::FreeLockFreeLink(uVar6 & 0x3ffffff);
  return (FNonBufferingReadOnlyArchive *)aVar5;
}

// Push @ 142b0e500

void __thiscall
FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::Push
          (FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *this,
          FNonBufferingReadOnlyArchive *param_1)

{
  atomic<unsigned___int64> aVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar4 == 0) {
    pFVar5 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = (atomic<void_*>)param_1;
  do {
    while( true ) {
      do {
        aVar1 = (this->Tail).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        if (((ulonglong)aVar1 & 0x3ffffff) == 0) {
          pFVar5 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[(aVar1._0_4_ & 0x3ffffff) >> 0xe] +
                   (aVar1._0_4_ & 0x3fff);
        }
        aVar2 = (pFVar5->DoubleNext).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        aVar3 = (this->Tail).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
      } while (aVar3 != aVar1);
      if (((ulonglong)aVar2 & 0x3ffffff) == 0) break;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar6 = (((ulonglong)aVar1 >> 0x1a) + 1) * 0x4000000;
      if (uVar6 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      LOCK();
      if (aVar1 == (this->Tail).Ptrs) {
        (this->Tail).Ptrs =
             (atomic<unsigned___int64>)
             (((ulonglong)aVar2 & 0xffffffff ^ uVar6) & 0xfffffffffc000000 ^
             (ulonglong)aVar2 & 0xffffffff);
      }
      UNLOCK();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar6 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar6 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar7 = aVar2 == (pFVar5->DoubleNext).Ptrs;
    if (bVar7) {
      (pFVar5->DoubleNext).Ptrs = (atomic<unsigned___int64>)(uVar6 | uVar4);
    }
    UNLOCK();
  } while (!bVar7);
  if (GTestCriticalStalls != 0) {
    DoTestCriticalStall();
  }
  uVar6 = (((ulonglong)aVar1 >> 0x1a) + 1) * 0x4000000;
  if (uVar6 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
    LockFreeTagCounterHasOverflowed();
  }
  if (GTestCriticalStalls != 0) {
    DoTestCriticalStall();
  }
  LOCK();
  if (aVar1 == (this->Tail).Ptrs) {
    (this->Tail).Ptrs = (atomic<unsigned___int64>)(uVar6 | uVar4);
  }
  UNLOCK();
  return;
}

