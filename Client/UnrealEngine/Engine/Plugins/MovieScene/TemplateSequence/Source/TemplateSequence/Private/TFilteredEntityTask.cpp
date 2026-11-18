// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 5

// Dispatch_PerAllocation<UE::MovieScene::FScaleFloatProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*> @ 14ac66430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::FScaleFloatProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UTemplateSequencePropertyScalingEvaluatorSystem **param_4)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  char cVar7;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar8;
  FTaskBase *pFVar9;
  FTaskBase *this_02;
  longlong *in_stack_00000030;
  undefined1 auStackY_298 [32];
  EExtendedTaskPriority local_268;
  ETaskPriority local_267 [3];
  FComponentTypeID local_264;
  FComponentTypeID local_262;
  FComponentTypeID local_260;
  FComponentTypeID local_25e;
  FComponentTypeID local_25c;
  FComponentTypeID local_25a;
  FComponentTypeID local_258;
  FComponentTypeID local_256;
  FComponentTypeID local_254;
  FComponentTypeID local_252;
  FComponentTypeID local_250;
  FComponentTypeID local_24e;
  FComponentTypeID local_24c;
  FComponentTypeID local_24a;
  FScaleFloatProperties local_248;
  FTaskBase *local_240;
  FTaskBase *local_238 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [208];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_02 = (FTaskBase *)0x0;
  pFVar9 = this_02;
  if (*(short *)&this->Components != -1) {
    pFVar9 = (FTaskBase *)
             (ulonglong)
             (*(short *)&(this->Components).field_0x8 != -1 &&
             *(short *)&(this->Components).field_0x6 != -1);
  }
  cVar7 = '\0';
  if (*(short *)&(this->Components).field_0xe != -1) {
    cVar7 = (char)pFVar9;
  }
  if ((cVar7 == '\0') ||
     (bVar4 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar4)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar5 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar5 != NoThreading) {
        local_228._First = &local_264;
        local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_228._Last = &local_262;
        local_1b8._40_4_ = 0;
        local_1b8._44_4_ = 4;
        local_264.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_228);
        if ((*(short *)&this->Components == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_260.Value = *(ushort *)&this->Components;
        local_218._First = &local_260;
        local_218._Last = &local_25e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_218);
        uVar1 = *(ushort *)&(this->Components).field_0x2;
        if (uVar1 != 0xffff) {
          local_208._First = &local_25c;
          local_208._Last = &local_25a;
          local_25c.Value = uVar1;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_208);
        }
        if ((*(short *)&(this->Components).field_0x6 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_258.Value = *(ushort *)&(this->Components).field_0x6;
        local_1f8._First = &local_258;
        local_1f8._Last = &local_256;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1f8);
        if ((*(short *)&(this->Components).field_0x8 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_254.Value = *(ushort *)&(this->Components).field_0x8;
        local_1e8._First = &local_254;
        local_1e8._Last = &local_252;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1e8);
        uVar1 = *(ushort *)&(this->Components).field_0xa;
        if (uVar1 != 0xffff) {
          local_1d8._First = &local_250;
          local_1d8._Last = &local_24e;
          local_250.Value = uVar1;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8,&local_1d8);
        }
        if ((*(short *)&(this->Components).field_0xe == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_24c.Value = *(ushort *)&(this->Components).field_0xe;
        local_1c8._First = &local_24c;
        local_1c8._Last = &local_24a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1c8);
        pFVar9 = (FTaskBase *)local_1b8;
        if (local_1b8._40_4_ == 0) {
          pFVar9 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x210,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar9);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_UFScaleFloatProperties_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFMovieScenePropertyBinding___23_U__TReadAccess_UFGuid___23_U__TOptionalReadAccess_N_23_U__TWriteAccess_N_23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        lVar2 = *in_stack_00000030;
        *(longlong *)this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData = lVar2;
        if ((lVar2 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InEvaluatorSystem",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                               ,0x1b5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_267,&local_268);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_267[0],local_268,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x210);
        if (param_4 != (UTemplateSequencePropertyScalingEvaluatorSystem **)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_240 = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_240);
          if ((*(short *)&(this->Components).field_0xe == -1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("In->ComponentType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                 ,0x1f5,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
            return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
          }
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_238[0] = this_02;
          FSystemSubsequentTasks::AddComponentTask
                    ((FSystemSubsequentTasks *)param_4,
                     (FComponentTypeID)*(ushort *)&(this->Components).field_0xe,
                     (FBaseGraphTask *)local_238);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar8,local_1b8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1b8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820079>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x511,"EntityManager->IsLockedDown()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
        return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
      }
    }
    local_248.EvaluatorSystem =
         (UTemplateSequencePropertyScalingEvaluatorSystem *)*in_stack_00000030;
    if ((local_248.EvaluatorSystem == (UTemplateSequencePropertyScalingEvaluatorSystem *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InEvaluatorSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x1b5,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                          *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
    ::Run(this_00,&local_248);
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::FScaleTransformProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*> @ 14ac66900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::FScaleTransformProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UTemplateSequencePropertyScalingEvaluatorSystem **param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EEntityThreadingModel EVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  FTaskBase *pFVar7;
  FTaskBase *this_02;
  longlong *in_stack_00000030;
  undefined1 auStackY_268 [32];
  EExtendedTaskPriority local_238;
  ETaskPriority local_237 [7];
  FScaleTransformProperties local_230;
  FTaskBase *local_228;
  FTaskBase *local_220;
  FTaskBase *local_218;
  FTaskBase *local_210;
  FTaskBase *local_208;
  FTaskBase *local_200;
  FTaskBase *local_1f8;
  undefined1 local_1f0 [264];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)&this->Components == -1 ||
       (*(short *)&(this->Components).field_0x8 == -1 ||
       *(short *)&(this->Components).field_0x6 == -1)) ||
     (bVar3 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar3)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar4 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar4 != NoThreading) {
        local_1f0._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_1f0._40_4_ = 0;
        local_1f0._44_4_ = 4;
        TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
        ::PopulatePrerequisites
                  ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                    *)this,(FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1f0);
        pFVar7 = (FTaskBase *)local_1f0;
        if (local_1f0._40_4_ == 0) {
          pFVar7 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x240,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar7);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_UFScaleTransformProperties_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFMovieScenePropertyBinding___23_U__TReadAccess_UFGuid___23_U__TOptionalReadAccess_N_23_U823_U823_U823_U823_U823_U__TOptionalWriteAccess_N_23_U923_U923_U923_U923_U923__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        lVar1 = *in_stack_00000030;
        *(longlong *)&this_02[2].LowLevelTask.field_0x10 = lVar1;
        if ((lVar1 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InEvaluatorSystem",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                               ,0x172,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
          return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        }
        Tasks::Private::TranslatePriority
                  (*(Type *)this_02[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData,
                   local_237,&local_238);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_237[0],local_238,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x240);
        if (param_4 != (UTemplateSequencePropertyScalingEvaluatorSystem **)0x0) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_228 = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_228);
          if (*(short *)&(this->Components).field_0x22 != -1) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_220 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x22,
                       (FBaseGraphTask *)&local_220);
          }
          if (*(short *)&(this->Components).field_0x26 != -1) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_218 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x26,
                       (FBaseGraphTask *)&local_218);
          }
          if (*(short *)&(this->Components).field_0x2a != -1) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_210 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x2a,
                       (FBaseGraphTask *)&local_210);
          }
          if (*(short *)&(this->Components).field_0x2e != -1) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_208 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x2e,
                       (FBaseGraphTask *)&local_208);
          }
          if (*(short *)&(this->Components).field_0x32 != -1) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_200 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x32,
                       (FBaseGraphTask *)&local_200);
          }
          if (*(short *)&(this->Components).field_0x36 != -1) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_1f8 = this_02;
            FSystemSubsequentTasks::AddComponentTask
                      ((FSystemSubsequentTasks *)param_4,
                       (FComponentTypeID)*(ushort *)&(this->Components).field_0x36,
                       (FBaseGraphTask *)&local_1f8);
          }
        }
        param_1->_padding_ = (longlong)this_02;
        FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1f0;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1f0._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1f0._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar6,local_1f0._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1f0._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1f0._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820079>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x511,"EntityManager->IsLockedDown()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
        return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
      }
    }
    local_230.EvaluatorSystem =
         (UTemplateSequencePropertyScalingEvaluatorSystem *)*in_stack_00000030;
    if ((local_230.EvaluatorSystem == (UTemplateSequencePropertyScalingEvaluatorSystem *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InEvaluatorSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x172,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
      return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
    }
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                          *)(local_1f0 + 0x38),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
    ::Run(this_00,&local_230);
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// RunInline_PerAllocation<UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>_> @ 14ac6de40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
::RunInline_PerAllocation<UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>_>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits> *param_2)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  undefined1 auStack_1f8 [32];
  FEntityAllocationIteratorProxy local_1d8;
  FEntityAllocationIterator local_1c8;
  FEntityAllocationProxy local_1a8;
  FEntityAllocationIterator local_198;
  FEntityAllocationProxy local_178;
  undefined1 local_168 [14];
  FWriteAccess aFStack_15a [17];
  FEntityComponentFilter local_138;
  TBitArray<TFixedAllocator<12>_> local_b8;
  TBitArray<TFixedAllocator<12>_> local_80;
  FEntityManager *local_48;
  FEntityAllocationWriteContext local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if (*(short *)&this->Components != -1 && *(short *)&(this->Components).field_0xe != -1) {
    local_168._0_8_ = *(undefined8 *)&this->Components;
    unique0x10000253 = *(undefined8 *)&(this->Components).field_0x8;
    aFStack_15a._2_8_ = *(undefined8 *)&(this->Components).field_0x10;
    aFStack_15a._10_8_ = *(undefined8 *)&(this->Components).field_0x18;
    aFStack_15a._18_8_ = *(undefined8 *)&(this->Components).field_0x20;
    aFStack_15a._26_8_ = *(undefined8 *)&(this->Components).field_0x28;
    FEntityComponentFilter::FEntityComponentFilter(&local_138,&this->Filter);
    local_b8.NumBits = 0;
    local_b8.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_b8,&(this->DynamicReadMask).Bits);
    local_80.NumBits = 0;
    local_80.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_80,&(this->DynamicWriteMask).Bits);
    local_48 = param_1;
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_40,param_1);
    pFVar1 = local_48;
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      local_1d8.Manager = (FEntityManager *)0x0;
      local_1d8.Filter = (FEntityComponentFilter *)0x0;
      AccessorToString((FReadAccess *)local_168,local_48,(FString *)&local_1d8);
      AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)(local_168 + 2),pFVar1,(FString *)&local_1d8);
      AccessorToString(aFStack_15a,pFVar1,(FString *)&local_1d8);
      Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_1d8.Manager != (FEntityManager *)0x0) {
        FMemory::Free(local_1d8.Manager);
      }
    }
    EVar2 = FEntityManager::GetThreadingModel(local_48);
    FEntityManager::Iterate(local_48,&local_1d8,&local_138);
    FEntityAllocationIterator::FEntityAllocationIterator
              (&local_1c8,local_1d8.Manager,local_1d8.Filter);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_198,local_1d8.Manager);
    bVar3 = FEntityAllocationIterator::operator!=(&local_1c8,&local_198);
    if (bVar3) {
      do {
        FEntityAllocationIterator::operator*(&local_1c8,&local_1a8);
        pFVar4 = FEntityAllocationProxy::GetAllocation(&local_1a8);
        pFVar5 = (FEntityAllocation *)0x0;
        if (EVar2 == NoThreading) {
          pFVar4->LockMode = LockFree;
          pFVar5 = pFVar4;
        }
        local_178.Manager = local_1a8.Manager;
        local_178.AllocationIndex = local_1a8.AllocationIndex;
        local_178._12_4_ = local_1a8._12_4_;
        TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
        ForEachAllocationImpl<UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
                  (param_2,&local_178,local_40,
                   (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
                    *)local_168);
        if (pFVar5 != (FEntityAllocation *)0x0) {
          pFVar5->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_1c8);
        bVar3 = FEntityAllocationIterator::operator!=(&local_1c8,&local_198);
      } while (bVar3);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_198);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_1c8);
    if (local_138.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// ScheduleImpl<UE::MovieScene::FScaleFloatProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*> @ 14ac6e6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
::
ScheduleImpl<UE::MovieScene::FScaleFloatProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UTemplateSequencePropertyScalingEvaluatorSystem **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  longlong lVar3;
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
  longlong *in_stack_00000038;
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
  if ((*(short *)&(this->Components).field_0xe == -1 ||
       (*(short *)&this->Components == -1 ||
       (*(short *)&(this->Components).field_0x8 == -1 ||
       *(short *)&(this->Components).field_0x6 == -1))) ||
     (bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar8)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14ac6ec0e;
  }
  pTVar11 = ::operator_new(0x50);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFScaleFloatProperties_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFMovieScenePropertyBinding___23_U__TReadAccess_UFGuid___23_U__TOptionalReadAccess_N_23_U__TWriteAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFScaleFloatProperties_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFMovieScenePropertyBinding___23_U__TReadAccess_UFGuid___23_U__TOptionalReadAccess_N_23_U__TWriteAccess_N_23__MovieScene_UE__6B_
    ;
    lVar3 = *in_stack_00000038;
    pTVar11[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
    pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
    if ((lVar3 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InEvaluatorSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x1b5,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    uVar5 = *(undefined4 *)&(this->Components).field_0x8;
    uVar6 = *(undefined4 *)&(this->Components).field_0xc;
    pTVar13 = pTVar11 + 1;
    pTVar11[2]._padding_ = *(longlong *)&this->Components;
    pTVar11[2].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[2].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&(this->Components).field_0x18;
    uVar6 = *(undefined4 *)&(this->Components).field_0x1c;
    pTVar11[3]._padding_ = *(longlong *)&(this->Components).field_0x10;
    pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&(this->Components).field_0x28;
    uVar6 = *(undefined4 *)&(this->Components).field_0x2c;
    pTVar11[4]._padding_ = *(longlong *)&(this->Components).field_0x20;
    pTVar11[4].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[4].WeakReferenceCount = (atomic<int>)uVar6;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  local_c8.NumBits._0_1_ = '\0';
  local_c8.NumBits._1_1_ = '\0';
  local_c8.NumBits._2_1_ = '\0';
  local_c8.NumBits._3_1_ = '\0';
  local_c8.MaxBits._0_1_ = '\0';
  local_c8.MaxBits._1_1_ = '\0';
  local_c8.MaxBits._2_1_ = '\0';
  local_c8.MaxBits._3_1_ = '\0';
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_c8,&(this->DynamicReadMask).Bits);
  local_90.NumBits = 0;
  local_90.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_90,&(this->DynamicWriteMask).Bits);
  uVar2 = *(ushort *)&this->Components;
  iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
  }
  if ((local_c8.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&(this->Components).field_0x2;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x6;
  iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
  }
  if ((local_c8.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&(this->Components).field_0x8;
  iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
  }
  if ((local_c8.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&(this->Components).field_0xa;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0xe;
  iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
  }
  if ((local_90.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  local_f0 = &local_110;
  local_f8 = Core::Private::Function::
             TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FScaleFloatProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
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
             (FComponentMask *)&local_c8);
  if (local_118.Index == -1) {
    if (((ulonglong)pTVar7[1].Object & 4) != 0) {
      FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_118.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
      if (local_118.Index != -1) goto LAB_14ac6ebc4;
    }
  }
  else {
LAB_14ac6ebc4:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_118.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_14ac6ec0e:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FScaleTransformProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*> @ 14ac6ec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::
ScheduleImpl<UE::MovieScene::FScaleTransformProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UTemplateSequencePropertyScalingEvaluatorSystem **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  longlong lVar3;
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
  longlong *in_stack_00000038;
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
  if ((*(short *)&this->Components == -1 ||
       (*(short *)&(this->Components).field_0x8 == -1 ||
       *(short *)&(this->Components).field_0x6 == -1)) ||
     (bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar8)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14ac6f60f;
  }
  pTVar11 = ::operator_new(0x80);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFScaleTransformProperties_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFMovieScenePropertyBinding___23_U__TReadAccess_UFGuid___23_U__TOptionalReadAccess_N_23_U823_U823_U823_U823_U823_U__TOptionalWriteAccess_N_23_U923_U923_U923_U923_U923__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFScaleTransformProperties_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFMovieScenePropertyBinding___23_U__TReadAccess_UFGuid___23_U__TOptionalReadAccess_N_23_U823_U823_U823_U823_U823_U__TOptionalWriteAccess_N_23_U923_U923_U923_U923_U923__MovieScene_UE__6B_
    ;
    lVar3 = *in_stack_00000038;
    pTVar11[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
    pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
    if ((lVar3 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InEvaluatorSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x172,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    uVar5 = *(undefined4 *)&(this->Components).field_0x8;
    uVar6 = *(undefined4 *)&(this->Components).field_0xc;
    pTVar13 = pTVar11 + 1;
    pTVar11[2]._padding_ = *(longlong *)&this->Components;
    pTVar11[2].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[2].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&(this->Components).field_0x18;
    uVar6 = *(undefined4 *)&(this->Components).field_0x1c;
    pTVar11[3]._padding_ = *(longlong *)&(this->Components).field_0x10;
    pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&(this->Components).field_0x28;
    uVar6 = *(undefined4 *)&(this->Components).field_0x2c;
    pTVar11[4]._padding_ = *(longlong *)&(this->Components).field_0x20;
    pTVar11[4].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[4].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&(this->Components).field_0x38;
    uVar6 = *(undefined4 *)&(this->Components).field_0x3c;
    pTVar11[5]._padding_ = *(longlong *)&(this->Components).field_0x30;
    pTVar11[5].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[5].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&(this->Components).field_0x48;
    uVar6 = *(undefined4 *)&(this->Components).field_0x4c;
    pTVar11[6]._padding_ = *(longlong *)&(this->Components).field_0x40;
    pTVar11[6].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[6].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&(this->Components).field_0x58;
    uVar6 = *(undefined4 *)&(this->Components).field_0x5c;
    pTVar11[7]._padding_ = *(longlong *)&(this->Components).field_0x50;
    pTVar11[7].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[7].WeakReferenceCount = (atomic<int>)uVar6;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  local_c8.NumBits._0_1_ = '\0';
  local_c8.NumBits._1_1_ = '\0';
  local_c8.NumBits._2_1_ = '\0';
  local_c8.NumBits._3_1_ = '\0';
  local_c8.MaxBits._0_1_ = '\0';
  local_c8.MaxBits._1_1_ = '\0';
  local_c8.MaxBits._2_1_ = '\0';
  local_c8.MaxBits._3_1_ = '\0';
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_c8,&(this->DynamicReadMask).Bits);
  local_90.NumBits = 0;
  local_90.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_90,&(this->DynamicWriteMask).Bits);
  uVar2 = *(ushort *)&this->Components;
  iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
  }
  if ((local_c8.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&(this->Components).field_0x2;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x6;
  iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
  }
  if ((local_c8.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&(this->Components).field_0x8;
  iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
  }
  if ((local_c8.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&(this->Components).field_0xa;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0xe;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x12;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x16;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x1a;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x1e;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_c8.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar9);
    }
    if ((local_c8.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x22;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
    }
    if ((local_90.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x26;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
    }
    if ((local_90.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x2a;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
    }
    if ((local_90.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x2e;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
    }
    if ((local_90.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x32;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
    }
    if ((local_90.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&(this->Components).field_0x36;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_90.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_90,false,iVar9);
    }
    if ((local_90.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_90.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  local_f0 = &local_110;
  local_f8 = Core::Private::Function::
             TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FScaleTransformProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
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
             (FComponentMask *)&local_c8);
  if (local_118.Index == -1) {
    if (((ulonglong)pTVar7[1].Object & 4) != 0) {
      FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_118.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
      if (local_118.Index != -1) goto LAB_14ac6f5c5;
    }
  }
  else {
LAB_14ac6f5c5:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_118.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_14ac6f60f:
  return (FTaskID)(int)param_1;
}

