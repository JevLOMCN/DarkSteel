// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// IsLinebreak @ 1430d39a0

bool __cdecl TCharBase<wchar_t,2>::IsLinebreak(wchar_t param_1)

{
  return (param_1 == L'\x2028' || ((ushort)param_1 - 10 < 4 || param_1 == L'\x2029')) ||
         param_1 == L'\x85';
}

