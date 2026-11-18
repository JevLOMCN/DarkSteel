// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMaterialCacheMeshDrawCommand @ 144e72160

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FMaterialCacheMeshDrawCommand * __thiscall
FMaterialCacheMeshDrawCommand::FMaterialCacheMeshDrawCommand(FMaterialCacheMeshDrawCommand *this)

{
  undefined1 *puVar1;
  FMeshDrawCommandSortKey FVar2;
  
  (this->Command).ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->Command).ShaderBindings.ShaderLayouts.ArrayNum = 0;
  (this->Command).ShaderBindings.ShaderLayouts.ArrayMax = 2;
  (this->Command).ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[1] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[2] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[3] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[4] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[5] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[6] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[7] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[8] = (uchar *)0x0;
  (this->Command).ShaderBindings.Data.InlineStorage[9] = (uchar *)0x0;
  (this->Command).ShaderBindings.ShaderFrequencyBits = 0;
  (this->Command).ShaderBindings.Size = 0;
  (this->Command).VertexStreams.AllocatorInstance.SecondaryData =
       (ForElementType<FVertexInputStream>)0x0;
  (this->Command).VertexStreams.ArrayNum = 0;
  (this->Command).VertexStreams.ArrayMax = 7;
  (this->Command).CachedPipelineId.field0_0x0.PackedId = 0;
  (this->Command).DebugData.VertexShader.ShaderContent = (FShader *)0x0;
  (this->Command).DebugData.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->Command).DebugData.PixelShader.ShaderContent = (FShader *)0x0;
  (this->Command).DebugData.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->Command).DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Command).DebugData.MaterialRenderProxyName.Data.ArrayNum = 0;
  (this->Command).DebugData.MaterialRenderProxyName.Data.ArrayMax = 0;
  (this->Command).DebugData.ResourceName.ComparisonIndex = 0;
  (this->Command).DebugData.ResourceName.Number = 0;
  (this->Command).StatsData.CategoryName.ComparisonIndex = 0;
  FVar2 = FMeshDrawCommandSortKey::Default;
  (this->Command).StatsData.CategoryName.Number = 0;
  puVar1 = &(this->CommandInfo).field_0x18;
  *puVar1 = *puVar1 & 0xa7;
  puVar1 = &(this->CommandInfo).field_0x1c;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffdb;
  puVar1 = &(this->CommandInfo).field_0x18;
  *puVar1 = *puVar1 | 0x27;
  puVar1 = &(this->CommandInfo).field_0x1c;
  *(uint *)puVar1 = *(uint *)puVar1 | 0x1b;
  (this->CommandInfo).Flags = Default;
  (this->CommandInfo).SortKey.field0_0x0.BasePass = (<unnamed_type_BasePass>)FVar2.field0_0x0;
  (this->CommandInfo).CullingPayload.field0_0x0.PackedData = 0;
  (this->CommandInfo).CullingPayload.DynamicMeshBoundsIndex = -1;
  (this->CommandInfo).CommandIndex = -1;
  (this->CommandInfo).StateBucketId = -1;
  return this;
}

