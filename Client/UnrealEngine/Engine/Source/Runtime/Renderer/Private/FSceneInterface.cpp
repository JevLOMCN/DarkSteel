// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 73

// ~FSceneInterface @ 145407230

void __thiscall FSceneInterface::~FSceneInterface(FSceneInterface *this)

{
  this->_padding_ = (longlong)&___7FSceneInterface__6B_;
  return;
}

// AddCustomRenderPass @ 145419a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FSceneInterface::AddCustomRenderPass
          (FSceneInterface *this,FSceneViewFamily *param_1,FCustomRenderPassRendererInput *param_2)

{
  return false;
}

// AddLumenSceneCard @ 14541b060

void __thiscall
FSceneInterface::AddLumenSceneCard(FSceneInterface *this,ULumenSceneCardComponent *param_1)

{
  return;
}

// AddPlanarReflection @ 14541b2c0

void __thiscall
FSceneInterface::AddPlanarReflection(FSceneInterface *this,UPlanarReflectionComponent *param_1)

{
  return;
}

// AddPrecomputedLightVolume @ 14541b430

void __thiscall
FSceneInterface::AddPrecomputedLightVolume(FSceneInterface *this,FPrecomputedLightVolume *param_1)

{
  return;
}

// AddPrecomputedVolumetricLightmap @ 14541b5e0

void __thiscall
FSceneInterface::AddPrecomputedVolumetricLightmap
          (FSceneInterface *this,FPrecomputedVolumetricLightmap *param_1,bool param_2)

{
  return;
}

// AddReflectionCapture @ 14541bbc0

void __thiscall
FSceneInterface::AddReflectionCapture(FSceneInterface *this,UReflectionCaptureComponent *param_1)

{
  return;
}

// AddRuntimeVirtualTexture @ 14541bf00

void __thiscall
FSceneInterface::AddRuntimeVirtualTexture
          (FSceneInterface *this,URuntimeVirtualTextureComponent *param_1)

{
  return;
}

// AllocateAndCaptureFrameSkyEnvMap @ 14541ecb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FSceneInterface::AllocateAndCaptureFrameSkyEnvMap
          (FSceneInterface *this,FRDGBuilder *param_1,FSceneRenderer *param_2,FViewInfo *param_3,
          bool param_4,bool param_5,FInstanceCullingManager *param_6)

{
  return;
}

// AllocateAndCaptureFrameSkyEnvMap @ 14541ecc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneInterface::AllocateAndCaptureFrameSkyEnvMap
          (FSceneInterface *this,FRDGBuilder *param_1,FSceneRenderer *param_2,FViewInfo *param_3,
          bool param_4,bool param_5,FInstanceCullingManager *param_6,
          FRDGExternalAccessQueue *param_7)

{
  return;
}

// AllocateReflectionCaptures @ 14541f380

void __thiscall
FSceneInterface::AllocateReflectionCaptures
          (FSceneInterface *this,
          TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,bool param_3,bool param_4,bool param_5)

{
  return;
}

// ApplyWorldOffset @ 14541fc60

void __thiscall FSceneInterface::ApplyWorldOffset(FSceneInterface *this,TVector<double> *param_1)

{
  return;
}

// CreatePrimitiveTransformUpdater @ 145426ab0

IPrimitiveTransformUpdater * __thiscall
FSceneInterface::CreatePrimitiveTransformUpdater(FSceneInterface *this,int param_1)

{
  return (IPrimitiveTransformUpdater *)0x0;
}

// DumpUnbuiltLightInteractions @ 14542d1c0

void __thiscall
FSceneInterface::DumpUnbuiltLightInteractions(FSceneInterface *this,FOutputDevice *param_1)

{
  return;
}

// EndFrame @ 14542db30

void __thiscall FSceneInterface::EndFrame(FSceneInterface *this,FRHICommandListImmediate *param_1)

{
  return;
}

// Export @ 145433120

void __thiscall FSceneInterface::Export(FSceneInterface *this,FArchive *param_1)

{
  return;
}

// FinishUpdatePrimitiveTransform @ 145434350

void __thiscall FSceneInterface::FinishUpdatePrimitiveTransform(FSceneInterface *this)

{
  return;
}

// GetComputeTaskWorkers @ 14543d700

