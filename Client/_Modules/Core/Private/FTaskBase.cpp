// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 29

// AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0> @ 141473400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
          (FTaskBase *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,bool param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_char> *this_00;
  FMutex *pFVar3;
  FMutex FVar4;
  atomic<unsigned_char> aVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  longlong lVar7;
  atomic<unsigned___int64> aVar8;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  ulong64 uVar13;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar14;
  int iVar15;
  ForElementType<UE::Tasks::Private::FTaskBase_*> *pFVar16;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  char local_88;
  undefined1 local_87 [3];
  int local_84;
  atomic<unsigned_int> local_80;
  int *local_78;
  LARGE_INTEGER local_70;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_68;
  int *local_60;
  LARGE_INTEGER *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar15 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (0 < iVar15) {
    local_60 = piVar1;
    if (((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0x118,L"Prerequisites can be added only before the task is launched"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    LOCK();
    paVar2 = &this->NumLocks;
    local_80 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + iVar15);
    UNLOCK();
    FVar6 = (param_1->AllocatorInstance).SecondaryData;
    iVar15 = 0;
    local_88 = '\0';
    local_84 = *piVar1;
    if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar6;
    }
    local_68 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
               ((longlong)param_1 + (longlong)local_84 * 8);
    local_78 = piVar1;
    while( true ) {
      FVar6 = local_68;
      if (*local_78 != local_84) {
        local_87[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_87);
      }
      if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1 == FVar6) break;
      lVar7 = *(longlong *)param_1;
      if ((lVar7 == 0) || (*(char *)(lVar7 + 0xd0) != '\0')) {
LAB_14147353b:
        iVar15 = iVar15 + 1;
      }
      else {
        this_00 = (atomic<unsigned_char> *)(lVar7 + 0xd1);
        LOCK();
        FVar4.State = *this_00;
        if (FVar4.State == (atomic<unsigned_char>)0x0) {
          *this_00 = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (FVar4.State != (atomic<unsigned_char>)0x0) {
          FMutex::LockSlow((FMutex *)this_00);
        }
        if (*(char *)(lVar7 + 0xd0) != '\0') {
          LOCK();
          aVar5 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar5 & 2) != 0) {
            FMutex::WakeWaitingThread((FMutex *)this_00);
          }
          goto LAB_14147353b;
        }
        iVar12 = *(int *)(lVar7 + 200);
        if (iVar12 == *(int *)(lVar7 + 0xcc)) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    (lVar7 + 0xb8),(int *)(lVar7 + 0xcc));
        }
        *(int *)(lVar7 + 200) = iVar12 + 1;
        pFVar16 = (ForElementType<UE::Tasks::Private::FTaskBase_*> *)(lVar7 + 0xb8);
        if (*(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar7 + 0xc0) !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*> *)0x0) {
          pFVar16 = *(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar7 + 0xc0);
        }
        *(FTaskBase **)(pFVar16->InlineData + (longlong)iVar12 * 8) = this;
        LOCK();
        aVar5 = *this_00;
        *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
        UNLOCK();
        if (((byte)aVar5 & 2) != 0) {
          FMutex::WakeWaitingThread((FMutex *)this_00);
        }
        aVar8 = this->TraceId;
        uVar13 = *(ulong64 *)(lVar7 + 0x50);
        if ((-1 < TaskTrace::TaskChannel->Enabled) && (TaskTrace::bGTaskTraceInitialized != false))
        {
          if (uVar13 == 0xffffffffffffffff) {
            uVar13 = TaskTrace::GenerateTaskId();
          }
          if ((aVar8 == (atomic<unsigned___int64>)0xffffffffffffffff) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SubsequentId != InvalidId",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                                  ,0xac,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (-1 < TaskTrace::TaskChannel->Enabled) {
            Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceSubsequentAddedFields>
                      ((TLogScope<0> *)&local_58);
            QueryPerformanceCounter(&local_70);
            *local_58 = local_70;
            local_58[1].QuadPart = uVar13;
            local_58[2].QuadPart = (LONGLONG)aVar8;
            *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
          }
        }
        LOCK();
        *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
        UNLOCK();
        if (param_2 != false) {
          pFVar3 = &(this->Prerequisites).Mutex;
          LOCK();
          bVar11 = pFVar3->State == (atomic<unsigned_char>)0x0;
          if (bVar11) {
            pFVar3->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar11) {
            FMutex::LockSlow(pFVar3);
          }
          param_2 = false;
          local_88 = '\x01';
        }
        iVar12 = (this->Prerequisites).Prerequisites.ArrayNum;
        if (iVar12 == (this->Prerequisites).Prerequisites.ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    &this->Prerequisites,
                              &(this->Prerequisites).Prerequisites.ArrayMax);
        }
        (this->Prerequisites).Prerequisites.ArrayNum = iVar12 + 1;
        FVar9 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
        if (FVar9 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          FVar14 = FVar9;
        }
        *(longlong *)((longlong)FVar14 + (longlong)iVar12 * 8) = lVar7;
      }
      param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)param_1 + 8);
    }
    if (0x7fffffff < (uint)((int)local_80 + *local_60)) {
      local_98 = 0x80000000;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                          ,0x152,L"Max number of nested tasks reached: %d");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (local_88 != '\0') {
      pFVar3 = &(this->Prerequisites).Mutex;
      LOCK();
      aVar5 = pFVar3->State;
      pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
      UNLOCK();
      if (((byte)aVar5 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar3);
      }
    }
    if (iVar15 != 0) {
      LOCK();
      this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar15);
      UNLOCK();
    }
  }
  return;
}

// FTaskBase @ 14147ec80

