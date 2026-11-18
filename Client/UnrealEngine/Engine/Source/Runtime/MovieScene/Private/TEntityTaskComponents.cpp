// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// Dispatch<UE::MovieScene::FGatherTimes,UE::MovieScene::FInstanceRegistry_*,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*> @ 146104d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::TEntityTaskComponents<>::
Dispatch<UE::MovieScene::FGatherTimes,UE::MovieScene::FInstanceRegistry_*,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
          (TEntityTaskComponents<> *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,FInstanceRegistry **param_4,
          TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          **param_5)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  FTaskBase *pFVar6;
  FTaskBase *this_01;
  longlong *in_stack_00000038;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FComponentTypeID local_a4;
  FComponentTypeID local_a2;
  FTaskBase *local_a0;
  FGatherTimes local_98;
  initializer_list<UE::MovieScene::FComponentTypeID> local_88;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a0 = (FTaskBase *)this;
  if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
    if (param_2[5].Prereqs.AllocatorInstance.InlineData[0x28] != '\0') {
      local_a4.Value = 0xffff;
      local_88._First = &local_a4;
      local_4c = 4;
      local_88._Last = &local_a2;
      this_01 = (FTaskBase *)0x0;
      local_58 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_50 = 0;
      FSystemTaskPrerequisites::FilterByComponent
                ((FSystemTaskPrerequisites *)param_3,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&stack0xffffffffffffff88,&local_88);
      pFVar6 = (FTaskBase *)&stack0xffffffffffffff88;
      if (local_50 == 0) {
        pFVar6 = this_01;
      }
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x108,8);
      if (this_00 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)pFVar6);
        this_00->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_U__TUnstructuredTask_UFGatherTimes_MovieScene_UE___MovieScene_UE____6B_
        ;
        this_01 = this_00;
      }
      this_01[1]._padding_ = (longlong)*param_5;
      this_01[1]._padding_ = *in_stack_00000038;
      lVar2 = local_a0->_padding_;
      this_01[1]._padding_ = local_a0->_padding_;
      this_01[1]._padding_ = lVar2;
      lVar2 = local_a0->_padding_;
      this_01[1]._padding_ = local_a0->_padding_;
      this_01[1]._padding_ = lVar2;
      Tasks::Private::TranslatePriority((Type)this_01[1]._padding_,local_a7,&local_a8);
      Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_a7[0],local_a8,None);
      if (this_01 != (FTaskBase *)0x0) {
        LOCK();
        this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
        UNLOCK();
      }
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x108);
      if (param_4 != (FInstanceRegistry **)0x0) {
        if (this_01 != (FTaskBase *)0x0) {
          LOCK();
          this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
          UNLOCK();
        }
        local_a0 = this_01;
        FSystemSubsequentTasks::AddRootTask
                  ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_a0);
      }
      param_1->_padding_ = (longlong)this_01;
      FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&stack0xffffffffffffff88;
      if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar5 = local_58;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar5,local_50);
      if (local_58 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
      FMemory::Free((void *)local_58);
      return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
    }
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2331281323118821058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                       ,0x13e,"EntityManager->IsLockedDown()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FBaseGraphTask *)(*pcVar1)();
      return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
    }
  }
  local_98.InstanceRegistry = (FInstanceRegistry *)*param_5;
  local_98.EvaluatedTimes =
       (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
        *)*in_stack_00000038;
  FGatherTimes::Run(&local_98);
  param_1->_padding_ = 0;
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*> @ 146104f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
::
Dispatch_PerAllocation<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEvaluationHookSystem **param_4,
          FInstanceRegistry **param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  FTaskBase *pFVar6;
  FTaskBase *this_02;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_278 [32];
  EExtendedTaskPriority local_248;
  ETaskPriority local_247 [3];
  FComponentTypeID local_244;
  FComponentTypeID local_242;
  FComponentTypeID local_240;
  FComponentTypeID local_23e;
  FComponentTypeID local_23c;
  FComponentTypeID local_23a;
  FComponentTypeID local_238;
  FComponentTypeID local_236;
  FComponentTypeID local_234;
  FComponentTypeID local_232;
  FTaskBase *local_230;
  FTaskBase *local_228;
  FEvaluationHookUpdater local_220;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x2 == -1 ||
       (*(short *)&this->field_0x6 == -1 || *(short *)&this->field_0x4 == -1))) ||
     (bVar3 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                            *)this,(FEntityManager *)param_2), !bVar3)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      if (param_2[5].Prereqs.AllocatorInstance.InlineData[0x28] != '\0') {
        local_208._First = &local_244;
        local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_208._Last = &local_242;
        local_1b8._40_4_ = 0;
        local_1b8._44_4_ = 4;
        local_244.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_208);
        if ((*(short *)this == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_240.Value = *(ushort *)this;
        local_1f8._First = &local_240;
        local_1f8._Last = &local_23e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1f8);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_23c.Value = *(ushort *)&this->field_0x2;
        local_1e8._First = &local_23c;
        local_1e8._Last = &local_23a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1e8);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_238.Value = *(ushort *)&this->field_0x4;
        local_1d8._First = &local_238;
        local_1d8._Last = &local_236;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1d8);
        if ((*(short *)&this->field_0x6 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar4.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
        }
        local_234.Value = *(ushort *)&this->field_0x6;
        local_1c8._First = &local_234;
        local_1c8._Last = &local_232;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1c8);
        pFVar6 = (FTaskBase *)local_1b8;
        if (local_1b8._40_4_ == 0) {
          pFVar6 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x210,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar6);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_UFEvaluationHookUpdater_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneEvaluationHookComponent___23_U__TReadAccess_UFFrameTime___23_U__TWriteAccess_UFEvaluationHookFlags_MovieScene_UE___23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        uVar1 = *in_stack_00000038;
        this_02[2].TraceId = (atomic<unsigned___int64>)*param_5;
        *(undefined8 *)this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData = uVar1;
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_247,&local_248);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_247[0],local_248,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x210);
        if (param_4 != (UMovieSceneEvaluationHookSystem **)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_230 = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_230);
          if ((*(short *)&this->field_0x6 == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1f5,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            TVar4.Reference = (FBaseGraphTask *)(*pcVar2)();
            return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
          }
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_228 = this_02;
          FSystemSubsequentTasks::AddComponentTask
                    ((FSystemSubsequentTasks *)param_4,(FComponentTypeID)*(ushort *)&this->field_0x6
                     ,(FBaseGraphTask *)&local_228);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar5,local_1b8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1b8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820987>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x185,"EntityManager->IsLockedDown()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Reference = (FBaseGraphTask *)(*pcVar2)();
        return (TRefCountPtr<FBaseGraphTask>)TVar4.Reference;
      }
    }
    local_220.HookSystem = (UMovieSceneEvaluationHookSystem *)*param_5;
    local_220.InstanceRegistry = (FInstanceRegistry *)*in_stack_00000038;
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                          *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
    ::Run(this_00,&local_220);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ScheduleImpl<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*> @ 146117000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
