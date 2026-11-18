// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FLightFunctionSlotKey @ 144b97fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightFunctionSlotKey * __thiscall
LightFunctionAtlas::FLightFunctionSlotKey::FLightFunctionSlotKey
          (FLightFunctionSlotKey *this,FLightSceneInfo *param_1)

{
  FMaterialRenderProxy *pFVar1;
  longlong lVar2;
  
  this->LFMaterialUniqueID = 0;
  this->EffectiveLightFunctionSlotIndex = 0;
  pFVar1 = param_1->Proxy->LightFunctionMaterial;
  if (pFVar1 != (FMaterialRenderProxy *)0x0) {
    lVar2 = (**(code **)(pFVar1->_padding_ + 0x40))();
    this->LFMaterialUniqueID = *(uint *)(lVar2 + 0xc);
  }
  return this;
}

