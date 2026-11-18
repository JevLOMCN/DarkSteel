// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17e40

wchar_t * __cdecl EOnlineSessionState::ToString(Type param_1)

{
  switch(param_1) {
  case NoSession:
    return L"NoSession";
  case Creating:
    return L"Creating";
  case Pending:
    return L"Pending";
  case Starting:
    return L"Starting";
  case InProgress:
    return L"InProgress";
  case Ending:
    return L"Ending";
  case Ended:
    return L"Ended";
  case Destroying:
    return L"Destroying";
  default:
    return L"";
  }
}

