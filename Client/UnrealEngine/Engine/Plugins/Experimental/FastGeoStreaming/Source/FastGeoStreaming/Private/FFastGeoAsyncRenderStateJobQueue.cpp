// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 11

// FFastGeoAsyncRenderStateJobQueue @ 14da18270

FFastGeoAsyncRenderStateJobQueue * __thiscall
FFastGeoAsyncRenderStateJobQueue::FFastGeoAsyncRenderStateJobQueue
          (FFastGeoAsyncRenderStateJobQueue *this,FSceneInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FFastGeoAsyncRenderStateJobQueue *pFVar4;
  longlong lVar5;
  
  this->Scene = param_1;
  (this->PendingJobs).Ptr = (FJobSet *)0x0;
  (this->PipedJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipedJobs).ArrayNum = 0;
  (this->PipedJobs).ArrayMax = 0;
  (this->PipeTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipeTasks).ArrayNum = 0;
  (this->PipeTasks).ArrayMax = 0;
  (this->IsReadyToRunAsyncTasksEvent).bIsSet = false;
  (this->Pipe).LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  (this->Pipe).TaskCount = (atomic<unsigned___int64>)0x0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->Pipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)0x10;
    (this->Pipe).EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar3->WeakReferenceCount = 1;
    (this->Pipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)(pTVar3 + 1);
    (this->Pipe).EmptyEventRef.SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFastGeoAsyncRenderStateJobQueue *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->Pipe).DebugName = L"FastGeoAsyncJobQueue";
  lVar5 = (**(code **)(this->Scene->_padding_ + 0x410))();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FFastGeoAsyncRenderStateJobQueue>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (lVar5 + 0x6f8),(FFastGeoAsyncRenderStateJobQueue *)&stack0x00000008,(pmf_e40b41c7)this
            );
  return this;
}

// ~FFastGeoAsyncRenderStateJobQueue @ 14da1b200

