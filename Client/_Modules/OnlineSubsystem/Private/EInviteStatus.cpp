// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec178e0

wchar_t * __cdecl EInviteStatus::ToString(Type param_1)

{
  switch(param_1) {
  case Unknown:
    return L"Unknown";
  case Accepted:
    return L"Accepted";
  case PendingInbound:
    return L"PendingInbound";
  case PendingOutbound:
    return L"PendingOutbound";
  case Blocked:
    return L"Blocked";
  case Suggested:
    return L"Suggested";
  default:
    return L"";
  }
}

