// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FThreadPoolPriorityQueue @ 1416d7830

FThreadPoolPriorityQueue * __thiscall
FThreadPoolPriorityQueue::FThreadPoolPriorityQueue(FThreadPoolPriorityQueue *this)

{
  this->FirstNonEmptyQueueIndex = 0;
  (this->PriorityQueuedWork).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0;
  (this->PriorityQueuedWork).ArrayNum = 0;
  *(undefined8 *)&(this->PriorityQueuedWork).ArrayMax = 6;
  return this;
}

// Dequeue @ 1416ea190

IQueuedWork * __thiscall
FThreadPoolPriorityQueue::Dequeue(FThreadPoolPriorityQueue *this,EQueuedWorkPriority *param_1)

{
  int iVar1;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar2;
  undefined8 *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IQueuedWork *pIVar6;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar8 = this->FirstNonEmptyQueueIndex;
  iVar1 = (this->PriorityQueuedWork).ArrayNum;
  if (iVar1 <= (int)uVar8) {
    return (IQueuedWork *)0x0;
  }
  while( true ) {
    uVar5 = 0;
    if ((int)uVar8 < (this->PriorityQueuedWork).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (IQueuedWork *)(*pcVar3)();
      return pIVar6;
    }
    FVar2 = (this->PriorityQueuedWork).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
            &this->PriorityQueuedWork;
    if (FVar2 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
      FVar7 = FVar2;
    }
    puVar9 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + (longlong)FVar7);
    if (0 < *(int *)(puVar9 + 1)) break;
    uVar8 = uVar8 + 1;
    if (iVar1 <= (int)uVar8) {
      return (IQueuedWork *)0x0;
    }
  }
  _Dst = (undefined8 *)*puVar9;
  pIVar6 = (IQueuedWork *)*_Dst;
  if (*(int *)(puVar9 + 1) + -1 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)(*(int *)(puVar9 + 1) + -1) << 3);
  }
  *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + -1;
  this->FirstNonEmptyQueueIndex = uVar8;
  LOCK();
  this->NumQueuedWork = (TAtomic<int>)((int)this->NumQueuedWork + -1);
  UNLOCK();
  if (param_1 == (EQueuedWorkPriority *)0x0) {
    return pIVar6;
  }
  *param_1 = (EQueuedWorkPriority)uVar8;
  return pIVar6;
}

// Enqueue @ 1416ec830

void __thiscall
FThreadPoolPriorityQueue::Enqueue
          (FThreadPoolPriorityQueue *this,IQueuedWork *param_1,EQueuedWorkPriority param_2)

{
  TArray<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar6;
  ForAnyElementType *pFVar7;
  int iVar8;
  uint uVar9;
  IQueuedWork *local_res10;
  
  iVar5 = (this->PriorityQueuedWork).ArrayNum;
  piVar1 = &(this->PriorityQueuedWork).ArrayNum;
  uVar9 = (uint)param_2;
  local_res10 = param_1;
  if (iVar5 <= (int)uVar9) {
    iVar8 = uVar9 + 1;
    this_00 = &this->PriorityQueuedWork;
    if (iVar5 < iVar8) {
      iVar4 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>_>
                        (0x10,8,iVar8 - iVar5,&this_00->AllocatorInstance,piVar1,
                         &(this->PriorityQueuedWork).ArrayMax);
      FVar6 = (this->PriorityQueuedWork).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
        FVar6 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)this_00;
      }
      memset((void *)((longlong)FVar6 + (longlong)iVar4 * 0x10),0,(longlong)(iVar8 - iVar5) << 4);
    }
    else if (iVar8 < iVar5) {
      iVar5 = iVar5 - iVar8;
      if (iVar5 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else if (iVar5 == 0) goto LAB_1416ec938;
      TArray<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(this_00,iVar8,iVar5);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>_>
                (0x10,8,&this_00->AllocatorInstance,(this->PriorityQueuedWork).ArrayNum,
                 &(this->PriorityQueuedWork).ArrayMax);
    }
  }
LAB_1416ec938:
  LOCK();
  this->NumQueuedWork = (TAtomic<int>)((int)this->NumQueuedWork + 1);
  UNLOCK();
  if ((int)uVar9 < this->FirstNonEmptyQueueIndex) {
    this->FirstNonEmptyQueueIndex = (uint)param_2;
  }
  if ((*piVar1 <= (int)(uint)param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar6 = (this->PriorityQueuedWork).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FVar6 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
            &this->PriorityQueuedWork;
  }
  pFVar7 = (ForAnyElementType *)((ulonglong)param_2 * 0x10 + (longlong)FVar6);
  if (((pFVar7->Data <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)&pFVar7[1].Data;
  piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar7,piVar1);
  }
  *(int *)&pFVar7[1].Data = iVar5 + 1;
  *(IQueuedWork **)(pFVar7->Data + (longlong)iVar5 * 8) = local_res10;
  return;
}