void __thiscall
FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue
          (FFastGeoAsyncRenderStateJobQueue *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  FScriptContainerElement *pFVar4;
  TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  
  lVar7 = (**(code **)(this->Scene->_padding_ + 0x410))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar7 + 0x6f8),this);
  Launch(this);
  WaitForAsyncTasksExecution(this);
  OnAsyncTasksExecuted(this);
  if (((((this->PendingJobs).Ptr != (FJobSet *)0x0) ||
       ((this->Pipe).TaskCount != (atomic<unsigned___int64>)0x0)) ||
      ((this->PipedJobs).ArrayNum != 0)) || ((this->PipeTasks).ArrayNum != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                       ,0x16,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->Pipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Pipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  if (((this->IsReadyToRunAsyncTasksEvent).bIsSet != false) &&
     (FVar3 = (this->IsReadyToRunAsyncTasksEvent).TypedValue, FVar3 != (FTaskEvent)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->PipeTasks).AllocatorInstance.Data,(this->PipeTasks).ArrayNum);
  pFVar4 = (this->PipeTasks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>,int>
            ((TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
              *)(this->PipedJobs).AllocatorInstance.Data,(this->PipedJobs).ArrayNum);
  pFVar4 = (this->PipedJobs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this_00 = (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this->PendingJobs).Ptr;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

// AddJob @ 14da1fef0

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
FFastGeoAsyncRenderStateJobQueue::AddJob(FFastGeoAsyncRenderStateJobQueue *this,FJob *param_1)

{
  TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  UFastGeoContainer *pUVar1;
  code *pcVar2;
  bool bVar3;
  TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  UWorld *pUVar4;
  UFastGeoWorldSubsystem *pUVar5;
  TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
  *pTVar6;
  bool bVar7;
  longlong local_28 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId27,"FFastGeoAsyncRenderStateJobQueue::AddJob",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
               ,0x1b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId27);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = &this->PendingJobs;
  if (pTVar6->Ptr == (FJobSet *)0x0) {
    this_01 = ::operator_new(0x50);
    if (this_01 !=
        (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)0x0) {
      *(undefined8 *)(&this_01->field_0x0 + 0x10) = 0;
      *(undefined8 *)(&this_01->field_0x0 + 0x18) = 0;
      *(undefined8 *)(this_01 + 1) = 0;
      *(undefined8 *)&this_01[1].field_0x10 = 0;
      *(undefined8 *)&this_01->field_0x0 = 0;
      *(undefined8 *)(&this_01->field_0x0 + 8) = 0;
      *(undefined8 *)(&this_01->field_0x0 + 0x20) = 0;
      *(undefined4 *)(&this_01->field_0x0 + 0x28) = 0;
      *(undefined4 *)(&this_01->field_0x0 + 0x2c) = 0x80;
      *(undefined4 *)(&this_01->field_0x0 + 0x30) = 0xffffffff;
      *(undefined4 *)(&this_01->field_0x0 + 0x34) = 0;
      *(undefined8 *)&this_01[1].field_0x8 = 0;
    }
    if (pTVar6 == (TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
                   *)local_28) {
      if (this_01 ==
          (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) goto LAB_14da2003f;
      *(undefined4 *)&this_01[1].field_0x10 = 0;
      if (*(void **)&this_01[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_01[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_01);
    }
    else {
      this_00 = (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar6->Ptr;
      pTVar6->Ptr = (FJobSet *)this_01;
      if (this_00 ==
          (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) goto LAB_14da2003f;
      *(undefined4 *)&this_00[1].field_0x10 = 0;
      if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      this_01 = this_00;
    }
    ::operator_delete(this_01,0x50);
  }
LAB_14da2003f:
  TSet<FFastGeoAsyncRenderStateJobQueue::FJob,DefaultKeyFuncs<FFastGeoAsyncRenderStateJobQueue::FJob,0>,FDefaultSetAllocator>
  ::Emplace<FFastGeoAsyncRenderStateJobQueue::FJob_const_&>
            (&pTVar6->Ptr->Jobs,(FJob *)&stack0x00000008,(bool *)param_1);
  if (((param_1->FastGeo == (UFastGeoContainer *)0x0) ||
      (((uint)param_1->FastGeo->_padding_ >> 0x1e & 1) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("::IsValid(Job.FastGeo)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                         ,0x24,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->Type == CreateRenderState) {
    pUVar1 = param_1->FastGeo;
    if (((pUVar1->PendingCreate).RenderState.NumToProcess != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingCreate.RenderState.NumToProcess == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x183,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((pUVar1->PendingCreate).RenderState.TotalNumProcessed ==
         (pUVar1->PendingCreate).RenderState.ComponentsToProcess.ArrayNum) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingCreate.RenderState.TotalNumProcessed != PendingCreate.RenderState.ComponentsToProcess.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x184,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = (UWorld *)(**(code **)(pUVar1->_padding_ + 0x180))(pUVar1);
    pUVar5 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar4);
    if ((((pUVar5->bWaitingForCompletion != false) ||
         (pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)pUVar5),
         pUVar4->IsInBlockTillLevelStreamingCompleted != 0)) ||
        (pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)pUVar5),
        (bool)pUVar4->bShouldForceUnloadStreamingLevels)) ||
       (pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)pUVar5),
       pUVar4->bIsBeingCleanedUp != false)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    (pUVar1->PendingCreate).bIsInBlockingWait = bVar3;
    (pUVar1->PendingCreate).RenderState.NumToProcess =
         (pUVar1->PendingCreate).RenderState.ComponentsToProcess.ArrayNum -
         (pUVar1->PendingCreate).RenderState.TotalNumProcessed;
  }
  else if (param_1->Type == DestroyRenderState) {
    pUVar1 = param_1->FastGeo;
    if (((pUVar1->PendingDestroy).RenderState.NumToProcess != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDestroy.RenderState.NumToProcess == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x18d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((pUVar1->PendingDestroy).RenderState.TotalNumProcessed ==
         (pUVar1->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDestroy.RenderState.TotalNumProcessed != PendingDestroy.RenderState.ComponentsToProcess.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x18e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = (UWorld *)(**(code **)(pUVar1->_padding_ + 0x180))(pUVar1);
    pUVar5 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar4);
    if ((((pUVar5->bWaitingForCompletion != false) ||
         (pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)pUVar5),
         pUVar4->IsInBlockTillLevelStreamingCompleted != 0)) ||
        (pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)pUVar5),
        (bool)pUVar4->bShouldForceUnloadStreamingLevels)) ||
       (pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)pUVar5),
       pUVar4->bIsBeingCleanedUp != false)) {
      (pUVar1->PendingDestroy).bIsInBlockingWait = true;
      (pUVar1->PendingDestroy).RenderState.NumToProcess =
           (pUVar1->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum;
    }
    else {
      (pUVar1->PendingDestroy).bIsInBlockingWait = false;
      (pUVar1->PendingDestroy).RenderState.NumToProcess =
           (pUVar1->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum;
    }
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// AreAsyncTasksExecuted @ 14da20fc0

bool __thiscall
FFastGeoAsyncRenderStateJobQueue::AreAsyncTasksExecuted(FFastGeoAsyncRenderStateJobQueue *this)

{
  if (((this->PendingJobs).Ptr == (FJobSet *)0x0) &&
     ((this->Pipe).TaskCount == (atomic<unsigned___int64>)0x0)) {
    return true;
  }
  return false;
}

// IsCompleted @ 14da2d800

bool __thiscall
FFastGeoAsyncRenderStateJobQueue::IsCompleted(FFastGeoAsyncRenderStateJobQueue *this)

{
  if (((((this->PendingJobs).Ptr == (FJobSet *)0x0) &&
       ((this->Pipe).TaskCount == (atomic<unsigned___int64>)0x0)) &&
      ((this->PipedJobs).ArrayNum == 0)) && ((this->PipeTasks).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Launch @ 14da2e210

void __thiscall FFastGeoAsyncRenderStateJobQueue::Launch(FFastGeoAsyncRenderStateJobQueue *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned___int64> *paVar3;
  atomic<unsigned_int> aVar4;
  FJobSet *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FTaskEvent FVar10;
  FTaskBase *this_00;
  FTask *pFVar11;
  FTaskBase *this_01;
  bool bVar12;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId74,"FFastGeoAsyncRenderStateJobQueue::Launch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
               ,0x4a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId74);
  }
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                         ,0x4b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (this->PendingJobs).Ptr;
  if ((pFVar5 != (FJobSet *)0x0) &&
     (*(int *)&(pFVar5->Jobs).Elements.field_0x8 != *(int *)&(pFVar5->Jobs).Elements.field_0x34)) {
    iVar9 = (this->PipedJobs).ArrayNum;
    piVar1 = &(this->PipedJobs).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->PipedJobs).AllocatorInstance,piVar1);
    }
    this_01 = (FTaskBase *)0x0;
    (this->PipedJobs).ArrayNum = iVar9 + 1;
    pFVar6 = (this->PipedJobs).AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar9 * 8) = 0;
    pFVar6 = pFVar6 + (longlong)iVar9 * 8;
    TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
    ::operator=((TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
                 *)pFVar6,&this->PendingJobs);
    if ((this->IsReadyToRunAsyncTasksEvent).bIsSet == false) {
      FVar10 = (FTaskEvent)
               UE::Tasks::Private::FTaskEventBase::Create
                         (
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp(87)"
                         );
      (this->IsReadyToRunAsyncTasksEvent).TypedValue = FVar10;
      (this->IsReadyToRunAsyncTasksEvent).bIsSet = true;
    }
    pFVar5 = *(FJobSet **)&pFVar6->field_0x0;
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FFastGeoAsyncRenderStateJobQueue::Launch'::`2'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
      *(FTaskBase **)&this_00->LowLevelTask = this_00;
      *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
      pFVar11 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar11 != (FTask *)0x0) {
        this_01 = *(FTaskBase **)&pFVar11->field_0x30;
      }
      *(FTaskBase **)&(this_00->LowLevelTask).field_0x30 = this_01;
      *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xd0000054b156d000;
      this_00->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_00->_padding_);
      this_00[1]._padding_ = (longlong)this;
      this_00[1]._padding_ = (longlong)pFVar5;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FFastGeoAsyncRenderStateJobQueue::Launch'::`2'::<lambda_1>_>::_vftable_
      ;
      this_01 = this_00;
    }
    LOCK();
    paVar3 = &(this->Pipe).TaskCount;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    LOCK();
    this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
    UNLOCK();
    this_01->Pipe = &this->Pipe;
    FVar10 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
    if (FVar10 != (FTaskEvent)0x0) {
      if (((this_01->NumLocks == (atomic<unsigned_int>)0x0) ||
          (0x7fffffff < (uint)this_01->NumLocks)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                             ,0xe3,L"Prerequisites can be added only before the task is launched"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      paVar2 = &this_01->NumLocks;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + 1);
      UNLOCK();
      if ((0x7fffffff < (int)aVar4 + 1U) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrevNumLocks + 1 < ExecutionFlag",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                             ,0xea,L"Max number of task prerequisites reached: %d"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = UE::Tasks::Private::FTaskBase::AddSubsequent((FTaskBase *)FVar10,this_01);
      if (bVar8) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar10 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar10 + 0x30) + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::
        FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                  (&this_01->Prerequisites,(FTaskBase *)FVar10);
      }
      else {
        LOCK();
        this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + -1);
        UNLOCK();
      }
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    iVar9 = (this->PipeTasks).ArrayNum;
    piVar1 = &(this->PipeTasks).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->PipeTasks).AllocatorInstance,piVar1);
      (this->PipeTasks).ArrayNum = iVar9;
    }
    (this->PipeTasks).ArrayNum = iVar9 + 1;
    *(FTaskBase **)((this->PipeTasks).AllocatorInstance.Data + (longlong)iVar9 * 8) = this_01;
  }
  if (!bVar12) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// OnAsyncTasksExecuted @ 14da2fef0

