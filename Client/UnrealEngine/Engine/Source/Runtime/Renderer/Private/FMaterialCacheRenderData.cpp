// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FMaterialCacheRenderData @ 144e74470

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

void __thiscall FMaterialCacheRenderData::~FMaterialCacheRenderData(FMaterialCacheRenderData *this)

{
  FMaterialCacheLayerRenderData *pFVar1;
  FNaniteShadingBin *pFVar2;
  FInstanceDraw *pFVar3;
  ForElementType<FRDGTexture_*> FVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FMaterialCacheABuffer *pFVar8;
  
  DestructItems<FMaterialCacheLayerRenderData,int>
            ((this->Layers).AllocatorInstance.Data,(this->Layers).ArrayNum);
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  if (pFVar1 != (FMaterialCacheLayerRenderData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  FNaniteShadingCommands::~FNaniteShadingCommands(&(this->Nanite).ShadingCommands);
  pFVar2 = (this->Nanite).ShadingBins.AllocatorInstance.Data;
  if (pFVar2 != (FNaniteShadingBin *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  pFVar3 = (this->Nanite).InstanceDraws.AllocatorInstance.Data;
  if (pFVar3 != (FInstanceDraw *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar3);
  }
  FVar4 = (this->ABuffer).ABufferTextures.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FRDGTexture_*>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar5 = (this->ABuffer).Pages.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar8 = &this->ABuffer;
  lVar7 = 3;
  do {
    lVar6 = (longlong)(pFVar8 + -1);
    pFVar8 = (FMaterialCacheABuffer *)((longlong)(pFVar8 + -1) + 0x58);
    lVar7 = lVar7 + -1;
    if (*(void **)(lVar6 + 0x58) != (void *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)(lVar6 + 0x58));
    }
  } while (lVar7 != 0);
  return;
}

