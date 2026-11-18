// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// FReplicatedObjectData @ 1442676d0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicatedObjectData * __thiscall
UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData::FReplicatedObjectData
          (FReplicatedObjectData *this)

{
  this->NetFactoryId = 0xff;
  this->IrisAsyncLoadingPriority = Default;
  this->field9_0x32 = (FReplicatedObjectData_u_50)0x0;
  (this->RefHandle).field0_0x0.Value = 0;
  (this->NetHandle).field0_0x0 = (FNetHandle_u_0)0x0;
  this->Protocol = (FReplicationProtocol *)0x0;
  this->InstanceProtocol = (FReplicationInstanceProtocol *)0x0;
  this->ReceiveStateBuffer = (uchar *)0x0;
  this->SubObjectRootIndex = 0;
  this->SubObjectParentIndex = 0;
  return this;
}

