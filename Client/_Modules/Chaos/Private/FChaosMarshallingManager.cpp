// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// RegisterSimCommand_External @ 143703360

void __thiscall
Chaos::FChaosMarshallingManager::RegisterSimCommand_External
          (FChaosMarshallingManager *this,FSimCallbackCommandObject *param_1)

{
  int *piVar1;
  FPushPhysicsData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPlatformRWLock *SRWLock;
  TArray<Chaos::FSimCallbackCommandObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FSimCallbackCommandObject *local_res10 [3];
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = &this->MarshallingManagerLock;
  }
  local_res10[0] = param_1;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar2 = this->ProducerData;
  pTVar7 = &pFVar2->SimCommands;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(pFVar2->SimCommands).ArrayMax * 8
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->SimCommands).ArrayNum;
  piVar1 = &(pFVar2->SimCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (pFVar2->SimCommands).ArrayNum = iVar6 + 1;
  *(FSimCallbackCommandObject **)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res10[0];
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// FChaosMarshallingManager @ 14388a170

FChaosMarshallingManager * __thiscall
Chaos::FChaosMarshallingManager::FChaosMarshallingManager(FChaosMarshallingManager *this)

{
  atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar2;
  
  this->ExternalTime_External = (atomic<double>)0x0;
  this->ExternalTimestamp_External = (atomic<int>)0x0;
  this->SimTime_External = (atomic<double>)0x0;
  this->InternalStep_External = (atomic<int>)0x0;
  this->ConsumerData = (FPushPhysicsData *)0x0;
  this->ProducerData = (FPushPhysicsData *)0x0;
  (this->ExternalQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalQueue).ArrayNum = 0;
  (this->ExternalQueue).ArrayMax = 0;
  (this->PushDataPool).Tail = (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)0x0;
  (this->PushDataPool).NumElems = (atomic<int>)0x0;
  aVar1 = (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar1 = 0;
  (this->PushDataPool).Tail = aVar1;
  (this->PushDataPool).TailCopy = (FNode *)aVar1;
  (this->PushDataPool).First = (FNode *)aVar1;
  (this->PushDataPool).Head = (FNode *)aVar1;
  LOCK();
  (this->PushDataPool).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->BackingBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackingBuffer).ArrayNum = 0;
  (this->BackingBuffer).ArrayMax = 0;
  (this->HistoryQueue_Internal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistoryQueue_Internal).ArrayNum = 0;
  (this->HistoryQueue_Internal).ArrayMax = 0;
  (this->SimCommandsScheduled_Internal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCommandsScheduled_Internal).ArrayNum = 0;
  (this->SimCommandsScheduled_Internal).ArrayMax = 0;
  this->CurPullData = (FPullPhysicsData *)0x0;
  (this->PullDataQueue).Tail = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)0x0;
  (this->PullDataQueue).NumElems = (atomic<int>)0x0;
  aVar2 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar2 = 0;
  (this->PullDataQueue).Tail = aVar2;
  (this->PullDataQueue).TailCopy = (FNode *)aVar2;
  (this->PullDataQueue).First = (FNode *)aVar2;
  (this->PullDataQueue).Head = (FNode *)aVar2;
  LOCK();
  (this->PullDataQueue).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->PullDataPool).Tail = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)0x0;
  (this->PullDataPool).NumElems = (atomic<int>)0x0;
  aVar2 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar2 = 0;
  (this->PullDataPool).Tail = aVar2;
  (this->PullDataPool).TailCopy = (FNode *)aVar2;
  (this->PullDataPool).First = (FNode *)aVar2;
  (this->PullDataPool).Head = (FNode *)aVar2;
  LOCK();
  (this->PullDataPool).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->BackingPullBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackingPullBuffer).ArrayNum = 0;
  (this->BackingPullBuffer).ArrayMax = 0;
  this->Delay = (atomic<int>)SimDelay;
  this->HistoryLength = 0;
  (this->MarshallingManagerLock).Mutex.Mutex.Ptr = (void *)0x0;
  PrepareExternalQueue_External(this);
  PreparePullData(this);
  return this;
}

