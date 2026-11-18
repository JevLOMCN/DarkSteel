// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17890

wchar_t * __cdecl EFeaturePrivilegeLevel::ToString(Type param_1)

{
  if (param_1 == Undefined) {
    return L"Undefined";
  }
  if (param_1 == Disabled) {
    return L"Disabled";
  }
  if (param_1 == EnabledFriendsOnly) {
    return L"EnabledFriendsOnly";
  }
  if (param_1 != Enabled) {
    return L"";
  }
  return L"Enabled";
}

