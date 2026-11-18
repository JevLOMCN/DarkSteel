// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FDynamicEventScope @ 14ea972d0

void __thiscall FCpuProfilerTrace::FDynamicEventScope::~FDynamicEventScope(FDynamicEventScope *this)

{
  if (this->bEnabled != false) {
    OutputEndEvent();
  }
  return;
}

