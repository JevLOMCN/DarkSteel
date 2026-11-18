// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator() @ 145415e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FPrimitiveArraySortKey::operator()
          (FPrimitiveArraySortKey *this,FPrimitiveSceneInfo *param_1,FPrimitiveSceneInfo *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = (**(code **)(param_1->Proxy->_padding_ + 8))();
  uVar3 = (**(code **)(param_2->Proxy->_padding_ + 8))();
  bVar4 = param_1->Proxy->bIsAlwaysVisible;
  bVar1 = param_2->Proxy->bIsAlwaysVisible;
  if (bVar4 != bVar1) {
    return (bool)((bVar1 ^ 1) & bVar4);
  }
  bVar5 = uVar2 < uVar3;
  bVar6 = false;
  if (uVar2 == uVar3) {
    uVar2 = (param_2->PrimitiveComponentId).PrimIDValue;
    uVar3 = (param_1->PrimitiveComponentId).PrimIDValue;
    bVar5 = uVar3 < uVar2;
    bVar6 = uVar3 == uVar2;
  }
  return !bVar5 && !bVar6;
}

