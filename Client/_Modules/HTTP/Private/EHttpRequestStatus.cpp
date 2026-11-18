// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// ToString @ 1431883f0

wchar_t * __cdecl EHttpRequestStatus::ToString(Type param_1)

{
  if (param_1 == NotStarted) {
    return L"NotStarted";
  }
  if (param_1 == Processing) {
    return L"Processing";
  }
  if (param_1 == Failed) {
    return L"Failed";
  }
  if (param_1 != Succeeded) {
    return L"";
  }
  return L"Succeeded";
}

