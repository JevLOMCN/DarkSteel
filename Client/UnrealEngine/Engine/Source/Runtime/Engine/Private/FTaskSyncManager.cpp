// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 34

// FTaskSyncManager @ 148806490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncManager * __thiscall UE::Tick::FTaskSyncManager::FTaskSyncManager(FTaskSyncManager *this)

{
  (this->BatchList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchList).ArrayNum = 0;
  (this->BatchList).ArrayMax = 0;
  *(undefined8 *)&this->RegisteredDataMap = 0;
  *(undefined8 *)&(this->RegisteredDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredDataMap).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredNameMap = 0;
  *(undefined8 *)&(this->RegisteredNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredNameMap).field_0x48 = 0;
  this->HighestSyncId = -1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ManagerLock,4000);
  this->CurrentTickWorld = (UWorld *)0x0;
  this->CurrentDeltaTime = 0.0;
  this->CurrentTickType = LEVELTICK_All;
  this->CurrentTickGroup = TG_MAX;
  ReloadRegisteredData(this);
  if (GEngine != (UEngine *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(FWorldContext_&),FDefaultDelegateUserPolicy>::
    AddRaw<UE::Tick::FTaskSyncManager>
              ((TMulticastDelegateRegistration<void___cdecl(FWorldContext_&),FDefaultDelegateUserPolicy>
                *)&GEngine->WorldContextDestroyedEvent,(FTaskSyncManager *)&stack0x00000008,
               (pmf_c66f6eec)this);
  }
  return this;
}

