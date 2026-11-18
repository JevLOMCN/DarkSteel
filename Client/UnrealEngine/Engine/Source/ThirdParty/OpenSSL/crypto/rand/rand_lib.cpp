// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 30

// RAND_add @ 14f6bb7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_add(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = RAND_get_rand_method();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 0x18) != (code *)0x0)) {
    (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3);
  }
  return;
}

// RAND_bytes @ 14f6bb830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_bytes(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6bb840;
  lVar1 = RAND_get_rand_method();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bb86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 8))(param_1,param_2);
    return uVar2;
  }
  ERR_put_error(0x24,100,0x65,"crypto\\rand\\rand_lib.c",0x3b2,uVar2);
  return 0xffffffff;
}

// RAND_get_rand_method @ 14f6bb8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined **
RAND_get_rand_method(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2a08,FUN_14f6bbe70,param_3,param_4,0x14f6bb8ba);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = DAT_1553e2a10;
  }
  if (iVar4 != 0) {
    CRYPTO_THREAD_write_lock(DAT_1553e2a28);
    lVar2 = DAT_1553e2a18;
    ppuVar3 = DAT_1553e2a30;
    if ((DAT_1553e2a30 == (undefined **)0x0) &&
       ((lVar2 = ENGINE_get_default_RAND(), lVar2 == 0 ||
        (ppuVar3 = (undefined **)ENGINE_get_RAND(lVar2), ppuVar3 == (undefined **)0x0)))) {
      ENGINE_finish(lVar2);
      DAT_1553e2a30 = &rand_meth;
      lVar2 = DAT_1553e2a18;
      ppuVar3 = DAT_1553e2a30;
    }
    DAT_1553e2a30 = ppuVar3;
    DAT_1553e2a18 = lVar2;
    ppuVar3 = DAT_1553e2a30;
    CRYPTO_THREAD_unlock(DAT_1553e2a28);
    return ppuVar3;
  }
  return (undefined **)0x0;
}

// RAND_keep_random_devices_open @ 14f6bb970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_keep_random_devices_open(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2a08);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e2a10;
  }
  if (iVar2 != 0) {
    return;
  }
  return;
}

// RAND_poll @ 14f6bb9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 RAND_poll(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  double dVar6;
  
  lVar3 = RAND_get_rand_method();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = RAND_OpenSSL();
  if (lVar3 == lVar4) {
    lVar3 = RAND_DRBG_get0_master();
    if (lVar3 == 0) {
      return 0;
    }
    rand_drbg_lock(lVar3);
    uVar1 = rand_drbg_restart(lVar3,0,0,0);
    rand_drbg_unlock(lVar3);
    return uVar1;
  }
  puVar5 = (undefined8 *)rand_pool_new(0x100,1,0x20,0x3000);
  uVar1 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = rand_pool_acquire_entropy(puVar5);
    uVar1 = 0;
    if ((lVar4 != 0) && (uVar1 = 0, *(code **)(lVar3 + 0x18) != (code *)0x0)) {
      dVar6 = (double)(longlong)puVar5[6];
      if ((longlong)puVar5[6] < 0) {
        dVar6 = dVar6 + __real_43f0000000000000;
      }
      iVar2 = (**(code **)(lVar3 + 0x18))
                        (*puVar5,*(undefined4 *)(puVar5 + 1),dVar6 * __real_3fc0000000000000);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = 1;
      }
    }
    rand_pool_free(puVar5);
  }
  return uVar1;
}

// RAND_priv_bytes @ 14f6bbae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_priv_bytes(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = RAND_get_rand_method();
  if (lVar1 != 0) {
    lVar2 = RAND_OpenSSL();
    if (lVar1 != lVar2) {
      RAND_bytes(param_1,param_2);
      return;
    }
  }
  lVar1 = RAND_DRBG_get0_private();
  if (lVar1 != 0) {
    RAND_DRBG_bytes(lVar1,param_1,(longlong)param_2);
    return;
  }
  return;
}