::
ScheduleImpl<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UMovieSceneEvaluationHookSystem **param_5,FInstanceRegistry **param_6)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar6;
  bool bVar7;
  int iVar8;
  FTaskID FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar11;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar12;
  longlong *in_stack_00000040;
  undefined1 auStackY_268 [32];
  FComponentTypeID local_218;
  FComponentTypeID local_216;
  FComponentTypeID local_214;
  FComponentTypeID local_212;
  FComponentTypeID local_210;
  FComponentTypeID local_20e;
  FComponentTypeID local_20c;
  FComponentTypeID local_20a;
  FTaskID local_208;
  FTaskID local_204;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
  *local_1f8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1f0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  code *local_198;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
  **local_190;
  undefined1 local_188 [16];
  code *local_178;
  uchar local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  TBitArray<TFixedAllocator<12>_> local_110;
  FComponentMask local_d8;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1f0 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x2 == -1 ||
       (*(short *)&this->field_0x6 == -1 || *(short *)&this->field_0x4 == -1))) ||
     (bVar7 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                            *)this,(FEntityManager *)param_2), !bVar7)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_1461175f1;
  }
  pTVar10 = ::operator_new(0x50);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar12 = pTVar10 + 1;
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluationHookUpdater_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneEvaluationHookComponent___23_U__TReadAccess_UFFrameTime___23_U__TWriteAccess_UFEvaluationHookFlags_MovieScene_UE___23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFEvaluationHookUpdater_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFMovieSceneEvaluationHookComponent___23_U__TReadAccess_UFFrameTime___23_U__TWriteAccess_UFEvaluationHookFlags_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    lVar3 = *in_stack_00000040;
    *(FInstanceRegistry **)&pTVar10[1].SharedReferenceCount = *param_6;
    pTVar10[2]._padding_ = lVar3;
    uVar5 = *(undefined4 *)&this->field_0x4;
    lVar3 = *(longlong *)&this->field_0x8;
    pTVar10[2].SharedReferenceCount = (atomic<int>)*(undefined4 *)&this->field_0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)uVar5;
    pTVar10[3]._padding_ = lVar3;
    uVar5 = *(undefined4 *)&this->field_0x14;
    lVar3 = *(longlong *)&this->field_0x18;
    pTVar10[3].SharedReferenceCount = (atomic<int>)*(undefined4 *)&this->field_0x10;
    pTVar10[3].WeakReferenceCount = (atomic<int>)uVar5;
    pTVar10[4]._padding_ = lVar3;
    uVar5 = *(undefined4 *)&this->field_0x24;
    pTVar10[4].SharedReferenceCount = (atomic<int>)*(undefined4 *)&this->field_0x20;
    pTVar10[4].WeakReferenceCount = (atomic<int>)uVar5;
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return (FTaskID)iVar8;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  uVar2 = *(ushort *)this;
  local_148.MaxBits = 0x180;
  local_148.NumBits = 0;
  local_110.NumBits = 0;
  local_110.MaxBits = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x2;
  iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x4;
  iVar8 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar8);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x6;
  iVar8 = ((uint)uVar2 - local_110.NumBits) + 1;
  if (0 < iVar8) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,iVar8);
  }
  if ((local_110.NumBits <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  pTVar1 = local_110.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  local_d8.Bits.NumBits = 0;
  local_d8.Bits.MaxBits = 0x180;
  local_70 = 0;
  local_6c = 0x180;
  local_68 = (void *)0x0;
  local_60 = 0;
  if ((*(short *)this == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_218.Value = *(ushort *)this;
  local_1d8._First = &local_218;
  local_1d8._Last = &local_216;
  FComponentMask::SetAll(&local_d8,&local_1d8);
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_214.Value = *(ushort *)&this->field_0x2;
  local_1c8._First = &local_214;
  local_1c8._Last = &local_212;
  FComponentMask::SetAll(&local_d8,&local_1c8);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_210.Value = *(ushort *)&this->field_0x4;
  local_1b8._First = &local_210;
  local_1b8._Last = &local_20e;
  FComponentMask::SetAll(&local_d8,&local_1b8);
  if ((*(short *)&this->field_0x6 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_20c.Value = *(ushort *)&this->field_0x6;
  local_1a8._First = &local_20c;
  local_1a8._Last = &local_20a;
  FComponentMask::SetAll(&local_d8,&local_1a8);
  local_190 = &local_1f8;
  local_198 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>::ScheduleImpl<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1f8 = this;
  pTVar11 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1f0);
  pTVar6 = local_1e8;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188._0_8_ = pTVar12;
  local_188._8_8_ = pTVar10;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_208,local_1e8,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_188,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar11,(FEntityComponentFilter *)&local_198,&local_d8,(FComponentMask *)&local_148)
  ;
  if (local_208.Index == -1) {
    if (((ulonglong)pTVar6[1].Object & 4) != 0) {
      FVar9 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_208.Index = *(int *)CONCAT44(extraout_var,FVar9.Index);
      if (local_208.Index != -1) goto LAB_14611755a;
    }
  }
  else {
LAB_14611755a:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_208,(FTaskID)0xffffffff);
    local_170 = '\0';
    local_178 = `UE::MovieScene::
                SchedulePostTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>,UE::MovieScene::FEvaluationHookUpdater>'
                ::__l2::FCallPostTask::Run;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_168._0_8_ = pTVar12;
    local_168._8_8_ = pTVar10;
    IEntitySystemScheduler::AddTask
              ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_204,pTVar6,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_168);
    IEntitySystemScheduler::AddChildBack((IEntitySystemScheduler *)param_3,local_208,local_204);
  }
  *(int *)&param_1->_padding_ = local_208.Index;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_1461175f1:
  return (FTaskID)(int)param_1;
}

// FilterAny @ 146130940

TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
::FilterAny(TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *this_00;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar2 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)__return_storage_ptr__,&__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x2,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x4,
                      &__return_storage_ptr__->Filter);
  if ((longlong)param_1->_Last - (longlong)param_1->_First >> 1 != 0) {
    iVar3 = (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum;
    piVar1 = &(__return_storage_ptr__->Filter).ComplexMasks.ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance,
                         piVar1);
    }
    local_18._First = param_1->_First;
    local_18._Last = param_1->_Last;
    (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = iVar3 + 1;
    this_00 = (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data +
              (longlong)iVar3 * 0x3c;
    *(int *)&this_00[0x30].field_0x0 = 0;
    *(int *)&this_00[0x34].field_0x0 = 0x180;
    (((TBitArray<TFixedAllocator<12>_> *)&this_00[0x38].field_0x0)->AllocatorInstance).InlineData[0]
    .Pad[0] = '\x02';
    FComponentMask::SetAll((FComponentMask *)this_00,&local_18);
  }
  return __return_storage_ptr__;
}

// FilterAny @ 146130a70

TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
::FilterAny(TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
            *this,TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
                  *__return_storage_ptr__,
           initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *this_00;
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  uVar2 = *(undefined8 *)&this->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Components = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x10 = *(undefined8 *)&this->field_0x10
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x18 = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  (__return_storage_ptr__->DynamicReadMask).Bits.NumBits = 0;
  (__return_storage_ptr__->DynamicReadMask).Bits.MaxBits = 0x180;
  (__return_storage_ptr__->DynamicWriteMask).Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).AllMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).NoneMask.Bits.NumBits = 0;
  (__return_storage_ptr__->Filter).NoneMask.Bits.MaxBits = 0x180;
  (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = 0;
  (__return_storage_ptr__->Filter).ComplexMasks.ArrayMax = 0;
  (__return_storage_ptr__->DynamicWriteMask).Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x2,
                      &__return_storage_ptr__->Filter);
  if ((longlong)param_1->_Last - (longlong)param_1->_First >> 1 != 0) {
    iVar3 = (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum;
    piVar1 = &(__return_storage_ptr__->Filter).ComplexMasks.ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance,
                         piVar1);
    }
    local_18._First = param_1->_First;
    local_18._Last = param_1->_Last;
    (__return_storage_ptr__->Filter).ComplexMasks.ArrayNum = iVar3 + 1;
    this_00 = (__return_storage_ptr__->Filter).ComplexMasks.AllocatorInstance.Data +
              (longlong)iVar3 * 0x3c;
    *(int *)&this_00[0x30].field_0x0 = 0;
    *(int *)&this_00[0x34].field_0x0 = 0x180;
    (((TBitArray<TFixedAllocator<12>_> *)&this_00[0x38].field_0x0)->AllocatorInstance).InlineData[0]
    .Pad[0] = '\x02';
    FComponentMask::SetAll((FComponentMask *)this_00,&local_18);
  }
  return __return_storage_ptr__;
}

// operator() @ 14629d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>::
ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleStringTask>'::__l2::<lambda_1>
::operator()(void *this,FEntityAllocationProxy *param_1,
            TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FComponentAccess *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  FEntityAllocationProxy local_28;
  
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar8 = *piVar1;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,2);
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,pFVar6,(TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar8 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00 + 1,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  return;
}

// operator() @ 14629d930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>::
ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleTask>'::__l2::<lambda_1>::
operator()(void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FComponentAccess *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  FEntityAllocationProxy local_28;
  
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar8 = *piVar1;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,2);
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,pFVar6,(TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar8 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00 + 1,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  return;
}

// operator() @ 14629da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>::
ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatStringTask>'::__l2::<lambda_1>::
operator()(void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FComponentAccess *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  FEntityAllocationProxy local_28;
  
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar8 = *piVar1;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,2);
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,pFVar6,(TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar8 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00 + 1,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  return;
}

// operator() @ 14629dbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>::
ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatTask>'::__l2::<lambda_1>::
operator()(void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FComponentAccess *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  FEntityAllocationProxy local_28;
  
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar8 = *piVar1;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,2);
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,pFVar6,(TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar8 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00 + 1,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  return;
}

// operator() @ 14629dd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>::
ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FIntTask,TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>_*>'
::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uint uVar8;
  uint uVar9;
  FEntityAllocationProxy local_28;
  
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  lVar2 = *(longlong *)this;
  piVar1 = &param_2->ArrayNum;
  uVar9 = *piVar1;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4,2);
  uVar8 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar7 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  TRelativePtr<void,unsigned_int>::Reset
            ((TRelativePtr<void,unsigned_int> *)(pFVar3 + (longlong)(int)uVar9 * 4),pFVar7,
             pFVar7->EntityIDs);
  uVar9 = uVar9 + 1;
  uVar8 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar7 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            ((FComponentAccess *)(lVar2 + 2),pFVar7,
             (TRelativePtr<void,unsigned_int> *)(pFVar3 + (longlong)(int)uVar9 * 4));
  return;
}

