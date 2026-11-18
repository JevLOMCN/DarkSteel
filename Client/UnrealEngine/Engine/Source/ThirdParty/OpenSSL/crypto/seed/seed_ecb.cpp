// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// SEED_ecb_encrypt @ 14f743e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SEED_ecb_encrypt(void)

{
  int in_R9D;
  
  if (in_R9D != 0) {
    SEED_encrypt();
    return;
  }
  SEED_decrypt();
  return;
}

