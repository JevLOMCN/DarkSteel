// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ConstructAndHoldImpl<FOverlapDatum_*_&,int_&> @ 147744fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<_anonymous_namespace_::FAsyncTraceTask> * __thiscall
TGraphTask<`anonymous_namespace'::FAsyncTraceTask>::FConstructor::
ConstructAndHoldImpl<FOverlapDatum_*_&,int_&>
          (FConstructor *this,FOverlapDatum **param_1,int *param_2)

{
  int iVar1;
  FOverlapDatum *pFVar2;
  code *pcVar3;
  Type TVar4;
  Type TVar5;
  bool bVar6;
  TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *pTVar7;
  Type TVar8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [16];
  
  pTVar7 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  if (pTVar7 == (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)0x0) {
    pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pTVar7,this->Prerequisites);
    pTVar7->_padding_ = (longlong)&TGraphTask<FAsyncTraceTask>::_vftable_;
  }
  iVar1 = *param_2;
  pFVar2 = *param_1;
  if ((pFVar2 == (FOverlapDatum *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOverlapData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\WorldCollisionAsync.cpp"
                         ,0x15b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
    return pTVar7;
  }
  if ((iVar1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDataCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\WorldCollisionAsync.cpp"
                         ,0x15c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
    return pTVar7;
  }
  (pTVar7->TaskStorage).Pad[0] = '\0';
  (pTVar7->TaskStorage).Pad[1] = '\0';
  (pTVar7->TaskStorage).Pad[2] = '\0';
  (pTVar7->TaskStorage).Pad[3] = '\0';
  (pTVar7->TaskStorage).Pad[4] = '\0';
  (pTVar7->TaskStorage).Pad[5] = '\0';
  (pTVar7->TaskStorage).Pad[6] = '\0';
  (pTVar7->TaskStorage).Pad[7] = '\0';
  *(FOverlapDatum **)((pTVar7->TaskStorage).Pad + 8) = pFVar2;
  *(int *)((pTVar7->TaskStorage).Pad + 0x10) = iVar1;
  TVar8 = CPrio_FAsyncTraceTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar5 = CPrio_FAsyncTraceTask.TaskPriority;
  TVar4 = CPrio_FAsyncTraceTask.ThreadPriority;
  iVar1 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_FAsyncTraceTask.ThreadPriority == HighThreadPriority) ||
      (iVar1 = ENamedThreads::bHasBackgroundThreads,
      CPrio_FAsyncTraceTask.ThreadPriority == BackgroundThreadPriority)) && (iVar1 == 0)) {
    if (((CPrio_FAsyncTraceTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority) !=
         MainQueue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else {
    if ((((CPrio_FAsyncTraceTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_FAsyncTraceTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_FAsyncTraceTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
      return pTVar7;
    }
    TVar8 = TVar4 | TVar5;
  }
  UE::Tasks::Private::TranslatePriority(TVar8 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar7,L"GraphTask",local_res18[0],local_res10[0],None);
  return pTVar7;
}

// ConstructAndHoldImpl<FTraceDatum_*_&,int_&> @ 147745160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<_anonymous_namespace_::FAsyncTraceTask> * __thiscall
TGraphTask<`anonymous_namespace'::FAsyncTraceTask>::FConstructor::
ConstructAndHoldImpl<FTraceDatum_*_&,int_&>(FConstructor *this,FTraceDatum **param_1,int *param_2)

