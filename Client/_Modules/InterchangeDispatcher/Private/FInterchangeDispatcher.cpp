// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 19

// FInterchangeDispatcher @ 14e660830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInterchangeDispatcher * __thiscall
UE::Interchange::FInterchangeDispatcher::FInterchangeDispatcher
          (FInterchangeDispatcher *this,FString *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPlatformMemoryStats *pFVar8;
  FInterchangeDispatcher *pFVar9;
  uint uVar10;
  FPlatformMemoryStats local_a8;
  
  this->_padding_ = (longlong)&___7FInterchangeDispatcher_Interchange_UE__6B_;
  ::FString::FString(&this->ResultFolder,param_1);
  (this->TaskPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskPool).ArrayNum = 0;
  (this->TaskPool).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TaskPoolCriticalSection,4000);
  this->NextTaskIndex = 0;
  this->CompletedTaskCount = 0;
  piVar1 = &(this->WorkerHandlers).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->WorkerHandlers).ArrayMax;
  *piVar2 = 0;
  (this->InterchangeWorkerFatalError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterchangeWorkerFatalError).Data.ArrayNum = 0;
  (this->InterchangeWorkerFatalError).Data.ArrayMax = 0;
  (this->WorkerApplicationPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkerApplicationPath).Data.ArrayNum = 0;
  (this->WorkerApplicationPath).Data.ArrayMax = 0;
  (this->WorkerHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkerHandler_Deprecated).Ptr = (FInterchangeWorkerHandler *)0x0;
  if (-1 < param_2) {
    if (param_2 == 0) {
      param_2 = FWindowsPlatformMisc::NumberOfCores();
    }
    uVar6 = FWindowsPlatformMisc::NumberOfCores();
    pFVar8 = FWindowsPlatformMemory::GetStats(&local_a8);
    iVar3 = *piVar1;
    uVar10 = (uint)((double)(ulonglong)pFVar8->_padding_ * ___real_3de5555555555555 +
                   __real_3fe0000000000000);
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
    if (param_2 < (int)uVar10) {
      uVar10 = param_2;
    }
    if (iVar3 < (int)uVar10) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar10 - iVar3,&(this->WorkerHandlers).AllocatorInstance,piVar1,piVar2)
      ;
      memset((this->WorkerHandlers).AllocatorInstance.Data + (longlong)iVar7 * 8,0,
             (longlong)(int)(uVar10 - iVar3) << 3);
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar3) {
        uVar6 = iVar3 - uVar10;
        if (((int)(uVar6 | uVar10) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FInterchangeDispatcher *)(*pcVar4)();
          return pFVar9;
        }
        if (uVar6 != 0) {
          TArray<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(&this->WorkerHandlers,uVar10,uVar6);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->WorkerHandlers).AllocatorInstance,*piVar1,piVar2);
        }
      }
    }
  }
  return this;
}

// ~FInterchangeDispatcher @ 14e660f30

void __thiscall
UE::Interchange::FInterchangeDispatcher::~FInterchangeDispatcher(FInterchangeDispatcher *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FInterchangeWorkerHandler *pFVar3;
  char cVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FInterchangeDispatcher_Interchange_UE__6B_;
  pIVar5 = IFileManager::Get();
  pwVar7 = L"";
  if ((this->ResultFolder).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->ResultFolder).Data.AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,pwVar6);
  if (cVar4 != '\0') {
    pIVar5 = IFileManager::Get();
    if ((this->ResultFolder).Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)(this->ResultFolder).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5,pwVar7,0,1);
  }
  this_00 = (this->WorkerHandlers).AllocatorInstance.Data;
  iVar2 = (this->WorkerHandlers).ArrayNum;
  pFVar1 = this_00 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerHandlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    if ((*(longlong *)this_00 != 0) && ((*(byte *)(*(longlong *)this_00 + 0xd8) & 8) == 0)) {
      *(undefined1 *)(*(longlong *)this_00 + 0x128) = 1;
      pFVar3 = *(FInterchangeWorkerHandler **)this_00;
      if (pFVar3 != (FInterchangeWorkerHandler *)0x0) {
        *(undefined8 *)this_00 = 0;
        TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
                  ((TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *)this_00,pFVar3);
      }
    }
    this_00 = this_00 + 8;
  }
  TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
            ((TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *)
             &this->WorkerHandler_Deprecated,(this->WorkerHandler_Deprecated).Ptr);
  DestructItems<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int>
            ((TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>
              *)(this->WorkerHandlers).AllocatorInstance.Data,(this->WorkerHandlers).ArrayNum);
  pFVar1 = (this->WorkerHandlers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkerApplicationPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterchangeWorkerFatalError).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TaskPoolCriticalSection);
  DestructItems<UE::Interchange::FTask,int>
            ((FTask *)(this->TaskPool).AllocatorInstance.Data,(this->TaskPool).ArrayNum);
  pFVar1 = (this->TaskPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResultFolder).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddTask @ 14e662290

