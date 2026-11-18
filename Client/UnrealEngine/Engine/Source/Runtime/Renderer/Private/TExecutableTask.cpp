// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// Create @ 144909510

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>(_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_const_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FGPUSceneUploadTaskContext *pFVar1;
  bool bVar2;
  undefined3 uVar3;
  Type TVar4;
  undefined7 uVar5;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>(_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_const_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this != (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>(_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterDynamicPrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_const_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____AddCommandListSetupTask_V<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterDynamicPrimitives___FGPUScene__AEAAXAEAVFRDGBuilder__AEBUFRegisteredBuffers_2_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterDynamicPrimitives__AEBVFTaskHandle_Private_Tasks_UE___Z_AEBV789UE___FRDGBuilder__QEAA_AVFTaskHandle_Private_Tasks_UE____QEAV<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterDynamicPrimitives___FGPUScene__AEAAXAEAV2_AEBUFRegisteredBuffers_8_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterDynamicPrimitives__AEBV3456__Z_PEAVFPipe_56_4W4ETaskPriority_LowLevelTasks___NW4ERDGSetupTaskWaitPoint___Z_XX_Private_Tasks_UE__6B_
    ;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    pFVar1 = (param_2->TaskLambda).TaskContext;
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FGPUSceneUploadTaskContext **)&this->field_0xe0 = pFVar1;
    bVar2 = (param_2->TaskLambda).bExecuteInParallel;
    uVar3 = *(undefined3 *)&(param_2->TaskLambda).field_0x11;
    TVar4 = (param_2->TaskLambda).FeatureLevel;
    *(FUploadDataSourceAdapterScenePrimitives **)&this->field_0xe8 =
         (param_2->TaskLambda).UploadDataSourceAdapter;
    this->field_0xf0 = bVar2;
    *(undefined3 *)&this->field_0xf1 = uVar3;
    *(Type *)&this->field_0xf4 = TVar4;
    bVar2 = param_2->bAllocateCommandListForTask;
    uVar5 = *(undefined7 *)&param_2->field_0x29;
    *(FRHICommandList **)&this->field_0xf8 = param_2->RHICmdListTask;
    this->field_0x100 = bVar2;
    *(undefined7 *)&this->field_0x101 = uVar5;
    *(undefined ***)this =
         &
         ___7__TExecutableTask_V<lambda_1>__1____AddCommandListSetupTask_V<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterDynamicPrimitives___FGPUScene__AEAAXAEAVFRDGBuilder__AEBUFRegisteredBuffers_2_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterDynamicPrimitives__AEBVFTaskHandle_Private_Tasks_UE___Z_AEBV789UE___FRDGBuilder__QEAA_AVFTaskHandle_Private_Tasks_UE____QEAV<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterDynamicPrimitives___FGPUScene__AEAAXAEAV2_AEBUFRegisteredBuffers_8_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterDynamicPrimitives__AEBV3456__Z_PEAVFPipe_56_4W4ETaskPriority_LowLevelTasks___NW4ERDGSetupTaskWaitPoint___Z__Private_Tasks_UE__6B_
    ;
  }
  return this;
}

// Create @ 1449095e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>(_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_const_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FGPUSceneUploadTaskContext *pFVar1;
  bool bVar2;
  undefined3 uVar3;
  Type TVar4;
  undefined7 uVar5;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>(_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_const_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this != (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>(_private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder_&,FGPUScene::FRegisteredBuffers_const_&,FRDGExternalAccessQueue_*,FUploadDataSourceAdapterScenePrimitives_const_&,UE::Tasks::Private::FTaskHandle_const_&)_::_2_::<lambda_2>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_const_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____AddCommandListSetupTask_V<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterScenePrimitives___FGPUScene__AEAAXAEAVFRDGBuilder__AEBUFRegisteredBuffers_2_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterScenePrimitives__AEBVFTaskHandle_Private_Tasks_UE___Z_AEBV789UE___FRDGBuilder__QEAA_AVFTaskHandle_Private_Tasks_UE____QEAV<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterScenePrimitives___FGPUScene__AEAAXAEAV2_AEBUFRegisteredBuffers_8_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterScenePrimitives__AEBV3456__Z_PEAVFPipe_56_4W4ETaskPriority_LowLevelTasks___NW4ERDGSetupTaskWaitPoint___Z_XX_Private_Tasks_UE__6B_
    ;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    pFVar1 = (param_2->TaskLambda).TaskContext;
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FGPUSceneUploadTaskContext **)&this->field_0xe0 = pFVar1;
    bVar2 = (param_2->TaskLambda).bExecuteInParallel;
    uVar3 = *(undefined3 *)&(param_2->TaskLambda).field_0x11;
    TVar4 = (param_2->TaskLambda).FeatureLevel;
    *(FUploadDataSourceAdapterDynamicPrimitives **)&this->field_0xe8 =
         (param_2->TaskLambda).UploadDataSourceAdapter;
    this->field_0xf0 = bVar2;
    *(undefined3 *)&this->field_0xf1 = uVar3;
    *(Type *)&this->field_0xf4 = TVar4;
    bVar2 = param_2->bAllocateCommandListForTask;
    uVar5 = *(undefined7 *)&param_2->field_0x29;
    *(FRHICommandList **)&this->field_0xf8 = param_2->RHICmdListTask;
    this->field_0x100 = bVar2;
    *(undefined7 *)&this->field_0x101 = uVar5;
    *(undefined ***)this =
         &
         ___7__TExecutableTask_V<lambda_1>__1____AddCommandListSetupTask_V<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterScenePrimitives___FGPUScene__AEAAXAEAVFRDGBuilder__AEBUFRegisteredBuffers_2_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterScenePrimitives__AEBVFTaskHandle_Private_Tasks_UE___Z_AEBV789UE___FRDGBuilder__QEAA_AVFTaskHandle_Private_Tasks_UE____QEAV<lambda_2>__1____UploadGeneral_UFUploadDataSourceAdapterScenePrimitives___FGPUScene__AEAAXAEAV2_AEBUFRegisteredBuffers_8_PEAVFRDGExternalAccessQueue__AEBUFUploadDataSourceAdapterScenePrimitives__AEBV3456__Z_PEAVFPipe_56_4W4ETaskPriority_LowLevelTasks___NW4ERDGSetupTaskWaitPoint___Z__Private_Tasks_UE__6B_
    ;
  }
  return this;
}

