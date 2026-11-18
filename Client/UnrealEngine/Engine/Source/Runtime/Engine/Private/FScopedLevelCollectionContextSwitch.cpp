// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FScopedLevelCollectionContextSwitch @ 1489b3be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FScopedLevelCollectionContextSwitch * __thiscall
FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch
          (FScopedLevelCollectionContextSwitch *this,int param_1,UWorld *param_2)

{
  this->World = param_2;
  if (param_2 != (UWorld *)0x0) {
    this->SavedTickingCollectionIndex = param_2->ActiveLevelCollectionIndex;
    UWorld::SetActiveLevelCollection(param_2,param_1);
    return this;
  }
  this->SavedTickingCollectionIndex = -1;
  return this;
}

// FScopedLevelCollectionContextSwitch @ 1489b3c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FScopedLevelCollectionContextSwitch * __thiscall
FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch
          (FScopedLevelCollectionContextSwitch *this,FLevelCollection *param_1,UWorld *param_2)

{
  FLevelCollection *pFVar1;
  longlong lVar2;
  FLevelCollection *pFVar3;
  
  this->World = param_2;
  if (param_2 == (UWorld *)0x0) {
    this->SavedTickingCollectionIndex = -1;
    return this;
  }
  this->SavedTickingCollectionIndex = param_2->ActiveLevelCollectionIndex;
  pFVar1 = (FLevelCollection *)(param_2->LevelCollections).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (param_2->LevelCollections).ArrayNum) {
      UWorld::SetActiveLevelCollection(param_2,-1);
      return this;
    }
    if (pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar3 - (longlong)pFVar1),8) +
          ((longlong)pFVar3 - (longlong)pFVar1);
  UWorld::SetActiveLevelCollection(param_2,(int)(lVar2 >> 6) - (int)(lVar2 >> 0x3f));
  return this;
}

// ~FScopedLevelCollectionContextSwitch @ 1489b94b0

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
FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch
          (FScopedLevelCollectionContextSwitch *this)

{
  if (this->World != (UWorld *)0x0) {
    UWorld::SetActiveLevelCollection(this->World,this->SavedTickingCollectionIndex);
    return;
  }
  return;
}

