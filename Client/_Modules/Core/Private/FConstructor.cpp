// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type> @ 141a4c9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
          (FConstructor *this,TUniqueFunction<void___cdecl(void)> *param_1,TPromise<void> *param_2,
          Type *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  Type TVar3;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  undefined8 uVar5;
  TFutureState<void> *pTVar6;
  undefined3 uVar7;
  undefined4 uVar8;
  FTaskBase *this_00;
  atomic<unsigned___int64> aVar9;
  FTaskBase *this_01;
  ETaskPriority local_res10 [8];
  EExtendedTaskPriority in_stack_00000028;
  undefined7 in_stack_00000029;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (FTaskBase *)0x0;
  if (this_00 != (FTaskBase *)0x0) {
    pTVar4 = this->Prerequisites;
    this_00->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    this_00->RefCount = (atomic<unsigned_int>)0x1;
    this_00->NumLocks = (atomic<unsigned_int>)0x1;
    (this_00->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
    this_00->TaskTriggered = (atomic<bool>)0x0;
    this_00->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
    this_00->Pipe = (FPipe *)0x0;
    aVar9 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    this_00->TraceId = aVar9;
    (this_00->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (this_00->Prerequisites).Prerequisites.ArrayNum = 0;
    (this_00->Prerequisites).Prerequisites.ArrayMax = 1;
    (this_00->Prerequisites).Mutex.State = (atomic<unsigned_char>)0x1;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xe800000000000020;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = 0;
    (this_00->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (this_00->Subsequents).Subsequents.ArrayNum = 0;
    (this_00->Subsequents).Subsequents.ArrayMax = 1;
    (this_00->Subsequents).bIsClosed = (atomic<bool>)0x0;
    (this_00->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
    this_00->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
    if (pTVar4 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                (this_00,pTVar4,false);
    }
    LOCK();
    pFVar1 = &(this_00->Prerequisites).Mutex;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&(this_00->Prerequisites).Mutex);
    }
    this_00->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
    this_01 = this_00;
  }
  TVar3 = *(Type *)CONCAT71(in_stack_00000029,in_stack_00000028);
  this_01[1]._padding_ = (longlong)(param_2->State).Object;
  uVar7 = *(undefined3 *)&param_2[1].field_0x11;
  uVar8 = *(undefined4 *)&param_2[1].field_0x14;
  this_01[1].RefCount.field_0x0 = param_2[1].bFutureRetrieved;
  *(undefined3 *)&this_01[1].RefCount.field_0x1 = uVar7;
  this_01[1].NumLocks = (atomic<unsigned_int>)uVar8;
  *(undefined8 *)&param_2[1].bFutureRetrieved = 0;
  pTVar6 = param_2[1].State.Object;
  this_01[1]._padding_ = *(longlong *)&param_2->bFutureRetrieved;
  this_01[1]._padding_ = (longlong)pTVar6;
  this_01[1]._padding_ = (longlong)param_2[1].State.SharedReferenceCount.ReferenceController;
  if (this_01[1]._padding_ != 0) {
    (param_2->State).Object = (TFutureState<void> *)0x0;
  }
  this_01[1].Pipe = *(FPipe **)param_3;
  uVar5 = *(undefined8 *)(param_3 + 2);
  this_01[1].StateChangeEvent = (TEventCount<unsigned_int>)(int)uVar5;
  this_01[1].ExtendedPriority = (char)((ulonglong)uVar5 >> 0x20);
  this_01[1].TaskTriggered = (atomic<bool>)(char)((ulonglong)uVar5 >> 0x28);
  this_01[1]._padding_ = (short)((ulonglong)uVar5 >> 0x30);
  param_3[2] = MainQueue;
  param_3[3] = MainQueue;
  param_3[0] = MainQueue;
  param_3[1] = MainQueue;
  *(char *)&this_01[1].ExecutingThreadId = (char)param_3[4];
  *(Type *)&this_01[1].TraceId = TVar3;
  UE::Tasks::Private::TranslatePriority(TVar3,local_res10,&stack0x00000028);
  UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_res10[0],in_stack_00000028,None);
  *(FTaskBase **)param_1 = this_01;
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)param_1,0x130);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

