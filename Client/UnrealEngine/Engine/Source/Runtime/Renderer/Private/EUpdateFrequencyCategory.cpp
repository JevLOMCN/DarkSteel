// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ToString @ 1454bd480

wchar_t * __cdecl EUpdateFrequencyCategory::ToString(EType param_1)

{
  wchar_t *local_18 [3];
  
  local_18[0] = L"Static";
  local_18[1] = L"Dynamic";
  return local_18[(int)param_1];
}

