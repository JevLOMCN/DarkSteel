// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AddCommand @ 144739f30

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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FMeshDrawCommand * __thiscall
FDynamicPassMeshDrawListContext::AddCommand
          (FDynamicPassMeshDrawListContext *this,FMeshDrawCommand *param_1,uint param_2)

{
  FDynamicMeshDrawCommandStorage *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FMeshDrawCommand *pFVar7;
  
  iVar5 = TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::AddElement
                    (&this->DrawListStorage->MeshDrawCommands,param_1);
  pFVar1 = this->DrawListStorage;
  uVar3 = iVar5 / 0x28;
  uVar6 = 0;
  if ((int)uVar3 < (pFVar1->MeshDrawCommands).Chunks.Array.ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMeshDrawCommand *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FMeshDrawCommand *)
         ((ulonglong)(uint)(iVar5 % 0x28) * 0x198 +
         *(longlong *)
          ((pFVar1->MeshDrawCommands).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar3 * 8
          ));
}

// FinalizeCommand @ 14475b510

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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FDynamicPassMeshDrawListContext::FinalizeCommand
          (FDynamicPassMeshDrawListContext *this,FMeshBatch *param_1,int param_2,
          FMeshDrawCommandPrimitiveIdInfo *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FMeshDrawCommandSortKey param_6,
          EFVisibleMeshDrawCommandFlags param_7,FGraphicsMinimalPipelineStateInitializer *param_8,
          FMeshProcessorShaders *param_9,FMeshDrawCommand *param_10)

{
  FMeshDrawCommandPrimitiveIdInfo *pFVar1;
  ForElementType<FMeshBatchElement> FVar2;
  TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar3;
  FVisibleMeshDrawCommand *pFVar4;
  code *pcVar5;
  FVisibleMeshDrawCommand *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FMeshBatchElement> FVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  FGraphicsMinimalPipelineStateId local_res8;
  FVisibleMeshDrawCommand local_78;
  
  FGraphicsMinimalPipelineStateId::GetPipelineStateId
            ((FGraphicsMinimalPipelineStateInitializer *)&local_res8,
             (TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)param_8,(bool *)this->GraphicsMinimalPipelineStateSet);
  FMeshDrawCommand::SetDrawParametersAndFinalize(param_10,param_1,param_2,local_res8,param_9);
  local_78.RunArray = (uint *)0x0;
  local_78.NumRuns = 0;
  uVar8 = local_78.NumRuns;
  if (param_2 < (param_1->Elements).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar2 = (param_1->Elements).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FMeshBatchElement>)param_1;
  if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar10 = FVar2;
  }
  lVar11 = (longlong)param_2 * 0x98;
  if ((*(uint *)(lVar11 + 0x7c + (longlong)FVar10) & 0x400) != 0) {
    local_78.NumRuns = *(uint *)(lVar11 + 0x60 + (longlong)FVar10);
    local_78.RunArray = *(uint **)(lVar11 + 0x30 + (longlong)FVar10);
  }
  fVar12 = *(float *)(lVar11 + 0x78 + (longlong)FVar10);
  if (__real_40fff800 <= fVar12) {
    fVar12 = __real_40fff800;
  }
  pTVar3 = this->DrawList;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar13 = *(float *)(lVar11 + 0x74 + (longlong)FVar10);
  if (__real_40fff800 <= fVar13) {
    fVar13 = __real_40fff800;
  }
  local_78.CullingPayloadFlags = Default;
  local_78.MeshDrawCommand = param_10;
  local_78.PrimitiveIdBufferOffset = -1;
  local_78.StateBucketId = -1;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  local_78.PrimitiveIdInfo.DrawPrimitiveId = param_3->DrawPrimitiveId;
  local_78.PrimitiveIdInfo.ScenePrimitiveId = param_3->ScenePrimitiveId;
  local_78.CullingPayload.field0_0x0.PackedData =
       ((uint)(longlong)(fVar13 * __real_44800000) & 0x1fff |
       ((uint)(longlong)(fVar12 * __real_44800000) & 0x1fff) << 0xd) << 4 |
       (int)param_1->LODIndex & 0xfU;
  local_78.PrimitiveIdInfo._8_4_ = *(undefined4 *)&param_3->field_0x8;
  local_78.MeshCullMode = param_5;
  local_78.MeshFillMode = param_4;
  local_78.SortKey.field0_0x0.BasePass = param_6.field0_0x0;
  local_78.CullingPayload.DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  local_78.Flags = param_7;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar4 <= &local_78) && (&local_78 < pFVar4 + pTVar3->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = pTVar3->ArrayNum;
  if (iVar9 == pTVar3->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
                      (0x848,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  pTVar3->ArrayNum = iVar9 + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  pFVar4[iVar9].MeshDrawCommand = local_78.MeshDrawCommand;
  pFVar4[iVar9].SortKey.field0_0x0.BasePass = (<unnamed_type_BasePass>)local_78.SortKey.field0_0x0;
  pFVar1 = &pFVar4[iVar9].PrimitiveIdInfo;
  pFVar1->DrawPrimitiveId = local_78.PrimitiveIdInfo.DrawPrimitiveId;
  pFVar1->ScenePrimitiveId = local_78.PrimitiveIdInfo.ScenePrimitiveId;
  *(ulonglong *)&pFVar1->field_0x8 =
       CONCAT44(local_78.PrimitiveIdBufferOffset,local_78.PrimitiveIdInfo._8_4_);
  *(ulonglong *)&pFVar4[iVar9].StateBucketId = CONCAT44(local_78._36_4_,local_78.StateBucketId);
  *(uint **)(&pFVar4[iVar9].StateBucketId + 2) = local_78.RunArray;
  pFVar6 = pFVar4 + iVar9;
  pFVar6->NumRuns = local_78.NumRuns;
  (pFVar6->CullingPayload).field0_0x0 = local_78.CullingPayload.field0_0x0;
  *(ulonglong *)(&pFVar6->NumRuns + 2) =
       CONCAT44(local_78._60_4_,local_78.CullingPayload.DynamicMeshBoundsIndex);
  *(ulonglong *)&pFVar4[iVar9].field_0x40 = CONCAT44(local_78._68_4_,local_78._64_4_);
  return;
}

