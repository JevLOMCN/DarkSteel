// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// FMassEntityManager_InitParams_Concurrent @ 1470f48c0

FMassEntityManager_InitParams_Concurrent * __thiscall
FMassEntityManager_InitParams_Concurrent::FMassEntityManager_InitParams_Concurrent
          (FMassEntityManager_InitParams_Concurrent *this)

{
  this->MaxEntityCount = 0x40000000;
  this->MaxEntitiesPerPage = 0x10000;
  return this;
}

