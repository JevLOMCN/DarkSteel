// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_scos_cout_rare @ 150168b00

void __cdecl __common_scos_cout_rare(void)

{
  float *in_RCX;
  float *in_RDX;
  undefined4 local_8;
  
  if (((uint)*in_RCX & 0x7f800000) != 0x7f800000) {
    return;
  }
  local_8 = ABS(*in_RCX);
  if (local_8 == INFINITY) {
    *in_RDX = *in_RCX * (float)_vmlsCosHATab;
    return;
  }
  *in_RDX = *in_RCX * *in_RCX;
  return;
}

