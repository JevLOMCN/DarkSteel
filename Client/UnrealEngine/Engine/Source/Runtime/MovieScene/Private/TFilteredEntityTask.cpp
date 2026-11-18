// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// Dispatch_PerEntity<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*> @ 146105380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
::
Dispatch_PerEntity<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          **param_4)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  FTaskBase *pFVar5;
  FTaskBase *this_02;
  atomic<unsigned___int64> *in_stack_00000030;
  undefined1 auStackY_248 [32];
  EExtendedTaskPriority local_218;
  ETaskPriority local_217 [3];
  FComponentTypeID local_214;
  FComponentTypeID local_212;
  FComponentTypeID local_210;
  FComponentTypeID local_20e;
  FComponentTypeID local_20c;
  FComponentTypeID local_20a;
  FAssignEvalSecondsTask local_208;
  FTaskBase *local_200;
  FTaskBase *local_1f8 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (*(short *)&this->Components == -1 || *(short *)&(this->Components).field_0x2 == -1) {
    param_1->_padding_ = 0;
  }
  else {
    bVar2 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
            ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                          *)this,(FEntityManager *)param_2);
    if (bVar2) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        if (param_2[5].Prereqs.AllocatorInstance.InlineData[0x28] != '\0') {
          local_1e8._First = &local_214;
          local_1b8._44_4_ = 4;
          local_1e8._Last = &local_212;
          local_214.Value = 0xffff;
          this_02 = (FTaskBase *)0x0;
          local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_1b8._40_4_ = 0;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1e8);
          if ((*(short *)&this->Components == -1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
            return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
          }
          local_210.Value = *(ushort *)&this->Components;
          local_1d8._First = &local_210;
          local_1d8._Last = &local_20e;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1d8);
          if ((*(short *)&(this->Components).field_0x2 == -1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
            return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
          }
          local_20c.Value = *(ushort *)&(this->Components).field_0x2;
          local_1c8._First = &local_20c;
          local_1c8._Last = &local_20a;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1c8);
          pFVar5 = (FTaskBase *)local_1b8;
          if (local_1b8._40_4_ == 0) {
            pFVar5 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x208,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar5);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityTask_UFAssignEvalSecondsTask_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TWriteAccess_N_23__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
          ::
          TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                    ((TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          this_02[2].TraceId = *in_stack_00000030;
          Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_217,&local_218);
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_217[0],local_218,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,0x208);
          if (param_4 !=
              (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               **)0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_200 = this_02;
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_200);
            if ((*(short *)&(this->Components).field_0x2 == -1) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("In->ComponentType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                   ,0x1f5,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
              return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
            }
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_1f8[0] = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x2,
                       (FBaseGraphTask *)local_1f8);
          }
          param_1->_padding_ = (longlong)this_02;
          FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar4,local_1b8._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_1b8._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2331281323118820001>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                           ,0x55f,"EntityManager->IsLockedDown()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
        }
      }
      local_208.EvaluatedTimes =
           *(TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             **)in_stack_00000030;
      this_00 = TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                ::
                TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                          ((TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                            *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
      TEntityTaskBase<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
      ::Run(this_00,&local_208);
      if (local_f0 != (void *)0x0) {
        FMemory::Free(local_f0);
      }
      param_1->_padding_ = 0;
    }
    else {
      param_1->_padding_ = 0;
    }
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerEntity<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*> @ 1461056f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
::
Dispatch_PerEntity<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          **param_4)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  FTaskBase *pFVar5;
  FTaskBase *this_02;
  atomic<unsigned___int64> *in_stack_00000030;
  undefined1 auStackY_248 [32];
  EExtendedTaskPriority local_218;
  ETaskPriority local_217 [3];
  FComponentTypeID local_214;
  FComponentTypeID local_212;
  FComponentTypeID local_210;
  FComponentTypeID local_20e;
  FComponentTypeID local_20c;
  FComponentTypeID local_20a;
  FAssignEvalTimesTask local_208;
  FTaskBase *local_200;
  FTaskBase *local_1f8 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (*(short *)&this->Components == -1 || *(short *)&(this->Components).field_0x2 == -1) {
    param_1->_padding_ = 0;
  }
  else {
    bVar2 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
            ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                          *)this,(FEntityManager *)param_2);
    if (bVar2) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        if (param_2[5].Prereqs.AllocatorInstance.InlineData[0x28] != '\0') {
          local_1e8._First = &local_214;
          local_1b8._44_4_ = 4;
          local_1e8._Last = &local_212;
          local_214.Value = 0xffff;
          this_02 = (FTaskBase *)0x0;
          local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_1b8._40_4_ = 0;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1e8);
          if ((*(short *)&this->Components == -1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
            return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
          }
          local_210.Value = *(ushort *)&this->Components;
          local_1d8._First = &local_210;
          local_1d8._Last = &local_20e;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1d8);
          if ((*(short *)&(this->Components).field_0x2 == -1) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1d5,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
            return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
          }
          local_20c.Value = *(ushort *)&(this->Components).field_0x2;
          local_1c8._First = &local_20c;
          local_1c8._Last = &local_20a;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1c8);
          pFVar5 = (FTaskBase *)local_1b8;
          if (local_1b8._40_4_ == 0) {
            pFVar5 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x208,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar5);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityTask_UFAssignEvalTimesTask_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TWriteAccess_UFFrameTime___23__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
          ::
          TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                    ((TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          this_02[2].TraceId = *in_stack_00000030;
          Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_217,&local_218);
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_217[0],local_218,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,0x208);
          if (param_4 !=
              (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               **)0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_200 = this_02;
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_200);
            if ((*(short *)&(this->Components).field_0x2 == -1) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("In->ComponentType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                   ,0x1f5,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
              return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
            }
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_1f8[0] = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x2,
                       (FBaseGraphTask *)local_1f8);
          }
          param_1->_padding_ = (longlong)this_02;
          FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar4,local_1b8._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_1b8._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2331281323118820001>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                           ,0x55f,"EntityManager->IsLockedDown()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FBaseGraphTask *)(*pcVar1)();
          return (TRefCountPtr<FBaseGraphTask>)TVar3.Reference;
        }
      }
      local_208.EvaluatedTimes =
           *(TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             **)in_stack_00000030;
      this_00 = TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                ::
                TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                          ((TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                            *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
      TEntityTaskBase<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
      ::Run(this_00,&local_208);
      if (local_f0 != (void *)0x0) {
        FMemory::Free(local_f0);
      }
      param_1->_padding_ = 0;
    }
    else {
      param_1->_padding_ = 0;
    }
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// RunInline_PerAllocation<UE::MovieScene::FUpdateGroupsTask> @ 146116840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
::RunInline_PerAllocation<UE::MovieScene::FUpdateGroupsTask>
          (TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
           *this,FEntityManager *param_1,FUpdateGroupsTask *param_2)

{
  undefined1 auStack_178 [32];
  TEntityAllocationTaskBase<UE::MovieScene::FUpdateGroupsTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
  local_158;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (*(short *)&(this->Components).field_0x2 != -1) {
    local_158.ComponentFilter.Components._0_8_ = *(undefined8 *)&this->Components;
    local_158.ComponentFilter.Components._8_8_ = *(undefined8 *)&(this->Components).field_0x8;
    local_158.ComponentFilter.Components._16_8_ = *(undefined8 *)&(this->Components).field_0x10;
    local_158.ComponentFilter.Components._24_8_ = *(undefined8 *)&(this->Components).field_0x18;
    local_158.ComponentFilter.Components._32_8_ = *(undefined8 *)&(this->Components).field_0x20;
    FEntityComponentFilter::FEntityComponentFilter(&local_158.ComponentFilter.Filter,&this->Filter);
    local_158.ComponentFilter.DynamicReadMask.Bits.NumBits = 0;
    local_158.ComponentFilter.DynamicReadMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_158.ComponentFilter.DynamicReadMask.Bits,&(this->DynamicReadMask).Bits);
    local_158.ComponentFilter.DynamicWriteMask.Bits.NumBits = 0;
    local_158.ComponentFilter.DynamicWriteMask.Bits.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_158.ComponentFilter.DynamicWriteMask.Bits,&(this->DynamicWriteMask).Bits);
    local_158.WriteContext.SystemSerial = param_1->SystemSerialNumber;
    local_158.EntityManager = param_1;
    TEntityAllocationTaskBase<UE::MovieScene::FUpdateGroupsTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
    ::Run(&local_158,param_2);
    if (local_158.ComponentFilter.Filter.ComplexMasks.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.ComponentFilter.Filter.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// ScheduleImpl<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*> @ 146116940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
::
ScheduleImpl<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar7;
  bool bVar8;
  int iVar9;
  FTaskID FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_168 [32];
  FTaskID local_118;
  TStatId local_110;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_108;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_100;
  code *local_f8;
  TStatId *local_f0;
  undefined1 local_e8 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_d8;
  TBitArray<TFixedAllocator<12>_> local_c8;
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_100 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_108 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if (*(short *)&this->Components != -1 && *(short *)&(this->Components).field_0x2 != -1) {
    bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
            ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                          *)this,(FEntityManager *)param_2);
    if (bVar8) {
      pTVar11 = ::operator_new(0x48);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar13 = pTVar11 + 1;
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFAssignEvalSecondsTask_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TWriteAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar11[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFAssignEvalSecondsTask_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TWriteAccess_N_23__MovieScene_UE__6B_
        ;
        uVar3 = *in_stack_00000038;
        pTVar11[1].SharedReferenceCount = (atomic<int>)(int)uVar3;
        pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
        uVar5 = *(undefined4 *)&(this->Components).field_0x8;
        uVar6 = *(undefined4 *)&(this->Components).field_0xc;
        pTVar11[2]._padding_ = *(longlong *)&this->Components;
        pTVar11[2].SharedReferenceCount = (atomic<int>)uVar5;
        pTVar11[2].WeakReferenceCount = (atomic<int>)uVar6;
        uVar5 = *(undefined4 *)&(this->Components).field_0x18;
        uVar6 = *(undefined4 *)&(this->Components).field_0x1c;
        pTVar11[3]._padding_ = *(longlong *)&(this->Components).field_0x10;
        pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
        pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
        pTVar11[4]._padding_ = *(longlong *)&(this->Components).field_0x20;
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return (FTaskID)iVar9;
          }
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      local_90.NumBits = 0;
      local_90.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_90,&(this->DynamicReadMask).Bits);
      local_c8.NumBits._0_1_ = '\0';
      local_c8.NumBits._1_1_ = '\0';
      local_c8.NumBits._2_1_ = '\0';
      local_c8.NumBits._3_1_ = '\0';
      local_c8.MaxBits._0_1_ = '\0';
      local_c8.MaxBits._1_1_ = '\0';
      local_c8.MaxBits._2_1_ = '\0';
      local_c8.MaxBits._3_1_ = '\0';
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_c8,&(this->DynamicWriteMask).Bits);
      uVar2 = *(ushort *)&this->Components;
      iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
      if (0 < iVar9) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
      }
      if (local_90.NumBits <= (int)(uint)uVar2) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FTaskID)iVar9;
        }
      }
      pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)&(this->Components).field_0x2;
      iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
      if (0 < iVar9) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
      }
      if (local_c8.NumBits <= (int)(uint)uVar2) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FTaskID)iVar9;
        }
      }
      pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      local_f0 = &local_110;
      local_f8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                 ::Call;
      local_110.StatIdPtr = (TStatIdData *)this;
      pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_d8,local_108);
      pTVar7 = local_100;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8._0_8_ = pTVar13;
      local_e8._8_8_ = pTVar11;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_118,local_100,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_e8,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar12,(FEntityComponentFilter *)&local_f8,&(this->Filter).AllMask,
                 (FComponentMask *)&local_90);
      if (local_118.Index == -1) {
        if (((ulonglong)pTVar7[1].Object & 4) != 0) {
          FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
          local_118.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
          if (local_118.Index != -1) goto LAB_146116c25;
        }
      }
      else {
LAB_146116c25:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
      }
      *(int *)&param_1->_padding_ = local_118.Index;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      goto LAB_146116c6f;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_146116c6f:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*> @ 146116ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