int __thiscall
UE::Interchange::FInterchangeDispatcher::AddTask(FInterchangeDispatcher *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  bVar3 = IsValid(this);
  if (!bVar3) {
    return -1;
  }
  lpCriticalSection = &this->TaskPoolCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar4 = (this->TaskPool).ArrayNum;
    piVar1 = &(this->TaskPool).ArrayMax;
    if (uVar4 == *piVar1) {
      uVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->TaskPool).AllocatorInstance,piVar1);
    }
    pFVar6 = (this->TaskPool).AllocatorInstance.Data;
    (this->TaskPool).ArrayNum = uVar4 + 1;
    pFVar6 = pFVar6 + (longlong)(int)uVar4 * 0x58;
    *(undefined8 *)&pFVar6->field_0x0 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined4 *)&pFVar6[0x10].field_0x0 = 0xffffffff;
    *(undefined4 *)(pFVar6 + 0x14) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)&pFVar6[0x20].field_0x0 = 0;
    *(undefined8 *)(pFVar6 + 0x28) = 0;
    *(undefined8 *)&pFVar6[0x30].field_0x0 = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)&pFVar6[0x40].field_0x0 = 0;
    *(undefined4 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)&pFVar6[0x50].field_0x0 = 0;
    ::FString::operator=((FString *)pFVar6,param_1);
    *(undefined4 *)(pFVar6 + 0x14) = 2;
    uVar7 = 0;
    if ((int)uVar4 < (this->TaskPool).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    *(uint *)((this->TaskPool).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x58 + 0x10) = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// AddTask @ 14e6623f0

int __thiscall
UE::Interchange::FInterchangeDispatcher::AddTask
          (FInterchangeDispatcher *this,FString *param_1,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  bVar3 = IsValid(this);
  if (bVar3) {
    lpCriticalSection = &this->TaskPoolCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar4 = (this->TaskPool).ArrayNum;
    piVar1 = &(this->TaskPool).ArrayMax;
    if (uVar4 == *piVar1) {
      uVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->TaskPool).AllocatorInstance,piVar1);
    }
    pFVar7 = (this->TaskPool).AllocatorInstance.Data;
    (this->TaskPool).ArrayNum = uVar4 + 1;
    lVar8 = (longlong)(int)uVar4 * 0x58;
    pFVar7 = pFVar7 + lVar8;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    *(undefined4 *)&pFVar7[0x10].field_0x0 = 0xffffffff;
    *(undefined4 *)(pFVar7 + 0x14) = 0;
    *(undefined8 *)(pFVar7 + 0x18) = 0;
    *(undefined8 *)&pFVar7[0x20].field_0x0 = 0;
    *(undefined8 *)(pFVar7 + 0x28) = 0;
    *(undefined8 *)&pFVar7[0x30].field_0x0 = 0;
    *(undefined8 *)(pFVar7 + 0x38) = 0;
    *(undefined8 *)&pFVar7[0x40].field_0x0 = 0;
    *(undefined4 *)(pFVar7 + 0x48) = 0;
    *(undefined8 *)&pFVar7[0x50].field_0x0 = 0;
    ::FString::operator=((FString *)pFVar7,param_1);
    *(undefined4 *)(pFVar7 + 0x14) = 2;
    uVar5 = 0;
    if ((int)uVar4 < (this->TaskPool).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    *(uint *)((this->TaskPool).AllocatorInstance.Data + lVar8 + 0x10) = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (uVar4 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar4 < (this->TaskPool).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 ((this->TaskPool).AllocatorInstance.Data + lVar8 + 0x38),param_2);
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return uVar4;
}

// CloseHandlers @ 14e662600

void __thiscall UE::Interchange::FInterchangeDispatcher::CloseHandlers(FInterchangeDispatcher *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FInterchangeWorkerHandler *pFVar3;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->WorkerHandlers).AllocatorInstance.Data;
  iVar2 = (this->WorkerHandlers).ArrayNum;
  pFVar1 = this_00 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerHandlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    if ((*(longlong *)this_00 != 0) && ((*(byte *)(*(longlong *)this_00 + 0xd8) & 8) == 0)) {
      *(undefined1 *)(*(longlong *)this_00 + 0x128) = 1;
      pFVar3 = *(FInterchangeWorkerHandler **)this_00;
      if (pFVar3 != (FInterchangeWorkerHandler *)0x0) {
        *(undefined8 *)this_00 = 0;
        TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
                  ((TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *)this_00,pFVar3);
      }
    }
    this_00 = this_00 + 8;
  }
  return;
}