void __thiscall
FSceneInterface::GetComputeTaskWorkers
          (FSceneInterface *this,TArray<IComputeTaskWorker_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetFrameNumber @ 14543ddc0

uint __thiscall FSceneInterface::GetFrameNumber(FSceneInterface *this)

{
  return 0;
}

// GetGPUSkinCache @ 14543de00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGPUSkinCache * __thiscall FSceneInterface::GetGPUSkinCache(FSceneInterface *this)

{
  return (FGPUSkinCache *)0x0;
}

// GetPreviousLocalToWorld @ 14543e5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FSceneInterface::GetPreviousLocalToWorld
          (FSceneInterface *this,FPrimitiveSceneInfo *param_1,TMatrix<double> *param_2)

{
  return false;
}

// GetPrimitiveUniformShaderParameters_RenderThread @ 14543ea30

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
FSceneInterface::GetPrimitiveUniformShaderParameters_RenderThread
          (FSceneInterface *this,FPrimitiveSceneInfo *param_1,bool *param_2,TMatrix<double> *param_3
          ,int *param_4,bool *param_5)

{
  return;
}

// GetRayTracingDynamicGeometryCollection @ 14543eaa0

FRayTracingDynamicGeometryCollection * __thiscall
FSceneInterface::GetRayTracingDynamicGeometryCollection(FSceneInterface *this)

{
  return (FRayTracingDynamicGeometryCollection *)0x0;
}

// GetRayTracingSkinnedGeometryUpdateQueue @ 14543eab0

FRayTracingSkinnedGeometryUpdateQueue * __thiscall
FSceneInterface::GetRayTracingSkinnedGeometryUpdateQueue(FSceneInterface *this)

{
  return (FRayTracingSkinnedGeometryUpdateQueue *)0x0;
}

// GetReflectionCaptureData @ 14543eb20

void __thiscall
FSceneInterface::GetReflectionCaptureData
          (FSceneInterface *this,UReflectionCaptureComponent *param_1,
          FReflectionCaptureData *param_2)

{
  return;
}

// GetRuntimeVirtualTextureHidePrimitiveMask @ 14543f490

void __thiscall
FSceneInterface::GetRuntimeVirtualTextureHidePrimitiveMask
          (FSceneInterface *this,uchar *param_1,uchar *param_2)

{
  return;
}

// GetSkeletalMeshUpdater @ 14543f800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshUpdater * __thiscall FSceneInterface::GetSkeletalMeshUpdater(FSceneInterface *this)

{
  return (FSkeletalMeshUpdater *)0x0;
}

// HasPrecomputedVolumetricLightmap_RenderThread @ 145442ed0

bool __thiscall
FSceneInterface::HasPrecomputedVolumetricLightmap_RenderThread(FSceneInterface *this)

{
  return false;
}

// IncrementFrameNumber @ 145443100

void __thiscall FSceneInterface::IncrementFrameNumber(FSceneInterface *this)

{
  return;
}

// InvalidateLumenSurfaceCache_GameThread @ 145444970

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
FSceneInterface::InvalidateLumenSurfaceCache_GameThread
          (FSceneInterface *this,UPrimitiveComponent *param_1)

{
  return;
}

// InvalidatePathTracedOutput @ 145444c10

void __thiscall
FSceneInterface::InvalidatePathTracedOutput(FSceneInterface *this,EInvalidateReason param_1)

{
  return;
}

// InvalidateRuntimeVirtualTexture @ 145444e10

void __thiscall
FSceneInterface::InvalidateRuntimeVirtualTexture
          (FSceneInterface *this,URuntimeVirtualTextureComponent *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  return;
}

// InvalidateRuntimeVirtualTexture @ 145444e20

void __thiscall
FSceneInterface::InvalidateRuntimeVirtualTexture
          (FSceneInterface *this,URuntimeVirtualTextureComponent *param_1,
          TBoxSphereBounds<double,double> *param_2,EVTInvalidatePriority param_3)

{
  return;
}

// IsEditorScene @ 145444e40

bool __thiscall FSceneInterface::IsEditorScene(FSceneInterface *this)

{
  return false;
}

// OnLevelAddedToWorld @ 145445370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSceneInterface::OnLevelAddedToWorld
          (FSceneInterface *this,FName *param_1,UWorld *param_2,bool param_3)

{
  return;
}

// OnLevelRemovedFromWorld @ 145445500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSceneInterface::OnLevelRemovedFromWorld
          (FSceneInterface *this,FName *param_1,UWorld *param_2,bool param_3)

{
  return;
}

// OnWorldCleanup @ 145445760

void __thiscall FSceneInterface::OnWorldCleanup(FSceneInterface *this)

{
  return;
}

// RefreshNaniteRasterBins @ 145446cc0

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
FSceneInterface::RefreshNaniteRasterBins(FSceneInterface *this,FPrimitiveSceneInfo *param_1)

{
  return;
}

// ReleaseReflectionCubemap @ 145448930

void __thiscall
FSceneInterface::ReleaseReflectionCubemap
          (FSceneInterface *this,UReflectionCaptureComponent *param_1)

{
  return;
}

// ReloadNaniteFixedFunctionBins @ 145448980

void __thiscall FSceneInterface::ReloadNaniteFixedFunctionBins(FSceneInterface *this)

{
  return;
}

// RemoveLumenSceneCard @ 14544b890

void __thiscall
FSceneInterface::RemoveLumenSceneCard(FSceneInterface *this,ULumenSceneCardComponent *param_1)

{
  return;
}

// RemovePlanarReflection @ 14544b8b0

void __thiscall
FSceneInterface::RemovePlanarReflection(FSceneInterface *this,UPlanarReflectionComponent *param_1)

{
  return;
}

// RemovePrecomputedLightVolume @ 14544ba20

void __thiscall
FSceneInterface::RemovePrecomputedLightVolume
          (FSceneInterface *this,FPrecomputedLightVolume *param_1)

{
  return;
}

// RemovePrecomputedVolumetricLightmap @ 14544bb90

void __thiscall
FSceneInterface::RemovePrecomputedVolumetricLightmap
          (FSceneInterface *this,FPrecomputedVolumetricLightmap *param_1)

{
  return;
}

// RemoveReflectionCapture @ 14544c6e0

void __thiscall
FSceneInterface::RemoveReflectionCapture(FSceneInterface *this,UReflectionCaptureComponent *param_1)

{
  return;
}

// RemoveRuntimeVirtualTexture @ 14544c890

void __thiscall
FSceneInterface::RemoveRuntimeVirtualTexture
          (FSceneInterface *this,URuntimeVirtualTextureComponent *param_1)

{
  return;
}

// RequestGPUSceneUpdate @ 14544d3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FSceneInterface::RequestGPUSceneUpdate
          (FSceneInterface *this,FPrimitiveSceneInfo *param_1,EPrimitiveDirtyState param_2)

{
  return false;
}

// RequestPreloadRuntimeVirtualTexture @ 14544d5f0

void __thiscall
FSceneInterface::RequestPreloadRuntimeVirtualTexture
          (FSceneInterface *this,URuntimeVirtualTextureComponent *param_1,
          TBoxSphereBounds<double,double> *param_2,int param_3)

{
  return;
}

// RequestUniformBufferUpdate @ 14544d610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FSceneInterface::RequestUniformBufferUpdate(FSceneInterface *this,FPrimitiveSceneInfo *param_1)

{
  return false;
}

// ResetReflectionCaptures @ 14544e060

void __thiscall FSceneInterface::ResetReflectionCaptures(FSceneInterface *this,bool param_1)

{
  return;
}

// SetPrecomputedVisibility @ 14544f140

void __thiscall
FSceneInterface::SetPrecomputedVisibility
          (FSceneInterface *this,FPrecomputedVisibilityHandler *param_1)

{
  return;
}

// SetPrecomputedVolumeDistanceField @ 14544f150

void __thiscall
FSceneInterface::SetPrecomputedVolumeDistanceField
          (FSceneInterface *this,FPrecomputedVolumeDistanceField *param_1)

{
  return;
}

// StartFrame @ 1454507c0

void __thiscall FSceneInterface::StartFrame(FSceneInterface *this)

{
  return;
}

// StartUpdatePrimitiveTransform @ 145450a50

void __thiscall FSceneInterface::StartUpdatePrimitiveTransform(FSceneInterface *this,int param_1)

{
  return;
}

// UpdateCachedRayTracingState @ 14545b500

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
FSceneInterface::UpdateCachedRayTracingState(FSceneInterface *this,FPrimitiveSceneProxy *param_1)

{
  return;
}

// UpdateCachedRenderStates @ 14545b530

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
FSceneInterface::UpdateCachedRenderStates(FSceneInterface *this,FPrimitiveSceneProxy *param_1)

{
  return;
}

// UpdateEarlyZPassMode @ 14545c470

void __thiscall FSceneInterface::UpdateEarlyZPassMode(FSceneInterface *this)

{
  return;
}

// UpdateLumenSceneCardTransform @ 14545e1a0

void __thiscall
FSceneInterface::UpdateLumenSceneCardTransform
          (FSceneInterface *this,ULumenSceneCardComponent *param_1)

{
  return;
}

// UpdateParameterCollections @ 14545e400

void __thiscall
FSceneInterface::UpdateParameterCollections
          (FSceneInterface *this,
          TArray<FMaterialParameterCollectionInstanceResource_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  return;
}

// UpdatePhysicsField @ 14545e480

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
FSceneInterface::UpdatePhysicsField
          (FSceneInterface *this,FRHICommandListImmediate *param_1,FViewInfo *param_2)

{
  return;
}

// UpdatePlanarReflectionContents @ 14545e490

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
FSceneInterface::UpdatePlanarReflectionContents
          (FSceneInterface *this,UPlanarReflectionComponent *param_1,FSceneRenderer *param_2,
          ISceneRenderBuilder *param_3)

{
  return;
}

// UpdatePlanarReflectionTransform @ 14545e4a0

void __thiscall
FSceneInterface::UpdatePlanarReflectionTransform
          (FSceneInterface *this,UPlanarReflectionComponent *param_1)

{
  return;
}

// UpdatePrimitiveDistanceFieldSceneData_GameThread @ 14545eb00

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
FSceneInterface::UpdatePrimitiveDistanceFieldSceneData_GameThread
          (FSceneInterface *this,UPrimitiveComponent *param_1)

{
  return;
}

// UpdatePrimitiveSelectedState_RenderThread @ 145460680

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
FSceneInterface::UpdatePrimitiveSelectedState_RenderThread
          (FSceneInterface *this,FPrimitiveSceneInfo *param_1,bool param_2)

{
  return;
}

// UpdatePrimitiveTransforms @ 1454609b0

void __thiscall
FSceneInterface::UpdatePrimitiveTransforms
          (FSceneInterface *this,IPrimitiveTransformUpdater *param_1)

{
  return;
}

// UpdatePrimitiveVelocityState_RenderThread @ 145460b30

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
FSceneInterface::UpdatePrimitiveVelocityState_RenderThread
          (FSceneInterface *this,FPrimitiveSceneInfo *param_1,bool param_2)

{
  return;
}

// UpdateReflectionCaptureTransform @ 1454619d0

void __thiscall
FSceneInterface::UpdateReflectionCaptureTransform
          (FSceneInterface *this,UReflectionCaptureComponent *param_1)

{
  return;
}

// UpdateSceneCaptureContents @ 145462710

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FSceneInterface::UpdateSceneCaptureContents
          (FSceneInterface *this,USceneCaptureComponent2D *param_1,ISceneRenderBuilder *param_2)

{
  return;
}

// UpdateSceneCaptureContents @ 145462720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FSceneInterface::UpdateSceneCaptureContents
          (FSceneInterface *this,USceneCaptureComponentCube *param_1,ISceneRenderBuilder *param_2)

{
  return;
}

// UpdateSceneSettings @ 145462940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSceneInterface::UpdateSceneSettings(FSceneInterface *this,AWorldSettings *param_1)

{
  return;
}

// UpdateSkyCaptureContents @ 145462950

void __thiscall
FSceneInterface::UpdateSkyCaptureContents
          (FSceneInterface *this,USkyLightComponent *param_1,bool param_2,UTextureCube *param_3,
          FTexture *param_4,float *param_5,TSHVectorRGB<3> *param_6,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_7,FLinearColor *param_8)

{
  return;
}

// UpdateStaticDrawLists @ 145462e90

void __thiscall FSceneInterface::UpdateStaticDrawLists(FSceneInterface *this)

{
  return;
}

// ValidateSkyLightRealTimeCapture @ 145463ff0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneInterface::ValidateSkyLightRealTimeCapture
          (FSceneInterface *this,FRDGBuilder *param_1,FViewInfo *param_2,FRDGTexture *param_3)

{
  return;
}