// ~FChaosMarshallingManager @ 14388c6d0

void __thiscall
Chaos::FChaosMarshallingManager::~FChaosMarshallingManager(FChaosMarshallingManager *this)

{
  FScriptContainerElement *pFVar1;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar2;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar3;
  atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> aVar4;
  atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> aVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar8;
  atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> aVar9;
  bool bVar10;
  
  SetHistoryLength_Internal(this,0);
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->MarshallingManagerLock);
  if (BVar7 == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->MarshallingManagerLock);
  }
  DestructItems<TUniquePtr<Chaos::FPullPhysicsData,TDefaultDelete<Chaos::FPullPhysicsData>_>,int>
            ((TUniquePtr<Chaos::FPullPhysicsData,TDefaultDelete<Chaos::FPullPhysicsData>_> *)
             (this->BackingPullBuffer).AllocatorInstance.Data,(this->BackingPullBuffer).ArrayNum);
  pFVar1 = (this->BackingPullBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  aVar2 = (this->PullDataPool).Tail;
  aVar8 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)(this->PullDataPool).First
  ;
  do {
    aVar3 = *(atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> *)aVar8;
    FMemory::Free((void *)aVar8);
    bVar10 = aVar8 != aVar2;
    aVar8 = aVar3;
  } while (bVar10);
  while (aVar3 != (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)0x0) {
    aVar2 = *(atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> *)aVar3;
    FMemory::Free((void *)aVar3);
    aVar3 = aVar2;
  }
  aVar2 = (this->PullDataQueue).Tail;
  aVar8 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)
          (this->PullDataQueue).First;
  do {
    aVar3 = *(atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> *)aVar8;
    FMemory::Free((void *)aVar8);
    bVar10 = aVar8 != aVar2;
    aVar8 = aVar3;
  } while (bVar10);
  while (aVar3 != (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)0x0) {
    aVar2 = *(atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> *)aVar3;
    FMemory::Free((void *)aVar3);
    aVar3 = aVar2;
  }
  pFVar1 = (this->SimCommandsScheduled_Internal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HistoryQueue_Internal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<Chaos::FPushPhysicsData,TDefaultDelete<Chaos::FPushPhysicsData>_>,int>
            ((TUniquePtr<Chaos::FPushPhysicsData,TDefaultDelete<Chaos::FPushPhysicsData>_> *)
             (this->BackingBuffer).AllocatorInstance.Data,(this->BackingBuffer).ArrayNum);
  pFVar1 = (this->BackingBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  aVar4 = (this->PushDataPool).Tail;
  aVar9 = (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)(this->PushDataPool).First
  ;
  do {
    aVar5 = *(atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> *)aVar9;
    FMemory::Free((void *)aVar9);
    bVar10 = aVar9 != aVar4;
    aVar9 = aVar5;
  } while (bVar10);
  while (aVar5 != (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)0x0) {
    aVar4 = *(atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> *)aVar5;
    FMemory::Free((void *)aVar5);
    aVar5 = aVar4;
  }
  pFVar1 = (this->ExternalQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// FinalizePullData_Internal @ 1438b0480

void __thiscall
Chaos::FChaosMarshallingManager::FinalizePullData_Internal
          (FChaosMarshallingManager *this,int param_1,double param_2,double param_3)

{
  this->CurPullData->SolverTimestamp = param_1;
  this->CurPullData->ExternalStartTime = param_2;
  this->CurPullData->ExternalEndTime = param_2 + param_3;
  TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::Enqueue<Chaos::FPullPhysicsData_*_&>
            (&this->PullDataQueue,&this->CurPullData);
  PreparePullData(this);
  return;
}

// FreeDataToHistory_Internal @ 1438b6140

void __thiscall
Chaos::FChaosMarshallingManager::FreeDataToHistory_Internal
          (FChaosMarshallingManager *this,FPushPhysicsData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  ISimCallbackObject *pIVar4;
  code *pcVar5;
  FPushPhysicsData *this_00;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FPushPhysicsData *local_res10;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  
  if (param_1 == this->ConsumerData) {
    this->ConsumerData = (FPushPhysicsData *)0x0;
  }
  local_res10 = param_1;
  if (this->HistoryLength == 0) {
    FreeData_Internal(this,param_1);
    return;
  }
  iVar2 = (param_1->SimCallbackObjectsToRemove).ArrayNum;
  pFVar8 = (param_1->SimCallbackObjectsToRemove).AllocatorInstance.Data;
  local_res20 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar1 = local_res20;
    if ((param_1->SimCallbackObjectsToRemove).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pIVar4 = *(ISimCallbackObject **)pFVar8;
    if (pIVar4->bPendingDelete == false) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3823344985994952967>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ChaosMarshallingManager.cpp"
                         ,0x107,"CallbackToRemove->bPendingDelete");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar7 = (this->HistoryQueue_Internal).AllocatorInstance.Data;
    iVar3 = (this->HistoryQueue_Internal).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->HistoryQueue_Internal).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::FPushPhysicsData_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar7 == pFVar1) break;
      FPushPhysicsData::ClearAsyncInputForCallback(*(FPushPhysicsData **)pFVar7,pIVar4);
      pFVar7 = pFVar7 + 8;
    }
    (**(code **)pIVar4->_padding_)(pIVar4);
    pFVar8 = pFVar8 + 8;
  }
  (local_res10->SimCallbackObjectsToRemove).ArrayNum = 0;
  if ((local_res10->SimCallbackObjectsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(local_res10->SimCallbackObjectsToRemove).AllocatorInstance,0,
               &(local_res10->SimCallbackObjectsToRemove).ArrayMax);
  }
  this_00 = local_res10;
  if (bCachePushDataDirtyProxies == false) {
    FPushPhysicsData::ResetDirtyProxiesBuffer(local_res10);
    FDirtySet::Reset(&this_00->DirtyProxiesDataBuffer);
  }
  if (bCachePushDataAsyncInputs == false) {
    FPushPhysicsData::ClearAsyncInputs(this_00);
  }
  if (bCachePushDataSimCommands == false) {
    FPushPhysicsData::ClearSimCommands(this_00);
  }
  (this_00->SimCallbackObjectsToAdd).ArrayNum = 0;
  if ((this_00->SimCallbackObjectsToAdd).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this_00->SimCallbackObjectsToAdd).AllocatorInstance,0,
               &(this_00->SimCallbackObjectsToAdd).ArrayMax);
  }
  TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->HistoryQueue_Internal,&local_res10,0);
  SetHistoryLength_Internal(this,this->HistoryLength);
  return;
}