// EmptyQueueTasks @ 14e6631c0

/* WARNING: Removing unreachable block (ram,0x00014e6634f6) */

void __thiscall
UE::Interchange::FInterchangeDispatcher::EmptyQueueTasks(FInterchangeDispatcher *this)

{
  code *pcVar1;
  bool bVar2;
  TOptional<UE::Interchange::FTask> *pTVar3;
  undefined1 local_128 [56];
  undefined1 local_f0 [8];
  ForAnyElementType FStack_e8;
  int local_e0;
  double local_d8;
  bool local_d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  TOptional<UE::Interchange::FTask> local_78;
  
  GetNextTask(this,(TOptional<UE::Interchange::FTask> *)local_128);
  while( true ) {
    if (local_d0 == false) {
      return;
    }
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    if ((local_d0 == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) break;
    SetTaskState(this,local_128._16_4_,ProcessFailed,&local_b8,&local_c8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pTVar3 = GetNextTask(this,&local_78);
    if (pTVar3 != (TOptional<UE::Interchange::FTask> *)local_128) {
      if (pTVar3->bIsSet == false) {
        if (local_d0 != false) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
                     (FWriteAccessScope *)&local_90);
          if ((local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_e8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_e8,0,0,0x10);
            local_e0 = 0;
          }
          if (local_90.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
          }
          if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_f0);
          DestructItems<FString,int>((FString *)local_128._40_8_,local_128._48_4_);
          if ((FScriptContainerElement *)local_128._40_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._40_8_);
          }
          if ((FScriptContainerElement *)local_128._24_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._24_8_);
          }
          if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._0_8_);
          }
          local_d0 = false;
        }
      }
      else {
        if (local_d0 != false) {
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
          DestructItems<FString,int>((FString *)local_128._40_8_,local_128._48_4_);
          if ((FScriptContainerElement *)local_128._40_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._40_8_);
          }
          if ((FScriptContainerElement *)local_128._24_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._24_8_);
          }
          if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._0_8_);
          }
        }
        local_128._0_8_ = (pTVar3->TypedValue).JsonDescription.Data.AllocatorInstance.Data;
        (pTVar3->TypedValue).JsonDescription.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_128._8_4_ = (pTVar3->TypedValue).JsonDescription.Data.ArrayNum;
        local_128._12_4_ = (pTVar3->TypedValue).JsonDescription.Data.ArrayMax;
        (pTVar3->TypedValue).JsonDescription.Data.ArrayNum = 0;
        (pTVar3->TypedValue).JsonDescription.Data.ArrayMax = 0;
        local_128._16_4_ = (pTVar3->TypedValue).Index;
        local_128._20_4_ = (pTVar3->TypedValue).State;
        local_128._24_8_ = (pTVar3->TypedValue).JsonResult.Data.AllocatorInstance.Data;
        (pTVar3->TypedValue).JsonResult.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        local_128._32_4_ = (pTVar3->TypedValue).JsonResult.Data.ArrayNum;
        local_128._36_4_ = (pTVar3->TypedValue).JsonResult.Data.ArrayMax;
        (pTVar3->TypedValue).JsonResult.Data.ArrayNum = 0;
        (pTVar3->TypedValue).JsonResult.Data.ArrayMax = 0;
        local_128._40_8_ = (pTVar3->TypedValue).JsonMessages.AllocatorInstance.Data;
        (pTVar3->TypedValue).JsonMessages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128._48_4_ = (pTVar3->TypedValue).JsonMessages.ArrayNum;
        local_128._52_4_ = (pTVar3->TypedValue).JsonMessages.ArrayMax;
        (pTVar3->TypedValue).JsonMessages.ArrayNum = 0;
        (pTVar3->TypedValue).JsonMessages.ArrayMax = 0;
        local_f0 = (undefined1  [8])0x0;
        FStack_e8.Data = (FScriptContainerElement *)0x0;
        local_e0 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(pTVar3->TypedValue).OnTaskCompleted,(FWriteAccessScope *)&local_a8);
        if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data);
        }
        FStack_e8.Data =
             *(FScriptContainerElement **)&(pTVar3->TypedValue).OnTaskCompleted.field_0x8;
        *(undefined8 *)&(pTVar3->TypedValue).OnTaskCompleted.field_0x8 = 0;
        local_e0 = *(int *)&(pTVar3->TypedValue).OnTaskCompleted.field_0x10;
        *(undefined4 *)&(pTVar3->TypedValue).OnTaskCompleted.field_0x10 = 0;
        if (local_a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
        }
        local_d8 = (pTVar3->TypedValue).RunningStateStartTime;
        local_d0 = true;
      }
    }
    if (local_78.bIsSet != false) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78.TypedValue.OnTaskCompleted);
      DestructItems<FString,int>
                ((FString *)local_78.TypedValue.JsonMessages.AllocatorInstance.Data,
                 local_78.TypedValue.JsonMessages.ArrayNum);
      if (local_78.TypedValue.JsonMessages.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_78.TypedValue.JsonMessages.AllocatorInstance.Data);
      }
      if (local_78.TypedValue.JsonResult.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.TypedValue.JsonResult.Data.AllocatorInstance.Data);
      }
      if (local_78.TypedValue.JsonDescription.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.TypedValue.JsonDescription.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)0x0,0);
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// GetNextTask @ 14e6656f0

