// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FArchetypeGroupID @ 1470f2b70

FArchetypeGroupID * __thiscall
UE::Mass::FArchetypeGroupID::FArchetypeGroupID(FArchetypeGroupID *this,uint param_1)

{
  this->ID = param_1;
  return this;
}

// operator_int @ 1470f9dd0

int __thiscall UE::Mass::FArchetypeGroupID::operator_int(FArchetypeGroupID *this)

{
  return this->ID;
}

