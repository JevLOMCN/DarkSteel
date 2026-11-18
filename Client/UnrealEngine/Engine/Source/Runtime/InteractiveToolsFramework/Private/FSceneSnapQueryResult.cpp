// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// GetCoordinateSpace @ 1496dccc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EToolContextCoordinateSystem __thiscall
FSceneSnapQueryResult::GetCoordinateSpace
          (FSceneSnapQueryResult *this,FSceneSnapQueryRequest *param_1)

{
  FSceneSnapQueryRequest *pFVar1;
  
  if ((this->CoordinateSpace).bIsSet != false) {
    return (this->CoordinateSpace).TypedValue;
  }
  pFVar1 = (FSceneSnapQueryRequest *)&param_1->ResultCoordinateSpace;
  if ((param_1->ResultCoordinateSpace).bIsSet == false) {
    pFVar1 = param_1;
  }
  return pFVar1->RequestCoordinateSpace;
}