// FreeData_Internal @ 1438b6370

void __thiscall
Chaos::FChaosMarshallingManager::FreeData_Internal
          (FChaosMarshallingManager *this,FPushPhysicsData *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> aVar5;
  code *pcVar6;
  FPlatformRWLock *SRWLock;
  bool bVar7;
  atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> aVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FPlatformRWLock *local_res10;
  
  local_res10 = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    local_res10 = &this->MarshallingManagerLock;
  }
  if (local_res10 != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)local_res10);
  }
  if (param_1 == this->ConsumerData) {
    this->ConsumerData = (FPushPhysicsData *)0x0;
  }
  FPushPhysicsData::ResetDirtyProxiesBuffer(param_1);
  FPushPhysicsData::ClearAsyncInputs(param_1);
  pFVar9 = (param_1->SimCallbackObjectsToRemove).AllocatorInstance.Data;
  iVar3 = (param_1->SimCallbackObjectsToRemove).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->SimCallbackObjectsToRemove).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar2) break;
    puVar4 = *(undefined8 **)pFVar9;
    if (*(char *)(puVar4 + 1) == '\0') {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3823344985994952866>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ChaosMarshallingManager.cpp"
                         ,0xa2,"CallbackToRemove->bPendingDelete");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)*puVar4)(puVar4);
    pFVar9 = pFVar9 + 8;
  }
  FPushPhysicsData::ClearSimCommands(param_1);
  FDirtySet::Reset(&param_1->DirtyProxiesDataBuffer);
  SRWLock = local_res10;
  (param_1->SimCallbackObjectsToAdd).ArrayNum = 0;
  if ((param_1->SimCallbackObjectsToAdd).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(param_1->SimCallbackObjectsToAdd).AllocatorInstance,0,
               &(param_1->SimCallbackObjectsToAdd).ArrayMax);
  }
  (param_1->SimCallbackObjectsToRemove).ArrayNum = 0;
  if ((param_1->SimCallbackObjectsToRemove).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(param_1->SimCallbackObjectsToRemove).AllocatorInstance,0,
               &(param_1->SimCallbackObjectsToRemove).ArrayMax);
  }
  aVar8 = (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)(this->PushDataPool).First
  ;
  if (aVar8 == (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)
               (this->PushDataPool).TailCopy) {
    aVar5 = (this->PushDataPool).Tail;
    aVar8 = (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)
            (this->PushDataPool).First;
    (this->PushDataPool).TailCopy = (FNode *)aVar5;
    if (aVar8 == aVar5) {
      aVar8 = (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)
              FMemory::Malloc(0x10,8);
      *(undefined8 *)aVar8 = 0;
    }
    else {
      (this->PushDataPool).First = *(FNode **)aVar8;
      *(undefined8 *)aVar8 = 0;
    }
  }
  else {
    (this->PushDataPool).First = *(FNode **)aVar8;
    *(undefined8 *)aVar8 = 0;
  }
  *(FPushPhysicsData **)
   ((TTypeCompatibleBytes<Chaos::FPushPhysicsData_*> *)((longlong)aVar8 + 8))->Pad = param_1;
  ((this->PushDataPool).Head)->Next = aVar8;
  (this->PushDataPool).Head = (FNode *)aVar8;
  LOCK();
  paVar1 = &(this->PushDataPool).NumElems;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// FreePullData_External @ 1438b6550

