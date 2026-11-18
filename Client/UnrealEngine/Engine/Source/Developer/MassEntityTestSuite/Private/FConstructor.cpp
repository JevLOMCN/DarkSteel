// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ConstructAndDispatchWhenReady<TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>,enum_EMassProcessingPhase,float_&> @ 1470d81a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask>::FConstructor::
ConstructAndDispatchWhenReady<TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>,enum_EMassProcessingPhase,float_&>
          (FConstructor *this,
          TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *param_1,
          EMassProcessingPhase *param_2,float *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  float fVar3;
  EMassProcessingPhase EVar4;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  Type TVar6;
  FMassTestProcessingPhaseManager *this_00;
  atomic<unsigned___int64> aVar7;
  FMassTestProcessingPhaseManager *pFVar8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  bool in_stack_00000028;
  undefined7 in_stack_00000029;
  TSharedRef<FMassProcessingPhaseManager,1> local_38;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  pFVar8 = (FMassTestProcessingPhaseManager *)0x0;
  if (this_00 != (FMassTestProcessingPhaseManager *)0x0) {
    pTVar5 = this->Prerequisites;
    *(undefined ***)&this_00->field_0x0 = &___7FTaskBase_Private_Tasks_UE__6B_;
    *(atomic<unsigned_int> *)&this_00->field_0x30 = (atomic<unsigned_int>)0x1;
    *(atomic<unsigned_int> *)&this_00->field_0x34 = (atomic<unsigned_int>)0x1;
    ((TEventCount<unsigned_int> *)&this_00->field_0x40)->Count = (atomic<unsigned_int>)0x0;
    *(atomic<bool> *)&this_00->field_0x45 = (atomic<bool>)0x0;
    *(atomic<unsigned_int> *)&this_00->field_0x48 = (atomic<unsigned_int>)0xffffffff;
    *(FPipe **)&this_00->field_0x38 = (FPipe *)0x0;
    aVar7 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    *(atomic<unsigned___int64> *)&this_00->field_0x50 = aVar7;
    (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
     &this_00->field_0x58)->Prerequisites).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
     &this_00->field_0x58)->Prerequisites).ArrayNum = 0;
    (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
     &this_00->field_0x58)->Prerequisites).ArrayMax = 1;
    (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
     &this_00->field_0x58)->Mutex).State = (atomic<unsigned_char>)0x1;
    *(undefined ***)&((FTask *)&this_00->field_0x78)->field_0x28 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)&((FTask *)&this_00->field_0x78)->field_0x38 = 0xe800000000000020;
    *(undefined8 *)&((FTask *)&this_00->field_0x78)->field_0x30 = 0;
    (((FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)&this_00->field_0xb8
     )->Subsequents).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (((FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)&this_00->field_0xb8
     )->Subsequents).ArrayNum = 0;
    (((FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)&this_00->field_0xb8
     )->Subsequents).ArrayMax = 1;
    *(atomic<bool> *)&this_00->field_0xd0 = (atomic<bool>)0x0;
    *(atomic<unsigned_char> *)&this_00->field_0xd1 = (atomic<unsigned_char>)0x0;
    *(undefined ***)&this_00->field_0x0 = &___7FBaseGraphTask__6B_;
    if (pTVar5 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                ((FTaskBase *)this_00,pTVar5,false);
    }
    LOCK();
    pFVar1 = &((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &this_00->field_0x58)->Mutex;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread
                (&((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &this_00->field_0x58)->Mutex);
    }
    *(undefined ***)&this_00->field_0x0 =
         &___7__TGraphTask_UFMassTestPhaseTickTask_Testing_Mass_UE____6B_;
    pFVar8 = this_00;
  }
  EVar4 = *(EMassProcessingPhase *)param_3;
  fVar3 = *(float *)CONCAT71(in_stack_00000029,in_stack_00000028);
  local_38.Object = *(FMassProcessingPhaseManager **)param_2;
  local_38.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(param_2 + 8)
  ;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Mass::Testing::FMassTestPhaseTickTask::FMassTestPhaseTickTask
            ((FMassTestPhaseTickTask *)&pFVar8->field_0xd8,&local_38,EVar4,fVar3);
  TSharedRef<FMassProcessingPhaseManager,1>::~TSharedRef<FMassProcessingPhaseManager,1>(&local_38);
  TVar6 = UE::Mass::Testing::FMassTestPhaseTickTask::GetDesiredThread();
  UE::Tasks::Private::TranslatePriority(TVar6,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pFVar8,L"GraphTask",local_res18[0],local_res10[0],None);
  param_1->Object = pFVar8;
  if (pFVar8 != (FMassTestProcessingPhaseManager *)0x0) {
    LOCK();
    *(int *)&pFVar8->field_0x30 = *(int *)&pFVar8->field_0x30 + 1;
    UNLOCK();
  }
  pFVar8 = param_1->Object;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar6 = UE::Tasks::Private::TranslatePriority
                      ((ETaskPriority)
                       ((ulonglong)*(undefined8 *)&((FTask *)&pFVar8->field_0x78)->field_0x38 >>
                       0x3b) & (Inherit|Default),pFVar8->field_0x44);
    TaskTrace::Launched((ulong64)*(atomic<unsigned___int64> *)&pFVar8->field_0x50,
                        (wchar_t *)
                        (*(ulonglong *)&((FTask *)&pFVar8->field_0x78)->field_0x38 >> 6 &
                        0x1fffffffffffff),true,TVar6,0xf0);
  }
  in_stack_00000028 = true;
  UE::Tasks::Private::FTaskBase::TryUnlock((FTaskBase *)pFVar8,&stack0x00000028);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