FTaskBase * __thiscall
UE::Tasks::Private::FTaskBase::FTaskBase(FTaskBase *this,uint param_1,bool param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  atomic<unsigned___int64> aVar3;
  atomic<unsigned___int64> aVar4;
  FTaskBase *pFVar5;
  bool bVar6;
  
  this->RefCount = (atomic<unsigned_int>)param_1;
  this->Pipe = (FPipe *)0x0;
  this->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
  (this->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
  this->TaskTriggered = (atomic<bool>)0x0;
  this->NumLocks = (atomic<unsigned_int>)0x1;
  this->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
  aVar4 = UId;
  LOCK();
  aVar3 = (atomic<unsigned___int64>)((longlong)UId + 1);
  UNLOCK();
  bVar6 = UId == (atomic<unsigned___int64>)0xffffffffffffffff;
  UId = aVar3;
  if (bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Id != InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                       ,0x50,L"TraceId overflow");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTaskBase *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->TraceId = aVar4;
  (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  this_00 = &(this->Prerequisites).Mutex;
  (this->Prerequisites).Prerequisites.ArrayNum = 0;
  (this->Prerequisites).Prerequisites.ArrayMax = 1;
  this_00->State = (atomic<unsigned_char>)0x1;
  *(undefined ***)&(this->LowLevelTask).field_0x28 =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)&(this->LowLevelTask).field_0x38 = 0xe800000000000020;
  *(undefined8 *)&(this->LowLevelTask).field_0x30 = 0;
  (this->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  (this->Subsequents).Subsequents.ArrayNum = 0;
  (this->Subsequents).Subsequents.ArrayMax = 1;
  (this->Subsequents).bIsClosed = (atomic<bool>)0x0;
  (this->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
  if (param_2) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  return this;
}

// ~FTaskBase @ 1414817b0

void __thiscall UE::Tasks::Private::FTaskBase::~FTaskBase(FTaskBase *this)

{
  undefined1 *puVar1;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
  if ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0xbf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TaskTrace::Destroyed((ulong64)this->TraceId);
  FVar2 = (this->Subsequents).Subsequents.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  if ((*(ulonglong *)&(this->LowLevelTask).field_0x38 & 0x20) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                       ,0x204,L"State: %d");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &(this->LowLevelTask).field_0x28;
  (**(code **)(*(longlong *)puVar1 + 0x18))(puVar1,&this->LowLevelTask);
  FVar2 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// AddSubsequent @ 141485700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Tasks::Private::FTaskBase::AddSubsequent(FTaskBase *this,FTaskBase *param_1)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  atomic<unsigned___int64> aVar7;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  LARGE_INTEGER *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
    this_00 = &(this->Subsequents).Mutex;
    LOCK();
    bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar9) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar9) {
      FMutex::LockSlow(this_00);
    }
    if ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      iVar6 = (this->Subsequents).Subsequents.ArrayNum;
      piVar1 = &(this->Subsequents).Subsequents.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                          (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                 &this->Subsequents,piVar1);
      }
      (this->Subsequents).Subsequents.ArrayNum = iVar6 + 1;
      FVar8 = (this->Subsequents).Subsequents.AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FVar8 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Subsequents;
      }
      *(FTaskBase **)((longlong)FVar8 + (longlong)iVar6 * 8) = param_1;
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      aVar3 = param_1->TraceId;
      aVar7 = this->TraceId;
      if ((-1 < TaskTrace::TaskChannel->Enabled) && (TaskTrace::bGTaskTraceInitialized != false)) {
        if (aVar7 == (atomic<unsigned___int64>)0xffffffffffffffff) {
          aVar7 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
        }
        if ((aVar3 == (atomic<unsigned___int64>)0xffffffffffffffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SubsequentId != InvalidId",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                               ,0xac,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar5 = (*pcVar4)();
          return (bool)uVar5;
        }
        if (-1 < TaskTrace::TaskChannel->Enabled) {
          Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceSubsequentAddedFields>
                    ((TLogScope<0> *)&local_28);
          QueryPerformanceCounter(&local_30);
          *local_28 = local_30;
          local_28[1].QuadPart = (LONGLONG)aVar7;
          local_28[2].QuadPart = (LONGLONG)aVar3;
          *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
        }
      }
      return true;
    }
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  return false;
}

// Close @ 14148c290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Tasks::Private::FTaskBase::Close(FTaskBase *this)

