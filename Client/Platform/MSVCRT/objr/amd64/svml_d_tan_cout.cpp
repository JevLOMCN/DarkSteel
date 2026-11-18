// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_dtan_cout_rare @ 150169f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __common_dtan_cout_rare(void)

{
  double dVar1;
  double *in_RCX;
  double *in_RDX;
  undefined8 local_8;
  
  dVar1 = *in_RCX;
  local_8._0_7_ = SUB87(dVar1,0);
  local_8 = CONCAT17(*(undefined1 *)((longlong)in_RCX + 7),(undefined7)local_8) & 0x7fffffffffffffff
  ;
  if (((ulonglong)*in_RCX & 0x7ff0000000000000) != 0x7ff0000000000000) {
    return;
  }
  if (((int)local_8 == 0) && (local_8._4_4_ == 0x7ff00000)) {
    *in_RDX = dVar1 * __vmldTanHATab;
    return;
  }
  *in_RDX = dVar1 * dVar1;
  return;
}

