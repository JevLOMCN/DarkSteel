// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// ConstructAndDispatchWhenReady<FPakAsyncReadFileHandle_&,FCachedAsyncBlock_*> @ 142a3cbc0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FAsyncIOCPUWorkTask>::FConstructor::
ConstructAndDispatchWhenReady<FPakAsyncReadFileHandle_&,FCachedAsyncBlock_*>
          (FConstructor *this,FPakAsyncReadFileHandle *param_1,FCachedAsyncBlock **param_2)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  Type TVar4;
  bool bVar5;
  FTaskBase *this_00;
  TRefCountPtr<FBaseGraphTask> TVar6;
  Type TVar7;
  longlong *in_R9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFAsyncIOCPUWorkTask____6B_;
  }
  this_00[1]._padding_ = *in_R9;
  this_00[1]._padding_ = (longlong)param_2;
  TVar7 = CPrio_AsyncIOCPUWorkTaskPriority.TaskPriorityIfForcedToNormalThreadPriority;
  TVar4 = CPrio_AsyncIOCPUWorkTaskPriority.TaskPriority;
  TVar3 = CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0))
  {
    if (((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar1)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
  }
  else {
    if ((((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ThreadPriorityMask) ==
          ThreadPriorityMask) ||
        ((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar1)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
    TVar7 = TVar3 | TVar4;
  }
  UE::Tasks::Private::TranslatePriority(TVar7 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  param_1->_padding_ = (longlong)this_00;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)param_1->_padding_,0xe8);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ConstructAndDispatchWhenReady<bool_&,IAsyncReadRequest_*_&,int_&> @ 142a3cd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FAsyncIOSignatureCheckTask>::FConstructor::
ConstructAndDispatchWhenReady<bool_&,IAsyncReadRequest_*_&,int_&>
          (FConstructor *this,bool *param_1,IAsyncReadRequest **param_2,int *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  Type TVar5;
  Type TVar6;
  bool bVar7;
  FTaskBase *this_00;
  TRefCountPtr<FBaseGraphTask> TVar8;
  Type TVar9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  undefined4 *in_stack_00000028;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFAsyncIOSignatureCheckTask____6B_;
  }
  lVar2 = *(longlong *)param_3;
  uVar1 = *in_stack_00000028;
  *(undefined1 *)&this_00[1]._padding_ = *(undefined1 *)param_2;
  this_00[1]._padding_ = lVar2;
  *(undefined4 *)&this_00[1]._padding_ = uVar1;
  TVar9 = CPrio_AsyncIOCPUWorkTaskPriority.TaskPriorityIfForcedToNormalThreadPriority;
  TVar6 = CPrio_AsyncIOCPUWorkTaskPriority.TaskPriority;
  TVar5 = CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority;
  iVar4 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar4 = ENamedThreads::bHasBackgroundThreads,
      CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar4 == 0))
  {
    if (((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
    }
  }
  else {
    if ((((CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_AsyncIOCPUWorkTaskPriority.ThreadPriority & ThreadPriorityMask) ==
          ThreadPriorityMask) ||
        ((CPrio_AsyncIOCPUWorkTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
    }
    TVar9 = TVar5 | TVar6;
  }
  UE::Tasks::Private::TranslatePriority(TVar9 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  *(FTaskBase **)param_1 = this_00;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)param_1,0xf0);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

