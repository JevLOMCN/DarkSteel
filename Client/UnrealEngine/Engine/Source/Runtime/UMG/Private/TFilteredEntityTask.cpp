// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&> @ 1468e5aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **param_4,
          ICustomPropertyRegistration **param_5)

{
  longlong lVar1;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  EEntityThreadingModel EVar7;
  TRefCountPtr<FBaseGraphTask> TVar8;
  undefined8 *puVar9;
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  FTaskBase *pFVar10;
  FTaskBase *pFVar11;
  longlong *in_stack_00000038;
  undefined1 auStackY_2c8 [32];
  EExtendedTaskPriority local_298;
  ETaskPriority local_297 [3];
  FComponentTypeID local_294;
  FComponentTypeID local_292;
  FComponentTypeID local_290;
  FComponentTypeID local_28e;
  FComponentTypeID local_28c;
  FComponentTypeID local_28a;
  FComponentTypeID local_288;
  FComponentTypeID local_286;
  FComponentTypeID local_284;
  FComponentTypeID local_282;
  FComponentTypeID local_280;
  FComponentTypeID local_27e [3];
  FTaskBase *local_278;
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
  local_270;
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  initializer_list<UE::MovieScene::FComponentTypeID> local_238;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [216];
  void *local_f0;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar10 = (FTaskBase *)0x0;
  if ((*(short *)&this->Components == -1 ||
       ((*(short *)&(this->Components).field_0x10 == -1 ||
        (*(short *)&(this->Components).field_0x14 == -1 ||
        *(short *)&(this->Components).field_0x12 == -1)) ||
       *(short *)&(this->Components).field_0xe == -1)) ||
     (bVar6 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar6)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar7 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar7 != NoThreading) {
        local_248._First = &local_294;
        local_1c8._32_8_ = (FTaskBase *)0x0;
        local_248._Last = &local_292;
        local_1c8._40_4_ = 0;
        local_1c8._44_4_ = 4;
        local_294.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_248);
        if ((*(short *)&this->Components == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar8.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
        }
        local_290.Value = *(ushort *)&this->Components;
        local_238._First = &local_290;
        local_238._Last = &local_28e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_238);
        PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                    *)&(this->Components).field_0x2,(FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8);
        if ((*(short *)&(this->Components).field_0xe == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar8.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
        }
        local_28c.Value = *(ushort *)&(this->Components).field_0xe;
        local_228._First = &local_28c;
        local_228._Last = &local_28a;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_228);
        if ((*(short *)&(this->Components).field_0x10 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar8.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
        }
        local_288.Value = *(ushort *)&(this->Components).field_0x10;
        local_218._First = &local_288;
        local_218._Last = &local_286;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_218);
        if ((*(short *)&(this->Components).field_0x12 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar8.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
        }
        local_284.Value = *(ushort *)&(this->Components).field_0x12;
        local_208._First = &local_284;
        local_208._Last = &local_282;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_208);
        if ((*(short *)&(this->Components).field_0x14 == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar8.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
        }
        local_280.Value = *(ushort *)&(this->Components).field_0x14;
        local_1f8._First = &local_280;
        local_1f8._Last = local_27e;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_1f8);
        pFVar11 = (FTaskBase *)local_1c8;
        if (local_1c8._40_4_ == 0) {
          pFVar11 = pFVar10;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x230,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar11);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623__MovieScene_UE____6B_
          ;
          pFVar10 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                    *)(pFVar10 + 1),(FEntityManager *)param_2,this);
        lVar1 = *in_stack_00000038;
        FVar2 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)*param_5;
        pFVar10[2].Prerequisites.Prerequisites.ArrayNum = (int)lVar1;
        pFVar10[2].Prerequisites.Prerequisites.ArrayMax = (int)((ulonglong)lVar1 >> 0x20);
        pFVar10[2].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = FVar2;
        *(undefined8 *)&pFVar10[2].Prerequisites.Mutex = 0;
        *(undefined8 *)&pFVar10[2].LowLevelTask = 0;
        plVar3 = *(longlong **)&pFVar10[2].Prerequisites.Prerequisites.ArrayNum;
        if (plVar3 != (longlong *)0x0) {
          puVar9 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_1d8);
          uVar5 = puVar9[1];
          *(undefined8 *)&pFVar10[2].Prerequisites.Mutex = *puVar9;
          *(undefined8 *)&pFVar10[2].LowLevelTask = uVar5;
        }
        Tasks::Private::TranslatePriority((Type)pFVar10[1].RefCount,local_297,&local_298);
        Tasks::Private::FTaskBase::Init(pFVar10,L"GraphTask",local_297[0],local_298,None);
        if (pFVar10 != (FTaskBase *)0x0) {
          LOCK();
          pFVar10->RefCount = (atomic<unsigned_int>)((int)pFVar10->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(pFVar10,0x230);
        if (param_4 != (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **)0x0) {
          if (pFVar10 != (FTaskBase *)0x0) {
            LOCK();
            pFVar10->RefCount = (atomic<unsigned_int>)((int)pFVar10->RefCount + 1);
            UNLOCK();
          }
          local_278 = pFVar10;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_278);
        }
        param_1->_padding_ = (longlong)pFVar10;
        pFVar10 = (FTaskBase *)local_1c8;
        if ((FTaskBase *)local_1c8._32_8_ != (FTaskBase *)0x0) {
          pFVar10 = (FTaskBase *)local_1c8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)pFVar10,local_1c8._40_4_);
        if ((FTaskBase *)local_1c8._32_8_ == (FTaskBase *)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1c8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820079>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x511,"EntityManager->IsLockedDown()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        TVar8.Reference = (FBaseGraphTask *)(*pcVar4)();
        return (TRefCountPtr<FBaseGraphTask>)TVar8.Reference;
      }
    }
    local_270.CustomAccessors.Base = (uchar *)0x0;
    local_270.CustomAccessors.ViewNum = 0;
    local_270.CustomAccessors.Stride = 0;
    local_270.Traits = (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> *)*param_5;
    local_270.CustomProperties = (ICustomPropertyRegistration *)*in_stack_00000038;
    if (local_270.CustomProperties != (ICustomPropertyRegistration *)0x0) {
      puVar9 = (undefined8 *)
               (**(code **)((longlong)*local_270.CustomProperties + 8))
                         (local_270.CustomProperties,local_1e8);
      local_270.CustomAccessors.Base = (uchar *)*puVar9;
      local_270.CustomAccessors._8_8_ = puVar9[1];
    }
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                          *)(local_1c8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
    ::Run(this_00,&local_270);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&> @ 1468e5f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> **param_4
          ,ICustomPropertyRegistration **param_5)

