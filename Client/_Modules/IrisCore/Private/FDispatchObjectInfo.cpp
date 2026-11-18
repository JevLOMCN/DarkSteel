// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FDispatchObjectInfo @ 1442ad930

FDispatchObjectInfo * __thiscall
UE::Net::Private::FReplicationReader::FDispatchObjectInfo::FDispatchObjectInfo
          (FDispatchObjectInfo *this)

{
  undefined1 *puVar1;
  
  this->bIsInitialState = 0;
  this->bDynamicObjectCreated = 0;
  this->bShouldCallSubObjectCreatedFromReplication = 0;
  this->bProcessEndReplicationForHierarchy = 0;
  this->bReplicatedDestroyForSubObject = 0;
  this->bDeferredEndReplication = 0;
  this->bTearOff = 0;
  this->bDestroy = 0;
  this->bHasAttachments = 0;
  this->bHasState = 0;
  this->InternalIndex = 0;
  (this->ChangeMaskOrPointer).ChangeMaskOrPointer = 0;
  return this;
}