// RAND_pseudo_bytes @ 14f6bbb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_pseudo_bytes(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6bbb80;
  lVar1 = RAND_get_rand_method();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bbbaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x20))(param_1,param_2);
    return uVar2;
  }
  ERR_put_error(0x24,0x7e,0x65,"crypto\\rand\\rand_lib.c",0x3bd,uVar2);
  return 0xffffffff;
}

// RAND_seed @ 14f6bbbf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_seed(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)RAND_get_rand_method();
  if ((puVar1 != (undefined8 *)0x0) && ((code *)*puVar1 != (code *)0x0)) {
    (*(code *)*puVar1)(param_1,param_2);
  }
  return;
}

// RAND_set_rand_engine @ 14f6bbc40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_set_rand_engine(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2a08,FUN_14f6bbe70);
  uVar3 = uVar2;
  if (iVar1 != 0) {
    uVar3 = (ulonglong)DAT_1553e2a10;
  }
  if ((int)uVar3 != 0) {
    if (param_1 == 0) {
LAB_14f6bbcb0:
      CRYPTO_THREAD_write_lock(DAT_1553e2a20);
      RAND_set_rand_method(uVar2);
      DAT_1553e2a18 = param_1;
      CRYPTO_THREAD_unlock(DAT_1553e2a20);
      return 1;
    }
    iVar1 = ENGINE_init(param_1);
    if (iVar1 != 0) {
      uVar2 = ENGINE_get_RAND(param_1);
      if (uVar2 != 0) goto LAB_14f6bbcb0;
      ENGINE_finish(param_1);
    }
  }
  return 0;
}

// RAND_set_rand_method @ 14f6bbcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_set_rand_method(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2a08);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_1553e2a10;
  }
  if (iVar2 == 0) {
    return 0;
  }
  CRYPTO_THREAD_write_lock(DAT_1553e2a28);
  ENGINE_finish(DAT_1553e2a18);
  DAT_1553e2a18 = 0;
  DAT_1553e2a30 = param_1;
  CRYPTO_THREAD_unlock(DAT_1553e2a28);
  return 1;
}

// RAND_status @ 14f6bbd80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RAND_status(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = RAND_get_rand_method();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bbda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x28))();
    return uVar2;
  }
  return 0;
}

// FUN_14f6bbdc0 @ 14f6bbdc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6bbdc0(void)

{
  int iVar1;
  
  DAT_1553e2a20 = CRYPTO_THREAD_lock_new();
  if (DAT_1553e2a20 != 0) {
    DAT_1553e2a28 = CRYPTO_THREAD_lock_new();
    if (DAT_1553e2a28 != 0) {
      DAT_1553e2a38 = CRYPTO_THREAD_lock_new();
      if (DAT_1553e2a38 != 0) {
        iVar1 = rand_pool_init();
        if (iVar1 != 0) {
          DAT_1553e2a0c = 1;
          return 1;
        }
        CRYPTO_THREAD_lock_free(DAT_1553e2a38);
        DAT_1553e2a38 = 0;
      }
      CRYPTO_THREAD_lock_free(DAT_1553e2a28);
      DAT_1553e2a28 = 0;
    }
    CRYPTO_THREAD_lock_free(DAT_1553e2a20);
    DAT_1553e2a20 = 0;
  }
  return 0;
}

// FUN_14f6bbe70 @ 14f6bbe70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6bbe70(void)

{
  DAT_1553e2a10 = FUN_14f6bbdc0();
  return;
}

// rand_cleanup_int @ 14f6bbea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_cleanup_int(void)

{
  if (DAT_1553e2a0c != 0) {
    if ((DAT_1553e2a30 != 0) && (*(code **)(DAT_1553e2a30 + 0x10) != (code *)0x0)) {
      (**(code **)(DAT_1553e2a30 + 0x10))();
    }
    RAND_set_rand_method(0);
    rand_pool_cleanup();
    CRYPTO_THREAD_lock_free(DAT_1553e2a20);
    DAT_1553e2a20 = 0;
    CRYPTO_THREAD_lock_free(DAT_1553e2a28);
    DAT_1553e2a28 = 0;
    CRYPTO_THREAD_lock_free(DAT_1553e2a38);
    DAT_1553e2a38 = 0;
    DAT_1553e2a0c = 0;
  }
  return;
}