{
  ICustomPropertyRegistration *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  EEntityThreadingModel EVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  undefined8 *puVar8;
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  FTaskBase *pFVar10;
  FTaskBase *this_02;
  longlong *in_stack_00000038;
  undefined1 auStackY_2f8 [32];
  EExtendedTaskPriority local_2c8;
  ETaskPriority local_2c7 [3];
  FComponentTypeID local_2c4;
  FComponentTypeID local_2c2;
  FComponentTypeID local_2c0;
  FComponentTypeID local_2be;
  FComponentTypeID local_2bc;
  FComponentTypeID local_2ba;
  FComponentTypeID local_2b8;
  FComponentTypeID local_2b6;
  FComponentTypeID local_2b4;
  FComponentTypeID local_2b2;
  FComponentTypeID local_2b0;
  FComponentTypeID local_2ae;
  FComponentTypeID local_2ac;
  FComponentTypeID local_2aa;
  FComponentTypeID local_2a8;
  FComponentTypeID local_2a6;
  FComponentTypeID local_2a4;
  FComponentTypeID local_2a2;
  FTaskBase *local_2a0;
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
  local_298;
  initializer_list<UE::MovieScene::FComponentTypeID> local_278;
  initializer_list<UE::MovieScene::FComponentTypeID> local_268;
  initializer_list<UE::MovieScene::FComponentTypeID> local_258;
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  initializer_list<UE::MovieScene::FComponentTypeID> local_238;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [224];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  this_02 = (FTaskBase *)0x0;
  if ((*(short *)&this->Components == -1 ||
       (*(short *)&(this->Components).field_0xe == -1 ||
       ((*(short *)&(this->Components).field_0x12 == -1 ||
        ((*(short *)&(this->Components).field_0x16 == -1 ||
         (*(short *)&(this->Components).field_0x1a == -1 ||
         *(short *)&(this->Components).field_0x18 == -1)) ||
        *(short *)&(this->Components).field_0x14 == -1)) ||
       *(short *)&(this->Components).field_0x10 == -1))) ||
     (bVar5 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                            *)this,(FEntityManager *)param_2), !bVar5)) {
    param_1->_padding_ = 0;
  }
  else {
    if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
      EVar6 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
      if (EVar6 != NoThreading) {
        local_278._First = &local_2c4;
        local_1c8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_278._Last = &local_2c2;
        local_1c8._40_4_ = 0;
        local_1c8._44_4_ = 4;
        local_2c4.Value = 0xffff;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_278);
        if ((*(short *)&this->Components == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2c0.Value = *(ushort *)&this->Components;
        local_268._First = &local_2c0;
        local_268._Last = &local_2be;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_268);
        PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                    *)&(this->Components).field_0x2,(FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8);
        if ((*(short *)&(this->Components).field_0xe == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2bc.Value = *(ushort *)&(this->Components).field_0xe;
        local_258._First = &local_2bc;
        local_258._Last = &local_2ba;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_258);
        if ((*(short *)&(this->Components).field_0x10 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2b8.Value = *(ushort *)&(this->Components).field_0x10;
        local_248._First = &local_2b8;
        local_248._Last = &local_2b6;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_248);
        if ((*(short *)&(this->Components).field_0x12 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2b4.Value = *(ushort *)&(this->Components).field_0x12;
        local_238._First = &local_2b4;
        local_238._Last = &local_2b2;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_238);
        if ((*(short *)&(this->Components).field_0x14 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2b0.Value = *(ushort *)&(this->Components).field_0x14;
        local_228._First = &local_2b0;
        local_228._Last = &local_2ae;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_228);
        if ((*(short *)&(this->Components).field_0x16 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2ac.Value = *(ushort *)&(this->Components).field_0x16;
        local_218._First = &local_2ac;
        local_218._Last = &local_2aa;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_218);
        if ((*(short *)&(this->Components).field_0x18 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2a8.Value = *(ushort *)&(this->Components).field_0x18;
        local_208._First = &local_2a8;
        local_208._Last = &local_2a6;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_208);
        if ((*(short *)&(this->Components).field_0x1a == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("In->ComponentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                               ,0x1d5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
          return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        }
        local_2a4.Value = *(ushort *)&(this->Components).field_0x1a;
        local_1f8._First = &local_2a4;
        local_1f8._Last = &local_2a2;
        FSystemTaskPrerequisites::FilterByComponent
                  ((FSystemTaskPrerequisites *)param_3,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_1c8,&local_1f8);
        pFVar10 = (FTaskBase *)local_1c8;
        if (local_1c8._40_4_ == 0) {
          pFVar10 = this_02;
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x238,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar10);
          this_01->_padding_ =
               (longlong)
               &
               ___7__TGraphTask_U__TEntityAllocationTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNNNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623_U623_U623_U623__MovieScene_UE____6B_
          ;
          this_02 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                    *)(this_02 + 1),(FEntityManager *)param_2,this);
        pIVar1 = *param_5;
        *(longlong *)&this_02[2].Prerequisites.Mutex = *in_stack_00000038;
        *(ICustomPropertyRegistration **)&this_02[2].Prerequisites.Prerequisites.ArrayNum = pIVar1;
        *(undefined8 *)&this_02[2].LowLevelTask = 0;
        *(undefined8 *)&this_02[2].LowLevelTask.field_0x8 = 0;
        plVar2 = *(longlong **)&this_02[2].Prerequisites.Mutex;
        if (plVar2 != (longlong *)0x0) {
          puVar8 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2,local_1d8);
          uVar4 = puVar8[1];
          *(undefined8 *)&this_02[2].LowLevelTask = *puVar8;
          *(undefined8 *)&this_02[2].LowLevelTask.field_0x8 = uVar4;
        }
        Tasks::Private::TranslatePriority(*(Type *)&this_02[1].Pipe,local_2c7,&local_2c8);
        Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_2c7[0],local_2c8,None);
        if (this_02 != (FTaskBase *)0x0) {
          LOCK();
          this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
          UNLOCK();
        }
        Tasks::Private::FTaskBase::TryLaunch(this_02,0x238);
        if (param_4 !=
            (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> **)0x0
           ) {
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          local_2a0 = this_02;
          FSystemSubsequentTasks::AddRootTask
                    ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_2a0);
        }
        param_1->_padding_ = (longlong)this_02;
        FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar9,local_1c8._40_4_);
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_ ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
        FMemory::Free((void *)local_1c8._32_8_);
        return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
      }
    }
    else {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2331281323118820079>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                         ,0x511,"EntityManager->IsLockedDown()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar7.Reference = (FBaseGraphTask *)(*pcVar3)();
        return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
      }
    }
    local_298.CustomAccessors.Base = (uchar *)0x0;
    local_298.CustomAccessors.ViewNum = 0;
    local_298.CustomAccessors.Stride = 0;
    local_298.Traits =
         (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> *)
         *param_5;
    local_298.CustomProperties = (ICustomPropertyRegistration *)*in_stack_00000038;
    if (local_298.CustomProperties != (ICustomPropertyRegistration *)0x0) {
      puVar8 = (undefined8 *)
               (**(code **)((longlong)*local_298.CustomProperties + 8))
                         (local_298.CustomProperties,local_1e8);
      local_298.CustomAccessors.Base = (uchar *)*puVar8;
      local_298.CustomAccessors._8_8_ = puVar8[1];
    }
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                          *)(local_1c8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
    ::Run(this_00,&local_298);
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&> @ 1468e6520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **param_4,
          ICustomPropertyRegistration **param_5,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_6)