// ~FTaskSyncManager @ 14880c740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Tick::FTaskSyncManager::~FTaskSyncManager(FTaskSyncManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (GEngine != (UEngine *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &GEngine->WorldContextDestroyedEvent,this);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ManagerLock);
  *(undefined4 *)&(this->RegisteredNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredNameMap);
  *(undefined4 *)&(this->RegisteredDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredDataMap);
  DestructItems<UE::Tick::FTaskSyncManager::FBatchData,int>
            ((FBatchData *)(this->BatchList).AllocatorInstance.Data,(this->BatchList).ArrayNum);
  pFVar2 = (this->BatchList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CancelTemporaryWorkRequest @ 148828c30

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
UE::Tick::FTaskSyncManager::CancelTemporaryWorkRequest
          (FTaskSyncManager *this,FActiveSyncPoint *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  FScriptContainerElement *local_50;
  LPCRITICAL_SECTION local_48;
  
  lpCriticalSection = &this->ManagerLock;
  local_48 = (LPCRITICAL_SECTION)lpCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar2 = (this->BatchList).ArrayNum;
  uVar7 = (ulonglong)(int)uVar2;
  pFVar10 = (this->BatchList).AllocatorInstance.Data;
  pFVar8 = pFVar10 + 0x70;
  local_50 = pFVar10 + uVar7 * 0x78;
  while( true ) {
    pFVar5 = local_50;
    if ((this->BatchList).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar5) break;
    iVar3 = *(int *)pFVar8;
    plVar9 = *(longlong **)(pFVar8 + -8);
    plVar1 = plVar9 + (longlong)iVar3 * 5;
    while( true ) {
      if (*(int *)pFVar8 != iVar3) {
        `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FTemporaryWorkRequest,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_58);
      }
      if (plVar9 == plVar1) break;
      if ((param_1 == (FActiveSyncPoint *)*plVar9) && (param_2 == (int)plVar9[1])) {
        FActiveSyncWorkHandle::Reset((FActiveSyncWorkHandle *)(plVar9 + 2));
      }
      plVar9 = plVar9 + 5;
    }
    pFVar10 = pFVar10 + 0x78;
    uVar7 = (ulonglong)uVar2;
    pFVar8 = pFVar8 + 0x78;
  }
  if (local_48 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_48);
  }
  return;
}

// CreateManualTickTask @ 14882d4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::Tick::FTaskSyncManager::CreateManualTickTask
          (FTaskSyncManager *this,FWorldContextId param_1,FTickFunction *param_2,float param_3,
          ELevelTick param_4)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  FTaskBase *this_00;
  undefined4 in_register_00000014;
  Type TVar4;
  longlong in_R9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res20 [8];
  undefined1 in_stack_00000030;
  
  if ((in_R9 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x6e0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
    return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
  }
  TVar4 = GameThread;
  if ((*(byte *)(in_R9 + 10) & 0x40) != 0) {
    TVar4 = AnyNormalThreadNormalTask;
  }
  TVar4 = (*(byte *)(in_R9 + 10) & 0x20) << 4 | TVar4;
  if (((float)param_4 < 0.0) && (this->CurrentTickWorld != (UWorld *)0x0)) {
    param_4 = (ELevelTick)this->CurrentDeltaTime;
    in_stack_00000030 = (undefined1)this->CurrentTickType;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFManualTickFunctionTask____6B_;
  }
  *(ELevelTick *)((longlong)&this_00[1]._padding_ + 4) = param_4;
  this_00[1]._padding_ = in_R9;
  *(Type *)&this_00[1]._padding_ = TVar4;
  *(undefined1 *)&this_00[1]._padding_ = in_stack_00000030;
  Tasks::Private::TranslatePriority(TVar4,local_res20,local_res10);
  Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res20[0],local_res10[0],None);
  TaskTrace::Created((ulong64)this_00->TraceId,0xf0);
  *(FTaskBase **)CONCAT44(in_register_00000014,param_1.WorldId) = this_00;
  LOCK();
  this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
  UNLOCK();
  return (TRefCountPtr<FBaseGraphTask>)
         (FBaseGraphTask *)CONCAT44(in_register_00000014,param_1.WorldId);
}

// CreateNewBatch @ 14882d600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FBatchContextId __thiscall
UE::Tick::FTaskSyncManager::CreateNewBatch(FTaskSyncManager *this,FWorldContextId param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int in_R8D;
  longlong lVar10;
  
  puVar7 = (uint *)CONCAT44(in_register_00000014,param_1.WorldId);
  bVar3 = IsInGameThread();
  if ((!bVar3) || (in_R8D < 0)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516116>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x5ac,"IsInGameThread() && WorldContext.IsValid()");
    if (!bVar3) {
      *puVar7 = 0xffffffff;
      return (FBatchContextId)param_1.WorldId;
    }
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return (FBatchContextId)iVar4;
  }
  lpCriticalSection = &this->ManagerLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return (FBatchContextId)iVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = (this->BatchList).ArrayNum;
  uVar8 = 0;
  if (0 < (int)uVar6) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (int)uVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return (FBatchContextId)iVar4;
      }
      pFVar1 = (this->BatchList).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + lVar10) < 0) {
        *(uint *)(pFVar1 + lVar10) = uVar8;
        *(int *)(pFVar1 + lVar10 + 4) = in_R8D;
        *puVar7 = uVar8;
        goto LAB_14882d800;
      }
      uVar6 = (this->BatchList).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x78;
    } while ((int)uVar8 < (int)uVar6);
  }
  piVar9 = &(this->BatchList).ArrayNum;
  if (uVar6 == (this->BatchList).ArrayMax) {
    uVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)this,&(this->BatchList).ArrayMax);
  }
  (this->BatchList).ArrayNum = uVar6 + 1;
  lVar10 = (longlong)(int)uVar6 * 0x78;
  DefaultConstructItems<UE::Tick::FTaskSyncManager::FBatchData,int>
            ((this->BatchList).AllocatorInstance.Data + lVar10,1);
  uVar8 = 0;
  if ((int)uVar6 < *piVar9) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return (FBatchContextId)iVar4;
  }
  *(uint *)((this->BatchList).AllocatorInstance.Data + lVar10) = uVar6;
  uVar8 = 0;
  if ((int)uVar6 < *piVar9) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return (FBatchContextId)iVar4;
  }
  pFVar1 = (this->BatchList).AllocatorInstance.Data;
  *puVar7 = uVar6;
  *(int *)(pFVar1 + lVar10 + 4) = in_R8D;
LAB_14882d800:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (FBatchContextId)param_1.WorldId;
}

// EndFrame @ 148834c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Tick::FTaskSyncManager::EndFrame(FTaskSyncManager *this,UWorld *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FWorldContextId local_res18 [4];
  
  bVar3 = IsInGameThread();
  if (((!bVar3) || (this->CurrentTickWorld != param_1)) || (this->CurrentTickGroup != TG_MAX)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread() && CurrentTickWorld == InWorld && CurrentTickGroup == ETickingGroup::TG_MAX"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x565,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->CurrentTickWorld = (UWorld *)0x0;
  this->CurrentTickGroup = TG_MAX;
  FWorldContextId::FWorldContextId(local_res18,param_1);
  pFVar4 = (this->BatchList).AllocatorInstance.Data;
  iVar1 = (this->BatchList).ArrayNum;
  pFVar5 = pFVar4 + 0x70;
  pFVar6 = pFVar4 + (longlong)iVar1 * 0x78;
LAB_148834cf0:
  do {
    if ((this->BatchList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar6) {
      return;
    }
    if (*(int *)(pFVar5 + -0x6c) == local_res18[0].WorldId) {
      if (-1 < *(int *)(pFVar5 + 4)) {
        DestructItems<UE::Tick::FTaskSyncManager::FTemporaryWorkRequest,int>
                  (*(FTemporaryWorkRequest **)(pFVar5 + -8),*(int *)pFVar5);
        pFVar4 = pFVar4 + 0x78;
        *(int *)pFVar5 = 0;
        pFVar5 = pFVar5 + 0x78;
        goto LAB_148834cf0;
      }
      DestructItems<UE::Tick::FTaskSyncManager::FTemporaryWorkRequest,int>
                (*(FTemporaryWorkRequest **)(pFVar5 + -8),*(int *)pFVar5);
      *(int *)pFVar5 = 0;
      if (*(int *)(pFVar5 + 4) != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)(pFVar5 + -8),0,(int *)(pFVar5 + 4));
      }
    }
    pFVar4 = pFVar4 + 0x78;
    pFVar5 = pFVar5 + 0x78;
  } while( true );
}

// EndTickGroup @ 148835320

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
UE::Tick::FTaskSyncManager::EndTickGroup
          (FTaskSyncManager *this,UWorld *param_1,ETickingGroup param_2)

{
  int iVar1;
  FActiveSyncPoint *this_00;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  bVar3 = IsInGameThread();
  if (((!bVar3) || (this->CurrentTickWorld != param_1)) || (this->CurrentTickGroup == TG_MAX)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread() && CurrentTickWorld == InWorld && CurrentTickGroup != ETickingGroup::TG_MAX"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x54e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->BatchList).ArrayNum;
  pFVar4 = (this->BatchList).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->BatchList).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(pFVar4 + 0x60))) {
      if ((int)param_2 < 0) {
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
      this_00 = *(FActiveSyncPoint **)(*(longlong *)(pFVar4 + 0x58) + (longlong)(int)param_2 * 0x10)
      ;
      if (this_00 != (FActiveSyncPoint *)0x0) {
        FActiveSyncPoint::ExecuteFromGameThread
                  (this_00,this->CurrentDeltaTime,this->CurrentTickType);
        this_00->FrameStatus = ExecutionComplete;
      }
    }
    pFVar4 = pFVar4 + 0x78;
  }
  this->CurrentTickGroup = TG_MAX;
  return;
}

// FindActiveSyncPoint @ 148839bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncResult __thiscall
UE::Tick::FTaskSyncManager::FindActiveSyncPoint
          (FTaskSyncManager *this,FSyncPointId param_1,
          TSharedPtr<UE::Tick::FActiveSyncPoint,1> *param_2)

{
  FActiveSyncPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTaskSyncResult FVar4;
  TSharedRef<UE::Tick::FActiveSyncPoint,1> *pTVar5;
  int iVar6;
  FActiveSyncPoint **in_R9;
  FActiveSyncPoint *local_18;
  FSharedReferencer<1> local_10;
  
  if ((uint)param_2 < 0x80000000) {
    iVar6 = (int)((ulonglong)param_2 >> 0x20);
    if (((longlong)param_2 < 0) || ((this->BatchList).ArrayNum <= iVar6)) {
      *(undefined2 *)param_1 = 9;
    }
    else {
      if (((longlong)param_2 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FTaskSyncResult)(*pcVar2)();
        return FVar4;
      }
      pTVar5 = TMapBase<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>_>
               ::Find((TMapBase<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>_>
                       *)((this->BatchList).AllocatorInstance.Data + (longlong)iVar6 * 0x78 + 8),
                      (uint)param_2);
      if (pTVar5 == (TSharedRef<UE::Tick::FActiveSyncPoint,1> *)0x0) {
        *(undefined2 *)param_1 = 4;
      }
      else {
        local_10.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
        local_18 = pTVar5->Object;
        if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (in_R9 != &local_18) {
          *in_R9 = local_18;
          local_18 = (FActiveSyncPoint *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(in_R9 + 1),&local_10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10.ReferenceController);
        pFVar1 = pTVar5->Object;
        *(undefined1 *)param_1 = 1;
        *(ESyncPointStatus *)((longlong)param_1 + 1) = pFVar1->FrameStatus;
      }
    }
  }
  else {
    *(undefined2 *)param_1 = 2;
  }
  return param_1.SyncId._0_2_;
}

// FindDefaultBatch @ 14883a310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FBatchContextId __thiscall
UE::Tick::FTaskSyncManager::FindDefaultBatch(FTaskSyncManager *this,FWorldContextId param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_register_00000014;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int in_R8D;
  undefined1 local_res18 [16];
  
  lpCriticalSection = &this->ManagerLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FBatchContextId)iVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (in_R8D < 0) {
LAB_14883a3ac:
    *(undefined4 *)CONCAT44(in_register_00000014,param_1.WorldId) = 0xffffffff;
  }
  else {
    iVar3 = (this->BatchList).ArrayNum;
    pFVar5 = (this->BatchList).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar3 * 0x78;
    while( true ) {
      if ((this->BatchList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar5 == pFVar4) goto LAB_14883a3ac;
      if (*(int *)(pFVar5 + 4) == in_R8D) break;
      pFVar5 = pFVar5 + 0x78;
    }
    *(undefined4 *)CONCAT44(in_register_00000014,param_1.WorldId) = *(undefined4 *)pFVar5;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (FBatchContextId)param_1.WorldId;
}

// FindSyncPoint @ 14883a6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSyncPointId __thiscall
UE::Tick::FTaskSyncManager::FindSyncPoint
          (FTaskSyncManager *this,FBatchContextId param_1,FName param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FSyncPointId FVar3;
  int *piVar4;
  FBatchContextId in_register_00000014;
  FName in_R9;
  
  FVar3.BatchContext.BatchId = in_register_00000014.BatchId;
  FVar3.SyncId = param_1.BatchId;
  lpCriticalSection = &this->ManagerLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FSyncPointId)(*pcVar1)();
      return FVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined8 *)FVar3 = 0xffffffffffffffff;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->RegisteredNameMap,in_R9);
  if (piVar4 != (int *)0x0) {
    *(int *)FVar3 = *piVar4;
    *(uint *)((longlong)FVar3 + 4) = param_2.ComparisonIndex.Value.Value;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return FVar3;
}

// FindSyncPoint @ 14883a7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSyncPointId __thiscall
UE::Tick::FTaskSyncManager::FindSyncPoint
          (FTaskSyncManager *this,FWorldContextId param_1,FName param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FSyncPointId FVar4;
  int *piVar5;
  ulonglong uVar6;
  FBatchContextId in_register_00000014;
  int iVar7;
  FName in_R9;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [16];
  
  FVar4.BatchContext.BatchId = in_register_00000014.BatchId;
  FVar4.SyncId = param_1.WorldId;
  lpCriticalSection = &this->ManagerLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSyncPointId)(*pcVar2)();
      return FVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSyncPointId)(*pcVar2)();
      return FVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((ulonglong)param_2 & 0xffffffff) >> 0x1f == 0) {
    uVar1 = (this->BatchList).ArrayNum;
    uVar6 = (ulonglong)(int)uVar1;
    pFVar9 = (this->BatchList).AllocatorInstance.Data;
    pFVar8 = pFVar9 + uVar6 * 0x78;
    while( true ) {
      if ((this->BatchList).ArrayNum != (int)uVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
        uVar6 = (ulonglong)uVar1;
      }
      if (pFVar9 == pFVar8) goto LAB_14883a8bd;
      if (*(uint *)(pFVar9 + 4) == param_2.ComparisonIndex.Value.Value) break;
      pFVar9 = pFVar9 + 0x78;
    }
    iVar7 = *(int *)pFVar9;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
LAB_14883a8bd:
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    iVar7 = -1;
  }
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSyncPointId)(*pcVar2)();
      return FVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined8 *)FVar4 = 0xffffffffffffffff;
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->RegisteredNameMap,in_R9);
  if (piVar5 != (int *)0x0) {
    *(int *)FVar4 = *piVar5;
    *(int *)((longlong)FVar4 + 4) = iVar7;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return FVar4;
}

// Get @ 14883c110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncManager * __cdecl UE::Tick::FTaskSyncManager::Get(void)

{
  code *pcVar1;
  TUniquePtr<UE::Tick::FTaskSyncManager,TDefaultDelete<UE::Tick::FTaskSyncManager>_> TVar2;
  bool bVar3;
  FTaskSyncManager *pFVar4;
  FTaskSyncManager *this;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Tick::FTaskSyncManager::Get'::__l2::
             _dynamic_atexit_destructor_for__SingletonInstance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SingletonInstance.Ptr == (FTaskSyncManager *)0x0) {
    if (bCreateTaskSyncManager == false) {
      return (FTaskSyncManager *)0x0;
    }
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x3be,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTaskSyncManager *)(*pcVar1)();
        return pFVar4;
      }
    }
    this = ::operator_new(0xf8);
    pFVar4 = (FTaskSyncManager *)0x0;
    if (this != (FTaskSyncManager *)0x0) {
      pFVar4 = FTaskSyncManager(this);
    }
    TVar2.Ptr = SingletonInstance.Ptr;
    SingletonInstance.Ptr = pFVar4;
    TDefaultDelete<UE::Tick::FTaskSyncManager>::operator()
              ((TDefaultDelete<UE::Tick::FTaskSyncManager> *)&SingletonInstance,TVar2.Ptr);
  }
  return SingletonInstance.Ptr;
}

// GetCurrentWorldContext @ 14883dcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldContextId __thiscall
UE::Tick::FTaskSyncManager::GetCurrentWorldContext(FTaskSyncManager *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *in_RDX;
  
  bVar2 = IsInGameThread();
  if (bVar2) {
    *in_RDX = 0;
    return (FWorldContextId)(int)in_RDX;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_830330814561516145>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0x58f,"IsInGameThread()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return (FWorldContextId)iVar3;
  }
  *in_RDX = 0xffffffff;
  return (FWorldContextId)(int)in_RDX;
}

// GetOrCreateSyncPoint @ 14883fe40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActiveSyncPoint * __thiscall
UE::Tick::FTaskSyncManager::GetOrCreateSyncPoint
          (FTaskSyncManager *this,FBatchData *param_1,FRegisteredSyncPointData *param_2)

{
  FSyncPointDescription *pFVar1;
  byte *pbVar2;
  ESyncPointEventType EVar3;
  ESyncPointActivationRules EVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FSyncPointDescription *local_res10;
  TSharedRef<UE::Tick::FActiveSyncPoint,1> local_38;
  FRegisteredSyncPointData *local_28;
  TSharedRef<UE::Tick::FActiveSyncPoint,1> *local_20;
  
  pFVar1 = &param_2->RegisteredPoint;
  if (*(int *)&(param_1->SyncPointData).field_0x8 != *(int *)&(param_1->SyncPointData).field_0x34) {
    puVar10 = *(undefined1 **)&(param_1->SyncPointData).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(param_1->SyncPointData).field_0x38;
    }
    uVar6 = *(uint *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(param_1->SyncPointData).field_0x48 - 1U & param_2->RegisteredId) * 4
                     );
    if (uVar6 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)&param_1->SyncPointData);
        if (*puVar8 == param_2->RegisteredId) {
          puVar7 = puVar8 + 2;
          if (puVar8 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            return *(FActiveSyncPoint **)puVar7;
          }
          break;
        }
        uVar6 = puVar8[6];
      } while (uVar6 != 0xffffffff);
    }
  }
  MakeShared<UE::Tick::FActiveSyncPoint,1>(&local_38);
  *(uchar *)&(local_38.Object)->_padding_ = (param_2->RegisteredPoint).FirstPossibleTickGroup.Value;
  *(uchar *)((longlong)&(local_38.Object)->_padding_ + 1) =
       (param_2->RegisteredPoint).LastPossibleTickGroup.Value;
  (local_38.Object)->FrameStatus = TaskNotRegistered;
  FSyncPointDescription::operator=(&(local_38.Object)->SyncPointDescription,pFVar1);
  ((local_38.Object)->SyncPointId).BatchContext.BatchId = (param_1->BatchContext).BatchId;
  ((local_38.Object)->SyncPointId).SyncId = param_2->RegisteredId;
  ((local_38.Object)->WorldContextId).WorldId = (param_1->WorldContext).WorldId;
  EVar3 = (param_2->RegisteredPoint).EventType;
  if (EVar3 == SimpleEvent) {
    pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 2);
    *pbVar2 = *pbVar2 | 0x40;
  }
  else {
    if (EVar3 == GameThreadTask) {
      pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 2);
      *pbVar2 = *pbVar2 & 0xbf;
      pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 2);
      *pbVar2 = *pbVar2 & 0xdf;
      goto LAB_14883ff88;
    }
    if (EVar3 != GameThreadTask_HighPriority) {
      if ((EVar3 == WorkerThreadTask) || (EVar3 == WorkerThreadTask_HighPriority)) {
        pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 2);
        *pbVar2 = *pbVar2 | 0x40;
        pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 2);
        *pbVar2 = *pbVar2 & 0xdf;
      }
      else {
        local_res10 = pFVar1;
        `UE::Tick::FTaskSyncManager::GetOrCreateSyncPoint'::__l7::<lambda_1>::operator()
                  (&local_res10);
      }
      goto LAB_14883ff88;
    }
    pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 2);
    *pbVar2 = *pbVar2 & 0xbf;
  }
  pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 2);
  *pbVar2 = *pbVar2 | 0x20;
