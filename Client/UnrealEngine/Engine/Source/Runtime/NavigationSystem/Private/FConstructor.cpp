// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&> @ 146d67150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FSimpleDelegateGraphTask>::FConstructor::
ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&>
          (FConstructor *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TStatId *param_2,Type *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  Type TVar4;
  FTaskBase *this_00;
  atomic<unsigned___int64> aVar5;
  FTaskBase *pFVar6;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res20 [8];
  bool in_stack_00000028;
  undefined7 in_stack_00000029;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
  pFVar6 = (FTaskBase *)0x0;
  if (this_00 != (FTaskBase *)0x0) {
    pTVar3 = this->Prerequisites;
    this_00->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    this_00->RefCount = (atomic<unsigned_int>)0x1;
    this_00->NumLocks = (atomic<unsigned_int>)0x1;
    (this_00->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
    this_00->TaskTriggered = (atomic<bool>)0x0;
    this_00->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
    this_00->Pipe = (FPipe *)0x0;
    aVar5 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    this_00->TraceId = aVar5;
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
    if (pTVar3 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                (this_00,pTVar3,false);
    }
    LOCK();
    pFVar1 = &(this_00->Prerequisites).Mutex;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&(this_00->Prerequisites).Mutex);
    }
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
    pFVar6 = this_00;
  }
  TVar4 = *(Type *)CONCAT71(in_stack_00000029,in_stack_00000028);
  pFVar6[1]._padding_ = *(undefined8 *)param_3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&pFVar6[1]._padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)param_2);
  *(Type *)&pFVar6[1]._padding_ = TVar4;
  UE::Tasks::Private::TranslatePriority(TVar4,local_res20,local_res10);
  UE::Tasks::Private::FTaskBase::Init(pFVar6,L"GraphTask",local_res20[0],local_res10[0],None);
  *(FTaskBase **)param_1 = pFVar6;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
    UNLOCK();
  }
  pFVar6 = *(FTaskBase **)param_1;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar4 = UE::Tasks::Private::TranslatePriority
                      ((ETaskPriority)
                       ((ulonglong)*(undefined8 *)&(pFVar6->LowLevelTask).field_0x38 >> 0x3b) &
                       (Inherit|Default),pFVar6->ExtendedPriority);
    TaskTrace::Launched((ulong64)pFVar6->TraceId,
                        (wchar_t *)
                        (*(ulonglong *)&(pFVar6->LowLevelTask).field_0x38 >> 6 & 0x1fffffffffffff),
                        true,TVar4,0x100);
  }
  in_stack_00000028 = true;
  UE::Tasks::Private::FTaskBase::TryUnlock(pFVar6,&stack0x00000028);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