TOptional<UE::Interchange::FTask> * __thiscall
UE::Interchange::FInterchangeDispatcher::GetNextTask
          (FInterchangeDispatcher *this,TOptional<UE::Interchange::FTask> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this_00;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TOptional<UE::Interchange::FTask> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  LARGE_INTEGER local_res8;
  
  lpCriticalSection = &this->TaskPoolCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  while( true ) {
    uVar3 = this->NextTaskIndex;
    uVar12 = 0;
    if (((int)uVar3 < 0) || ((this->TaskPool).ArrayNum <= (int)uVar3)) break;
    uVar9 = uVar12;
    if ((int)uVar3 < (this->TaskPool).ArrayNum) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOptional<UE::Interchange::FTask> *)(*pcVar6)();
        return pTVar10;
      }
    }
    if (*(int *)((this->TaskPool).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x58 + 0x14) == 2)
    break;
    this->NextTaskIndex = this->NextTaskIndex + 1;
  }
  uVar3 = this->NextTaskIndex;
  if (((int)uVar3 < 0) || ((this->TaskPool).ArrayNum <= (int)uVar3)) {
    __return_storage_ptr__->bIsSet = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    uVar9 = uVar12;
    if ((int)uVar3 < (this->TaskPool).ArrayNum) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOptional<UE::Interchange::FTask> *)(*pcVar6)();
        return pTVar10;
      }
    }
    *(undefined4 *)((this->TaskPool).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x58 + 0x14) =
         1;
    QueryPerformanceCounter(&local_res8);
    uVar3 = this->NextTaskIndex;
    if ((int)uVar3 < (this->TaskPool).ArrayNum) {
      uVar12 = ~uVar3 >> 0x1f;
    }
    dVar7 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOptional<UE::Interchange::FTask> *)(*pcVar6)();
        return pTVar10;
      }
    }
    *(double *)((this->TaskPool).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x58 + 0x50) =
         dVar7;
    uVar3 = this->NextTaskIndex;
    this->NextTaskIndex = uVar3 + 1;
    uVar12 = 0;
    if ((int)uVar3 < (this->TaskPool).ArrayNum) {
      uVar12 = ~uVar3 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TOptional<UE::Interchange::FTask> *)(*pcVar6)();
        return pTVar10;
      }
    }
    pFVar11 = (this->TaskPool).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x58;
    ::FString::FString((FString *)__return_storage_ptr__,(FString *)pFVar11);
    (__return_storage_ptr__->TypedValue).Index = *(int *)&pFVar11[0x10].field_0x0;
    (__return_storage_ptr__->TypedValue).State = *(ETaskState *)(pFVar11 + 0x14);
    ::FString::FString(&(__return_storage_ptr__->TypedValue).JsonResult,(FString *)(pFVar11 + 0x18))
    ;
    pTVar1 = &(__return_storage_ptr__->TypedValue).JsonMessages;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar2 = &(__return_storage_ptr__->TypedValue).JsonMessages.ArrayMax;
    iVar4 = *(int *)&pFVar11[0x30].field_0x0;
    pFVar5 = *(FString **)(pFVar11 + 0x28);
    (__return_storage_ptr__->TypedValue).JsonMessages.ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
    this_00 = &(__return_storage_ptr__->TypedValue).OnTaskCompleted;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&(__return_storage_ptr__->TypedValue).OnTaskCompleted.field_0x8 = 0;
    *(undefined4 *)&(__return_storage_ptr__->TypedValue).OnTaskCompleted.field_0x10 = 0;
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (this_00,(TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)(pFVar11 + 0x38));
    (__return_storage_ptr__->TypedValue).RunningStateStartTime = *(double *)&pFVar11[0x50].field_0x0
    ;
    __return_storage_ptr__->bIsSet = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetTaskState @ 14e665ce0