LAB_14883ff88:
  EVar4 = (param_2->RegisteredPoint).ActivationRules;
  if (EVar4 == AlwaysActivate) {
    pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 3);
    *pbVar2 = *pbVar2 & 0xfe;
  }
  else if (((EVar4 == WaitForTrigger) || (EVar4 == WaitForAllWork)) || (EVar4 == ActivateForAnyWork)
          ) {
    pbVar2 = (byte *)((longlong)&(local_38.Object)->_padding_ + 3);
    *pbVar2 = *pbVar2 | 1;
  }
  else {
    local_res10 = pFVar1;
    `UE::Tick::FTaskSyncManager::GetOrCreateSyncPoint'::__l9::<lambda_2>::operator()(&local_res10);
  }
  local_20 = &local_38;
  local_28 = param_2;
  TSet<TTuple<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TSharedRef<UE::Tick::FActiveSyncPoint,1>_&&>_>
            ((TSet<TTuple<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>,FDefaultSetAllocator>
              *)&param_1->SyncPointData,
             (TPairInitializer<int_const_&,TSharedRef<UE::Tick::FActiveSyncPoint,1>_&&> *)
             &local_res10,(bool *)&local_28);
  lVar5 = *(longlong *)&param_1->SyncPointData;
  lVar9 = (longlong)(int)local_res10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return *(FActiveSyncPoint **)(lVar5 + lVar9 * 0x20 + 8);
}

// GetOrCreateTickGroupWork @ 148840020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActiveSyncPoint * __thiscall
UE::Tick::FTaskSyncManager::GetOrCreateTickGroupWork
          (FTaskSyncManager *this,FBatchData *param_1,ETickingGroup param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FActiveSyncPoint *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  TSharedRef<UE::Tick::FActiveSyncPoint,1> local_48;
  FActiveSyncPoint *local_38;
  FSharedReferencer<1> FStack_30;
  
  if (TG_NewlySpawned < param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickGroup >= 0 && TickGroup < ETickingGroup::TG_MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x504,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FActiveSyncPoint *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar1 = (param_1->TickGroupWork).ArrayNum;
  if (iVar1 <= (int)param_2) {
    uVar7 = param_2 + TG_StartPhysics;
    if (iVar1 < (int)uVar7) {
      iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar7 - iVar1,&(param_1->TickGroupWork).AllocatorInstance,
                         &(param_1->TickGroupWork).ArrayNum,&(param_1->TickGroupWork).ArrayMax);
      memset((param_1->TickGroupWork).AllocatorInstance.Data + (longlong)iVar4 * 0x10,0,
             (longlong)(int)(uVar7 - iVar1) << 4);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar1) {
        uVar8 = iVar1 - uVar7;
        if ((int)(uVar8 | uVar7) < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FActiveSyncPoint *)(*pcVar2)();
            return pFVar5;
          }
        }
        if (uVar8 != 0) {
          TArray<TSharedPtr<UE::Tick::FActiveSyncPoint,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&param_1->TickGroupWork,uVar7,uVar8);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(param_1->TickGroupWork).AllocatorInstance,
                     (param_1->TickGroupWork).ArrayNum,&(param_1->TickGroupWork).ArrayMax);
        }
      }
    }
  }
  uVar7 = 0;
  if ((int)param_2 < (param_1->TickGroupWork).ArrayNum) {
    uVar7 = ~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FActiveSyncPoint *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = *(FActiveSyncPoint **)
            ((param_1->TickGroupWork).AllocatorInstance.Data + (longlong)(int)param_2 * 0x10);
  if (pFVar5 == (FActiveSyncPoint *)0x0) {
    MakeShared<UE::Tick::FActiveSyncPoint,1>(&local_48);
    pFVar5 = local_48.Object;
    *(char *)&(local_48.Object)->_padding_ = (char)param_2;
    *(char *)((longlong)&(local_48.Object)->_padding_ + 1) = (char)param_2;
    ((local_48.Object)->WorldContextId).WorldId = (param_1->WorldContext).WorldId;
    ((local_48.Object)->SyncPointDescription).EventType = GameThreadTask;
    ((local_48.Object)->SyncPointDescription).ActivationRules = ActivateForAnyWork;
    if ((this->CurrentTickWorld == (UWorld *)0x0) || (param_2 != this->CurrentTickGroup)) {
      (local_48.Object)->FrameStatus = TaskNotCreated;
    }
    else {
      (local_48.Object)->FrameStatus = WaitingForManualTask;
    }
    if (-1 < ((local_48.Object)->SyncPointId).SyncId) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewTickFunction->IsTickGroupWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x522,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FActiveSyncPoint *)(*pcVar2)();
        return pFVar5;
      }
    }
    local_38 = local_48.Object;
    FStack_30.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar7 = 0;
    if ((int)param_2 < (param_1->TickGroupWork).ArrayNum) {
      uVar7 = ~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FActiveSyncPoint *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar6 = (param_1->TickGroupWork).AllocatorInstance.Data + (longlong)(int)param_2 * 0x10;
    if (pFVar6 != (FScriptContainerElement *)&local_38) {
      *(FActiveSyncPoint **)pFVar6 = local_38;
      local_38 = (FActiveSyncPoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar6 + 8),&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return pFVar5;
}

// GetSyncPointDescription @ 1488437f0

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
UE::Tick::FTaskSyncManager::GetSyncPointDescription
          (FTaskSyncManager *this,FName param_1,FSyncPointDescription *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  
  lpCriticalSection = &this->ManagerLock;
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
  puVar5 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->RegisteredNameMap,param_1);
  if ((puVar5 != (uint *)0x0) &&
     (*(int *)&(this->RegisteredDataMap).field_0x8 != *(int *)&(this->RegisteredDataMap).field_0x34)
     ) {
    puVar7 = *(undefined1 **)&(this->RegisteredDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RegisteredDataMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->RegisteredDataMap).field_0x48 - 1U & *puVar5) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x40 + *(longlong *)&this->RegisteredDataMap);
        if (*puVar6 == *puVar5) {
          puVar5 = puVar6 + 2;
          if (puVar6 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            FSyncPointDescription::operator=(param_2,(FSyncPointDescription *)(puVar5 + 2));
            bVar2 = true;
            goto LAB_1488438aa;
          }
          break;
        }
        uVar4 = puVar6[0xe];
      } while (uVar4 != 0xffffffff);
    }
  }
  bVar2 = false;
LAB_1488438aa:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// GetTaskGraphEvent @ 148843900

/* WARNING: Removing unreachable block (ram,0x00014884399c) */
/* WARNING: Removing unreachable block (ram,0x0001488439a0) */
/* WARNING: Removing unreachable block (ram,0x0001488439c5) */
/* WARNING: Removing unreachable block (ram,0x0001488439cb) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncResult __thiscall
UE::Tick::FTaskSyncManager::GetTaskGraphEvent
          (FTaskSyncManager *this,FSyncPointId param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FTaskSyncResult FVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TRefCountPtr<FBaseGraphTask> *in_R9;
  undefined8 *local_res8;
  
  lpCriticalSection = &this->ManagerLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar5 = (FTaskSyncResult)(*pcVar3)();
    return FVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindActiveSyncPoint(this,param_1,(TSharedPtr<UE::Tick::FActiveSyncPoint,1> *)param_2);
  if (*(char *)param_1 == '\x01') {
    if ((byte)(*(char *)((longlong)param_1 + 1) - 3U) < 3) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveData.IsValid() && ActiveData->IsCompletionHandleValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x5fc,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FTaskSyncResult)(*pcVar3)();
        return FVar5;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FTaskSyncResult)(*pcVar3)();
        return FVar5;
      }
      TVar6 = FTickFunction::GetCompletionHandle((FTickFunction *)0x0);
      TRefCountPtr<FBaseGraphTask>::operator=(in_R9,(TRefCountPtr<FBaseGraphTask> *)TVar6.Reference)
      ;
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res8 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      if ((in_R9->Reference->field_0xd0 != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!OutEventRef->IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                             ,0x5ff,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FTaskSyncResult)(*pcVar3)();
        return FVar5;
      }
    }
    else {
      *(undefined1 *)param_1 = 6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return param_1.SyncId._0_2_;
}

// GetTickFunctionForSyncPoint @ 148843ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall
UE::Tick::FTaskSyncManager::GetTickFunctionForSyncPoint(FTaskSyncManager *this,FSyncPointId param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FTickFunction *pFVar3;
  undefined1 local_res18 [16];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516069>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x5db,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTickFunction *)(*pcVar1)();
      return pFVar3;
    }
    return (FTickFunction *)0x0;
  }
  lpCriticalSection = &this->ManagerLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTickFunction *)(*pcVar1)();
    return pFVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindActiveSyncPoint(this,(FSyncPointId)local_res18,
                      (TSharedPtr<UE::Tick::FActiveSyncPoint,1> *)param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (FTickFunction *)0x0;
}

// HandleLateWorkRequest @ 148844880

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
UE::Tick::FTaskSyncManager::HandleLateWorkRequest
          (FTaskSyncManager *this,FActiveSyncPoint *param_1,int param_2,FTickFunction *param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar2;
  ETickingGroup EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FActiveSyncPoint *this_00;
  longlong lVar9;
  FActiveSyncWorkHandle *pFVar10;
  ulonglong uVar11;
  FBatchData *pFVar12;
  FBatchData *pFVar13;
  ETickingGroup EVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  FTickFunction *local_res20;
  FActiveSyncWorkHandle local_68;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1 == (FActiveSyncPoint *)0x0) || (param_1->FrameStatus < Dispatched)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequestedSyncPoint && RequestedSyncPoint->FrameStatus >= ESyncPointStatus::Dispatched"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x6a6,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  bVar2 = (byte)param_1->_padding_;
  lpCriticalSection = &this->ManagerLock;
  iVar8 = (param_1->WorldContextId).WorldId;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar3 = this->CurrentTickGroup;
  if (EVar3 != TG_MAX) {
    EVar14 = (uint)bVar2;
    if (((int)EVar3 < 8) && (EVar14 = (uint)bVar2, (int)(uint)bVar2 < (int)EVar3)) {
      EVar14 = EVar3;
    }
    local_res10 = (this->BatchList).ArrayNum;
    uVar11 = (ulonglong)(int)local_res10;
    pFVar12 = (FBatchData *)(this->BatchList).AllocatorInstance.Data;
    pFVar13 = pFVar12 + uVar11;
    do {
      if ((this->BatchList).ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar13) break;
      if ((pFVar12->WorldContext).WorldId == iVar8) {
        this_00 = GetOrCreateTickGroupWork(this,pFVar12,EVar14);
        if (this_00 != (FActiveSyncPoint *)0x0) {
          iVar8 = (pFVar12->TemporaryWorkRequests).ArrayNum;
          piVar1 = &(pFVar12->TemporaryWorkRequests).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&(pFVar12->TemporaryWorkRequests).AllocatorInstance,piVar1);
          }
          (pFVar12->TemporaryWorkRequests).ArrayNum = iVar8 + 1;
          lVar9 = (longlong)iVar8;
          pFVar4 = (pFVar12->TemporaryWorkRequests).AllocatorInstance.Data;
          *(int *)(pFVar4 + lVar9 * 0x28 + 8) = local_res18;
          *(FActiveSyncPoint **)(pFVar4 + lVar9 * 0x28) = param_1;
          *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x10) = 0;
          *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x18) = 0;
          *(uint *)(pFVar4 + lVar9 * 0x28 + 0x20) =
               *(uint *)(pFVar4 + lVar9 * 0x28 + 0x20) & 0xf8000000;
          pFVar10 = FActiveSyncPoint::RegisterWorkHandle(this_00,&local_68);
          FActiveSyncWorkHandle::operator=
                    ((FActiveSyncWorkHandle *)(pFVar4 + lVar9 * 0x28 + 0x10),pFVar10);
          if (local_68.SyncPoint.Object != (FActiveSyncPoint *)0x0) {
            FActiveSyncPoint::ResetWorkHandle(local_68.SyncPoint.Object,&local_68);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SyncPoint.SharedReferenceCount.ReferenceController);
          if (*(FActiveSyncPoint **)(pFVar4 + lVar9 * 0x28 + 0x10) == (FActiveSyncPoint *)0x0) {
            bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_830330814561517417>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                               ,0x97,"SyncPoint.IsValid()");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
LAB_148844aae:
            bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_830330814561515836>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                               ,0x6c4,
                               "WorkRequest.WorkHandle.RequestWork(TickFunction, ESyncWorkRepetition::Once)"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          else {
            bVar6 = FActiveSyncPoint::RequestWork
                              (*(FActiveSyncPoint **)(pFVar4 + lVar9 * 0x28 + 0x10),
                               (FActiveSyncWorkHandle *)(pFVar4 + lVar9 * 0x28 + 0x10),local_res20,
                               Once);
            if (!bVar6) goto LAB_148844aae;
          }
          bVar6 = true;
          goto LAB_148844ae3;
        }
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_830330814561515841>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                           ,0x6bf,"TickGroupWork");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      uVar11 = (ulonglong)local_res10;
      pFVar12 = pFVar12 + 1;
    } while( true );
  }
  bVar6 = false;
LAB_148844ae3:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar6;
}

// InitializeBatchForFrame @ 148847450

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
UE::Tick::FTaskSyncManager::InitializeBatchForFrame
          (FTaskSyncManager *this,FBatchData *param_1,ULevel *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FActiveSyncPoint *pFVar10;
  uint *puVar11;
  FActiveSyncPoint *pFVar12;
  longlong lVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 *puVar20;
  FRegisteredSyncPointData *pFVar21;
  int iVar22;
  undefined1 local_res8 [8];
  FBatchData *local_res10;
  ULevel *local_res18;
  undefined1 local_res20 [8];
  uint local_c8;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar4 = *(int *)&(this->RegisteredDataMap).field_0x28;
  iVar22 = 0;
  uVar8 = 1;
  iVar19 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->RegisteredDataMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)&(this->RegisteredDataMap).field_0x10;
    }
    uVar16 = *puVar14;
    iVar19 = 0;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar22;
      iVar19 = iVar19 + 0x20;
      iVar22 = iVar22 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_148847501;
      uVar16 = puVar14[lVar13 + 1];
    }
    uVar8 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = iVar19 + -1 + (int)lVar13;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_148847501:
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredDataMap).field_0x10;
  local_c8 = *(uint *)&(this->RegisteredDataMap).field_0x28;
  uVar16 = local_c8 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar8,iVar22);
  TStack_78.CurrentBitIndex = iVar9;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)local_c8 >> 5;
  TStack_78._28_4_ = iVar9;
  TStack_78.BaseBitIndex = iVar19;
  uStack_58 = CONCAT44(uStack_94,
                       *(int *)&(this->RegisteredDataMap).field_0x8 -
                       *(int *)&(this->RegisteredDataMap).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  if ((((int)local_c8 < 0) || (iVar4 < (int)local_c8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->RegisteredDataMap).field_0x28;
  if (local_c8 != uVar8) {
    puVar20 = *(undefined1 **)&(this->RegisteredDataMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->RegisteredDataMap).field_0x10;
    }
    uVar17 = -1 << ((byte)local_c8 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar22 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar22;
      uVar16 = uVar16 + 0x20;
      iVar22 = iVar22 + 1;
      local_c8 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_148847610;
      uVar17 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_c8 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar8 < (int)local_c8) {
      local_c8 = uVar8;
    }
  }
LAB_148847610:
  if (*(int *)&(this->RegisteredDataMap).field_0x8 - *(int *)&(this->RegisteredDataMap).field_0x34
      != (int)uStack_58) {
    local_res8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((TStack_78.CurrentBitIndex == local_c8) &&
     (TStack_78.Array ==
      (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredDataMap).field_0x10)) {
    uVar8 = 0;
    if (0 < (param_1->TickGroupWork).ArrayNum) {
      lVar13 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar8 < (param_1->TickGroupWork).ArrayNum) {
          uVar16 = ~uVar8 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar10 = *(FActiveSyncPoint **)((param_1->TickGroupWork).AllocatorInstance.Data + lVar13);
        if (pFVar10 != (FActiveSyncPoint *)0x0) {
          pFVar10->FrameStatus = TaskNotCreated;
          FActiveSyncPoint::ResetWorkForFrame(pFVar10);
        }
        uVar8 = uVar8 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((int)uVar8 < (param_1->TickGroupWork).ArrayNum);
    }
    return;
  }
  lVar13 = (longlong)TStack_78.CurrentBitIndex * 0x40 + *(longlong *)&this->RegisteredDataMap;
  pFVar10 = GetOrCreateSyncPoint(this,param_1,(FRegisteredSyncPointData *)(lVar13 + 8));
  if (pFVar10 != (FActiveSyncPoint *)0x0) {
    if (((byte *)pFVar10->_padding_ == (byte *)0x0) || ((*(byte *)pFVar10->_padding_ & 1) == 0)) {
      plVar18 = *(longlong **)(lVar13 + 0x28);
      iVar4 = *(int *)(lVar13 + 0x30);
      plVar1 = plVar18 + iVar4;
LAB_148847690:
      if (*(int *)(lVar13 + 0x30) != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (plVar18 == plVar1) goto LAB_14884780d;
      lVar5 = *plVar18;
      uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
      if (*(int *)&(this->RegisteredNameMap).field_0x8 ==
          *(int *)&(this->RegisteredNameMap).field_0x34) goto LAB_1488477c3;
      puVar20 = *(undefined1 **)&(this->RegisteredNameMap).field_0x40;
      puVar15 = &(this->RegisteredNameMap).field_0x38;
      if (puVar20 != (undefined1 *)0x0) {
        puVar15 = puVar20;
      }
      iVar22 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->RegisteredNameMap).field_0x48 - 1U &
                       (int)((ulonglong)lVar5 >> 0x20) + uVar8) * 4);
      if (iVar22 != -1) {
        do {
          lVar2 = *(longlong *)&this->RegisteredNameMap + (longlong)iVar22 * 0x14;
          if (*(longlong *)(*(longlong *)&this->RegisteredNameMap + (longlong)iVar22 * 0x14) ==
              lVar5) {
            puVar14 = (uint *)(lVar2 + 8);
            if (lVar2 == 0) {
              puVar14 = (uint *)0x0;
            }
            if (puVar14 == (uint *)0x0) goto LAB_1488477c3;
            if (*(int *)&(this->RegisteredDataMap).field_0x8 ==
                *(int *)&(this->RegisteredDataMap).field_0x34) goto LAB_148847796;
            puVar20 = *(undefined1 **)&(this->RegisteredDataMap).field_0x40;
            puVar15 = &(this->RegisteredDataMap).field_0x38;
            if (puVar20 != (undefined1 *)0x0) {
              puVar15 = puVar20;
            }
            uVar8 = *(uint *)(puVar15 +
                             (ulonglong)
                             (*(int *)&(this->RegisteredDataMap).field_0x48 - 1U & *puVar14) * 4);
            if (uVar8 == 0xffffffff) goto LAB_148847796;
            goto LAB_148847780;
          }
          iVar22 = *(int *)(lVar2 + 0xc);
        } while (iVar22 != -1);
        plVar18 = plVar18 + 1;
        goto LAB_148847690;
      }
      goto LAB_1488477c3;
    }
    goto LAB_148847856;
  }
  goto LAB_148847862;
LAB_14884780d:
  if (((pFVar10->FrameStatus != TaskNotRegistered) && (pFVar10->FrameStatus != ExecutionComplete))
     && (bVar7 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_830330814561516372>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                            ,0x4ac,
                            "SyncPoint->FrameStatus == ESyncPointStatus::TaskNotRegistered || SyncPoint->FrameStatus == ESyncPointStatus::ExecutionComplete"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FTickFunction::RegisterTickFunction((FTickFunction *)pFVar10,local_res18);
  param_1 = local_res10;
LAB_148847856:
  pFVar10->FrameStatus = TaskNotCreated;
  FActiveSyncPoint::ResetWorkForFrame(pFVar10);
LAB_148847862:
  TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  goto LAB_148847610;
  while (uVar8 = puVar11[0xe], uVar8 != 0xffffffff) {
LAB_148847780:
    puVar11 = (uint *)((longlong)(int)uVar8 * 0x40 + *(longlong *)&this->RegisteredDataMap);
    if (*puVar11 == *puVar14) {
      pFVar21 = (FRegisteredSyncPointData *)(puVar11 + 2);
      if (puVar11 == (uint *)0x0) {
        pFVar21 = (FRegisteredSyncPointData *)0x0;
      }
      if (pFVar21 != (FRegisteredSyncPointData *)0x0) {
        pFVar12 = GetOrCreateSyncPoint(this,local_res10,pFVar21);
        if (pFVar12 == (FActiveSyncPoint *)0x0) goto LAB_1488477c3;
        FTickFunction::AddPrerequisite
                  ((FTickFunction *)pFVar10,(UObject *)local_res18,(FTickFunction *)pFVar12);
        plVar18 = plVar18 + 1;
        goto LAB_148847690;
      }
      break;
    }
  }
LAB_148847796:
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_830330814561516386>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0x49e,"FoundData");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1488477c3:
  plVar18 = plVar18 + 1;
  goto LAB_148847690;
}

// OnWorldContextRemove @ 14884bbf0

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
UE::Tick::FTaskSyncManager::OnWorldContextRemove(FTaskSyncManager *this,FWorldContext *param_1)

{
  uchar uVar1;
  UWorld *pUVar2;
  FWorldContextId *pFVar3;
  FWorldContextId local_res10 [6];
  
  uVar1 = (param_1->WorldType).Value;
  if (((uVar1 != '\0') && (uVar1 != '\a')) &&
     (pUVar2 = (param_1->ThisCurrentWorld).field0_0x0.DebugPtr, pUVar2 != (UWorld *)0x0)) {
    pFVar3 = FWorldContextId::FWorldContextId(local_res10,pUVar2);
    ReleaseWorldContext(this,(FWorldContextId)pFVar3->WorldId);
  }
  return;
}

// RegisterNewSyncPoint @ 148850a60

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
UE::Tick::FTaskSyncManager::RegisterNewSyncPoint
          (FTaskSyncManager *this,FSyncPointDescription *param_1)

{
  FName *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x423,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = &param_1->SourceName;
  if ((param_1->RegisteredName == (FName)0x0) || (*this_00 == (FName)0x0)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516507>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x425,"NewDescription.IsValid() && !NewDescription.WasLoadedFromSettings()")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (1 < (byte)LogTaskSync._0_1_) {
      ::FName::ToString(this_00,&local_18);
      ::FName::ToString(&param_1->RegisteredName,&local_28);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTaskSync);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lpCriticalSection = &this->ManagerLock;
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
    piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&this->RegisteredNameMap,param_1->RegisteredName);
    if (piVar4 == (int *)0x0) {
      RegisterSyncPointInternal(this,param_1);
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return true;
    }
    if (1 < (byte)LogTaskSync._0_1_) {
      ::FName::ToString(this_00,&local_38);
      ::FName::ToString(&param_1->RegisteredName,&local_48);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTaskSync);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return false;
}

// RegisterSyncPointInternal @ 148850cb0

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
UE::Tick::FTaskSyncManager::RegisterSyncPointInternal
          (FTaskSyncManager *this,FSyncPointDescription *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint local_res8 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res10;
  FSyncPointDescription *local_28;
  uint *local_20;
  
  local_res8[0] = this->HighestSyncId + 1;
  this->HighestSyncId = local_res8[0];
  if (*(int *)&(this->RegisteredDataMap).field_0x8 != *(int *)&(this->RegisteredDataMap).field_0x34)
  {
    puVar3 = *(undefined1 **)&(this->RegisteredDataMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->RegisteredDataMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)
                               (*(int *)&(this->RegisteredDataMap).field_0x48 - 1U & local_res8[0])
                               * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&this->RegisteredDataMap);
        if (*puVar2 == local_res8[0]) {
          if (puVar2 != (uint *)0x0) goto LAB_148850d66;
          break;
        }
        uVar1 = puVar2[0xe];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res10.Value = (int *)local_res8;
  TSet<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>,FDefaultSetAllocator>
              *)&this->RegisteredDataMap,(uint)&local_res10,
             (TKeyInitializer<int_const_&> *)(ulonglong)local_res8[0],(bool *)&local_res10.Value);
  puVar2 = (uint *)((longlong)(int)local_res10.Key * 0x40 + *(longlong *)&this->RegisteredDataMap);
LAB_148850d66:
  puVar2[2] = local_res8[0];
  FSyncPointDescription::operator=((FSyncPointDescription *)(puVar2 + 4),param_1);
  local_20 = local_res8;
  local_28 = param_1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->RegisteredNameMap,&local_res10,(bool *)&local_28);
  return;
}

// RegisterTickGroupWorkHandle @ 148850db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncResult __thiscall
UE::Tick::FTaskSyncManager::RegisterTickGroupWorkHandle
          (FTaskSyncManager *this,FWorldContextId param_1,ETickingGroup param_2,
          FActiveSyncWorkHandle *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTaskSyncResult FVar4;
  FActiveSyncPoint *this_00;
  FActiveSyncWorkHandle *pFVar5;
  undefined4 in_register_00000014;
  undefined2 *puVar6;
  FBatchData *pFVar7;
  FBatchData *pFVar8;
  undefined1 local_res8 [8];
  FActiveSyncWorkHandle *in_stack_00000028;
  FActiveSyncWorkHandle local_48;
  
  puVar6 = (undefined2 *)CONCAT44(in_register_00000014,param_1.WorldId);
  lpCriticalSection = &this->ManagerLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FTaskSyncResult)(*pcVar2)();
      return FVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->BatchList).ArrayNum;
  pFVar7 = (FBatchData *)(this->BatchList).AllocatorInstance.Data;
  pFVar8 = pFVar7 + iVar1;
  while( true ) {
    if ((this->BatchList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if ((pFVar7->WorldContext).WorldId == param_2) {
      this_00 = GetOrCreateTickGroupWork(this,pFVar7,(ETickingGroup)param_3);
      if (this_00 == (FActiveSyncPoint *)0x0) {
        *puVar6 = 7;
      }
      else {
        pFVar5 = FActiveSyncPoint::RegisterWorkHandle(this_00,&local_48);
        FActiveSyncWorkHandle::operator=(in_stack_00000028,pFVar5);
        if (local_48.SyncPoint.Object != (FActiveSyncPoint *)0x0) {
          FActiveSyncPoint::ResetWorkHandle(local_48.SyncPoint.Object,&local_48);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SyncPoint.SharedReferenceCount.ReferenceController);
        *puVar6 = 1;
      }
LAB_148850ea2:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return SUB42(param_1.WorldId,0);
    }
    pFVar7 = pFVar7 + 1;
  }
  *puVar6 = 10;
  goto LAB_148850ea2;
}

// RegisterWorkHandle @ 148851220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncResult __thiscall
UE::Tick::FTaskSyncManager::RegisterWorkHandle
          (FTaskSyncManager *this,FSyncPointId param_1,FActiveSyncWorkHandle *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FTaskSyncResult FVar3;
  FActiveSyncWorkHandle *pFVar4;
  FActiveSyncWorkHandle *in_R9;
  FActiveSyncWorkHandle local_28;
  
  lpCriticalSection = &this->ManagerLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FTaskSyncResult)(*pcVar1)();
    return FVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindActiveSyncPoint(this,param_1,&param_2->SyncPoint);
  if (*(char *)param_1 == '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x666,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FTaskSyncResult)(*pcVar1)();
      return FVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FTaskSyncResult)(*pcVar1)();
      return FVar3;
    }
    if (DAT_00000050 == '\x01') {
      *(undefined1 *)param_1 = 7;
    }
    else {
      pFVar4 = FActiveSyncPoint::RegisterWorkHandle((FActiveSyncPoint *)0x0,&local_28);
      FActiveSyncWorkHandle::operator=(in_R9,pFVar4);
      if (local_28.SyncPoint.Object != (FActiveSyncPoint *)0x0) {
        FActiveSyncPoint::ResetWorkHandle(local_28.SyncPoint.Object,&local_28);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SyncPoint.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return param_1.SyncId._0_2_;
}

// ReleaseWorldContext @ 148852cf0

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
UE::Tick::FTaskSyncManager::ReleaseWorldContext(FTaskSyncManager *this,FWorldContextId param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  
  bVar3 = IsInGameThread();
  if ((bVar3) && (this->CurrentTickWorld == (UWorld *)0x0)) {
    pFVar4 = (this->BatchList).AllocatorInstance.Data;
    iVar1 = (this->BatchList).ArrayNum;
    pFVar5 = pFVar4 + 0x60;
    pFVar6 = pFVar4 + (longlong)iVar1 * 0x78;
    while( true ) {
      if ((this->BatchList).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar4 == pFVar6) break;
      if (*(int *)(pFVar5 + -0x5c) == param_1.WorldId) {
        TSet<TTuple<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>,FDefaultSetAllocator>
                 *)(pFVar5 + -0x58));
        if (*(int *)(pFVar5 + 4) < 0) {
          DestructItems<TSharedPtr<UE::Tick::FActiveSyncPoint,1>,int>
                    (*(TSharedPtr<UE::Tick::FActiveSyncPoint,1> **)(pFVar5 + -8),*(int *)pFVar5);
          *(int *)pFVar5 = 0;
          if (*(int *)(pFVar5 + 4) != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(pFVar5 + -8),0,(int *)(pFVar5 + 4));
          }
        }
        else {
          DestructItems<TSharedPtr<UE::Tick::FActiveSyncPoint,1>,int>
                    (*(TSharedPtr<UE::Tick::FActiveSyncPoint,1> **)(pFVar5 + -8),*(int *)pFVar5);
          *(int *)pFVar5 = 0;
        }
        if (*(int *)(pFVar5 + 0x14) < 0) {
          DestructItems<UE::Tick::FTaskSyncManager::FTemporaryWorkRequest,int>
                    (*(FTemporaryWorkRequest **)(pFVar5 + 8),*(int *)(pFVar5 + 0x10));
          *(int *)(pFVar5 + 0x10) = 0;
          if (*(int *)(pFVar5 + 0x14) != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,(ForAnyElementType *)(pFVar5 + 8),0,(int *)(pFVar5 + 0x14));
          }
        }
        else {
          DestructItems<UE::Tick::FTaskSyncManager::FTemporaryWorkRequest,int>
                    (*(FTemporaryWorkRequest **)(pFVar5 + 8),*(int *)(pFVar5 + 0x10));
          *(int *)(pFVar5 + 0x10) = 0;
        }
        *(undefined4 *)pFVar4 = 0xffffffff;
        *(int *)(pFVar5 + -0x5c) = -1;
      }
      pFVar4 = pFVar4 + 0x78;
      pFVar5 = pFVar5 + 0x78;
    }
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516168>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x578,"IsInGameThread() && !IsTicking()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ReloadRegisteredData @ 148852e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Tick::FTaskSyncManager::ReloadRegisteredData(FTaskSyncManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  TMap<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>_>
  *pTVar7;
  bool bVar8;
  UClass *this_00;
  longlong lVar9;
  int iVar10;
  FSyncPointDescription *pFVar11;
  FScriptContainerElement *pFVar12;
  FSyncPointDescription *this_01;
  ForAnyElementType FVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_f8;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int local_e4;
  TObjectPtr<UObject>_u_0 local_e0;
  TMap<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78 [2];
  undefined4 local_4c;
  
  bVar8 = IsInGameThread();
  if (((!bVar8) || (this->CurrentTickWorld != (UWorld *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() && !IsTicking()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x3e3,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((&this->ManagerLock == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ManagerLock);
  this_00 = UTaskSyncManagerSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  local_e0 = (this_00->ClassDefaultObject).field0_0x0;
  local_d8 = &this->RegisteredDataMap;
  local_c8 = &(this->RegisteredDataMap).field_0x10;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  uStack_cc = 1;
  iVar3 = *(int *)&(this->RegisteredDataMap).field_0x28;
  iStack_d0 = 0;
  local_b8 = 0;
  iStack_bc = iStack_d0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->RegisteredDataMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_c8;
    }
    uVar16 = *puVar15;
    local_b8 = 0;
    iStack_d0 = 0;
    while (uVar16 == 0) {
      lVar9 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_148852fe1;
      uVar16 = puVar15[lVar9 + 1];
    }
    uStack_cc = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e8 = (int)lVar9;
    iStack_bc = local_b8 + -1 + local_e8;
    if (iVar3 < iStack_bc) {
      iStack_bc = iVar3;
    }
  }
LAB_148852fe1:
  uVar16 = *(uint *)&(this->RegisteredDataMap).field_0x28;
  uStack_b4 = local_4c;
  iStack_b0 = *(int *)&(this->RegisteredDataMap).field_0x8 -
              *(int *)&(this->RegisteredDataMap).field_0x34;
  uVar18 = uVar16 & 0xffffffe0;
  uStack_c0 = 0xffffffff;
  puVar1 = &(this->RegisteredDataMap).field_0x10;
  TStack_a0.CurrentBitIndex = iStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
  iVar10 = (int)uVar16 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_a8 = local_d8;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->RegisteredDataMap).field_0x28;
  if (uVar16 != uVar4) {
    puVar14 = *(undefined1 **)&(this->RegisteredDataMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar10;
      uVar18 = uVar18 + 0x20;
      iVar10 = iVar10 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1488530f3;
      uVar16 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e4 = (int)lVar9;
    uVar16 = local_e4 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_1488530f3:
  while( true ) {
    pTVar7 = local_a8;
    if (*(int *)(&local_a8->field_0x0 + 8) - *(int *)(&local_a8->field_0x0 + 0x34) != (int)uStack_80
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar16) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &this->RegisteredDataMap)) break;
    pFVar11 = (FSyncPointDescription *)
              (*(longlong *)&pTVar7->field_0x0 + 0x10 + (longlong)TStack_a0.CurrentBitIndex * 0x40);
    if (pFVar11->SourceName != (FName)0x0) {
      if (((local_f8.Data <= pFVar11) &&
          (pFVar11 < (FSyncPointDescription *)(local_f8.Data + (longlong)iStack_ec * 0x28))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_f8,&iStack_ec);
      }
      lVar9 = (longlong)local_f0;
      local_f0 = local_f0 + 1;
      FSyncPointDescription::FSyncPointDescription
                ((FSyncPointDescription *)(local_f8.Data + lVar9 * 0x28),pFVar11);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  TSet<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>,FDefaultSetAllocator>
           *)&this->RegisteredDataMap);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->RegisteredNameMap);
  iVar3 = (this->BatchList).ArrayNum;
  pFVar12 = (this->BatchList).AllocatorInstance.Data;
  pFVar17 = pFVar12 + (longlong)iVar3 * 0x78;
  while( true ) {
    if ((this->BatchList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    TVar6 = local_e0;
    if (pFVar12 == pFVar17) break;
    TSet<TTuple<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>,0>,FDefaultSetAllocator>
             *)(pFVar12 + 8));
    pFVar12 = pFVar12 + 0x78;
  }
  this->HighestSyncId = -1;
  iVar3 = *(int *)&local_e0.DebugPtr[1].field_0x18;
  this_01 = *(FSyncPointDescription **)&local_e0.DebugPtr[1].field_0x10;
  pFVar11 = this_01 + iVar3;
  while( true ) {
    if (*(int *)&TVar6.DebugPtr[1].field_0x18 != iVar3) {
      `TCheckedPointerIterator<UE::Tick::FSyncPointDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    iVar10 = local_f0;
    if (this_01 == pFVar11) break;
    if (((this_01->EventType == Invalid) || (this_01->ActivationRules == Invalid)) ||
       (this_01->RegisteredName == (FName)0x0)) {
      if (1 < (byte)LogTaskSync._0_1_) {
        ::FName::ToString(&this_01->RegisteredName,local_78);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTaskSync);
        if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        }
      }
      this_01 = this_01 + 1;
    }
    else {
      RegisterSyncPointInternal(this,this_01);
      this_01 = this_01 + 1;
    }
  }
  pFVar11 = (FSyncPointDescription *)(local_f8.Data + (longlong)local_f0 * 0x28);
  FVar13.Data = local_f8.Data;
  while( true ) {
    if (local_f0 != iVar10) {
      `TCheckedPointerIterator<UE::Tick::FSyncPointDescription,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if ((FSyncPointDescription *)FVar13.Data == pFVar11) break;
    RegisterSyncPointInternal(this,(FSyncPointDescription *)FVar13.Data);
    FVar13.Data = FVar13.Data + 0x28;
  }
  DestructItems<UE::Tick::FSyncPointDescription,int>
            ((FSyncPointDescription *)local_f8.Data,local_f0);
  if ((FSyncPointDescription *)local_f8.Data != (FSyncPointDescription *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (&this->ManagerLock != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ManagerLock);
  }
  return;
}

// StartFrame @ 14885a480

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
UE::Tick::FTaskSyncManager::StartFrame
          (FTaskSyncManager *this,UWorld *param_1,float param_2,ELevelTick param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ULevel *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBatchData *pFVar6;
  FBatchData *pFVar7;
  FWorldContextId local_res8 [2];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  
  if (param_1 == (UWorld *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x46b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = IsInGameThread();
  if (((!bVar4) || (this->CurrentTickWorld != (UWorld *)0x0)) || (this->CurrentTickGroup != TG_MAX))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread() && !IsTicking() && CurrentTickGroup == ETickingGroup::TG_MAX"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x46c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = &this->ManagerLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->CurrentDeltaTime = param_2;
  this->CurrentTickWorld = param_1;
  this->CurrentTickType = param_3;
  pUVar2 = (param_1->PersistentLevel).field0_0x0.DebugPtr;
  FWorldContextId::FWorldContextId(local_res8,param_1);
  iVar1 = (this->BatchList).ArrayNum;
  bVar4 = false;
  pFVar6 = (FBatchData *)(this->BatchList).AllocatorInstance.Data;
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if ((this->BatchList).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar6 == pFVar7) break;
    if ((pFVar6->WorldContext).WorldId == local_res8[0].WorldId) {
      bVar4 = true;
      InitializeBatchForFrame(this,pFVar6,pUVar2);
    }
    pFVar6 = pFVar6 + 1;
  }
  if (!bVar4) {
    CreateNewBatch(this,(FWorldContextId)(int)local_res20);
    if (((int)local_res20[0] < 0) || ((this->BatchList).ArrayNum <= (int)local_res20[0])) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BatchList.IsValidIndex(BatchContext.BatchId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x484,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = 0;
    if ((int)local_res20[0] < (this->BatchList).ArrayNum) {
      uVar5 = ~local_res20[0] >> 0x1f;
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
    InitializeBatchForFrame
              (this,(FBatchData *)
                    ((this->BatchList).AllocatorInstance.Data + (longlong)(int)local_res20[0] * 0x78
                    ),pUVar2);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// StartTickGroup @ 14885a6c0

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
UE::Tick::FTaskSyncManager::StartTickGroup
          (FTaskSyncManager *this,UWorld *param_1,ETickingGroup param_2,
          TArray<FTickFunction_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ESyncPointActivationRules EVar1;
  uint uVar2;
  FActiveSyncPoint *this_00;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 local_f8;
  undefined1 local_f7 [7];
  FActiveSyncPoint *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FWorldContextId local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  LPCRITICAL_SECTION local_c8;
  FScriptContainerElement *local_c0;
  int iStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  FScriptContainerElement *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  bVar4 = IsInGameThread();
  if ((((!bVar4) || (this->CurrentTickWorld != param_1)) || (this->CurrentTickGroup != TG_MAX)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() && CurrentTickWorld == InWorld && CurrentTickGroup == ETickingGroup::TG_MAX"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x52a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = &this->ManagerLock;
  local_c8 = (LPCRITICAL_SECTION)lpCriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FWorldContextId::FWorldContextId(&local_d8,param_1);
  this->CurrentTickGroup = param_2;
  local_e0 = (this->BatchList).AllocatorInstance.Data;
  local_d4 = (this->BatchList).ArrayNum;
  uVar5 = (ulonglong)(int)local_d4;
  pFVar10 = local_e0 + 0x28;
  pFVar7 = local_e0 + uVar5 * 0x78;
  local_e8 = pFVar7;
  do {
    if ((this->BatchList).ArrayNum != (int)uVar5) {
      local_f8 = 0;
      `TCheckedPointerIterator<UE::Tick::FTaskSyncManager::FBatchData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_f8);
    }
    if (local_e0 == pFVar7) {
      if (local_c8 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(local_c8);
      }
      return;
    }
    if (*(int *)(pFVar10 + -0x24) == local_d8.WorldId) {
      uVar8 = *(uint *)(pFVar10 + 8);
      iStack_b8 = 0;
      local_a0 = 0;
      uStack_b4 = 1;
      uStack_a4 = 0;
      if (uVar8 != 0) {
        pFVar7 = *(FScriptContainerElement **)pFVar10;
        if (*(FScriptContainerElement **)pFVar10 == (FScriptContainerElement *)0x0) {
          pFVar7 = pFVar10 + -0x10;
        }
        uVar11 = *(uint *)pFVar7;
        while (uVar11 == 0) {
          lVar6 = (longlong)iStack_b8;
          local_a0 = local_a0 + 0x20;
          iStack_b8 = iStack_b8 + 1;
          uStack_a4 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b8)
          goto LAB_14885a860;
          uVar11 = *(uint *)(pFVar7 + (lVar6 + 1) * 4);
        }
        uStack_b4 = -uVar11 & uVar11;
        uVar5 = (ulonglong)uStack_b4 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_d0 = (int)lVar6;
        uStack_a4 = local_a0 + -1 + local_d0;
        if ((int)uVar8 < (int)uStack_a4) {
          uStack_a4 = uVar8;
        }
      }
