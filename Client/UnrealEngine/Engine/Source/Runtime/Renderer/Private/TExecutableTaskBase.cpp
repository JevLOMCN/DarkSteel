// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 95

// ExecuteTask @ 144812b30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddRayTracingLocalShaderBindingWriterTasks<`FDeferredShadingSceneRenderer::SetupRayTracingRenderingData'::__l48::<lambda_2>_>'::__l4::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `AddRayTracingLocalShaderBindingWriterTasks<`FDeferredShadingSceneRenderer::SetupRayTracingRenderingData'::__l48::<lambda_2>_>'
  ::__l4::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144812b70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderNanite'::__l5::<lambda_1>,UE::Tasks::Private::FTaskHandle>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FDeferredShadingSceneRenderer::RenderNanite'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144812bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`LaunchSceneRenderTask<FSortedLightSetSceneInfo_*,`FDeferredShadingSceneRenderer::Render'::__l195::<lambda_7>,TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&>'::__l2::<lambda_1>,FSortedLightSetSceneInfo_*,void>
::ExecuteTask(void *this)

{
  undefined8 uVar1;
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FSceneRenderer::GatherAndSortLights
            (*(FSceneRenderer **)((longlong)this + 0xe0),
             *(FSortedLightSetSceneInfo **)((longlong)this + 0xe8),*(bool *)((longlong)this + 0xf0))
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0xe8);
  FTaskTagScope::~FTaskTagScope(&local_18);
  *(undefined8 *)((longlong)this + 0xd8) = uVar1;
  return;
}

