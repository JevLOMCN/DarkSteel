// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ResetToDefaultMaterial @ 1484218f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxyBase::FMaterialSection::ResetToDefaultMaterial
          (FMaterialSection *this,bool param_1,bool param_2)

{
  UMaterial *pUVar1;
  FMaterialRenderProxy *pFVar2;
  
  if (this->bHidden == '\0') {
    pUVar1 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  else {
    pUVar1 = (GEngine->NaniteHiddenSectionMaterial).field0_0x0.DebugPtr;
  }
  pFVar2 = (FMaterialRenderProxy *)(**(code **)(pUVar1->_padding_ + 0x310))(pUVar1);
  if (param_1) {
    this->ShadingMaterialProxy = pFVar2;
  }
  if (param_2) {
    this->RasterMaterialProxy = pFVar2;
  }
  return;
}