{
  ushort uVar1;
  ICustomPropertyRegistration *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  EEntityThreadingModel EVar11;
  FComponentMask *pFVar12;
  TRefCountPtr<FBaseGraphTask> TVar13;
  undefined8 *puVar14;
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  FTaskBase *pFVar16;
  FTaskBase *this_02;
  undefined4 *in_stack_00000040;
  undefined1 auStackY_2d8 [32];
  EExtendedTaskPriority local_2a8;
  ETaskPriority local_2a7 [3];
  FComponentTypeID local_2a4;
  FComponentTypeID local_2a2;
  FComponentTypeID local_2a0;
  FComponentTypeID local_29e;
  FComponentTypeID local_29c;
  FComponentTypeID local_29a;
  FComponentTypeID local_298;
  FComponentTypeID local_296;
  FComponentTypeID local_294;
  FComponentTypeID local_292;
  FComponentTypeID local_290;
  FComponentTypeID local_28e [3];
  FTaskBase *local_288 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_278;
  initializer_list<UE::MovieScene::FComponentTypeID> local_268;
  initializer_list<UE::MovieScene::FComponentTypeID> local_258;
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  initializer_list<UE::MovieScene::FComponentTypeID> local_238;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
  local_218;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [224];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar1 = *(ushort *)&this->Components;
  if (uVar1 == 0xffff) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar12 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar1 < (pFVar12->Bits).NumBits) &&
       ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) != 0)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        EVar11 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
        if (EVar11 != NoThreading) {
          local_278._First = &local_2a4;
          local_1c8._44_4_ = 4;
          local_278._Last = &local_2a2;
          local_2a4.Value = 0xffff;
          this_02 = (FTaskBase *)0x0;
          local_1c8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_1c8._40_4_ = 0;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1c8,&local_278);
          if ((*(short *)&this->Components == -1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("In->ComponentType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                                  ,0x1d5,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            TVar13.Reference = (FBaseGraphTask *)(*pcVar4)();
            return (TRefCountPtr<FBaseGraphTask>)TVar13.Reference;
          }
          local_2a0.Value = *(ushort *)&this->Components;
          local_268._First = &local_2a0;
          local_268._Last = &local_29e;
          FSystemTaskPrerequisites::FilterByComponent
                    ((FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1c8,&local_268);
          PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                    ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                      *)&(this->Components).field_0x2,(FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1c8);
          uVar1 = *(ushort *)&(this->Components).field_0xe;
          if (uVar1 != 0xffff) {
            local_258._First = &local_29c;
            local_258._Last = &local_29a;
            local_29c.Value = uVar1;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_258);
          }
          uVar1 = *(ushort *)&(this->Components).field_0x12;
          if (uVar1 != 0xffff) {
            local_248._First = &local_298;
            local_248._Last = &local_296;
            local_298.Value = uVar1;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_248);
          }
          uVar1 = *(ushort *)&(this->Components).field_0x16;
          if (uVar1 != 0xffff) {
            local_238._First = &local_294;
            local_238._Last = &local_292;
            local_294.Value = uVar1;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_238);
          }
          uVar1 = *(ushort *)&(this->Components).field_0x1a;
          if (uVar1 != 0xffff) {
            local_228._First = &local_290;
            local_228._Last = local_28e;
            local_290.Value = uVar1;
            FSystemTaskPrerequisites::FilterByComponent
                      ((FSystemTaskPrerequisites *)param_3,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_1c8,&local_228);
          }
          pFVar16 = (FTaskBase *)local_1c8;
          if (local_1c8._40_4_ == 0) {
            pFVar16 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x248,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar16);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityAllocationTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02__NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          ::
          TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          uVar5 = *in_stack_00000040;
          uVar6 = in_stack_00000040[1];
          uVar7 = in_stack_00000040[2];
          uVar8 = in_stack_00000040[3];
          pIVar2 = *param_5;
          *(FPropertyCompositeDefinition **)&this_02[2].Prerequisites.Mutex = param_6->DataPtr;
          *(undefined8 *)&this_02[2].LowLevelTask = 0;
          *(undefined8 *)&this_02[2].LowLevelTask.field_0x8 = 0;
          *(ICustomPropertyRegistration **)&this_02[2].Prerequisites.Prerequisites.ArrayNum = pIVar2
          ;
          plVar3 = *(longlong **)&this_02[2].Prerequisites.Mutex;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x10 = uVar5;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x14 = uVar6;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x18 = uVar7;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x1c = uVar8;
          if (plVar3 != (longlong *)0x0) {
            puVar14 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_1d8);
            uVar9 = puVar14[1];
            *(undefined8 *)&this_02[2].LowLevelTask = *puVar14;
            *(undefined8 *)&this_02[2].LowLevelTask.field_0x8 = uVar9;
          }
          Tasks::Private::TranslatePriority(*(Type *)&this_02[1].Pipe,local_2a7,&local_2a8);
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_2a7[0],local_2a8,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,0x248);
          if (param_4 != (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **)0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_288[0] = this_02;
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)local_288);
          }
          param_1->_padding_ = (longlong)this_02;
          FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar15,local_1c8._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1c8._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_1c8._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2331281323118820079>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                            ,0x511,"EntityManager->IsLockedDown()");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          TVar13.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar13.Reference;
        }
      }
      local_218.CustomAccessors.Base = (uchar *)0x0;
      local_218.CustomAccessors.ViewNum = 0;
      local_218.CustomAccessors.Stride = 0;
      local_218.Traits = (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> *)*param_5;
      local_218.CustomProperties = (ICustomPropertyRegistration *)param_6->DataPtr;
      local_218.CompositeDefinitions.DataPtr._0_4_ = *in_stack_00000040;
      local_218.CompositeDefinitions.DataPtr._4_4_ = in_stack_00000040[1];
      local_218.CompositeDefinitions.ArrayNum = in_stack_00000040[2];
      local_218.CompositeDefinitions._12_4_ = in_stack_00000040[3];
      if (local_218.CustomProperties != (ICustomPropertyRegistration *)0x0) {
        puVar14 = (undefined8 *)
                  (**(code **)((longlong)*local_218.CustomProperties + 8))
                            (local_218.CustomProperties,local_1e8);
        local_218.CustomAccessors.Base = (uchar *)*puVar14;
        local_218.CustomAccessors._8_8_ = puVar14[1];
      }
      this_00 = TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                ::
                TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                          ((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                            *)(local_1c8 + 0x30),(FEntityManager *)param_2,this);
      TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      ::Run(this_00,&local_218);
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      param_1->_padding_ = 0;
    }
    else {
      param_1->_padding_ = 0;
    }
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&> @ 1468e6950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> **param_4
          ,ICustomPropertyRegistration **param_5,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_6)

