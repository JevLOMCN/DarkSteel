// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~FScopeCycleCounter @ 14266a390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FScopeCycleCounter::~FScopeCycleCounter(FScopeCycleCounter *this)

{
  FName FVar1;
  
  if ((this->field_0x8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((this->field_0x8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((this->field_0x8 & 4) != 0) {
    FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x0;
    FVar1.Number = *(uint *)&this->field_0x4;
    FThreadStats::AddMessage(FVar1,CycleScopeEnd);
  }
  this->field_0x8 = 0;
  return;
}

