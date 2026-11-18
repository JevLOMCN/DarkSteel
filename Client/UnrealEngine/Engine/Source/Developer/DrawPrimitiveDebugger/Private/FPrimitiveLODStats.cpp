// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 1

// GetDrawCount @ 146d1e3b0

int __thiscall FPrimitiveLODStats::GetDrawCount(FPrimitiveLODStats *this)

{
  return (this->MaterialIndices).ArrayNum * this->Sections;
}

