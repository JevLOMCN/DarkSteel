// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 14

// StaticStruct @ 14d4daf50

UScriptStruct * __cdecl FStateTreeExecutionState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionState,(UObject *)pUVar1,
                         L"StateTreeExecutionState");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeExecutionState.OuterSingleton;
}

// FStateTreeExecutionState @ 14d4eaec0

FStateTreeExecutionState * __thiscall
FStateTreeExecutionState::FStateTreeExecutionState
          (FStateTreeExecutionState *this,FStateTreeExecutionState *param_1)

{
  int *piVar1;
  TArray<FStateTreeTransitionDelayedState,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FStateTreeExecutionState::FScheduledTickRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FStateTreeExecutionFrame *pFVar5;
  FStateTreeTransitionDelayedState *pFVar6;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->ActiveFrames).ArrayMax;
  (this->ActiveFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ActiveFrames).ArrayNum;
  pFVar5 = (FStateTreeExecutionFrame *)(param_1->ActiveFrames).AllocatorInstance.Data;
  (this->ActiveFrames).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    ConstructItems<FStateTreeExecutionFrame,FStateTreeExecutionFrame,int>
              ((this->ActiveFrames).AllocatorInstance.Data,pFVar5,iVar4);
  }
  pTVar2 = &this->DelayedTransitions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DelayedTransitions).ArrayMax;
  iVar4 = (param_1->DelayedTransitions).ArrayNum;
  pFVar6 = (FStateTreeTransitionDelayedState *)(param_1->DelayedTransitions).AllocatorInstance.Data;
  (this->DelayedTransitions).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FStateTreeTransitionDelayedState,FStateTreeTransitionDelayedState,int>
              ((pTVar2->AllocatorInstance).Data,pFVar6,iVar4);
  }
  this->RandomStream = param_1->RandomStream;
  FStateTreeDelegateActiveListeners::FStateTreeDelegateActiveListeners
            (&this->DelegateActiveListeners,&param_1->DelegateActiveListeners);
  pTVar3 = &this->ScheduledTickRequests;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ScheduledTickRequests).ArrayMax;
  iVar4 = (param_1->ScheduledTickRequests).ArrayNum;
  _Src = (param_1->ScheduledTickRequests).AllocatorInstance.Data;
  (this->ScheduledTickRequests).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
  }
  this->CachedScheduledTickRequest = param_1->CachedScheduledTickRequest;
  this->InstanceDebugId = param_1->InstanceDebugId;
  (this->ExecutionExtension).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0
  ;
  (this->ExecutionExtension).InstancedStruct.StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (&(this->ExecutionExtension).InstancedStruct,
             (param_1->ExecutionExtension).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
             (param_1->ExecutionExtension).InstancedStruct.StructMemory);
  this->LastTickStatus = param_1->LastTickStatus;
  this->TreeRunStatus = param_1->TreeRunStatus;
  this->RequestedStop = param_1->RequestedStop;
  this->CurrentPhase = param_1->CurrentPhase;
  this->StateChangeCount = param_1->StateChangeCount;
  this->bHasPendingCompletedState = param_1->bHasPendingCompletedState;
  return this;
}

// FStateTreeExecutionState @ 14d4eb060

FStateTreeExecutionState * __thiscall
FStateTreeExecutionState::FStateTreeExecutionState(FStateTreeExecutionState *this)

{
  undefined1 *puVar1;
  
  (this->InstanceDebugId).Id = 0xffffffff;
  (this->InstanceDebugId).SerialNumber = 0xffffffff;
  (this->ActiveFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveFrames).ArrayNum = 0;
  (this->ActiveFrames).ArrayMax = 0;
  (this->DelayedTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedTransitions).ArrayNum = 0;
  (this->DelayedTransitions).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  (this->DelegateActiveListeners).Listeners.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelegateActiveListeners).Listeners.ArrayNum = 0;
  (this->DelegateActiveListeners).Listeners.ArrayMax = 0;
  puVar1 = &(this->DelegateActiveListeners).field_0x10;
  (this->DelegateActiveListeners).BroadcastingLockCount = 0;
  (this->DelegateActiveListeners).bContainsUnboundListeners = 0;
  (this->ScheduledTickRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTickRequests).ArrayNum = 0;
  (this->ScheduledTickRequests).ArrayMax = 0;
  (this->CachedScheduledTickRequest).NextDeltaTime = 0.0;
  (this->CachedScheduledTickRequest).Reason = None;
  FInstancedStruct::FInstancedStruct(&(this->ExecutionExtension).InstancedStruct);
  this->LastTickStatus = Failed;
  this->TreeRunStatus = Unset;
  this->RequestedStop = Unset;
  this->CurrentPhase = Unset;
  this->StateChangeCount = 0;
  this->bHasPendingCompletedState = false;
  return this;
}