{
  ushort uVar1;
  ICustomPropertyRegistration *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  EEntityThreadingModel EVar11;
  FComponentMask *pFVar12;
  TRefCountPtr<FBaseGraphTask> TVar13;
  undefined8 *puVar14;
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  *this_00;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  FTaskBase *pFVar16;
  FTaskBase *this_02;
  undefined4 *in_stack_00000040;
  undefined1 auStackY_268 [32];
  EExtendedTaskPriority local_238;
  ETaskPriority local_237 [7];
  FTaskBase *local_230;
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
  local_228;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [240];
  void *local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar1 = *(ushort *)&this->Components;
  if (uVar1 == 0xffff) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar12 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar1 < (pFVar12->Bits).NumBits) &&
       ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) != 0)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (*(int *)(param_2[5].Prereqs.AllocatorInstance.InlineData + 0x2c) == 0) {
        EVar11 = FEntityManager::GetThreadingModel((FEntityManager *)param_2);
        if (EVar11 != NoThreading) {
          this_02 = (FTaskBase *)0x0;
          local_1d8._44_4_ = 4;
          local_1d8._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_1d8._40_4_ = 0;
          TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          ::PopulatePrerequisites
                    ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                      *)this,(FSystemTaskPrerequisites *)param_3,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1d8);
          pFVar16 = (FTaskBase *)local_1d8;
          if (local_1d8._40_4_ == 0) {
            pFVar16 = this_02;
          }
          this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(600,8);
          if (this_01 != (FTaskBase *)0x0) {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)this_01,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)pFVar16);
            this_01->_padding_ =
                 (longlong)
                 &
                 ___7__TGraphTask_U__TEntityAllocationTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02_03_04_05__NNNNNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623_U623_U623_U623__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          ::
          TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                      *)(this_02 + 1),(FEntityManager *)param_2,this);
          uVar5 = *in_stack_00000040;
          uVar6 = in_stack_00000040[1];
          uVar7 = in_stack_00000040[2];
          uVar8 = in_stack_00000040[3];
          pIVar2 = *param_5;
          *(FPropertyCompositeDefinition **)&this_02[2].LowLevelTask.field_0x8 = param_6->DataPtr;
          *(undefined8 *)&this_02[2].LowLevelTask.field_0x10 = 0;
          *(undefined8 *)&this_02[2].LowLevelTask.field_0x18 = 0;
          *(ICustomPropertyRegistration **)&this_02[2].LowLevelTask = pIVar2;
          plVar3 = *(longlong **)&this_02[2].LowLevelTask.field_0x8;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x20 = uVar5;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x24 = uVar6;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x28 = uVar7;
          *(undefined4 *)&this_02[2].LowLevelTask.field_0x2c = uVar8;
          if (plVar3 != (longlong *)0x0) {
            puVar14 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_1e8);
            uVar9 = puVar14[1];
            *(undefined8 *)&this_02[2].LowLevelTask.field_0x10 = *puVar14;
            *(undefined8 *)&this_02[2].LowLevelTask.field_0x18 = uVar9;
          }
          Tasks::Private::TranslatePriority((Type)this_02[1].ExecutingThreadId,local_237,&local_238)
          ;
          Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_237[0],local_238,None);
          if (this_02 != (FTaskBase *)0x0) {
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
          }
          Tasks::Private::FTaskBase::TryLaunch(this_02,600);
          if (param_4 !=
              (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> **)
              0x0) {
            if (this_02 != (FTaskBase *)0x0) {
              LOCK();
              this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
              UNLOCK();
            }
            local_230 = this_02;
            FSystemSubsequentTasks::AddRootTask
                      ((FSystemSubsequentTasks *)param_4,(FBaseGraphTask *)&local_230);
          }
          param_1->_padding_ = (longlong)this_02;
          FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1d8;
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1d8._32_8_ !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1d8._32_8_;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar15,local_1d8._40_4_);
          if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_1d8._32_8_ ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
          }
          FMemory::Free((void *)local_1d8._32_8_);
          return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
        }
      }
      else {
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2331281323118820079>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                            ,0x511,"EntityManager->IsLockedDown()");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          TVar13.Reference = (FBaseGraphTask *)(*pcVar4)();
          return (TRefCountPtr<FBaseGraphTask>)TVar13.Reference;
        }
      }
      local_228.CustomAccessors.Base = (uchar *)0x0;
      local_228.CustomAccessors.ViewNum = 0;
      local_228.CustomAccessors.Stride = 0;
      local_228.Traits =
           (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1> *)
           *param_5;
      local_228.CustomProperties = (ICustomPropertyRegistration *)param_6->DataPtr;
      local_228.CompositeDefinitions.DataPtr._0_4_ = *in_stack_00000040;
      local_228.CompositeDefinitions.DataPtr._4_4_ = in_stack_00000040[1];
      local_228.CompositeDefinitions.ArrayNum = in_stack_00000040[2];
      local_228.CompositeDefinitions._12_4_ = in_stack_00000040[3];
      if (local_228.CustomProperties != (ICustomPropertyRegistration *)0x0) {
        puVar14 = (undefined8 *)
                  (**(code **)((longlong)*local_228.CustomProperties + 8))
                            (local_228.CustomProperties,local_1f8);
        local_228.CustomAccessors.Base = (uchar *)*puVar14;
        local_228.CustomAccessors._8_8_ = puVar14[1];
      }
      this_00 = TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                ::
                TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                          ((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                            *)(local_1d8 + 0x30),(FEntityManager *)param_2,this);
      TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      ::Run(this_00,&local_228);
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      param_1->_padding_ = 0;
    }
    else {
      param_1->_padding_ = 0;
    }
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// RunInline_PerEntity<UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_> @ 1468faed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
::
RunInline_PerEntity<UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
           *this,FEntityManager *param_1,
          TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
          param_2)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  undefined1 auStack_1e8 [32];
  TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  local_1c8 [8];
  FEntityAllocationIteratorProxy local_1c0;
  FEntityAllocationIterator local_1b0;
  FEntityAllocationProxy local_198;
  FEntityAllocationIterator local_188;
  FEntityAllocationProxy local_168;
  undefined1 local_158 [4];
  FReadAccess aFStack_154 [18];
  FEntityComponentFilter local_130;
  TBitArray<TFixedAllocator<12>_> local_b0;
  TBitArray<TFixedAllocator<12>_> local_78;
  FEntityManager *local_40;
  FEntityAllocationWriteContext local_38 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (*(short *)&this->Components != -1 &&
      (*(short *)&(this->Components).field_0x4 != -1 &&
      *(short *)&(this->Components).field_0x2 != -1)) {
    _local_158 = *(undefined8 *)&this->Components;
    aFStack_154._4_8_ = *(undefined8 *)&(this->Components).field_0x8;
    aFStack_154._12_8_ = *(undefined8 *)&(this->Components).field_0x10;
    aFStack_154._20_8_ = *(undefined8 *)&(this->Components).field_0x18;
    aFStack_154._28_8_ = *(undefined8 *)&(this->Components).field_0x20;
    FEntityComponentFilter::FEntityComponentFilter(&local_130,&this->Filter);
    local_b0.NumBits = 0;
    local_b0.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_b0,&(this->DynamicReadMask).Bits);
    local_78.NumBits = 0;
    local_78.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_78,&(this->DynamicWriteMask).Bits);
    local_40 = param_1;
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_38,param_1);
    pFVar1 = local_40;
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      local_1c0.Manager = (FEntityManager *)0x0;
      local_1c0.Filter = (FEntityComponentFilter *)0x0;
      AccessorToString((FReadAccess *)local_158,local_40,(FString *)&local_1c0);
      AccessorToString((FReadAccess *)(local_158 + 2),pFVar1,(FString *)&local_1c0);
      AccessorToString((FReadAccess *)(local_158 + 4),pFVar1,(FString *)&local_1c0);
      Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject*___ptr64,FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>::Run(UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject*___ptr64,FWidgetMaterialHandle>&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_1c0.Manager != (FEntityManager *)0x0) {
        FMemory::Free(local_1c0.Manager);
      }
    }
    EVar2 = FEntityManager::GetThreadingModel(local_40);
    FEntityManager::Iterate(local_40,&local_1c0,&local_130);
    FEntityAllocationIterator::FEntityAllocationIterator
              (&local_1b0,local_1c0.Manager,local_1c0.Filter);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_188,local_1c0.Manager);
    bVar3 = FEntityAllocationIterator::operator!=(&local_1b0,&local_188);
    if (bVar3) {
      do {
        FEntityAllocationIterator::operator*(&local_1b0,&local_198);
        pFVar4 = FEntityAllocationProxy::GetAllocation(&local_198);
        pFVar5 = (FEntityAllocation *)0x0;
        if (EVar2 == NoThreading) {
          pFVar4->LockMode = LockFree;
          pFVar5 = pFVar4;
        }
        local_168.Manager = local_198.Manager;
        local_168.AllocationIndex = local_198.AllocationIndex;
        local_168._12_4_ = local_198._12_4_;
        TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
        ForEachEntityImpl<UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
                  (local_1c8,&local_168,local_38[0],
                   (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
                    *)local_158);
        if (pFVar5 != (FEntityAllocation *)0x0) {
          pFVar5->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_1b0);
        bVar3 = FEntityAllocationIterator::operator!=(&local_1b0,&local_188);
      } while (bVar3);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_188);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_1b0);
    if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// RunInline_PerEntity<UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_> @ 1468fb130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::
