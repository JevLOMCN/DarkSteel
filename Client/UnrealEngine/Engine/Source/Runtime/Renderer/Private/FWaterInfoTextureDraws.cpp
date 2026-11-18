// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FWaterInfoTextureDraws @ 145933ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FWaterInfoTextureDraws * __thiscall
FWaterInfoTextureDraws::FWaterInfoTextureDraws(FWaterInfoTextureDraws *this)

{
  this->MeshPass = WaterInfoTextureDepthPass;
  this->ComponentIDsToDraw =
       (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *)
       0x0;
  this->PrimitiveInstanceIndex = 0;
  (this->VisibleMeshCommands).AllocatorInstance.Data = (FVisibleMeshDrawCommand *)0x0;
  (this->VisibleMeshCommands).ArrayNum = 0;
  (this->VisibleMeshCommands).ArrayMax = 0;
  (this->InstanceRuns).AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceRuns).ArrayNum = 0;
  (this->InstanceRuns).ArrayMax = 0;
  this->InstanceCullingContext = (FInstanceCullingContext *)0x0;
  *(undefined8 *)&(this->InstanceCullingResult).Parameters.DrawIndirectArgsBuffer = 0;
  *(undefined4 *)&(this->InstanceCullingResult).Parameters.DrawIndirectArgsBuffer.field_0x8 = 4;
  *(undefined8 *)&(this->InstanceCullingResult).Parameters.InstanceIdOffsetBuffer = 0;
  *(undefined4 *)&(this->InstanceCullingResult).Parameters.InstanceIdOffsetBuffer.field_0x8 = 8;
  *(undefined8 *)&(this->InstanceCullingResult).Parameters.InstanceCulling = 0;
  *(undefined8 *)&(this->InstanceCullingResult).Parameters.Scene = 0;
  *(undefined8 *)&(this->InstanceCullingResult).Parameters.BatchedPrimitive = 0;
  (this->InstanceCullingResult).Parameters.InstanceCulling.field_0x8 = 1;
  (this->InstanceCullingResult).Parameters.Scene.field_0x8 = 1;
  (this->InstanceCullingResult).Parameters.BatchedPrimitive.field_0x8 = 1;
  return this;
}

// ~FWaterInfoTextureDraws @ 1459340d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall FWaterInfoTextureDraws::~FWaterInfoTextureDraws(FWaterInfoTextureDraws *this)

{
  uint *puVar1;
  FVisibleMeshDrawCommand *pFVar2;
  
  puVar1 = (this->InstanceRuns).AllocatorInstance.Data;
  if (puVar1 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar1);
  }
  pFVar2 = (this->VisibleMeshCommands).AllocatorInstance.Data;
  if (pFVar2 != (FVisibleMeshDrawCommand *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
    return;
  }
  return;
}