void __thiscall
Chaos::FChaosMarshallingManager::FreePullData_External
          (FChaosMarshallingManager *this,FPullPhysicsData *param_1)

{
  atomic<int> *paVar1;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar2;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar3;
  
  FPullPhysicsData::Reset(param_1);
  aVar3 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)(this->PullDataPool).First
  ;
  if (aVar3 == (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)
               (this->PullDataPool).TailCopy) {
    aVar2 = (this->PullDataPool).Tail;
    aVar3 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)
            (this->PullDataPool).First;
    (this->PullDataPool).TailCopy = (FNode *)aVar2;
    if (aVar3 == aVar2) {
      aVar3 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)
              FMemory::Malloc(0x10,8);
      *(undefined8 *)aVar3 = 0;
      goto LAB_1438b65c0;
    }
  }
  (this->PullDataPool).First = *(FNode **)aVar3;
  *(undefined8 *)aVar3 = 0;
LAB_1438b65c0:
  *(FPullPhysicsData **)
   ((TTypeCompatibleBytes<Chaos::FPullPhysicsData_*> *)((longlong)aVar3 + 8))->Pad = param_1;
  ((this->PullDataPool).Head)->Next = aVar3;
  (this->PullDataPool).Head = (FNode *)aVar3;
  LOCK();
  paVar1 = &(this->PullDataPool).NumElems;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  return;
}

// PrepareExternalQueue_External @ 1438c6320

