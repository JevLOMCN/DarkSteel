// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~FEventScope @ 14266a130

void __thiscall FCpuProfilerTrace::FEventScope::~FEventScope(FEventScope *this)

{
  if (this->bEnabled != false) {
    OutputEndEvent();
  }
  return;
}

