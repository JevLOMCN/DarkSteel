// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 2

// WriteTabs @ 141e01e60

void __cdecl TPrettyJsonPrintPolicy<char8_t>::WriteTabs(FArchive *param_1,int param_2)

{
  ulonglong uVar1;
  undefined1 local_res10 [24];
  
  if (0 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

// WriteTabs @ 141e01ec0

void __cdecl TPrettyJsonPrintPolicy<wchar_t>::WriteTabs(FArchive *param_1,int param_2)

{
  ulonglong uVar1;
  undefined2 local_res10 [4];
  
  if (0 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    do {
      local_res10[0] = 9;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

