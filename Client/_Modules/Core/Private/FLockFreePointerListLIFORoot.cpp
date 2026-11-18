// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Pop @ 1415d8b00

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FLockFreePointerListLIFORoot<64,1>::Pop(FLockFreePointerListLIFORoot<64,1> *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  FIndexedLockFreeLink *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  
  dVar7 = __real_3f50624dd2f1a9fc;
  fVar6 = __real_3a83126f;
  fVar5 = __real_38000100;
  fVar4 = __real_3c23d70a;
  do {
    aVar2 = (this->Head).Ptrs;
    if (GTestCriticalStalls != 0) {
      uVar8 = rand();
      fVar14 = (float)(uVar8 & 0x7fff) * fVar5;
      fVar13 = fVar6;
      if (dVar7 <= (double)fVar14) {
        if (fVar4 <= fVar14) goto LAB_1415d8b99;
        fVar13 = 0.0;
      }
      FWindowsPlatformProcess::SleepNoStats(fVar13);
    }
LAB_1415d8b99:
    uVar8 = aVar2._0_4_ & 0x3ffffff;
    if (((ulonglong)aVar2 & 0x3ffffff) == 0) {
      return uVar8;
    }
    uVar11 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar11 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      if (4 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      FWindowsPlatformProcess::Sleep(fVar6);
    }
    uVar10 = aVar2._0_4_ & 0x3fff;
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar8 >> 0xe];
    aVar1 = pFVar3[uVar10].SingleNext;
    if (GTestCriticalStalls != 0) {
      uVar9 = rand();
      fVar14 = (float)(uVar9 & 0x7fff) * fVar5;
      fVar13 = fVar6;
      if (dVar7 <= (double)fVar14) {
        if (fVar4 <= fVar14) goto LAB_1415d8c98;
        fVar13 = 0.0;
      }
      FWindowsPlatformProcess::SleepNoStats(fVar13);
    }
LAB_1415d8c98:
    LOCK();
    bVar12 = aVar2 == (this->Head).Ptrs;
    if (bVar12) {
      (this->Head).Ptrs = (atomic<unsigned___int64>)(uVar11 | (uint)aVar1);
    }
    UNLOCK();
    if (bVar12) {
      pFVar3[uVar10].SingleNext = (atomic<unsigned_int>)0x0;
      return uVar8;
    }
  } while( true );
}

// Push @ 1415d9ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLockFreePointerListLIFORoot<64,1>::Push(FLockFreePointerListLIFORoot<64,1> *this,uint param_1)

{
  atomic<unsigned___int64> aVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  ulonglong uVar7;
  FIndexedLockFreeLink *pFVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  dVar5 = __real_3f50624dd2f1a9fc;
  fVar4 = __real_3a83126f;
  fVar3 = __real_38000100;
  fVar2 = __real_3c23d70a;
  do {
    aVar1 = (this->Head).Ptrs;
    if (GTestCriticalStalls != 0) {
      uVar6 = rand();
      fVar11 = (float)(uVar6 & 0x7fff) * fVar3;
      fVar10 = fVar4;
      if (dVar5 <= (double)fVar11) {
        if (fVar2 <= fVar11) goto LAB_1415d9b49;
        fVar10 = 0.0;
      }
      FWindowsPlatformProcess::SleepNoStats(fVar10);
    }
LAB_1415d9b49:
    uVar7 = (((ulonglong)aVar1 >> 0x1a) + 1) * 0x4000000;
    if (uVar7 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
      if (4 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      FWindowsPlatformProcess::Sleep(fVar4);
    }
    if (param_1 == 0) {
      pFVar8 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar8 = FLockFreeLinkPolicy::LinkAllocator.Pages[param_1 >> 0xe] + (param_1 & 0x3fff);
    }
    pFVar8->SingleNext = (atomic<unsigned_int>)(aVar1._0_4_ & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      uVar6 = rand();
      fVar11 = (float)(uVar6 & 0x7fff) * fVar3;
      fVar10 = fVar4;
      if (dVar5 <= (double)fVar11) {
        if (fVar2 <= fVar11) goto LAB_1415d9c4c;
        fVar10 = 0.0;
      }
      FWindowsPlatformProcess::SleepNoStats(fVar10);
    }
LAB_1415d9c4c:
    LOCK();
    bVar9 = aVar1 == (this->Head).Ptrs;
    if (bVar9) {
      (this->Head).Ptrs = (atomic<unsigned___int64>)(uVar7 | param_1);
    }
    UNLOCK();
    if (bVar9) {
      return;
    }
  } while( true );
}

// Pop @ 141a0fd60

uint __thiscall FLockFreePointerListLIFORoot<0,1>::Pop(FLockFreePointerListLIFORoot<0,1> *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  FIndexedLockFreeLink *pFVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  do {
    aVar2 = (this->Head).Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar6 = aVar2._0_4_ & 0x3ffffff;
    if (((ulonglong)aVar2 & 0x3ffffff) == 0) {
      return uVar6;
    }
    uVar5 = (((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000;
    if (uVar5 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    uVar4 = aVar2._0_4_ & 0x3fff;
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe];
    aVar1 = pFVar3[uVar4].SingleNext;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar7 = aVar2 == (this->Head).Ptrs;
    if (bVar7) {
      (this->Head).Ptrs = (atomic<unsigned___int64>)(uVar5 | (uint)aVar1);
    }
    UNLOCK();
  } while (!bVar7);
  pFVar3[uVar4].SingleNext = (atomic<unsigned_int>)0x0;
  return uVar6;
}

// Push @ 141a126e0

void __thiscall
FLockFreePointerListLIFORoot<0,1>::Push(FLockFreePointerListLIFORoot<0,1> *this,uint param_1)

{
  atomic<unsigned___int64> aVar1;
  ulonglong uVar2;
  FIndexedLockFreeLink *pFVar3;
  bool bVar4;
  
  do {
    aVar1 = (this->Head).Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar2 = (((ulonglong)aVar1 >> 0x1a) + 1) * 0x4000000;
    if (uVar2 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (param_1 == 0) {
      pFVar3 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[param_1 >> 0xe] + (param_1 & 0x3fff);
    }
    pFVar3->SingleNext = (atomic<unsigned_int>)(aVar1._0_4_ & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar4 = aVar1 == (this->Head).Ptrs;
    if (bVar4) {
      (this->Head).Ptrs = (atomic<unsigned___int64>)(uVar2 | param_1);
    }
    UNLOCK();
  } while (!bVar4);
  return;
}