::
ScheduleImpl<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar7;
  bool bVar8;
  int iVar9;
  FTaskID FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_168 [32];
  FTaskID local_118;
  TStatId local_110;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_108;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_100;
  code *local_f8;
  TStatId *local_f0;
  undefined1 local_e8 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_d8;
  TBitArray<TFixedAllocator<12>_> local_c8;
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_100 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_108 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if (*(short *)&this->Components != -1 && *(short *)&(this->Components).field_0x2 != -1) {
    bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
            ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                          *)this,(FEntityManager *)param_2);
    if (bVar8) {
      pTVar11 = ::operator_new(0x48);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar13 = pTVar11 + 1;
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFAssignEvalTimesTask_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TWriteAccess_UFFrameTime___23__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar11[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFAssignEvalTimesTask_MovieScene_UE__U__TReadAccess_UFInstanceHandle_MovieScene_UE___23_U__TWriteAccess_UFFrameTime___23__MovieScene_UE__6B_
        ;
        uVar3 = *in_stack_00000038;
        pTVar11[1].SharedReferenceCount = (atomic<int>)(int)uVar3;
        pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
        uVar5 = *(undefined4 *)&(this->Components).field_0x8;
        uVar6 = *(undefined4 *)&(this->Components).field_0xc;
        pTVar11[2]._padding_ = *(longlong *)&this->Components;
        pTVar11[2].SharedReferenceCount = (atomic<int>)uVar5;
        pTVar11[2].WeakReferenceCount = (atomic<int>)uVar6;
        uVar5 = *(undefined4 *)&(this->Components).field_0x18;
        uVar6 = *(undefined4 *)&(this->Components).field_0x1c;
        pTVar11[3]._padding_ = *(longlong *)&(this->Components).field_0x10;
        pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
        pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
        pTVar11[4]._padding_ = *(longlong *)&(this->Components).field_0x20;
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return (FTaskID)iVar9;
          }
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      local_90.NumBits = 0;
      local_90.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_90,&(this->DynamicReadMask).Bits);
      local_c8.NumBits._0_1_ = '\0';
      local_c8.NumBits._1_1_ = '\0';
      local_c8.NumBits._2_1_ = '\0';
      local_c8.NumBits._3_1_ = '\0';
      local_c8.MaxBits._0_1_ = '\0';
      local_c8.MaxBits._1_1_ = '\0';
      local_c8.MaxBits._2_1_ = '\0';
      local_c8.MaxBits._3_1_ = '\0';
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_c8,&(this->DynamicWriteMask).Bits);
      uVar2 = *(ushort *)&this->Components;
      iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
      if (0 < iVar9) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
      }
      if (local_90.NumBits <= (int)(uint)uVar2) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FTaskID)iVar9;
        }
      }
      pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)&(this->Components).field_0x2;
      iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
      if (0 < iVar9) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
      }
      if (local_c8.NumBits <= (int)(uint)uVar2) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return (FTaskID)iVar9;
        }
      }
      pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      local_f0 = &local_110;
      local_f8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>::ScheduleImpl<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                 ::Call;
      local_110.StatIdPtr = (TStatIdData *)this;
      pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_d8,local_108);
      pTVar7 = local_100;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8._0_8_ = pTVar13;
      local_e8._8_8_ = pTVar11;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_118,local_100,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_e8,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar12,(FEntityComponentFilter *)&local_f8,&(this->Filter).AllMask,
                 (FComponentMask *)&local_90);
      if (local_118.Index == -1) {
        if (((ulonglong)pTVar7[1].Object & 4) != 0) {
          FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
          local_118.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
          if (local_118.Index != -1) goto LAB_146116f85;
        }
      }
      else {
LAB_146116f85:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
      }
      *(int *)&param_1->_padding_ = local_118.Index;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      goto LAB_146116fcf;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_146116fcf:
  return (FTaskID)(int)param_1;
}