void __thiscall
Chaos::FChaosMarshallingManager::PrepareExternalQueue_External(FChaosMarshallingManager *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPushPhysicsData *pFVar8;
  uint uVar9;
  uint uVar10;
  FPushPhysicsData *local_18 [2];
  
  aVar3 = *(atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*> *)
           (this->PushDataPool).Tail;
  if (aVar3 == (atomic<TSpscQueue<Chaos::FPushPhysicsData_*,FMemory>::FNode_*>)0x0) {
    pFVar8 = ::operator_new(0x2e0);
    local_18[0] = (FPushPhysicsData *)0x0;
    if (pFVar8 != (FPushPhysicsData *)0x0) {
      memset(pFVar8,0,0x2e0);
      local_18[0] = FPushPhysicsData::FPushPhysicsData(pFVar8);
    }
    pFVar4 = (this->BackingBuffer).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->BackingBuffer).ArrayMax * 8
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->BackingBuffer).ArrayNum;
    piVar2 = &(this->BackingBuffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->BackingBuffer).AllocatorInstance,piVar2);
    }
    (this->BackingBuffer).ArrayNum = iVar7 + 1;
    *(FPushPhysicsData **)((this->BackingBuffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_18[0];
    iVar7 = (this->BackingBuffer).ArrayNum;
    local_18[0] = (FPushPhysicsData *)0x0;
    uVar9 = iVar7 - 1;
    uVar10 = 0;
    if ((int)uVar9 < iVar7) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar8 = *(FPushPhysicsData **)
              ((this->BackingBuffer).AllocatorInstance.Data +
              (longlong)(this->BackingBuffer).ArrayNum * 8 + -8);
  }
  else {
    pFVar8 = *(FPushPhysicsData **)((longlong)aVar3 + 8);
    (this->PushDataPool).Tail = aVar3;
    LOCK();
    paVar1 = &(this->PushDataPool).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  this->ProducerData = pFVar8;
  this->ProducerData->StartTime = (double)this->ExternalTime_External;
  return;
}

// PreparePullData @ 1438c64d0

void __thiscall Chaos::FChaosMarshallingManager::PreparePullData(FChaosMarshallingManager *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<TUniquePtr<Chaos::FPullPhysicsData,TDefaultDelete<Chaos::FPullPhysicsData>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar4;
  FPullPhysicsData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *local_18 [2];
  
  aVar4 = *(atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> *)
           (this->PullDataPool).Tail;
  if (aVar4 != (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)0x0) {
    pFVar5 = *(FPullPhysicsData **)((longlong)aVar4 + 8);
    (this->PullDataPool).Tail = aVar4;
    LOCK();
    paVar2 = &(this->PullDataPool).NumElems;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    this->CurPullData = pFVar5;
    return;
  }
  pTVar3 = &this->BackingPullBuffer;
  local_18[0] = ::operator_new(0xb8);
  if (local_18[0] == (undefined8 *)0x0) {
    local_18[0] = (undefined8 *)0x0;
  }
  else {
    local_18[0][4] = 0;
    local_18[0][5] = 0;
    local_18[0][9] = 0;
    local_18[0][0xb] = 0;
    local_18[0][0x14] = 0;
    local_18[0][0x15] = 0;
    local_18[0][0x16] = 0;
    *local_18[0] = 0;
    local_18[0][1] = 0;
    local_18[0][2] = 0;
    local_18[0][3] = 0;
    local_18[0][6] = 0;
    *(undefined4 *)(local_18[0] + 7) = 0;
    *(undefined4 *)((longlong)local_18[0] + 0x3c) = 0x80;
    *(undefined4 *)(local_18[0] + 8) = 0xffffffff;
    *(undefined4 *)((longlong)local_18[0] + 0x44) = 0;
    local_18[0][10] = 0;
    local_18[0][0xc] = 0;
    local_18[0][0xd] = 0;
    local_18[0][0xe] = 0;
    local_18[0][0xf] = 0;
    local_18[0][0x10] = 0;
    local_18[0][0x11] = 0;
    local_18[0][0x12] = 0;
    local_18[0][0x13] = 0;
  }
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar6 + (longlong)(this->BackingPullBuffer).ArrayMax * 8)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = (this->BackingPullBuffer).ArrayNum;
  piVar1 = &(this->BackingPullBuffer).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  (this->BackingPullBuffer).ArrayNum = uVar9 + 1;
  *(undefined8 **)(pFVar6 + (longlong)(int)uVar9 * 8) = local_18[0];
  local_18[0] = (undefined8 *)0x0;
  uVar10 = 0;
  if ((int)uVar9 < (this->BackingPullBuffer).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this->CurPullData =
       *(FPullPhysicsData **)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar9 * 8);
  return;
}