// rand_drbg_cleanup_additional_data @ 14f6bbf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_drbg_cleanup_additional_data(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  OPENSSL_cleanse(param_2,param_1[1]);
  param_1[1] = 0;
  return;
}

// rand_drbg_cleanup_entropy @ 14f6bbf70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_drbg_cleanup_entropy(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    CRYPTO_secure_clear_free();
    return;
  }
  CRYPTO_clear_free(param_2,param_3,"crypto\\rand\\rand_lib.c",0xe1);
  return;
}

// rand_drbg_cleanup_nonce @ 14f6bbfd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_drbg_cleanup_nonce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_clear_free(param_2,param_3,"crypto\\rand\\rand_lib.c",0x114);
  return;
}

// rand_drbg_get_additional_data @ 14f6bc010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_drbg_get_additional_data(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = rand_pool_add_additional_data();
  if (iVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = 0;
    param_1[6] = 0;
    *param_2 = uVar1;
    return uVar2;
  }
  return 0;
}

// rand_drbg_get_entropy @ 14f6bc070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rand_drbg_get_entropy
          (longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4,undefined8 param_5,
          int param_6)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong local_res8;
  
  uVar7 = 0;
  local_res8 = param_1;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 8) + 0x30) < *(int *)(param_1 + 0x30))) {
    ERR_put_error(0x24,0x78,0x83,"crypto\\rand\\rand_lib.c",0x8f);
    return 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)rand_pool_new(param_3,*(undefined4 *)(param_1 + 0x10),param_4,param_5);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
  }
  else {
    puVar5[7] = (longlong)param_3;
  }
  if (*(longlong *)(local_res8 + 8) == 0) {
    if (param_6 != 0) {
      ERR_put_error(0x24,0x78,0x85,"crypto\\rand\\rand_lib.c",0xc3);
      uVar7 = 0;
      goto LAB_14f6bc246;
    }
    uVar6 = rand_pool_acquire_entropy(puVar5);
  }
  else {
    lVar3 = rand_pool_bytes_needed(puVar5,1);
    lVar4 = rand_pool_add_begin(puVar5,lVar3);
    if (lVar4 == 0) goto LAB_14f6bc246;
    rand_drbg_lock(*(undefined8 *)(local_res8 + 8));
    iVar2 = RAND_DRBG_generate(*(undefined8 *)(local_res8 + 8),lVar4,lVar3,param_6,&local_res8,8);
    lVar4 = 0;
    if ((iVar2 != 0) && (lVar4 = lVar3, *(int *)(local_res8 + 0x88) != 0)) {
      *(undefined4 *)(local_res8 + 0x8c) = *(undefined4 *)(*(longlong *)(local_res8 + 8) + 0x8c);
    }
    rand_drbg_unlock(*(undefined8 *)(local_res8 + 8));
    rand_pool_add_end(puVar5,lVar4,lVar4 * 8);
    uVar6 = puVar5[6];
    if ((uVar6 < (ulonglong)puVar5[7]) || ((ulonglong)puVar5[1] < (ulonglong)puVar5[3]))
    goto LAB_14f6bc246;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar1 = *puVar5;
    uVar7 = puVar5[1];
    *puVar5 = 0;
    puVar5[6] = 0;
    *param_2 = uVar1;
  }
LAB_14f6bc246:
  if (*(longlong *)(local_res8 + 0x20) == 0) {
    rand_pool_free(puVar5);
  }
  return uVar7;
}

// rand_drbg_get_nonce @ 14f6bc280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rand_drbg_get_nonce(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  puVar3 = (undefined8 *)rand_pool_new(0,0,param_4,param_5);
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = rand_pool_add_nonce_data(puVar3);
    uVar4 = 0;
    if (iVar2 != 0) {
      local_18 = param_1;
      CRYPTO_atomic_add(&DAT_1553e2a14,1,&local_10,DAT_1553e2a38);
      iVar2 = rand_pool_add(puVar3,&local_18,0x10);
      if (iVar2 != 0) {
        uVar1 = *puVar3;
        uVar4 = puVar3[1];
        *puVar3 = 0;
        puVar3[6] = 0;
        *param_2 = uVar1;
      }
    }
    rand_pool_free(puVar3);
  }
  return uVar4;
}

