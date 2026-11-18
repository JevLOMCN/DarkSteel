// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToString @ 147ffa1f0

wchar_t * __cdecl EClientLoginState::ToString(Type param_1)

{
  if (param_1 == Invalid) {
    return L"Invalid";
  }
  if (param_1 == LoggingIn) {
    return L"LoggingIn";
  }
  if (param_1 == Welcomed) {
    return L"Welcomed";
  }
  if (param_1 != ReceivedJoin) {
    if (param_1 != CleanedUp) {
      return L"";
    }
    return L"CleanedUp";
  }
  return L"ReceivedJoin";
}

