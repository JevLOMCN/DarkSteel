// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0> @ 1447e6ea0

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>
          (FTaskBase *this,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1,bool param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_char> *this_00;
  FMutex *pFVar3;
  FMutex FVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  ForElementType<UE::Tasks::Private::FTaskHandle> FVar8;
  longlong lVar9;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar15;
  int iVar16;
  ForElementType<UE::Tasks::Private::FTaskBase_*> *pFVar17;
  undefined1 local_res20 [8];
  
  iVar7 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (0 < iVar7) {
    if (((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0x118,L"Prerequisites can be added only before the task is launched"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    LOCK();
    paVar2 = &this->NumLocks;
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + iVar7);
    UNLOCK();
    FVar8 = (param_1->AllocatorInstance).SecondaryData;
    iVar16 = 0;
    bVar12 = false;
    iVar7 = *piVar1;
    if (FVar8 != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      param_1 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar8;
    }
    FVar8 = (ForElementType<UE::Tasks::Private::FTaskHandle>)
            ((longlong)param_1 + (longlong)iVar7 * 8);
    while( true ) {
      if (*piVar1 != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if ((ForElementType<UE::Tasks::Private::FTaskHandle>)param_1 == FVar8) break;
      lVar9 = *(longlong *)param_1;
      if ((lVar9 == 0) || (*(char *)(lVar9 + 0xd0) != '\0')) {
LAB_1447e6fd2:
        iVar16 = iVar16 + 1;
      }
      else {
        this_00 = (atomic<unsigned_char> *)(lVar9 + 0xd1);
        LOCK();
        FVar4.State = *this_00;
        if (FVar4.State == (atomic<unsigned_char>)0x0) {
          *this_00 = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (FVar4.State != (atomic<unsigned_char>)0x0) {
          FMutex::LockSlow((FMutex *)this_00);
        }
        if (*(char *)(lVar9 + 0xd0) != '\0') {
          LOCK();
          aVar5 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar5 & 2) != 0) {
            FMutex::WakeWaitingThread((FMutex *)this_00);
          }
          goto LAB_1447e6fd2;
        }
        iVar14 = *(int *)(lVar9 + 200);
        if (iVar14 == *(int *)(lVar9 + 0xcc)) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    (lVar9 + 0xb8),(int *)(lVar9 + 0xcc));
        }
        *(int *)(lVar9 + 200) = iVar14 + 1;
        pFVar17 = (ForElementType<UE::Tasks::Private::FTaskBase_*> *)(lVar9 + 0xb8);
        if (*(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar9 + 0xc0) !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*> *)0x0) {
          pFVar17 = *(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar9 + 0xc0);
        }
        *(FTaskBase **)(pFVar17->InlineData + (longlong)iVar14 * 8) = this;
        LOCK();
        aVar5 = *this_00;
        *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
        UNLOCK();
        if (((byte)aVar5 & 2) != 0) {
          FMutex::WakeWaitingThread((FMutex *)this_00);
        }
        TaskTrace::SubsequentAdded(*(ulong64 *)(lVar9 + 0x50),(ulong64)this->TraceId);
        LOCK();
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
        UNLOCK();
        if (param_2 != false) {
          pFVar3 = &(this->Prerequisites).Mutex;
          LOCK();
          bVar12 = pFVar3->State == (atomic<unsigned_char>)0x0;
          if (bVar12) {
            pFVar3->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar12) {
            FMutex::LockSlow(pFVar3);
          }
          param_2 = false;
          bVar12 = true;
        }
        iVar14 = (this->Prerequisites).Prerequisites.ArrayNum;
        if (iVar14 == (this->Prerequisites).Prerequisites.ArrayMax) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    &this->Prerequisites,
                              &(this->Prerequisites).Prerequisites.ArrayMax);
        }
        (this->Prerequisites).Prerequisites.ArrayNum = iVar14 + 1;
        FVar10 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
        if (FVar10 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          FVar15 = FVar10;
        }
        *(longlong *)((longlong)FVar15 + (longlong)iVar14 * 8) = lVar9;
      }
      param_1 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)param_1 + 8);
    }
    if ((0x7fffffff < (uint)((int)aVar6 + *piVar1)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0x152,L"Max number of nested tasks reached: %d"), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (bVar12) {
      pFVar3 = &(this->Prerequisites).Mutex;
      LOCK();
      aVar5 = pFVar3->State;
      pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
      UNLOCK();
      if (((byte)aVar5 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar3);
      }
    }
    if (iVar16 != 0) {
      LOCK();
      this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar16);
      UNLOCK();
    }
  }
  return;
}

// AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0> @ 1448dc090

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0>
          (FTaskBase *this,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *param_1,
          bool param_2)

{
  atomic<unsigned_int> *paVar1;
  FMutex *pFVar2;
  int *piVar3;
  FTaskHandle *pFVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  FTaskBase *pFVar7;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar12;
  int iVar13;
  FTaskHandle *pFVar14;
  bool bVar15;
  
  iVar13 = param_1->ArrayNum;
  if (0 < iVar13) {
    if (((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0x118,L"Prerequisites can be added only before the task is launched"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    paVar1 = &this->NumLocks;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + iVar13);
    UNLOCK();
    pFVar14 = param_1->DataPtr;
    iVar13 = 0;
    bVar10 = false;
    pFVar4 = pFVar14 + param_1->ArrayNum;
    for (; pFVar14 != pFVar4; pFVar14 = pFVar14 + 1) {
      pFVar7 = (pFVar14->Pimpl).Reference;
      if ((pFVar7 == (FTaskBase *)0x0) || ((pFVar7->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
LAB_1448dc18c:
        iVar13 = iVar13 + 1;
      }
      else {
        pFVar2 = &(pFVar7->Subsequents).Mutex;
        LOCK();
        bVar15 = pFVar2->State == (atomic<unsigned_char>)0x0;
        if (bVar15) {
          pFVar2->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar15) {
          FMutex::LockSlow(pFVar2);
        }
        if ((pFVar7->Subsequents).bIsClosed != (atomic<bool>)0x0) {
          LOCK();
          aVar5 = pFVar2->State;
          pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
          UNLOCK();
          if (((byte)aVar5 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar2);
          }
          goto LAB_1448dc18c;
        }
        iVar11 = (pFVar7->Subsequents).Subsequents.ArrayNum;
        piVar3 = &(pFVar7->Subsequents).Subsequents.ArrayMax;
        if (iVar11 == *piVar3) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    &pFVar7->Subsequents,piVar3);
        }
        (pFVar7->Subsequents).Subsequents.ArrayNum = iVar11 + 1;
        FVar8 = (pFVar7->Subsequents).Subsequents.AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&pFVar7->Subsequents;
        if (FVar8 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          FVar12 = FVar8;
        }
        *(FTaskBase **)((longlong)FVar12 + (longlong)iVar11 * 8) = this;
        LOCK();
        aVar5 = pFVar2->State;
        pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
        UNLOCK();
        if (((byte)aVar5 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar2);
        }
        TaskTrace::SubsequentAdded((ulong64)pFVar7->TraceId,(ulong64)this->TraceId);
        LOCK();
        pFVar7->RefCount = (atomic<unsigned_int>)((int)pFVar7->RefCount + 1);
        UNLOCK();
        if (param_2 != false) {
          pFVar2 = &(this->Prerequisites).Mutex;
          LOCK();
          bVar10 = pFVar2->State == (atomic<unsigned_char>)0x0;
          if (bVar10) {
            pFVar2->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar10) {
            FMutex::LockSlow(pFVar2);
          }
          param_2 = false;
          bVar10 = true;
        }
        iVar11 = (this->Prerequisites).Prerequisites.ArrayNum;
        if (iVar11 == (this->Prerequisites).Prerequisites.ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    &this->Prerequisites,
                              &(this->Prerequisites).Prerequisites.ArrayMax);
        }
        (this->Prerequisites).Prerequisites.ArrayNum = iVar11 + 1;
        FVar8 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
        if (FVar8 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          FVar12 = FVar8;
        }
        *(FTaskBase **)((longlong)FVar12 + (longlong)iVar11 * 8) = pFVar7;
      }
    }
    if ((0x7fffffff < (uint)((int)aVar6 + param_1->ArrayNum)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0x152,L"Max number of nested tasks reached: %d"), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (bVar10) {
      pFVar2 = &(this->Prerequisites).Mutex;
      LOCK();
      aVar5 = pFVar2->State;
      pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
      UNLOCK();
      if (((byte)aVar5 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar2);
      }
    }
    if (iVar13 != 0) {
      LOCK();
      this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar13);
      UNLOCK();
    }
  }
  return;
}

// AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,0> @ 145026b10

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,0>
          (FTaskBase *this,
          TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1,bool param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  FMutex *pFVar3;
  atomic<unsigned_char> aVar4;
  FTaskBase *pFVar5;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar11;
  int iVar12;
  FTaskHandle *pFVar13;
  FTaskHandle *pFVar14;
  bool bVar15;
  undefined1 local_58 [4];
  uint local_54;
  atomic<unsigned_int> local_50;
  FTaskHandle *local_48;
  
  iVar12 = param_1->ArrayNum;
  if (iVar12 < 1) {
    return;
  }
  if (((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0x118,L"Prerequisites can be added only before the task is launched"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  LOCK();
  paVar1 = &this->NumLocks;
  local_50 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + iVar12);
  UNLOCK();
  local_54 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_54;
  pFVar14 = (param_1->AllocatorInstance).Data;
  iVar12 = 0;
  bVar8 = false;
  local_48 = pFVar14 + uVar10;
  pFVar13 = local_48;
  do {
    while( true ) {
      if (param_1->ArrayNum != (int)uVar10) {
        local_58[0] = 0;
        `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_58);
      }
      if (pFVar14 == pFVar13) {
        if ((0x7fffffff < (uint)((int)local_50 + param_1->ArrayNum)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                ,0x152,L"Max number of nested tasks reached: %d"), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (bVar8) {
          pFVar3 = &(this->Prerequisites).Mutex;
          LOCK();
          aVar4 = pFVar3->State;
          pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar3);
          }
        }
        if (iVar12 == 0) {
          return;
        }
        LOCK();
        this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar12);
        UNLOCK();
        return;
      }
      pFVar5 = (pFVar14->Pimpl).Reference;
      if ((pFVar5 != (FTaskBase *)0x0) &&
         (pFVar13 = local_48, (pFVar5->Subsequents).bIsClosed == (atomic<bool>)0x0)) break;
LAB_145026c21:
      iVar12 = iVar12 + 1;
      uVar10 = (ulonglong)local_54;
      pFVar14 = pFVar14 + 1;
    }
    pFVar3 = &(pFVar5->Subsequents).Mutex;
    LOCK();
    bVar15 = pFVar3->State == (atomic<unsigned_char>)0x0;
    if (bVar15) {
      pFVar3->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar15) {
      FMutex::LockSlow(pFVar3);
    }
    if ((pFVar5->Subsequents).bIsClosed != (atomic<bool>)0x0) {
      LOCK();
      aVar4 = pFVar3->State;
      pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
      UNLOCK();
      pFVar13 = local_48;
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar3);
        pFVar13 = local_48;
      }
      goto LAB_145026c21;
    }
    iVar9 = (pFVar5->Subsequents).Subsequents.ArrayNum;
    piVar2 = &(pFVar5->Subsequents).Subsequents.ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                        (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                               &pFVar5->Subsequents,piVar2);
    }
    (pFVar5->Subsequents).Subsequents.ArrayNum = iVar9 + 1;
    FVar6 = (pFVar5->Subsequents).Subsequents.AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&pFVar5->Subsequents;
    if (FVar6 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      FVar11 = FVar6;
    }
    *(FTaskBase **)((longlong)FVar11 + (longlong)iVar9 * 8) = this;
    LOCK();
    aVar4 = pFVar3->State;
    pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar3);
    }
    TaskTrace::SubsequentAdded((ulong64)pFVar5->TraceId,(ulong64)this->TraceId);
    LOCK();
    pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
    UNLOCK();
    if (param_2 != false) {
      pFVar3 = &(this->Prerequisites).Mutex;
      LOCK();
      bVar8 = pFVar3->State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        pFVar3->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        FMutex::LockSlow(pFVar3);
      }
      param_2 = false;
      bVar8 = true;
    }
    iVar9 = (this->Prerequisites).Prerequisites.ArrayNum;
    if (iVar9 == (this->Prerequisites).Prerequisites.ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                        (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                               &this->Prerequisites,&(this->Prerequisites).Prerequisites.ArrayMax);
    }
    (this->Prerequisites).Prerequisites.ArrayNum = iVar9 + 1;
    FVar6 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
    if (FVar6 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      FVar11 = FVar6;
    }
    uVar10 = (ulonglong)local_54;
    pFVar14 = pFVar14 + 1;
    *(FTaskBase **)((longlong)FVar11 + (longlong)iVar9 * 8) = pFVar5;
    pFVar13 = local_48;
  } while( true );
}

// AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>,0> @ 145026d90

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>,0>
          (FTaskBase *this,TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *param_1,
          bool param_2)

{
  atomic<unsigned_int> *paVar1;
  TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *pTVar2;
  FMutex *pFVar3;
  int *piVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  FTaskBase *pFVar7;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar12;
  int iVar13;
  bool bVar14;
  
  if (((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                          ,0x118,L"Prerequisites can be added only before the task is launched"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  LOCK();
  paVar1 = &this->NumLocks;
  aVar6 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 6);
  UNLOCK();
  pTVar2 = param_1 + 1;
  bVar10 = false;
  iVar13 = 0;
  do {
    if (param_1 == pTVar2) {
      if ((0x7fffffff < (int)aVar6 + 6U) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x152,L"Max number of nested tasks reached: %d"), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (bVar10) {
        pFVar3 = &(this->Prerequisites).Mutex;
        LOCK();
        aVar5 = pFVar3->State;
        pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
        UNLOCK();
        if (((byte)aVar5 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar3);
        }
      }
      if (iVar13 != 0) {
        LOCK();
        this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar13);
        UNLOCK();
      }
      return;
    }
    pFVar7 = (((FTaskHandle *)&param_1->Elements[0].Pimpl)->Pimpl).Reference;
    if ((pFVar7 == (FTaskBase *)0x0) || ((pFVar7->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
LAB_145026e86:
      iVar13 = iVar13 + 1;
    }
    else {
      pFVar3 = &(pFVar7->Subsequents).Mutex;
      LOCK();
      bVar14 = pFVar3->State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        pFVar3->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        FMutex::LockSlow(pFVar3);
      }
      if ((pFVar7->Subsequents).bIsClosed != (atomic<bool>)0x0) {
        LOCK();
        aVar5 = pFVar3->State;
        pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
        UNLOCK();
        if (((byte)aVar5 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar3);
        }
        goto LAB_145026e86;
      }
      iVar11 = (pFVar7->Subsequents).Subsequents.ArrayNum;
      piVar4 = &(pFVar7->Subsequents).Subsequents.ArrayMax;
      if (iVar11 == *piVar4) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                           (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                  &pFVar7->Subsequents,piVar4);
      }
      (pFVar7->Subsequents).Subsequents.ArrayNum = iVar11 + 1;
      FVar8 = (pFVar7->Subsequents).Subsequents.AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&pFVar7->Subsequents;
      if (FVar8 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FVar12 = FVar8;
      }
      *(FTaskBase **)((longlong)FVar12 + (longlong)iVar11 * 8) = this;
      LOCK();
      aVar5 = pFVar3->State;
      pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
      UNLOCK();
      if (((byte)aVar5 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar3);
      }
      TaskTrace::SubsequentAdded((ulong64)pFVar7->TraceId,(ulong64)this->TraceId);
      LOCK();
      pFVar7->RefCount = (atomic<unsigned_int>)((int)pFVar7->RefCount + 1);
      UNLOCK();
      if (param_2 != false) {
        pFVar3 = &(this->Prerequisites).Mutex;
        LOCK();
        bVar10 = pFVar3->State == (atomic<unsigned_char>)0x0;
        if (bVar10) {
          pFVar3->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar10) {
          FMutex::LockSlow(pFVar3);
        }
        param_2 = false;
        bVar10 = true;
      }
      iVar11 = (this->Prerequisites).Prerequisites.ArrayNum;
      if (iVar11 == (this->Prerequisites).Prerequisites.ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                           (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                  &this->Prerequisites,&(this->Prerequisites).Prerequisites.ArrayMax
                           );
      }
      (this->Prerequisites).Prerequisites.ArrayNum = iVar11 + 1;
      FVar8 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
      if (FVar8 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FVar12 = FVar8;
      }
      *(FTaskBase **)((longlong)FVar12 + (longlong)iVar11 * 8) = pFVar7;
    }
    param_1 = (TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *)((longlong)param_1 + 8);
  } while( true );
}