void __thiscall
UE::Interchange::FInterchangeDispatcher::GetTaskState
          (FInterchangeDispatcher *this,int param_1,ETaskState *param_2,double *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lpCriticalSection = &this->TaskPoolCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1 < 0) || ((this->TaskPool).ArrayNum <= param_1)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2789720497296768891>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcher.cpp"
                       ,0x85,"TaskPool.IsValidIndex(TaskIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->TaskPool).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->TaskPool).AllocatorInstance.Data;
    *param_2 = *(ETaskState *)(pFVar1 + (longlong)param_1 * 0x58 + 0x14);
    *param_3 = *(double *)(pFVar1 + (longlong)param_1 * 0x58 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00014e665dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetTaskState @ 14e665df0

void __thiscall
UE::Interchange::FInterchangeDispatcher::GetTaskState
          (FInterchangeDispatcher *this,int param_1,ETaskState *param_2,FString *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  lpCriticalSection = &this->TaskPoolCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1 < 0) || ((this->TaskPool).ArrayNum <= param_1)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2789720497296768877>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcher.cpp"
                       ,0x93,"TaskPool.IsValidIndex(TaskIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->TaskPool).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->TaskPool).AllocatorInstance.Data;
    *param_2 = *(ETaskState *)(pFVar1 + (longlong)param_1 * 0x58 + 0x14);
    iVar5 = *(int *)(pFVar1 + (longlong)param_1 * 0x58 + 0x20) + -1;
    if (*(int *)(pFVar1 + (longlong)param_1 * 0x58 + 0x20) == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(param_3,*(wchar_t **)(pFVar1 + (longlong)param_1 * 0x58 + 0x18),iVar5);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              (param_4,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                       (pFVar1 + (longlong)param_1 * 0x58 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00014e665f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetWorkerApplicationName @ 14e6660a0

wchar_t * __thiscall
UE::Interchange::FInterchangeDispatcher::GetWorkerApplicationName(FInterchangeDispatcher *this)

{
  return L"InterchangeWorker";
}

// GetWorkerApplicationPath @ 14e6660b0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::Interchange::FInterchangeDispatcher::GetWorkerApplicationPath(FInterchangeDispatcher *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EBuildConfiguration EVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = &this->WorkerApplicationPath;
  if ((this->WorkerApplicationPath).Data.ArrayNum < 2) {
    pwVar5 = (wchar_t *)(**(code **)(this->_padding_ + 0x18))();
    ::FString::FString(&local_28,pwVar5);
    EVar3 = FApp::GetBuildConfiguration();
    FWindowsPlatformProcess::GenerateApplicationPath(&local_38,&local_28,EVar3);
    bVar4 = FPaths::FileExists(&local_38);
    if (!bVar4) {
      pFVar6 = FWindowsPlatformProcess::GenerateApplicationPath(&local_18,&local_28,Development);
      if (&local_38 != pFVar6) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FPaths::FileExists(&local_38);
    if ((!bVar4) && (3 < (byte)LogInterchangeDispatcher._0_1_)) {
      FPaths::ConvertRelativePathToFull(&local_18,&local_38);
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_InterchangeWork_152f146f0,
                 (FLogCategoryBase *)&LogInterchangeDispatcher);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (pFVar1 != &local_38) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (this->WorkerApplicationPath).Data.ArrayNum = local_38.Data.ArrayNum;
      (this->WorkerApplicationPath).Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    return pFVar1;
  }
  return pFVar1;
}

// IsOver @ 14e666440

bool __thiscall UE::Interchange::FInterchangeDispatcher::IsOver(FInterchangeDispatcher *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->TaskPoolCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->TaskPool).ArrayNum;
    iVar2 = this->CompletedTaskCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2 == iVar1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// IsValid @ 14e666490

bool __thiscall UE::Interchange::FInterchangeDispatcher::IsValid(FInterchangeDispatcher *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->WorkerHandlers).AllocatorInstance.Data;
  iVar2 = (this->WorkerHandlers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerHandlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(longlong *)pFVar3 != 0) && ((*(byte *)(*(longlong *)pFVar3 + 0xd8) & 8) == 0)) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// SetTaskState @ 14e6681f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::FInterchangeDispatcher::SetTaskState
          (FInterchangeDispatcher *this,int param_1,ETaskState param_2,FString *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FString local_48;
  FReadAccessScope local_38;
  
  lpCriticalSection = &this->TaskPoolCriticalSection;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1 < 0) || ((this->TaskPool).ArrayNum <= param_1)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2789720497296768930>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcher.cpp"
                       ,0x5e,"TaskPool.IsValidIndex(TaskIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->TaskPool).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this->TaskPool).AllocatorInstance.Data + (longlong)param_1 * 0x58;
    if ((*(int *)(pFVar6 + 0x14) != 3) && (*(int *)(pFVar6 + 0x14) != 4)) {
      *(ETaskState *)(pFVar6 + 0x14) = param_2;
      ::FString::operator=((FString *)(pFVar6 + 0x18),param_3);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar6 + 0x28),param_4);
      iVar5 = *(int *)(pFVar6 + 8) + -1;
      if (*(int *)(pFVar6 + 8) == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&local_48,*(wchar_t **)pFVar6,iVar5);
      if (param_2 - ProcessOk < 2) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar6 + 0x38),
                   &local_38);
        if ((*(int *)(pFVar6 + 0x48) != 0) &&
           (plVar1 = *(longlong **)(pFVar6 + 0x40), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        this->CompletedTaskCount = this->CompletedTaskCount + 1;
      }
      if (param_2 == UnTreated) {
        this->NextTaskIndex = param_1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((5 < (byte)LogInterchangeDispatcher._0_1_) && (param_2 == ProcessOk)) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
      }
      if ((2 < (byte)LogInterchangeDispatcher._0_1_) && (param_2 == UnTreated)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
      }
      if ((1 < (byte)LogInterchangeDispatcher._0_1_) && (param_2 == ProcessFailed)) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
      }
      goto LAB_14e668408;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_14e668408:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SpawnHandlers @ 14e668450

