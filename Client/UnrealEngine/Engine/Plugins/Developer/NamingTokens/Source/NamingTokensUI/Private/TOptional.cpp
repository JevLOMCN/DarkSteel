// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 1

// Get @ 14d107150

EFocusCause * __thiscall TOptional<enum_EFocusCause>::Get(void *this,EFocusCause *param_1)

{
  if (*(char *)((longlong)this + 1) == '\0') {
    this = param_1;
  }
  return this;
}

