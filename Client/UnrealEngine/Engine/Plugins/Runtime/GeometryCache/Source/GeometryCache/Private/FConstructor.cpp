// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// ConstructAndHoldImpl<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&> @ 14ca00e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
* __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
::FConstructor::
ConstructAndHoldImpl<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
          (FConstructor *this,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1,
          FRenderCommandTag *param_2)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  code *pcVar4;
  undefined1 uVar5;
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
  bool bVar20;
  TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
  *this_00;
  atomic<unsigned___int64> aVar21;
  TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
  *pTVar22;
  FTask *pFVar23;
  TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
  *pTVar24;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
  pTVar22 = (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
             *)0x0;
  pTVar24 = pTVar22;
  if (this_00 !=
      (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
       *)0x0) {
    pTVar3 = this->Prerequisites;
    this_00->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    *(atomic<unsigned_int> *)&this_00->_padding_ = (atomic<unsigned_int>)0x1;
    ((atomic<unsigned_int> *)&this_00->_padding_)[1] = (atomic<unsigned_int>)0x1;
    ((TEventCount<unsigned_int> *)&this_00->_padding_)->Count = (atomic<unsigned_int>)0x0;
    *(atomic<bool> *)((longlong)((TEventCount<unsigned_int> *)&this_00->_padding_ + 1) + 1) =
         (atomic<bool>)0x0;
    *(atomic<unsigned_int> *)&this_00->_padding_ = (atomic<unsigned_int>)0xffffffff;
    this_00->_padding_ = 0;
    aVar21 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    *(atomic<unsigned___int64> *)&this_00->_padding_ = aVar21;
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
    if (pTVar3 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                ((FTaskBase *)this_00,pTVar3,false);
    }
    LOCK();
    pFVar1 = (FMutex *)&this_00->_padding_;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)&this_00->_padding_);
    }
    this_00->_padding_ =
         (longlong)
         &
         ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
    ;
    pTVar24 = this_00;
  }
  *(FRenderCommandTag **)(pTVar24->TaskStorage).Pad = param_2;
  uVar5 = param_1->field_0x1;
  uVar6 = param_1->field_0x2;
  uVar7 = param_1->field_0x3;
  uVar8 = param_1->field_0x4;
  uVar9 = param_1->field_0x5;
  uVar10 = param_1->field_0x6;
  uVar11 = param_1->field_0x7;
  (pTVar24->TaskStorage).Pad[0x10] = param_1->field_0x0;
  (pTVar24->TaskStorage).Pad[0x11] = uVar5;
  (pTVar24->TaskStorage).Pad[0x12] = uVar6;
  (pTVar24->TaskStorage).Pad[0x13] = uVar7;
  (pTVar24->TaskStorage).Pad[0x14] = uVar8;
  (pTVar24->TaskStorage).Pad[0x15] = uVar9;
  (pTVar24->TaskStorage).Pad[0x16] = uVar10;
  (pTVar24->TaskStorage).Pad[0x17] = uVar11;
  uVar5 = param_1->field_0x29;
  uVar6 = param_1->field_0x2a;
  uVar7 = param_1->field_0x2b;
  uVar8 = param_1->field_0x2c;
  uVar9 = param_1->field_0x2d;
  uVar10 = param_1->field_0x2e;
  uVar11 = param_1->field_0x2f;
  (pTVar24->TaskStorage).Pad[0x38] = param_1->field_0x28;
  (pTVar24->TaskStorage).Pad[0x39] = uVar5;
  (pTVar24->TaskStorage).Pad[0x3a] = uVar6;
  (pTVar24->TaskStorage).Pad[0x3b] = uVar7;
  (pTVar24->TaskStorage).Pad[0x3c] = uVar8;
  (pTVar24->TaskStorage).Pad[0x3d] = uVar9;
  (pTVar24->TaskStorage).Pad[0x3e] = uVar10;
  (pTVar24->TaskStorage).Pad[0x3f] = uVar11;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar5 = param_1->field_0x11;
  uVar6 = param_1->field_0x12;
  uVar7 = param_1->field_0x13;
  uVar8 = param_1->field_0x14;
  uVar9 = param_1->field_0x15;
  uVar10 = param_1->field_0x16;
  uVar11 = param_1->field_0x17;
  uVar12 = param_1->field_0x18;
  uVar13 = param_1->field_0x19;
  uVar14 = param_1->field_0x1a;
  uVar15 = param_1->field_0x1b;
  uVar16 = param_1->field_0x1c;
  uVar17 = param_1->field_0x1d;
  uVar18 = param_1->field_0x1e;
  uVar19 = param_1->field_0x1f;
  (pTVar24->TaskStorage).Pad[0x20] = param_1->field_0x10;
  (pTVar24->TaskStorage).Pad[0x21] = uVar5;
  (pTVar24->TaskStorage).Pad[0x22] = uVar6;
  (pTVar24->TaskStorage).Pad[0x23] = uVar7;
  (pTVar24->TaskStorage).Pad[0x24] = uVar8;
  (pTVar24->TaskStorage).Pad[0x25] = uVar9;
  (pTVar24->TaskStorage).Pad[0x26] = uVar10;
  (pTVar24->TaskStorage).Pad[0x27] = uVar11;
  (pTVar24->TaskStorage).Pad[0x28] = uVar12;
  (pTVar24->TaskStorage).Pad[0x29] = uVar13;
  (pTVar24->TaskStorage).Pad[0x2a] = uVar14;
  (pTVar24->TaskStorage).Pad[0x2b] = uVar15;
  (pTVar24->TaskStorage).Pad[0x2c] = uVar16;
  (pTVar24->TaskStorage).Pad[0x2d] = uVar17;
  (pTVar24->TaskStorage).Pad[0x2e] = uVar18;
  (pTVar24->TaskStorage).Pad[0x2f] = uVar19;
  uVar5 = param_1->field_0x21;
  uVar6 = param_1->field_0x22;
  uVar7 = param_1->field_0x23;
  uVar8 = param_1->field_0x24;
  uVar9 = param_1->field_0x25;
  uVar10 = param_1->field_0x26;
  uVar11 = param_1->field_0x27;
  (pTVar24->TaskStorage).Pad[0x30] = param_1->field_0x20;
  (pTVar24->TaskStorage).Pad[0x31] = uVar5;
  (pTVar24->TaskStorage).Pad[0x32] = uVar6;
  (pTVar24->TaskStorage).Pad[0x33] = uVar7;
  (pTVar24->TaskStorage).Pad[0x34] = uVar8;
  (pTVar24->TaskStorage).Pad[0x35] = uVar9;
  (pTVar24->TaskStorage).Pad[0x36] = uVar10;
  (pTVar24->TaskStorage).Pad[0x37] = uVar11;
  if (*(longlong *)((pTVar24->TaskStorage).Pad + 0x10) != 0) {
    *(undefined8 *)param_1 = 0;
  }
  if (((GIsThreadedRendering != false) &&
      (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                          ,0x21d,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    pTVar22 = (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
               *)(*pcVar4)();
    return pTVar22;
  }
  UE::Tasks::Private::TranslatePriority
            ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,local_res10);
  if (((pTVar24->_padding_ & 0x20U) == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCompleted()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                          ,0x1dd,L"State: %d"), bVar20)) {
    pcVar4 = (code *)swi(3);
    pTVar22 = (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
               *)(*pcVar4)();
    return pTVar22;
  }
  (**(code **)(pTVar24->_padding_ + 0x18))(&pTVar24->_padding_,(FTask *)&pTVar24->_padding_);
  *(TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
    **)&pTVar24->_padding_ = pTVar24;
  pTVar24->_padding_ =
       (longlong)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  pTVar24->_padding_ = (longlong)pTVar24;
  pFVar23 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar23 == (FTask *)0x0) {
    if (local_res18[0] == Inherit) {
      local_res18[0] = Default;
    }
  }
  else {
    if (local_res18[0] == Inherit) {
      local_res18[0] = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar23->field_0x38 >> 0x3b);
    }
    pTVar22 = *(TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
                **)&pFVar23->field_0x30;
  }
  pTVar24->_padding_ = (longlong)pTVar22;
  pTVar24->_padding_ = ((longlong)(char)local_res18[0] << 0x35 | 0xff000001506141a8U) << 6;
  *(EExtendedTaskPriority *)((TEventCount<unsigned_int> *)&pTVar24->_padding_ + 1) = local_res10[0];
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pTVar24->_padding_);
  return pTVar24;
}

