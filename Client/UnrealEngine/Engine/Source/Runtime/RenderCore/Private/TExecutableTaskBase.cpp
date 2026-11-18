// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 20

// ExecuteTask @ 145db5280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FRDGBuilder::Execute'::__l64::<lambda_17>,void,void>::
ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FRDGBuilder::SetupDispatchPassExecute(*(FRDGBuilder **)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145db52c0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FRDGBuilder::Execute'::__l61::<lambda_18>,void,void>::
ExecuteTask(void *this)

{
  `FRDGBuilder::Execute'::__l61::<lambda_18>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145db52e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_12>,UE::Tasks::FTaskEvent_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_12>,UE::Tasks::FTaskEvent_&>'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145db5300

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_13>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145db5320

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_15>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145db5340

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  `FRDGBuilder::
  AddCommandListSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_5>,UE::Tasks::Private::FTaskHandle_&>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  puVar3 = *(undefined8 **)((longlong)this + 0xe8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145db537d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 145db5390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FRDGBuilder::Execute'::__l25::<lambda_14>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FRDGBuilder::FinalizeResources(*(FRDGBuilder **)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145db53d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_16>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_16>,UE::Tasks::Private::FTaskHandle_&>'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145db53f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_3>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FRDGBuilder::FinalizeDescs(*(FRDGBuilder **)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145db5430

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_4>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FRDGBuilder::Execute'::__l20::<lambda_4>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145db5470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FRDGBuilder::Execute'::__l20::<lambda_6>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FRDGBuilder::CompilePassBarriers(*(FRDGBuilder **)((longlong)this + 0xd8));
  FRDGBuilder::CollectPassBarriers(*(FRDGBuilder **)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145db54c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FRDGBuilder::Execute'::__l24::<lambda_7>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FRDGBuilder::SetupParallelExecute
            (*(FRDGBuilder **)((longlong)this + 0xd8),
             (TStaticArray<void_*,8,4294967295> *)((longlong)this + 0xe0));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145db5510

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 145db5520

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::FAsyncDeleter::~FAsyncDeleter'::__l5::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  longlong *plVar1;
  
  `FRDGBuilder::FAsyncDeleter::~FAsyncDeleter'::__l5::<lambda_1>::operator()
            ((longlong *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    plVar1 = (longlong *)((longlong)this + 0xf0);
    if (*(longlong **)((longlong)this + 0x108) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x108);
    }
                    /* WARNING: Could not recover jumptable at 0x000145db5552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ExecuteTask @ 145db5570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::LaunchAsyncSetupQueueTask'::__l12::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  FRDGBuilder::ProcessAsyncSetupQueue(*(FRDGBuilder **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145db5590

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::SetupParallelExecute'::__l32::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  `FRDGBuilder::SetupParallelExecute'::__l32::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145e07c80

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  `FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145e07ca0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`GameThreadWaitForTask'::__l20::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  (**(code **)(**(longlong **)((longlong)this + 0xd8) + 0x10))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 145e07cd0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRenderCommandPipe::EnqueueAndLaunch'::__l5::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  `FRenderCommandPipe::EnqueueAndLaunch'::__l5::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145e99010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  if (*(char *)((longlong)this + 0xf0) != '\0') {
    FRHICommandListBase::SwitchPipeline(*(FRHICommandListBase **)((longlong)this + 0xe8),Graphics);
  }
  `FRDGScatterUploadBuilder::Execute'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0),*(FRHICommandList **)((longlong)this + 0xe8));
  if (*(char *)((longlong)this + 0xf0) != '\0') {
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)((longlong)this + 0xe8));
  }
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