// ~FStateTreeExecutionState @ 14d4ec7b0

void __thiscall FStateTreeExecutionState::~FStateTreeExecutionState(FStateTreeExecutionState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  FInstancedStruct::Reset(&(this->ExecutionExtension).InstancedStruct);
  pFVar1 = (this->ScheduledTickRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->DelegateActiveListeners).BroadcastingLockCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,300,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<FStateTreeDelegateActiveListeners::FActiveListener,int>
            ((FActiveListener *)(this->DelegateActiveListeners).Listeners.AllocatorInstance.Data,
             (this->DelegateActiveListeners).Listeners.ArrayNum);
  pFVar1 = (this->DelegateActiveListeners).Listeners.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStateTreeTransitionDelayedState,int>
            ((FStateTreeTransitionDelayedState *)(this->DelayedTransitions).AllocatorInstance.Data,
             (this->DelayedTransitions).ArrayNum);
  pFVar1 = (this->DelayedTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)(this->ActiveFrames).AllocatorInstance.Data,
             (this->ActiveFrames).ArrayNum);
  pFVar1 = (this->ActiveFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14d4ecee0

FStateTreeExecutionState * __thiscall
FStateTreeExecutionState::operator=
          (FStateTreeExecutionState *this,FStateTreeExecutionState *param_1)

{
  TArray<FStateTreeTransitionDelayedState,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FStateTreeTransitionDelayedState,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FStateTreeExecutionState::FScheduledTickRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStateTreeExecutionState::FScheduledTickRequest,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    DestructItems<FStateTreeExecutionFrame,int>
              ((FStateTreeExecutionFrame *)(this->ActiveFrames).AllocatorInstance.Data,
               (this->ActiveFrames).ArrayNum);
    pFVar5 = (this->ActiveFrames).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->ActiveFrames).AllocatorInstance.Data = (param_1->ActiveFrames).AllocatorInstance.Data;
    (param_1->ActiveFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ActiveFrames).ArrayNum = (param_1->ActiveFrames).ArrayNum;
    (this->ActiveFrames).ArrayMax = (param_1->ActiveFrames).ArrayMax;
    (param_1->ActiveFrames).ArrayNum = 0;
    (param_1->ActiveFrames).ArrayMax = 0;
  }
  pTVar1 = &param_1->DelayedTransitions;
  pTVar2 = &this->DelayedTransitions;
  if (pTVar2 != pTVar1) {
    DestructItems<FStateTreeTransitionDelayedState,int>
              ((FStateTreeTransitionDelayedState *)(pTVar2->AllocatorInstance).Data,
               (this->DelayedTransitions).ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DelayedTransitions).ArrayNum = (param_1->DelayedTransitions).ArrayNum;
    (this->DelayedTransitions).ArrayMax = (param_1->DelayedTransitions).ArrayMax;
    (param_1->DelayedTransitions).ArrayNum = 0;
    (param_1->DelayedTransitions).ArrayMax = 0;
  }
  this->RandomStream = param_1->RandomStream;
  FStateTreeDelegateActiveListeners::operator=
            (&this->DelegateActiveListeners,&param_1->DelegateActiveListeners);
  pTVar3 = &param_1->ScheduledTickRequests;
  pTVar4 = &this->ScheduledTickRequests;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ScheduledTickRequests).ArrayNum = (param_1->ScheduledTickRequests).ArrayNum;
    (this->ScheduledTickRequests).ArrayMax = (param_1->ScheduledTickRequests).ArrayMax;
    (param_1->ScheduledTickRequests).ArrayNum = 0;
    (param_1->ScheduledTickRequests).ArrayMax = 0;
  }
  this->CachedScheduledTickRequest = param_1->CachedScheduledTickRequest;
  this->InstanceDebugId = param_1->InstanceDebugId;
  FInstancedStruct::operator=
            (&(this->ExecutionExtension).InstancedStruct,
             &(param_1->ExecutionExtension).InstancedStruct);
  this->LastTickStatus = param_1->LastTickStatus;
  this->TreeRunStatus = param_1->TreeRunStatus;
  this->RequestedStop = param_1->RequestedStop;
  this->CurrentPhase = param_1->CurrentPhase;
  this->StateChangeCount = param_1->StateChangeCount;
  this->bHasPendingCompletedState = param_1->bHasPendingCompletedState;
  return this;
}

