// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// Write<int> @ 142b4dc70

void __cdecl UE::Logging::Private::FLogField::Write<int>(FCbWriter *param_1,void *param_2)

{
  FCbWriter::AddInteger(param_1,*(int *)param_2);
  return;
}

// Write<__int64> @ 142b4dc80

void __cdecl UE::Logging::Private::FLogField::Write<__int64>(FCbWriter *param_1,void *param_2)

{
  FCbWriter::AddInteger(param_1,*(long64 *)param_2);
  return;
}

