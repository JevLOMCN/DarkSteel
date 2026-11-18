// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> @ 14861f8e0

TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> * __thiscall
TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>::
TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>
          (TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> *this)

{
  uint uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  *(ulonglong *)this = *(ulonglong *)this & 0xfffffffffc000000 | (ulonglong)uVar1;
  *(ulonglong *)&this->field_0x8 =
       *(ulonglong *)&this->field_0x8 & 0xfffffffffc000000 | (ulonglong)uVar1;
  return this;
}

// ~TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> @ 148624ab0

void __thiscall
TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>::
~TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>
          (TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> *this)

{
  atomic<unsigned___int64> aVar1;
  ulonglong uVar2;
  atomic<void_*> aVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  do {
    while( true ) {
      do {
        uVar6 = *(ulonglong *)this;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar7 = *(ulonglong *)&this->field_0x8;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar4 = (uint)uVar6;
        if ((uVar6 & 0x3ffffff) == 0) {
          pFVar5 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uVar4 & 0x3ffffff) >> 0xe] +
                   (uVar4 & 0x3fff);
        }
        aVar1 = (pFVar5->DoubleNext).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar2 = *(ulonglong *)this;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
      } while (uVar6 != uVar2);
      if (((uVar4 ^ (uint)uVar7) & 0x3ffffff) != 0) break;
      if (((ulonglong)aVar1 & 0x3ffffff) == 0) goto LAB_148624389;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar6 = ((uVar7 >> 0x1a) + 1) * 0x4000000;
      if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      LOCK();
      if (uVar7 == *(ulonglong *)&this->field_0x8) {
        *(ulonglong *)&this->field_0x8 =
             (uVar6 ^ (ulonglong)aVar1 & 0xffffffff) & 0xfffffffffc000000 ^
             (ulonglong)aVar1 & 0xffffffff;
      }
      UNLOCK();
    }
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
    aVar3 = pFVar5->Payload;
    uVar7 = ((uVar6 >> 0x1a) + 1) * 0x4000000;
    if (uVar7 < (uVar6 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    uVar2 = *(ulonglong *)this;
    if (uVar6 == uVar2) {
      *(ulonglong *)this =
           (uVar7 ^ (ulonglong)aVar1 & 0xffffffff) & 0xfffffffffc000000 ^
           (ulonglong)aVar1 & 0xffffffff;
    }
    UNLOCK();
  } while ((uVar6 != uVar2) ||
          (FLockFreeLinkPolicy::FreeLockFreeLink(uVar4 & 0x3ffffff), aVar3 != (atomic<void_*>)0x0));
LAB_148624389:
  FLockFreeLinkPolicy::FreeLockFreeLink((uint)*(undefined8 *)this & 0x3ffffff);
  return;
}

// TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> @ 1486907c0

TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> * __thiscall
TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>::
TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>
          (TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> *this)

{
  uint uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  *(ulonglong *)this = *(ulonglong *)this & 0xfffffffffc000000 | (ulonglong)uVar1;
  *(ulonglong *)&this->field_0x8 =
       *(ulonglong *)&this->field_0x8 & 0xfffffffffc000000 | (ulonglong)uVar1;
  return this;
}

// ~TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> @ 148699610

void __thiscall
TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>::
~TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>
          (TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> *this)

{
  atomic<unsigned___int64> aVar1;
  ulonglong uVar2;
  atomic<void_*> aVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  do {
    while( true ) {
      do {
        uVar6 = *(ulonglong *)this;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar7 = *(ulonglong *)&this->field_0x8;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar4 = (uint)uVar6;
        if ((uVar6 & 0x3ffffff) == 0) {
          pFVar5 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uVar4 & 0x3ffffff) >> 0xe] +
                   (uVar4 & 0x3fff);
        }
        aVar1 = (pFVar5->DoubleNext).Ptrs;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
        uVar2 = *(ulonglong *)this;
        if (GTestCriticalStalls != 0) {
          DoTestCriticalStall();
        }
      } while (uVar6 != uVar2);
      if (((uVar4 ^ (uint)uVar7) & 0x3ffffff) != 0) break;
      if (((ulonglong)aVar1 & 0x3ffffff) == 0) goto LAB_148698f59;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar6 = ((uVar7 >> 0x1a) + 1) * 0x4000000;
      if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      LOCK();
      if (uVar7 == *(ulonglong *)&this->field_0x8) {
        *(ulonglong *)&this->field_0x8 =
             (uVar6 ^ (ulonglong)aVar1 & 0xffffffff) & 0xfffffffffc000000 ^
             (ulonglong)aVar1 & 0xffffffff;
      }
      UNLOCK();
    }
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
    aVar3 = pFVar5->Payload;
    uVar7 = ((uVar6 >> 0x1a) + 1) * 0x4000000;
    if (uVar7 < (uVar6 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    uVar2 = *(ulonglong *)this;
    if (uVar6 == uVar2) {
      *(ulonglong *)this =
           (uVar7 ^ (ulonglong)aVar1 & 0xffffffff) & 0xfffffffffc000000 ^
           (ulonglong)aVar1 & 0xffffffff;
    }
    UNLOCK();
  } while ((uVar6 != uVar2) ||
          (FLockFreeLinkPolicy::FreeLockFreeLink(uVar4 & 0x3ffffff), aVar3 != (atomic<void_*>)0x0));
LAB_148698f59:
  FLockFreeLinkPolicy::FreeLockFreeLink((uint)*(undefined8 *)this & 0x3ffffff);
  return;
}

