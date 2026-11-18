// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AddCommand @ 144e7b9c0

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

FMeshDrawCommand * __thiscall
FMaterialCacheMeshPassContext::AddCommand
          (FMaterialCacheMeshPassContext *this,FMeshDrawCommand *param_1,uint param_2)

{
  return param_1;
}

// FinalizeCommand @ 144e8dbb0

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
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FMaterialCacheMeshPassContext::FinalizeCommand
          (FMaterialCacheMeshPassContext *this,FMeshBatch *param_1,int param_2,
          FMeshDrawCommandPrimitiveIdInfo *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FMeshDrawCommandSortKey param_6,
          EFVisibleMeshDrawCommandFlags param_7,FGraphicsMinimalPipelineStateInitializer *param_8,
          FMeshProcessorShaders *param_9,FMeshDrawCommand *param_10)

{
  undefined1 uVar1;
  ForElementType<FMeshBatchElement> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMeshDrawCommandCullingPayload FVar6;
  ForElementType<FMeshBatchElement> FVar7;
  float fVar8;
  float fVar9;
  FGraphicsMinimalPipelineStateId local_res8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  FGraphicsMinimalPipelineStateId::GetPersistentId
            ((FGraphicsMinimalPipelineStateInitializer *)&local_res8);
  FMeshDrawCommand::SetDrawParametersAndFinalize(param_10,param_1,param_2,local_res8,param_9);
  FMeshDrawCommand::operator=(&(this->Command).Command,param_10);
  local_18 = local_18 & 0xffffffc0;
  (this->Command).CommandInfo.SortKey.field0_0x0.BasePass =
       (<unnamed_type_BasePass>)FMeshDrawCommandSortKey::Default.field0_0x0;
  (this->Command).CommandInfo.CommandIndex = -1;
  (this->Command).CommandInfo.StateBucketId = -1;
  (this->Command).CommandInfo.CullingPayload.field0_0x0 = (FMeshDrawCommandCullingPayload_u_0)0x0;
  (this->Command).CommandInfo.CullingPayload.DynamicMeshBoundsIndex = -1;
  *(ulonglong *)&(this->Command).CommandInfo.field_0x18 =
       CONCAT44(uStack_1c,uStack_20) & 0xffffffdbffffffa7 | 0x1b00000027;
  *(uint *)&(this->Command).CommandInfo.field_0x20 = local_18;
  (this->Command).CommandInfo.SortKey.field0_0x0.BasePass =
       (<unnamed_type_BasePass>)param_6.field0_0x0;
  uVar5 = 0;
  if (param_2 < (param_1->Elements).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (param_1->Elements).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FMeshBatchElement>)param_1;
  if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar7 = FVar2;
  }
  fVar8 = *(float *)((longlong)param_2 * 0x98 + 0x78 + (longlong)FVar7);
  if (__real_40fff800 <= fVar8) {
    fVar8 = __real_40fff800;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = *(float *)((longlong)param_2 * 0x98 + 0x74 + (longlong)FVar7);
  if (__real_40fff800 <= fVar9) {
    fVar9 = __real_40fff800;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  FVar6.DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  FVar6.field0_0x0.PackedData =
       ((uint)(longlong)(fVar9 * __real_44800000) & 0x1fff |
       ((uint)(longlong)(fVar8 * __real_44800000) & 0x1fff) << 0xd) << 4 |
       (int)param_1->LODIndex & 0xfU;
  (this->Command).CommandInfo.CullingPayload = FVar6;
  uVar1 = (this->Command).CommandInfo.field_0x20;
  *(ERasterizerCullMode *)&(this->Command).CommandInfo.field_0x1c =
       (param_5 * 8 ^ param_4) & 0xffffffc7 ^
       (param_4 ^ *(ERasterizerFillMode *)&(this->Command).CommandInfo.field_0x1c) & 0xffffffc0 ^
       param_5 * 8;
  (this->Command).CommandInfo.field_0x20 =
       ((this->Command).CommandInfo.Flags ^ param_7) &
       (FetchInstanceCountFromScene|PreserveInstanceOrder|ForceInstanceCulling|NumBits|
       MaterialUsesWorldPositionOffset) ^ uVar1;
  return;
}