RunInline_PerEntity<UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
          (TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
           *this,FEntityManager *param_1,
          TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  FEntityManager *pFVar2;
  EEntityThreadingModel EVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocation *pFVar6;
  undefined1 auStack_1f8 [32];
  FEntityAllocationIteratorProxy local_1d8;
  FEntityAllocationIterator local_1c8;
  FEntityAllocationProxy local_1a8;
  FEntityAllocationIterator local_198;
  FEntityAllocationProxy local_178;
  undefined1 local_168 [4];
  FReadAccess FStack_164;
  FWriteAccess aFStack_162 [17];
  FEntityComponentFilter local_140;
  TBitArray<TFixedAllocator<12>_> local_c0;
  TBitArray<TFixedAllocator<12>_> local_88;
  FEntityManager *local_50;
  FEntityAllocationWriteContext local_48 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if (*(short *)&(this->Components).field_0x2 != -1 &&
      (*(short *)&(this->Components).field_0x6 != -1 &&
      *(short *)&(this->Components).field_0x4 != -1)) {
    _local_168 = *(undefined8 *)&this->Components;
    aFStack_162._2_8_ = *(undefined8 *)&(this->Components).field_0x8;
    aFStack_162._10_8_ = *(undefined8 *)&(this->Components).field_0x10;
    aFStack_162._18_8_ = *(undefined8 *)&(this->Components).field_0x18;
    aFStack_162._26_8_ = *(undefined8 *)&(this->Components).field_0x20;
    FEntityComponentFilter::FEntityComponentFilter(&local_140,&this->Filter);
    local_c0.NumBits = 0;
    local_c0.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_c0,&(this->DynamicReadMask).Bits);
    local_88.NumBits = 0;
    local_88.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_88,&(this->DynamicWriteMask).Bits);
    local_50 = param_1;
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_48,param_1);
    pFVar2 = local_50;
    if (6 < (byte)LogMovieSceneECS._0_1_) {
      local_1d8.Manager = (FEntityManager *)0x0;
      local_1d8.Filter = (FEntityComponentFilter *)0x0;
      AccessorToString((FEntityIDAccess *)local_168,local_50,(FString *)&local_1d8);
      AccessorToString((FReadAccess *)(local_168 + 2),pFVar2,(FString *)&local_1d8);
      AccessorToString((FReadAccess *)(local_168 + 4),pFVar2,(FString *)&local_1d8);
      AccessorToString((FWriteAccess *)(local_168 + 6),pFVar2,(FString *)&local_1d8);
      Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject*___ptr64,FWidgetMaterialHandle>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>::Run(UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject*___ptr64,FWidgetMaterialHandle>&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_1d8.Manager != (FEntityManager *)0x0) {
        FMemory::Free(local_1d8.Manager);
      }
    }
    EVar3 = FEntityManager::GetThreadingModel(local_50);
    FEntityManager::Iterate(local_50,&local_1d8,&local_140);
    FEntityAllocationIterator::FEntityAllocationIterator
              (&local_1c8,local_1d8.Manager,local_1d8.Filter);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_198,local_1d8.Manager);
    bVar4 = FEntityAllocationIterator::operator!=(&local_1c8,&local_198);
    if (bVar4) {
      do {
        FEntityAllocationIterator::operator*(&local_1c8,&local_1a8);
        pFVar5 = FEntityAllocationProxy::GetAllocation(&local_1a8);
        pFVar6 = (FEntityAllocation *)0x0;
        if (EVar3 == NoThreading) {
          pFVar5->LockMode = LockFree;
          pFVar6 = pFVar5;
        }
        local_178.Manager = local_1a8.Manager;
        local_178.AllocationIndex = local_1a8.AllocationIndex;
        local_178._12_4_ = local_1a8._12_4_;
        TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
        ForEachEntityImpl<UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
                  (param_2,&local_178,local_48[0],
                   (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
                    *)local_168);
        if (pFVar6 != (FEntityAllocation *)0x0) {
          pFVar6->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_1c8);
        bVar4 = FEntityAllocationIterator::operator!=(&local_1c8,&local_198);
      } while (bVar4);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_198);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_1c8);
    TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
    ::PostTask(param_2);
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_2->ReboundMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&> @ 1468fb3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **param_5,
          ICustomPropertyRegistration **param_6)

