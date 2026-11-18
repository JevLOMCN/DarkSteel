// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// FUN_14f6e8260 @ 14f6e8260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e8260(undefined8 param_1,void *param_2,void *param_3,size_t param_4)

{
  if (param_3 != param_2) {
    memcpy(param_2,param_3,param_4);
  }
  return 1;
}

// EVP_enc_null @ 14f6e82a0

undefined * EVP_enc_null(void)

{
  return &DAT_1534aa5c0;
}

