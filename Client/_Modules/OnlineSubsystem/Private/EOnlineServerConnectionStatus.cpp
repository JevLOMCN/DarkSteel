// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17d80

wchar_t * __cdecl EOnlineServerConnectionStatus::ToString(Type param_1)

{
  switch(param_1) {
  case Normal:
    return L"Normal";
  case NotConnected:
    return L"NotConnected";
  case Connected:
    return L"Connected";
  case ConnectionDropped:
    return L"ConnectionDropped";
  case NoNetworkConnection:
    return L"NoNetworkConnection";
  case ServiceUnavailable:
    return L"ServiceUnavailable";
  case UpdateRequired:
    return L"UpdateRequired";
  case ServersTooBusy:
    return L"ServersTooBusy";
  case DuplicateLoginDetected:
    return L"DuplicateLoginDetected";
  case InvalidUser:
    return L"InvalidUser";
  case NotAuthorized:
    return L"NotAuthorized";
  case InvalidSession:
    return L"InvalidSession";
  default:
    return L"Unknown";
  }
}