{
  ushort uVar1;
  ICustomPropertyRegistration *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar8;
  FTaskParams *this_00;
  bool bVar9;
  int iVar10;
  FTaskID FVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined8 *puVar13;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar14;
  undefined4 extraout_var;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ushort *puVar17;
  longlong *in_stack_00000040;
  undefined1 auStackY_198 [32];
  FTaskID local_148;
  TStatId local_140;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *local_130;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_128;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_120;
  FTaskParams *local_118;
  FEntityManager *local_110;
  code *local_108;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  **local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_d8;
  undefined1 local_c8 [56];
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_120 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_128 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if ((*(short *)&this->Components == -1 ||
       ((*(short *)&(this->Components).field_0x10 == -1 ||
        (*(short *)&(this->Components).field_0x14 == -1 ||
        *(short *)&(this->Components).field_0x12 == -1)) ||
       *(short *)&(this->Components).field_0xe == -1)) ||
     (local_118 = param_3, local_110 = param_1,
     bVar9 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                           *)this,(FEntityManager *)param_2), !bVar9)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_1468fb938;
  }
  pTVar12 = ::operator_new(0x70);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    local_140.StatIdPtr = (TStatIdData *)&DAT_00000010;
    pTVar12 = pTVar16;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623__MovieScene_UE__6B_
    ;
    pIVar2 = *param_6;
    pTVar12[2]._padding_ = *in_stack_00000040;
    *(ICustomPropertyRegistration **)&pTVar12[1].SharedReferenceCount = pIVar2;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    plVar3 = (longlong *)pTVar12[2]._padding_;
    if (plVar3 != (longlong *)0x0) {
      puVar13 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_e8);
      uVar5 = *puVar13;
      lVar6 = puVar13[1];
      pTVar12[2].SharedReferenceCount = (atomic<int>)(int)uVar5;
      pTVar12[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar5 >> 0x20);
      pTVar12[3]._padding_ = lVar6;
    }
    uVar7 = *(undefined4 *)&(this->Components).field_0x4;
    lVar6 = *(longlong *)&(this->Components).field_0x8;
    local_140.StatIdPtr = (TStatIdData *)(pTVar12 + 1);
    pTVar12[3].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar12[4]._padding_ = lVar6;
    uVar7 = *(undefined4 *)&(this->Components).field_0x14;
    lVar6 = *(longlong *)&(this->Components).field_0x18;
    pTVar12[4].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x10;
    pTVar12[4].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar12[5]._padding_ = lVar6;
    uVar7 = *(undefined4 *)&(this->Components).field_0x24;
    lVar6 = *(longlong *)&(this->Components).field_0x28;
    pTVar12[5].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x20;
    pTVar12[5].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar12[6]._padding_ = lVar6;
    uVar7 = *(undefined4 *)&(this->Components).field_0x34;
    pTVar12[6].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x30;
    pTVar12[6].WeakReferenceCount = (atomic<int>)uVar7;
    if ((local_140.StatIdPtr == (TStatIdData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return (FTaskID)iVar10;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  local_c8._48_8_ = (FScriptContainerElement *)0x0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)local_c8,&(this->DynamicReadMask).Bits);
  local_90.NumBits = 0;
  local_90.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_90,&(this->DynamicWriteMask).Bits);
  uVar1 = *(ushort *)&this->Components;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  puVar17 = (ushort *)&(this->Components).field_0x2;
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  do {
    uVar1 = *puVar17;
    if (uVar1 != 0xffff) {
      iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
      if (0 < iVar10) {
        TBitArray<TFixedAllocator<12>_>::Add
                  ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
      }
      if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return (FTaskID)iVar10;
      }
      *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
           *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
    }
    uVar15 = (int)pTVar16 + 1;
    pTVar16 = (TReferenceControllerBase<1> *)(ulonglong)uVar15;
    puVar17 = puVar17 + 2;
  } while (uVar15 < 3);
  uVar1 = *(ushort *)&(this->Components).field_0xe;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x10;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x12;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x14;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  local_100 = &local_130;
  local_108 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_130 = this;
  pTVar14 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_d8,local_128);
  this_00 = local_118;
  pTVar8 = local_120;
  local_f8._0_8_ = local_140.StatIdPtr;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8._8_8_ = pTVar12;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)local_118,(FTaskParams *)&local_148,local_120,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_f8,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar14,(FEntityComponentFilter *)&local_108,&(this->Filter).AllMask,
             (FComponentMask *)local_c8);
  if (local_148.Index == -1) {
    if (((ulonglong)pTVar8[1].Object & 4) != 0) {
      FVar11 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)this_00);
      local_148.Index = *(int *)CONCAT44(extraout_var,FVar11.Index);
      if (local_148.Index != -1) goto LAB_1468fb8f4;
    }
  }
  else {
LAB_1468fb8f4:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
  }
  param_1 = local_110;
  *(int *)&local_110->_padding_ = local_148.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
LAB_1468fb938:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&> @ 1468fb960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>
                   **param_5,ICustomPropertyRegistration **param_6)

{
  ushort uVar1;
  ICustomPropertyRegistration *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar8;
  FTaskParams *this_00;
  bool bVar9;
  int iVar10;
  FTaskID FVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined8 *puVar13;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar14;
  undefined4 extraout_var;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ushort *puVar17;
  longlong *in_stack_00000040;
  undefined1 auStackY_198 [32];
  FTaskID local_148;
  TStatId local_140;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  *local_130;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_128;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_120;
  FTaskParams *local_118;
  FEntityManager *local_110;
  code *local_108;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  **local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_d8;
  undefined1 local_c8 [56];
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_120 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_128 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if ((*(short *)&this->Components == -1 ||
       (*(short *)&(this->Components).field_0xe == -1 ||
       ((*(short *)&(this->Components).field_0x12 == -1 ||
        ((*(short *)&(this->Components).field_0x16 == -1 ||
         (*(short *)&(this->Components).field_0x1a == -1 ||
         *(short *)&(this->Components).field_0x18 == -1)) ||
        *(short *)&(this->Components).field_0x14 == -1)) ||
       *(short *)&(this->Components).field_0x10 == -1))) ||
     (local_118 = param_3, local_110 = param_1,
     bVar9 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
             ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                           *)this,(FEntityManager *)param_2), !bVar9)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_1468fc036;
  }
  pTVar12 = ::operator_new(0x78);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    local_140.StatIdPtr = (TStatIdData *)&DAT_00000010;
    pTVar12 = pTVar16;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNNNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623_U623_U623_U623__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNNNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
    ;
    pIVar2 = *param_6;
    pTVar12[2]._padding_ = *in_stack_00000040;
    *(ICustomPropertyRegistration **)&pTVar12[1].SharedReferenceCount = pIVar2;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    plVar3 = (longlong *)pTVar12[2]._padding_;
    if (plVar3 != (longlong *)0x0) {
      puVar13 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_e8);
      uVar5 = *puVar13;
      lVar6 = puVar13[1];
      pTVar12[2].SharedReferenceCount = (atomic<int>)(int)uVar5;
      pTVar12[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar5 >> 0x20);
      pTVar12[3]._padding_ = lVar6;
    }
    uVar7 = *(undefined4 *)&(this->Components).field_0x4;
    lVar6 = *(longlong *)&(this->Components).field_0x8;
    local_140.StatIdPtr = (TStatIdData *)(pTVar12 + 1);
    pTVar12[3].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar12[4]._padding_ = lVar6;
    uVar7 = *(undefined4 *)&(this->Components).field_0x14;
    lVar6 = *(longlong *)&(this->Components).field_0x18;
    pTVar12[4].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x10;
    pTVar12[4].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar12[5]._padding_ = lVar6;
    uVar7 = *(undefined4 *)&(this->Components).field_0x24;
    lVar6 = *(longlong *)&(this->Components).field_0x28;
    pTVar12[5].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x20;
    pTVar12[5].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar12[6]._padding_ = lVar6;
    uVar7 = *(undefined4 *)&(this->Components).field_0x34;
    lVar6 = *(longlong *)&(this->Components).field_0x38;
    pTVar12[6].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x30;
    pTVar12[6].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar12[7]._padding_ = lVar6;
    if ((local_140.StatIdPtr == (TStatIdData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return (FTaskID)iVar10;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  local_c8._48_8_ = (FScriptContainerElement *)0x0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)local_c8,&(this->DynamicReadMask).Bits);
  local_90.NumBits = 0;
  local_90.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_90,&(this->DynamicWriteMask).Bits);
  uVar1 = *(ushort *)&this->Components;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  puVar17 = (ushort *)&(this->Components).field_0x2;
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  do {
    uVar1 = *puVar17;
    if (uVar1 != 0xffff) {
      iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
      if (0 < iVar10) {
        TBitArray<TFixedAllocator<12>_>::Add
                  ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
      }
      if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return (FTaskID)iVar10;
      }
      *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
           *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
    }
    uVar15 = (int)pTVar16 + 1;
    pTVar16 = (TReferenceControllerBase<1> *)(ulonglong)uVar15;
    puVar17 = puVar17 + 2;
  } while (uVar15 < 3);
  uVar1 = *(ushort *)&(this->Components).field_0xe;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x10;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x12;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x14;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x16;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x18;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  uVar1 = *(ushort *)&(this->Components).field_0x1a;
  iVar10 = ((uint)uVar1 - local_c8._48_4_) + 1;
  if (0 < iVar10) {
    TBitArray<TFixedAllocator<12>_>::Add((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar10);
  }
  if (((int)local_c8._48_4_ <= (int)(uint)uVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return (FTaskID)iVar10;
  }
  *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
  local_100 = &local_130;
  local_108 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_130 = this;
  pTVar14 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_d8,local_128);
  this_00 = local_118;
  pTVar8 = local_120;
  local_f8._0_8_ = local_140.StatIdPtr;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8._8_8_ = pTVar12;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)local_118,(FTaskParams *)&local_148,local_120,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_f8,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar14,(FEntityComponentFilter *)&local_108,&(this->Filter).AllMask,
             (FComponentMask *)local_c8);
  if (local_148.Index == -1) {
    if (((ulonglong)pTVar8[1].Object & 4) != 0) {
      FVar11 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)this_00);
      local_148.Index = *(int *)CONCAT44(extraout_var,FVar11.Index);
      if (local_148.Index != -1) goto LAB_1468fbff2;
    }
  }
  else {
LAB_1468fbff2:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
  }
  param_1 = local_110;
  *(int *)&local_110->_padding_ = local_148.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
