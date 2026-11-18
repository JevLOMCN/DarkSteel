// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Update @ 141896360

void __thiscall FAutoNamedEventsToggler::Update(FAutoNamedEventsToggler *this,bool param_1)

{
  if (param_1) {
    if ((this->bSetNamedEventsEnabled == false) && (GAutoEnableNamedEventsWhenProfiling)) {
      GCycleStatsShouldEmitNamedEvents = GCycleStatsShouldEmitNamedEvents + 1;
      this->bSetNamedEventsEnabled = true;
      return;
    }
  }
  else if (this->bSetNamedEventsEnabled != false) {
    GCycleStatsShouldEmitNamedEvents = GCycleStatsShouldEmitNamedEvents + -1;
    if (GCycleStatsShouldEmitNamedEvents < 0) {
      GCycleStatsShouldEmitNamedEvents = 0;
    }
    this->bSetNamedEventsEnabled = false;
  }
  return;
}

