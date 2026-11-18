// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// IsPathIdSeparator @ 1420ffa40

bool __cdecl
UE::CoreUObject::Private::TStringViewNamePathProducer<char>::IsPathIdSeparator(char param_1)

{
  if ((param_1 != '.') && (param_1 != ':')) {
    return false;
  }
  return true;
}

// IsPathIdSeparator @ 1420ffa60

bool __cdecl
UE::CoreUObject::Private::TStringViewNamePathProducer<wchar_t>::IsPathIdSeparator(wchar_t param_1)

{
  if ((param_1 != L'.') && (param_1 != L':')) {
    return false;
  }
  return true;
}

