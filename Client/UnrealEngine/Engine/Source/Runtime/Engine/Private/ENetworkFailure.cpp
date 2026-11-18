// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToString @ 148b7bad0

wchar_t * __cdecl ENetworkFailure::ToString(Type param_1)

{
  switch(param_1) {
  case NetDriverAlreadyExists:
    return L"NetDriverAlreadyExists";
  case NetDriverCreateFailure:
    return L"NetDriverCreateFailure";
  case NetDriverListenFailure:
    return L"NetDriverListenFailure";
  case ConnectionLost:
    return L"ConnectionLost";
  case ConnectionTimeout:
    return L"ConnectionTimeout";
  case FailureReceived:
    return L"FailureReceived";
  case OutdatedClient:
    return L"OutdatedClient";
  case OutdatedServer:
    return L"OutdatedServer";
  case PendingConnectionFailure:
    return L"PendingConnectionFailure";
  case NetGuidMismatch:
    return L"NetGuidMismatch";
  case NetChecksumMismatch:
    return L"NetChecksumMismatch";
  default:
    return L"Unknown ENetworkFailure error occurred.";
  }
}

