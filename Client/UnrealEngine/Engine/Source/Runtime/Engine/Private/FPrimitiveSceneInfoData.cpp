// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetLastRenderTime @ 148424e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveSceneInfoData::SetLastRenderTime(FPrimitiveSceneInfoData *this,float param_1,bool param_2)

{
  this->LastRenderTime = param_1;
  if (param_2) {
    this->LastRenderTimeOnScreen = param_1;
  }
  if (this->OwnerLastRenderTimePtr != (FActorLastRenderTime *)0x0) {
    this->OwnerLastRenderTimePtr->LastRenderTime = (atomic<float>)param_1;
  }
  return;
}