// SetHistoryLength_Internal @ 1438d25b0

void __thiscall
Chaos::FChaosMarshallingManager::SetHistoryLength_Internal
          (FChaosMarshallingManager *this,int param_1)

{
  TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  if (param_1 < 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3823344985994952986>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ChaosMarshallingManager.cpp"
                       ,0x11a,"InHistoryLength >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1 = 0;
  }
  piVar2 = &(this->HistoryQueue_Internal).ArrayNum;
  this->HistoryLength = param_1;
  iVar7 = *piVar2;
  if (param_1 < iVar7) {
    uVar8 = iVar7 - 1;
    pTVar1 = &this->HistoryQueue_Internal;
    if (param_1 <= (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 8;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->HistoryQueue_Internal).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FreeData_Internal(this,*(FPushPhysicsData **)((pTVar1->AllocatorInstance).Data + lVar9));
        uVar8 = uVar8 - 1;
        lVar9 = lVar9 + -8;
      } while (this->HistoryLength <= (int)uVar8);
    }
    iVar7 = (this->HistoryQueue_Internal).ArrayNum;
    if (iVar7 < param_1) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,param_1 - iVar7,&pTVar1->AllocatorInstance,piVar2,
                         &(this->HistoryQueue_Internal).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,0,
             (longlong)(param_1 - iVar7) << 3);
    }
    else if (param_1 < iVar7) {
      uVar8 = iVar7 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (ulonglong)(uint)param_1 * 8;
        iVar7 = ((this->HistoryQueue_Internal).ArrayNum - uVar8) - param_1;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
        }
        piVar2 = &(this->HistoryQueue_Internal).ArrayNum;
        *piVar2 = *piVar2 - uVar8;
      }
    }
  }
  return;
}

// StealHistory_Internal @ 1438d6710

TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FChaosMarshallingManager::StealHistory_Internal
          (FChaosMarshallingManager *this,
          TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  if (((this->HistoryQueue_Internal).ArrayNum < param_1) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3823344985994953006>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ChaosMarshallingManager.cpp"
                         ,0x12e,"NumFrames <= HistoryQueue_Internal.Num()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar10 = (this->HistoryQueue_Internal).ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  if (param_1 < (int)uVar10) {
    uVar10 = param_1;
  }
  *piVar1 = 0;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  uVar9 = 0;
  if (0 < (int)uVar10) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->HistoryQueue_Internal).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar2 = (this->HistoryQueue_Internal).AllocatorInstance.Data + lVar11 * 8;
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar2;
    } while (lVar11 < (int)uVar10);
  }
  uVar9 = 0;
  if ((int)uVar10 <= (this->HistoryQueue_Internal).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  if (uVar10 != 0) {
    pFVar2 = (this->HistoryQueue_Internal).AllocatorInstance.Data;
    iVar7 = (this->HistoryQueue_Internal).ArrayNum - uVar10;
    if (iVar7 != 0) {
      memmove(pFVar2,pFVar2 + (longlong)(int)uVar10 * 8,(longlong)iVar7 << 3);
    }
    piVar1 = &(this->HistoryQueue_Internal).ArrayNum;
    *piVar1 = *piVar1 - uVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->HistoryQueue_Internal).AllocatorInstance,
               (this->HistoryQueue_Internal).ArrayNum,&(this->HistoryQueue_Internal).ArrayMax);
  }
  return __return_storage_ptr__;
}

