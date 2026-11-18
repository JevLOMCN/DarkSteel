// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetOSVersions @ 141aab6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FWindowsOSVersionHelper::GetOSVersions(FString *param_1,FString *param_2)

{
  int iVar1;
  undefined1 auStack_238 [32];
  wchar_t local_218 [128];
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_218[0] = L'\0';
  local_118[0] = L'\0';
  iVar1 = GetOSVersionsHelper(local_218,0x80,local_118,0x80);
  ::FString::operator=(param_1,local_218);
  ::FString::operator=(param_2,local_118);
  return iVar1;
}

