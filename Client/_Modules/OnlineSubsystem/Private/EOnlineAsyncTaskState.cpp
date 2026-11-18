// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17a50

wchar_t * __cdecl EOnlineAsyncTaskState::ToString(Type param_1)

{
  if (param_1 == NotStarted) {
    return L"NotStarted";
  }
  if (param_1 == InProgress) {
    return L"InProgress";
  }
  if (param_1 == Done) {
    return L"Done";
  }
  if (param_1 != Failed) {
    return L"";
  }
  return L"Failed";
}