// StepInternalTime_External @ 1438d6990

FPushPhysicsData * __thiscall
Chaos::FChaosMarshallingManager::StepInternalTime_External(FChaosMarshallingManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPushPhysicsData *pFVar4;
  FPushPhysicsData *SRWLock;
  
  pFVar4 = (FPushPhysicsData *)0x0;
  SRWLock = pFVar4;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = (FPushPhysicsData *)&this->MarshallingManagerLock;
  }
  if (SRWLock != (FPushPhysicsData *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (this->Delay == (atomic<int>)0x0) {
    iVar1 = (this->ExternalQueue).ArrayNum;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FPushPhysicsData *)(*pcVar2)();
          return pFVar4;
        }
      }
      iVar1 = (this->ExternalQueue).ArrayNum;
      pFVar4 = *(FPushPhysicsData **)
                ((this->ExternalQueue).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
      (this->ExternalQueue).ArrayNum = iVar1 + -1;
    }
  }
  else {
    LOCK();
    this->Delay = (atomic<int>)((int)this->Delay + -1);
    UNLOCK();
  }
  if (SRWLock != (FPushPhysicsData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return pFVar4;
}

// Step_External @ 1438d6a50

void __thiscall
Chaos::FChaosMarshallingManager::Step_External
          (FChaosMarshallingManager *this,double param_1,int param_2,bool param_3)

{
  FPushPhysicsData **ppFVar1;
  int *piVar2;
  int *piVar3;
  atomic<int> *paVar4;
  atomic<int> aVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FPushPhysicsData *this_00;
  code *pcVar8;
  FPushPhysicsData *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<Chaos::FPushPhysicsData_*,TSizedDefaultAllocator<32>_> *pTVar13;
  FPushPhysicsData *pFVar14;
  longlong lVar15;
  FPushPhysicsData *pFVar16;
  uint uVar17;
  TArray<Chaos::FSimCallbackInputAndObject,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  int local_res8;
  FPushPhysicsData *local_68;
  <lambda_1> local_58 [2];
  
  if ((param_2 < 1) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3823344985994952779>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ChaosMarshallingManager.cpp"
                          ,0x4b,"NumSteps > 0"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar14 = (FPushPhysicsData *)0x0;
  local_68 = (FPushPhysicsData *)0x0;
  local_res8 = 0;
  if (0 < param_2) {
    ppFVar1 = &this->ProducerData;
    piVar2 = &(this->ExternalQueue).ArrayMax;
    do {
      uVar17 = ((*ppFVar1)->SimCallbackInputs).ArrayNum - 1;
      pFVar16 = pFVar14;
      if (-1 < (int)uVar17) {
        lVar15 = (longlong)(int)uVar17 << 4;
        do {
          pFVar14 = *ppFVar1;
          uVar19 = ~uVar17 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar17 < (pFVar14->SimCallbackInputs).ArrayNum) {
            uVar11 = uVar19;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pFVar14->SimCallbackInputs).AllocatorInstance.Data;
          *(undefined8 *)(*(longlong *)(pFVar7 + lVar15) + 0x10) = 0;
          *(int *)(*(longlong *)(pFVar7 + lVar15 + 8) + 8) = param_2;
          if (*(char *)(*(longlong *)(pFVar7 + lVar15) + 9) != '\0') {
            pFVar14 = *ppFVar1;
            uVar11 = 0;
            if ((int)uVar17 < (pFVar14->SimCallbackInputs).ArrayNum) {
              uVar11 = uVar19;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar6 = (pFVar14->SimCallbackInputs).ArrayNum;
            pFVar7 = (pFVar14->SimCallbackInputs).AllocatorInstance.Data;
            iVar12 = iVar6 + ~uVar17;
            if (1 < iVar12) {
              iVar12 = 1;
            }
            if (iVar12 != 0) {
              memmove(pFVar7 + lVar15,pFVar7 + (longlong)(iVar6 - iVar12) * 0x10,
                      (longlong)iVar12 << 4);
            }
            piVar3 = &(pFVar14->SimCallbackInputs).ArrayNum;
            *piVar3 = *piVar3 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(pFVar14->SimCallbackInputs).AllocatorInstance,
                       (pFVar14->SimCallbackInputs).ArrayNum,&(pFVar14->SimCallbackInputs).ArrayMax)
            ;
          }
          lVar15 = lVar15 + -0x10;
          uVar17 = uVar17 - 1;
          pFVar16 = local_68;
        } while (-1 < (int)uVar17);
      }
      pTVar13 = &this->ExternalQueue;
      (*ppFVar1)->ExternalDt = param_1;
      (*ppFVar1)->ExternalTimestamp = (int)this->ExternalTimestamp_External;
      LOCK();
      paVar4 = &this->InternalStep_External;
      aVar5 = *paVar4;
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
      (*ppFVar1)->InternalStep = (int)aVar5;
      (*ppFVar1)->IntervalStep = local_res8;
      (*ppFVar1)->IntervalNumSteps = param_2;
      (*ppFVar1)->bSolverSubstepped = param_3;
      pFVar7 = (pTVar13->AllocatorInstance).Data;
      if (((pFVar7 <= ppFVar1) && (ppFVar1 < pFVar7 + (longlong)*piVar2 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (this->ExternalQueue).ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar13->AllocatorInstance,piVar2);
      }
      pFVar7 = (pTVar13->AllocatorInstance).Data;
      (this->ExternalQueue).ArrayNum = iVar12 + 1;
      memmove(pFVar7 + 8,pFVar7,(longlong)iVar12 << 3);
      *(FPushPhysicsData **)(pTVar13->AllocatorInstance).Data = *ppFVar1;
      this_00 = *ppFVar1;
      pFVar14 = this_00;
      pFVar9 = this_00;
      if (local_res8 != 0) {
        FDirtyPropertiesManager::PrepareBuckets
                  (&this_00->DirtyPropertiesManager,
                   &(pFVar16->DirtyProxiesDataBuffer).DirtyProxyBucketInfo);
        local_58[0].__this = this_00;
        local_58[0].FirstManager = &pFVar16->DirtyPropertiesManager;
        FDirtySet::ForEachProxy<_Chaos::FPushPhysicsData::CopySubstepData_::__l2::<lambda_1>_>
                  (&pFVar16->DirtyProxiesDataBuffer,local_58);
        pTVar18 = &this_00->SimCallbackInputs;
        pFVar14 = pFVar16;
        pFVar9 = local_68;
        if (pTVar18 != &pFVar16->SimCallbackInputs) {
          iVar12 = (pFVar16->SimCallbackInputs).ArrayNum;
          piVar3 = &(this_00->SimCallbackInputs).ArrayMax;
          pFVar7 = (pFVar16->SimCallbackInputs).AllocatorInstance.Data;
          (this_00->SimCallbackInputs).ArrayNum = iVar12;
          pFVar14 = local_68;
          if ((iVar12 == 0) && (*piVar3 == 0)) {
            *piVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar12,*piVar3,&pTVar18->AllocatorInstance,iVar12,piVar3);
            if (iVar12 != 0) {
              memcpy((pTVar18->AllocatorInstance).Data,pFVar7,(longlong)iVar12 << 4);
            }
          }
        }
      }
      local_68 = pFVar9;
      LOCK();
      this->ExternalTime_External = (atomic<double>)((double)this->ExternalTime_External + param_1);
      UNLOCK();
      PrepareExternalQueue_External(this);
      local_res8 = local_res8 + 1;
    } while (local_res8 < param_2);
  }
  LOCK();
  this->ExternalTimestamp_External = (atomic<int>)((int)this->ExternalTimestamp_External + 1);
  UNLOCK();
  return;
}

