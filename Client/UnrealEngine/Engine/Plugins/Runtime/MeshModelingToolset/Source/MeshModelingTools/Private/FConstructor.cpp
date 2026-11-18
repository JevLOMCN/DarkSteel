// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// ConstructAndHoldImpl<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type> @ 14cc11a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<TAsyncGraphTask<void>_> * __thiscall
TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
ConstructAndHoldImpl<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
          (FConstructor *this,TUniqueFunction<void___cdecl(void)> *param_1,TPromise<void> *param_2,
          Type *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  Type TVar3;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  bool bVar21;
  TGraphTask<TAsyncGraphTask<void>_> *this_00;
  atomic<unsigned___int64> aVar22;
  TGraphTask<TAsyncGraphTask<void>_> *pTVar23;
  FTask *pFVar24;
  TGraphTask<TAsyncGraphTask<void>_> *pTVar25;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [16];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  pTVar23 = (TGraphTask<TAsyncGraphTask<void>_> *)0x0;
  pTVar25 = pTVar23;
  if (this_00 != (TGraphTask<TAsyncGraphTask<void>_> *)0x0) {
    pTVar4 = this->Prerequisites;
    this_00->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    *(atomic<unsigned_int> *)&this_00->_padding_ = (atomic<unsigned_int>)0x1;
    ((atomic<unsigned_int> *)&this_00->_padding_)[1] = (atomic<unsigned_int>)0x1;
    ((TEventCount<unsigned_int> *)&this_00->_padding_)->Count = (atomic<unsigned_int>)0x0;
    *(atomic<bool> *)((longlong)((TEventCount<unsigned_int> *)&this_00->_padding_ + 1) + 1) =
         (atomic<bool>)0x0;
    *(atomic<unsigned_int> *)&this_00->_padding_ = (atomic<unsigned_int>)0xffffffff;
    this_00->_padding_ = 0;
    aVar22 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    *(atomic<unsigned___int64> *)&this_00->_padding_ = aVar22;
    *(ForElementType<UE::Tasks::Private::FTaskBase_*> *)&this_00->_padding_ =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    *(int *)&this_00->_padding_ = 0;
    *(int *)((longlong)&this_00->_padding_ + 4) = 1;
    ((FMutex *)&this_00->_padding_)->State = (atomic<unsigned_char>)0x1;
    this_00->_padding_ =
         (longlong)
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    this_00->_padding_ = -0x17ffffffffffffe0;
    this_00->_padding_ = 0;
    *(ForElementType<UE::Tasks::Private::FTaskBase_*> *)&this_00->_padding_ =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    *(int *)&this_00->_padding_ = 0;
    *(int *)((longlong)&this_00->_padding_ + 4) = 1;
    *(undefined2 *)&this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
    if (pTVar4 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                ((FTaskBase *)this_00,pTVar4,false);
    }
    LOCK();
    pFVar1 = (FMutex *)&this_00->_padding_;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)&this_00->_padding_);
    }
    this_00->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
    pTVar25 = this_00;
  }
  uVar6 = param_1->field_0x1;
  uVar7 = param_1->field_0x2;
  uVar8 = param_1->field_0x3;
  uVar9 = param_1->field_0x4;
  uVar10 = param_1->field_0x5;
  uVar11 = param_1->field_0x6;
  uVar12 = param_1->field_0x7;
  TVar3 = *param_3;
  (pTVar25->TaskStorage).Pad[0] = param_1->field_0x0;
  (pTVar25->TaskStorage).Pad[1] = uVar6;
  (pTVar25->TaskStorage).Pad[2] = uVar7;
  (pTVar25->TaskStorage).Pad[3] = uVar8;
  (pTVar25->TaskStorage).Pad[4] = uVar9;
  (pTVar25->TaskStorage).Pad[5] = uVar10;
  (pTVar25->TaskStorage).Pad[6] = uVar11;
  (pTVar25->TaskStorage).Pad[7] = uVar12;
  uVar6 = param_1->field_0x29;
  uVar7 = param_1->field_0x2a;
  uVar8 = param_1->field_0x2b;
  uVar9 = param_1->field_0x2c;
  uVar10 = param_1->field_0x2d;
  uVar11 = param_1->field_0x2e;
  uVar12 = param_1->field_0x2f;
  (pTVar25->TaskStorage).Pad[0x28] = param_1->field_0x28;
  (pTVar25->TaskStorage).Pad[0x29] = uVar6;
  (pTVar25->TaskStorage).Pad[0x2a] = uVar7;
  (pTVar25->TaskStorage).Pad[0x2b] = uVar8;
  (pTVar25->TaskStorage).Pad[0x2c] = uVar9;
  (pTVar25->TaskStorage).Pad[0x2d] = uVar10;
  (pTVar25->TaskStorage).Pad[0x2e] = uVar11;
  (pTVar25->TaskStorage).Pad[0x2f] = uVar12;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar6 = param_1->field_0x11;
  uVar7 = param_1->field_0x12;
  uVar8 = param_1->field_0x13;
  uVar9 = param_1->field_0x14;
  uVar10 = param_1->field_0x15;
  uVar11 = param_1->field_0x16;
  uVar12 = param_1->field_0x17;
  uVar13 = param_1->field_0x18;
  uVar14 = param_1->field_0x19;
  uVar15 = param_1->field_0x1a;
  uVar16 = param_1->field_0x1b;
  uVar17 = param_1->field_0x1c;
  uVar18 = param_1->field_0x1d;
  uVar19 = param_1->field_0x1e;
  uVar20 = param_1->field_0x1f;
  (pTVar25->TaskStorage).Pad[0x10] = param_1->field_0x10;
  (pTVar25->TaskStorage).Pad[0x11] = uVar6;
  (pTVar25->TaskStorage).Pad[0x12] = uVar7;
  (pTVar25->TaskStorage).Pad[0x13] = uVar8;
  (pTVar25->TaskStorage).Pad[0x14] = uVar9;
  (pTVar25->TaskStorage).Pad[0x15] = uVar10;
  (pTVar25->TaskStorage).Pad[0x16] = uVar11;
  (pTVar25->TaskStorage).Pad[0x17] = uVar12;
  (pTVar25->TaskStorage).Pad[0x18] = uVar13;
  (pTVar25->TaskStorage).Pad[0x19] = uVar14;
  (pTVar25->TaskStorage).Pad[0x1a] = uVar15;
  (pTVar25->TaskStorage).Pad[0x1b] = uVar16;
  (pTVar25->TaskStorage).Pad[0x1c] = uVar17;
  (pTVar25->TaskStorage).Pad[0x1d] = uVar18;
  (pTVar25->TaskStorage).Pad[0x1e] = uVar19;
  (pTVar25->TaskStorage).Pad[0x1f] = uVar20;
  uVar6 = param_1->field_0x21;
  uVar7 = param_1->field_0x22;
  uVar8 = param_1->field_0x23;
  uVar9 = param_1->field_0x24;
  uVar10 = param_1->field_0x25;
  uVar11 = param_1->field_0x26;
  uVar12 = param_1->field_0x27;
  (pTVar25->TaskStorage).Pad[0x20] = param_1->field_0x20;
  (pTVar25->TaskStorage).Pad[0x21] = uVar6;
  (pTVar25->TaskStorage).Pad[0x22] = uVar7;
  (pTVar25->TaskStorage).Pad[0x23] = uVar8;
  (pTVar25->TaskStorage).Pad[0x24] = uVar9;
  (pTVar25->TaskStorage).Pad[0x25] = uVar10;
  (pTVar25->TaskStorage).Pad[0x26] = uVar11;
  (pTVar25->TaskStorage).Pad[0x27] = uVar12;
  if (*(longlong *)(pTVar25->TaskStorage).Pad != 0) {
    *(undefined8 *)param_1 = 0;
  }
  *(TFutureState<void> **)((pTVar25->TaskStorage).Pad + 0x30) = (param_2->State).Object;
  *(TReferenceControllerBase<1> **)((pTVar25->TaskStorage).Pad + 0x38) =
       (param_2->State).SharedReferenceCount.ReferenceController;
  (param_2->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->State).Object = (TFutureState<void> *)0x0;
  (pTVar25->TaskStorage).Pad[0x40] = param_2->bFutureRetrieved;
  *(Type *)((pTVar25->TaskStorage).Pad + 0x48) = TVar3;
  UE::Tasks::Private::TranslatePriority(TVar3,local_res18,local_res10);
  if (((pTVar25->_padding_ & 0x20U) == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCompleted()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                          ,0x1dd,L"State: %d"), bVar21)) {
    pcVar5 = (code *)swi(3);
    pTVar23 = (TGraphTask<TAsyncGraphTask<void>_> *)(*pcVar5)();
    return pTVar23;
  }
  (**(code **)(pTVar25->_padding_ + 0x18))(&pTVar25->_padding_,(FTask *)&pTVar25->_padding_);
  *(TGraphTask<TAsyncGraphTask<void>_> **)&pTVar25->_padding_ = pTVar25;
  pTVar25->_padding_ =
       (longlong)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  pTVar25->_padding_ = (longlong)pTVar25;
  pFVar24 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar24 == (FTask *)0x0) {
    if (local_res18[0] == Inherit) {
      local_res18[0] = Default;
    }
  }
  else {
    if (local_res18[0] == Inherit) {
      local_res18[0] = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar24->field_0x38 >> 0x3b);
    }
    pTVar23 = *(TGraphTask<TAsyncGraphTask<void>_> **)&pFVar24->field_0x30;
  }
  pTVar25->_padding_ = (longlong)pTVar23;
  pTVar25->_padding_ = ((longlong)(char)local_res18[0] << 0x35 | 0xff000001506141a8U) << 6;
  *(EExtendedTaskPriority *)((TEventCount<unsigned_int> *)&pTVar25->_padding_ + 1) = local_res10[0];
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pTVar25->_padding_);
  return pTVar25;
}