void __thiscall
FFastGeoAsyncRenderStateJobQueue::OnAsyncTasksExecuted(FFastGeoAsyncRenderStateJobQueue *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FTaskEvent FVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (((this->PendingJobs).Ptr != (FJobSet *)0x0) ||
     ((this->Pipe).TaskCount != (atomic<unsigned___int64>)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AreAsyncTasksExecuted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                       ,0x34,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = (this->PipedJobs).AllocatorInstance.Data;
  iVar2 = (this->PipedJobs).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PipedJobs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    FJobSet::OnPostExecute_GameThread(*(FJobSet **)pFVar7);
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->PipedJobs).ArrayMax;
  pFVar3 = (this->PipedJobs).AllocatorInstance.Data;
  iVar2 = (this->PipedJobs).ArrayNum;
  if ((this->PipedJobs).ArrayMax < 0) {
    DestructItems<TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>,int>
              ((TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
                *)pFVar3,iVar2);
    (this->PipedJobs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PipedJobs).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>,int>
              ((TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
                *)pFVar3,iVar2);
    (this->PipedJobs).ArrayNum = 0;
  }
  piVar1 = &(this->PipeTasks).ArrayMax;
  pFVar3 = (this->PipeTasks).AllocatorInstance.Data;
  iVar2 = (this->PipeTasks).ArrayNum;
  if ((this->PipeTasks).ArrayMax < 0) {
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar3,iVar2);
    (this->PipeTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PipeTasks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)pFVar3,iVar2);
    (this->PipeTasks).ArrayNum = 0;
  }
  if ((this->IsReadyToRunAsyncTasksEvent).bIsSet != false) {
    FVar4 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
    if (FVar4 != (FTaskEvent)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)FVar4 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)FVar4)(FVar4,1);
      }
    }
    (this->IsReadyToRunAsyncTasksEvent).bIsSet = false;
  }
  return;
}

