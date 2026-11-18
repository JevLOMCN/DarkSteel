// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_control_SNR @ 14f87f7a0

undefined8 silk_control_SNR(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x11e0);
  *(int *)(param_1 + 0x1200) = param_2;
  if (*(int *)(param_1 + 0x11e4) == 2) {
    param_2 = param_2 + (-2000 - ((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4));
  }
  if (iVar2 == 8) {
    puVar3 = &DAT_153514630;
    iVar2 = 0x6a;
  }
  else if (iVar2 == 0xc) {
    puVar3 = &DAT_1535146a0;
    iVar2 = 0x9a;
  }
  else {
    puVar3 = &DAT_153514740;
    iVar2 = 0xbe;
  }
  iVar1 = (param_2 + 200) / 400 + -10;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = (uint)(byte)puVar3[iVar2] * 0x15;
  }
  *(int *)(param_1 + 0x127c) = iVar1;
  return 0;
}

