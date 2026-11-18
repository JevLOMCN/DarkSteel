// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 1

// CheckObjectValidBasedOnItsFlags @ 146d09d00

bool __cdecl
FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags(UObject *param_1)

{
  return (bool)(~(byte)((uint)*(undefined4 *)&param_1->field_0x8 >> 0x1e) & 1);
}

