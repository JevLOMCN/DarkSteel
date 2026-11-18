// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// Write<unsigned_short> @ 1442f54a0

void __cdecl
UE::Logging::Private::FLogField::Write<unsigned_short>(FCbWriter *param_1,void *param_2)

{
  FCbWriter::AddInteger(param_1,(uint)*(ushort *)param_2);
  return;
}

// Write<unsigned_int> @ 1442f54b0

void __cdecl UE::Logging::Private::FLogField::Write<unsigned_int>(FCbWriter *param_1,void *param_2)

{
  FCbWriter::AddInteger(param_1,*(uint *)param_2);
  return;
}

// Write<bool> @ 1442f54c0

void __cdecl UE::Logging::Private::FLogField::Write<bool>(FCbWriter *param_1,void *param_2)

{
  FCbWriter::AddBool(param_1,*(bool *)param_2);
  return;
}

