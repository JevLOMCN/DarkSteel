// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// Create @ 145da9760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>,UE::Tasks::FTaskEvent_&>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>_&&,UE::Tasks::FPipe_*,UE::Tasks::FTaskEvent_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_12>,UE::Tasks::FTaskEvent_&>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int iVar1;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>,UE::Tasks::FTaskEvent_&>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>_&&,UE::Tasks::FPipe_*,UE::Tasks::FTaskEvent_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this == (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>,UE::Tasks::FTaskEvent_&>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>_&&,UE::Tasks::FPipe_*,UE::Tasks::FTaskEvent_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    this = (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>,UE::Tasks::FTaskEvent_&>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_12>_&&,UE::Tasks::FPipe_*,UE::Tasks::FTaskEvent_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
            *)0x0;
  }
  else {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`25'::<lambda_12>,UE::Tasks::FTaskEvent_&>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FRDGBuilder **)&this->field_0xe0 = (param_2->TaskLambda).__this;
    *(undefined8 *)&this->field_0xe8 = 0;
    *(FCollectResourceOp **)&this->field_0xe8 =
         (param_2->TaskLambda).PooledTextures.AllocatorInstance.Data;
    iVar1 = (param_2->TaskLambda).PooledTextures.ArrayNum;
    (param_2->TaskLambda).PooledTextures.AllocatorInstance.Data = (FCollectResourceOp *)0x0;
    *(int *)&this->field_0xf0 = iVar1;
    *(int *)&this->field_0xf4 = (param_2->TaskLambda).PooledTextures.ArrayMax;
    (param_2->TaskLambda).PooledTextures.ArrayNum = 0;
    (param_2->TaskLambda).PooledTextures.ArrayMax = 0;
    *(FRHICommandList **)&this->field_0xf8 = param_2->RHICmdListTask;
    this->field_0x100 = param_2->bAllocateCommandListForTask;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`25'::<lambda_12>,UE::Tasks::FTaskEvent_&>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

// Create @ 145da9870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int iVar1;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this == (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    this = (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_13>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
            *)0x0;
  }
  else {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`25'::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FRDGBuilder **)&this->field_0xe0 = (param_2->TaskLambda).__this;
    *(undefined8 *)&this->field_0xe8 = 0;
    *(TRDGHandle<FRDGView,unsigned_int> **)&this->field_0xe8 =
         (param_2->TaskLambda).InViews.AllocatorInstance.Data;
    iVar1 = (param_2->TaskLambda).InViews.ArrayNum;
    (param_2->TaskLambda).InViews.AllocatorInstance.Data = (TRDGHandle<FRDGView,unsigned_int> *)0x0;
    *(int *)&this->field_0xf0 = iVar1;
    *(int *)&this->field_0xf4 = (param_2->TaskLambda).InViews.ArrayMax;
    (param_2->TaskLambda).InViews.ArrayNum = 0;
    (param_2->TaskLambda).InViews.ArrayMax = 0;
    *(FRHICommandList **)&this->field_0xf8 = param_2->RHICmdListTask;
    this->field_0x100 = param_2->bAllocateCommandListForTask;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`25'::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

// Create @ 145da9980

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined4 uVar1;
  undefined7 uVar2;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this == (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    this = (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_25_::<lambda_15>_&&,UE::Tasks::FPipe_*,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
            *)0x0;
  }
  else {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`25'::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FRDGBuilder **)&this->field_0xe0 = (param_2->TaskLambda).__this;
    *(undefined8 *)&this->field_0xe8 = 0;
    *(FTaskEvent *)&this->field_0xe8 = (param_2->TaskLambda).AllocateUploadBuffersTask;
    uVar1 = *(undefined4 *)&param_2->RHICmdListTask;
    (param_2->TaskLambda).AllocateUploadBuffersTask = (FTaskEvent)0x0;
    *(undefined4 *)&this->field_0xf0 = uVar1;
    *(undefined4 *)&this->field_0xf4 = *(undefined4 *)((longlong)&param_2->RHICmdListTask + 4);
    param_2->RHICmdListTask = (FRHICommandList *)0x0;
    uVar2 = *(undefined7 *)&param_2->field_0x21;
    this->field_0xf8 = param_2->bAllocateCommandListForTask;
    *(undefined7 *)&this->field_0xf9 = uVar2;
    this->field_0x100 = *(undefined1 *)&param_2[1].__this;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`25'::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

// Create @ 145da9a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_20_::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_20_::<lambda_5>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int iVar1;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_20_::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_20_::<lambda_5>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&SmallTaskAllocator);
  if (this != (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddCommandListSetupTask<_public:_void___cdecl_FRDGBuilder::Execute(void)_::_20_::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>(_public:_void___cdecl_FRDGBuilder::Execute(void)_::_20_::<lambda_5>_&&,UE::Tasks::FPipe_*,UE::Tasks::Private::FTaskHandle_&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`20'::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FRDGBuilder **)&this->field_0xd8 = param_2->__this;
    *(FRDGBuilder **)&this->field_0xe0 = (param_2->TaskLambda).__this;
    *(undefined8 *)&this->field_0xe8 = 0;
    *(FCollectResourceOp **)&this->field_0xe8 =
         (param_2->TaskLambda).PooledBuffers.AllocatorInstance.Data;
    (param_2->TaskLambda).PooledBuffers.AllocatorInstance.Data = (FCollectResourceOp *)0x0;
    iVar1 = (param_2->TaskLambda).PooledBuffers.ArrayMax;
    *(int *)&this->field_0xf0 = (param_2->TaskLambda).PooledBuffers.ArrayNum;
    *(int *)&this->field_0xf4 = iVar1;
    this->field_0xf8 = *(undefined1 *)&param_2->RHICmdListTask;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::`20'::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

