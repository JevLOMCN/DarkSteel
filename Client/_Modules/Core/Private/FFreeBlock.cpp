// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CanaryFail @ 14168a1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinnedGPU::FFreeBlock::CanaryFail(FFreeBlock *this)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
  return;
}