// operator= @ 14d4ed030

FStateTreeExecutionState * __thiscall
FStateTreeExecutionState::operator=
          (FStateTreeExecutionState *this,FStateTreeExecutionState *param_1)

{
  TArray<FStateTreeTransitionDelayedState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FStateTreeExecutionState::FScheduledTickRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FStateTreeTransitionDelayedState *pFVar5;
  FScriptContainerElement *_Src;
  
  TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>::operator=
            (&this->ActiveFrames,&param_1->ActiveFrames);
  pTVar1 = &this->DelayedTransitions;
  if (pTVar1 != &param_1->DelayedTransitions) {
    DestructItems<FStateTreeTransitionDelayedState,int>
              ((FStateTreeTransitionDelayedState *)(pTVar1->AllocatorInstance).Data,
               (this->DelayedTransitions).ArrayNum);
    iVar4 = (param_1->DelayedTransitions).ArrayNum;
    piVar2 = &(this->DelayedTransitions).ArrayMax;
    pFVar5 = (FStateTreeTransitionDelayedState *)
             (param_1->DelayedTransitions).AllocatorInstance.Data;
    (this->DelayedTransitions).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FStateTreeTransitionDelayedState,FStateTreeTransitionDelayedState,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  this->RandomStream = param_1->RandomStream;
  FStateTreeDelegateActiveListeners::operator=
            (&this->DelegateActiveListeners,&param_1->DelegateActiveListeners);
  pTVar3 = &this->ScheduledTickRequests;
  if (pTVar3 != &param_1->ScheduledTickRequests) {
    iVar4 = (param_1->ScheduledTickRequests).ArrayNum;
    piVar2 = &(this->ScheduledTickRequests).ArrayMax;
    _Src = (param_1->ScheduledTickRequests).AllocatorInstance.Data;
    (this->ScheduledTickRequests).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
      }
    }
  }
  this->CachedScheduledTickRequest = param_1->CachedScheduledTickRequest;
  this->InstanceDebugId = param_1->InstanceDebugId;
  if (&this->ExecutionExtension != &param_1->ExecutionExtension) {
    FInstancedStruct::InitializeAs
              (&(this->ExecutionExtension).InstancedStruct,
               (param_1->ExecutionExtension).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
               (param_1->ExecutionExtension).InstancedStruct.StructMemory);
  }
  this->LastTickStatus = param_1->LastTickStatus;
  this->TreeRunStatus = param_1->TreeRunStatus;
  this->RequestedStop = param_1->RequestedStop;
  this->CurrentPhase = param_1->CurrentPhase;
  this->StateChangeCount = param_1->StateChangeCount;
  this->bHasPendingCompletedState = param_1->bHasPendingCompletedState;
  return this;
}

// AddScheduledTickRequest @ 14d4ef170