LAB_1468fc036:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&> @ 1468fc060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1> **param_5,
          ICustomPropertyRegistration **param_6,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_7)

{
  ushort uVar1;
  ICustomPropertyRegistration *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar12;
  FTaskParams *this_00;
  bool bVar13;
  int iVar14;
  FTaskID FVar15;
  FComponentMask *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined8 *puVar18;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar19;
  undefined4 extraout_var;
  uint uVar20;
  TReferenceControllerBase<1> *pTVar21;
  ushort *puVar22;
  atomic<int> *in_stack_00000048;
  undefined1 auStackY_198 [32];
  FTaskID local_148;
  TStatId local_140;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  *local_130;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_128;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_120;
  FTaskParams *local_118;
  FEntityManager *local_110;
  code *local_108;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  **local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_d8;
  undefined1 local_c8 [56];
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar1 = *(ushort *)&this->Components;
  local_120 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_128 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if (uVar1 != 0xffff) {
    local_118 = param_3;
    local_110 = param_1;
    pFVar16 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar1 < (pFVar16->Bits).NumBits) &&
       ((*(uint *)(pFVar16->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      pTVar17 = ::operator_new(0x88);
      pTVar21 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        local_140.StatIdPtr = (TStatIdData *)&DAT_00000010;
        pTVar17 = pTVar21;
      }
      else {
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02__NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar17[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02__NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623__MovieScene_UE__6B_
        ;
        aVar5 = *in_stack_00000048;
        aVar6 = in_stack_00000048[1];
        aVar7 = in_stack_00000048[2];
        aVar8 = in_stack_00000048[3];
        pIVar2 = *param_6;
        pTVar17[2]._padding_ = (longlong)param_7->DataPtr;
        pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar17[3]._padding_ = 0;
        *(ICustomPropertyRegistration **)&pTVar17[1].SharedReferenceCount = pIVar2;
        plVar3 = (longlong *)pTVar17[2]._padding_;
        pTVar17[3].SharedReferenceCount = aVar5;
        pTVar17[3].WeakReferenceCount = aVar6;
        *(atomic<int> *)&pTVar17[4]._padding_ = aVar7;
        *(atomic<int> *)((longlong)&pTVar17[4]._padding_ + 4) = aVar8;
        if (plVar3 != (longlong *)0x0) {
          puVar18 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_e8);
          uVar9 = *puVar18;
          lVar10 = puVar18[1];
          pTVar17[2].SharedReferenceCount = (atomic<int>)(int)uVar9;
          pTVar17[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
          pTVar17[3]._padding_ = lVar10;
        }
        uVar11 = *(undefined4 *)&(this->Components).field_0x4;
        lVar10 = *(longlong *)&(this->Components).field_0x8;
        local_140.StatIdPtr = (TStatIdData *)(pTVar17 + 1);
        pTVar17[4].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x0;
        pTVar17[4].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[5]._padding_ = lVar10;
        uVar11 = *(undefined4 *)&(this->Components).field_0x14;
        lVar10 = *(longlong *)&(this->Components).field_0x18;
        pTVar17[5].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x10
        ;
        pTVar17[5].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[6]._padding_ = lVar10;
        uVar11 = *(undefined4 *)&(this->Components).field_0x24;
        lVar10 = *(longlong *)&(this->Components).field_0x28;
        pTVar17[6].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x20
        ;
        pTVar17[6].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[7]._padding_ = lVar10;
        uVar11 = *(undefined4 *)&(this->Components).field_0x34;
        lVar10 = *(longlong *)&(this->Components).field_0x38;
        pTVar17[7].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x30
        ;
        pTVar17[7].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[8]._padding_ = lVar10;
        if (local_140.StatIdPtr == (TStatIdData *)0x0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      local_c8._48_8_ = (FScriptContainerElement *)0x0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)local_c8,&(this->DynamicReadMask).Bits);
      local_90.NumBits = 0;
      local_90.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_90,&(this->DynamicWriteMask).Bits);
      uVar1 = *(ushort *)&this->Components;
      iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
      if (0 < iVar14) {
        TBitArray<TFixedAllocator<12>_>::Add
                  ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
      }
      if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          iVar14 = (*pcVar4)();
          return (FTaskID)iVar14;
        }
      }
      puVar22 = (ushort *)&(this->Components).field_0x2;
      *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
           *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      do {
        uVar1 = *puVar22;
        if (uVar1 != 0xffff) {
          iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
          if (0 < iVar14) {
            TBitArray<TFixedAllocator<12>_>::Add
                      ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
          }
          if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L"");
            if (bVar13) {
              pcVar4 = (code *)swi(3);
              iVar14 = (*pcVar4)();
              return (FTaskID)iVar14;
            }
          }
          *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
               *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
        }
        uVar20 = (int)pTVar21 + 1;
        pTVar21 = (TReferenceControllerBase<1> *)(ulonglong)uVar20;
        puVar22 = puVar22 + 2;
      } while (uVar20 < 3);
      uVar1 = *(ushort *)&(this->Components).field_0xe;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x12;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x16;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x1a;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      local_100 = &local_130;
      local_108 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_130 = this;
      pTVar19 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_d8,local_128);
      this_00 = local_118;
      pTVar12 = local_120;
      local_f8._0_8_ = local_140.StatIdPtr;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8._8_8_ = pTVar17;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)local_118,(FTaskParams *)&local_148,local_120,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_f8,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar19,(FEntityComponentFilter *)&local_108,&(this->Filter).AllMask,
                 (FComponentMask *)local_c8);
      if (local_148.Index == -1) {
        if (((ulonglong)pTVar12[1].Object & 4) != 0) {
          FVar15 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)this_00);
          local_148.Index = *(int *)CONCAT44(extraout_var,FVar15.Index);
          if (local_148.Index != -1) goto LAB_1468fc5b8;
        }
      }
      else {
LAB_1468fc5b8:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
      }
      param_1 = local_110;
      *(int *)&local_110->_padding_ = local_148.Index;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      goto LAB_1468fc602;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_1468fc602:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&> @ 1468fc630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>
                   **param_5,ICustomPropertyRegistration **param_6,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_7)

