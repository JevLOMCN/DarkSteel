// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// StaticAssertTypeConstants @ 141a23e50

void __cdecl FCbFieldType::StaticAssertTypeConstants(void)

{
  return;
}

// IsHash @ 141a848c0

bool __cdecl FCbFieldType::IsHash(ECbFieldType param_1)

{
  if (((param_1 & CustomByName) != Hash) && ((param_1 & CustomById) != ObjectAttachment)) {
    return false;
  }
  return true;
}

