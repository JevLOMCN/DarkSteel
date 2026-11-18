// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// FActiveSyncPoint @ 148804b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActiveSyncPoint * __thiscall UE::Tick::FActiveSyncPoint::FActiveSyncPoint(FActiveSyncPoint *this)

{
  byte *pbVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  FTickFunction::FTickFunction((FTickFunction *)this);
  this->_padding_ = (longlong)&___7FActiveSyncPoint_Tick_UE__6B_;
  (this->SyncPointDescription).RegisteredName.ComparisonIndex = 0;
  (this->SyncPointDescription).RegisteredName.Number = 0;
  (this->SyncPointDescription).SourceName.ComparisonIndex = 0;
  (this->SyncPointDescription).SourceName.Number = 0;
  (this->SyncPointDescription).EventType = Invalid;
  (this->SyncPointDescription).ActivationRules = Invalid;
  (this->SyncPointDescription).FirstPossibleTickGroup = '\0';
  (this->SyncPointDescription).LastPossibleTickGroup = '\x06';
  (this->SyncPointDescription).PrerequisiteSyncGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SyncPointDescription).PrerequisiteSyncGroups.ArrayNum = 0;
  (this->SyncPointDescription).PrerequisiteSyncGroups.ArrayMax = 0;
  (this->SyncPointId).SyncId = -1;
  (this->SyncPointId).BatchContext = -1;
  (this->WorldContextId).WorldId = -1;
  (this->ReactivationEvent).Reference = (FBaseGraphTask *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->WorkLock,4000);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  (this->ActiveWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveWork).ArrayNum = 0;
  (this->ActiveWork).ArrayMax = 0;
  (this->ExecutingWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutingWork).ArrayNum = 0;
  (this->ExecutingWork).ArrayMax = 0;
  this->FrameStatus = Unknown;
  return this;
}

// ~FActiveSyncPoint @ 14880bbf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Tick::FActiveSyncPoint::~FActiveSyncPoint(FActiveSyncPoint *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FBaseGraphTask *pFVar5;
  longlong *plVar6;
  
  pFVar4 = (this->ExecutingWork).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<UE::Tick::FActiveSyncPoint::FActiveSyncWork,int>
            ((FActiveSyncWork *)(this->ActiveWork).AllocatorInstance.Data,
             (this->ActiveWork).ArrayNum);
  pFVar4 = (this->ActiveWork).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->WorkLock);
  pFVar5 = (this->ReactivationEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar4 = (this->SyncPointDescription).PrerequisiteSyncGroups.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FTickFunction::~FTickFunction((FTickFunction *)this);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// AbandonWork @ 148816380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Tick::FActiveSyncPoint::AbandonWork(FActiveSyncPoint *this,FActiveSyncWorkHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FActiveSyncWork *pFVar6;
  
  lpCriticalSection = &this->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = *(uint *)&param_1->WorkIndex & 0xffffff;
  if (((param_1->SyncPoint).Object == (FActiveSyncPoint *)0x0) ||
     ((this->ActiveWork).ArrayNum <= (int)uVar5)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516751>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x331,"Handle.IsValid() && ActiveWork.IsValidIndex(WorkIndex)");
    if (bVar3) {
code_r0x0001488164dc:
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    if (((this->ActiveWork).ArrayNum <= (int)uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar6 = (FActiveSyncWork *)
             ((this->ActiveWork).AllocatorInstance.Data + (ulonglong)uVar5 * 0x10);
    if (((pFVar6->field0_0x0).StateValue & 1) != 0) {
      if (((pFVar6->field0_0x0).StateValue & 0x1e) != 0) {
        CancelRequestedWork(this,uVar5,pFVar6);
        (pFVar6->field0_0x0).StateValue = (pFVar6->field0_0x0).StateValue & 0xfffffff5;
        INSERT(param_1->WorkIndex,0,0x18,1);
        param_1->WorkIndex = (uint3)uVar2;
        param_1->field_0x13 = SUB41(uVar2,3);
        INSERT(param_1->WorkIndex,0,0x19,1);
        param_1->WorkIndex = (uint3)uVar2;
        param_1->field_0x13 = SUB41(uVar2,3);
        bVar3 = IsReadyToProcessWork(this);
        if (bVar3) {
          DispatchWorkTask(this,(TRefCountPtr<FBaseGraphTask> *)0x0);
        }
      }
      bVar3 = true;
      goto LAB_1488164e0;
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516747>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x335,"CurrentWork.bHasActiveHandle");
    if (bVar3) goto code_r0x0001488164dc;
  }
  bVar3 = false;
LAB_1488164e0:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// AllocateActiveWork @ 14881a490

uint __thiscall UE::Tick::FActiveSyncPoint::AllocateActiveWork(FActiveSyncPoint *this)

{
  int *piVar1;
  TArray<UE::Tick::FActiveSyncPoint::FActiveSyncWork,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar5 = (this->ActiveWork).ArrayNum;
  pTVar2 = &this->ActiveWork;
  uVar6 = 0;
  if (0 < (int)uVar5) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->ActiveWork).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      if (*(int *)((pTVar2->AllocatorInstance).Data + lVar7) == 0) {
        return uVar6;
      }
      uVar5 = (this->ActiveWork).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (int)uVar5);
  }
  if ((0x1fffffd < uVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveWork.Num() < FActiveSyncWorkHandle::MaxWorkIndex - 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x379,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  uVar5 = (this->ActiveWork).ArrayNum;
  piVar1 = &(this->ActiveWork).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
    (this->ActiveWork).ArrayNum = uVar5;
  }
  (this->ActiveWork).ArrayNum = uVar5 + 1;
  DefaultConstructItems<UE::Tick::FActiveSyncPoint::FActiveSyncWork,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10,1);
  return uVar5;
}

