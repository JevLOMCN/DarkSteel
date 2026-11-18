// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToString @ 148b7bb80

wchar_t * __cdecl ETravelFailure::ToString(Type param_1)

{
  switch(param_1) {
  case NoLevel:
    return L"NoLevel";
  case LoadMapFailure:
    return L"LoadMapFailure";
  case InvalidURL:
    return L"InvalidURL";
  case PackageMissing:
    return L"PackageMissing";
  case PackageVersion:
    return L"PackageVersion";
  case NoDownload:
    return L"NoDownload";
  case TravelFailure:
    return L"TravelFailure";
  case CheatCommands:
    return L"CheatCommands";
  case PendingNetGameCreateFailure:
    return L"PendingNetGameCreateFailure";
  case CloudSaveFailure:
    return L"CloudSaveFailure";
  case ServerTravelFailure:
    return L"ServerTravelFailure";
  case ClientTravelFailure:
    return L"ClientTravelFailure";
  default:
    return L"Unknown ETravelFailure error occurred.";
  }
}

