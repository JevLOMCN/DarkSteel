// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17bc0

wchar_t * __cdecl EOnlineEnvironment::ToString(Type param_1)

{
  if (param_1 == Development) {
    return L"Development";
  }
  if (param_1 != Certification) {
    if (param_1 != Production) {
      return L"Unknown";
    }
    return L"Production";
  }
  return L"Certification";
}

