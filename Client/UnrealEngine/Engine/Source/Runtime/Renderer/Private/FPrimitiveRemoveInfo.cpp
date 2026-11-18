// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FPrimitiveRemoveInfo @ 1453fda20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveRemoveInfo * __thiscall
FPrimitiveRemoveInfo::FPrimitiveRemoveInfo(FPrimitiveRemoveInfo *this,FPrimitiveRemoveInfo *param_1)

{
  ForElementType<int> FVar1;
  
  this->Primitive = param_1->Primitive;
  this->bOftenMoving = param_1->bOftenMoving;
  (this->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData ==
      (ForElementType<int>)0x0) {
    *(undefined4 *)(this->DistanceFieldInstanceIndices).AllocatorInstance.InlineData =
         *(undefined4 *)(param_1->DistanceFieldInstanceIndices).AllocatorInstance.InlineData;
  }
  FVar1 = (this->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData =
       (param_1->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData;
  (param_1->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0
  ;
  (this->DistanceFieldInstanceIndices).ArrayNum = (param_1->DistanceFieldInstanceIndices).ArrayNum;
  (this->DistanceFieldInstanceIndices).ArrayMax = (param_1->DistanceFieldInstanceIndices).ArrayMax;
  (param_1->DistanceFieldInstanceIndices).ArrayNum = 0;
  (param_1->DistanceFieldInstanceIndices).ArrayMax = 1;
  this->DistanceFieldData = param_1->DistanceFieldData;
  return this;
}

