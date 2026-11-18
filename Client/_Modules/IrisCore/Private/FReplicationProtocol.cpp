// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// AddRef @ 1442b5a80

void __thiscall UE::Net::FReplicationProtocol::AddRef(FReplicationProtocol *this)

{
  this->RefCount = this->RefCount + 1;
  return;
}

// Release @ 1442dd7c0

void __thiscall UE::Net::FReplicationProtocol::Release(FReplicationProtocol *this)

{
  this->RefCount = this->RefCount + -1;
  return;
}

