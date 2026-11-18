// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17960

wchar_t * __cdecl ELeaderboardFormat::ToString(Type param_1)

{
  if (param_1 == Number) {
    return L"Number";
  }
  if (param_1 != Seconds) {
    if (param_1 != Milliseconds) {
      return L"";
    }
    return L"Milliseconds";
  }
  return L"Seconds";
}

