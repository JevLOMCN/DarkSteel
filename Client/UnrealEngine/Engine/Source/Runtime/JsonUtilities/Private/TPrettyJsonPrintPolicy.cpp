// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 1

// WriteSpace @ 144632570

void __cdecl TPrettyJsonPrintPolicy<wchar_t>::WriteSpace(FArchive *param_1)

{
  undefined2 local_res8 [16];
  
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
  return;
}

