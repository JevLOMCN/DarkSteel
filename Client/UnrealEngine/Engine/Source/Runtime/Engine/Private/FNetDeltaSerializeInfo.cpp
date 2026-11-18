// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FNetDeltaSerializeInfo @ 1484baa70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetDeltaSerializeInfo * __thiscall
FNetDeltaSerializeInfo::FNetDeltaSerializeInfo
          (FNetDeltaSerializeInfo *this,FNetDeltaSerializeInfo *param_1)

{
  this->Writer = param_1->Writer;
  this->Reader = param_1->Reader;
  this->NewState = param_1->NewState;
  this->OldState = param_1->OldState;
  this->Map = param_1->Map;
  this->Connection = param_1->Connection;
  this->Data = param_1->Data;
  this->Struct = param_1->Struct;
  this->NetSerializeCB = param_1->NetSerializeCB;
  this->bUpdateUnmappedObjects = param_1->bUpdateUnmappedObjects;
  this->bOutSomeObjectsWereMapped = param_1->bOutSomeObjectsWereMapped;
  this->bCalledPreNetReceive = param_1->bCalledPreNetReceive;
  this->bOutHasMoreUnmapped = param_1->bOutHasMoreUnmapped;
  this->bGuidListsChanged = param_1->bGuidListsChanged;
  this->bIsWritingOnClient = param_1->bIsWritingOnClient;
  this->bIsInitializingBaseFromDefault = param_1->bIsInitializingBaseFromDefault;
  this->bSupportsFastArrayDeltaStructSerialization =
       param_1->bSupportsFastArrayDeltaStructSerialization;
  this->bInternalAck = param_1->bInternalAck;
  this->Object = param_1->Object;
  this->CustomDeltaObject = param_1->CustomDeltaObject;
  this->GatherGuidReferences = param_1->GatherGuidReferences;
  this->TrackedGuidMemoryBytes = param_1->TrackedGuidMemoryBytes;
  this->MoveGuidToUnmapped = param_1->MoveGuidToUnmapped;
  this->CustomDeltaIndex = param_1->CustomDeltaIndex;
  ::FString::FString(&this->DebugName,&param_1->DebugName);
  return this;
}

