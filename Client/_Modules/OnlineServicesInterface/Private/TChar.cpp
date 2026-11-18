// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// IsHexDigit @ 14ec2a2c0

bool __cdecl TChar<wchar_t>::IsHexDigit(wchar_t param_1)

{
  int iVar1;
  
  iVar1 = iswxdigit(param_1);
  return iVar1 != 0;
}