// CancelRequestedWork @ 1488289a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tick::FActiveSyncPoint::CancelRequestedWork
          (FActiveSyncPoint *this,int param_1,FActiveSyncWork *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  FTaskSyncManager *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  FTaskSyncManager *local_50;
  FScriptContainerElement *local_48;
  LPCRITICAL_SECTION local_40;
  
  if ((*(byte *)&param_2->field0_0x0 & 0x80) != 0) {
    local_50 = FTaskSyncManager::Get();
    lpCriticalSection = &local_50->ManagerLock;
    local_40 = (LPCRITICAL_SECTION)lpCriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = local_50;
    iVar2 = (local_50->BatchList).ArrayNum;
    uVar8 = (ulonglong)iVar2;
    pFVar13 = (local_50->BatchList).AllocatorInstance.Data;
    local_50 = (FTaskSyncManager *)CONCAT44(local_50._4_4_,iVar2);
    pFVar11 = pFVar13 + 0x70;
    local_48 = pFVar13 + uVar8 * 0x78;
    while( true ) {
      pFVar5 = local_48;
      if ((pFVar4->BatchList).ArrayNum != (int)uVar8) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar13 == pFVar5) break;
      iVar2 = *(int *)pFVar11;
      plVar12 = *(longlong **)(pFVar11 + -8);
      plVar1 = plVar12 + (longlong)iVar2 * 5;
      while( true ) {
        if (*(int *)pFVar11 != iVar2) {
          local_58[0] = 0;
          `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FTemporaryWorkRequest,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_58);
        }
        if (plVar12 == plVar1) break;
        if ((this == (FActiveSyncPoint *)*plVar12) && (param_1 == (int)plVar12[1])) {
          FActiveSyncWorkHandle::Reset((FActiveSyncWorkHandle *)(plVar12 + 2));
        }
        plVar12 = plVar12 + 5;
      }
      pFVar13 = pFVar13 + 0x78;
      uVar8 = (ulonglong)local_50 & 0xffffffff;
      pFVar11 = pFVar11 + 0x78;
    }
    if (local_40 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(local_40);
    }
  }
  if (((byte)(param_2->field0_0x0).StateValue & 0x24) == 0x24) {
    uVar10 = 0;
    uVar8 = uVar10;
    if (0 < (this->ExecutingWork).ArrayNum) {
      do {
        uVar9 = (uint)uVar10;
        uVar7 = 0;
        if ((int)uVar9 < (this->ExecutingWork).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this->ExecutingWork).AllocatorInstance.Data + uVar8) == param_1) {
          uVar7 = 0;
          if ((int)uVar9 < (this->ExecutingWork).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)((this->ExecutingWork).AllocatorInstance.Data + uVar8 + 8) = 0;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar8 = uVar8 + 0x10;
      } while ((int)(uVar9 + 1) < (this->ExecutingWork).ArrayNum);
    }
  }
  (param_2->field0_0x0).StateValue = (param_2->field0_0x0).StateValue & 0xffffffeb;
  return;
}

// DiagnosticContext @ 14882f920

FName __thiscall UE::Tick::FActiveSyncPoint::DiagnosticContext(FActiveSyncPoint *this,bool param_1)

{
  FName FVar1;
  undefined7 in_register_00000011;
  
  *(FName *)CONCAT71(in_register_00000011,param_1) = (this->SyncPointDescription).RegisteredName;
  FVar1._1_7_ = in_register_00000011;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  return FVar1;
}

// DiagnosticMessage @ 14882f9b0

FString * __thiscall
UE::Tick::FActiveSyncPoint::DiagnosticMessage
          (FActiveSyncPoint *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::ToString(&(this->SyncPointDescription).RegisteredName,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"TaskSyncTickFunction: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DispatchManually @ 14882fa90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UE::Tick::FActiveSyncPoint::DispatchManually(FActiveSyncPoint *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->WorkLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar2 = FTickFunction::CanDispatchManually((FTickFunction *)this);
  if (bVar2) {
    if ((this->FrameStatus != DispatchWaitingForTrigger) &&
       (this->FrameStatus != DispatchWaitingForWork)) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_830330814561516977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x24f,
                         "FrameStatus == ESyncPointStatus::DispatchWaitingForTrigger || FrameStatus == ESyncPointStatus::DispatchWaitingForWork"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    this->FrameStatus = Dispatched;
    bVar2 = FTickFunction::DispatchManually((FTickFunction *)this);
  }
  else {
    bVar2 = false;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// DispatchWorkTask @ 14882fb60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tick::FActiveSyncPoint::DispatchWorkTask
          (FActiveSyncPoint *this,TRefCountPtr<FBaseGraphTask> *param_1)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  atomic<unsigned_int> *paVar4;
  int iVar5;
  atomic<unsigned_int> aVar6;
  ESyncPointStatus EVar7;
  FBaseGraphTask *pFVar8;
  FTaskBase *this_00;
  code *pcVar9;
  bool bVar10;
  FTaskSyncManager *this_01;
  TRefCountPtr<FBaseGraphTask> TVar11;
  FTaskBase *this_02;
  float in_XMM3_Da;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined1 local_38 [16];
  
  EVar7 = this->FrameStatus;
  this_02 = (FTaskBase *)0x0;
  if (EVar7 < Dispatched) {
    bVar10 = DispatchManually(this);
    if (bVar10) goto LAB_14882fd22;
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_830330814561516669>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                        ,899,"DispatchManually()");
  }
  else {
    if (EVar7 == WaitingForMoreWork) {
      pTVar1 = &this->ReactivationEvent;
      if (((this->ReactivationEvent).Reference == (FBaseGraphTask *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReactivationEvent.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                              ,0x387,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((TRefCountPtr<FBaseGraphTask> *)local_38 != pTVar1) {
        this_02 = (FTaskBase *)pTVar1->Reference;
        pTVar1->Reference = (FBaseGraphTask *)0x0;
      }
      pFVar8 = pTVar1->Reference;
      if (pFVar8 != (FBaseGraphTask *)0x0) {
        pTVar1->Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar2 = &pFVar8->field_0x30;
        iVar5 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (*(code *)**(undefined8 **)pFVar8)();
        }
      }
      this->FrameStatus = Dispatched;
      if (this_02->ExtendedPriority == TaskEvent) {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
      }
      Tasks::Private::FTaskBase::TryLaunch(this_02,0);
      goto LAB_14882fd22;
    }
    if (EVar7 == WaitingForManualTask) {
      if (((this->ReactivationEvent).Reference != (FBaseGraphTask *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ReactivationEvent.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                              ,0x392,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_01 = FTaskSyncManager::Get();
      TVar11 = FTaskSyncManager::CreateManualTickTask
                         (this_01,(FWorldContextId)(int)&local_res8,
                          (FTickFunction *)(ulonglong)(uint)(this->WorldContextId).WorldId,
                          in_XMM3_Da,__real_bf800000);
      if ((FBaseGraphTask *)local_38 != TVar11.Reference) {
        this_02 = *(FTaskBase **)TVar11.Reference;
        *(undefined8 *)TVar11.Reference = 0;
      }
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(local_res8 + 6);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (local_res8 != (undefined8 *)0x0)) {
          (**(code **)*local_res8)();
        }
      }
      this->FrameStatus = Dispatched;
      if (this_02->ExtendedPriority == TaskEvent) {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
      }
      Tasks::Private::FTaskBase::TryLaunch(this_02,0);
      goto LAB_14882fd22;
    }
    this_02 = (FTaskBase *)0x0;
    if ((byte)(EVar7 - Dispatched) < 2) goto LAB_14882fd22;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("FrameStatus == ESyncPointStatus::Dispatched || FrameStatus == ESyncPointStatus::Executing"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                        ,0x39c,L"");
  }
  this_02 = (FTaskBase *)0x0;
  if (bVar10 != false) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14882fd22:
  if (param_1 == (TRefCountPtr<FBaseGraphTask> *)0x0) {
    if (this_02 == (FTaskBase *)0x0) {
      return;
    }
  }
  else {
    if (this_02 == (FTaskBase *)0x0) {
      bVar10 = FTickFunction::IsCompletionHandleValid((FTickFunction *)this);
      if (!bVar10) {
        return;
      }
      TVar11 = FTickFunction::GetCompletionHandle((FTickFunction *)this);
      if ((FBaseGraphTask *)local_38 != TVar11.Reference) {
        this_02 = *(FTaskBase **)TVar11.Reference;
        *(undefined8 *)TVar11.Reference = 0;
      }
      if (local_res10 != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(local_res10 + 6);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (local_res10 != (undefined8 *)0x0)) {
          (**(code **)*local_res10)(local_res10,1);
        }
      }
      if (this_02 == (FTaskBase *)0x0) {
        return;
      }
    }
    this_00 = (FTaskBase *)param_1->Reference;
    if (this_00->ExtendedPriority == TaskEvent) {
      Tasks::Private::FTaskBase::AddPrerequisites(this_00,this_02);
    }
    else {
      LOCK();
      paVar4 = &this_00->NumLocks;
      aVar6 = *paVar4;
      *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + 1);
      UNLOCK();
      if ((aVar6 == (atomic<unsigned_int>)0xfffffffe) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x1c2,L"Max number of nested tasks reached: %d"), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (((uint)aVar6 < 0x80000001) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks > ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x1c3,
                              L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar10 = Tasks::Private::FTaskBase::AddSubsequent(this_02,this_00);
      if (bVar10) {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::
        FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                  (&this_00->Prerequisites,this_02);
      }
      else {
        LOCK();
        this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + -1);
        UNLOCK();
      }
    }
  }
  LOCK();
  paVar4 = &this_02->RefCount;
  aVar6 = *paVar4;
  *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
  UNLOCK();
  if (aVar6 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_02->_padding_)(this_02,1);
  }
  return;
}

// ExecuteFromGameThread @ 148835970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tick::FActiveSyncPoint::ExecuteFromGameThread
          (FActiveSyncPoint *this,float param_1,ELevelTick param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FTickFunction *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  TRefCountPtr<FBaseGraphTask> local_res8;
  
  local_res8.Reference = (FBaseGraphTask *)0x0;
  if ((this->SyncPointDescription).EventType == SimpleEvent) {
    this->FrameStatus = ExecutionComplete;
    return;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId560,"ActiveSyncPoint_ExecuteTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
               ,0x230);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId560);
  }
  bVar4 = GetWorkToExecute(this,param_1,param_2,GameThread,&local_res8);
  if (bVar4) {
    do {
      uVar7 = 0;
      if (0 < (this->ExecutingWork).ArrayNum) {
        lVar6 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar7 < (this->ExecutingWork).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = *(FTickFunction **)((this->ExecutingWork).AllocatorInstance.Data + lVar6 + 8);
          if ((this_00 != (FTickFunction *)0x0) && (this_00->TickState != Disabled)) {
            FTickFunction::ExecuteNestedTick(this_00,param_1,param_2,GameThread,&local_res8);
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while ((int)uVar7 < (this->ExecutingWork).ArrayNum);
      }
      bVar4 = GetWorkToExecute(this,param_1,param_2,GameThread,&local_res8);
    } while (bVar4);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_res8.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(local_res8.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res8.Reference != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_res8.Reference)(local_res8.Reference,1);
    }
  }
  return;
}

// ExecuteTick @ 1488363e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tick::FActiveSyncPoint::ExecuteTick
          (FActiveSyncPoint *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  FTickFunction *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  if ((this->SyncPointDescription).EventType == SimpleEvent) {
    this->FrameStatus = ExecutionComplete;
    return;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId560,"ActiveSyncPoint_ExecuteTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
               ,0x230);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId560);
  }
  bVar2 = GetWorkToExecute(this,param_1,param_2,param_3,param_4);
  if (bVar2) {
    do {
      uVar5 = 0;
      if (0 < (this->ExecutingWork).ArrayNum) {
        lVar4 = 0;
        do {
          uVar3 = 0;
          if ((int)uVar5 < (this->ExecutingWork).ArrayNum) {
            uVar3 = ~uVar5 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this_00 = *(FTickFunction **)((this->ExecutingWork).AllocatorInstance.Data + lVar4 + 8);
          if ((this_00 != (FTickFunction *)0x0) && (this_00->TickState != Disabled)) {
            FTickFunction::ExecuteNestedTick(this_00,param_1,param_2,param_3,param_4);
          }
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x10;
        } while ((int)uVar5 < (this->ExecutingWork).ArrayNum);
      }
      bVar2 = GetWorkToExecute(this,param_1,param_2,param_3,param_4);
    } while (bVar2);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetWorkToExecute @ 148843fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Tick::FActiveSyncPoint::GetWorkToExecute
          (FActiveSyncPoint *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  ESyncPointStatus EVar4;
  ESyncPointActivationRules EVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  FBaseGraphTask *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  FTaskSyncManager *this_00;
  TRefCountPtr<FBaseGraphTask> TVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  float in_XMM3_Da;
  int local_res8;
  undefined8 *local_50 [3];
  
  if ((&this->WorkLock == (FWindowsRecursiveMutex *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->WorkLock);
  EVar4 = this->FrameStatus;
  if (EVar4 != Executing) {
    if (((EVar4 < Dispatched) || (EVar4 == ExecutionComplete)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("FrameStatus >= ESyncPointStatus::Dispatched && FrameStatus != ESyncPointStatus::ExecutionComplete"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                            ,0x1be,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    if (((this->ExecutingWork).ArrayNum != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExecutingWork.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                            ,0x1bf,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    this->FrameStatus = Executing;
  }
  iVar6 = (this->ActiveWork).ArrayNum;
  lVar16 = (longlong)iVar6;
  iVar18 = 0;
  local_res8 = 0;
  uVar15 = 0;
  TArray<UE::Tick::FActiveSyncPoint::FExecutingSyncWork,TSizedDefaultAllocator<32>_>::
  SetNumUninitialized(&this->ExecutingWork,iVar6,No);
  uVar20 = 0;
  if (0 < iVar6) {
    lVar19 = 0;
    lVar17 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar20 < (this->ActiveWork).ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pFVar7 = (this->ActiveWork).AllocatorInstance.Data;
      uVar13 = *(uint *)(pFVar7 + lVar17);
      if ((uVar13 & 0x20) == 0) {
        if ((uVar13 & 2) == 0) {
          if (((byte)uVar13 & 0x44) == 4) {
            *(uint *)(pFVar7 + lVar17) = uVar13 | 0x20;
            uVar13 = 0;
            if ((int)uVar15 < (this->ExecutingWork).ArrayNum) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            *(uint *)((this->ExecutingWork).AllocatorInstance.Data + lVar19) = uVar20;
            uVar8 = *(undefined8 *)(pFVar7 + lVar17 + 8);
            uVar13 = 0;
            if ((int)uVar15 < (this->ExecutingWork).ArrayNum) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            uVar15 = uVar15 + 1;
            *(undefined8 *)((this->ExecutingWork).AllocatorInstance.Data + lVar19 + 8) = uVar8;
            lVar19 = lVar19 + 0x10;
            iVar18 = local_res8;
          }
        }
        else {
          local_res8 = iVar18 + 1;
          iVar18 = local_res8;
        }
      }
      else {
        *(uint *)(pFVar7 + lVar17) = uVar13 & 0xffffffdb | 0x40;
      }
      uVar20 = uVar20 + 1;
      lVar17 = lVar17 + 0x10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  TArray<UE::Tick::FActiveSyncPoint::FExecutingSyncWork,TSizedDefaultAllocator<32>_>::
  SetNumUninitialized(&this->ExecutingWork,uVar15,No);
  if ((int)uVar15 < 1) {
    if (iVar18 < 1) {
      this->FrameStatus =
           ((byte)((uint)(this->SyncPointId).SyncId >> 0x1f) ^ 1) + WaitingForManualTask;
    }
    else {
      EVar5 = (this->SyncPointDescription).ActivationRules;
      this->FrameStatus = WaitingForMoreWork;
      if ((EVar5 != ActivateForAnyWork) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("SyncPointDescription.ActivationRules == ESyncPointActivationRules::ActivateForAnyWork"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                              ,0x1ec,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pTVar1 = &this->ReactivationEvent;
      if (((param_4->Reference == (FBaseGraphTask *)0x0) ||
          (pTVar1->Reference != (FBaseGraphTask *)0x0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("MyCompletionGraphEvent.IsValid() && !ReactivationEvent.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                              ,0x1ed,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      this_00 = FTaskSyncManager::Get();
      TVar14 = FTaskSyncManager::CreateManualTickTask
                         (this_00,(FWorldContextId)(int)local_50,
                          (FTickFunction *)(ulonglong)(uint)(this->WorldContextId).WorldId,
                          in_XMM3_Da,(ELevelTick)param_1);
      if ((FBaseGraphTask *)pTVar1 != TVar14.Reference) {
        pFVar9 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar1->Reference = *TVar14.Reference;
        *(undefined8 *)TVar14.Reference = 0;
        if (pFVar9 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar2 = &pFVar9->field_0x30;
          iVar6 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
          }
        }
      }
      if (local_50[0] != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(local_50[0] + 6);
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar6 == 1) && (local_50[0] != (undefined8 *)0x0)) {
          (**(code **)*local_50[0])(local_50[0],1);
        }
      }
    }
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (&this->WorkLock != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->WorkLock);
  }
  return bVar11;
}

// HandleFirstTickGroup @ 1488447c0

bool __thiscall UE::Tick::FActiveSyncPoint::HandleFirstTickGroup(FActiveSyncPoint *this)

{
  ESyncPointActivationRules EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x16c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (this->FrameStatus != TaskNotCreated) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561517202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x16e,"FrameStatus == ESyncPointStatus::TaskNotCreated");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar1 = (this->SyncPointDescription).ActivationRules;
  if (EVar1 == AlwaysActivate) {
    this->FrameStatus = Dispatched;
  }
  else {
    if (EVar1 == WaitForTrigger) {
      this->FrameStatus = DispatchWaitingForTrigger;
      return false;
    }
    if ((EVar1 == WaitForAllWork) || (EVar1 == ActivateForAnyWork)) {
      this->FrameStatus = DispatchWaitingForWork;
      bVar3 = IsReadyToProcessWork(this);
      return bVar3;
    }
  }
  return false;
}

// IsReadyToProcessWork @ 148847f30

bool __thiscall UE::Tick::FActiveSyncPoint::IsReadyToProcessWork(FActiveSyncPoint *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((this->FrameStatus < DispatchWaitingForWork) || (this->FrameStatus == ExecutionComplete)) {
    return false;
  }
  iVar1 = (this->ActiveWork).ArrayNum;
  pFVar5 = (this->ActiveWork).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  if ((this->SyncPointDescription).ActivationRules == ActivateForAnyWork) {
    while( true ) {
      if ((this->ActiveWork).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Tick::FActiveSyncPoint::FActiveSyncWork_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) {
        return false;
      }
      if (((byte)*pFVar5 & 4) != 0) break;
      pFVar5 = pFVar5 + 0x10;
    }
  }
  else {
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    while( true ) {
      if ((this->ActiveWork).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Tick::FActiveSyncPoint::FActiveSyncWork_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if ((*(uint *)pFVar5 & 4) == 0) {
        bVar3 = bVar4;
        if ((*(uint *)pFVar5 & 2) != 0) {
          bVar3 = true;
        }
        pFVar5 = pFVar5 + 0x10;
        bVar4 = bVar3;
      }
      else {
        bVar2 = true;
        pFVar5 = pFVar5 + 0x10;
      }
    }
    if (!bVar2) {
      return false;
    }
    if (bVar3) {
      return false;
    }
  }
  return true;
}

// IsTooLateToAddWork @ 148848170

bool __thiscall UE::Tick::FActiveSyncPoint::IsTooLateToAddWork(FActiveSyncPoint *this,bool param_1)

{
  if ((this->FrameStatus != ExecutionComplete) && ((this->FrameStatus < Executing || (param_1)))) {
    return false;
  }
  return (bool)((byte)((uint)(this->SyncPointId).SyncId >> 0x1f) ^ 1);
}

// QueueWorkFunction @ 148850570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Tick::FActiveSyncPoint::QueueWorkFunction
          (FActiveSyncPoint *this,FActiveSyncWorkHandle *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  void *pvVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FTickFunction *this_00;
  ulonglong uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  
  lpCriticalSection = &this->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar13 = *(uint *)&param_1->WorkIndex & 0xffffff;
  if (((param_1->SyncPoint).Object == (FActiveSyncPoint *)0x0) ||
     ((this->ActiveWork).ArrayNum <= (int)uVar13)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516846>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x2d2,"Handle.IsValid() && ActiveWork.IsValidIndex(WorkIndex)");
    if (bVar7) {
code_r0x0001488508bf:
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  else {
    if (((this->ActiveWork).ArrayNum <= (int)uVar13) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pFVar12 = (this->ActiveWork).AllocatorInstance.Data + (ulonglong)uVar13 * 0x10;
    uVar13 = *(uint *)pFVar12;
    if ((uVar13 & 1) == 0) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_830330814561516842>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x2d6,"CurrentWork.bHasActiveHandle");
      if (bVar7) goto code_r0x0001488508bf;
    }
    else if ((uVar13 & 0x1c) == 0) {
      if ((uVar13 >> 8 & 1) == 0) {
        this_00 = ::operator_new(0x58);
        if (this_00 == (FTickFunction *)0x0) {
          this_00 = (FTickFunction *)0x0;
        }
        else {
          FTickFunction::FTickFunction(this_00);
          this_00->bDispatchManually = '\x01';
          this_00->bCanEverTick = '\x01';
          this_00->bStartWithTickEnabled = '\x01';
          uVar10 = (ulonglong)_tls_index;
          this_00->_padding_ = (longlong)&___7FWorkQueueTickFunction_Tick_UE__6B_;
          pvVar6 = ThreadLocalStoragePointer;
          this_00[1].TickGroup = '\0';
          this_00[1].EndTickGroup = '\0';
          *(undefined2 *)&this_00[1].field_0xa = 0;
          this_00[1].TickInterval = 0.0;
          this_00[1].Prerequisites.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          this_00[1].Prerequisites.ArrayNum = 0;
          this_00[1].Prerequisites.ArrayMax = 0;
          lVar2 = *(longlong *)((longlong)pvVar6 + uVar10 * 8);
          this_00[1].InternalData.Ptr = (FInternalData *)0x0;
          this_00[2]._padding_ = 0;
          *(undefined2 *)&this_00[1]._padding_ = 0x101;
          *(undefined1 *)((longlong)&this_00[1]._padding_ + 2) = 1;
          *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = 0xffffffff;
          if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
             ) {
            ::FName::FName(&QueueWorkTickFunction,"QueueWorkTickFunction");
            _Init_thread_footer(&::_TSS0);
            *(FName *)&this_00[1].TickGroup = QueueWorkTickFunction;
          }
          else {
            *(FName *)&this_00[1].TickGroup = QueueWorkTickFunction;
          }
        }
        if (((*(uint *)pFVar12 & 0x200) != 0) &&
           (puVar3 = *(undefined8 **)(pFVar12 + 8), puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
        *(uint *)pFVar12 = *(uint *)pFVar12 | 0x300;
        *(FTickFunction **)(pFVar12 + 8) = this_00;
      }
      INSERT(param_1->WorkIndex,1,0x18,1);
      param_1->WorkIndex = (uint3)uVar5;
      param_1->field_0x13 = SUB41(uVar5,3);
      INSERT(param_1->WorkIndex,1,0x1a,1);
      param_1->WorkIndex = (uint3)uVar5;
      param_1->field_0x13 = SUB41(uVar5,3);
      uVar13 = *(uint *)pFVar12;
      *(uint *)pFVar12 = uVar13 | 2;
      if (((*(longlong *)(pFVar12 + 8) == 0) || ((uVar13 & 0x100) == 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentWork.TickFunction && CurrentWork.bIsWorkQueueFunction",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                             ,0x2e9,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      lVar2 = *(longlong *)(pFVar12 + 8);
      if (*(int *)(lVar2 + 0x2c) == -1) {
LAB_1488507b5:
        if (*(char *)(lVar2 + 0x28) != '\0') {
          if (((*(TUniqueFunction<void___cdecl(void)> **)(lVar2 + 0x48) <= param_2) &&
              (param_2 < *(TUniqueFunction<void___cdecl(void)> **)(lVar2 + 0x48) +
                         *(int *)(lVar2 + 0x54))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar9 = *(int *)(lVar2 + 0x50);
          if (iVar9 == *(int *)(lVar2 + 0x54)) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1030,(ForAnyElementType *)(lVar2 + 0x48),(int *)(lVar2 + 0x54));
          }
          *(int *)(lVar2 + 0x50) = iVar9 + 1;
          plVar11 = (longlong *)((longlong)iVar9 * 0x30 + *(longlong *)(lVar2 + 0x48));
          *plVar11 = *(longlong *)param_2;
          plVar11[5] = *(longlong *)&param_2->field_0x28;
          *(undefined8 *)&param_2->field_0x28 = 0;
          lVar2 = *(longlong *)&param_2->field_0x18;
          plVar11[2] = *(longlong *)&param_2->field_0x10;
          plVar11[3] = lVar2;
          plVar11[4] = *(longlong *)&param_2->field_0x20;
          if (*plVar11 != 0) {
            *(undefined8 *)param_2 = 0;
          }
          bVar7 = true;
          goto LAB_1488508c3;
        }
      }
      else {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsWorkExecuting()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                           ,0xcc,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        if (*(int *)(lVar2 + 0x2c) == -1) goto LAB_1488507b5;
      }
      bVar7 = false;
      goto LAB_1488508c3;
    }
  }
  bVar7 = false;
LAB_1488508c3:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar7;
}

// RegisterWorkHandle @ 148850ee0

FActiveSyncWorkHandle * __thiscall
UE::Tick::FActiveSyncPoint::RegisterWorkHandle
          (FActiveSyncPoint *this,FActiveSyncWorkHandle *__return_storage_ptr__)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<UE::Tick::FActiveSyncPoint::FActiveSyncWork,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FActiveSyncWorkHandle *pFVar10;
  FActiveSyncPoint *pFVar11;
  FActiveSyncPoint *pFVar12;
  FScriptContainerElement *pFVar13;
  FActiveSyncPoint *pFVar14;
  FActiveSyncPoint *pFVar15;
  
  lpCriticalSection = &this->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
    return pFVar10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = (this->ActiveWork).ArrayNum;
  pTVar2 = &this->ActiveWork;
  pFVar15 = (FActiveSyncPoint *)0x0;
  pFVar11 = pFVar15;
  pFVar12 = pFVar15;
  if (0 < (int)uVar7) {
    do {
      uVar8 = (uint)pFVar12;
      uVar7 = 0;
      if ((int)uVar8 < (this->ActiveWork).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
        return pFVar10;
      }
      if (*(int *)((pTVar2->AllocatorInstance).Data + (longlong)pFVar11) == 0) goto LAB_148851034;
      uVar7 = (this->ActiveWork).ArrayNum;
      pFVar11 = (FActiveSyncPoint *)&pFVar11->_padding_;
      pFVar12 = (FActiveSyncPoint *)(ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < (int)uVar7);
  }
  if ((0x1fffffd < uVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveWork.Num() < FActiveSyncWorkHandle::MaxWorkIndex - 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x379,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
    return pFVar10;
  }
  uVar8 = (this->ActiveWork).ArrayNum;
  piVar1 = &(this->ActiveWork).ArrayMax;
  if (uVar8 == *piVar1) {
    uVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
    (this->ActiveWork).ArrayNum = uVar8;
  }
  (this->ActiveWork).ArrayNum = uVar8 + 1;
  DefaultConstructItems<UE::Tick::FActiveSyncPoint::FActiveSyncWork,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10,1);
LAB_148851034:
  uVar7 = 0;
  if ((int)uVar8 < (this->ActiveWork).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
    return pFVar10;
  }
  pFVar13 = (this->ActiveWork).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
  if ((((byte)*pFVar13 & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWork.bHasActiveHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
    return pFVar10;
  }
  *(uint *)pFVar13 = *(uint *)pFVar13 | 1;
  pFVar11 = (FActiveSyncPoint *)this->_padding_;
  pFVar12 = pFVar15;
  pFVar14 = pFVar11;
  if (pFVar11 != (FActiveSyncPoint *)0x0) {
    iVar5 = (int)pFVar11->_padding_;
    do {
      pFVar14 = pFVar15;
      if (iVar5 == 0) goto LAB_1488510f5;
      LOCK();
      iVar9 = (int)pFVar11->_padding_;
      bVar6 = iVar5 == iVar9;
      if (bVar6) {
        *(int *)&pFVar11->_padding_ = iVar5 + 1;
        iVar9 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar9;
    } while (!bVar6);
    pFVar12 = (FActiveSyncPoint *)this->_padding_;
    pFVar14 = pFVar11;
  }
LAB_1488510f5:
  pFVar11 = (FActiveSyncPoint *)&pFVar12->_padding_;
  if (pFVar12 == (FActiveSyncPoint *)0x0) {
    pFVar11 = pFVar15;
  }
  if ((pFVar11 != (FActiveSyncPoint *)&this->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
    return pFVar10;
  }
  if (pFVar12 == (FActiveSyncPoint *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
      return pFVar10;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FActiveSyncWorkHandle *)(*pcVar4)();
      return pFVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar14 != (FActiveSyncPoint *)0x0) {
    LOCK();
    *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
    UNLOCK();
    pFVar15 = pFVar14;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  uVar7 = *(uint *)&__return_storage_ptr__->WorkIndex;
  (__return_storage_ptr__->SyncPoint).Object = pFVar12;
  uVar3 = *(uint *)&__return_storage_ptr__->WorkIndex;
  (__return_storage_ptr__->SyncPoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar15;
  *(uint *)&__return_storage_ptr__->WorkIndex = ((uVar8 ^ uVar7) & 0xffffff ^ uVar3) & 0xf8ffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// RequestWork @ 148855da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Tick::FActiveSyncPoint::RequestWork
          (FActiveSyncPoint *this,FActiveSyncWorkHandle *param_1,FTickFunction *param_2,
          ESyncWorkRepetition param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FTaskSyncManager *this_00;
  uint uVar5;
  FActiveSyncWork *this_01;
  
  lpCriticalSection = &this->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = *(uint *)&param_1->WorkIndex & 0xffffff;
  if (((param_1->SyncPoint).Object == (FActiveSyncPoint *)0x0) ||
     ((this->ActiveWork).ArrayNum <= (int)uVar5)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516902>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x29a,"Handle.IsValid() && ActiveWork.IsValidIndex(WorkIndex)");
    if (bVar2) {
code_r0x000148855faf:
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    if (((this->ActiveWork).ArrayNum <= (int)uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_01 = (FActiveSyncWork *)
              ((this->ActiveWork).AllocatorInstance.Data + (ulonglong)uVar5 * 0x10);
    if (((this_01->field0_0x0).StateValue & 1) == 0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_830330814561516898>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x29e,"CurrentWork.bHasActiveHandle");
      if (bVar2) goto code_r0x000148855faf;
    }
    else if (((this_01->field0_0x0).StateValue >> 8 & 1) == 0) {
      if (param_3 == Never) {
        *(uint *)&param_1->WorkIndex = *(uint *)&param_1->WorkIndex & 0xfdffffff;
        CancelRequestedWork(this,uVar5,this_01);
      }
      else {
        *(uint *)&param_1->WorkIndex = *(uint *)&param_1->WorkIndex | 0x2000000;
        if (((this->FrameStatus == ExecutionComplete) ||
            ((Dispatched < this->FrameStatus && (((this_01->field0_0x0).StateValue >> 1 & 1) == 0)))
            ) && (-1 < (this->SyncPointId).SyncId)) {
          this_00 = FTaskSyncManager::Get();
          bVar2 = FTaskSyncManager::HandleLateWorkRequest(this_00,this,uVar5,param_2);
          (this_01->field0_0x0).StateValue = (this_01->field0_0x0).StateValue & 0xffffff7f;
          (this_01->field0_0x0).StateValue = (this_01->field0_0x0).StateValue | (uint)bVar2 << 7;
        }
        uVar5 = (this_01->field0_0x0).StateValue & 0xfffffffd;
        uVar5 = (~((this_01->field0_0x0).StateValue >> 5) ^ uVar5) & 4 ^ uVar5;
        uVar4 = 0;
        if (param_3 == EveryFrame) {
          uVar4 = 0x10;
        }
        (this_01->field0_0x0).StateValue = uVar5 & 0xffffffef | uVar4;
        if ((param_3 == EveryFrame) || ((uVar5 & 4) != 0)) {
          FActiveSyncWork::SetTickFunction(this_01,param_2,false);
        }
      }
      bVar2 = IsReadyToProcessWork(this);
      if (bVar2) {
        DispatchWorkTask(this,(TRefCountPtr<FBaseGraphTask> *)0x0);
      }
      bVar2 = true;
      goto LAB_148855fb3;
    }
  }
  bVar2 = false;
LAB_148855fb3:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// ReserveFutureWork @ 148856050

bool __thiscall
UE::Tick::FActiveSyncPoint::ReserveFutureWork
          (FActiveSyncPoint *this,FActiveSyncWorkHandle *param_1,ESyncWorkRepetition param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  lpCriticalSection = &this->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = *(uint *)&param_1->WorkIndex & 0xffffff;
  if (((param_1->SyncPoint).Object == (FActiveSyncPoint *)0x0) ||
     ((this->ActiveWork).ArrayNum <= (int)uVar6)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516944>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x270,"Handle.IsValid() && ActiveWork.IsValidIndex(WorkIndex)");
    if (bVar2) {
code_r0x0001488561d6:
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    if (((this->ActiveWork).ArrayNum <= (int)uVar6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar5 = (this->ActiveWork).AllocatorInstance.Data + (ulonglong)uVar6 * 0x10;
    uVar6 = *(uint *)pFVar5;
    if ((uVar6 & 1) == 0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_830330814561516940>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x274,"CurrentWork.bHasActiveHandle");
      if (bVar2) goto code_r0x0001488561d6;
    }
    else if ((uVar6 >> 8 & 1) == 0) {
      uVar4 = 0;
      if (param_2 == EveryFrame) {
        uVar4 = 8;
      }
      *(uint *)pFVar5 = uVar4 | uVar6 & 0xfffffff7;
      if (param_2 == Never) {
        *(uint *)&param_1->WorkIndex = *(uint *)&param_1->WorkIndex & 0xfeffffff;
        *(uint *)pFVar5 = *(uint *)pFVar5 & 0xfffffffd;
      }
      else {
        *(uint *)&param_1->WorkIndex = *(uint *)&param_1->WorkIndex | 0x1000000;
        *(uint *)pFVar5 = *(uint *)pFVar5 | 2;
      }
      bVar2 = IsReadyToProcessWork(this);
      if (bVar2) {
        DispatchWorkTask(this,(TRefCountPtr<FBaseGraphTask> *)0x0);
      }
      bVar2 = true;
      goto LAB_1488561da;
    }
  }
  bVar2 = false;
LAB_1488561da:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// ResetWorkForFrame @ 1488563c0

void __thiscall UE::Tick::FActiveSyncPoint::ResetWorkForFrame(FActiveSyncPoint *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x14b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar7 = 0;
  uVar9 = uVar7;
  if (0 < (this->ActiveWork).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar8 < (this->ActiveWork).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
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
      pFVar6 = (this->ActiveWork).AllocatorInstance.Data + uVar7;
      if ((((byte)*pFVar6 & 0x20) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CurrentWork.bCurrentlyExecuting",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                             ,0x151,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)pFVar6;
      uVar5 = uVar4 & 0xffffff3f;
      *(uint *)pFVar6 = uVar5;
      if ((uVar4 & 0x10) == 0) {
        if ((uVar4 & 8) != 0) {
          uVar5 = uVar5 | 2;
          *(uint *)pFVar6 = uVar5;
        }
      }
      else {
        uVar5 = uVar4 & 0xffffff3d | 4;
        *(uint *)pFVar6 = uVar5;
      }
      if (((uVar5 & 0x104) == 0) &&
         (puVar1 = *(undefined8 **)(pFVar6 + 8), puVar1 != (undefined8 *)0x0)) {
        if ((uVar5 >> 9 & 1) != 0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *(uint *)pFVar6 = *(uint *)pFVar6 & 0xfffffdff;
        *(undefined8 *)(pFVar6 + 8) = 0;
      }
      uVar7 = uVar7 + 0x10;
      uVar9 = (ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < (this->ActiveWork).ArrayNum);
  }
  return;
}

// ResetWorkHandle @ 148856530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Tick::FActiveSyncPoint::ResetWorkHandle(FActiveSyncPoint *this,FActiveSyncWorkHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FActiveSyncWork *pFVar6;
  FActiveSyncPoint *local_28;
  FSharedReferencer<1> FStack_20;
  
  lpCriticalSection = &this->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = *(uint *)&param_1->WorkIndex & 0xffffff;
  if (((param_1->SyncPoint).Object == (FActiveSyncPoint *)0x0) ||
     ((this->ActiveWork).ArrayNum <= (int)uVar5)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516719>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x351,"Handle.IsValid() && ActiveWork.IsValidIndex(WorkIndex)");
    if (bVar3) {
code_r0x0001488566cd:
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if (((this->ActiveWork).ArrayNum <= (int)uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = (FActiveSyncWork *)
             ((this->ActiveWork).AllocatorInstance.Data + (ulonglong)uVar5 * 0x10);
    uVar1 = (pFVar6->field0_0x0).StateValue;
    if ((uVar1 & 1) != 0) {
      CancelRequestedWork(this,uVar5,pFVar6);
      (pFVar6->field0_0x0).StateValue = (pFVar6->field0_0x0).StateValue & 0xfffffff4;
      local_28 = (FActiveSyncPoint *)0x0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (param_1 != (FActiveSyncWorkHandle *)&local_28) {
        (param_1->SyncPoint).Object = (FActiveSyncPoint *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_1->SyncPoint).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
      *(uint *)&param_1->WorkIndex = *(uint *)&param_1->WorkIndex & 0xf8000000;
      if (((uVar1 & 6) != 0) && (bVar3 = IsReadyToProcessWork(this), bVar3)) {
        DispatchWorkTask(this,(TRefCountPtr<FBaseGraphTask> *)0x0);
      }
      bVar3 = true;
      goto LAB_1488566d1;
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516715>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x355,"CurrentWork.bHasActiveHandle");
    if (bVar3) goto code_r0x0001488566cd;
  }
  bVar3 = false;
LAB_1488566d1:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// SendQueuedWork @ 148857a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Tick::FActiveSyncPoint::SendQueuedWork
          (FActiveSyncPoint *this,FActiveSyncWorkHandle *param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  FTickFunction *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  FTaskSyncManager *this_00;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  lpCriticalSection = &this->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar8 = *(uint *)&param_1->WorkIndex & 0xffffff;
  if (((param_1->SyncPoint).Object == (FActiveSyncPoint *)0x0) ||
     ((this->ActiveWork).ArrayNum <= (int)uVar8)) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516808>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x2f8,"Handle.IsValid() && ActiveWork.IsValidIndex(WorkIndex)");
    if (bVar5) {
code_r0x000148857ca1:
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  else {
    if (((this->ActiveWork).ArrayNum <= (int)uVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar7 = (this->ActiveWork).AllocatorInstance.Data + (ulonglong)uVar8 * 0x10;
    uVar1 = *(uint *)pFVar7;
    if ((uVar1 & 1) == 0) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_830330814561516804>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x2fc,"CurrentWork.bHasActiveHandle");
      if (bVar5) goto code_r0x000148857ca1;
    }
    else if ((uVar1 & 0x104) == 0x100) {
      if (((*(longlong *)(pFVar7 + 8) == 0) || ((uVar1 & 0x100) == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentWork.TickFunction && CurrentWork.bIsWorkQueueFunction",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                             ,0x304,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = *(FTickFunction **)(pFVar7 + 8);
      if ((*(int *)((longlong)&pFVar2[1]._padding_ + 4) == -1) && ((int)pFVar2[2]._padding_ < 1)) {
        *(uint *)pFVar7 = *(uint *)pFVar7 & 0xfffffff9;
        bVar5 = true;
        INSERT(param_1->WorkIndex,0,0x18,1);
        param_1->WorkIndex = (uint3)uVar4;
        param_1->field_0x13 = SUB41(uVar4,3);
        INSERT(param_1->WorkIndex,0,0x19,1);
        param_1->WorkIndex = (uint3)uVar4;
        param_1->field_0x13 = SUB41(uVar4,3);
      }
      else {
        INSERT(param_1->WorkIndex,1,0x19,1);
        param_1->WorkIndex = (uint3)uVar4;
        param_1->field_0x13 = SUB41(uVar4,3);
        if (((this->FrameStatus == ExecutionComplete) ||
            ((Dispatched < this->FrameStatus && ((*(uint *)pFVar7 >> 1 & 1) == 0)))) &&
           (-1 < (this->SyncPointId).SyncId)) {
          this_00 = FTaskSyncManager::Get();
          bVar5 = FTaskSyncManager::HandleLateWorkRequest(this_00,this,uVar8,pFVar2);
          *(uint *)pFVar7 = *(uint *)pFVar7 & 0xffffff7f;
          *(uint *)pFVar7 = *(uint *)pFVar7 | (uint)bVar5 << 7;
        }
        uVar8 = *(uint *)pFVar7 & 0xfffffffd;
        *(uint *)pFVar7 = (~(*(uint *)pFVar7 >> 5) ^ uVar8) & 4 ^ uVar8;
        bVar5 = IsReadyToProcessWork(this);
        if (bVar5) {
          DispatchWorkTask(this,param_2);
        }
        bVar5 = true;
      }
      goto LAB_148857ca5;
    }
  }
  bVar5 = false;
LAB_148857ca5:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar5;
}

