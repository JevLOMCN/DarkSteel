// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FailMaxUObjectCountExceeded @ 14226bf80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::UObjectArrayPrivate::FailMaxUObjectCountExceeded(int param_1,int param_2)

{
  if (GVarDumpObjectCountsToLogWhenMaxObjectLimitExceeded != 0) {
    FUObjectArray::DumpUObjectCountsToLog(&GUObjectArray);
  }
  Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
  return;
}

