// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FindOrAddQueueByPriority @ 142322cc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TInternalQueue * __thiscall
TIoPriorityQueue<FEventLoadNode2>::FindOrAddQueueByPriority
          (TIoPriorityQueue<FEventLoadNode2> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TInternalQueue *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TInternalQueue *local_38 [2];
  
  pFVar7 = (this->InternalQueues).AllocatorInstance.Data;
  uVar10 = (this->InternalQueues).ArrayNum;
  uVar11 = 0;
  uVar9 = uVar11;
  if ((int)uVar10 < 1) {
LAB_142322d3e:
    if ((int)uVar9 < (int)uVar10) {
      if (((int)uVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TInternalQueue *)(*pcVar2)();
        return pTVar6;
      }
      lVar8 = (ulonglong)uVar9 * 8;
      if (*(int *)(*(longlong *)((this->InternalQueues).AllocatorInstance.Data + lVar8) + 0x18) ==
          param_1) goto LAB_142322e98;
    }
  }
  else {
    do {
      iVar5 = (uVar10 >> 1) + uVar9;
      pTVar6 = UE::Core::Private::
               DereferenceIfNecessary<TIoPriorityQueue<FEventLoadNode2>::TInternalQueue,TIoPriorityQueue<FEventLoadNode2>::TInternalQueue_*_const_&>
                         ((TInternalQueue **)(pFVar7 + (longlong)iVar5 * 8));
      if (pTVar6->Priority < param_1) {
        uVar9 = iVar5 + (uVar10 & 1);
      }
      uVar3 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar3 != 0);
    uVar10 = (this->InternalQueues).ArrayNum;
    if (-1 < (int)uVar9) goto LAB_142322d3e;
  }
  local_38[0] = this->FirstFreeQueue;
  if (local_38[0] == (TInternalQueue *)0x0) {
    local_38[0] = ::operator_new(0x20);
    if (local_38[0] == (TInternalQueue *)0x0) {
      local_38[0] = (TInternalQueue *)0x0;
    }
    else {
      local_38[0]->NextFree = (TInternalQueue *)0x0;
      local_38[0]->Head = (FEventLoadNode2 *)0x0;
      local_38[0]->Tail = (FEventLoadNode2 *)0x0;
      local_38[0]->Priority = param_1;
    }
  }
  else {
    this->FirstFreeQueue = local_38[0]->NextFree;
    local_38[0]->NextFree = (TInternalQueue *)0x0;
    local_38[0]->Priority = param_1;
  }
  pFVar7 = (this->InternalQueues).AllocatorInstance.Data;
  if (((pFVar7 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar7 + (longlong)(this->InternalQueues).ArrayMax * 8)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TInternalQueue *)(*pcVar2)();
    return pTVar6;
  }
  iVar5 = (this->InternalQueues).ArrayNum;
  piVar1 = &(this->InternalQueues).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar7 = (this->InternalQueues).AllocatorInstance.Data;
  (this->InternalQueues).ArrayNum = iVar5 + 1;
  lVar8 = (longlong)(int)uVar9 * 8;
  pFVar7 = pFVar7 + lVar8;
  memmove(pFVar7 + 8,pFVar7,(longlong)(int)(iVar5 - uVar9) << 3);
  *(TInternalQueue **)((this->InternalQueues).AllocatorInstance.Data + lVar8) = local_38[0];
LAB_142322e98:
  if ((int)uVar9 < (this->InternalQueues).ArrayNum) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TInternalQueue *)(*pcVar2)();
    return pTVar6;
  }
  return *(TInternalQueue **)((this->InternalQueues).AllocatorInstance.Data + lVar8);
}

