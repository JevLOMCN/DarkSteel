// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>,0> @ 145d77890

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>,0>
          (FTaskBase *this,TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *param_1,
          bool param_2)

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
LAB_145d779a1:
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
      goto LAB_145d779a1;
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

