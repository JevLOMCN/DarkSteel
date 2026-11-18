// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17a10

wchar_t * __cdecl ELoginStatus::ToString(Type param_1)

{
  if (param_1 == NotLoggedIn) {
    return L"NotLoggedIn";
  }
  if (param_1 != UsingLocalProfile) {
    if (param_1 != LoggedIn) {
      return L"";
    }
    return L"LoggedIn";
  }
  return L"UsingLocalProfile";
}

