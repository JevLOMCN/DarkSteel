// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// ~FLockFreePointerListLIFOBase<void_*,64,1> @ 14147fe70

void __thiscall
FLockFreePointerListLIFOBase<void_*,64,1>::~FLockFreePointerListLIFOBase<void_*,64,1>
          (FLockFreePointerListLIFOBase<void_*,64,1> *this)

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

// Pop @ 1414a80c0

void ** __thiscall
FLockFreePointerListLIFOBase<void_*,64,1>::Pop(FLockFreePointerListLIFOBase<void_*,64,1> *this)

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
      return (void **)0x0;
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
  return (void **)aVar4;
}

// ~FLockFreePointerListLIFOBase<IAsyncReadRequest,64,1> @ 141588050

void __thiscall
FLockFreePointerListLIFOBase<IAsyncReadRequest,64,1>::
~FLockFreePointerListLIFOBase<IAsyncReadRequest,64,1>
          (FLockFreePointerListLIFOBase<IAsyncReadRequest,64,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  LockFreeLinkAllocator_TLSCache *this_00;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    this_00 = GetLockFreeAllocator();
    LockFreeLinkAllocator_TLSCache::Push(this_00,uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// ~FLockFreePointerListLIFOBase<FEvent,64,1> @ 14161fc80

void __thiscall
FLockFreePointerListLIFOBase<FEvent,64,1>::~FLockFreePointerListLIFOBase<FEvent,64,1>
          (FLockFreePointerListLIFOBase<FEvent,64,1> *this)

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

// Pop @ 141650340

FEvent * __thiscall
FLockFreePointerListLIFOBase<FEvent,64,1>::Pop(FLockFreePointerListLIFOBase<FEvent,64,1> *this)

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
      return (FEvent *)0x0;
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
  return (FEvent *)aVar4;
}

// ~FLockFreePointerListLIFOBase<void,64,1> @ 1416d7970

void __thiscall
FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
          (FLockFreePointerListLIFOBase<void,64,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// ~FLockFreePointerListLIFOBase<void,0,1> @ 1419d0850

void __thiscall
FLockFreePointerListLIFOBase<void,0,1>::~FLockFreePointerListLIFOBase<void,0,1>
          (FLockFreePointerListLIFOBase<void,0,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<0,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// Pop @ 141ab9c70

void * __thiscall
FLockFreePointerListLIFOBase<void,64,1>::Pop(FLockFreePointerListLIFOBase<void,64,1> *this)

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
      return (void *)0x0;
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
  return (void *)aVar4;
}

// PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_> @ 141afbbc0

void __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1>::
PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_>
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this,
          TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  FIndexedLockFreeLink *pFVar3;
  atomic<void_*> *paVar4;
  code *pcVar5;
  int iVar6;
  atomic<unsigned___int64> aVar7;
  atomic<unsigned_int> aVar8;
  bool bVar9;
  atomic<void_*> local_38 [2];
  
  do {
    aVar2 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    aVar8 = (atomic<unsigned_int>)(aVar2._0_4_ & 0x3ffffff);
    if (((ulonglong)aVar2 & 0x3ffffff) == 0) break;
    aVar7 = (atomic<unsigned___int64>)((((ulonglong)aVar2 >> 0x1a) + 1) * 0x4000000);
    if ((ulonglong)aVar7 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar9 = aVar2 == (this->RootList).Head.Ptrs;
    if (bVar9) {
      (this->RootList).Head.Ptrs = aVar7;
    }
    UNLOCK();
  } while (!bVar9);
  if (((ulonglong)aVar2 & 0x3ffffff) != 0) {
    do {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uint)aVar8 >> 0xe];
      local_38[0] = pFVar3[(uint)aVar8 & 0x3fff].Payload;
      paVar4 = (atomic<void_*> *)(param_1->AllocatorInstance).Data;
      if (((paVar4 <= local_38) && (local_38 < paVar4 + param_1->ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(atomic<void_*> *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_38[0];
      aVar1 = pFVar3[(uint)aVar8 & 0x3fff].SingleNext;
      FLockFreeLinkPolicy::FreeLockFreeLink((uint)aVar8);
      aVar8 = aVar1;
    } while (aVar1 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_> @ 141afbda0

void __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16>::
PopAll<TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_>_>
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this,
          TArray<OldTaskGraphTests::FTestStruct_*,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  FIndexedLockFreeLink *pFVar3;
  atomic<void_*> *paVar4;
  code *pcVar5;
  int iVar6;
  atomic<unsigned___int64> aVar7;
  atomic<unsigned_int> aVar8;
  bool bVar9;
  atomic<void_*> local_38 [2];
  
  do {
    aVar2 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    aVar8 = (atomic<unsigned_int>)(aVar2._0_4_ & 0x3ffffff);
    if (((ulonglong)aVar2 & 0x3ffffff) == 0) break;
    aVar7 = (atomic<unsigned___int64>)((((ulonglong)aVar2 >> 0x1a) + 0x10) * 0x4000000);
    if ((ulonglong)aVar7 < ((ulonglong)aVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar9 = aVar2 == (this->RootList).Head.Ptrs;
    if (bVar9) {
      (this->RootList).Head.Ptrs = aVar7;
    }
    UNLOCK();
  } while (!bVar9);
  if (((ulonglong)aVar2 & 0x3ffffff) != 0) {
    do {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uint)aVar8 >> 0xe];
      local_38[0] = pFVar3[(uint)aVar8 & 0x3fff].Payload;
      paVar4 = (atomic<void_*> *)(param_1->AllocatorInstance).Data;
      if (((paVar4 <= local_38) && (local_38 < paVar4 + param_1->ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(atomic<void_*> *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_38[0];
      aVar1 = pFVar3[(uint)aVar8 & 0x3fff].SingleNext;
      FLockFreeLinkPolicy::FreeLockFreeLink((uint)aVar8);
      aVar8 = aVar1;
    } while (aVar1 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// PopAllAndChangeState<TArray<void_*,TSizedDefaultAllocator<32>_>_> @ 141afbf90

void __thiscall
FLockFreePointerListLIFOBase<void,0,2>::
PopAllAndChangeState<TArray<void_*,TSizedDefaultAllocator<32>_>_>
          (FLockFreePointerListLIFOBase<void,0,2> *this,
          TArray<void_*,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<unsigned___int64___cdecl(unsigned___int64)> *param_2)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  undefined8 uVar3;
  atomic<unsigned___int64> aVar4;
  FIndexedLockFreeLink *pFVar5;
  atomic<void_*> *paVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  atomic<unsigned_int> aVar10;
  bool bVar11;
  ulonglong local_res20;
  atomic<void_*> local_38 [2];
  
  pcVar2 = *(code **)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    aVar4 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    aVar10 = (atomic<unsigned_int>)(aVar4._0_4_ & 0x3ffffff);
    uVar9 = (((ulonglong)aVar4 >> 0x1a) + 2) * 0x4000000;
    if (uVar9 < ((ulonglong)aVar4 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    local_res20 = (ulonglong)((uint)((ulonglong)aVar4 >> 0x1a) & 1);
    lVar8 = (*pcVar2)(uVar3,&local_res20);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar11 = aVar4 == (this->RootList).Head.Ptrs;
    if (bVar11) {
      (this->RootList).Head.Ptrs =
           (atomic<unsigned___int64>)(lVar8 << 0x1a | uVar9 & 0xfffffffff8000000);
    }
    UNLOCK();
  } while (!bVar11);
  if (((ulonglong)aVar4 & 0x3ffffff) != 0) {
    do {
      pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[(uint)aVar10 >> 0xe];
      local_38[0] = pFVar5[(uint)aVar10 & 0x3fff].Payload;
      paVar6 = (atomic<void_*> *)(param_1->AllocatorInstance).Data;
      if (((paVar6 <= local_38) && (local_38 < paVar6 + param_1->ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(atomic<void_*> *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
      aVar1 = pFVar5[(uint)aVar10 & 0x3fff].SingleNext;
      FLockFreeLinkPolicy::FreeLockFreeLink((uint)aVar10);
      aVar10 = aVar1;
    } while (aVar1 != (atomic<unsigned_int>)0x0);
  }
  return;
}

// ~FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1> @ 141b29810

void __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1>::
~FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1>
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this)

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

// ~FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16> @ 141b29940

void __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16>::
~FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16>
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this)

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
    uVar5 = (((ulonglong)aVar2 >> 0x1a) + 0x10) * 0x4000000;
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

// ~FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,64,1> @ 141b29a70

void __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,64,1>::
~FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,64,1>
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,64,1> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop(&this->RootList);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// ~FLockFreePointerListLIFOBase<void,0,2> @ 141b29ae0

void __thiscall
FLockFreePointerListLIFOBase<void,0,2>::~FLockFreePointerListLIFOBase<void,0,2>
          (FLockFreePointerListLIFOBase<void,0,2> *this)

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
    uVar5 = (((ulonglong)aVar2 >> 0x1a) + 2) * 0x4000000;
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

// operator() @ 141b2d930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
`FLockFreePointerListLIFOBase<void,0,2>::PushIf'::__l2::<lambda_1>::operator()
          (void *this,ulong64 param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  ulong64 local_res8;
  
  local_res8 = param_1;
  cVar2 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_res8);
  if (cVar2 == '\0') {
    return 0;
  }
  puVar1 = *(uint **)((longlong)this + 0x10);
  if (*puVar1 == 0) {
    uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
    *puVar1 = uVar3;
    uVar3 = **(uint **)((longlong)this + 0x10);
    if (uVar3 == 0) {
      _DAT_00000008 = *(undefined8 *)((longlong)this + 8);
      return **(uint **)((longlong)this + 0x10);
    }
    FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe][uVar3 & 0x3fff].Payload =
         *(atomic<void_*> *)((longlong)this + 8);
  }
  return **(uint **)((longlong)this + 0x10);
}

// Pop @ 141b47ab0

FTestStruct * __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1>::Pop
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this)

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
      return (FTestStruct *)0x0;
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
  return (FTestStruct *)aVar4;
}

// Pop @ 141b47bf0

FTestStruct * __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16>::Pop
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this)

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
      return (FTestStruct *)0x0;
    }
    uVar5 = (((ulonglong)aVar2 >> 0x1a) + 0x10) * 0x4000000;
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
  return (FTestStruct *)aVar4;
}

// Push @ 141b48b90

void __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1>::Push
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,1> *this,
          FTestStruct *param_1)

{
  atomic<unsigned___int64> aVar1;
  uint uVar2;
  FIndexedLockFreeLink *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  uVar5 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    pFVar3 = (FIndexedLockFreeLink *)0x0;
    uVar5 = 0;
  }
  else {
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
  }
  pFVar3->Payload = (atomic<void_*>)param_1;
  do {
    aVar1 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar4 = (((ulonglong)aVar1 >> 0x1a) + 1) * 0x4000000;
    if (uVar4 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (uVar2 == 0) {
      pFVar3 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + ((uint)uVar5 & 0x3fff);
    }
    pFVar3->SingleNext = (atomic<unsigned_int>)(aVar1._0_4_ & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar6 = aVar1 == (this->RootList).Head.Ptrs;
    if (bVar6) {
      (this->RootList).Head.Ptrs = (atomic<unsigned___int64>)(uVar4 | uVar5);
    }
    UNLOCK();
  } while (!bVar6);
  return;
}

// Push @ 141b48ce0

void __thiscall
FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16>::Push
          (FLockFreePointerListLIFOBase<OldTaskGraphTests::FTestStruct,8,16> *this,
          FTestStruct *param_1)

{
  atomic<unsigned___int64> aVar1;
  uint uVar2;
  FIndexedLockFreeLink *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  uVar5 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    pFVar3 = (FIndexedLockFreeLink *)0x0;
    uVar5 = 0;
  }
  else {
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
  }
  pFVar3->Payload = (atomic<void_*>)param_1;
  do {
    aVar1 = (this->RootList).Head.Ptrs;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar4 = (((ulonglong)aVar1 >> 0x1a) + 0x10) * 0x4000000;
    if (uVar4 < ((ulonglong)aVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (uVar2 == 0) {
      pFVar3 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + ((uint)uVar5 & 0x3fff);
    }
    pFVar3->SingleNext = (atomic<unsigned_int>)(aVar1._0_4_ & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar6 = aVar1 == (this->RootList).Head.Ptrs;
    if (bVar6) {
      (this->RootList).Head.Ptrs = (atomic<unsigned___int64>)(uVar4 | uVar5);
    }
    UNLOCK();
  } while (!bVar6);
  return;
}