// ExecuteTask @ 144812c10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`LaunchSceneRenderTask<`FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `LaunchSceneRenderTask<`FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 144812c30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`LaunchSceneRenderTask<``FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `LaunchSceneRenderTask<``FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 144812c50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`LaunchSceneRenderTask<void,`FDeferredShadingSceneRenderer::Render'::__l35::<lambda_2>,UE::Tasks::Private::FTaskHandle>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FSceneRenderer::UpdateLightFunctionAtlasTaskFunction(*(FSceneRenderer **)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144879270

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FDistanceFieldSceneData::UpdateDistanceFieldAtlas'::__l106::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FDistanceFieldSceneData::UpdateDistanceFieldAtlas'::__l106::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 144918860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  if (*(char *)((longlong)this + 0x100) != '\0') {
    FRHICommandListBase::SwitchPipeline(*(FRHICommandListBase **)((longlong)this + 0xf8),Graphics);
  }
  `FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::
  operator()((void *)((longlong)this + 0xe0),*(FRHICommandListBase **)((longlong)this + 0xf8));
  if (*(char *)((longlong)this + 0x100) != '\0') {
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)((longlong)this + 0xf8));
  }
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1449188e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  if (*(char *)((longlong)this + 0x100) != '\0') {
    FRHICommandListBase::SwitchPipeline(*(FRHICommandListBase **)((longlong)this + 0xf8),Graphics);
  }
  `FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0xe0),*(FRHICommandListBase **)((longlong)this + 0xf8));
  if (*(char *)((longlong)this + 0x100) != '\0') {
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)((longlong)this + 0xf8));
  }
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144918960

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUScene::UpdateGPULights'::__l2::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FGPUScene::UpdateGPULights'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1449189a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 144bc2140

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneRenderer::PrepareForwardLightData'::__l6::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSceneRenderer::PrepareForwardLightData'::__l6::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144c40840

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddRayTracingLocalShaderBindingWriterTasks<`FDeferredShadingSceneRenderer::SetupLumenHardwareRayTracingHitGroupBindings'::__l2::<lambda_2>_>'::__l4::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddRayTracingLocalShaderBindingWriterTasks<`FDeferredShadingSceneRenderer::SetupLumenHardwareRayTracingHitGroupBindings'::__l2::<lambda_2>_>'::__l4::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 144c40860

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::SetupLumenHardwareRayTracingHitGroupBuffer'::__l7::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FDeferredShadingSceneRenderer::SetupLumenHardwareRayTracingHitGroupBuffer'::__l7::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144d79760

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::BeginUpdateLumenSceneTasks'::__l2::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FDeferredShadingSceneRenderer::BeginUpdateLumenSceneTasks'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144d797a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`LaunchSceneRenderTask<`FDeferredShadingSceneRenderer::BeginGatherLumenLights'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FDeferredShadingSceneRenderer::BeginGatherLumenLights'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 144faae20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FRenderer::PrepareRasterizerPasses'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::FRenderer::PrepareRasterizerPasses'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145060800

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FPackedViewArray::CreateWithSetupTask'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  longlong *plVar1;
  
  `FRDGBuilder::
  AddSetupTask<`Nanite::FPackedViewArray::CreateWithSetupTask'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x118);
    }
                    /* WARNING: Could not recover jumptable at 0x000145060839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ExecuteTask @ 145060850

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FMaterialsSceneExtension::PostBuildNaniteShadingCommands'::__l2::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  `FRDGBuilder::
  AddSetupTask<`Nanite::FMaterialsSceneExtension::PostBuildNaniteShadingCommands'::__l2::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  puVar3 = *(undefined8 **)((longlong)this + 0xe0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014506088d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 1450608a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FMaterialsSceneExtension::FUpdater::PreSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::FMaterialsSceneExtension::FUpdater::PreSceneUpdate'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1450608e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::BuildShadingCommands'::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::BuildShadingCommands'::__l5::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145060920

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FMaterialsSceneExtension::FUpdater::PostSceneUpdate'::__l8::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::FMaterialsSceneExtension::FUpdater::PostSceneUpdate'::__l8::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145060960

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`DispatchLumenMeshCapturePass'::__l2::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `DispatchLumenMeshCapturePass'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1450609a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_2>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_2>::
  operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1450609e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::BuildShadingCommands'::__l5::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::BuildShadingCommands'::__l5::<lambda_2>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145060a20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_4>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_4>::
  operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145060a60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_6>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_6>::
  operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145060aa0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 145060ab0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  return;
}

// ExecuteTask @ 145060ac0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FNaniteVisibility::BeginVisibilityQuery'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  FNaniteVisibilityQuery::Init
            (*(FNaniteVisibilityQuery **)((longlong)this + 0xe0),
             *(FNaniteRasterPipelines **)((longlong)this + 0xe8),
             *(FNaniteShadingPipelines **)((longlong)this + 0xf0));
  PerformNaniteVisibility
            ((TRobinHoodHashMap<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_const_*,FNaniteVisibility::FPrimitiveReferences,0>,TSizedDefaultAllocator<32>_>
              *)(*(longlong *)((longlong)this + 0xd8) + 0x128),
             *(FNaniteVisibilityQuery **)((longlong)this + 0xe0));
  FNaniteVisibilityQuery::Finish(*(FNaniteVisibilityQuery **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 145060b20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``Nanite::DispatchBasePass'::__l35::<lambda_2>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``Nanite::DispatchBasePass'::__l35::<lambda_2>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  if (*(FRHIResource **)((longlong)this + 0xf8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0xf8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 145060b60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``Nanite::DispatchBasePass'::__l35::<lambda_2>::operator()'::__l10::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  ``Nanite::DispatchBasePass'::__l35::<lambda_2>::operator()'::__l10::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf0));
  return;
}

// ExecuteTask @ 1451cd7a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`LaunchSceneRenderTask<`BeginUpdateExposureCompensationCurveLUT'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `LaunchSceneRenderTask<`BeginUpdateExposureCompensationCurveLUT'::__l2::<lambda_1>_>'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14531f6d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::DispatchRayTracingMeshBatchTask'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `RayTracing::DispatchRayTracingMeshBatchTask'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14531f6f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::FinishGatherInstances'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  `RayTracing::FinishGatherInstances'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8))
  ;
  return;
}

// ExecuteTask @ 14531f710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::BeginGatherInstances'::__l6::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  RayTracing::GatherRelevantPrimitives
            (*(FGatherInstancesViewTaskData **)((longlong)this + 0xd8),
             *(bool *)((longlong)this + 0xe0));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14531f760

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::BeginGatherInstances'::__l6::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  `RayTracing::BeginGatherInstances'::__l6::<lambda_2>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14531f780

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::FinishGatherInstances'::__l38::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  `RayTracing::FinishGatherInstances'::__l38::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14531f7a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::FinishGatherInstances'::__l2::<lambda_3>,void,void>::ExecuteTask
          (void *this)

{
  `RayTracing::FinishGatherInstances'::__l2::<lambda_3>::operator()((void *)((longlong)this + 0xd8))
  ;
  return;
}

// ExecuteTask @ 14531f7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::BeginGatherInstances'::__l6::<lambda_3>,void,void>::ExecuteTask
          (void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  RayTracing::GatherRelevantStaticPrimitives
            (*(FGatherInstancesViewTaskData **)((longlong)this + 0xd8),
             *(float *)((longlong)this + 0xe0),*(int *)((longlong)this + 0xe4),
             *(bool *)((longlong)this + 0xe8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14531f820

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::BeginGatherInstances'::__l2::<lambda_4>,void,void>::ExecuteTask
          (void *this)

{
  `RayTracing::BeginGatherInstances'::__l2::<lambda_4>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14531f840

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::FinishGatherInstances'::__l2::<lambda_4>,void,void>::ExecuteTask
          (void *this)

{
  `RayTracing::FinishGatherInstances'::__l2::<lambda_4>::operator()((void *)((longlong)this + 0xd8))
  ;
  return;
}

// ExecuteTask @ 14531f860

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`RayTracing::BeginGatherInstances'::__l7::<lambda_5>,void,void>::ExecuteTask
          (void *this)

{
  `RayTracing::BeginGatherInstances'::__l7::<lambda_5>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145384f00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRayTracingScene::Update'::__l44::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FRayTracingScene::Update'::__l44::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145384f20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRayTracingScene::Update'::__l44::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FRayTracingScene::Update'::__l44::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145384f40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddRayTracingLocalShaderBindingWriterTasks<`FDeferredShadingSceneRenderer::SetupMaterialRayTracingHitGroupBindings'::__l2::<lambda_1>_>'::__l4::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddRayTracingLocalShaderBindingWriterTasks<`FDeferredShadingSceneRenderer::SetupMaterialRayTracingHitGroupBindings'::__l2::<lambda_1>_>'::__l4::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145384f60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::SetupMaterialRayTracingHitGroupBindings'::__l7::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FDeferredShadingSceneRenderer::SetupMaterialRayTracingHitGroupBindings'::__l7::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145432f00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::__l453::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FScene::Update'::__l453::<lambda_14>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (*(void **)((longlong)this + 0xe8));
    return;
  }
  return;
}

// ExecuteTask @ 145432f40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FScene::Update'::__l2::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddCommandListSetupTask<`FScene::Update'::__l2::<lambda_9>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xf8) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (*(void **)((longlong)this + 0xf8));
  }
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (*(void **)((longlong)this + 0xe8));
    return;
  }
  return;
}

// ExecuteTask @ 145432f90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FScene::Update'::__l2::<lambda_10>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FScene::Update'::__l2::<lambda_10>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145432fd0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FScene::Update'::__l405::<lambda_11>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FScene::Update'::__l405::<lambda_11>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145432ff0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FScene::Update'::__l405::<lambda_12>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FScene::Update'::__l405::<lambda_12>,UE::Tasks::Private::FTaskHandle_&>'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145433010

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FScene::Update'::__l405::<lambda_13>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FScene::Update'::__l405::<lambda_13>,UE::Tasks::Private::FTaskHandle_&>'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145433030

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FScene::Update'::__l2::<lambda_16>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  void *pvVar1;
  
  `FRDGBuilder::
  AddSetupTask<`FScene::Update'::__l2::<lambda_16>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((undefined8 *)((longlong)this + 0xd8));
  pvVar1 = *(void **)((longlong)this + 0xd8);
  if (pvVar1 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pvVar1);
    return;
  }
  return;
}

// ExecuteTask @ 145433070

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l29::<lambda_2>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l29::<lambda_2>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145433090

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l36::<lambda_3>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l36::<lambda_3>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1454330b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l38::<lambda_4>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l38::<lambda_4>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1454330d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l48::<lambda_6>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l48::<lambda_6>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1454330f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l50::<lambda_7>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,`FRendererModule::DrawTileMesh'::__l50::<lambda_7>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1454a5530

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FSceneCulling::FUpdater::PostSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1454a5550

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneCulling::FUpdater::PreSceneUpdate'::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSceneCulling::FUpdater::PreSceneUpdate'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1454a5590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneInstanceCullingQuery::Dispatch'::__l19::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FSceneInstanceCullingQuery::ComputeResult(*(FSceneInstanceCullingQuery **)((longlong)this + 0xd8))
  ;
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1454a55d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FDeferredShadingSceneRenderer::RenderOcclusion'::__l5::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 1454eecb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSceneRenderer::OnRenderBegin'::__l21::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  `FSceneRenderer::OnRenderBegin'::__l21::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553dc80

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FVisibilityViewPacket::BeginInitVisibility'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `FVisibilityViewPacket::BeginInitVisibility'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553dca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FVisibilityTaskData::FinishGatherDynamicMeshElements'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FVisibilityTaskData::SetupMeshPasses
            (*(FVisibilityTaskData **)((longlong)this + 0xd8),*(Type *)((longlong)this + 0xe0),
             *(FInstanceCullingManager **)((longlong)this + 0xe8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14553dcf0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FDynamicMeshElementContext::LaunchAsyncTask'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `FDynamicMeshElementContext::LaunchAsyncTask'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553dd10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FGPUOcclusionParallelPacket::LaunchOcclusionCullTask'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FGPUOcclusionParallelPacket::LaunchOcclusionCullTask'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553dd30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_2>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
  ReleaseNumCommands((TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                      *)(*(longlong *)((longlong)this + 0xd8) + 0x140),1);
  FGPUOcclusionParallel::Finalize
            (*(FGPUOcclusionParallel **)(*(longlong *)((longlong)this + 0xd8) + 0x68));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14553dd90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FLODSceneTree::UpdateVisibilityStates'::__l103::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  longlong *plVar1;
  int iVar2;
  FLightPrimitiveInteraction *this_00;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = *(longlong **)((longlong)this + 0xe0);
  iVar2 = *(int *)((longlong)this + 0xe8);
  plVar1 = plVar3 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0xe8) != iVar2) {
      `TCheckedPointerIterator<FPrimitiveSceneInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar3 == plVar1) break;
    for (this_00 = *(FLightPrimitiveInteraction **)(*plVar3 + 0x170);
        this_00 != (FLightPrimitiveInteraction *)0x0; this_00 = this_00->NextLight) {
      FLightPrimitiveInteraction::FlushCachedShadowMapData(this_00);
    }
    plVar3 = plVar3 + 1;
  }
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (*(void **)((longlong)this + 0xe0));
  }
  return;
}

// ExecuteTask @ 14553de30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`TCommandPipe<FPrimitiveRange>::EnqueueCommand<FPrimitiveRange_&>'::__l12::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `TCommandPipe<FPrimitiveRange>::EnqueueCommand<FPrimitiveRange_&>'::__l12::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553de50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`TCommandPipe<FDynamicPrimitiveIndexList>::EnqueueCommand<FDynamicPrimitiveIndexList>'::__l12::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `TCommandPipe<FDynamicPrimitiveIndexList>::EnqueueCommand<FDynamicPrimitiveIndexList>'::__l12::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553de70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::EnqueueCommand<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>'::__l12::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
  EnqueueCommand<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>'::
  __l12::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553de90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRelevancePacket::LaunchComputeRelevanceTask'::__l12::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `FRelevancePacket::LaunchComputeRelevanceTask'::__l12::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553deb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FVisibilityViewPacket::BeginInitVisibility'::__l38::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  `FVisibilityViewPacket::BeginInitVisibility'::__l38::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553ded0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FVisibilityTaskData::LaunchVisibilityTasks'::__l2::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  (**(code **)(**(longlong **)(*(longlong *)((longlong)this + 0xd8) + 0x10) + 0x88))();
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14553df20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FVisibilityViewPacket::BeginInitVisibility'::__l41::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  `FVisibilityViewPacket::BeginInitVisibility'::__l41::<lambda_3>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14553df40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FVisibilityTaskData::LaunchVisibilityTasks'::__l45::<lambda_4>,void,void>::
ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FVisibilityViewPacket::BeginInitVisibility(*(FVisibilityViewPacket **)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14553df80

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FVisibilityTaskData::LaunchVisibilityTasks'::__l25::<lambda_5>,void,void>::
ExecuteTask(void *this)

{
  `FVisibilityTaskData::LaunchVisibilityTasks'::__l25::<lambda_5>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145597f50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSceneRenderer::RenderShadowDepthMaps'::__l2::<lambda_8>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSceneRenderer::RenderShadowDepthMaps'::__l2::<lambda_8>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14562e980

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FShadowSceneRenderer::PreInitViews'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FShadowSceneRenderer::PreInitViews'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14562e9c0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FShadowScene::FUpdater::PostLightsUpdate'::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FShadowScene::FUpdater::PostLightsUpdate'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14562ea00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FShadowSceneRenderer::RenderVirtualShadowMaps'::__l5::<lambda_1>,UE::Tasks::Private::FTaskHandle>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FShadowSceneRenderer::RenderVirtualShadowMaps'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14562ea40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`CreateCompatibilityGraphEvent<UE::Tasks::FTaskEvent_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FTaskBase *this_00;
  undefined8 *puVar3;
  
  this_00 = *(FTaskBase **)((longlong)this + 0xd8);
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  FTaskBase::TryLaunch(this_00,0);
  puVar3 = *(undefined8 **)((longlong)this + 0xd8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014562ea89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ExecuteTask @ 14562eaa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l23::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  FInstanceCullingManager::AllocateViews
            (*(FInstanceCullingManager **)((longlong)this + 0xd8),*(int *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14562eac0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l32::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  `FSceneRenderer::GatherShadowDynamicMeshElements'::__l32::<lambda_3>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14562eae0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSceneRenderer::GatherShadowDynamicMeshElements'::__l23::<lambda_4>,void,void>
::ExecuteTask(void *this)

{
  `FSceneRenderer::GatherShadowDynamicMeshElements'::__l23::<lambda_4>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 145680c30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkinningSceneExtension::FUpdater::PreSceneUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkinningSceneExtension::FUpdater::PreSceneUpdate'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145680c70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkinningSceneExtension::FUpdater::PostSceneUpdate'::__l8::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkinningSceneExtension::FUpdater::PostSceneUpdate'::__l8::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145680cb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_2>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145680cf0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_4>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_4>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145680d30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_7>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_7>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145680d70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_8>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_8>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 145870030

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`AddDrawDynamicMeshPass<FVoxelizeVolumePassParameters,`FSceneRenderer::VoxelizeFogVolumePrimitives'::__l5::<lambda_2>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`AddDrawDynamicMeshPass<FVoxelizeVolumePassParameters,`FSceneRenderer::VoxelizeFogVolumePrimitives'::__l5::<lambda_2>_>'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1458f3bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FVirtualTextureSystem::BeginUpdate'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  if (*(char *)((longlong)this + 0x138) != '\0') {
    FRHICommandListBase::SwitchPipeline(*(FRHICommandListBase **)((longlong)this + 0x130),Graphics);
  }
  `FVirtualTextureSystem::BeginUpdate'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0),*(FRHICommandList **)((longlong)this + 0x130));
  if (*(char *)((longlong)this + 0x138) != '\0') {
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)((longlong)this + 0x130));
  }
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

