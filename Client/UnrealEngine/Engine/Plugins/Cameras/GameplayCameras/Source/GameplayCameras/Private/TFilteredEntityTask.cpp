// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&> @ 14d5ee1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **param_4,
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
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
  TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
               ___7__TGraphTask_U__TEntityAllocationTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623__MovieScene_UE____6B_
          ;
          pFVar10 = this_01;
        }
        TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
        ::
        TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                  ((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
        if (param_4 != (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **)0x0) {
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
    local_270.Traits = (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> *)*param_5;
    local_270.CustomProperties = (ICustomPropertyRegistration *)*in_stack_00000038;
    if (local_270.CustomProperties != (ICustomPropertyRegistration *)0x0) {
      puVar9 = (undefined8 *)
               (**(code **)((longlong)*local_270.CustomProperties + 8))
                         (local_270.CustomProperties,local_1e8);
      local_270.CustomAccessors.Base = (uchar *)*puVar9;
      local_270.CustomAccessors._8_8_ = puVar9[1];
    }
    this_00 = TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
              ::
              TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                        ((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                          *)(local_1c8 + 0x30),(FEntityManager *)param_2,this);
    TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
    ::Run(this_00,&local_270);
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    param_1->_padding_ = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&> @ 14d5ee680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
Dispatch_PerAllocation<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,
          TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **param_4,
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
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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
  TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
                 ___7__TGraphTask_U__TEntityAllocationTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02__NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623__MovieScene_UE____6B_
            ;
            this_02 = this_01;
          }
          TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          ::
          TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                    ((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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
          if (param_4 != (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **)0x0) {
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
      local_218.Traits = (TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> *)*param_5;
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
      this_00 = TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                ::
                TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                          ((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                            *)(local_1c8 + 0x30),(FEntityManager *)param_2,this);
      TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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

// ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&> @ 14d5f8fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **param_5,
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
    goto LAB_14d5f9528;
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
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_U__TSetCompositePropertyValuesImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TReadAccess_N_23_U623_U623_U623__MovieScene_UE__6B_
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
              TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
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
      if (local_148.Index != -1) goto LAB_14d5f94e4;
    }
  }
  else {
LAB_14d5f94e4:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
  }
  param_1 = local_110;
  *(int *)&local_110->_padding_ = local_148.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
LAB_14d5f9528:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&> @ 14d5f9550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1> **param_5,
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
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02__NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar17[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_U__TSetPartialPropertyValuesImpl_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE__U__TPropertyMetaData___V_23_U__TIntegerSequence_H_0A__00_01_02__NNNN_MovieScene_UE__U__TReadAccess_PEAVUObject___23_U__TReadOneOfAccessor_UFCustomPropertyIndex_MovieScene_UE__GV__TSharedPtr_VFTrackInstancePropertyBindings___00___23_U__TOptionalReadAccess_N_23_U623_U623_U623__MovieScene_UE__6B_
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
                  TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_const_*_&,UE::MovieScene::ICustomPropertyRegistration_*_const_&,TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int>_&>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
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
          if (local_148.Index != -1) goto LAB_14d5f9aa8;
        }
      }
      else {
LAB_14d5f9aa8:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)this_00,local_148,(FTaskID)0xffffffff);
      }
      param_1 = local_110;
      *(int *)&local_110->_padding_ = local_148.Index;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      goto LAB_14d5f9af2;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_14d5f9af2:
  return (FTaskID)(int)param_1;
}

