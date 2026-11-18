// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec179e0

wchar_t * __cdecl ELeaderboardUpdateMethod::ToString(Type param_1)

{
  if (param_1 == KeepBest) {
    return L"KeepBest";
  }
  if (param_1 != Force) {
    return L"";
  }
  return L"Force";
}