// OnUpdateLevelStreamingDone @ 14da31c50

void __thiscall
FFastGeoAsyncRenderStateJobQueue::OnUpdateLevelStreamingDone(FFastGeoAsyncRenderStateJobQueue *this)

{
  int *piVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskEvent FVar4;
  
  if ((this->IsReadyToRunAsyncTasksEvent).bIsSet != false) {
    FVar4 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
    if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
      FVar4 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
      LOCK();
      aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
      *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar2 == (atomic<bool>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
      }
    }
    if ((this->IsReadyToRunAsyncTasksEvent).bIsSet != false) {
      FVar4 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
      if (FVar4 != (FTaskEvent)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar4 + 0x30);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)FVar4)(FVar4,1);
        }
      }
      (this->IsReadyToRunAsyncTasksEvent).bIsSet = false;
    }
  }
  return;
}

// Tick @ 14da38340

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
FFastGeoAsyncRenderStateJobQueue::Tick(FFastGeoAsyncRenderStateJobQueue *this,bool param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UWorld *pUVar9;
  UFastGeoWorldSubsystem *this_01;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId119,"FFastGeoAsyncRenderStateJobQueue::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
               ,0x77);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId119);
  }
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                         ,0x78,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  Launch(this);
  if (!param_1) {
    pUVar9 = (UWorld *)(**(code **)(this->Scene->_padding_ + 0x410))();
    this_01 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar9);
    if ((((this_01->bWaitingForCompletion == false) &&
         (pUVar9 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_01),
         pUVar9->IsInBlockTillLevelStreamingCompleted == 0)) &&
        (pUVar9 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_01),
        !(bool)pUVar9->bShouldForceUnloadStreamingLevels)) &&
       (pUVar9 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_01),
       pUVar9->bIsBeingCleanedUp == false)) goto LAB_14da3843f;
  }
  WaitForAsyncTasksExecution(this);
