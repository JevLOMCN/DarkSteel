// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 11

// AllowInstanceCullingOcclusionQueries @ 145ede8b0

bool __thiscall
FStaticMeshSceneProxy::AllowInstanceCullingOcclusionQueries(FStaticMeshSceneProxy *this)

{
  return true;
}

// CanApplyStreamableRenderAssetScaleFactor @ 145edf240

bool __thiscall
FStaticMeshSceneProxy::CanApplyStreamableRenderAssetScaleFactor(FStaticMeshSceneProxy *this)

{
  return true;
}

// GetCurrentFirstLODIdx_RenderThread @ 145ee3410

uchar __thiscall
FStaticMeshSceneProxy::GetCurrentFirstLODIdx_RenderThread(FStaticMeshSceneProxy *this)

{
  return this->RenderData->CurrentFirstLODIdx;
}

// GetDesiredLODLevel_RenderThread @ 145ee34f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDesiredLODLevel __thiscall
FStaticMeshSceneProxy::GetDesiredLODLevel_RenderThread
          (FStaticMeshSceneProxy *this,FSceneView *param_1)

{
  uchar uVar1;
  
  uVar1 = GetCurrentFirstLODIdx_Internal(this);
  *(uchar *)param_1 = uVar1;
  param_1->field_0x1 = 0;
  return SUB82(param_1,0);
}

// GetLightMapResolution @ 145ee3d20

int __thiscall FStaticMeshSceneProxy::GetLightMapResolution(FStaticMeshSceneProxy *this)

{
  return this->LightMapResolution;
}

// GetMemoryFootprint @ 145ee4070

uint __thiscall FStaticMeshSceneProxy::GetMemoryFootprint(FStaticMeshSceneProxy *this)

{
  return ((this->LODs).ArrayMax * 0x20 + *(int *)&this->field_0x104) * 4 + 0xb90;
}

// GetMeshPaintTextureDescriptor @ 145ee4090

TIntVector2<unsigned_int> __thiscall
FStaticMeshSceneProxy::GetMeshPaintTextureDescriptor(FStaticMeshSceneProxy *this)

{
  TIntVector2<unsigned_int>_u_0 in_RDX;
  
  *(TIntVector2<unsigned_int>_u_0 *)in_RDX = (this->MeshPaintTextureDescriptor).field0_0x0;
  return (TIntVector2<unsigned_int>)in_RDX;
}

// GetNumMeshBatches @ 145ee4130

int __thiscall FStaticMeshSceneProxy::GetNumMeshBatches(FStaticMeshSceneProxy *this)

{
  return 1;
}

// IsCullingReversedByComponent @ 145ee7610

bool __thiscall FStaticMeshSceneProxy::IsCullingReversedByComponent(FStaticMeshSceneProxy *this)

{
  return this->bReverseCulling;
}

// IsRayTracingRelevant @ 145ee7930

bool __thiscall FStaticMeshSceneProxy::IsRayTracingRelevant(FStaticMeshSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 145ee7940

bool __thiscall FStaticMeshSceneProxy::IsRayTracingStaticRelevant(FStaticMeshSceneProxy *this)

{
  if (((!this->bDynamicRayTracingInstances && !this->bDynamicRayTracingGeometry) &&
      ((this->field_0x79 & 0x20) == 0)) &&
     ((!FReadOnlyCVARCache::bAllowStaticLighting ||
      (((this->field_0x7a & 0x40) == 0 || ((char)this->field_0x7c < '\0')))))) {
    return true;
  }
  return false;
}