// operator() @ 14611f590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
::
ScheduleImpl<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'
::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FComponentAccess *this_00;
  code *pcVar3;
  FEntityManager *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  pFVar4 = param_1->Manager;
  uVar5 = *(undefined8 *)&param_1->AllocationIndex;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar9 = *piVar1;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4,2);
  uVar8 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = (longlong)(int)uVar5 * 8;
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,*(FEntityAllocation **)(lVar2 + *(longlong *)&pFVar4->EntityAllocations),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4));
  uVar9 = uVar9 + 1;
  uVar8 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00 + 1,*(FEntityAllocation **)(lVar2 + *(longlong *)&pFVar4->EntityAllocations),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4));
  return;
}

// operator() @ 14611f710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
::
ScheduleImpl<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'
::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FComponentAccess *this_00;
  code *pcVar3;
  FEntityManager *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  pFVar4 = param_1->Manager;
  uVar5 = *(undefined8 *)&param_1->AllocationIndex;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar9 = *piVar1;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4,2);
  uVar8 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = (longlong)(int)uVar5 * 8;
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,*(FEntityAllocation **)(lVar2 + *(longlong *)&pFVar4->EntityAllocations),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4));
  uVar9 = uVar9 + 1;
  uVar8 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00 + 1,*(FEntityAllocation **)(lVar2 + *(longlong *)&pFVar4->EntityAllocations),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4));
  return;
}