{
  uint uVar1;
  atomic<unsigned_int> *paVar2;
  TEventCount<unsigned_int> *pTVar3;
  FMutex *this_00;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FTaskBase *pFVar8;
  FPipe *pFVar9;
  code *pcVar10;
  FTaskBase *pFVar11;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  bool local_57 [7];
  FTaskBase *local_50;
  undefined8 local_48;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_57[0] = this->ExtendedPriority == TaskEvent;
  this_00 = &(this->Subsequents).Mutex;
  LOCK();
  bVar13 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar13) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_50 = this;
  if (!bVar13) {
    FMutex::LockSlow(this_00);
  }
  LOCK();
  (this->Subsequents).bIsClosed = (atomic<bool>)0x1;
  UNLOCK();
  FVar12 = (this->Subsequents).Subsequents.AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    local_48 = *(undefined8 *)(this->Subsequents).Subsequents.AllocatorInstance.InlineData;
  }
  local_40 = FVar12;
  (this->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  iVar7 = (this->Subsequents).Subsequents.ArrayNum;
  local_34 = (this->Subsequents).Subsequents.ArrayMax;
  local_38 = iVar7;
  (this->Subsequents).Subsequents.ArrayNum = 0;
  (this->Subsequents).Subsequents.ArrayMax = 1;
  LOCK();
  aVar5 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar5 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (FVar12 == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&local_48;
  }
  FVar4 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar12 + (longlong)iVar7 * 8);
  do {
    while( true ) {
      if (local_38 != iVar7) {
        local_58 = 0;
        `TCheckedPointerIterator<UE::Tasks::Private::FTaskBase_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_58);
      }
      pFVar8 = local_50;
      if (FVar12 == FVar4) {
        if (local_40 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          FMemory::Free((void *)local_40);
        }
        if (pFVar8->Pipe != (FPipe *)0x0) {
          ClearPipe(pFVar8);
        }
        ReleasePrerequisites(pFVar8);
        TaskTrace::Completed((ulong64)pFVar8->TraceId);
        aVar6 = (pFVar8->StateChangeEvent).Count;
        pTVar3 = &pFVar8->StateChangeEvent;
        if (((uint)aVar6 & 1) != 0) {
          LOCK();
          bVar13 = aVar6 == pTVar3->Count;
          if (bVar13) {
            pTVar3->Count = (atomic<unsigned_int>)((int)aVar6 + 1);
          }
          UNLOCK();
          if (bVar13) {
            ParkingLot::WakeAll(pTVar3);
          }
        }
        return;
      }
      pFVar8 = *(FTaskBase **)FVar12;
      pFVar9 = pFVar8->Pipe;
      LOCK();
      paVar2 = &pFVar8->NumLocks;
      aVar6 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      uVar1 = (int)aVar6 - 1;
      if ((uint)aVar6 < 0x80000000) break;
      if ((aVar6 == (atomic<unsigned_int>)0x80000000) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks != ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x295,L"The task is not locked"), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar1 == 0x80000000) {
        Close(pFVar8);
        LOCK();
        paVar2 = &pFVar8->RefCount;
        aVar6 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar6 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
LAB_14148c4e2:
      FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar12 + 8);
    }
    if ((aVar6 == (atomic<unsigned_int>)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrevNumLocks != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,599,L"The task is not locked"), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (pFVar9 == (FPipe *)0x0) {
      bVar13 = aVar6 == (atomic<unsigned_int>)0x1;
    }
    else {
      bVar13 = uVar1 < 2;
    }
    if (!bVar13) goto LAB_14148c4e2;
    if ((pFVar9 == (FPipe *)0x0) || (uVar1 != 1)) {
LAB_14148c425:
      if (pFVar8->ExtendedPriority == Inline) {
        TryExecuteTask(pFVar8);
        ReleaseInternalReference(pFVar8);
        FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar12 + 8);
      }
      else if (pFVar8->ExtendedPriority == TaskEvent) {
        LOCK();
        bVar13 = pFVar8->NumLocks == (atomic<unsigned_int>)0x0;
        if (bVar13) {
          pFVar8->NumLocks = (atomic<unsigned_int>)0x80000001;
        }
        UNLOCK();
        if (!bVar13) goto LAB_14148c4e2;
        ReleasePrerequisites(pFVar8);
        Close(pFVar8);
        ReleaseInternalReference(pFVar8);
        FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar12 + 8);
      }
      else {
        Schedule(pFVar8,local_57);
        FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar12 + 8);
      }
    }
    else {
      pFVar11 = TryPushIntoPipe(pFVar8);
      if (pFVar11 == (FTaskBase *)0x0) {
        pFVar8->NumLocks = (atomic<unsigned_int>)0x0;
        goto LAB_14148c425;
      }
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                (&pFVar8->Prerequisites,pFVar11);
      FVar12 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar12 + 8);
    }
  } while( true );
}

// Init @ 14149b7e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskBase::Init
          (FTaskBase *this,wchar_t *param_1,ETaskPriority param_2,EExtendedTaskPriority param_3,
          ETaskFlags param_4)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ETaskPriority EVar7;
  
  if (((*(ulonglong *)&(this->LowLevelTask).field_0x38 & 0x20) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(*(longlong *)&(this->LowLevelTask).field_0x28 + 0x18))
            (&(this->LowLevelTask).field_0x28,&this->LowLevelTask);
  uVar5 = (ulonglong)_tls_index;
  *(undefined ***)&(this->LowLevelTask).field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  pvVar3 = ThreadLocalStoragePointer;
  *(FTaskBase **)&this->LowLevelTask = this;
  *(FTaskBase **)&(this->LowLevelTask).field_0x8 = this;
  lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar5 * 8) + 0x40);
  if (lVar1 == 0) {
    uVar6 = 0;
    EVar7 = Default;
    if (param_2 != Inherit) {
      EVar7 = param_2;
    }
  }
  else {
    if (param_2 == Inherit) {
      param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x30);
    EVar7 = param_2;
  }
  *(undefined8 *)&(this->LowLevelTask).field_0x30 = uVar6;
  *(ulonglong *)&(this->LowLevelTask).field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  this->ExtendedPriority = param_3;
  FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
  return;
}

// Release @ 1414ad290

void __thiscall UE::Tasks::Private::FTaskBase::Release(FTaskBase *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  
  LOCK();
  paVar1 = &this->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<unsigned_int>)0x1) && (this != (FTaskBase *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001414ad2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// ReleaseInternalReference @ 1414ad2c0

void __thiscall UE::Tasks::Private::FTaskBase::ReleaseInternalReference(FTaskBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = LowLevelTasks::FTask::TryCancel(&this->LowLevelTask,DefaultFlags);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTask.TryCancel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x1b8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ReleasePrerequisites @ 1414ad310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Tasks::Private::FTaskBase::ReleasePrerequisites(FTaskBase *this)

{
  FMutex *pFVar1;
  int *piVar2;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar6;
  undefined8 *puVar7;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  pFVar1 = &(this->Prerequisites).Mutex;
  LOCK();
  bVar9 = pFVar1->State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    pFVar1->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    FMutex::LockSlow(&(this->Prerequisites).Mutex);
  }
  FVar6 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    local_40 = *(undefined8 *)(this->Prerequisites).Prerequisites.AllocatorInstance.InlineData;
  }
  local_38 = FVar6;
  (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  iVar5 = (this->Prerequisites).Prerequisites.ArrayNum;
  local_2c = (this->Prerequisites).Prerequisites.ArrayMax;
  local_30 = iVar5;
  (this->Prerequisites).Prerequisites.ArrayNum = 0;
  (this->Prerequisites).Prerequisites.ArrayMax = 1;
  LOCK();
  pFVar1 = &(this->Prerequisites).Mutex;
  aVar4 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread(&(this->Prerequisites).Mutex);
  }
  FVar8 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&local_40;
  if (FVar6 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FVar8 = FVar6;
  }
  FVar3 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar8 + (longlong)iVar5 * 8);
  for (; FVar8 != FVar3;
      FVar8 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar8 + 8)) {
    puVar7 = *(undefined8 **)FVar8;
    LOCK();
    piVar2 = (int *)(puVar7 + 6);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if (FVar6 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  return;
}

// TryExecuteTask @ 1414b63a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Tasks::Private::FTaskBase::TryExecuteTask(FTaskBase *this)

{
  atomic<unsigned_int> *paVar1;
  uint uVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 uVar6;
  atomic<unsigned_int> aVar7;
  FTaskBase *pFVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  FLLMActiveTagsScope local_40;
  FMemScope local_2c;
  FMetadataRestoreScope local_24 [4];
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  LOCK();
  bVar9 = this->NumLocks == (atomic<unsigned_int>)0x0;
  if (bVar9) {
    this->NumLocks = (atomic<unsigned_int>)0x80000001;
  }
  UNLOCK();
  if (bVar9) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
    ReleasePrerequisites(this);
    pFVar8 = ExchangeCurrentTask(this);
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    this->ExecutingThreadId = aVar7;
    if (this->Pipe != (FPipe *)0x0) {
      StartPipeExecution(this);
    }
    uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
    lVar5 = this->_padding_;
    local_40.LLMScopes.ArrayNum = 0;
    local_40.LLMScopes.ArrayMax = 4;
    FLLMActiveTagsScope::CaptureLLMScopes(&local_40,(FLLMActiveTagsCapture *)&this->_padding_);
    FMemScope::FMemScope(&local_2c,(int)lVar5,true);
    FMetadataRestoreScope::FMetadataRestoreScope(local_24,uVar2);
    aVar3 = this->TraceId;
    TaskTrace::Started((ulong64)aVar3);
    if (((TaskTrace::TaskChannel->Enabled < 0) || (CpuChannel->Enabled < 0)) ||
       (bVar9 = IsInRenderingThread(), bVar9)) {
      (**(code **)(this->_padding_ + 8))(this);
    }
    else {
      if (TaskTrace::ExecuteTaskSpecId == (atomic<unsigned_int>)0x0) {
        TaskTrace::ExecuteTaskSpecId =
             (atomic<unsigned_int>)
             FCpuProfilerTrace::OutputEventType
                       ("ExecuteTask",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                        ,0x132);
        LOCK();
        UNLOCK();
      }
      FCpuProfilerTrace::OutputBeginEvent((uint)TaskTrace::ExecuteTaskSpecId);
      (**(code **)(this->_padding_ + 8))(this);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((-1 < TaskTrace::TaskChannel->Enabled) && (TaskTrace::bGTaskTraceInitialized != false)) {
      if ((aVar3 == (atomic<unsigned___int64>)0xffffffffffffffff) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskId != InvalidId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                             ,0xce,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (-1 < TaskTrace::TaskChannel->Enabled) {
        Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceFinishedFields>
                  ((TLogScope<0> *)&local_20);
        QueryPerformanceCounter(&local_48);
        *local_20 = local_48;
        local_20[1].QuadPart = (LONGLONG)aVar3;
        *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
      }
    }
    FMetadataRestoreScope::~FMetadataRestoreScope(local_24);
    FMemScope::~FMemScope(&local_2c);
    DestructItems<FLLMScope,int>((FLLMScope *)&local_40,local_40.LLMScopes.ArrayNum);
    if (this->Pipe != (FPipe *)0x0) {
      FinishPipeExecution(this);
    }
    this->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
    ExchangeCurrentTask(pFVar8);
    LOCK();
    paVar1 = &this->NumLocks;
    aVar7 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar7 == (atomic<unsigned_int>)0x80000001) {
      Close(this);
      LOCK();
      paVar1 = &this->RefCount;
      aVar7 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar7 == (atomic<unsigned_int>)0x1) {
        (**(code **)this->_padding_)(this,1);
      }
    }
    return true;
  }
  return false;
}

// TryLaunch @ 1414b6ee0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::Tasks::Private::FTaskBase::TryLaunch(FTaskBase *this,ulong64 param_1)

{
  bool bVar1;
  Type TVar2;
  bool local_res18 [16];
  
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar2 = TranslatePriority((ETaskPriority)
                              ((ulonglong)*(undefined8 *)&(this->LowLevelTask).field_0x38 >> 0x3b) &
                              (Inherit|Default),this->ExtendedPriority);
    TaskTrace::Launched((ulong64)this->TraceId,
                        (wchar_t *)
                        (*(ulonglong *)&(this->LowLevelTask).field_0x38 >> 6 & 0x1fffffffffffff),
                        true,TVar2,param_1);
  }
  local_res18[0] = true;
  bVar1 = TryUnlock(this,local_res18);
  return bVar1;
}

// TryUnlock @ 1414b7dd0

bool __thiscall UE::Tasks::Private::FTaskBase::TryUnlock(FTaskBase *this,bool *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FPipe *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FTaskBase *pFVar7;
  uint uVar8;
  
  pFVar3 = this->Pipe;
  LOCK();
  paVar1 = &this->NumLocks;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  uVar8 = (int)aVar2 - 1;
  if ((uint)aVar2 < 0x80000000) {
    if ((aVar2 == (atomic<unsigned_int>)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,599,L"The task is not locked"), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (pFVar3 == (FPipe *)0x0) {
      bVar5 = aVar2 == (atomic<unsigned_int>)0x1;
    }
    else {
      bVar5 = uVar8 < 2;
    }
    if (bVar5) {
      if ((pFVar3 != (FPipe *)0x0) && (uVar8 == 1)) {
        pFVar7 = TryPushIntoPipe(this);
        if (pFVar7 != (FTaskBase *)0x0) {
          FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                    (&this->Prerequisites,pFVar7);
          return false;
        }
        this->NumLocks = (atomic<unsigned_int>)0x0;
      }
      if (this->ExtendedPriority == Inline) {
        TryExecuteTask(this);
        ReleaseInternalReference(this);
      }
      else if (this->ExtendedPriority == TaskEvent) {
        LOCK();
        bVar5 = this->NumLocks == (atomic<unsigned_int>)0x0;
        if (bVar5) {
          this->NumLocks = (atomic<unsigned_int>)0x80000001;
        }
        UNLOCK();
        if (bVar5) {
          ReleasePrerequisites(this);
          Close(this);
          ReleaseInternalReference(this);
        }
      }
      else {
        Schedule(this,param_1);
      }
      return true;
    }
  }
  else {
    if ((aVar2 == (atomic<unsigned_int>)0x80000000) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevNumLocks != ExecutionFlag",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x295,L"The task is not locked"), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (uVar8 == 0x80000000) {
      Close(this);
      LOCK();
      paVar1 = &this->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 != (atomic<unsigned_int>)0x1) {
        return true;
      }
      (**(code **)this->_padding_)(this,1);
      return true;
    }
  }
  return false;
}

// AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0> @ 141787ea0

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
          (FTaskBase *this,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> *param_1,
          bool param_2)

{
  atomic<unsigned_int> *paVar1;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> *pTVar2;
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
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  pTVar2 = param_1 + 1;
  bVar10 = false;
  iVar13 = 0;
  do {
    if (param_1 == pTVar2) {
      if ((0x7fffffff < (int)aVar6 + 1U) &&
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
    pFVar7 = param_1->Elements[0];
    if ((pFVar7 == (FTaskBase *)0x0) || ((pFVar7->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
LAB_141787f8d:
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
        goto LAB_141787f8d;
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
    param_1 = param_1 + 1;
  } while( true );
}

// AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0> @ 1418aa2c0

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
          (FTaskBase *this,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

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
        `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_58);
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
LAB_1418aa3d1:
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
      goto LAB_1418aa3d1;
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

// ClearPipe @ 141a7c150

void __thiscall UE::Tasks::Private::FTaskBase::ClearPipe(FTaskBase *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned___int64> aVar4;
  FPipe *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  atomic<unsigned_int> *paVar7;
  bool bVar8;
  
  pFVar5 = this->Pipe;
  LOCK();
  bVar8 = (atomic<UE::Tasks::Private::FTaskBase_*>)this == pFVar5->LastTask;
  if (bVar8) {
    pFVar5->LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  }
  UNLOCK();
  if (bVar8) {
    LOCK();
    paVar7 = &this->RefCount;
    aVar2 = *paVar7;
    *paVar7 = (atomic<unsigned_int>)((int)*paVar7 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  pTVar6 = (pFVar5->EmptyEventRef).SharedReferenceCount.ReferenceController;
  paVar7 = &((pFVar5->EmptyEventRef).Object)->Count;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  paVar1 = &pFVar5->TaskCount;
  aVar4 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
  UNLOCK();
  if (aVar4 == (atomic<unsigned___int64>)0x1) {
    LOCK();
    aVar2 = *paVar7;
    *paVar7 = *paVar7;
    UNLOCK();
    if (((uint)aVar2 & 1) != 0) {
      LOCK();
      aVar3 = *paVar7;
      if (aVar2 == aVar3) {
        *paVar7 = (atomic<unsigned_int>)((int)aVar2 + 1);
      }
      UNLOCK();
      if (aVar2 == aVar3) {
        ParkingLot::WakeAll(paVar7);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// FinishPipeExecution @ 141a801c0

void __thiscall UE::Tasks::Private::FTaskBase::FinishPipeExecution(FTaskBase *this)

{
  FPipeCallStack::Pop(this->Pipe);
  return;
}

// Schedule @ 141a915b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __thiscall UE::Tasks::Private::FTaskBase::Schedule(FTaskBase *this,bool *param_1)

{
  TEventCount<unsigned_int> *pTVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  
  TaskTrace::Scheduled((ulong64)this->TraceId);
  if ((char)this->ExtendedPriority < '\x03') {
    aVar3 = (this->StateChangeEvent).Count;
    pTVar1 = &this->StateChangeEvent;
    if (((uint)aVar3 & 1) != 0) {
      LOCK();
      bVar9 = aVar3 == pTVar1->Count;
      if (bVar9) {
        pTVar1->Count = (atomic<unsigned_int>)((int)aVar3 + 1);
      }
      UNLOCK();
      if (bVar9) {
        ParkingLot::WakeAll(pTVar1);
      }
    }
    bVar9 = *param_1;
    uVar7 = *(ulonglong *)&(this->LowLevelTask).field_0x38;
    do {
      puVar2 = &(this->LowLevelTask).field_0x38;
      LOCK();
      uVar8 = *(ulonglong *)puVar2;
      bVar10 = uVar7 == uVar8;
      if (bVar10) {
        *(ulonglong *)puVar2 = uVar7 | 2;
        uVar8 = uVar7;
      }
      UNLOCK();
      uVar7 = uVar8;
    } while (!bVar10);
    bVar10 = (uVar8 & 2) == 0;
    if (bVar10) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,&this->LowLevelTask,(uint)(bVar9 == false),
                 bVar9);
    }
    *param_1 = (bool)(bVar9 | bVar10);
    return;
  }
  pFVar6 = FTaskGraphInterface::Get();
  pcVar4 = *(code **)*pFVar6;
  TVar5 = TranslatePriority(this->ExtendedPriority);
  (*pcVar4)(pFVar6,this,1,TVar5,0xff);
  return;
}

// StartPipeExecution @ 141a93ff0

void __thiscall UE::Tasks::Private::FTaskBase::StartPipeExecution(FTaskBase *this)

{
  FPipe *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  FPipe *local_18 [2];
  
  pFVar1 = this->Pipe;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar6 = (ForAnyElementType *)(lVar2 + 0xbd8);
  local_18[0] = pFVar1;
  if ((pFVar6->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar6->Data + (longlong)*(int *)(lVar2 + 0xbe4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0xbe0);
  if (iVar5 == *(int *)(lVar2 + 0xbe4)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar6,(int *)(lVar2 + 0xbe4));
  }
  *(int *)(lVar2 + 0xbe0) = iVar5 + 1;
  *(FPipe **)(pFVar6->Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// TryPushIntoPipe @ 141a982a0

FTaskBase * __thiscall UE::Tasks::Private::FTaskBase::TryPushIntoPipe(FTaskBase *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<UE::Tasks::Private::FTaskBase_*> this_00;
  code *pcVar3;
  bool bVar4;
  FTaskBase *pFVar5;
  
  LOCK();
  this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
  UNLOCK();
  LOCK();
  this_00 = this->Pipe->LastTask;
  this->Pipe->LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
  UNLOCK();
  if (this_00 == (atomic<UE::Tasks::Private::FTaskBase_*>)this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LastTask_Local != &Task",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\Pipe.cpp"
                       ,0xf,
                       L"Dependency cycle: adding itself as a prerequisite (or use after destruction)"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTaskBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this_00 != (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
    bVar4 = AddSubsequent((FTaskBase *)this_00,this);
    if (bVar4) {
      return (FTaskBase *)this_00;
    }
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)this_00 + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)this_00)(this_00,1);
    }
  }
  return (FTaskBase *)0x0;
}

// TryRetractAndExecute @ 141a98a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Tasks::Private::FTaskBase::TryRetractAndExecute(FTaskBase *this,FTimeout *param_1,uint param_2)

{
  atomic<unsigned_int> *paVar1;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar2;
  ulong64 uVar3;
  FTaskBase *pFVar4;
  bool bVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  char cVar8;
  int *piVar9;
  char cVar10;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar11;
  bool bVar12;
  atomic<bool> aVar13;
  undefined1 auStack_b8 [32];
  char local_98;
  LARGE_INTEGER local_88;
  ulong64 uStack_80;
  TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((this->Subsequents).bIsClosed != (atomic<bool>)0x0) ||
     ((uVar3 = param_1->TimeoutCycles, uVar3 != 0xffffffffffffffff &&
      ((uVar3 == 0 ||
       (QueryPerformanceCounter(&local_88), param_1->StartCycles + uVar3 < (ulonglong)local_88))))))
  {
    return (bool)(this->Subsequents).bIsClosed;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId76,"FTaskBase::TryRetractAndExecute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
               ,0x4c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId76);
  }
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar7 == this->ExecutingThreadId) {
    Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  else if (((char)this->ExtendedPriority < '\x03') && (param_2 != 200)) {
    if ((int)this->NumLocks - 1U < 0x7fffffff) {
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::PopAll
                (&this->Prerequisites,&local_60);
      FVar11 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FVar11 = local_60.AllocatorInstance.SecondaryData;
      }
      FVar2 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)
              ((longlong)FVar11 + (longlong)local_60.ArrayNum * 8);
      for (; FVar11 != FVar2;
          FVar11 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar11 + 8)) {
        local_88.s = (_struct_19)param_1->StartCycles;
        uStack_80 = param_1->TimeoutCycles;
        pFVar4 = *(FTaskBase **)FVar11;
        TryRetractAndExecute(pFVar4,(FTimeout *)&local_88.s,param_2 + 1);
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar7 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar7 == (atomic<unsigned_int>)0x1) && (pFVar4 != (FTaskBase *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
      if (local_60.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
      }
    }
    if ((this->ExtendedPriority == TaskEvent) || (this->ExtendedPriority == Inline)) {
      aVar13 = (atomic<bool>)0x1;
      goto LAB_141a98b7c;
    }
    bVar5 = FTimeout::IsExpired(param_1);
    if (bVar5) {
      aVar13 = (this->Subsequents).bIsClosed;
      goto LAB_141a98b7c;
    }
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 3000);
    *piVar9 = *piVar9 + 1;
    bVar5 = TryExecuteTask(this);
    *piVar9 = *piVar9 + -1;
    if (bVar5) {
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId147,"SuccessfulTaskRetraction",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0x93);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId147);
      }
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::PopAll
                (&this->Prerequisites,&local_78);
      FVar11 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FVar11 = local_78.AllocatorInstance.SecondaryData;
      }
      FVar2 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)
              ((longlong)FVar11 + (longlong)local_78.ArrayNum * 8);
      cVar10 = '\x01';
      for (; FVar11 != FVar2;
          FVar11 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)((longlong)FVar11 + 8)) {
        local_88.s = (_struct_19)param_1->StartCycles;
        uStack_80 = param_1->TimeoutCycles;
        pFVar4 = *(FTaskBase **)FVar11;
        bVar6 = TryRetractAndExecute(pFVar4,(FTimeout *)&local_88.s,param_2 + 1);
        cVar8 = '\0';
        if (bVar6) {
          cVar8 = cVar10;
        }
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar7 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar7 == (atomic<unsigned_int>)0x1) && (pFVar4 != (FTaskBase *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
        cVar10 = cVar8;
      }
      local_98 = cVar10;
      if (local_78.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
      aVar13 = (atomic<bool>)(local_98 != '\0');
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_141a98b7c;
    }
  }
  aVar13 = (atomic<bool>)0x0;
