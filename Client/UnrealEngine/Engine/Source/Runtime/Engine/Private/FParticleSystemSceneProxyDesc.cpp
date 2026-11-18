// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FParticleSystemSceneProxyDesc @ 1480f45b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FParticleSystemSceneProxyDesc * __thiscall
FParticleSystemSceneProxyDesc::FParticleSystemSceneProxyDesc
          (FParticleSystemSceneProxyDesc *this,UParticleSystemComponent *param_1,
          FParticleDynamicData *param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  FParticleSystemSceneProxyDesc *pFVar6;
  FMaterialRelevance_u_0 FVar7;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc
            ((FPrimitiveSceneProxyDesc *)this,(UPrimitiveComponent *)param_1);
  this->_padding_ = (longlong)&___7FParticleSystemSceneProxyDesc__6B_;
  piVar1 = &param_1->LODLevel;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  this->SystemAsset = (UParticleSystem *)(param_1->Template).field0_0x0;
  this->DynamicData = param_2;
  iVar2 = *piVar1;
  if ((iVar2 < 0) || ((param_1->CachedViewRelevanceFlags).ArrayNum <= iVar2)) {
    if ((iVar2 == -1) && (0 < (param_1->CachedViewRelevanceFlags).ArrayNum)) {
      FVar7 = *(FMaterialRelevance_u_0 *)(param_1->CachedViewRelevanceFlags).AllocatorInstance.Data;
      goto LAB_1480f468b;
    }
  }
  else {
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FParticleSystemSceneProxyDesc *)(*pcVar3)();
        return pFVar6;
      }
    }
    FVar7 = *(FMaterialRelevance_u_0 *)
             ((param_1->CachedViewRelevanceFlags).AllocatorInstance.Data + (longlong)iVar2 * 8);
LAB_1480f468b:
    (this->MaterialRelevance).field0_0x0 = FVar7;
  }
  this->VisualizeLODIndex = *piVar1;
  bVar5 = (param_1->LODMethod).Value;
  this->bCanBeOccluded = '\0';
  this->field_0xe0 = this->field_0xe0 | param_3;
  this->LODMethod = (uint)bVar5;
  bVar4 = UParticleSystemComponent::ShouldManageSignificance(param_1);
  this->bManagingSignificance = bVar4;
  if (this->SystemAsset != (UParticleSystem *)0x0) {
    bVar4 = UParticleSystem::DoesAnyEmitterHaveMotionBlur(this->SystemAsset,*piVar1);
    if (bVar4) {
      bVar5 = 4;
      goto LAB_1480f46ee;
    }
  }
  bVar5 = 0;
LAB_1480f46ee:
  this->bAlwaysHasVelocity = '\0';
  this->field_0xe0 = this->field_0xe0 | bVar5;
  return this;
}

// FParticleSystemSceneProxyDesc @ 1480f4720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FParticleSystemSceneProxyDesc * __thiscall
FParticleSystemSceneProxyDesc::FParticleSystemSceneProxyDesc(FParticleSystemSceneProxyDesc *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  this->_padding_ = (longlong)&___7FParticleSystemSceneProxyDesc__6B_;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  this->SystemAsset = (UParticleSystem *)0x0;
  this->DynamicData = (FParticleDynamicData *)0x0;
  this->VisualizeLODIndex = 0;
  this->LODMethod = 0;
  puVar2 = &this->field_0xe0;
  this->bCanBeOccluded = '\x01';
  this->bAlwaysHasVelocity = '\0';
  this->bManagingSignificance = '\0';
  return this;
}

// GetUsedMaterials @ 14811c700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxyDesc::GetUsedMaterials
          (FParticleSystemSceneProxyDesc *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  
  if (this->_padding_ == 0) {
    return;
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(plVar5[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14840b81b;
  }
  plVar5 = (longlong *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrimitiveSceneProxyDesc.cpp"
                     ,0xe5,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14840b81b:
                    /* WARNING: Could not recover jumptable at 0x00014840b837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x7f0))(plVar5,param_1,param_2);
  return;
}