LAB_14885a860:
      local_c0 = pFVar10 + -0x20;
      local_b0 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar10 + -0x10);
      uStack_9c = local_44;
      iStack_98 = *(int *)(pFVar10 + -0x18) - *(int *)(pFVar10 + 0x14);
      uVar11 = uVar8 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
      uStack_a8 = 0xffffffff;
      TStack_88.CurrentBitIndex = uStack_a4;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar8 >> 5;
      TStack_88._28_4_ = local_44;
      TStack_88.BaseBitIndex = local_a0;
      uStack_68 = CONCAT44(uStack_94,iStack_98);
      local_90 = local_c0;
      TStack_88.Array = local_b0;
      if (((int)uVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(uint *)(pFVar10 + 8);
      if (uVar8 != uVar2) {
        pFVar7 = *(FScriptContainerElement **)pFVar10;
        if (*(FScriptContainerElement **)pFVar10 == (FScriptContainerElement *)0x0) {
          pFVar7 = pFVar10 + -0x10;
        }
        uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(pFVar7 + (longlong)iVar9 * 4);
        while (uVar8 == 0) {
          lVar6 = (longlong)iVar9;
          uVar11 = uVar11 + 0x20;
          iVar9 = iVar9 + 1;
          uVar8 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_14885a970;
          uVar8 = *(uint *)(pFVar7 + lVar6 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_cc = (int)lVar6;
        uVar8 = local_cc + -1 + uVar11;
        if ((int)uVar2 < (int)uVar8) {
          uVar8 = uVar2;
        }
      }
LAB_14885a970:
      while( true ) {
        pFVar7 = local_90;
        if (*(int *)(local_90 + 8) - *(int *)(local_90 + 0x34) != (int)uStack_68) {
          local_f7[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<UE::Tick::FActiveSyncPoint,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f7);
        }
        if (((TStack_88.CurrentBitIndex == uVar8) &&
            (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar10 + -0x10))) &&
           (pFVar7 == pFVar10 + -0x20)) break;
        this_00 = *(FActiveSyncPoint **)
                   ((longlong)TStack_88.CurrentBitIndex * 0x20 + 8 + *(longlong *)pFVar7);
        if ((this_00->SyncPointDescription).FirstPossibleTickGroup.Value == param_2) {
          bVar4 = IsInGameThread();
          if ((!bVar4) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                                 ,0x16c,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((this_00->FrameStatus != TaskNotCreated) &&
             (bVar4 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_830330814561517202>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                                 ,0x16e,"FrameStatus == ESyncPointStatus::TaskNotCreated"), bVar4))
          {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          EVar1 = (this_00->SyncPointDescription).ActivationRules;
          if (EVar1 == AlwaysActivate) {
            this_00->FrameStatus = Dispatched;
          }
          else if (EVar1 == WaitForTrigger) {
            this_00->FrameStatus = DispatchWaitingForTrigger;
          }
          else if ((EVar1 == WaitForAllWork) || (EVar1 == ActivateForAnyWork)) {
            this_00->FrameStatus = DispatchWaitingForWork;
            bVar4 = FActiveSyncPoint::IsReadyToProcessWork(this_00);
            if (bVar4) {
              pFVar7 = (param_3->AllocatorInstance).Data;
              local_f0 = this_00;
              if (((pFVar7 <= (FScriptContainerElement *)&local_f0) &&
                  ((FScriptContainerElement *)&local_f0 < pFVar7 + (longlong)param_3->ArrayMax * 8))
                 && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar9 = param_3->ArrayNum;
              if (iVar9 == param_3->ArrayMax) {
                iVar9 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              param_3->ArrayNum = iVar9 + 1;
              *(FActiveSyncPoint **)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                   local_f0;
            }
          }
        }
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      pFVar7 = local_e8;
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(pFVar10 + 0x38))) {
        if (((int)param_2 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar6 = *(longlong *)(*(longlong *)(pFVar10 + 0x30) + (longlong)(int)param_2 * 0x10);
        pFVar7 = local_e8;
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x74) = 9;
        }
      }
    }
    uVar5 = (ulonglong)local_d4;
    local_e0 = local_e0 + 0x78;
    pFVar10 = pFVar10 + 0x78;
  } while( true );
}

// TriggerSyncPoint @ 14885bcb0

/* WARNING: Removing unreachable block (ram,0x00014885bdd1) */
/* WARNING: Removing unreachable block (ram,0x00014885bdf6) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncResult __thiscall
UE::Tick::FTaskSyncManager::TriggerSyncPoint(FTaskSyncManager *this,FSyncPointId param_1)

{
  code *pcVar1;
  bool bVar2;
  FTaskSyncResult FVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  TSharedPtr<UE::Tick::FActiveSyncPoint,1> *in_R8;
  undefined2 local_res8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ManagerLock;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FTaskSyncResult)(*pcVar1)();
    return FVar3;
  }
  EnterCriticalSection(lpCriticalSection);
  FindActiveSyncPoint(this,(FSyncPointId)&local_res8,in_R8);
  if ((char)local_res8 == '\x01') {
    if ((byte)(local_res8._1_1_ - 3U) < 3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x616,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FTaskSyncResult)(*pcVar1)();
        return FVar3;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FTaskSyncResult)(*pcVar1)();
        return FVar3;
      }
      if (cRam0000000000000051 != '\x02') {
        local_res8 = CONCAT11(local_res8._1_1_,8);
        goto LAB_14885be9e;
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = (LPCRITICAL_SECTION)0x0;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00000080);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FTaskSyncResult)(*pcVar1)();
        return FVar3;
      }
      bVar2 = FActiveSyncPoint::DispatchManually((FActiveSyncPoint *)0x0);
      if (bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          FVar3 = (FTaskSyncResult)(*pcVar1)();
          return FVar3;
        }
        *(undefined1 *)((longlong)param_1 + 1) = uRam0000000000000074;
        *(undefined1 *)param_1 = 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00000080);
        goto LAB_14885bea6;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00000080);
    }
    local_res8 = CONCAT11(local_res8._1_1_,6);
  }
LAB_14885be9e:
  *(undefined2 *)param_1 = local_res8;
LAB_14885bea6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_1.SyncId._0_2_;
}

// TriggerSyncPointAfterEvent @ 14885bee0

/* WARNING: Removing unreachable block (ram,0x00014885c07e) */
/* WARNING: Removing unreachable block (ram,0x00014885c0a3) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskSyncResult __thiscall
UE::Tick::FTaskSyncManager::TriggerSyncPointAfterEvent
          (FTaskSyncManager *this,FSyncPointId param_1,TRefCountPtr<FBaseGraphTask> param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FTaskSyncResult FVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  undefined8 *puVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *in_R9;
  undefined2 local_res8;
  undefined8 *local_48;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ManagerLock;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar5 = (FTaskSyncResult)(*pcVar3)();
    return FVar5;
  }
  EnterCriticalSection(lpCriticalSection);
  FindActiveSyncPoint(this,(FSyncPointId)&local_res8,
                      (TSharedPtr<UE::Tick::FActiveSyncPoint,1> *)param_2.Reference);
  if ((char)local_res8 == '\x01') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x638,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FTaskSyncResult)(*pcVar3)();
      return FVar5;
    }
    if (2 < (byte)(local_res8._1_1_ - 3U)) goto LAB_14885c1b1;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x63c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FTaskSyncResult)(*pcVar3)();
      return FVar5;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FTaskSyncResult)(*pcVar3)();
      return FVar5;
    }
    if (cRam0000000000000051 == '\x02') {
      bVar4 = FTickFunction::CanDispatchManually((FTickFunction *)0x0);
      if (!bVar4) {
LAB_14885c1b1:
        local_res8 = CONCAT11(local_res8._1_1_,6);
        goto LAB_14885c1b5;
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = (LPCRITICAL_SECTION)0x0;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00000080);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FTaskSyncResult)(*pcVar3)();
        return FVar5;
      }
      TVar6 = FTickFunction::GetCompletionHandle((FTickFunction *)0x0);
      Tasks::Private::FTaskBase::AddPrerequisites
                (*(FTaskBase **)TVar6.Reference,(FTaskBase *)*in_R9);
      if (local_48 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_48 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (local_48 != (undefined8 *)0x0)) {
          (**(code **)*local_48)(local_48,1);
        }
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FTaskSyncResult)(*pcVar3)();
        return FVar5;
      }
      bVar4 = FActiveSyncPoint::DispatchManually((FActiveSyncPoint *)0x0);
      if (!bVar4) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00000080);
        goto LAB_14885c1b1;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FTaskSyncResult)(*pcVar3)();
        return FVar5;
      }
      *(undefined1 *)((longlong)param_1 + 1) = uRam0000000000000074;
      *(undefined1 *)param_1 = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00000080);
    }
    else {
      local_res8 = CONCAT11(local_res8._1_1_,8);
LAB_14885c1b5:
      *(undefined2 *)param_1 = local_res8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    puVar7 = (undefined8 *)*in_R9;
    if (puVar7 == (undefined8 *)0x0) goto LAB_14885c1f5;
    LOCK();
    piVar1 = (int *)(puVar7 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    *(undefined2 *)param_1 = local_res8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    puVar7 = (undefined8 *)*in_R9;
    if (puVar7 == (undefined8 *)0x0) goto LAB_14885c1f5;
    LOCK();
    piVar1 = (int *)(puVar7 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar2 == 1) {
    (**(code **)*puVar7)(puVar7,1);
  }
LAB_14885c1f5:
  return param_1.SyncId._0_2_;
}

// UnregisterSyncPoint @ 14885ec40

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
UE::Tick::FTaskSyncManager::UnregisterSyncPoint(FTaskSyncManager *this,FName param_1,FName param_2)

{
  FName *this_00;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  FRegisteredSyncPointData *pFVar7;
  FName local_res10;
  FName local_res18;
  uint local_res20 [2];
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0x43f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((local_res10 == (FName)0x0) || (local_res18 == (FName)0x0)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x441,"!RegisteredName.IsNone() && !SourceName.IsNone()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((byte)LogTaskSync._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(&local_res18,&local_40);
    ::FName::ToString(&local_res10,&local_50);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTaskSync);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  else {
    puVar6 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&this->RegisteredNameMap,local_res10);
    if (puVar6 == (uint *)0x0) {
      if ((byte)LogTaskSync._0_1_ < 2) {
        return false;
      }
      ::FName::ToString(&local_res18,&local_b0);
      ::FName::ToString(&local_res10,&local_c0);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTaskSync);
      local_40.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        local_40.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
      }
    }
    else {
      uVar5 = *puVar6;
      pFVar7 = TMapBase<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>_>
               ::Find((TMapBase<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>_>
                       *)&this->RegisteredDataMap,uVar5);
      if (pFVar7 != (FRegisteredSyncPointData *)0x0) {
        this_00 = &(pFVar7->RegisteredPoint).SourceName;
        if (*this_00 == local_res18) {
          local_res20[0] = uVar5;
          if (*(int *)&(this->RegisteredDataMap).field_0x8 !=
              *(int *)&(this->RegisteredDataMap).field_0x34) {
            TSet<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>,TDefaultMapHashableKeyFuncs<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData,0>,FDefaultSetAllocator>
                               *)&this->RegisteredDataMap,uVar5,(int *)local_res20);
          }
          FVar2 = local_res10;
          local_c8 = local_res10;
          if (*(int *)&(this->RegisteredNameMap).field_0x8 !=
              *(int *)&(this->RegisteredNameMap).field_0x34) {
            uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                               *)&this->RegisteredNameMap,FVar2.Number + uVar5,&local_c8);
            return true;
          }
        }
        else if (1 < (byte)LogTaskSync._0_1_) {
          ::FName::ToString(this_00,&local_80);
          ::FName::ToString(&local_res18,&local_90);
          ::FName::ToString(&local_res10,&local_a0);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTaskSync);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        return true;
      }
      if ((byte)LogTaskSync._0_1_ < 2) {
        return false;
      }
      ::FName::ToString(&local_res18,&local_60);
      ::FName::ToString(&local_res10,&local_70);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTaskSync);
      local_40.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
        local_40.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      }
    }
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return false;
}

// operator() @ 1505320a0

bool __thiscall
`UE::Tick::FTaskSyncManager::GetOrCreateSyncPoint'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_830330814561516309>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_830330814561516309>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053210f;
    }
  }
  bVar2 = false;
LAB_15053210f:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150532230

bool __thiscall
`UE::Tick::FTaskSyncManager::GetOrCreateSyncPoint'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_830330814561516295>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_830330814561516295>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053229f;
    }
  }
  bVar2 = false;
LAB_15053229f:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

