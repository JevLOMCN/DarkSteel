// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17b70

wchar_t * __cdecl EOnlineDataAdvertisementType::ToString(Type param_1)

{
  if (param_1 == DontAdvertise) {
    return L"DontAdvertise";
  }
  if (param_1 == ViaPingOnly) {
    return L"ViaPingOnly";
  }
  if (param_1 == ViaOnlineService) {
    return L"OnlineService";
  }
  if (param_1 != ViaOnlineServiceAndPing) {
    return L"";
  }
  return L"OnlineServiceAndPing";
}

