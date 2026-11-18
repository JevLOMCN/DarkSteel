// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FromInt @ 148402230

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl EAlphaChannelMode::FromInt(int param_1)

{
  Type TVar1;
  Type TVar2;
  
  TVar2 = AllowThroughTonemapper;
  if (param_1 < 1) {
    TVar2 = param_1;
  }
  TVar1 = Disabled;
  if (0 < (int)TVar2) {
    TVar1 = TVar2;
  }
  return TVar1;
}

