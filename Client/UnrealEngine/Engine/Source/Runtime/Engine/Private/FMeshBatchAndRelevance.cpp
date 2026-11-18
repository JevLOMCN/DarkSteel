// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMeshBatchAndRelevance @ 1484ba690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMeshBatchAndRelevance * __thiscall
FMeshBatchAndRelevance::FMeshBatchAndRelevance
          (FMeshBatchAndRelevance *this,FMeshBatch *param_1,FPrimitiveSceneProxy *param_2,
          Type param_3)

{
  bool bVar1;
  uint uVar2;
  FMaterial *pFVar3;
  uint uVar4;
  
  this->Mesh = param_1;
  this->PrimitiveSceneProxy = param_2;
  if (param_1->MaterialRenderProxy == (FMaterialRenderProxy *)0x0) {
    uVar4 = *(uint *)&this->field_0x10 & 0xfffffffc;
  }
  else {
    pFVar3 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                       (param_1->MaterialRenderProxy,param_3);
    bVar1 = IsOpaqueBlendMode(pFVar3);
    this->bHasOpaqueMaterial = bVar1;
    bVar1 = IsMaskedBlendMode(pFVar3);
    uVar4 = (uint)bVar1 * 2 | *(uint *)&this->field_0x10 & 0xfffffffd;
  }
  *(uint *)&this->field_0x10 = uVar4;
  uVar2 = 0;
  if (this->PrimitiveSceneProxy != (FPrimitiveSceneProxy *)0x0) {
    uVar2 = (uint)((byte)this->PrimitiveSceneProxy->field_0x7b >> 3);
  }
  *(uint *)&this->field_0x10 = (uVar2 << 2 ^ uVar4) & 4 ^ uVar4;
  return this;
}

