// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// ToString @ 146528010

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl EAudioMixerChannel::ToString(Type param_1)

{
  switch(param_1) {
  case DefaultChannel:
    return L"FrontLeft";
  case FrontRight:
    return L"FrontRight";
  case FrontCenter:
    return L"FrontCenter";
  case LowFrequency:
    return L"LowFrequency";
  case BackLeft:
    return L"BackLeft";
  case BackRight:
    return L"BackRight";
  case FrontLeftOfCenter:
    return L"FrontLeftOfCenter";
  case FrontRightOfCenter:
    return L"FrontRightOfCenter";
  case BackCenter:
    return L"BackCenter";
  case SideLeft:
    return L"SideLeft";
  case SideRight:
    return L"SideRight";
  case TopCenter:
    return L"TopCenter";
  case TopFrontLeft:
    return L"TopFrontLeft";
  case TopFrontCenter:
    return L"TopFrontCenter";
  case TopFrontRight:
    return L"TopFrontRight";
  case TopBackLeft:
    return L"TopBackLeft";
  case TopBackCenter:
    return L"TopBackCenter";
  case TopBackRight:
    return L"TopBackRight";
  case Unknown:
    return L"Unknown";
  default:
    return L"UNSUPPORTED";
  }
}

