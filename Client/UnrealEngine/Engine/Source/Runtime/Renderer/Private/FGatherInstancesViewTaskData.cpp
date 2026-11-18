// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FGatherInstancesViewTaskData @ 1452fe180

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

FGatherInstancesViewTaskData * __thiscall
RayTracing::FGatherInstancesViewTaskData::FGatherInstancesViewTaskData
          (FGatherInstancesViewTaskData *this,FGatherInstancesViewTaskData *param_1)

{
  bool bVar1;
  
  this->Scene = param_1->Scene;
  this->View = param_1->View;
  bVar1 = (param_1->SceneOptions).bIncludeSky;
  (this->SceneOptions).bTranslucentGeometry = (param_1->SceneOptions).bTranslucentGeometry;
  (this->SceneOptions).bIncludeSky = bVar1;
  (this->SceneOptions).bLightingChannelsUsingAHS = (param_1->SceneOptions).bLightingChannelsUsingAHS
  ;
  (this->StaticPrimitivesIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticPrimitivesIndices).AllocatorInstance.Data =
       (param_1->StaticPrimitivesIndices).AllocatorInstance.Data;
  (param_1->StaticPrimitivesIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticPrimitivesIndices).ArrayNum = (param_1->StaticPrimitivesIndices).ArrayNum;
  (this->StaticPrimitivesIndices).ArrayMax = (param_1->StaticPrimitivesIndices).ArrayMax;
  (param_1->StaticPrimitivesIndices).ArrayNum = 0;
  (param_1->StaticPrimitivesIndices).ArrayMax = 0;
  (this->DynamicPrimitivesIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicPrimitivesIndices).AllocatorInstance.Data =
       (param_1->DynamicPrimitivesIndices).AllocatorInstance.Data;
  (param_1->DynamicPrimitivesIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicPrimitivesIndices).ArrayNum = (param_1->DynamicPrimitivesIndices).ArrayNum;
  (this->DynamicPrimitivesIndices).ArrayMax = (param_1->DynamicPrimitivesIndices).ArrayMax;
  (param_1->DynamicPrimitivesIndices).ArrayNum = 0;
  (param_1->DynamicPrimitivesIndices).ArrayMax = 0;
  (this->StaticPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticPrimitives).AllocatorInstance.Data =
       (param_1->StaticPrimitives).AllocatorInstance.Data;
  (param_1->StaticPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticPrimitives).ArrayNum = (param_1->StaticPrimitives).ArrayNum;
  (this->StaticPrimitives).ArrayMax = (param_1->StaticPrimitives).ArrayMax;
  (param_1->StaticPrimitives).ArrayNum = 0;
  (param_1->StaticPrimitives).ArrayMax = 0;
  (this->CachedStaticPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedStaticPrimitives).AllocatorInstance.Data =
       (param_1->CachedStaticPrimitives).AllocatorInstance.Data;
  (param_1->CachedStaticPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedStaticPrimitives).ArrayNum = (param_1->CachedStaticPrimitives).ArrayNum;
  (this->CachedStaticPrimitives).ArrayMax = (param_1->CachedStaticPrimitives).ArrayMax;
  (param_1->CachedStaticPrimitives).ArrayNum = 0;
  (param_1->CachedStaticPrimitives).ArrayMax = 0;
  (this->ReferencedGeometryGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedGeometryGroups).AllocatorInstance.Data =
       (param_1->ReferencedGeometryGroups).AllocatorInstance.Data;
  (param_1->ReferencedGeometryGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedGeometryGroups).ArrayNum = (param_1->ReferencedGeometryGroups).ArrayNum;
  (this->ReferencedGeometryGroups).ArrayMax = (param_1->ReferencedGeometryGroups).ArrayMax;
  (param_1->ReferencedGeometryGroups).ArrayNum = 0;
  (param_1->ReferencedGeometryGroups).ArrayMax = 0;
  (this->DirtyCachedRayTracingPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyCachedRayTracingPrimitives).AllocatorInstance.Data =
       (param_1->DirtyCachedRayTracingPrimitives).AllocatorInstance.Data;
  (param_1->DirtyCachedRayTracingPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DirtyCachedRayTracingPrimitives).ArrayNum =
       (param_1->DirtyCachedRayTracingPrimitives).ArrayNum;
  (this->DirtyCachedRayTracingPrimitives).ArrayMax =
       (param_1->DirtyCachedRayTracingPrimitives).ArrayMax;
  (param_1->DirtyCachedRayTracingPrimitives).ArrayNum = 0;
  (param_1->DirtyCachedRayTracingPrimitives).ArrayMax = 0;
  (this->GatherRelevantPrimitivesTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->GatherRelevantPrimitivesTask).Pimpl.Reference =
       (param_1->GatherRelevantPrimitivesTask).Pimpl.Reference;
  (param_1->GatherRelevantPrimitivesTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->FinalizeGatherRelevantPrimitivesTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->FinalizeGatherRelevantPrimitivesTask).Pimpl.Reference =
       (param_1->FinalizeGatherRelevantPrimitivesTask).Pimpl.Reference;
  (param_1->FinalizeGatherRelevantPrimitivesTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->GatherRelevantStaticPrimitivesTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->GatherRelevantStaticPrimitivesTask).Pimpl.Reference =
       (param_1->GatherRelevantStaticPrimitivesTask).Pimpl.Reference;
  (param_1->GatherRelevantStaticPrimitivesTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->UsedCoarseMeshStreamingHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedCoarseMeshStreamingHandles).AllocatorInstance.Data =
       (param_1->UsedCoarseMeshStreamingHandles).AllocatorInstance.Data;
  (param_1->UsedCoarseMeshStreamingHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedCoarseMeshStreamingHandles).ArrayNum =
       (param_1->UsedCoarseMeshStreamingHandles).ArrayNum;
  (this->UsedCoarseMeshStreamingHandles).ArrayMax =
       (param_1->UsedCoarseMeshStreamingHandles).ArrayMax;
  (param_1->UsedCoarseMeshStreamingHandles).ArrayNum = 0;
  (param_1->UsedCoarseMeshStreamingHandles).ArrayMax = 0;
  this->NumCachedStaticVisibleShaderBindings = param_1->NumCachedStaticVisibleShaderBindings;
  this->bUsesLightingChannels = param_1->bUsesLightingChannels;
  (this->ReferencedGeometryGroupsToCheck).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedGeometryGroupsToCheck).AllocatorInstance.Data =
       (param_1->ReferencedGeometryGroupsToCheck).AllocatorInstance.Data;
  (param_1->ReferencedGeometryGroupsToCheck).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ReferencedGeometryGroupsToCheck).ArrayNum =
       (param_1->ReferencedGeometryGroupsToCheck).ArrayNum;
  (this->ReferencedGeometryGroupsToCheck).ArrayMax =
       (param_1->ReferencedGeometryGroupsToCheck).ArrayMax;
  (param_1->ReferencedGeometryGroupsToCheck).ArrayNum = 0;
  (param_1->ReferencedGeometryGroupsToCheck).ArrayMax = 0;
  return this;
}