{
  ushort uVar1;
  ICustomPropertyRegistration *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar12;
  FTaskParams *this_00;
  bool bVar13;
  int iVar14;
  FTaskID FVar15;
  FComponentMask *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined8 *puVar18;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar19;
  undefined4 extraout_var;
  uint uVar20;
  TReferenceControllerBase<1> *pTVar21;
  ushort *puVar22;
  atomic<int> *in_stack_00000048;
  undefined1 auStackY_198 [32];
  FTaskID local_148;
  TStatId local_140;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  *local_130;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_128;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_120;
  FTaskParams *local_118;
  FEntityManager *local_110;
  code *local_108;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  **local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_d8;
  undefined1 local_c8 [56];
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar1 = *(ushort *)&this->Components;
  local_120 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_128 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if (uVar1 != 0xffff) {
    local_118 = param_3;
    local_110 = param_1;
    pFVar16 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((int)(uint)uVar1 < (pFVar16->Bits).NumBits) &&
       ((*(uint *)(pFVar16->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      pTVar17 = ::operator_new(0x98);
      pTVar21 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        local_140.StatIdPtr = (TStatIdData *)&DAT_00000010;
        pTVar17 = pTVar21;
      }
      else {
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02_03_04_05__NNNNNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623_U623_U623_U623__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar17[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02_03_04_05__NNNNNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
        ;
        aVar5 = *in_stack_00000048;
        aVar6 = in_stack_00000048[1];
        aVar7 = in_stack_00000048[2];
        aVar8 = in_stack_00000048[3];
        pIVar2 = *param_6;
        pTVar17[2]._padding_ = (longlong)param_7->DataPtr;
        pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar17[3]._padding_ = 0;
        *(ICustomPropertyRegistration **)&pTVar17[1].SharedReferenceCount = pIVar2;
        plVar3 = (longlong *)pTVar17[2]._padding_;
        pTVar17[3].SharedReferenceCount = aVar5;
        pTVar17[3].WeakReferenceCount = aVar6;
        *(atomic<int> *)&pTVar17[4]._padding_ = aVar7;
        *(atomic<int> *)((longlong)&pTVar17[4]._padding_ + 4) = aVar8;
        if (plVar3 != (longlong *)0x0) {
          puVar18 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_e8);
          uVar9 = *puVar18;
          lVar10 = puVar18[1];
          pTVar17[2].SharedReferenceCount = (atomic<int>)(int)uVar9;
          pTVar17[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar9 >> 0x20);
          pTVar17[3]._padding_ = lVar10;
        }
        uVar11 = *(undefined4 *)&(this->Components).field_0x4;
        lVar10 = *(longlong *)&(this->Components).field_0x8;
        local_140.StatIdPtr = (TStatIdData *)(pTVar17 + 1);
        pTVar17[4].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x0;
        pTVar17[4].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[5]._padding_ = lVar10;
        uVar11 = *(undefined4 *)&(this->Components).field_0x14;
        lVar10 = *(longlong *)&(this->Components).field_0x18;
        pTVar17[5].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x10
        ;
        pTVar17[5].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[6]._padding_ = lVar10;
        uVar11 = *(undefined4 *)&(this->Components).field_0x24;
        lVar10 = *(longlong *)&(this->Components).field_0x28;
        pTVar17[6].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x20
        ;
        pTVar17[6].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[7]._padding_ = lVar10;
        uVar11 = *(undefined4 *)&(this->Components).field_0x34;
        lVar10 = *(longlong *)&(this->Components).field_0x38;
        pTVar17[7].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x30
        ;
        pTVar17[7].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[8]._padding_ = lVar10;
        uVar11 = *(undefined4 *)&(this->Components).field_0x44;
        lVar10 = *(longlong *)&(this->Components).field_0x48;
        pTVar17[8].SharedReferenceCount = (atomic<int>)*(undefined4 *)&(this->Components).field_0x40
        ;
        pTVar17[8].WeakReferenceCount = (atomic<int>)uVar11;
        pTVar17[9]._padding_ = lVar10;
        if (local_140.StatIdPtr == (TStatIdData *)0x0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      local_c8._48_8_ = (FScriptContainerElement *)0x0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)local_c8,&(this->DynamicReadMask).Bits);
      local_90.NumBits = 0;
      local_90.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_90,&(this->DynamicWriteMask).Bits);
      uVar1 = *(ushort *)&this->Components;
      iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
      if (0 < iVar14) {
        TBitArray<TFixedAllocator<12>_>::Add
                  ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
      }
      if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          iVar14 = (*pcVar4)();
          return (FTaskID)iVar14;
        }
      }
      puVar22 = (ushort *)&(this->Components).field_0x2;
      *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
           *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      do {
        uVar1 = *puVar22;
        if (uVar1 != 0xffff) {
          iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
          if (0 < iVar14) {
            TBitArray<TFixedAllocator<12>_>::Add
                      ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
          }
          if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L"");
            if (bVar13) {
              pcVar4 = (code *)swi(3);
              iVar14 = (*pcVar4)();
              return (FTaskID)iVar14;
            }
          }
          *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
               *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
        }
        uVar20 = (int)pTVar21 + 1;
        pTVar21 = (TReferenceControllerBase<1> *)(ulonglong)uVar20;
        puVar22 = puVar22 + 2;
      } while (uVar20 < 3);
      uVar1 = *(ushort *)&(this->Components).field_0xe;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x12;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x16;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x1a;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x1e;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x22;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      uVar1 = *(ushort *)&(this->Components).field_0x26;
      if (uVar1 != 0xffff) {
        iVar14 = ((uint)uVar1 - local_c8._48_4_) + 1;
        if (0 < iVar14) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)local_c8,false,iVar14);
        }
        if ((int)local_c8._48_4_ <= (int)(uint)uVar1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            iVar14 = (*pcVar4)();
            return (FTaskID)iVar14;
          }
        }
        *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(local_c8 + (ulonglong)(uVar1 >> 5) * 4) | 1 << ((byte)uVar1 & 0x1f);
      }
      local_100 = &local_130;
      local_108 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_130 = this;
      pTVar19 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_d8,local_128);
      this_00 = local_118;
      pTVar12 = local_120;
      local_f8._0_8_ = local_140.StatIdPtr;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8._8_8_ = pTVar17;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)local_118,(FTaskParams *)&local_148,local_120,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_f8,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar19,(FEntityComponentFilter *)&local_108,&(this->Filter).AllMask,
                 (FComponentMask *)local_c8);
      if (local_148.Index == -1) {
        if (((ulonglong)pTVar12[1].Object & 4) != 0) {
          FVar15 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)this_00);
          local_148.Index = *(int *)CONCAT44(extraout_var,FVar15.Index);
          if (local_148.Index != -1) goto LAB_1468fccdd;
        }
      }
      else {
LAB_1468fccdd:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
      }
      param_1 = local_110;
      *(int *)&local_110->_padding_ = local_148.Index;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      goto LAB_1468fcd27;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_1468fcd27:
  return (FTaskID)(int)param_1;
}

