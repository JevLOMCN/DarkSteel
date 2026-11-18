// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FArchetypeGroupHandle @ 1470f2b60

FArchetypeGroupHandle * __thiscall
UE::Mass::FArchetypeGroupHandle::FArchetypeGroupHandle
          (FArchetypeGroupHandle *this,FArchetypeGroupType param_1,FArchetypeGroupID param_2)

{
  (this->GroupType).Identifier = param_1.Identifier;
  (this->GroupID).ID = param_2.ID;
  return this;
}

// GetGroupID @ 1471202b0

FArchetypeGroupID __thiscall
UE::Mass::FArchetypeGroupHandle::GetGroupID(FArchetypeGroupHandle *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->GroupID).ID;
  return (FArchetypeGroupID)(uint)in_RDX;
}