FScheduledTickHandle __thiscall
FStateTreeExecutionState::AddScheduledTickRequest
          (FStateTreeExecutionState *this,FStateTreeScheduledTick param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<unsigned_int> aVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_R8;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  LOCK();
  UNLOCK();
  local_18 = (int)::Value + 1;
  aVar4 = (atomic<unsigned_int>)((int)::Value + 1);
  if (local_18 == 0) {
    LOCK();
    UNLOCK();
    local_18 = (int)::Value + 2;
    aVar4 = (atomic<unsigned_int>)((int)::Value + 2);
  }
  ::Value = aVar4;
  *(int *)param_1 = local_18;
  pFVar2 = (this->ScheduledTickRequests).AllocatorInstance.Data;
  uStack_14 = (undefined4)in_R8;
  uStack_10 = (undefined4)((ulonglong)in_R8 >> 0x20);
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2 + (longlong)(this->ScheduledTickRequests).ArrayMax * 0xc)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (FScheduledTickHandle)uVar6;
    }
  }
  iVar7 = (this->ScheduledTickRequests).ArrayNum;
  piVar1 = &(this->ScheduledTickRequests).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->ScheduledTickRequests).AllocatorInstance,piVar1);
  }
  (this->ScheduledTickRequests).ArrayNum = iVar7 + 1;
  pFVar2 = (this->ScheduledTickRequests).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(uStack_14,local_18);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = uStack_10;
  CacheScheduledTickRequest(this);
  return (uint)param_1.NextDeltaTime;
}

// CacheScheduledTickRequest @ 14d4f13f0

