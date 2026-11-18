// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// FUN_14f748770 @ 14f748770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f748770(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_PKEY_get0();
  CMAC_CTX_free(uVar1);
  return;
}

