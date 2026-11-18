// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_dcos_cout_rare @ 150168a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __common_dcos_cout_rare(void)

{
  double dVar1;
  double *in_RCX;
  undefined1 in_DL;
  undefined7 in_register_00000011;
  undefined8 local_8;
  
  dVar1 = *in_RCX;
  if (((ulonglong)*in_RCX & 0x7ff0000000000000) != 0x7ff0000000000000) {
    return;
  }
  local_8._0_4_ = SUB84(dVar1,0);
  if (((int)local_8 == 0) &&
     (local_8._0_7_ = SUB87(dVar1,0),
     local_8._4_4_ =
          (uint)(CONCAT17(*(undefined1 *)((longlong)in_RCX + 7),(undefined7)local_8) >> 0x20) &
          0x7fffffff, local_8._4_4_ == 0x7ff00000)) {
    *(double *)CONCAT71(in_register_00000011,in_DL) = dVar1 * __vmldCosHATab;
    return;
  }
  *(double *)CONCAT71(in_register_00000011,in_DL) = dVar1 * dVar1;
  return;
}

