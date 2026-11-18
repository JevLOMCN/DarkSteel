// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec179a0

wchar_t * __cdecl ELeaderboardSort::ToString(Type param_1)

{
  if (param_1 == None) {
    return L"None";
  }
  if (param_1 != Ascending) {
    if (param_1 != Descending) {
      return L"";
    }
    return L"Descending";
  }
  return L"Ascending";
}