void __thiscall FStateTreeExecutionState::CacheScheduledTickRequest(FStateTreeExecutionState *this)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float local_res8 [2];
  FStateTreeScheduledTick local_res10;
  
  iVar3 = (this->ScheduledTickRequests).ArrayNum;
  pFVar8 = (this->ScheduledTickRequests).AllocatorInstance.Data;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (iVar3 == 0) {
      (this->CachedScheduledTickRequest).NextDeltaTime = 0.0;
      (this->CachedScheduledTickRequest).Reason = None;
      *(undefined3 *)&(this->CachedScheduledTickRequest).field_0x5 = 0;
      return;
    }
    if (iVar3 == 1) {
      this->CachedScheduledTickRequest = *(FStateTreeScheduledTick *)(pFVar8 + 4);
      return;
    }
  }
  pFVar1 = pFVar8 + (longlong)iVar3 * 0xc;
  for (pFVar7 = pFVar8; pFVar5 = pFVar8, pFVar7 != pFVar1; pFVar7 = pFVar7 + 0xc) {
    if (*(float *)(pFVar7 + 4) == 0.0) {
      local_res10 = *(FStateTreeScheduledTick *)(pFVar7 + 4);
      goto LAB_14d4f1561;
    }
  }
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 0xc) {
    if (__real_38d1b717 == *(float *)(pFVar5 + 4)) {
      local_res10 = *(FStateTreeScheduledTick *)(pFVar5 + 4);
      goto LAB_14d4f1561;
    }
  }
  bVar6 = false;
  if (pFVar8 == pFVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    local_res10.NextDeltaTime = local_res8[0];
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    do {
      fVar2 = *(float *)(pFVar8 + 4);
      local_res10.NextDeltaTime = fVar2;
      if ((bVar6) && (local_res10.NextDeltaTime = local_res8[0], fVar2 <= local_res8[0])) {
        local_res10.NextDeltaTime = fVar2;
      }
      pFVar8 = pFVar8 + 0xc;
      bVar6 = true;
      local_res8[0] = local_res10.NextDeltaTime;
    } while (pFVar8 != pFVar1);
  }
  if (0.0 <= local_res10.NextDeltaTime) {
    if (0.0 < local_res10.NextDeltaTime) {
      goto LAB_14d4f1557;
    }
  }
  else {
    `FStateTreeScheduledTick::MakeCustomTickRate'::__l2::<lambda_1>::operator()(local_res8);
  }
  local_res10 = (FStateTreeScheduledTick)((ulonglong)(uint)local_res10._4_4_ << 0x20);
LAB_14d4f1557:
  local_res10.Reason = 1;
LAB_14d4f1561:
  this->CachedScheduledTickRequest = local_res10;
  return;
}

// FindActiveFrame @ 14d4f8dd0

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionState::FindActiveFrame(FStateTreeExecutionState *this,FActiveFrameID param_1)

{
  FStateTreeExecutionFrame *pFVar1;
  FStateTreeExecutionFrame *pFVar2;
  
  pFVar1 = (FStateTreeExecutionFrame *)(this->ActiveFrames).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->ActiveFrames).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FStateTreeExecutionFrame *)0x0;
    }
    if ((pFVar1->FrameID).Value == param_1.Value) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindActiveFrame @ 14d4f8e00

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionState::FindActiveFrame(FStateTreeExecutionState *this,FActiveFrameID param_1)

{
  FStateTreeExecutionFrame *pFVar1;
  FStateTreeExecutionFrame *pFVar2;
  
  pFVar1 = (FStateTreeExecutionFrame *)(this->ActiveFrames).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->ActiveFrames).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FStateTreeExecutionFrame *)0x0;
    }
    if ((pFVar1->FrameID).Value == param_1.Value) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// GetActiveStatePath @ 14d4fbb10

FActiveStatePath * __thiscall
FStateTreeExecutionState::GetActiveStatePath
          (FStateTreeExecutionState *this,FActiveStatePath *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TNotNull<UStateTree_const_*> TVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FActiveStatePath *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  ulong64 uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  FActiveStatePath *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> local_48;
  
  iVar3 = (this->ActiveFrames).ArrayNum;
  uVar15 = 0;
  pFVar11 = (this->ActiveFrames).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x70;
  local_res10 = __return_storage_ptr__;
  while( true ) {
    if ((this->ActiveFrames).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FStateTreeExecutionFrame_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    iVar14 = (int)uVar15;
    if (pFVar11 == pFVar12) break;
    uVar15 = (ulong64)(iVar14 + (uint)(byte)pFVar11[0x3c]);
    pFVar11 = pFVar11 + 0x70;
  }
  if (iVar14 != 0) {
    if (((this->ActiveFrames).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FActiveStatePath *)(*pcVar7)();
      return pFVar10;
    }
    if (*(longlong *)(this->ActiveFrames).AllocatorInstance.Data != 0) {
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
      if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar15);
      }
      if (0 < iVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar14,&local_58,0,(int *)((longlong)&local_50 + 4));
      }
      iVar3 = (this->ActiveFrames).ArrayNum;
      pFVar11 = (this->ActiveFrames).AllocatorInstance.Data;
      pFVar12 = pFVar11 + (longlong)iVar3 * 0x70;
      local_48.ArrayNum = (int)local_50;
      while( true ) {
        iVar14 = 0;
        if ((this->ActiveFrames).ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FStateTreeExecutionFrame_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
          local_48.ArrayNum = (int)local_50;
        }
        pFVar10 = local_res10;
        if (pFVar11 == pFVar12) break;
        if (pFVar11[0x3c] != (FScriptContainerElement)0x0) {
          pFVar13 = pFVar11 + 0xc;
          pFVar16 = pFVar11 + 0x2c;
          iVar9 = local_48.ArrayNum;
          do {
            if (iVar9 == local_50._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_58,(int *)((longlong)&local_50 + 4));
            }
            local_48.ArrayNum = iVar9 + 1;
            iVar14 = iVar14 + 1;
            uVar4 = *(undefined4 *)pFVar13;
            pFVar1 = local_58.Data + (longlong)iVar9 * 0xc;
            pFVar13 = pFVar13 + 4;
            uVar2 = *(undefined2 *)pFVar16;
            pFVar16 = pFVar16 + 2;
            uVar5 = *(undefined4 *)(pFVar11 + 0x50);
            *(undefined2 *)(pFVar1 + 8) = uVar2;
            *(undefined4 *)pFVar1 = uVar5;
            *(undefined4 *)(pFVar1 + 4) = uVar4;
            iVar9 = local_48.ArrayNum;
            local_50._0_4_ = local_48.ArrayNum;
          } while (iVar14 < (int)(uint)(byte)pFVar11[0x3c]);
        }
        pFVar11 = pFVar11 + 0x70;
      }
      local_48.ArrayMax = local_50._4_4_;
      local_48.AllocatorInstance.Data = local_58.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      if (((this->ActiveFrames).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FActiveStatePath *)(*pcVar7)();
        return pFVar10;
      }
      TVar6.Val = *(UStateTree **)(this->ActiveFrames).AllocatorInstance.Data;
      if (TVar6.Val == (UStateTree *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      UE::StateTree::FActiveStatePath::FActiveStatePath(pFVar10,TVar6,&local_48);
      if (local_58.Data == (FScriptContainerElement *)0x0) {
        return pFVar10;
      }
      FMemory::Free(local_58.Data);
      return pFVar10;
    }
  }
  (__return_storage_ptr__->StateTree).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->States).ArrayNum = 0;
  (__return_storage_ptr__->States).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IndexOfActiveFrame @ 14d500c80

int __thiscall
FStateTreeExecutionState::IndexOfActiveFrame(FStateTreeExecutionState *this,FActiveFrameID param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ActiveFrames).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->ActiveFrames).ArrayNum * 0x70) {
      return -1;
    }
    if (*(uint *)(pFVar2 + 0x50) == param_1.Value) break;
    pFVar2 = pFVar2 + 0x70;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x70);
}

// RemoveScheduledTickRequest @ 14d503b60

bool __thiscall
FStateTreeExecutionState::RemoveScheduledTickRequest
          (FStateTreeExecutionState *this,FScheduledTickHandle param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  
  pFVar3 = (this->ScheduledTickRequests).AllocatorInstance.Data;
  pFVar10 = pFVar3;
  do {
    if (pFVar10 == pFVar3 + (longlong)(this->ScheduledTickRequests).ArrayNum * 0xc) {
      uVar9 = 0xffffffff;
LAB_14d503ba3:
      bVar11 = uVar9 == 0xffffffff;
LAB_14d503ba6:
      return !bVar11;
    }
    if (*(uint *)pFVar10 == param_1.Value) {
      lVar8 = ((longlong)pFVar10 - (longlong)pFVar3) / 6 +
              ((longlong)pFVar10 - (longlong)pFVar3 >> 0x3f);
      uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
      bVar11 = true;
      if (uVar9 == 0xffffffff) goto LAB_14d503ba6;
      uVar6 = 0;
      if ((int)uVar9 < (this->ScheduledTickRequests).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return (bool)uVar5;
      }
      iVar2 = (this->ScheduledTickRequests).ArrayNum;
      pFVar3 = (this->ScheduledTickRequests).AllocatorInstance.Data;
      iVar7 = iVar2 + ~uVar9;
      if (1 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar9 * 0xc,pFVar3 + (longlong)(iVar2 - iVar7) * 0xc,
                (longlong)iVar7 * 0xc);
      }
      piVar1 = &(this->ScheduledTickRequests).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,&(this->ScheduledTickRequests).AllocatorInstance,
                 (this->ScheduledTickRequests).ArrayNum,&(this->ScheduledTickRequests).ArrayMax);
      CacheScheduledTickRequest(this);
      goto LAB_14d503ba3;
    }
    pFVar10 = pFVar10 + 0xc;
  } while( true );
}

// UpdateScheduledTickRequest @ 14d523bb0

bool __thiscall
FStateTreeExecutionState::UpdateScheduledTickRequest
          (FStateTreeExecutionState *this,FScheduledTickHandle param_1,
          FStateTreeScheduledTick param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float local_res18;
  FScriptContainerElement FStackX_1c;
  
  pFVar2 = (this->ScheduledTickRequests).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->ScheduledTickRequests).ArrayNum * 0xc;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(uint *)pFVar2 == param_1.Value) break;
    pFVar2 = pFVar2 + 0xc;
  }
  local_res18 = param_2.NextDeltaTime;
  if ((local_res18 == *(float *)(pFVar2 + 4)) &&
     (FStackX_1c = (FScriptContainerElement)param_2.Reason, pFVar2[8] == FStackX_1c)) {
    return false;
  }
  *(FStateTreeScheduledTick *)(pFVar2 + 4) = param_2;
  CacheScheduledTickRequest(this);
  return true;
}