LAB_14da3843f:
  piVar1 = &(this->PipeTasks).ArrayNum;
  if ((*piVar1 != (this->PipedJobs).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PipeTasks.Num() == PipedJobs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                         ,0x84,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = 0;
  if (0 < *piVar1) {
    lVar13 = 0;
    do {
      uVar11 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->PipeTasks).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)((this->PipeTasks).AllocatorInstance.Data + lVar13 * 8);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0xd0) != '\0')) {
        uVar8 = 0;
        if ((int)uVar12 < (this->PipedJobs).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FJobSet::OnPostExecute_GameThread
                  (*(FJobSet **)((this->PipedJobs).AllocatorInstance.Data + lVar13 * 8));
        uVar8 = 0;
        if ((int)uVar12 < (this->PipeTasks).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->PipeTasks).AllocatorInstance.Data;
        puVar5 = *(undefined8 **)(pFVar4 + lVar13 * 8);
        pFVar4 = pFVar4 + lVar13 * 8;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar5 + 6);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        iVar10 = ~uVar12 + (this->PipeTasks).ArrayNum;
        if (iVar10 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar10 << 3);
        }
        piVar2 = &(this->PipeTasks).ArrayNum;
        *piVar2 = *piVar2 + -1;
        uVar8 = 0;
        if ((int)uVar12 < (this->PipedJobs).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->PipedJobs).AllocatorInstance.Data;
        this_00 = *(TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    **)(pFVar4 + lVar13 * 8);
        pFVar4 = pFVar4 + lVar13 * 8;
        if (this_00 !=
            (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)0x0) {
          *(undefined4 *)&this_00[1].field_0x10 = 0;
          if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
            FMemory::Free(*(void **)&this_00[1].field_0x8);
          }
          TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (this_00);
          ::operator_delete(this_00,0x50);
        }
        iVar10 = (this->PipedJobs).ArrayNum + ~uVar12;
        if (iVar10 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar10 << 3);
        }
        piVar2 = &(this->PipedJobs).ArrayNum;
        *piVar2 = *piVar2 + -1;
      }
      else {
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 1;
      }
    } while ((int)uVar12 < *piVar1);
  }
  if (((this->PendingJobs).Ptr == (FJobSet *)0x0) &&
     ((this->Pipe).TaskCount == (atomic<unsigned___int64>)0x0)) {
    if (((this->PipeTasks).ArrayNum != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PipeTasks.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                           ,0x96,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->PipedJobs).ArrayNum != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PipedJobs.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                           ,0x97,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->IsReadyToRunAsyncTasksEvent).bIsSet != false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsReadyToRunAsyncTasksEvent.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                           ,0x98,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (!bVar14) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// TriggerIsReadyToRunAsyncTasksEvent @ 14da388c0

void __thiscall
FFastGeoAsyncRenderStateJobQueue::TriggerIsReadyToRunAsyncTasksEvent
          (FFastGeoAsyncRenderStateJobQueue *this)

{
  int *piVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskEvent FVar4;
  
  if ((this->IsReadyToRunAsyncTasksEvent).bIsSet != false) {
    FVar4 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
    if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
      FVar4 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
      LOCK();
      aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
      *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar2 == (atomic<bool>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
      }
    }
    if ((this->IsReadyToRunAsyncTasksEvent).bIsSet != false) {
      FVar4 = (this->IsReadyToRunAsyncTasksEvent).TypedValue;
      if (FVar4 != (FTaskEvent)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar4 + 0x30);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)FVar4)(FVar4,1);
        }
      }
      (this->IsReadyToRunAsyncTasksEvent).bIsSet = false;
    }
  }
  return;
}

// WaitForAsyncTasksExecution @ 14da39910

void __thiscall
FFastGeoAsyncRenderStateJobQueue::WaitForAsyncTasksExecution(FFastGeoAsyncRenderStateJobQueue *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId110,
               "FFastGeoAsyncRenderStateJobQueue::WaitForAsyncTasksExecution",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
               ,0x6e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId110);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoAsyncRenderStateJobQueue.cpp"
                         ,0x6f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TriggerIsReadyToRunAsyncTasksEvent(this);
  UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&this->PipeTasks,(FTimespan)0x7fffffffffffffff);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

