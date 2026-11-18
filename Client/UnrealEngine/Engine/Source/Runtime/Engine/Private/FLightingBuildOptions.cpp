// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ShouldBuildLightingForLevel @ 147ede500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FLightingBuildOptions::ShouldBuildLightingForLevel(FLightingBuildOptions *this,ULevel *param_1)

{
  FScriptContainerElement *pFVar1;
  ULevel *pUVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_1 != (ULevel *)0x0) {
    if (this->bOnlyBuildCurrentLevel == false) {
      if (this->bOnlyBuildSelectedLevels == false) {
        return true;
      }
      pFVar3 = (this->SelectedLevels).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)(this->SelectedLevels).ArrayNum * 8;
      for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 8) {
        if (*(ULevel **)pFVar3 == param_1) {
          return true;
        }
      }
    }
    else {
      pUVar2 = UWorld::GetCurrentLevel((param_1->OwningWorld).field0_0x0.DebugPtr);
      if (param_1 == pUVar2) {
        return true;
      }
    }
  }
  return false;
}

