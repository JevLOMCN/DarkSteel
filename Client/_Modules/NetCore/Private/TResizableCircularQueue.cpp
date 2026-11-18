// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 17

// TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> @ 1441d0ef0

TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> @ 1441d0f30

TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// ~TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> @ 1441d2d10

void __thiscall
TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> @ 1441d2d90

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Empty @ 1441da650

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::Empty
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if (0xffffffff < (ulonglong)(this->Head - this->Tail) + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->IndexMask = 0xffffffff;
  this->Head = 0;
  this->Tail = 0;
  piVar1 = &(this->Storage).ArrayMax;
  (this->Storage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Storage).AllocatorInstance,0,piVar1);
  }
  return;
}

// Enqueue @ 1441dadb0

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  *(uint *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 4) = *param_1;
  return;
}

// EnqueueDefaulted_GetRef @ 1441dae00

int * __thiscall
TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>::EnqueueDefaulted_GetRef
          (TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar2) {
    SetCapacity(this,uVar2);
  }
  uVar3 = (ulonglong)(this->IndexMask & this->Head);
  this->Head = this->Head + 1;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  *(undefined4 *)(pFVar1 + uVar3 * 4) = 0;
  return (int *)(pFVar1 + uVar3 * 4);
}

// Pop @ 1441e3600

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// PopNoCheck @ 1441e3650

void __thiscall
TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 1441e36b0

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 1441e36c0

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 1441e3720

void __thiscall
TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
::PopNoCheck(void *this,ulong64 param_1)

{
  FStructWithDestructorForResizableCiruclarQueuePopTest *pFVar1;
  FStructWithDestructorForResizableCiruclarQueuePopTest *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar2 = *(FStructWithDestructorForResizableCiruclarQueuePopTest **)((longlong)this + 0x10);
  uVar5 = *(uint *)((longlong)this + 8) & *(uint *)((longlong)this + 4);
  uVar6 = (int)param_1 + *(uint *)((longlong)this + 4) & *(uint *)((longlong)this + 8);
  pFVar1 = pFVar2 + uVar5;
  if (param_1 == 0 || uVar5 < uVar6) {
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
              (pFVar1,param_1);
  }
  else {
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
              (pFVar1,(ulonglong)(*(int *)((longlong)this + 0x18) - uVar5));
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned_int>
              (pFVar2,uVar6);
  }
  if (0xffffffff < *(uint *)((longlong)this + 4) + param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)((longlong)this + 4) = *(int *)((longlong)this + 4) + (int)param_1;
  return;
}

// SetCapacity @ 1441ea840

void __thiscall
TResizableCircularQueue<int,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<int,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 4;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,pFVar3,(longlong)(int)uVar15 << 2);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 4,pFVar3,(longlong)iVar14 << 2);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,_Src,(longlong)(int)uVar13 << 2);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 1441eac00

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 4;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,pFVar3,(longlong)(int)uVar15 << 2);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 4,pFVar3,(longlong)iVar14 << 2);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,_Src,(longlong)(int)uVar13 << 2);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 1441eafc0

