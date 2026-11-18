// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// SEED_cbc_encrypt @ 14f743ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SEED_cbc_encrypt(void)

{
  int in_stack_00000030;
  
  if (in_stack_00000030 != 0) {
    CRYPTO_cbc128_encrypt();
    return;
  }
  CRYPTO_cbc128_decrypt();
  return;
}