LAB_141a98b7c:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)aVar13;
}

// Wait @ 141a998b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Tasks::Private::FTaskBase::Wait(FTaskBase *this)

{
  EExtendedTaskPriority EVar1;
  Type TVar2;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  LARGE_INTEGER local_28;
  undefined8 local_20;
  
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&local_res10.s,(ulong64)this->TraceId);
      QueryPerformanceCounter(local_res18);
      local_28 = local_res18[0];
      local_20 = 0xffffffffffffffff;
      TryRetractAndExecute(this,(FTimeout *)&local_28.s,0);
      if ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        bVar4 = TryWaitOnNamedThread(this);
        if (!bVar4) {
          QueryPerformanceCounter(local_res18);
          local_28 = local_res18[0];
          local_20 = 0xffffffffffffffff;
          WaitImpl(this,(FTimeout *)&local_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&local_res10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&local_res10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = this->ExtendedPriority;
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&local_res10);
  local_28 = local_res10;
  local_20 = 0xffffffffffffffff;
  WaitImpl(this,(FTimeout *)&local_28.s);
  return;
}

// Wait @ 141a99a60

bool __thiscall UE::Tasks::Private::FTaskBase::Wait(FTaskBase *this,FTimeout *param_1)

{
  ulong64 uVar1;
  bool bVar2;
  FWaitingScope local_res8 [8];
  LARGE_INTEGER local_res18;
  FTimeout local_18;
  
  if ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
    uVar1 = param_1->TimeoutCycles;
    if (uVar1 == 0xffffffffffffffff) {
LAB_141a99ab4:
      TaskTrace::FWaitingScope::FWaitingScope(local_res8,(ulong64)this->TraceId);
      if (CpuChannel->Enabled < 0) {
        local_18.StartCycles = param_1->StartCycles;
        local_18.TimeoutCycles = param_1->TimeoutCycles;
        bVar2 = WaitImpl(this,&local_18);
        TaskTrace::FWaitingScope::~FWaitingScope(local_res8);
        return bVar2;
      }
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId185,"Tasks::Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                 ,0xb9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId185);
      local_18.StartCycles = param_1->StartCycles;
      local_18.TimeoutCycles = param_1->TimeoutCycles;
      bVar2 = WaitImpl(this,&local_18);
      FCpuProfilerTrace::OutputEndEvent();
      TaskTrace::FWaitingScope::~FWaitingScope(local_res8);
      return bVar2;
    }
    if (uVar1 != 0) {
      QueryPerformanceCounter(&local_res18);
      if ((ulonglong)local_res18 <= param_1->StartCycles + uVar1) goto LAB_141a99ab4;
    }
  }
  return (bool)(this->Subsequents).bIsClosed;
}