{
  int iVar1;
  FTraceDatum *pFVar2;
  code *pcVar3;
  Type TVar4;
  Type TVar5;
  bool bVar6;
  TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *pTVar7;
  Type TVar8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [16];
  
  pTVar7 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
  if (pTVar7 == (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)0x0) {
    pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pTVar7,this->Prerequisites);
    pTVar7->_padding_ = (longlong)&TGraphTask<FAsyncTraceTask>::_vftable_;
  }
  iVar1 = *param_2;
  pFVar2 = *param_1;
  if ((pFVar2 == (FTraceDatum *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTraceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\WorldCollisionAsync.cpp"
                         ,0x151,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
    return pTVar7;
  }
  if ((iVar1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDataCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\WorldCollisionAsync.cpp"
                         ,0x152,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
    return pTVar7;
  }
  *(FTraceDatum **)(pTVar7->TaskStorage).Pad = pFVar2;
  (pTVar7->TaskStorage).Pad[8] = '\0';
  (pTVar7->TaskStorage).Pad[9] = '\0';
  (pTVar7->TaskStorage).Pad[10] = '\0';
  (pTVar7->TaskStorage).Pad[0xb] = '\0';
  (pTVar7->TaskStorage).Pad[0xc] = '\0';
  (pTVar7->TaskStorage).Pad[0xd] = '\0';
  (pTVar7->TaskStorage).Pad[0xe] = '\0';
  (pTVar7->TaskStorage).Pad[0xf] = '\0';
  *(int *)((pTVar7->TaskStorage).Pad + 0x10) = iVar1;
  TVar8 = CPrio_FAsyncTraceTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar5 = CPrio_FAsyncTraceTask.TaskPriority;
  TVar4 = CPrio_FAsyncTraceTask.ThreadPriority;
  iVar1 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_FAsyncTraceTask.ThreadPriority == HighThreadPriority) ||
      (iVar1 = ENamedThreads::bHasBackgroundThreads,
      CPrio_FAsyncTraceTask.ThreadPriority == BackgroundThreadPriority)) && (iVar1 == 0)) {
    if (((CPrio_FAsyncTraceTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority) !=
         MainQueue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
      return pTVar7;
    }
  }
  else {
    if ((((CPrio_FAsyncTraceTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_FAsyncTraceTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_FAsyncTraceTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)(*pcVar3)();
      return pTVar7;
    }
    TVar8 = TVar4 | TVar5;
  }
  UE::Tasks::Private::TranslatePriority(TVar8 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar7,L"GraphTask",local_res18[0],local_res10[0],None);
  return pTVar7;
}

// ConstructAndHoldImpl<USkeletalMeshComponent_*> @ 14791e060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FParallelAnimationEvaluationTask> * __thiscall
TGraphTask<FParallelAnimationEvaluationTask>::FConstructor::
ConstructAndHoldImpl<USkeletalMeshComponent_*>(FConstructor *this,USkeletalMeshComponent **param_1)

{
  USkeletalMeshComponent *pUVar1;
  code *pcVar2;
  int iVar3;
  Type TVar4;
  Type TVar5;
  bool bVar6;
  TGraphTask<FParallelAnimationEvaluationTask> *pTVar7;
  Type TVar8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  FWeakObjectPtr local_res20;
  USkeletalMeshComponent *local_28 [2];
  
  pTVar7 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (pTVar7 == (TGraphTask<FParallelAnimationEvaluationTask> *)0x0) {
    pTVar7 = (TGraphTask<FParallelAnimationEvaluationTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pTVar7,this->Prerequisites);
    pTVar7->_padding_ = (longlong)&___7__TGraphTask_VFParallelAnimationEvaluationTask____6B_;
  }
  pUVar1 = *param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
  *(FWeakObjectPtr *)(pTVar7->TaskStorage).Pad = local_res20;
  TVar8 = CPrio_ParallelAnimationEvaluationTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar5 = CPrio_ParallelAnimationEvaluationTask.TaskPriority;
  TVar4 = CPrio_ParallelAnimationEvaluationTask.ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_ParallelAnimationEvaluationTask.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_ParallelAnimationEvaluationTask.ThreadPriority == BackgroundThreadPriority)) &&
     (iVar3 == 0)) {
    if (((CPrio_ParallelAnimationEvaluationTask.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TGraphTask<FParallelAnimationEvaluationTask> *)(*pcVar2)();
      return pTVar7;
    }
  }
  else {
    if ((((CPrio_ParallelAnimationEvaluationTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue
          || (CPrio_ParallelAnimationEvaluationTask.ThreadPriority & ThreadPriorityMask) ==
             ThreadPriorityMask) ||
        ((CPrio_ParallelAnimationEvaluationTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TGraphTask<FParallelAnimationEvaluationTask> *)(*pcVar2)();
      return pTVar7;
    }
    TVar8 = TVar4 | TVar5;
  }
  UE::Tasks::Private::TranslatePriority(TVar8 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar7,L"GraphTask",local_res18[0],local_res10[0],None);
  return pTVar7;
}

// ConstructAndDispatchWhenReady<FParticleSystemWorldManager_*,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&> @ 1481bd1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FParticleManagerAsyncTask>::FConstructor::
ConstructAndDispatchWhenReady<FParticleSystemWorldManager_*,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&>
          (FConstructor *this,FParticleSystemWorldManager **param_1,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  atomic<unsigned_int> aVar1;
  void *pvVar2;
  Type TVar3;
  FTaskBase *this_00;
  longlong *_Dst;
  void *in_R9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [16];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x110,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFParticleManagerAsyncTask____6B_;
  }
  this_00[1]._padding_ = *(longlong *)(param_2->AllocatorInstance).InlineData;
  this_00[1]._padding_ = 0;
  pvVar2 = *(void **)((longlong)in_R9 + 0x20);
  aVar1 = *(atomic<unsigned_int> *)((longlong)in_R9 + 0x28);
  this_00[1].RefCount = aVar1;
  if (pvVar2 != (void *)0x0) {
    in_R9 = pvVar2;
  }
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    this_00[1].NumLocks = (atomic<unsigned_int>)0x8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,(int)aVar1,0,(ForElementType<int> *)&this_00[1]._padding_,(int)aVar1,
               (int *)&this_00[1].NumLocks);
    _Dst = (longlong *)this_00[1]._padding_;
    if ((longlong *)this_00[1]._padding_ == (longlong *)0x0) {
      _Dst = &this_00[1]._padding_;
    }
    memcpy(_Dst,in_R9,(longlong)(int)aVar1 << 2);
  }
  TVar3 = FParticleManagerAsyncTask::GetDesiredThread((FParticleManagerAsyncTask *)(this_00 + 1));
  UE::Tasks::Private::TranslatePriority(TVar3,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  *param_1 = (FParticleSystemWorldManager *)this_00;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)*param_1,0x110);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ConstructAndHoldImpl<USkeletalMeshComponent_*> @ 1482d0fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FParallelBlendPhysicsTask> * __thiscall