// FindQueueByPriority @ 142323720

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TInternalQueue * __thiscall
TIoPriorityQueue<FEventLoadNode2>::FindQueueByPriority
          (TIoPriorityQueue<FEventLoadNode2> *this,int param_1,int *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TInternalQueue *pTVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (this->InternalQueues).ArrayNum;
  pFVar2 = (this->InternalQueues).AllocatorInstance.Data;
  uVar7 = 0;
  if (0 < (int)uVar8) {
    do {
      iVar1 = (uVar8 >> 1) + uVar7;
      pTVar6 = UE::Core::Private::
               DereferenceIfNecessary<TIoPriorityQueue<FEventLoadNode2>::TInternalQueue,TIoPriorityQueue<FEventLoadNode2>::TInternalQueue_*_const_&>
                         ((TInternalQueue **)(pFVar2 + (longlong)iVar1 * 8));
      if (pTVar6->Priority < param_1) {
        uVar7 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
    if ((int)uVar7 < 0) {
      return (TInternalQueue *)0x0;
    }
  }
  if ((int)uVar7 < (this->InternalQueues).ArrayNum) {
    if (((int)uVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInternalQueue *)(*pcVar3)();
      return pTVar6;
    }
    if (*(int *)(*(longlong *)((this->InternalQueues).AllocatorInstance.Data + (ulonglong)uVar7 * 8)
                + 0x18) == param_1) {
      *param_2 = uVar7;
      uVar8 = 0;
      if ((int)uVar7 < (this->InternalQueues).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TInternalQueue *)(*pcVar3)();
        return pTVar6;
      }
      return *(TInternalQueue **)
              ((this->InternalQueues).AllocatorInstance.Data + (ulonglong)uVar7 * 8);
    }
  }
  return (TInternalQueue *)0x0;
}

// GetMaxPriority @ 142326c60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(TIoPriorityQueue<FEventLoadNode2> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (this->InternalQueues).ArrayNum;
  if (iVar4 == 0) {
    return -0x80000000;
  }
  uVar3 = 0;
  if ((int)(iVar4 - 1U) < iVar4) {
    uVar3 = ~(iVar4 - 1U) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)(*(longlong *)
                   ((this->InternalQueues).AllocatorInstance.Data +
                   (longlong)(this->InternalQueues).ArrayNum * 8 + -8) + 0x18);
}

// Pop @ 14232eb90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FEventLoadNode2 * __thiscall
TIoPriorityQueue<FEventLoadNode2>::Pop(TIoPriorityQueue<FEventLoadNode2> *this)