// WaitImpl @ 141a99b90

bool __thiscall UE::Tasks::Private::FTaskBase::WaitImpl(FTaskBase *this,FTimeout *param_1)

{
  TEventCount<unsigned_int> *pTVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  double dVar4;
  FMonotonicTimeSpan FVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  atomic<unsigned_int> *local_88;
  uint local_80;
  FTimeout local_78;
  FWaitState local_68 [3];
  
  dVar6 = __real_7ff0000000000000;
  do {
    local_78.StartCycles = param_1->StartCycles;
    local_78.TimeoutCycles = param_1->TimeoutCycles;
    TryRetractAndExecute(this,&local_78,0);
    iVar8 = 0;
    while ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      uVar2 = param_1->TimeoutCycles;
      if (((uVar2 != 0xffffffffffffffff) &&
          ((uVar2 == 0 ||
           (QueryPerformanceCounter(&local_res8),
           param_1->StartCycles + uVar2 < (ulonglong)local_res8)))) ||
         (iVar8 = iVar8 + 1, iVar8 == 0x28)) break;
    }
    if (((this->Subsequents).bIsClosed != (atomic<bool>)0x0) ||
       ((uVar3 = param_1->TimeoutCycles, uVar3 != 0xffffffffffffffff &&
        ((uVar3 == 0 ||
         (QueryPerformanceCounter(&local_res10),
         param_1->StartCycles + uVar3 < (ulonglong)local_res10)))))) {
      return (bool)(this->Subsequents).bIsClosed;
    }
    uVar7 = (uint)(this->StateChangeEvent).Count & 0xfffffffe;
    LOCK();
    (this->StateChangeEvent).Count =
         (atomic<unsigned_int>)((uint)(this->StateChangeEvent).Count | 1);
    UNLOCK();
    if ((this->Subsequents).bIsClosed != (atomic<bool>)0x0) {
      return true;
    }
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId255,"FTaskBase::WaitImpl_StateChangeEvent_WaitFor",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                 ,0xff);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId255);
    }
    FCpuProfilerTrace::FlushThreadBuffer();
    pTVar1 = &this->StateChangeEvent;
    FVar5.Time = dVar6;
    if (uVar3 != 0xffffffffffffffff) {
      dVar4 = (double)uVar3 * FGenericPlatformTime::SecondsPerCycle64;
      QueryPerformanceCounter(local_res18);
      FVar5.Time = dVar4 - (double)(local_res18[0].QuadPart - param_1->StartCycles) *
                           FGenericPlatformTime::SecondsPerCycle64;
    }
    if (((uint)pTVar1->Count & 0xfffffffe) == uVar7) {
      local_88 = &pTVar1->Count;
      local_80 = uVar7;
      ParkingLot::Private::WaitFor
                (local_68,pTVar1,
                 TFunctionWithContext<bool___cdecl(void)>::
                 Call<_UE::TEventCount<unsigned_int>::WaitFor_::__l5::<lambda_1>_>,&local_88,
                 (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar5);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  } while( true );
}