void __thiscall
TResizableCircularQueue<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,TSizedDefaultAllocator<32>_>
::SetCapacity(void *this,ulong64 param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar8;
  
  uVar8 = 1;
  if (param_1 != 0) {
    uVar8 = param_1;
  }
  uVar7 = uVar8 - 1;
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  lVar3 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  cVar9 = (char)lVar3;
  if (uVar7 == 0) {
    cVar9 = -1;
  }
  uVar7 = 1L << (0x40U - ('?' - cVar9) & 0x3f);
  iVar15 = *(int *)((longlong)this + 0x18);
  if ((uVar7 != (longlong)iVar15) && ((uint)(*(int *)this - *(int *)((longlong)this + 4)) <= uVar7))
  {
    iVar11 = (int)uVar7;
    if (iVar15 < 1) {
      *(int *)((longlong)this + 8) = iVar11 + -1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,pFVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x1c));
      return;
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (ulonglong)(uint)local_40;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7 & 0xffffffff);
    }
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
              ((FStructWithDestructorForResizableCiruclarQueuePopTest *)0x0,0);
    uVar7 = local_40 >> 0x20;
    local_40 = local_40 & 0xffffffff00000000;
    if ((int)uVar7 != iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_48,0,(int *)((longlong)&local_40 + 4));
    }
    pFVar2 = pFVar1->Data;
    uVar10 = *(uint *)((longlong)this + 8) & *(uint *)((longlong)this + 4);
    uVar12 = *(uint *)((longlong)this + 8) & *(uint *)this;
    uVar14 = *(uint *)this - *(int *)((longlong)this + 4);
    pFVar13 = pFVar2 + (ulonglong)uVar10 * 4;
    if (uVar14 == 0 || uVar10 < uVar12) {
      if (((pFVar13 == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      uVar12 = uVar14;
    }
    else {
      iVar15 = *(int *)((longlong)this + 0x18) - uVar10;
      if (((pFVar13 == (FScriptContainerElement *)0x0) && (iVar15 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      ConstructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
                (local_48.Data + (longlong)iVar6 * 4,
                 (FStructWithDestructorForResizableCiruclarQueuePopTest *)pFVar13,iVar15);
      if (((pFVar2 == (FScriptContainerElement *)0x0) && (uVar12 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar12,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      pFVar13 = pFVar2;
    }
    ConstructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
              (local_48.Data + (longlong)iVar15 * 4,
               (FStructWithDestructorForResizableCiruclarQueuePopTest *)pFVar13,uVar12);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar11 - uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
    if (pFVar1 == &local_48) {
    }
    else {
      DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
                ((FStructWithDestructorForResizableCiruclarQueuePopTest *)pFVar1->Data,
                 *(int *)((longlong)this + 0x18));
      if (pFVar1->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1->Data);
      }
      pFVar1->Data = local_48.Data;
      *(int *)((longlong)this + 0x18) = (uint)local_40;
      *(undefined4 *)((longlong)this + 0x1c) = local_40._4_4_;
      local_40 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = 0;
    }
    *(undefined4 *)((longlong)this + 4) = 0;
    *(int *)((longlong)this + 8) = iVar11 + -1;
    *(uint *)this = uVar14;
    DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
              ((FStructWithDestructorForResizableCiruclarQueuePopTest *)local_48.Data,(uint)local_40
              );
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// SetCapacity @ 1441eb2f0

void __thiscall
TResizableCircularQueue<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::SetCapacity(void *this,ulong64 param_1)

{
  ForAnyElementType *pFVar1;
  TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  int iVar11;
  TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
  *pTVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  lVar3 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  cVar10 = (char)lVar3;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar15 = *(int *)((longlong)this + 0x18);
  if ((uVar8 != (longlong)iVar15) && ((uint)(*(int *)this - *(int *)((longlong)this + 4)) <= uVar8))
  {
    iVar11 = (int)uVar8;
    if (iVar15 < 1) {
      *(int *)((longlong)this + 8) = iVar11 + -1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,pFVar1,(int *)((longlong)this + 0x18),(int *)((longlong)this + 0x1c))
      ;
      return;
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (ulonglong)(uint)local_40;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
    }
    DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
              ((TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
                *)0x0,0);
    uVar8 = local_40 >> 0x20;
    local_40 = local_40 & 0xffffffff00000000;
    if ((int)uVar8 != iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,&local_48,0,(int *)((longlong)&local_40 + 4));
    }
    uVar6 = *(uint *)((longlong)this + 8) & *(uint *)((longlong)this + 4);
    uVar13 = *(uint *)((longlong)this + 8) & *(uint *)this;
    uVar14 = *(uint *)this - *(int *)((longlong)this + 4);
    pTVar2 = (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
              *)pFVar1->Data;
    pTVar12 = pTVar2 + uVar6;
    if (uVar14 == 0 || uVar6 < uVar13) {
      if (((pTVar12 ==
            (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
             *)0x0) && (uVar14 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4))
      ;
      uVar13 = uVar14;
    }
    else {
      iVar15 = *(int *)((longlong)this + 0x18) - uVar6;
      if (((pTVar12 ==
            (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
             *)0x0) && (iVar15 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      ConstructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
                (local_48.Data + (longlong)iVar7 * 0x10,pTVar12,iVar15);
      if (((pTVar2 == (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
                       *)0x0) && (uVar13 != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4))
      ;
      pTVar12 = pTVar2;
    }
    ConstructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
              (local_48.Data + (longlong)iVar15 * 0x10,pTVar12,uVar13);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11 - uVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
    if (pFVar1 == &local_48) {
    }
    else {
      DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
                ((TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
                  *)pFVar1->Data,*(int *)((longlong)this + 0x18));
      if (pFVar1->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1->Data);
      }
      pFVar1->Data = local_48.Data;
      *(int *)((longlong)this + 0x18) = (uint)local_40;
      *(undefined4 *)((longlong)this + 0x1c) = local_40._4_4_;
      local_40 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = 0;
    }
    *(undefined4 *)((longlong)this + 4) = 0;
    *(int *)((longlong)this + 8) = iVar11 + -1;
    *(uint *)this = uVar14;
    DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
              ((TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
                *)local_48.Data,(uint)local_40);
    if ((TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
         *)local_48.Data !=
        (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
         *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// Trim @ 1441eede0

void __thiscall
TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_>::Trim
          (TResizableCircularQueue<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar2 = this->Tail;
  uVar5 = (ulonglong)(this->Head - uVar2);
  if (this->Head != uVar2) {
    SetCapacity(this,uVar5);
    return;
  }
  if (0xffffffff < uVar5 + uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->IndexMask = 0xffffffff;
  this->Head = 0;
  this->Tail = 0;
  piVar1 = &(this->Storage).ArrayMax;
  (this->Storage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Storage).AllocatorInstance,0,piVar1);
    return;
  }
  return;
}

