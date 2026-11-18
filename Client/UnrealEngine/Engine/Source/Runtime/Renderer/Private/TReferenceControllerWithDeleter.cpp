// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// DestroyObject @ 144bbbab0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`FLightGridFeedbackStatus::InitRHI'::__l2::<lambda_1>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`FLightGridFeedbackStatus::InitRHI'::__l2::<lambda_1>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bbbac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 144e84c00

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMegaLightsFrameTemporaries,SharedPointerInternals::DefaultDeleter<FMegaLightsFrameTemporaries>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMegaLightsFrameTemporaries,SharedPointerInternals::DefaultDeleter<FMegaLightsFrameTemporaries>,1>
                *this)

{
  FMegaLightsFrameTemporaries *pFVar1;
  FMegaLightsViewContext *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMegaLightsFrameTemporaries *)0x0) {
    DestructItems<FMegaLightsViewContext,int>
              ((pFVar1->ViewContextsHairStrands).AllocatorInstance.Data,
               (pFVar1->ViewContextsHairStrands).ArrayNum);
    pFVar2 = (pFVar1->ViewContextsHairStrands).AllocatorInstance.Data;
    if (pFVar2 != (FMegaLightsViewContext *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
    }
    DestructItems<FMegaLightsViewContext,int>
              ((pFVar1->ViewContexts).AllocatorInstance.Data,(pFVar1->ViewContexts).ArrayNum);
    pFVar2 = (pFVar1->ViewContexts).AllocatorInstance.Data;
    if (pFVar2 != (FMegaLightsViewContext *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x20);
    return;
  }
  return;
}

// DestroyObject @ 144f01d00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMeshEdgesExtension,SharedPointerInternals::DefaultDeleter<FMeshEdgesExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMeshEdgesExtension,SharedPointerInternals::DefaultDeleter<FMeshEdgesExtension>,1>
                *this)

{
  FMeshEdgesExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMeshEdgesExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f01d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145051cf0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::__l2::<lambda_1>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::__l2::<lambda_1>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145051d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 145429ee0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSkinnedMeshDebugViewExtension,SharedPointerInternals::DefaultDeleter<FSkinnedMeshDebugViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSkinnedMeshDebugViewExtension,SharedPointerInternals::DefaultDeleter<FSkinnedMeshDebugViewExtension>,1>
                *this)

{
  FSkinnedMeshDebugViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSkinnedMeshDebugViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145429ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1454eaef0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`GetRendererViewExtension'::__l2::FRendererViewExtension,SharedPointerInternals::DefaultDeleter<`GetRendererViewExtension'::__l2::FRendererViewExtension>,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454eaf01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14553b0d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FScreenSpaceDenoiserHistory,SharedPointerInternals::DefaultDeleter<FScreenSpaceDenoiserHistory>,1>
::DestroyObject(TReferenceControllerWithDeleter<FScreenSpaceDenoiserHistory,SharedPointerInternals::DefaultDeleter<FScreenSpaceDenoiserHistory>,1>
                *this)

{
  FScreenSpaceDenoiserHistory *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FScreenSpaceDenoiserHistory *)0x0) {
    FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(this_00);
    ::operator_delete(this_00,0x40);
    return;
  }
  return;
}

// DestroyObject @ 14562b570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FVirtualShadowMapClipmap,SharedPointerInternals::DefaultDeleter<FVirtualShadowMapClipmap>,1>
::DestroyObject(TReferenceControllerWithDeleter<FVirtualShadowMapClipmap,SharedPointerInternals::DefaultDeleter<FVirtualShadowMapClipmap>,1>
                *this)

{
  FVirtualShadowMapClipmap *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FVirtualShadowMapClipmap *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014562b581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1457e3080

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_1>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_1>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457e3091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1457e30a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`FVirtualShadowMapArrayCacheManager::InitExtension'::__l2::<lambda_2>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457e30b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

