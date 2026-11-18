// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0> @ 14aa043b0

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
          (FTaskBase *this,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
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
      param_1 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
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
LAB_14aa044e2:
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
          goto LAB_14aa044e2;
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
      param_1 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
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