// Create @ 14504e6c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_public:_static_class_Nanite::FPackedViewArray_*___cdecl_Nanite::FPackedViewArray::CreateWithSetupTask(FRDGBuilder_&,unsigned_int,TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>_&&,UE::Tasks::FPipe_*,bool)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_static_class_Nanite::FPackedViewArray_*___cdecl_Nanite::FPackedViewArray::CreateWithSetupTask(FRDGBuilder_&,unsigned_int,TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>_&&,UE::Tasks::FPipe_*,bool)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddSetupTask<`Nanite::FPackedViewArray::CreateWithSetupTask'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FUpdater *pFVar1;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_public:_static_class_Nanite::FPackedViewArray_*___cdecl_Nanite::FPackedViewArray::CreateWithSetupTask(FRDGBuilder_&,unsigned_int,TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>_&&,UE::Tasks::FPipe_*,bool)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_static_class_Nanite::FPackedViewArray_*___cdecl_Nanite::FPackedViewArray::CreateWithSetupTask(FRDGBuilder_&,unsigned_int,TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>_&&,UE::Tasks::FPipe_*,bool)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this != (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_public:_static_class_Nanite::FPackedViewArray_*___cdecl_Nanite::FPackedViewArray::CreateWithSetupTask(FRDGBuilder_&,unsigned_int,TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>_&&,UE::Tasks::FPipe_*,bool)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_static_class_Nanite::FPackedViewArray_*___cdecl_Nanite::FPackedViewArray::CreateWithSetupTask(FRDGBuilder_&,unsigned_int,TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>_&&,UE::Tasks::FPipe_*,bool)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FPackedViewArray::CreateWithSetupTask'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FUpdater **)&this->field_0xe0 = (param_2->TaskLambda).__this;
    *(FUpdater **)&this->field_0xf0 = param_2[1].TaskLambda.__this;
    *(FUpdater **)&this->field_0x118 = param_2[3].TaskLambda.UploadMaterialData.__this;
    param_2[3].TaskLambda.UploadMaterialData.__this = (FUpdater *)0x0;
    pFVar1 = param_2[2].TaskLambda.UploadMaterialData.__this;
    *(FUpdater **)&this->field_0x100 = param_2[2].TaskLambda.__this;
    *(FUpdater **)&this->field_0x108 = pFVar1;
    *(FUpdater **)&this->field_0x110 = param_2[3].TaskLambda.__this;
    if (*(longlong *)&this->field_0xf0 != 0) {
      param_2[1].TaskLambda.__this = (FUpdater *)0x0;
    }
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddSetupTask<`Nanite::FPackedViewArray::CreateWithSetupTask'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

// Create @ 1451c3120

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`LaunchSceneRenderTask<`BeginUpdateExposureCompensationCurveLUT'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
  *pTVar7;
  int iVar8;
  longlong lVar9;
  longlong *lpTlsValue;
  
  plVar5 = TlsGetValue(SmallTaskAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = ::operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
    plVar5 = lpTlsValue;
  }
  pTVar7 = (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
            *)plVar5[1];
  if (pTVar7 == (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
                 *)0x0) {
    pTVar7 = (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
              *)*plVar5;
    if (pTVar7 == (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
                   *)0x0) {
      pTVar7 = (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
                *)TLockFreePointerListLIFOPad<void_*,64>::Pop
                            ((TLockFreePointerListLIFOPad<void_*,64> *)
                             &SmallTaskAllocator.field_0x40);
      plVar5[1] = (longlong)pTVar7;
      if (pTVar7 == (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
                     *)0x0) {
        puVar6 = FMemory::Malloc(0x10000,0);
        plVar5[1] = (longlong)puVar6;
        lVar9 = 0xff;
        do {
          puVar1 = puVar6 + 0x20;
          *puVar6 = puVar1;
          lVar9 = lVar9 + -1;
          puVar6 = puVar1;
        } while (lVar9 != 0);
        *puVar1 = 0;
        pTVar7 = (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
                  *)plVar5[1];
      }
    }
    else {
      plVar5[1] = (longlong)pTVar7;
      *plVar5 = 0;
    }
    *(undefined4 *)(plVar5 + 2) = 0x100;
  }
  lVar9 = *(longlong *)pTVar7;
  iVar8 = (int)plVar5[2] + -1;
  *(int *)(plVar5 + 2) = iVar8;
  plVar5[1] = lVar9;
  if (((iVar8 < 0) || ((iVar8 != 0) != (lVar9 != 0))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TExecutableTask<,UE::Tasks::Private::FTaskHandle___cdecl_LaunchSceneRenderTask<_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_>(wchar_t_const_*,_void___cdecl_BeginUpdateExposureCompensationCurveLUT(TArrayView<FViewInfo,int>,FUpdateExposureCompensationCurveLUTTaskData_*)_::_2_::<lambda_1>_&&,bool,LowLevelTasks::ETaskPriority)_::_2_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar7;
  }
  FTaskBase::FTaskBase((FTaskBase *)pTVar7,2,true);
  *(undefined ***)pTVar7 =
       &TExecutableTaskBase<`LaunchSceneRenderTask<`BeginUpdateExposureCompensationCurveLUT'::`2'::<lambda_1>_>'::`2'::<lambda_1>,void,void>
        ::_vftable_;
  FTaskBase::Init((FTaskBase *)pTVar7,param_1,param_3,param_4,param_5);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)&pTVar7->field_0xd8 = *(undefined8 *)param_2;
  *(undefined8 *)&pTVar7->field_0xe0 = uVar3;
  *(undefined8 *)&pTVar7->field_0xe8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined ***)pTVar7 =
       &TExecutableTask<`LaunchSceneRenderTask<`BeginUpdateExposureCompensationCurveLUT'::`2'::<lambda_1>_>'::`2'::<lambda_1>_>
        ::_vftable_;
  return pTVar7;
}

// Create @ 145425ef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::__l453::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this == (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    this = (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_453_::<lambda_14>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
            *)0x0;
  }
  else {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::`453'::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FScene **)&this->field_0xe0 = (param_2->TaskLambda).__this;
    *(undefined8 *)&this->field_0xe8 = 0;
    *(FPrimitiveSceneInfo ***)&this->field_0xe8 =
         (param_2->TaskLambda).AddStaticMeshes.AllocatorInstance.Data;
    (param_2->TaskLambda).AddStaticMeshes.AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
    *(int *)&this->field_0xf0 = (param_2->TaskLambda).AddStaticMeshes.ArrayNum;
    *(int *)&this->field_0xf4 = (param_2->TaskLambda).AddStaticMeshes.ArrayMax;
    (param_2->TaskLambda).AddStaticMeshes.ArrayNum = 0;
    (param_2->TaskLambda).AddStaticMeshes.ArrayMax = 0;
    *(FPrimitiveSceneInfo ***)&this->field_0xf8 =
         (param_2->TaskLambda).SceneInfosWithFlushRuntimeVirtualTexture.AllocatorInstance.Data;
    this->field_0x100 =
         (char)(param_2->TaskLambda).SceneInfosWithFlushRuntimeVirtualTexture.ArrayNum;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::`453'::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

// Create @ 145426000

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::__l2::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined3 uVar1;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this == (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    this = (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FScene::Update(FRDGBuilder_&,FScene::FUpdateParameters_const_&)_::_2_::<lambda_9>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
            *)0x0;
  }
  else {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::`2'::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FScene **)&this->field_0xe0 = (param_2->TaskLambda).__this;
    *(undefined8 *)&this->field_0xe8 = 0;
    *(FPrimitiveSceneProxy ***)&this->field_0xe8 =
         (param_2->TaskLambda).ProxiesToUpdate.AllocatorInstance.Data;
    (param_2->TaskLambda).ProxiesToUpdate.AllocatorInstance.Data = (FPrimitiveSceneProxy **)0x0;
    *(int *)&this->field_0xf0 = (param_2->TaskLambda).ProxiesToUpdate.ArrayNum;
    *(int *)&this->field_0xf4 = (param_2->TaskLambda).ProxiesToUpdate.ArrayMax;
    (param_2->TaskLambda).ProxiesToUpdate.ArrayNum = 0;
    (param_2->TaskLambda).ProxiesToUpdate.ArrayMax = 0;
    *(undefined8 *)&this->field_0xf8 = 0;
    *(FRHICommandList **)&this->field_0xf8 = param_2->RHICmdListTask;
    param_2->RHICmdListTask = (FRHICommandList *)0x0;
    uVar1 = *(undefined3 *)&param_2->field_0x29;
    this->field_0x100 = param_2->bAllocateCommandListForTask;
    *(undefined3 *)&this->field_0x101 = uVar1;
    *(undefined4 *)&this->field_0x104 = *(undefined4 *)&param_2->field_0x2c;
    *(undefined8 *)&param_2->bAllocateCommandListForTask = 0;
    *(FRDGBuilder **)&this->field_0x108 = param_2[1].__this;
    *(FScene **)&this->field_0x110 = param_2[1].TaskLambda.__this;
    this->field_0x118 = *(undefined1 *)&param_2[1].TaskLambda.ProxiesToUpdate.AllocatorInstance.Data
    ;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::`2'::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

// Create @ 1454e7e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
* __cdecl UE::Tasks::Private::TExecutableTask<`FSceneRenderer::OnRenderBegin'::__l21::<lambda_1>_>::
          Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
  *pTVar6;
  int iVar7;
  longlong lVar8;
  longlong *lpTlsValue;
  
  plVar4 = TlsGetValue(SmallTaskAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = ::operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
    plVar4 = lpTlsValue;
  }
  pTVar6 = (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
            *)plVar4[1];
  if (pTVar6 == (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
                 *)0x0) {
    pTVar6 = (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
              *)*plVar4;
    if (pTVar6 == (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
                   *)0x0) {
      pTVar6 = (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
                *)TLockFreePointerListLIFOPad<void_*,64>::Pop
                            ((TLockFreePointerListLIFOPad<void_*,64> *)
                             &SmallTaskAllocator.field_0x40);
      plVar4[1] = (longlong)pTVar6;
      if (pTVar6 == (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
                     *)0x0) {
        puVar5 = FMemory::Malloc(0x10000,0);
        plVar4[1] = (longlong)puVar5;
        lVar8 = 0xff;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar8 = lVar8 + -1;
          puVar5 = puVar1;
        } while (lVar8 != 0);
        *puVar1 = 0;
        pTVar6 = (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
                  *)plVar4[1];
      }
    }
    else {
      plVar4[1] = (longlong)pTVar6;
      *plVar4 = 0;
    }
    *(undefined4 *)(plVar4 + 2) = 0x100;
  }
  lVar8 = *(longlong *)pTVar6;
  iVar7 = (int)plVar4[2] + -1;
  *(int *)(plVar4 + 2) = iVar7;
  plVar4[1] = lVar8;
  if (((iVar7 < 0) || ((iVar7 != 0) != (lVar8 != 0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TExecutableTask<_protected:_class_IVisibilityTaskData_*___cdecl_FSceneRenderer::OnRenderBegin(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_21_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  FTaskBase::FTaskBase((FTaskBase *)pTVar6,2,true);
  *(undefined ***)pTVar6 =
       &TExecutableTaskBase<`FSceneRenderer::OnRenderBegin'::`21'::<lambda_1>,void,void>::_vftable_;
  FTaskBase::Init((FTaskBase *)pTVar6,param_1,param_3,param_4,param_5);
  *(FSceneRenderUpdateInputs **)&pTVar6->field_0xd8 = param_2->SceneUpdateInputs;
  *(undefined ***)pTVar6 =
       &TExecutableTask<`FSceneRenderer::OnRenderBegin'::`21'::<lambda_1>_>::_vftable_;
  return pTVar6;
}

// Create @ 1458e3f00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FVirtualTextureSystem::BeginUpdate(FRDGBuilder_&,FVirtualTextureUpdater_*)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FVirtualTextureSystem::BeginUpdate(FRDGBuilder_&,FVirtualTextureUpdater_*)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FVirtualTextureSystem::BeginUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FVirtualTextureSystem *pFVar1;
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *pTVar2;
  TIntPoint<unsigned_int> *pTVar3;
  FRHICommandList *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined7 uVar15;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FVirtualTextureSystem::BeginUpdate(FRDGBuilder_&,FVirtualTextureUpdater_*)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FVirtualTextureSystem::BeginUpdate(FRDGBuilder_&,FVirtualTextureUpdater_*)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this != (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_private:_void___cdecl_FVirtualTextureSystem::BeginUpdate(FRDGBuilder_&,FVirtualTextureUpdater_*)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FVirtualTextureSystem::BeginUpdate(FRDGBuilder_&,FVirtualTextureUpdater_*)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FVirtualTextureSystem::BeginUpdate'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    pFVar1 = (param_2->TaskLambda).__this;
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FVirtualTextureSystem **)&this->field_0xe0 = pFVar1;
    pTVar2 = (param_2->TaskLambda).Allocator;
    *(FVirtualTextureUpdater **)&this->field_0xe8 = (param_2->TaskLambda).Updater;
    *(TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> **)&this->field_0xf0 = pTVar2
    ;
    bVar5 = (param_2->TaskLambda).Settings.bEnablePageRequests;
    bVar6 = (param_2->TaskLambda).Settings.bEnableFeedback;
    bVar7 = (param_2->TaskLambda).Settings.bEnableFeedbackProduce;
    bVar8 = (param_2->TaskLambda).Settings.bEnablePlayback;
    bVar9 = (param_2->TaskLambda).Settings.bParallelFeedbackTasks;
    bVar10 = (param_2->TaskLambda).Settings.bForceContinuousUpdate;
    bVar11 = (param_2->TaskLambda).Settings.bForceSyncPageUpdate;
    iVar12 = (param_2->TaskLambda).Settings.NumFeedbackTasks;
    iVar13 = (param_2->TaskLambda).Settings.NumGatherTasks;
    this->field_0xf8 = (param_2->TaskLambda).Settings.bEnableAsyncTasks;
    this->field_0xf9 = bVar5;
    this->field_0xfa = bVar6;
    this->field_0xfb = bVar7;
    this->field_0xfc = bVar8;
    this->field_0xfd = bVar9;
    this->field_0xfe = bVar10;
    this->field_0xff = bVar11;
    *(int *)&this->field_0x100 = iVar12;
    *(int *)&this->field_0x104 = iVar13;
    iVar12 = (param_2->TaskLambda).Settings.MaxRVTPageUploads;
    iVar13 = (param_2->TaskLambda).Settings.MaxSVTPageUploads;
    iVar14 = (param_2->TaskLambda).Settings.MaxPagesProduced;
    *(int *)&this->field_0x108 = (param_2->TaskLambda).Settings.MaxGatherPagesBeforeFlush;
    *(int *)&this->field_0x10c = iVar12;
    *(int *)&this->field_0x110 = iVar13;
    *(int *)&this->field_0x114 = iVar14;
    pTVar3 = (param_2->TaskLambda).FeedbackResult.Data;
    *(undefined8 *)&this->field_0x118 =
         *(undefined8 *)&(param_2->TaskLambda).Settings.MaxContinuousUpdates;
    *(TIntPoint<unsigned_int> **)&this->field_0x120 = pTVar3;
    iVar12 = (param_2->TaskLambda).FeedbackResult.MapHandle;
    pFVar4 = param_2->RHICmdListTask;
    *(uint *)&this->field_0x128 = (param_2->TaskLambda).FeedbackResult.Size;
    *(int *)&this->field_0x12c = iVar12;
    *(FRHICommandList **)&this->field_0x130 = pFVar4;
    uVar15 = *(undefined7 *)&param_2->field_0x61;
    this->field_0x138 = param_2->bAllocateCommandListForTask;
    *(undefined7 *)&this->field_0x139 = uVar15;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FVirtualTextureSystem::BeginUpdate'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

