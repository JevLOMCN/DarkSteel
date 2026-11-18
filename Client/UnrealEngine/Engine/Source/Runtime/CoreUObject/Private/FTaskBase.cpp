// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// AddPrerequisites<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>,0> @ 141fed7c0

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>,0>
          (FTaskBase *this,TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> *this_00;
  FMutex *pFVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  longlong lVar5;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<UE::Tasks::Private::FTaskBase_*> *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_58 [4];
  uint local_54;
  atomic<unsigned_int> local_50;
  FScriptContainerElement *local_48;
  
  iVar13 = param_1->ArrayNum;
  if (iVar13 < 1) {
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
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + iVar13);
  UNLOCK();
  local_54 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_54;
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar13 = 0;
  bVar8 = false;
  local_48 = pFVar16 + uVar11 * 8;
  pFVar14 = local_48;
  do {
    while( true ) {
      if (param_1->ArrayNum != (int)uVar11) {
        local_58[0] = 0;
        `TCheckedPointerIterator<UE::Tasks::TTask<void>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_58);
      }
      if (pFVar16 == pFVar14) {
        if ((0x7fffffff < (uint)((int)local_50 + param_1->ArrayNum)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                               ,0x152,L"Max number of nested tasks reached: %d"), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (bVar8) {
          pFVar2 = &(this->Prerequisites).Mutex;
          LOCK();
          aVar4 = pFVar2->State;
          pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar2);
          }
        }
        if (iVar13 == 0) {
          return;
        }
        LOCK();
        this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar13);
        UNLOCK();
        return;
      }
      lVar5 = *(longlong *)pFVar16;
      if ((lVar5 != 0) && (pFVar14 = local_48, *(char *)(lVar5 + 0xd0) == '\0')) break;
LAB_141fed8d1:
      iVar13 = iVar13 + 1;
      uVar11 = (ulonglong)local_54;
      pFVar16 = pFVar16 + 8;
    }
    this_00 = (atomic<unsigned_char> *)(lVar5 + 0xd1);
    LOCK();
    FVar3.State = *this_00;
    if (FVar3.State == (atomic<unsigned_char>)0x0) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar3.State != (atomic<unsigned_char>)0x0) {
      FMutex::LockSlow((FMutex *)this_00);
    }
    if (*(char *)(lVar5 + 0xd0) != '\0') {
      LOCK();
      aVar4 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      pFVar14 = local_48;
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
        pFVar14 = local_48;
      }
      goto LAB_141fed8d1;
    }
    iVar10 = *(int *)(lVar5 + 200);
    if (iVar10 == *(int *)(lVar5 + 0xcc)) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                         (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)(lVar5 + 0xb8),
                          (int *)(lVar5 + 0xcc));
    }
    *(int *)(lVar5 + 200) = iVar10 + 1;
    pFVar15 = (ForElementType<UE::Tasks::Private::FTaskBase_*> *)(lVar5 + 0xb8);
    if (*(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar5 + 0xc0) !=
        (ForElementType<UE::Tasks::Private::FTaskBase_*> *)0x0) {
      pFVar15 = *(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar5 + 0xc0);
    }
    *(FTaskBase **)(pFVar15->InlineData + (longlong)iVar10 * 8) = this;
    LOCK();
    aVar4 = *this_00;
    *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_00);
    }
    TaskTrace::SubsequentAdded(*(ulong64 *)(lVar5 + 0x50),(ulong64)this->TraceId);
    LOCK();
    *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
    UNLOCK();
    if (param_2 != false) {
      pFVar2 = &(this->Prerequisites).Mutex;
      LOCK();
      bVar8 = pFVar2->State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        pFVar2->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        FMutex::LockSlow(pFVar2);
      }
      param_2 = false;
      bVar8 = true;
    }
    iVar10 = (this->Prerequisites).Prerequisites.ArrayNum;
    if (iVar10 == (this->Prerequisites).Prerequisites.ArrayMax) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                         (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                &this->Prerequisites,&(this->Prerequisites).Prerequisites.ArrayMax);
    }
    (this->Prerequisites).Prerequisites.ArrayNum = iVar10 + 1;
    FVar6 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
    if (FVar6 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      FVar12 = FVar6;
    }
    uVar11 = (ulonglong)local_54;
    pFVar16 = pFVar16 + 8;
    *(longlong *)((longlong)FVar12 + (longlong)iVar10 * 8) = lVar5;
    pFVar14 = local_48;
  } while( true );
}