// rand_pool_add @ 14f6bc350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_pool_add(longlong *param_1,void *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[1];
  if (param_1[4] - uVar1 < param_3) {
    ERR_put_error(0x24,0x67,0x6a,"crypto\\rand\\rand_lib.c",0x2d8,0x14f6bc36a);
    return 0;
  }
  if (*param_1 == 0) {
    uVar4 = 0x2dd;
LAB_14f6bc3bd:
    ERR_put_error(0x24,0x67,0x44,"crypto\\rand\\rand_lib.c",uVar4,0x14f6bc36a);
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      if ((uVar1 < (ulonglong)param_1[5]) && ((void *)(*param_1 + uVar1) == param_2)) {
        uVar4 = 0x2eb;
        goto LAB_14f6bc3bd;
      }
      iVar2 = FUN_14f6bc800(param_1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
      param_1[1] = param_1[1] + param_3;
      param_1[6] = param_1[6] + param_4;
    }
    uVar3 = 1;
  }
  return uVar3;
}

// rand_pool_add_begin @ 14f6bc440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong rand_pool_add_begin(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if ((ulonglong)(param_1[4] - param_1[1]) < param_2) {
      ERR_put_error(0x24,0x71,0x7d,"crypto\\rand\\rand_lib.c",0x311,0x14f6bc44c);
    }
    else {
      if (*param_1 == 0) {
        ERR_put_error(0x24,0x71,0x44,"crypto\\rand\\rand_lib.c",0x316,0x14f6bc44c);
        return 0;
      }
      iVar1 = FUN_14f6bc800();
      if (iVar1 != 0) {
        return param_1[1] + *param_1;
      }
    }
  }
  return 0;
}

// rand_pool_add_end @ 14f6bc4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rand_pool_add_end(longlong param_1,ulonglong param_2,longlong param_3)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 8)) < param_2) {
    ERR_put_error(0x24,0x72,0x7d,"crypto\\rand\\rand_lib.c",0x335);
    return 0;
  }
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + param_3;
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_2;
  }
  return 1;
}

// rand_pool_attach @ 14f6bc550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * rand_pool_attach(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6bc565;
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto\\rand\\rand_lib.c",0x1e7);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x24,0x7c,0x41,"crypto\\rand\\rand_lib.c",0x1ea,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[5] = param_2;
  puVar1[4] = param_2;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 2) = 1;
  puVar1[6] = param_3;
  return puVar1;
}

// rand_pool_bytes_needed @ 14f6bc600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong rand_pool_bytes_needed(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(ulonglong *)(param_1 + 0x30) < *(ulonglong *)(param_1 + 0x38)) {
    lVar2 = *(ulonglong *)(param_1 + 0x38) - *(ulonglong *)(param_1 + 0x30);
  }
  else {
    lVar2 = 0;
  }
  if (param_2 == 0) {
    ERR_put_error(0x24,0x73,0x69,"crypto\\rand\\rand_lib.c",0x29f,0x14f6bc60c);
    return 0;
  }
  uVar3 = *(ulonglong *)(param_1 + 8);
  uVar4 = (ulonglong)param_2 * lVar2 + 7 >> 3;
  if (*(longlong *)(param_1 + 0x20) - uVar3 < uVar4) {
    ERR_put_error(0x24,0x73,0x7d,"crypto\\rand\\rand_lib.c",0x2a7,0x14f6bc60c);
    return 0;
  }
  if ((uVar3 < *(ulonglong *)(param_1 + 0x18)) &&
     (uVar3 = *(ulonglong *)(param_1 + 0x18) - uVar3, uVar4 < uVar3)) {
    uVar4 = uVar3;
  }
  iVar1 = FUN_14f6bc800(param_1,uVar4);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  }
  return uVar4;
}

