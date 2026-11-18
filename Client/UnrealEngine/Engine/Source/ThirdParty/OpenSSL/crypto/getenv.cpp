// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// ossl_safe_getenv @ 14f71ec40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * ossl_safe_getenv(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = OPENSSL_issetugid();
  if (iVar1 != 0) {
    return (char *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f71ec6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = getenv(param_1);
  return pcVar2;
}