void __thiscall UE::Interchange::FInterchangeDispatcher::SpawnHandlers(FInterchangeDispatcher *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  FSocket *pFVar5;
  void *pvVar6;
  bool bVar7;
  FInterchangeWorkerHandler *pFVar8;
  FInterchangeWorkerHandler *this_00;
  ISocketSubsystem *pIVar9;
  FScriptContainerElement *this_01;
  undefined1 local_res8 [8];
  FName local_res10;
  TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> local_48 [16];
  
  this_01 = (this->WorkerHandlers).AllocatorInstance.Data;
  iVar2 = (this->WorkerHandlers).ArrayNum;
  pFVar1 = this_01 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerHandlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar1) break;
    pFVar8 = ::operator_new(0x140);
    this_00 = (FInterchangeWorkerHandler *)0x0;
    if (pFVar8 != (FInterchangeWorkerHandler *)0x0) {
      this_00 = FInterchangeWorkerHandler::FInterchangeWorkerHandler
                          (pFVar8,this,&this->ResultFolder);
    }
    if (this_01 == (FScriptContainerElement *)local_48) {
      if (this_00 != (FInterchangeWorkerHandler *)0x0) {
        this_00->bShouldTerminate = true;
        bVar7 = ::FThread::IsJoinable(&this_00->IOThread);
        if (bVar7) {
          ::FThread::Join(&this_00->IOThread);
        }
        pFVar3 = (this_00->CurrentTasks).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->CurrentTasksLock);
        pFVar3 = (this_00->ResultFolder).Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (this_00->ThreadName).Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::FThread::~FThread(&this_00->IOThread);
        pTVar4 = (this_00->CommandIO).InCommands.Tail;
        while (pTVar4 != (TNode *)0x0) {
          (this_00->CommandIO).InCommands.Tail = pTVar4->NextNode;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar4->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar4,0x18);
          pTVar4 = (this_00->CommandIO).InCommands.Tail;
        }
        (this_00->NetworkInterface)._padding_ =
             (longlong)&___7FNetworkServerNode_Interchange_UE__6B_;
        pFVar5 = (this_00->NetworkInterface).ListeningSocket;
        if (pFVar5 != (FSocket *)0x0) {
          (**(code **)(pFVar5->_padding_ + 0x10))();
          local_res10.ComparisonIndex.Value = 0;
          local_res10.Number = 0;
          pIVar9 = ISocketSubsystem::Get(&local_res10);
          (**(code **)(pIVar9->_padding_ + 0x38))
                    (pIVar9,(this_00->NetworkInterface).ListeningSocket);
          (this_00->NetworkInterface).ListeningSocket = (FSocket *)0x0;
        }
        FNetworkNode::~FNetworkNode((FNetworkNode *)&this_00->NetworkInterface);
        DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                  (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                    &(this_00->OnWorkerHandlerExitLoop).field_0x8,
                   *(int *)&(this_00->OnWorkerHandlerExitLoop).field_0x10);
        pvVar6 = *(void **)&(this_00->OnWorkerHandlerExitLoop).field_0x8;
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)this_00);
        ::operator_delete(this_00,0x140);
      }
      this_01 = this_01 + 8;
    }
    else {
      pFVar8 = *(FInterchangeWorkerHandler **)this_01;
      *(FInterchangeWorkerHandler **)this_01 = this_00;
      TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
                ((TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *)this_01,pFVar8);
      this_01 = this_01 + 8;
    }
  }
  return;
}

