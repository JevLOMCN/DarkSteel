// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// RaiseMismatchError @ 145cbb870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHILockTracker::RaiseMismatchError(FRHILockTracker *this)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  return;
}