// WaitWithNamedThreadsSupport @ 141a9a0a0

void __thiscall UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport(FTaskBase *this)

{
  bool bVar1;
  bool bVar2;
  FWaitingScope local_res8 [8];
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_18;
  undefined8 local_10;
  
  if ((this->Subsequents).bIsClosed == (atomic<bool>)0x0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                 ,0xd2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
    }
    TaskTrace::FWaitingScope::FWaitingScope(local_res8,(ulong64)this->TraceId);
    QueryPerformanceCounter(&local_res10);
    local_18 = local_res10;
    local_10 = 0xffffffffffffffff;
    TryRetractAndExecute(this,(FTimeout *)&local_18.s,0);
    if (((this->Subsequents).bIsClosed == (atomic<bool>)0x0) &&
       (bVar1 = TryWaitOnNamedThread(this), !bVar1)) {
      QueryPerformanceCounter(&local_res10);
      local_18 = local_res10;
      local_10 = 0xffffffffffffffff;
      WaitImpl(this,(FTimeout *)&local_18.s);
    }
    TaskTrace::FWaitingScope::~FWaitingScope(local_res8);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// AddPrerequisites<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>,0> @ 141bd19d0

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>,0>
          (FTaskBase *this,TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_> *param_1,
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
        `TCheckedPointerIterator<UE::Tasks::FTaskEvent_const_,int,0>::operator!='::__l2::<lambda_1>
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
LAB_141bd1ae1:
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
      goto LAB_141bd1ae1;
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

// AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,0> @ 141d5e800

void __thiscall
UE::Tasks::Private::FTaskBase::
AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,0>
          (FTaskBase *this,TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *param_1,
          bool param_2)

{
  atomic<unsigned_int> *paVar1;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *pTVar2;
  atomic<unsigned_char> aVar3;
  atomic<unsigned_int> aVar4;
  longlong lVar5;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar6;
  code *pcVar7;
  FMutex *pFVar8;
  bool bVar9;
  int iVar10;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar11;
  int iVar12;
  ForElementType<UE::Tasks::Private::FTaskBase_*> *pFVar13;
  bool bVar14;
  
  if (((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0x118,L"Prerequisites can be added only before the task is launched"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  LOCK();
  paVar1 = &this->NumLocks;
  aVar4 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 2);
  UNLOCK();
  pTVar2 = param_1 + 1;
  bVar9 = false;
  iVar12 = 0;
  do {
    if (param_1 == pTVar2) {
      if ((0x7fffffff < (int)aVar4 + 2U) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x152,L"Max number of nested tasks reached: %d"), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (bVar9) {
        pFVar8 = &(this->Prerequisites).Mutex;
        LOCK();
        aVar3 = pFVar8->State;
        pFVar8->State = (atomic<unsigned_char>)((char)pFVar8->State + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar8);
        }
      }
      if (iVar12 != 0) {
        LOCK();
        this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar12);
        UNLOCK();
      }
      return;
    }
    lVar5 = *(longlong *)param_1;
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0xd0) != '\0')) {
LAB_141d5e8f6:
      iVar12 = iVar12 + 1;
    }
    else {
      pFVar8 = (FMutex *)(lVar5 + 0xd1);
      LOCK();
      bVar14 = pFVar8->State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        pFVar8->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        FMutex::LockSlow(pFVar8);
      }
      if (*(char *)(lVar5 + 0xd0) != '\0') {
        LOCK();
        aVar3 = pFVar8->State;
        pFVar8->State = (atomic<unsigned_char>)((char)pFVar8->State + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar8);
        }
        goto LAB_141d5e8f6;
      }
      iVar10 = *(int *)(lVar5 + 200);
      if (iVar10 == *(int *)(lVar5 + 0xcc)) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                           (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)(lVar5 + 0xb8),
                            (int *)(lVar5 + 0xcc));
      }
      *(int *)(lVar5 + 200) = iVar10 + 1;
      pFVar13 = (ForElementType<UE::Tasks::Private::FTaskBase_*> *)(lVar5 + 0xb8);
      if (*(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar5 + 0xc0) !=
          (ForElementType<UE::Tasks::Private::FTaskBase_*> *)0x0) {
        pFVar13 = *(ForElementType<UE::Tasks::Private::FTaskBase_*> **)(lVar5 + 0xc0);
      }
      *(FTaskBase **)(pFVar13->InlineData + (longlong)iVar10 * 8) = this;
      LOCK();
      aVar3 = pFVar8->State;
      pFVar8->State = (atomic<unsigned_char>)((char)pFVar8->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar8);
      }
      TaskTrace::SubsequentAdded(*(ulong64 *)(lVar5 + 0x50),(ulong64)this->TraceId);
      LOCK();
      *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
      UNLOCK();
      if (param_2 != false) {
        pFVar8 = &(this->Prerequisites).Mutex;
        LOCK();
        bVar9 = pFVar8->State == (atomic<unsigned_char>)0x0;
        if (bVar9) {
          pFVar8->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar9) {
          FMutex::LockSlow(pFVar8);
        }
        param_2 = false;
        bVar9 = true;
      }
      iVar10 = (this->Prerequisites).Prerequisites.ArrayNum;
      if (iVar10 == (this->Prerequisites).Prerequisites.ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                           (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                  &this->Prerequisites,&(this->Prerequisites).Prerequisites.ArrayMax
                           );
      }
      (this->Prerequisites).Prerequisites.ArrayNum = iVar10 + 1;
      FVar6 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
      if (FVar6 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
        FVar11 = FVar6;
      }
      *(longlong *)((longlong)FVar11 + (longlong)iVar10 * 8) = lVar5;
    }
    param_1 = (TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> *)((longlong)param_1 + 8);
  } while( true );
}

// AddPrerequisites<std::initializer_list<UE::Tasks::TTask<void>_>,0> @ 141d5ea60

void __thiscall
UE::Tasks::Private::FTaskBase::AddPrerequisites<std::initializer_list<UE::Tasks::TTask<void>_>,0>
          (FTaskBase *this,initializer_list<UE::Tasks::TTask<void>_> *param_1,bool param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> *this_00;
  FMutex *pFVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  atomic<unsigned_int> aVar5;
  TTask<void> *pTVar6;
  TTask<void> TVar7;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar13;
  int iVar14;
  ForElementType<UE::Tasks::Private::FTaskBase_*> *pFVar15;
  TTask<void> *pTVar16;
  
  iVar14 = (int)((longlong)param_1->_Last - (longlong)param_1->_First >> 3);
  if (0 < iVar14) {
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
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + iVar14);
    UNLOCK();
    pTVar6 = param_1->_Last;
    iVar14 = 0;
    bVar10 = false;
    for (pTVar16 = param_1->_First; pTVar16 != pTVar6; pTVar16 = pTVar16 + 1) {
      TVar7 = *pTVar16;
      if ((TVar7 == (TTask<void>)0x0) || (*(char *)((longlong)TVar7 + 0xd0) != '\0')) {
LAB_141d5eb6b:
        iVar14 = iVar14 + 1;
      }
      else {
        this_00 = (atomic<unsigned_char> *)((longlong)TVar7 + 0xd1);
        LOCK();
        FVar3.State = *this_00;
        if (FVar3.State == (atomic<unsigned_char>)0x0) {
          *this_00 = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (FVar3.State != (atomic<unsigned_char>)0x0) {
          FMutex::LockSlow((FMutex *)this_00);
        }
        if (*(char *)((longlong)TVar7 + 0xd0) != '\0') {
          LOCK();
          aVar4 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread((FMutex *)this_00);
          }
          goto LAB_141d5eb6b;
        }
        iVar12 = *(int *)((longlong)TVar7 + 200);
        if (iVar12 == *(int *)((longlong)TVar7 + 0xcc)) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    ((longlong)TVar7 + 0xb8),(int *)((longlong)TVar7 + 0xcc));
        }
        *(int *)((longlong)TVar7 + 200) = iVar12 + 1;
        pFVar15 = (ForElementType<UE::Tasks::Private::FTaskBase_*> *)((longlong)TVar7 + 0xb8);
        if (*(ForElementType<UE::Tasks::Private::FTaskBase_*> **)((longlong)TVar7 + 0xc0) !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*> *)0x0) {
          pFVar15 = *(ForElementType<UE::Tasks::Private::FTaskBase_*> **)((longlong)TVar7 + 0xc0);
        }
        *(FTaskBase **)(pFVar15->InlineData + (longlong)iVar12 * 8) = this;
        LOCK();
        aVar4 = *this_00;
        *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread((FMutex *)this_00);
        }
        TaskTrace::SubsequentAdded(*(ulong64 *)((longlong)TVar7 + 0x50),(ulong64)this->TraceId);
        LOCK();
        *(int *)((longlong)TVar7 + 0x30) = *(int *)((longlong)TVar7 + 0x30) + 1;
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
        iVar12 = (this->Prerequisites).Prerequisites.ArrayNum;
        if (iVar12 == (this->Prerequisites).Prerequisites.ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                             (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                    &this->Prerequisites,
                              &(this->Prerequisites).Prerequisites.ArrayMax);
        }
        (this->Prerequisites).Prerequisites.ArrayNum = iVar12 + 1;
        FVar8 = (this->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&this->Prerequisites;
        if (FVar8 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          FVar13 = FVar8;
        }
        *(TTask<void> *)((longlong)FVar13 + (longlong)iVar12 * 8) = TVar7;
      }
    }
    if ((0x7fffffff <
         (uint)((int)((longlong)param_1->_Last - (longlong)param_1->_First >> 3) + (int)aVar5)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0x152,L"Max number of nested tasks reached: %d"), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (bVar10) {
      pFVar2 = &(this->Prerequisites).Mutex;
      LOCK();
      aVar4 = pFVar2->State;
      pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar2);
      }
    }
    if (iVar14 != 0) {
      LOCK();
      this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks - iVar14);
      UNLOCK();
    }
  }
  return;
}

// AddNested @ 141d76870

void __thiscall UE::Tasks::Private::FTaskBase::AddNested(FTaskBase *this,FTaskBase *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  paVar1 = &this->NumLocks;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0xfffffffe) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x1c2,L"Max number of nested tasks reached: %d");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uint)aVar2 < 0x80000001) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevNumLocks > ExecutionFlag",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x1c3,
                       L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = AddSubsequent(param_1,this);
  if (bVar4) {
    LOCK();
    param_1->RefCount = (atomic<unsigned_int>)((int)param_1->RefCount + 1);
    UNLOCK();
    FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
              (&this->Prerequisites,param_1);
    return;
  }
  LOCK();
  this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks + -1);
  UNLOCK();
  return;
}

// AddPrerequisites @ 141d76940

bool __thiscall UE::Tasks::Private::FTaskBase::AddPrerequisites(FTaskBase *this,FTaskBase *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if ((this->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this->NumLocks)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0xe3,L"Prerequisites can be added only before the task is launched");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  LOCK();
  paVar1 = &this->NumLocks;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  if (0x7fffffff < (int)aVar2 + 1U) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevNumLocks + 1 < ExecutionFlag",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0xea,L"Max number of task prerequisites reached: %d");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = AddSubsequent(param_1,this);
  if (!bVar4) {
    LOCK();
    this->NumLocks = (atomic<unsigned_int>)((int)this->NumLocks + -1);
    UNLOCK();
    return false;
  }
  LOCK();
  param_1->RefCount = (atomic<unsigned_int>)((int)param_1->RefCount + 1);
  UNLOCK();
  FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
            (&this->Prerequisites,param_1);
  return true;
}

