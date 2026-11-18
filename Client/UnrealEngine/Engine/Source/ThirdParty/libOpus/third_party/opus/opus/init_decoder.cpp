// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_init_decoder @ 14f88441c

undefined8 silk_init_decoder(undefined4 *param_1)

{
  undefined4 uVar1;
  
  memset(param_1,0,0x10c0);
  param_1[0x252] = 1;
  *param_1 = 0x10000;
  uVar1 = opus_select_arch();
  param_1[0x418] = uVar1;
  silk_CNG_Reset(param_1);
  silk_PLC_Reset(param_1);
  return 0;
}

