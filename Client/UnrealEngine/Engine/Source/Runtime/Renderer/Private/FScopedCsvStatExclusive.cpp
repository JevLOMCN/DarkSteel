// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FScopedCsvStatExclusive @ 1447f5390

FScopedCsvStatExclusive * __thiscall
FScopedCsvStatExclusive::FScopedCsvStatExclusive
          (FScopedCsvStatExclusive *this,char *param_1,char *param_2)

{
  this->StatName = param_1;
  FCsvProfiler::BeginExclusiveStat(param_1,param_2);
  return this;
}