{
  int iVar1;
  longlong lVar2;
  FEventLoadNode2 *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FEventLoadNode2 *pFVar7;
  uint uVar8;
  
  iVar1 = (this->InternalQueues).ArrayNum;
  if (iVar1 == 0) {
    return (FEventLoadNode2 *)0x0;
  }
  uVar8 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar1) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventLoadNode2 *)(*pcVar4)();
      return pFVar7;
    }
  }
  lVar2 = *(longlong *)((this->InternalQueues).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  if (lVar2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueueWithHighestPriority",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0xb4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventLoadNode2 *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (*(longlong *)(lVar2 + 8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueueWithHighestPriority->Head",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0xb5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventLoadNode2 *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueueWithHighestPriority->Tail",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0xb6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventLoadNode2 *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar7 = *(FEventLoadNode2 **)(lVar2 + 8);
  if (pFVar7 == (FEventLoadNode2 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Item",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0xb9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventLoadNode2 *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (pFVar7->Priority != *(int *)(lVar2 + 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Item->Priority == QueueWithHighestPriority->Priority",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FEventLoadNode2 *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = pFVar7->Next;
  if (pFVar3 == (FEventLoadNode2 *)0x0) {
    if (pFVar7 != *(FEventLoadNode2 **)(lVar2 + 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Item == QueueWithHighestPriority->Tail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                         ,0xc3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FEventLoadNode2 *)(*pcVar4)();
        return pFVar7;
      }
    }
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    RemoveQueueAtIndex(this,uVar8);
  }
  else {
    pFVar3->Prev = (FEventLoadNode2 *)0x0;
    *(FEventLoadNode2 **)(lVar2 + 8) = pFVar3;
  }
  pFVar7->Next = (FEventLoadNode2 *)0x0;
  pFVar7->Prev = (FEventLoadNode2 *)0x0;
  return pFVar7;
}

// Push @ 142336af0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TIoPriorityQueue<FEventLoadNode2>::Push
          (TIoPriorityQueue<FEventLoadNode2> *this,FEventLoadNode2 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TInternalQueue *pTVar3;
  
  if (param_1->Prev != (FEventLoadNode2 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Item->Prev",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->Next != (FEventLoadNode2 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Item->Next",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->Priority = param_2;
  pTVar3 = FindOrAddQueueByPriority(this,param_2);
  if (pTVar3->Head == (FEventLoadNode2 *)0x0) {
    if (pTVar3->Tail != (FEventLoadNode2 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Queue.Tail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                         ,0xa1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar3->Head = param_1;
  }
  else {
    param_1->Prev = pTVar3->Tail;
    pTVar3->Tail->Next = param_1;
  }
  pTVar3->Tail = param_1;
  return;
}

// RemoveQueueAtIndex @ 14233a480

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TIoPriorityQueue<FEventLoadNode2>::RemoveQueueAtIndex
          (TIoPriorityQueue<FEventLoadNode2> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  TInternalQueue *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->InternalQueues).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = *(TInternalQueue **)
            ((this->InternalQueues).AllocatorInstance.Data + (longlong)param_1 * 8);
  if (pTVar2->Head != (FEventLoadNode2 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InternalQueue->Head",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0x142,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar2->Tail != (FEventLoadNode2 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InternalQueue->Tail",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0x143,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2->NextFree = this->FirstFreeQueue;
  this->FirstFreeQueue = pTVar2;
  uVar5 = 0;
  if (param_1 < (this->InternalQueues).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _Dst = (this->InternalQueues).AllocatorInstance.Data + (longlong)param_1 * 8;
  iVar6 = (this->InternalQueues).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
  }
  piVar1 = &(this->InternalQueues).ArrayNum;
  *piVar1 = *piVar1 + -1;
  return;
}

// Reprioritize @ 14233ae20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TIoPriorityQueue<FEventLoadNode2>::Reprioritize
          (TIoPriorityQueue<FEventLoadNode2> *this,FEventLoadNode2 *param_1,int param_2)

{
  FEventLoadNode2 *pFVar1;
  FEventLoadNode2 *pFVar2;
  code *pcVar3;
  bool bVar4;
  TInternalQueue *pTVar5;
  int local_res18 [4];
  
  pFVar1 = param_1->Prev;
  if ((pFVar1 != (FEventLoadNode2 *)0x0) &&
     (pFVar2 = param_1->Next, pFVar2 != (FEventLoadNode2 *)0x0)) {
    param_1->Prev = (FEventLoadNode2 *)0x0;
    param_1->Next = (FEventLoadNode2 *)0x0;
    pFVar1->Next = pFVar2;
    pFVar2->Prev = pFVar1;
    goto LAB_14233af0f;
  }
  pTVar5 = FindQueueByPriority(this,param_1->Priority,local_res18);
  if (pTVar5 == (TInternalQueue *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalQueue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0xdf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->Prev;
  pFVar2 = param_1->Next;
  param_1->Prev = (FEventLoadNode2 *)0x0;
  param_1->Next = (FEventLoadNode2 *)0x0;
  if (pFVar1 == (FEventLoadNode2 *)0x0) {
    pTVar5->Head = pFVar2;
    if (pFVar2 == (FEventLoadNode2 *)0x0) goto LAB_14233aecd;
    pFVar2->Prev = (FEventLoadNode2 *)0x0;
  }
  else {
    if (pFVar2 != (FEventLoadNode2 *)0x0) {
      pFVar1->Next = pFVar2;
      pFVar2->Prev = pFVar1;
      goto LAB_14233af0f;
    }
    pFVar1->Next = (FEventLoadNode2 *)0x0;
LAB_14233aecd:
    pTVar5->Tail = pFVar1;
  }
  if (pTVar5->Head == (FEventLoadNode2 *)0x0) {
    if (pTVar5->Tail != (FEventLoadNode2 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Tail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                         ,0x34,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    RemoveQueueAtIndex(this,local_res18[0]);
  }
LAB_14233af0f:
  if (param_1->Prev != (FEventLoadNode2 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Item->Prev",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Next != (FEventLoadNode2 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Item->Next",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                       ,0x9c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->Priority = param_2;
  pTVar5 = FindOrAddQueueByPriority(this,param_2);
  if (pTVar5->Head == (FEventLoadNode2 *)0x0) {
    if (pTVar5->Tail != (FEventLoadNode2 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Queue.Tail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                         ,0xa1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar5->Head = param_1;
  }
  else {
    param_1->Prev = pTVar5->Tail;
    pTVar5->Tail->Next = param_1;
  }
  pTVar5->Tail = param_1;
  return;
}

