// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 19

// OSSL_STORE_LOADER_free @ 14f7662e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OSSL_STORE_LOADER_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\store\\store_register.c",0x7d);
  return;
}

// OSSL_STORE_LOADER_new @ 14f766330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * OSSL_STORE_LOADER_new(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f766340;
  if (param_2 == 0) {
    ERR_put_error(0x2c,0x71,0x6a,"crypto\\store\\store_register.c",0x2b,0x14f766340);
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)CRYPTO_zalloc(0x50,"crypto\\store\\store_register.c");
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0x2c,0x71,0x41,"crypto\\store\\store_register.c",0x30,uVar2);
    return (longlong *)0x0;
  }
  *plVar1 = param_2;
  plVar1[1] = param_1;
  return plVar1;
}

// OSSL_STORE_do_all_loaders @ 14f766460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
OSSL_STORE_do_all_loaders
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_LH_doall_arg(DAT_1553e3008,param_1,param_2,param_4,0x14f76646a);
  return 1;
}

// OSSL_STORE_register_loader @ 14f766490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OSSL_STORE_register_loader(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = ossl_store_init_once();
  if (iVar1 == 0) {
    return;
  }
  ossl_store_register_loader_int(param_1);
  return;
}

// OSSL_STORE_unregister_loader @ 14f7664d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OSSL_STORE_unregister_loader(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_store_init_once();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_store_unregister_loader_int(param_1);
  return uVar2;
}

// FUN_14f766510 @ 14f766510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f766510(void)

{
  DAT_1553e3010 = CRYPTO_THREAD_lock_new();
  return DAT_1553e3010 != 0;
}

// FUN_14f766540 @ 14f766540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f766540(void)

{
  DAT_1553e3010 = CRYPTO_THREAD_lock_new();
  DAT_1553e3004 = (uint)(DAT_1553e3010 != 0);
  return;
}

// FUN_14f766580 @ 14f766580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f766580(void)

{
  OPENSSL_LH_delete();
  return;
}

// FUN_14f7665a0 @ 14f7665a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7665a0(void)

{
  OPENSSL_LH_doall_arg();
  return;
}

// FUN_14f7665c0 @ 14f7665c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7665c0(void)

{
  OPENSSL_LH_error();
  return;
}

// FUN_14f7665e0 @ 14f7665e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7665e0(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f766600 @ 14f766600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f766600(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f766620 @ 14f766620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f766620(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f766640 @ 14f766640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f766640(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// ossl_store_destroy_loaders_int @ 14f766660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_store_destroy_loaders_int(void)

{
  OPENSSL_LH_free(DAT_1553e3008);
  DAT_1553e3008 = 0;
  CRYPTO_THREAD_lock_free(DAT_1553e3010);
  DAT_1553e3010 = 0;
  return;
}

// ossl_store_get0_loader_int @ 14f7666b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ossl_store_get0_loader_int(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_48 = 0;
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_58[0] = param_1;
  iVar1 = ossl_store_init_once();
  if (iVar1 != 0) {
    iVar2 = CRYPTO_THREAD_run_once(&DAT_1553e3000,FUN_14f766540);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = DAT_1553e3004;
    }
    if (iVar1 != 0) {
      CRYPTO_THREAD_write_lock(DAT_1553e3010);
      lVar3 = OPENSSL_LH_retrieve(DAT_1553e3008,local_58);
      if (lVar3 == 0) {
        ERR_put_error(0x2c,100,0x69,"crypto\\store\\store_register.c",0xe7);
        ERR_add_error_data(2,"scheme=",param_1);
      }
      CRYPTO_THREAD_unlock(DAT_1553e3010);
      return lVar3;
    }
    ERR_put_error(0x2c,100,0x41,"crypto\\store\\store_register.c",0xde);
  }
  return 0;
}

// ossl_store_register_loader_int @ 14f7667c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_store_register_loader_int(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x14f7667d5;
  pcVar6 = (char *)*param_1;
  uVar7 = 0;
  iVar2 = ossl_ctype_check((int)*pcVar6,3);
  if (iVar2 == 0) {
LAB_14f7668a5:
    if (*pcVar6 != '\0') {
      ERR_put_error(0x2c,0x75,0x6a,"crypto\\store\\store_register.c",0xa5,uVar10);
      ERR_add_error_data(2,"scheme=",*param_1);
      return 0;
    }
  }
  else {
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      iVar2 = ossl_ctype_check((int)cVar1,3);
      if (((iVar2 == 0) && (iVar2 = ossl_ctype_check((int)*pcVar6,4), iVar2 == 0)) &&
         (pcVar4 = strchr("+-.",(int)*pcVar6), pcVar4 == (char *)0x0)) goto LAB_14f7668a5;
      pcVar4 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar4;
    }
  }
  if (((param_1[2] == 0) || (param_1[6] == 0)) ||
     ((param_1[7] == 0 || ((param_1[8] == 0 || (param_1[9] == 0)))))) {
    uVar9 = 0xae;
    uVar8 = 0x74;
  }
  else {
    iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e3000,FUN_14f766540);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = DAT_1553e3004;
    }
    if (iVar2 != 0) {
      CRYPTO_THREAD_write_lock(DAT_1553e3010);
      if (((DAT_1553e3008 != 0) ||
          (DAT_1553e3008 = OPENSSL_LH_new(FUN_14f766ae0,&LAB_14f766ab0), DAT_1553e3008 != 0)) &&
         ((lVar5 = OPENSSL_LH_insert(DAT_1553e3008,param_1), lVar5 != 0 ||
          (iVar2 = OPENSSL_LH_error(DAT_1553e3008), iVar2 == 0)))) {
        uVar7 = 1;
      }
      CRYPTO_THREAD_unlock(DAT_1553e3010);
      return uVar7;
    }
    uVar9 = 0xb4;
    uVar8 = 0x41;
  }
  ERR_put_error(0x2c,0x75,uVar8,"crypto\\store\\store_register.c",uVar9,uVar10);
  return 0;
}

// ossl_store_unregister_loader_int @ 14f7669b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ossl_store_unregister_loader_int(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_48 = 0;
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_58[0] = param_1;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e3000,FUN_14f766540);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_1553e3004;
  }
  if (iVar3 == 0) {
    ERR_put_error(0x2c,0x74,0x41,"crypto\\store\\store_register.c",0xfd);
    return 0;
  }
  CRYPTO_THREAD_write_lock(DAT_1553e3010);
  lVar2 = OPENSSL_LH_delete(DAT_1553e3008,local_58);
  if (lVar2 == 0) {
    ERR_put_error(0x2c,0x74,0x69,"crypto\\store\\store_register.c",0x106);
    ERR_add_error_data(2,"scheme=",param_1);
  }
  CRYPTO_THREAD_unlock(DAT_1553e3010);
  return lVar2;
}

// FUN_14f766ae0 @ 14f766ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f766ae0(undefined8 *param_1)

{
  OPENSSL_LH_strhash(*param_1);
  return;
}