// rand_pool_entropy_available @ 14f6bc740

ulonglong rand_pool_entropy_available(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(ulonglong *)(param_1 + 0x30) < *(ulonglong *)(param_1 + 0x38)) {
    return 0;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x18)) {
    uVar1 = 0;
  }
  return uVar1;
}

// rand_pool_free @ 14f6bc790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_pool_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 2) == 0) {
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
        CRYPTO_clear_free(*param_1,param_1[5],"crypto\\rand\\rand_lib.c",0x210);
      }
      else {
        CRYPTO_secure_clear_free();
      }
    }
    CRYPTO_free(param_1,"crypto\\rand\\rand_lib.c",0x213);
  }
  return;
}

// FUN_14f6bc800 @ 14f6bc800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6bc800(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6bc815;
  lVar1 = param_1[1];
  if ((ulonglong)(param_1[5] - lVar1) < param_2) {
    uVar2 = param_1[4];
    if ((*(int *)(param_1 + 2) != 0) || (uVar3 = param_1[5], uVar2 - lVar1 < param_2)) {
      ERR_put_error(0x24,0x7d,0x44,"crypto\\rand\\rand_lib.c",0x278,0x14f6bc815);
      return 0;
    }
    do {
      uVar4 = uVar2;
      if (uVar3 < uVar2 >> 1) {
        uVar4 = uVar3 * 2;
      }
      uVar3 = uVar4;
    } while (uVar4 - lVar1 < param_2);
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      _Dst = (void *)CRYPTO_zalloc(uVar4,"crypto\\rand\\rand_lib.c",0x283);
    }
    else {
      _Dst = (void *)CRYPTO_secure_zalloc(uVar4,"crypto\\rand\\rand_lib.c",0x281);
    }
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x24,0x7d,0x41,"crypto\\rand\\rand_lib.c",0x285,uVar5);
      return 0;
    }
    memcpy(_Dst,(void *)*param_1,param_1[1]);
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      CRYPTO_clear_free(*param_1,param_1[5],"crypto\\rand\\rand_lib.c",0x28c);
    }
    else {
      CRYPTO_secure_clear_free();
    }
    *param_1 = _Dst;
    param_1[5] = uVar4;
  }
  return 1;
}

// rand_pool_new @ 14f6bc970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * rand_pool_new(int param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6bc989;
  uVar5 = 0x30;
  if (param_2 != 0) {
    uVar5 = 0x10;
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553e2a08,FUN_14f6bbe70);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = DAT_1553e2a10;
  }
  if (iVar4 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)CRYPTO_zalloc(0x40,"crypto\\rand\\rand_lib.c",0x1bd);
    if (plVar2 == (longlong *)0x0) {
      ERR_put_error(0x24,0x74,0x41,"crypto\\rand\\rand_lib.c",0x1bf,uVar6);
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2[3] = param_3;
      if (0x3000 < param_4) {
        param_4 = 0x3000;
      }
      plVar2[4] = param_4;
      if (param_3 < uVar5) {
        param_3 = uVar5;
      }
      if (param_4 < param_3) {
        param_3 = param_4;
      }
      plVar2[5] = param_3;
      if (param_2 == 0) {
        lVar3 = CRYPTO_zalloc(param_3,"crypto\\rand\\rand_lib.c",0x1cd);
      }
      else {
        lVar3 = CRYPTO_secure_zalloc(param_3,"crypto\\rand\\rand_lib.c",0x1cb);
      }
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(0x24,0x74,0x41,"crypto\\rand\\rand_lib.c",0x1d0,uVar6);
        CRYPTO_free(plVar2,"crypto\\rand\\rand_lib.c",0x1da);
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2[7] = (longlong)param_1;
        *(int *)((longlong)plVar2 + 0x14) = param_2;
      }
    }
  }
  return plVar2;
}

// rand_pool_reattach @ 14f6bcae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_pool_reattach(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  OPENSSL_cleanse(param_2,param_1[1]);
  param_1[1] = 0;
  return;
}

