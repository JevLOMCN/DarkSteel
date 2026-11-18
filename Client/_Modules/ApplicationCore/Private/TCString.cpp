// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 2

// Strlen @ 1424087d0

int __cdecl TCString<wchar_t>::Strlen(wchar_t *param_1)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fbf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = wcslen(param_1);
  return (int)sVar1;
}

// Strncpy @ 1424087e0

wchar_t * __cdecl TCString<wchar_t>::Strncpy(wchar_t *param_1,wchar_t *param_2,ulong64 param_3)

{
  wcsncpy(param_1,param_2,param_3 - 1);
  param_1[param_3 - 1] = L'\0';
  return param_1;
}

