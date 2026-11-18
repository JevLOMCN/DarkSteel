// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17c00

wchar_t * __cdecl EOnlineFriendState::ToString(Type param_1)

{
  if (param_1 == Offline) {
    return L"Offline";
  }
  if (param_1 == Online) {
    return L"Online";
  }
  if (param_1 == Away) {
    return L"Away";
  }
  if (param_1 != Busy) {
    return L"";
  }
  return L"Busy";
}

