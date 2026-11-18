// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// CRYPTO_secure_allocated @ 14f6c75c0

undefined8 CRYPTO_secure_allocated(void)

{
  return 0;
}

// CRYPTO_secure_clear_free @ 14f6c75d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_clear_free
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    OPENSSL_cleanse();
    CRYPTO_free(param_1,param_3,param_4);
  }
  return;
}

// CRYPTO_secure_free @ 14f6c7620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_free(void)

{
  CRYPTO_free();
  return;
}

// CRYPTO_secure_malloc @ 14f6c7640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_malloc(void)

{
  CRYPTO_malloc();
  return;
}

// CRYPTO_secure_malloc_done @ 14f6c7660

undefined8 CRYPTO_secure_malloc_done(void)

{
  return 0;
}

// CRYPTO_secure_zalloc @ 14f6c76a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_secure_zalloc(void)

{
  CRYPTO_zalloc();
  return;
}

