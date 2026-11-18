// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Stop @ 141a245c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCycleCounter::Stop(FCycleCounter *this)

{
  if ((this->EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((this->EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((this->EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(this->StatId,CycleScopeEnd);
  }
  this->EmittedEvent = '\0';
  return;
}

