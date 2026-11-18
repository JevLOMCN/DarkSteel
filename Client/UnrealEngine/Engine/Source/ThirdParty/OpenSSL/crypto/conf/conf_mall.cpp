// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// OPENSSL_load_builtin_modules @ 14f6b4d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_load_builtin_modules(void)

{
  ASN1_add_oid_module();
  ASN1_add_stable_module();
  ENGINE_add_conf_module();
  EVP_add_alg_module();
  conf_add_ssl_module();
  return;
}

