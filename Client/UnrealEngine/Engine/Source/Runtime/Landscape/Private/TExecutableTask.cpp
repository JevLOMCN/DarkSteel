// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// Create @ 145f86ec0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FRDGBuilder *pFVar1;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this == (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    this = (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_virtual_void___cdecl_FLandscapeSceneViewExtension::PreRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_11_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
            *)0x0;
  }
  else {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::`11'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    pFVar1 = param_2->__this;
    *(undefined8 *)&this->field_0xe0 = 0;
    *(FRDGBuilder **)&this->field_0xd8 = pFVar1;
    *(FScriptContainerElement **)&this->field_0xe0 =
         (param_2->TaskLambda).SceneRenderSystems.AllocatorInstance.Data;
    (param_2->TaskLambda).SceneRenderSystems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    *(int *)&this->field_0xe8 = (param_2->TaskLambda).SceneRenderSystems.ArrayNum;
    *(int *)&this->field_0xec = (param_2->TaskLambda).SceneRenderSystems.ArrayMax;
    (param_2->TaskLambda).SceneRenderSystems.ArrayNum = 0;
    (param_2->TaskLambda).SceneRenderSystems.ArrayMax = 0;
    *(TArray<FLandscapeSceneViewExtension::FLandscapeViewData,TSizedDefaultAllocator<32>_> **)
     &this->field_0xf0 = (param_2->TaskLambda).LocalLandscapeViewsPtr;
    *(FRHICommandList **)&this->field_0xf8 = param_2->RHICmdListTask;
    this->field_0x100 = param_2->bAllocateCommandListForTask;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::`11'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