// StartProcess @ 14e668650

void __thiscall UE::Interchange::FInterchangeDispatcher::StartProcess(FInterchangeDispatcher *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  FSocket *pFVar5;
  void *pvVar6;
  bool bVar7;
  FInterchangeWorkerHandler *pFVar8;
  FInterchangeWorkerHandler *this_00;
  ISocketSubsystem *pIVar9;
  FScriptContainerElement *this_01;
  undefined1 auStackX_8 [8];
  FName FStackX_10;
  TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> aTStack_48 [16];
  
  this_01 = (this->WorkerHandlers).AllocatorInstance.Data;
  iVar2 = (this->WorkerHandlers).ArrayNum;
  pFVar1 = this_01 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerHandlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (this_01 == pFVar1) break;
    pFVar8 = ::operator_new(0x140);
    this_00 = (FInterchangeWorkerHandler *)0x0;
    if (pFVar8 != (FInterchangeWorkerHandler *)0x0) {
      this_00 = FInterchangeWorkerHandler::FInterchangeWorkerHandler
                          (pFVar8,this,&this->ResultFolder);
    }
    if (this_01 == (FScriptContainerElement *)aTStack_48) {
      if (this_00 != (FInterchangeWorkerHandler *)0x0) {
        this_00->bShouldTerminate = true;
        bVar7 = ::FThread::IsJoinable(&this_00->IOThread);
        if (bVar7) {
          ::FThread::Join(&this_00->IOThread);
        }
        pFVar3 = (this_00->CurrentTasks).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->CurrentTasksLock);
        pFVar3 = (this_00->ResultFolder).Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (this_00->ThreadName).Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::FThread::~FThread(&this_00->IOThread);
        pTVar4 = (this_00->CommandIO).InCommands.Tail;
        while (pTVar4 != (TNode *)0x0) {
          (this_00->CommandIO).InCommands.Tail = pTVar4->NextNode;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar4->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar4,0x18);
          pTVar4 = (this_00->CommandIO).InCommands.Tail;
        }
        (this_00->NetworkInterface)._padding_ =
             (longlong)&___7FNetworkServerNode_Interchange_UE__6B_;
        pFVar5 = (this_00->NetworkInterface).ListeningSocket;
        if (pFVar5 != (FSocket *)0x0) {
          (**(code **)(pFVar5->_padding_ + 0x10))();
          FStackX_10.ComparisonIndex.Value = 0;
          FStackX_10.Number = 0;
          pIVar9 = ISocketSubsystem::Get(&FStackX_10);
          (**(code **)(pIVar9->_padding_ + 0x38))
                    (pIVar9,(this_00->NetworkInterface).ListeningSocket);
          (this_00->NetworkInterface).ListeningSocket = (FSocket *)0x0;
        }
        FNetworkNode::~FNetworkNode((FNetworkNode *)&this_00->NetworkInterface);
        DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                  (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                    &(this_00->OnWorkerHandlerExitLoop).field_0x8,
                   *(int *)&(this_00->OnWorkerHandlerExitLoop).field_0x10);
        pvVar6 = *(void **)&(this_00->OnWorkerHandlerExitLoop).field_0x8;
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)this_00);
        ::operator_delete(this_00,0x140);
      }
      this_01 = this_01 + 8;
    }
    else {
      pFVar8 = *(FInterchangeWorkerHandler **)this_01;
      *(FInterchangeWorkerHandler **)this_01 = this_00;
      TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
                ((TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *)this_01,pFVar8);
      this_01 = this_01 + 8;
    }
  }
  return;
}

