// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_init_encoder @ 14f880ef8

void silk_init_encoder(void *param_1,undefined4 param_2)

{
  int iVar1;
  
  memset(param_1,0,0x2768);
  *(undefined4 *)((longlong)param_1 + 0x13f4) = param_2;
  iVar1 = silk_lin2log(0x3c0000);
  *(undefined4 *)((longlong)param_1 + 0x1238) = 1;
  iVar1 = (iVar1 + -0x800) * 0x100;
  *(int *)((longlong)param_1 + 8) = iVar1;
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  silk_VAD_Init((longlong)param_1 + 0x24);
  return;
}

