// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Compare @ 148024870

bool __cdecl
`FDelinquencyAnalytics::Add'::__l2::FHelper::Compare
          (FDelinquencyNameTimePair *param_1,FDelinquencyNameTimePair *param_2)

{
  return param_2->TimeSeconds < param_1->TimeSeconds;
}

