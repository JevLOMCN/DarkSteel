// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 1

// ConstructAndDispatchWhenReady<FWN_Task_*_&,enum_EWN_TaskStep_const_&,enum_ENamedThreads::Type> @ 14a6ab4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FWN_GraphTaskForStep>::FConstructor::
ConstructAndDispatchWhenReady<FWN_Task_*_&,enum_EWN_TaskStep_const_&,enum_ENamedThreads::Type>
          (FConstructor *this,FWN_Task **param_1,EWN_TaskStep *param_2,Type *param_3)

{
  FMutex *pFVar1;
  TArray<FWN_VariantItemBase_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FWN_TaskStepInfo *pFVar3;
  int *piVar4;
  atomic<unsigned_char> aVar5;
  undefined4 uVar6;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  undefined8 uVar8;
  undefined3 uVar10;
  ulonglong uVar9;
  Type TVar11;
  FWN_Task *this_00;
  atomic<unsigned___int64> aVar12;
  FWN_Task *pFVar13;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  bool in_stack_00000028;
  undefined7 in_stack_00000029;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  pFVar13 = (FWN_Task *)0x0;
  if (this_00 != (FWN_Task *)0x0) {
    pTVar7 = this->Prerequisites;
    *(undefined ***)this_00 = &___7FTaskBase_Private_Tasks_UE__6B_;
    *(undefined4 *)&(this_00->UserDatas).Items.AllocatorInstance.Data = 1;
    *(undefined4 *)((longlong)&(this_00->UserDatas).Items.AllocatorInstance.Data + 4) = 1;
    ((TEventCount<unsigned_int> *)&this_00->Step)->Count = (atomic<unsigned_int>)0x0;
    *(atomic<bool> *)&this_00->field_0x45 = (atomic<bool>)0x0;
    *(undefined4 *)&(this_00->Priority).PriorityBits = 0xffffffff;
    *(FPipe **)&(this_00->UserDatas).Items.ArrayNum = (FPipe *)0x0;
    aVar12 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    *(atomic<unsigned___int64> *)&this_00->LastCallbackResult = aVar12;
    (((TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
       *)&(this_00->Scheduling).Callback)->AllocatorInstance).SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    ((TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *)&(this_00->Scheduling).Callback)->ArrayNum = 0;
    ((TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *)&(this_00->Scheduling).Callback)->ArrayMax = 1;
    ((FMutex *)&(this_00->Scheduling).InvocationCount)->State = (atomic<unsigned_char>)0x1;
    *(undefined ***)&(this_00->ProcessingCompleted).Callback.field_0x8 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    (this_00->ProcessingCompleted).InvocationCount = 0x20;
    (this_00->ProcessingCompleted).bEnableAutoDependency = false;
    *(undefined3 *)&(this_00->ProcessingCompleted).field_0x1d = 0xe80000;
    *(undefined8 *)&(this_00->ProcessingCompleted).Callback.field_0x10 = 0;
    (((TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
       *)&(this_00->Processed).Callback)->AllocatorInstance).SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    ((TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *)&(this_00->Processed).Callback)->ArrayNum = 0;
    ((TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *)&(this_00->Processed).Callback)->ArrayMax = 1;
    *(undefined2 *)&(this_00->Processed).InvocationCount = 0;
    *(undefined ***)this_00 = &___7FBaseGraphTask__6B_;
    if (pTVar7 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                ((FTaskBase *)this_00,pTVar7,false);
    }
    LOCK();
    pFVar1 = (FMutex *)&(this_00->Scheduling).InvocationCount;
    aVar5 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)&(this_00->Scheduling).InvocationCount);
    }
    *(undefined ***)this_00 = &___7__TGraphTask_VFWN_GraphTaskForStep____6B_;
    pFVar13 = this_00;
  }
  uVar8 = *(undefined8 *)param_2;
  pFVar3 = &pFVar13->Completed;
  uVar6 = *(undefined4 *)CONCAT71(in_stack_00000029,in_stack_00000028);
  (pFVar13->Completed).Callback.field_0x8 = (char)*param_3;
  *(undefined8 *)&pFVar3->Callback = uVar8;
  *(undefined4 *)&(pFVar13->Completed).Callback.field_0xc = uVar6;
  *(undefined4 *)&(pFVar13->Completed).Callback.field_0x10 = 0x800;
  LOCK();
  piVar4 = (int *)(uVar8 + ~ProcessingCompleted);
  *piVar4 = *piVar4 + 1;
  UNLOCK();
  LOCK();
  FWN_Task::S_Statistics.NumGraphTasks = FWN_Task::S_Statistics.NumGraphTasks + 1;
  UNLOCK();
  *(FWN_TaskStepInfo **)(*(longlong *)&pFVar3->Callback + 0x138) = pFVar3;
  UE::Tasks::Private::TranslatePriority
            (*(Type *)&(pFVar13->Completed).Callback.field_0xc,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pFVar13,L"GraphTask",local_res18[0],local_res10[0],None);
  *param_1 = pFVar13;
  if (pFVar13 != (FWN_Task *)0x0) {
    LOCK();
    pTVar2 = &(pFVar13->UserDatas).Items;
    *(int *)&(pTVar2->AllocatorInstance).Data = *(int *)&(pTVar2->AllocatorInstance).Data + 1;
    UNLOCK();
  }
  pFVar13 = *param_1;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    uVar10 = *(undefined3 *)&(pFVar13->ProcessingCompleted).field_0x1d;
    TVar11 = UE::Tasks::Private::TranslatePriority
                       ((ETaskPriority)((uint3)uVar10 >> 0x13) & (Inherit|Default),
                        pFVar13->field_0x44);
    uVar9._0_4_ = (pFVar13->ProcessingCompleted).InvocationCount;
    uVar9._4_1_ = (pFVar13->ProcessingCompleted).bEnableAutoDependency;
    uVar9._5_3_ = *(undefined3 *)&(pFVar13->ProcessingCompleted).field_0x1d;
    TaskTrace::Launched((ulong64)*(atomic<unsigned___int64> *)&pFVar13->LastCallbackResult,
                        (wchar_t *)(uVar9 >> 6 & 0x1fffffffffffff),true,TVar11,0xf0);
  }
  in_stack_00000028 = true;
  UE::Tasks::Private::FTaskBase::TryUnlock((FTaskBase *)pFVar13,&stack0x00000028);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