// StopProcess @ 14e668c20

void __thiscall
UE::Interchange::FInterchangeDispatcher::StopProcess(FInterchangeDispatcher *this,bool param_1)

{
  FThread *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->WorkerHandlers).AllocatorInstance.Data;
  iVar2 = (this->WorkerHandlers).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerHandlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if ((*(longlong *)pFVar5 != 0) && ((*(byte *)(*(longlong *)pFVar5 + 0xd8) & 8) == 0)) {
      lVar3 = *(longlong *)pFVar5;
      *(undefined1 *)(lVar3 + 0x128) = 1;
      if (param_1) {
        this_00 = (FThread *)(lVar3 + 0xb0);
        bVar4 = ::FThread::IsJoinable(this_00);
        if (bVar4) {
          ::FThread::Join(this_00);
        }
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  EmptyQueueTasks(this);
  return;
}

// TerminateProcess @ 14e668ce0

void __thiscall
UE::Interchange::FInterchangeDispatcher::TerminateProcess(FInterchangeDispatcher *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FInterchangeWorkerHandler *pFVar3;
  char cVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  
  pIVar5 = IFileManager::Get();
  pwVar7 = L"";
  if ((this->ResultFolder).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->ResultFolder).Data.AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,pwVar6);
  if (cVar4 != '\0') {
    pIVar5 = IFileManager::Get();
    if ((this->ResultFolder).Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)(this->ResultFolder).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5,pwVar7,0,1);
  }
  this_00 = (this->WorkerHandlers).AllocatorInstance.Data;
  iVar2 = (this->WorkerHandlers).ArrayNum;
  pFVar1 = this_00 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerHandlers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    if ((*(longlong *)this_00 != 0) && ((*(byte *)(*(longlong *)this_00 + 0xd8) & 8) == 0)) {
      *(undefined1 *)(*(longlong *)this_00 + 0x128) = 1;
      pFVar3 = *(FInterchangeWorkerHandler **)this_00;
      if (pFVar3 != (FInterchangeWorkerHandler *)0x0) {
        *(undefined8 *)this_00 = 0;
        TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
                  ((TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *)this_00,pFVar3);
      }
    }
    this_00 = this_00 + 8;
  }
  return;
}

// WaitAllTaskToCompleteExecution @ 14e66acc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::FInterchangeDispatcher::WaitAllTaskToCompleteExecution
          (FInterchangeDispatcher *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FString local_48;
  FString local_38 [2];
  
  bVar5 = IsValid(this);
  fVar4 = __real_3dcccccd;
  if (bVar5) {
    lpCriticalSection = &this->TaskPoolCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar2 = (this->TaskPool).ArrayNum;
      iVar3 = this->CompletedTaskCount;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (iVar3 == iVar2) break;
      pFVar7 = (this->WorkerHandlers).AllocatorInstance.Data;
      iVar2 = (this->WorkerHandlers).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->WorkerHandlers).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) goto LAB_14e66ad9b;
        if ((*(longlong *)pFVar7 != 0) && ((*(byte *)(*(longlong *)pFVar7 + 0xd8) & 8) == 0)) break;
        pFVar7 = pFVar7 + 8;
      }
      FWindowsPlatformProcess::Sleep(fVar4);
    }
LAB_14e66ad9b:
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->TaskPool).ArrayNum;
    iVar3 = this->CompletedTaskCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar3 == iVar2) {
      if (5 < (byte)LogInterchangeDispatcher._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
        return;
      }
    }
    else if (2 < (byte)LogInterchangeDispatcher._0_1_) {
      pFVar6 = FPaths::EngineDir(local_38);
      FPaths::ConvertRelativePathToFull(&local_48,pFVar6);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else if (1 < (byte)LogInterchangeDispatcher._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    return;
  }
  return;
}

