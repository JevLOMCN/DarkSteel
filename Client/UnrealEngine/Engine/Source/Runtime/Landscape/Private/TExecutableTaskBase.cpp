// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ExecuteTask @ 145f8c1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  if (*(char *)((longlong)this + 0x100) != '\0') {
    FRHICommandListBase::SwitchPipeline(*(FRHICommandListBase **)((longlong)this + 0xf8),Graphics);
  }
  `FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0),*(FRHICommandListBase **)((longlong)this + 0xf8));
  if (*(char *)((longlong)this + 0x100) != '\0') {
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)((longlong)this + 0xf8));
  }
  FTaskTagScope::~FTaskTagScope(&local_18);
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  return;
}