TGraphTask<FParallelBlendPhysicsTask>::FConstructor::ConstructAndHoldImpl<USkeletalMeshComponent_*>
          (FConstructor *this,USkeletalMeshComponent **param_1)

{
  USkeletalMeshComponent *pUVar1;
  code *pcVar2;
  int iVar3;
  Type TVar4;
  Type TVar5;
  bool bVar6;
  TGraphTask<FParallelBlendPhysicsTask> *pTVar7;
  Type TVar8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  FWeakObjectPtr local_res20;
  USkeletalMeshComponent *local_28 [2];
  
  pTVar7 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (pTVar7 == (TGraphTask<FParallelBlendPhysicsTask> *)0x0) {
    pTVar7 = (TGraphTask<FParallelBlendPhysicsTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pTVar7,this->Prerequisites);
    pTVar7->_padding_ = (longlong)&___7__TGraphTask_VFParallelBlendPhysicsTask____6B_;
  }
  pUVar1 = *param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
  *(FWeakObjectPtr *)(pTVar7->TaskStorage).Pad = local_res20;
  TVar8 = CPrio_FParallelBlendPhysicsTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar5 = CPrio_FParallelBlendPhysicsTask.TaskPriority;
  TVar4 = CPrio_FParallelBlendPhysicsTask.ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_FParallelBlendPhysicsTask.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_FParallelBlendPhysicsTask.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0))
  {
    if (((CPrio_FParallelBlendPhysicsTask.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TGraphTask<FParallelBlendPhysicsTask> *)(*pcVar2)();
      return pTVar7;
    }
  }
  else {
    if ((((CPrio_FParallelBlendPhysicsTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_FParallelBlendPhysicsTask.ThreadPriority & ThreadPriorityMask) ==
          ThreadPriorityMask) ||
        ((CPrio_FParallelBlendPhysicsTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TGraphTask<FParallelBlendPhysicsTask> *)(*pcVar2)();
      return pTVar7;
    }
    TVar8 = TVar4 | TVar5;
  }
  UE::Tasks::Private::TranslatePriority(TVar8 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar7,L"GraphTask",local_res18[0],local_res10[0],None);
  return pTVar7;
}

// ConstructAndDispatchWhenReady<FTickTaskSequencer_&,enum_ETickingGroup_&> @ 1488a5dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask>::FConstructor::
ConstructAndDispatchWhenReady<FTickTaskSequencer_&,enum_ETickingGroup_&>
          (FConstructor *this,FTickTaskSequencer *param_1,ETickingGroup *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  Type TVar4;
  Type TVar5;
  bool bVar6;
  FTaskBase *this_00;
  TRefCountPtr<FBaseGraphTask> TVar7;
  Type TVar8;
  undefined4 *in_R9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ =
         (longlong)&___7__TGraphTask_VFDipatchTickGroupTask_FTickTaskSequencer____6B_;
  }
  uVar1 = *in_R9;
  this_00[1]._padding_ = (longlong)param_2;
  *(undefined4 *)&this_00[1]._padding_ = uVar1;
  TVar8 = CPrio_DispatchTaskPriority.TaskPriorityIfForcedToNormalThreadPriority;
  TVar5 = CPrio_DispatchTaskPriority.TaskPriority;
  TVar4 = CPrio_DispatchTaskPriority.ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_DispatchTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_DispatchTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0)) {
    if (((CPrio_DispatchTaskPriority.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority)
         != MainQueue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      TVar7.Reference = (FBaseGraphTask *)(*pcVar2)();
      return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    }
  }
  else {
    if ((((CPrio_DispatchTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_DispatchTaskPriority.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_DispatchTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      TVar7.Reference = (FBaseGraphTask *)(*pcVar2)();
      return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    }
    TVar8 = TVar4 | TVar5;
  }
  UE::Tasks::Private::TranslatePriority(TVar8 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  (param_1->TickBatches).AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch
            ((FTaskBase *)(param_1->TickBatches).AllocatorInstance.Data,0xe8);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ConstructAndDispatchWhenReady<FTickTaskSequencer_&,enum_ETickingGroup_&> @ 1488a5f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FTickTaskSequencer::FResetTickGroupTask>::FConstructor::
ConstructAndDispatchWhenReady<FTickTaskSequencer_&,enum_ETickingGroup_&>
          (FConstructor *this,FTickTaskSequencer *param_1,ETickingGroup *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  Type TVar4;
  Type TVar5;
  bool bVar6;
  FTaskBase *this_00;
  TRefCountPtr<FBaseGraphTask> TVar7;
  Type TVar8;
  undefined4 *in_R9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFResetTickGroupTask_FTickTaskSequencer____6B_;
  }
  uVar1 = *in_R9;
  this_00[1]._padding_ = (longlong)param_2;
  *(undefined4 *)&this_00[1]._padding_ = uVar1;
  TVar8 = CPrio_CleanupTaskPriority.TaskPriorityIfForcedToNormalThreadPriority;
  TVar5 = CPrio_CleanupTaskPriority.TaskPriority;
  TVar4 = CPrio_CleanupTaskPriority.ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_CleanupTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_CleanupTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0)) {
    if (((CPrio_CleanupTaskPriority.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority)
         != MainQueue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      TVar7.Reference = (FBaseGraphTask *)(*pcVar2)();
      return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    }
  }
  else {
    if ((((CPrio_CleanupTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_CleanupTaskPriority.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_CleanupTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      TVar7.Reference = (FBaseGraphTask *)(*pcVar2)();
      return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    }
    TVar8 = TVar4 | TVar5;
  }
  UE::Tasks::Private::TranslatePriority(TVar8 | AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  (param_1->TickBatches).AllocatorInstance.Data = (FScriptContainerElement *)this_00;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch
            ((FTaskBase *)(param_1->TickBatches).AllocatorInstance.Data,0xe8);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ConstructAndHold<FTickBatchInfo_*_&,FTickContext_*> @ 1488a60c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FBatchTickFunctionTask> * __thiscall
TGraphTask<FBatchTickFunctionTask>::FConstructor::
ConstructAndHold<FTickBatchInfo_*_&,FTickContext_*>
          (FConstructor *this,FTickBatchInfo **param_1,FTickContext **param_2)

{
  FTickContext *pFVar1;
  FTickBatchInfo *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  TEnumAsByte<ETickingGroup> TVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  TGraphTask<FBatchTickFunctionTask> *pTVar12;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [16];
  
  pTVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf8,8);
  if (pTVar12 == (TGraphTask<FBatchTickFunctionTask> *)0x0) {
    pTVar12 = (TGraphTask<FBatchTickFunctionTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pTVar12,this->Prerequisites);
    pTVar12->_padding_ = (longlong)&___7__TGraphTask_VFBatchTickFunctionTask____6B_;
  }
  pFVar1 = *param_2;
  pFVar2 = *param_1;
  *(FTickBatchInfo **)(pTVar12->TaskStorage).Pad = pFVar2;
  uVar4 = *(undefined8 *)&pFVar1->DeltaSeconds;
  *(UWorld **)((pTVar12->TaskStorage).Pad + 8) = pFVar1->World;
  *(undefined8 *)((pTVar12->TaskStorage).Pad + 0x10) = uVar4;
  TVar5.Value = (pFVar1->TickGroup).Value;
  bVar11 = pFVar1->bLogTick;
  bVar6 = pFVar1->bLogTicksShowPrerequistes;
  uVar7 = pFVar1->field_0x14;
  uVar8 = pFVar1->field_0x15;
  uVar9 = pFVar1->field_0x16;
  uVar10 = pFVar1->field_0x17;
  (pTVar12->TaskStorage).Pad[0x18] = (pFVar1->TickType).Value;
  (pTVar12->TaskStorage).Pad[0x19] = TVar5.Value;
  (pTVar12->TaskStorage).Pad[0x1a] = bVar11;
  (pTVar12->TaskStorage).Pad[0x1b] = bVar6;
  (pTVar12->TaskStorage).Pad[0x1c] = uVar7;
  (pTVar12->TaskStorage).Pad[0x1d] = uVar8;
  (pTVar12->TaskStorage).Pad[0x1e] = uVar9;
  (pTVar12->TaskStorage).Pad[0x1f] = uVar10;
  if (pFVar2 == (FTickBatchInfo *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TickBatch",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                        ,0x187,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TGraphTask<FBatchTickFunctionTask> *)(*pcVar3)();
      return pTVar12;
    }
  }
  UE::Tasks::Private::TranslatePriority
            (*(Type *)((pTVar12->TaskStorage).Pad + 0x14),local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar12,L"GraphTask",local_res18[0],local_res10[0],None);
  TaskTrace::Created(pTVar12->_padding_,0xf8);
  return pTVar12;
}

