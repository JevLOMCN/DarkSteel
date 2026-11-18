// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// FMassArchetypeCreationParams @ 1471d6670

FMassArchetypeCreationParams * __thiscall
FMassArchetypeCreationParams::FMassArchetypeCreationParams
          (FMassArchetypeCreationParams *this,FMassArchetypeData *param_1)

{
  this->ChunkMemorySize = param_1->ChunkMemorySize;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  (this->DebugColor).field0_0x0.Bits = 0;
  return this;
}

