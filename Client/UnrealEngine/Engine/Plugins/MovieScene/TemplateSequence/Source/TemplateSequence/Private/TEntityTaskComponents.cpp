// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 3

// Dispatch_PerEntity<UE::MovieScene::FGatherPropertyScales,UTemplateSequencePropertyScalingEvaluatorSystem_*> @ 14ac66ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
::
Dispatch_PerEntity<UE::MovieScene::FGatherPropertyScales,UTemplateSequencePropertyScalingEvaluatorSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UTemplateSequencePropertyScalingEvaluatorSystem **param_4)

{
  atomic<unsigned___int64> aVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  FTaskBase *pFVar8;
  FTaskBase *this_02;
  atomic<unsigned___int64> *in_stack_00000030;
  undefined1 auStackY_268 [32];
  EExtendedTaskPriority local_238;
  ETaskPriority local_237 [3];
  FComponentTypeID local_234;
  FComponentTypeID local_232;
  FComponentTypeID local_230;
  FComponentTypeID local_22e;
  FComponentTypeID local_22c;
  FComponentTypeID local_22a;
  FComponentTypeID local_228;
  FComponentTypeID local_226 [3];
  FTaskBase *local_220;
  FTaskBase *local_218;
  FGatherPropertyScales local_210;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [200];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (bVar4 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar4)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar5 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar5 != NoThreading) {
        local_1f8._First = &local_234;
        local_1b8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_1f8._Last = &local_232;
        local_1b8._40_4_ = 0;
        local_1b8._44_4_ = 4;
        local_234.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1f8);
        if ((*(short *)this == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_230.Value = *(ushort *)this;
        local_1e8._First = &local_230;
        local_1e8._Last = &local_22e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1e8);
        if ((*(short *)&this->field_0x2 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_22c.Value = *(ushort *)&this->field_0x2;
        local_1d8._First = &local_22c;
        local_1d8._Last = &local_22a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1d8);
        if ((*(short *)&this->field_0x4 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        local_228.Value = *(ushort *)&this->field_0x4;
        local_1c8._First = &local_228;
        local_1c8._Last = local_226;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1b8,&local_1c8);
        pFVar8 = (FTaskBase *)local_1b8;
        if (local_1b8._40_4_ == 0) {
          pFVar8 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x210,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar8);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityTask_UFGatherPropertyScales_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___23_U__TReadAccess_N_23__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
        ::
        TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                  ((TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        aVar1 = *in_stack_00000030;
        this_02[2].TraceId = aVar1;
        if ((aVar1 == (atomic<unsigned___int64>)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InEvaluatorSystem",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                               ,0x153,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        lVar2 = *(longlong *)((longlong)aVar1 + 0x28);
        if ((*(longlong *)(lVar2 + 0x580) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InstanceRegistry.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                               ,0x96,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
        }
        *(undefined8 *)this_02[2].Prerequisites.Prerequisites.AllocatorInstance.InlineData =
             *(undefined8 *)(lVar2 + 0x580);
        Tasks::Private::TranslatePriority((Type)this_02[1]._padding_,local_237,&local_238);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_237[0],local_238,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x210);
        if (param_4 != (UTemplateSequencePropertyScalingEvaluatorSystem **)0x0) {
          local_220 = this_02;
          if (this_02 == (FTaskBase *)0x0) {
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_220);
          }
          else {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_220);
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_218 = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_218);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1b8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar7,local_1b8._40_4_);
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
                        (&bGEnsureHasExecuted<_2331281323118820909>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x1d3,"EntityManager->IsLockedDown()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
        return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
      }
    }
    aVar1 = *in_stack_00000030;
    local_210.EvaluatorSystem = (UTemplateSequencePropertyScalingEvaluatorSystem *)aVar1;
    if ((aVar1 == (atomic<unsigned___int64>)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InEvaluatorSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x153,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
    lVar2 = *(longlong *)((longlong)aVar1 + 0x28);
    if ((*(longlong *)(lVar2 + 0x580) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
    local_210.InstanceRegistry = *(FInstanceRegistry **)(lVar2 + 0x580);
    this_00 = TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
              ::
              TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                        ((TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                          *)(local_1b8 + 0x30),(FEntityManager *)param_2,this);
    TEntityTaskBase<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
    ::Run(this_00,&local_210);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ScheduleImpl<UE::MovieScene::FGatherPropertyScales,UTemplateSequencePropertyScalingEvaluatorSystem_*> @ 14ac6e140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::FGatherPropertyScales,UTemplateSequencePropertyScalingEvaluatorSystem_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,UTemplateSequencePropertyScalingEvaluatorSystem **param_5)

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
  longlong *in_stack_00000038;
  undefined1 auStackY_248 [32];
  FComponentTypeID local_1f8;
  FComponentTypeID local_1f6;
  FComponentTypeID local_1f4;
  FComponentTypeID local_1f2;
  FComponentTypeID local_1f0;
  FComponentTypeID local_1ee;
  FTaskID local_1ec;
  FTaskID local_1e8;
  TStatId local_1e0;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1d8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1d0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  code *local_198;
  TStatId *local_190;
  undefined1 local_188 [16];
  code *local_178;
  uchar local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FComponentMask local_108;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1d0 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1d8 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if ((*(short *)this == -1 ||
       (*(short *)&this->field_0x4 == -1 || *(short *)&this->field_0x2 == -1)) ||
     (bVar7 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar7)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14ac6e6b4;
  }
  pTVar10 = ::operator_new(0x50);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFGatherPropertyScales_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___23_U__TReadAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFGatherPropertyScales_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TReadAccess_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___23_U__TReadAccess_N_23__MovieScene_UE__6B_
    ;
    lVar3 = *in_stack_00000038;
    pTVar10[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
    pTVar10[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
    if ((lVar3 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InEvaluatorSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x153,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return (FTaskID)iVar8;
    }
    lVar3 = *(longlong *)(lVar3 + 0x28);
    if ((*(longlong *)(lVar3 + 0x580) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return (FTaskID)iVar8;
    }
    pTVar12 = pTVar10 + 1;
    pTVar10[2]._padding_ = *(longlong *)(lVar3 + 0x580);
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
  local_58 = 0;
  local_54 = 0x180;
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
  local_108.Bits.NumBits = 0;
  local_108.Bits.MaxBits = 0x180;
  local_a0 = 0;
  local_9c = 0x180;
  local_98 = (void *)0x0;
  local_90 = 0;
  if ((*(short *)this == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_1f8.Value = *(ushort *)this;
  local_1c8._First = &local_1f8;
  local_1c8._Last = &local_1f6;
  FComponentMask::SetAll(&local_108,&local_1c8);
  if ((*(short *)&this->field_0x2 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_1f4.Value = *(ushort *)&this->field_0x2;
  local_1b8._First = &local_1f4;
  local_1b8._Last = &local_1f2;
  FComponentMask::SetAll(&local_108,&local_1b8);
  if ((*(short *)&this->field_0x4 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return (FTaskID)iVar8;
  }
  local_1f0.Value = *(ushort *)&this->field_0x4;
  local_1a8._First = &local_1f0;
  local_1a8._Last = &local_1ee;
  FComponentMask::SetAll(&local_108,&local_1a8);
  local_190 = &local_1e0;
  local_198 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FGatherPropertyScales,UTemplateSequencePropertyScalingEvaluatorSystem_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1e0.StatIdPtr = (TStatIdData *)this;
  pTVar11 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1d8);
  pTVar6 = local_1d0;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188._0_8_ = pTVar12;
  local_188._8_8_ = pTVar10;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1ec,local_1d0,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_188,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar11,(FEntityComponentFilter *)&local_198,&local_108,(FComponentMask *)&local_148
            );
  if (local_1ec.Index == -1) {
    if (((ulonglong)pTVar6[1].Object & 4) != 0) {
      FVar9 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_1ec.Index = *(int *)CONCAT44(extraout_var,FVar9.Index);
      if (local_1ec.Index != -1) goto LAB_14ac6e613;
    }
  }
  else {
LAB_14ac6e613:
    local_170 = '\0';
    local_178 = `UE::MovieScene::
                SchedulePreTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>,UE::MovieScene::FGatherPropertyScales>'
                ::__l2::FCallPreTask::Run;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_168._0_8_ = pTVar12;
    local_168._8_8_ = pTVar10;
    IEntitySystemScheduler::AddTask
              ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1e8,pTVar6,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_168);
    IEntitySystemScheduler::AddChildFront((IEntitySystemScheduler *)param_3,local_1ec,local_1e8);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_1ec,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_1ec.Index;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14ac6e6b4:
  return (FTaskID)(int)param_1;
}

// FilterAny @ 14ac755f0

TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::FilterAny(TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
            *this,TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
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
  uVar2 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x20 = *(undefined8 *)&this->field_0x20
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x30 = *(undefined8 *)&this->field_0x30
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x48;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x40 = *(undefined8 *)&this->field_0x40
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x58;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x50 = *(undefined8 *)&this->field_0x50
  ;
  *(undefined8 *)&(__return_storage_ptr__->Components).field_0x58 = uVar2;
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
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x6,
                      &__return_storage_ptr__->Filter);
  AddAccessorToFilter((FComponentAccess *)&(__return_storage_ptr__->Components).field_0x8,
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

