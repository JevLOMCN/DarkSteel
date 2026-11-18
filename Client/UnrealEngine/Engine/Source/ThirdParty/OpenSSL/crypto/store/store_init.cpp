// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f7027b0 @ 14f7027b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7027b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f7027ba);
  if (iVar1 != 0) {
    iVar1 = ossl_store_file_loader_init();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f7027f0 @ 14f7027f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7027f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f7027fa);
  if ((iVar1 != 0) && (iVar1 = ossl_store_file_loader_init(), iVar1 != 0)) {
    DAT_1553e2d08 = 1;
    return;
  }
  DAT_1553e2d08 = 0;
  return;
}

// ossl_store_cleanup_int @ 14f702840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_store_cleanup_int(void)

{
  ossl_store_destroy_loaders_int();
  return;
}

// ossl_store_init_once @ 14f702860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_store_init_once(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2d04,FUN_14f7027f0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e2d08;
  }
  if (iVar2 == 0) {
    ERR_put_error(0x2c,0x70,0x41,"crypto\\store\\store_init.c",0x18);
    return 0;
  }
  return 1;
}

