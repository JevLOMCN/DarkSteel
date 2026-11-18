// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// FLockFreePointerFIFOBase<FBaseGraphTask,64,1> @ 14147c670

FLockFreePointerFIFOBase<FBaseGraphTask,64,1> * __thiscall
FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::FLockFreePointerFIFOBase<FBaseGraphTask,64,1>
          (FLockFreePointerFIFOBase<FBaseGraphTask,64,1> *this)

{
  uint uVar1;
  
  (this->Head).Ptrs = (atomic<unsigned___int64>)0x0;
  (this->Tail).Ptrs = (atomic<unsigned___int64>)0x0;
  (this->Head).Ptrs = (atomic<unsigned___int64>)0x0;
  (this->Tail).Ptrs = (atomic<unsigned___int64>)0x0;
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  (this->Head).Ptrs =
       (atomic<unsigned___int64>)
       ((ulonglong)(this->Head).Ptrs & 0xfffffffffc000000 | (ulonglong)uVar1);
  (this->Tail).Ptrs =
       (atomic<unsigned___int64>)
       ((ulonglong)(this->Tail).Ptrs & 0xfffffffffc000000 | (ulonglong)uVar1);
  return this;
}

// ~FLockFreePointerFIFOBase<FBaseGraphTask,64,1> @ 14147fbf0

void __thiscall
FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::~FLockFreePointerFIFOBase<FBaseGraphTask,64,1>
          (FLockFreePointerFIFOBase<FBaseGraphTask,64,1> *this)

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
      if (((ulonglong)aVar3 & 0x3ffffff) == 0) goto LAB_14147fe49;
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
LAB_14147fe49:
  FLockFreeLinkPolicy::FreeLockFreeLink(SUB84((this->Head).Ptrs,0) & 0x3ffffff);
  return;
}

// Push @ 1414ab780

void __thiscall
FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::Push
          (FLockFreePointerFIFOBase<FBaseGraphTask,64,1> *this,FBaseGraphTask *param_1)

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

// ~FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> @ 141a722b0

void __thiscall
FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>::
~FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>
          (FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> *this)

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
      if (((ulonglong)aVar3 & 0x3ffffff) == 0) goto LAB_141a72509;
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
LAB_141a72509:
  FLockFreeLinkPolicy::FreeLockFreeLink(SUB84((this->Head).Ptrs,0) & 0x3ffffff);
  return;
}

// Pop @ 141a8d9c0

FTask * __thiscall
FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>::Pop
          (FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> *this)

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
        return (FTask *)0x0;
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
  return (FTask *)aVar5;
}

// Push @ 141a8e080

void __thiscall
FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>::Push
          (FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> *this,FTask *param_1)

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

// PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_> @ 141afb9c0

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1>::
PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_>
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this,
          TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTestStruct *local_18 [2];
  
  local_18[0] = Pop(this);
  while( true ) {
    if (local_18[0] == (FTestStruct *)0x0) {
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(FTestStruct **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    local_18[0] = Pop(this);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_> @ 141afbac0

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16>::
PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_>
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this,
          TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTestStruct *local_18 [2];
  
  local_18[0] = Pop(this);
  while( true ) {
    if (local_18[0] == (FTestStruct *)0x0) {
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(FTestStruct **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    local_18[0] = Pop(this);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ~FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1> @ 141b29090

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1>::
~FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1>
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this)

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
      if (((ulonglong)aVar3 & 0x3ffffff) == 0) goto LAB_141b292e9;
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
LAB_141b292e9:
  FLockFreeLinkPolicy::FreeLockFreeLink(SUB84((this->Head).Ptrs,0) & 0x3ffffff);
  return;
}

// ~FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16> @ 141b29310

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16>::
~FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16>
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this)

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
      if (((ulonglong)aVar3 & 0x3ffffff) == 0) goto LAB_141b2956b;
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar8 = (((ulonglong)aVar2 >> 0x1a) + 0x10) * 0x4000000;
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
    uVar8 = (((ulonglong)aVar1 >> 0x1a) + 0x10) * 0x4000000;
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
LAB_141b2956b:
  FLockFreeLinkPolicy::FreeLockFreeLink(SUB84((this->Head).Ptrs,0) & 0x3ffffff);
  return;
}

// ~FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1> @ 141b29590

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1>::
~FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1>
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1> *this)

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
      if (((ulonglong)aVar3 & 0x3ffffff) == 0) goto LAB_141b297e9;
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
LAB_141b297e9:
  FLockFreeLinkPolicy::FreeLockFreeLink(SUB84((this->Head).Ptrs,0) & 0x3ffffff);
  return;
}

// Pop @ 141b47330

FTestStruct * __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1>::Pop
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this)

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
        return (FTestStruct *)0x0;
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
  return (FTestStruct *)aVar5;
}

// Pop @ 141b475b0

FTestStruct * __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16>::Pop
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this)

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
        return (FTestStruct *)0x0;
      }
      if (GTestCriticalStalls != 0) {
        DoTestCriticalStall();
      }
      uVar8 = (((ulonglong)aVar2 >> 0x1a) + 0x10) * 0x4000000;
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
    uVar8 = (((ulonglong)aVar1 >> 0x1a) + 0x10) * 0x4000000;
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
  return (FTestStruct *)aVar5;
}

// Pop @ 141b47830

FTestStruct * __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1>::Pop
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1> *this)

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
        return (FTestStruct *)0x0;
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
  return (FTestStruct *)aVar5;
}

// Push @ 141b48410

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1>::Push
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this,FTestStruct *param_1)

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

// Push @ 141b48690

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16>::Push
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this,FTestStruct *param_1)

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
      uVar6 = (((ulonglong)aVar1 >> 0x1a) + 0x10) * 0x4000000;
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
    uVar6 = (((ulonglong)aVar2 >> 0x1a) + 0x10) * 0x4000000;
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
  uVar6 = (((ulonglong)aVar1 >> 0x1a) + 0x10) * 0x4000000;
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

// Push @ 141b48910

void __thiscall
FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1>::Push
          (FLockFreePointerFIFOBase<OldTaskGraphTests::FTestStruct,64,1> *this,FTestStruct *param_1)

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

