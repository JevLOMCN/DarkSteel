// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&> @ 145c3bbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
          (FConstructor *this,TUniqueFunction<void___cdecl(void)> *param_1,TStatId *param_2,
          Type *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  TStatIdData *pTVar5;
  Type TVar6;
  FTaskBase *this_00;
  atomic<unsigned___int64> aVar7;
  FTaskBase *pFVar8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  bool in_stack_00000028;
  undefined7 in_stack_00000029;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  pFVar8 = (FTaskBase *)0x0;
  if (this_00 != (FTaskBase *)0x0) {
    pTVar4 = this->Prerequisites;
    this_00->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    this_00->RefCount = (atomic<unsigned_int>)0x1;
    this_00->NumLocks = (atomic<unsigned_int>)0x1;
    (this_00->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
    this_00->TaskTriggered = (atomic<bool>)0x0;
    this_00->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
    this_00->Pipe = (FPipe *)0x0;
    aVar7 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    this_00->TraceId = aVar7;
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
    this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
    pFVar8 = this_00;
  }
  aVar3 = *(atomic<unsigned_int> *)CONCAT71(in_stack_00000029,in_stack_00000028);
  pFVar8[1]._padding_ = *(undefined8 *)param_3;
  pFVar8[1]._padding_ = (longlong)param_2->StatIdPtr;
  *(TStatIdData **)&pFVar8[1].StateChangeEvent = param_2[5].StatIdPtr;
  param_2[5].StatIdPtr = (TStatIdData *)0x0;
  pTVar5 = param_2[3].StatIdPtr;
  pFVar8[1]._padding_ = (longlong)param_2[2].StatIdPtr;
  *(TStatIdData **)&pFVar8[1].RefCount = pTVar5;
  pFVar8[1].Pipe = (FPipe *)param_2[4].StatIdPtr;
  if (pFVar8[1]._padding_ != 0) {
    param_2->StatIdPtr = (TStatIdData *)0x0;
  }
  pFVar8[1].ExecutingThreadId = aVar3;
  UE::Tasks::Private::TranslatePriority((Type)aVar3,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(pFVar8,L"GraphTask",local_res18[0],local_res10[0],None);
  *(FTaskBase **)param_1 = pFVar8;
  if (pFVar8 != (FTaskBase *)0x0) {
    LOCK();
    pFVar8->RefCount = (atomic<unsigned_int>)((int)pFVar8->RefCount + 1);
    UNLOCK();
  }
  pFVar8 = *(FTaskBase **)param_1;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar6 = UE::Tasks::Private::TranslatePriority
                      ((ETaskPriority)
                       ((ulonglong)*(undefined8 *)&(pFVar8->LowLevelTask).field_0x38 >> 0x3b) &
                       (Inherit|Default),pFVar8->ExtendedPriority);
    TaskTrace::Launched((ulong64)pFVar8->TraceId,
                        (wchar_t *)
                        (*(ulonglong *)&(pFVar8->LowLevelTask).field_0x38 >> 6 & 0x1fffffffffffff),
                        true,TVar6,0x130);
  }
  in_stack_00000028 = true;
  UE::Tasks::Private::FTaskBase::TryUnlock(pFVar8,&stack0x00000028);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

