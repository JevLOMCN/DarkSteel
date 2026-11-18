// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ToString @ 14ed07800

wchar_t * __cdecl EVoiceCaptureState::ToString(Type param_1)

{
  switch(param_1) {
  case UnInitialized:
    return L"Uninitialized";
  case NotCapturing:
    return L"Not Capturing";
  case Ok:
    return L"Ok";
  case NoData:
    return L"No Data";
  case Stopping:
    return L"Stopping";
  case BufferTooSmall:
    return L"BufferTooSmall";
  case Error:
    return L"Error";
  default:
    return L"";
  }
}

