// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 1

// DestroyObject @ 14a6ad5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_TaskScheduler,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_TaskScheduler,1> *this)

{
  FWN_TaskScheduler::~FWN_TaskScheduler((FWN_TaskScheduler *)&this->ObjectStorage);
  return;
}