// Peek @ 141707fb0

IQueuedWork * __thiscall
FThreadPoolPriorityQueue::Peek(FThreadPoolPriorityQueue *this,EQueuedWorkPriority *param_1)

{
  int iVar1;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IQueuedWork *pIVar6;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar7;
  uint uVar8;
  
  uVar8 = this->FirstNonEmptyQueueIndex;
  iVar1 = (this->PriorityQueuedWork).ArrayNum;
  if (iVar1 <= (int)uVar8) {
    return (IQueuedWork *)0x0;
  }
  while( true ) {
    uVar5 = 0;
    if ((int)uVar8 < (this->PriorityQueuedWork).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (IQueuedWork *)(*pcVar3)();
      return pIVar6;
    }
    FVar2 = (this->PriorityQueuedWork).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
            &this->PriorityQueuedWork;
    if (FVar2 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
      FVar7 = FVar2;
    }
    if (0 < *(int *)((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x10)) break;
    uVar8 = uVar8 + 1;
    if (iVar1 <= (int)uVar8) {
      return (IQueuedWork *)0x0;
    }
  }
  pIVar6 = (IQueuedWork *)**(undefined8 **)((longlong)FVar7 + (longlong)(int)uVar8 * 0x10);
  if (param_1 == (EQueuedWorkPriority *)0x0) {
    return pIVar6;
  }
  *param_1 = (EQueuedWorkPriority)uVar8;
  return pIVar6;
}

// Reset @ 14170da50

void __thiscall FThreadPoolPriorityQueue::Reset(FThreadPoolPriorityQueue *this)

{
  int *piVar1;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar2;
  
  FVar2 = (this->PriorityQueuedWork).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FVar2 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
            &this->PriorityQueuedWork;
  }
  DestructItems<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_> *)FVar2,
             (this->PriorityQueuedWork).ArrayNum);
  piVar1 = &(this->PriorityQueuedWork).ArrayMax;
  (this->PriorityQueuedWork).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>_>
              (0x10,8,0,&(this->PriorityQueuedWork).AllocatorInstance,0,piVar1);
  }
  this->FirstNonEmptyQueueIndex = 0;
  LOCK();
  this->NumQueuedWork = (TAtomic<int>)0x0;
  UNLOCK();
  return;
}

// Retract @ 14170ee20

bool __thiscall
FThreadPoolPriorityQueue::Retract(FThreadPoolPriorityQueue *this,IQueuedWork *param_1)

{
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar15;
  
  uVar10 = (ulonglong)this->FirstNonEmptyQueueIndex;
  lVar11 = (longlong)(this->PriorityQueuedWork).ArrayNum;
  if ((longlong)uVar10 < lVar11) {
    lVar13 = uVar10 << 4;
    uVar12 = uVar10;
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (this->PriorityQueuedWork).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar1 = (this->PriorityQueuedWork).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
               &this->PriorityQueuedWork;
      if (FVar1 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
        FVar15 = FVar1;
      }
      plVar14 = (longlong *)((longlong)FVar15 + lVar13);
      plVar2 = (longlong *)*plVar14;
      for (plVar8 = plVar2; plVar8 != plVar2 + (int)plVar14[1]; plVar8 = plVar8 + 1) {
        if ((IQueuedWork *)*plVar8 == param_1) {
          iVar7 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
          if (iVar7 != -1) {
            memmove(plVar2 + iVar7,plVar2 + iVar7 + 1,
                    (longlong)(((int)plVar14[1] - iVar7) + -1) << 3);
            *(int *)(plVar14 + 1) = (int)plVar14[1] + -1;
            LOCK();
            this->NumQueuedWork = (TAtomic<int>)((int)this->NumQueuedWork + -1);
            UNLOCK();
            return true;
          }
          break;
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x10;
    } while ((longlong)uVar12 < lVar11);
  }
  return false;
}

// Sort @ 141712ab0

void __thiscall
FThreadPoolPriorityQueue::Sort
          (FThreadPoolPriorityQueue *this,EQueuedWorkPriority param_1,
          TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)> *param_2)

{
  undefined8 *puVar1;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar2;
  FIdentityFunctor local_res10;
  TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)> local_18;
  
  if ((int)(uint)param_1 < (this->PriorityQueuedWork).ArrayNum) {
    FVar2 = (this->PriorityQueuedWork).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
      FVar2 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
              &this->PriorityQueuedWork;
    }
    local_18._0_8_ = *(undefined8 *)param_2;
    puVar1 = (undefined8 *)((ulonglong)param_1 * 0x10 + (longlong)FVar2);
    local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
    AlgoImpl::
    IntroSortInternal<IQueuedWork_*,int,FIdentityFunctor,TFunctionRef<bool___cdecl(IQueuedWork_const_*,IQueuedWork_const_*)>_>
              ((IQueuedWork **)*puVar1,*(int *)(puVar1 + 1),local_res10,&local_18);
  }
  return;
}

