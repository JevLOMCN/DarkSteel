// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToString @ 14ec17aa0

wchar_t * __cdecl EOnlineCachedResult::ToString(Type param_1)

{
  if (param_1 == Success) {
    return L"Success";
  }
  if (param_1 != NotFound) {
    return L"";
  }
  return L"NotFound";
}

