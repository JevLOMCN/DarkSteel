// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17d00

wchar_t * __cdecl EOnlinePresenceState::ToString(Type param_1)

{
  switch(param_1) {
  case Online:
    return L"Online";
  case Offline:
    return L"Offline";
  case Away:
    return L"Away";
  case ExtendedAway:
    return L"ExtendedAway";
  case DoNotDisturb:
    return L"DoNotDisturb";
  case Chat:
    return L"Chat";
  default:
    return L"";
  }
}

