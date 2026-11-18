// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// GetNumEntities @ 1471202f0

int __thiscall FMassArchetypeData::GetNumEntities(FMassArchetypeData *this)

{
  return *(int *)&(this->EntityMap).field_0x8 - *(int *)&(this->EntityMap).field_0x34;
}

// GetNumEntitiesPerChunk @ 147120320

int __thiscall FMassArchetypeData::GetNumEntitiesPerChunk(FMassArchetypeData *this)

{
  return this->NumEntitiesPerChunk;
}

