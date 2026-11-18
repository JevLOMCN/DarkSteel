// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// LaunchDispatchPassTasks @ 144780be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FAnisotropyPassParameters,`FDeferredShadingSceneRenderer::RenderAnisotropyPass'::__l21::<lambda_2>_>
::LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x1a0),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a8) + 0x20),
             __real_3f800000);
  return;
}

// LaunchDispatchPassTasks @ 144780c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FDeferredDecalPassParameters,`DrawDecalMeshCommands'::__l8::<lambda_1>_>::
LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x198),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x50),
             __real_3f800000);
  return;
}

// LaunchDispatchPassTasks @ 144780c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FOpaqueBasePassParameters,`FDeferredShadingSceneRenderer::RenderBasePassInternal'::__l66::<lambda_5>_>
::LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x198),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x40),
             __real_3f800000);
  return;
}

// LaunchDispatchPassTasks @ 144780c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FOpaqueBasePassParameters,`FDeferredShadingSceneRenderer::RenderBasePassInternal'::__l81::<lambda_6>_>
::LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x198),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x40),
             __real_3f800000);
  return;
}

// LaunchDispatchPassTasks @ 14481d210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FDepthPassParameters,``FDeferredShadingSceneRenderer::RenderPrePass'::__l2::<lambda_2>::operator()'::__l26::<lambda_2>_>
::LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x198),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x20),
             __real_3f800000);
  return;
}

// LaunchDispatchPassTasks @ 14506c500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FNaniteShadingPassParameters,`Nanite::DispatchBasePass'::__l35::<lambda_2>_>::
LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  `Nanite::DispatchBasePass'::__l35::<lambda_2>::operator()
            ((void *)((longlong)this + 0x198),param_1);
  return;
}

// LaunchDispatchPassTasks @ 1455ba990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FShadowDepthPassParameters,`FProjectedShadowInfo::RenderDepth'::__l27::<lambda_2>_>
::LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  longlong local_28;
  undefined1 local_20;
  code *local_18;
  longlong *local_10;
  
  local_28 = *(longlong *)((longlong)this + 0x198);
  local_20 = *(undefined1 *)((longlong)this + 0x1a8);
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``FProjectedShadowInfo::RenderDepth'::__l27::<lambda_2>::operator()'::__l2::<lambda_1>,void,FRHICommandList_&>
             ::Call;
  FParallelMeshDrawCommandPass::Dispatch
            ((FParallelMeshDrawCommandPass *)(local_28 + 0xc70),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x40),
             (TFunctionRef<void___cdecl(FRHICommandList_&)> *)&local_18);
  return;
}

// LaunchDispatchPassTasks @ 14568d3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FSingleLayerWaterDepthPassParameters,`FDeferredShadingSceneRenderer::RenderSingleLayerWaterDepthPrepass'::__l38::<lambda_3>_>
::LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x198),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x20),
             __real_3f800000);
  return;
}

// LaunchDispatchPassTasks @ 14568d410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FSingleLayerWaterPassParameters,`FDeferredShadingSceneRenderer::RenderSingleLayerWaterInner'::__l43::<lambda_3>_>
::LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x198),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x40),
             __real_3f800000);
  return;
}

// LaunchDispatchPassTasks @ 145781150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FTranslucentBasePassParameters,`RenderTranslucencyViewInner'::__l23::<lambda_1>_>::
LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x198),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a0) + 0x40),
             *(float *)((longlong)this + 0x1a8));
  return;
}

// LaunchDispatchPassTasks @ 145781180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGDispatchPass<FVelocityPassParameters,`FSceneRenderer::RenderVelocities'::__l47::<lambda_2>_>::
LaunchDispatchPassTasks(void *this,FRDGDispatchPassBuilder *param_1)

{
  FParallelMeshDrawCommandPass::Dispatch
            (*(FParallelMeshDrawCommandPass **)((longlong)this + 0x1a0),param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x1a8) + 0x40),
             __real_3f800000);
  return;
}

