// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 28

// ENGINE_free @ 14f701de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x9c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      engine_pkey_meths_free();
      engine_pkey_asn1_meths_free(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      engine_remove_dynamic_id(param_1,1);
      CRYPTO_free_ex_data(10,param_1,param_1 + 0xa8);
      CRYPTO_free(param_1,"crypto\\engine\\eng_lib.c",0x62);
    }
  }
  return 1;
}

// ENGINE_get_ex_data @ 14f701ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xa8);
  return;
}

// ENGINE_get_id @ 14f701ef0

undefined8 ENGINE_get_id(undefined8 *param_1)

{
  return *param_1;
}

// ENGINE_get_static_state @ 14f701f20

undefined * ENGINE_get_static_state(void)

{
  return &DAT_1553e2cf8;
}

// ENGINE_new @ 14f701f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_new(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f701f3c;
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = do_engine_lock_init_ossl_ret_;
  }
  if (iVar2 != 0) {
    lVar3 = CRYPTO_zalloc(0xd8,"crypto\\engine\\eng_lib.c",0x22);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x9c) = 1;
      iVar2 = CRYPTO_new_ex_data(10,lVar3,lVar3 + 0xa8);
      if (iVar2 == 0) {
        CRYPTO_free(lVar3,"crypto\\engine\\eng_lib.c",0x29);
        return 0;
      }
      return lVar3;
    }
  }
  ERR_put_error(0x26,0x7a,0x41,"crypto\\engine\\eng_lib.c",0x23,uVar4);
  return 0;
}

// ENGINE_set_cmd_defns @ 14f702000

undefined8 ENGINE_set_cmd_defns(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return 1;
}

// ENGINE_set_ctrl_function @ 14f702020

undefined8 ENGINE_set_ctrl_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return 1;
}

// ENGINE_set_destroy_function @ 14f702030

undefined8 ENGINE_set_destroy_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}

// ENGINE_set_ex_data @ 14f702040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xa8);
  return;
}

// ENGINE_set_finish_function @ 14f702070

undefined8 ENGINE_set_finish_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return 1;
}

// ENGINE_set_flags @ 14f702080

undefined8 ENGINE_set_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return 1;
}

// ENGINE_set_id @ 14f7020a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_id(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    ERR_put_error(0x26,0x81,0x43,"crypto\\engine\\eng_lib.c",199);
    return 0;
  }
  *param_1 = param_2;
  return 1;
}

// ENGINE_set_init_function @ 14f7020f0

undefined8 ENGINE_set_init_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return 1;
}

// ENGINE_set_name @ 14f702100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_name(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    ERR_put_error(0x26,0x82,0x43,"crypto\\engine\\eng_lib.c",0xd1);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}

// FUN_14f702150 @ 14f702150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f702150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f70215a);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  global_engine_lock = CRYPTO_THREAD_lock_new();
  return (ulonglong)(global_engine_lock != 0);
}

// do_engine_lock_init_ossl_ @ 14f702190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void do_engine_lock_init_ossl_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = OPENSSL_init_crypto(0,0,param_3,param_4,0x14f70219a);
  if (iVar1 == 0) {
    do_engine_lock_init_ossl_ret_ = 0;
    return;
  }
  global_engine_lock = CRYPTO_THREAD_lock_new();
  do_engine_lock_init_ossl_ret_ = (uint)(global_engine_lock != 0);
  return;
}

// engine_cleanup_add_first @ 14f7021e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_cleanup_add_first(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7021ec;
  if (DAT_1553e2cf0 == 0) {
    DAT_1553e2cf0 = OPENSSL_sk_new_null();
    if (DAT_1553e2cf0 == 0) {
      return;
    }
  }
  puVar2 = (undefined8 *)CRYPTO_malloc(8,"crypto\\engine\\eng_lib.c");
  lVar1 = DAT_1553e2cf0;
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0x26,199,0x41,"crypto\\engine\\eng_lib.c",0x83,uVar3);
    return;
  }
  *puVar2 = param_1;
  OPENSSL_sk_insert(lVar1,puVar2,0);
  return;
}

// engine_cleanup_add_last @ 14f702280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_cleanup_add_last(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f70228c;
  if ((DAT_1553e2cf0 != 0) || (DAT_1553e2cf0 = OPENSSL_sk_new_null(), DAT_1553e2cf0 != 0)) {
    puVar3 = (undefined8 *)CRYPTO_malloc(8,"crypto\\engine\\eng_lib.c");
    lVar1 = DAT_1553e2cf0;
    if (puVar3 == (undefined8 *)0x0) {
      ERR_put_error(0x26,199,0x41,"crypto\\engine\\eng_lib.c",0x83,uVar4);
      return;
    }
    *puVar3 = param_1;
    iVar2 = OPENSSL_sk_push(lVar1,puVar3);
    if (iVar2 < 1) {
      CRYPTO_free(puVar3,"crypto\\engine\\eng_lib.c",0x9d);
    }
  }
  return;
}

// FUN_14f702340 @ 14f702340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f702340(undefined8 *param_1)

{
  (*(code *)*param_1)();
  CRYPTO_free(param_1,"crypto\\engine\\eng_lib.c",0xa5);
  return;
}

// engine_cleanup_int @ 14f702380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_cleanup_int(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_1553e2cf0 != 0) {
    OPENSSL_sk_pop_free(DAT_1553e2cf0,FUN_14f702340,param_3,param_4,0x14f70238a);
    DAT_1553e2cf0 = 0;
  }
  CRYPTO_THREAD_lock_free(global_engine_lock);
  global_engine_lock = 0;
  return;
}

// engine_free_util @ 14f7023e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 engine_free_util(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    else {
      LOCK();
      piVar1 = (int *)(param_1 + 0x9c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar2 = iVar2 + -1;
    }
    if (iVar2 < 1) {
      engine_pkey_meths_free();
      engine_pkey_asn1_meths_free(param_1);
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      engine_remove_dynamic_id(param_1,param_2);
      CRYPTO_free_ex_data(10,param_1,param_1 + 0xa8);
      CRYPTO_free(param_1,"crypto\\engine\\eng_lib.c",0x62);
    }
  }
  return 1;
}

// engine_set_all_null @ 14f702490

void engine_set_all_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  return;
}

// FUN_14f7024f0 @ 14f7024f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7024f0(int param_1)

{
  if (DAT_1553e2cf0 != 0) {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  DAT_1553e2cf0 = OPENSSL_sk_new_null();
  return DAT_1553e2cf0 != 0;
}

// FUN_14f702540 @ 14f702540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f702540(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f70254c;
  puVar1 = (undefined8 *)CRYPTO_malloc(8,"crypto\\engine\\eng_lib.c",0x82);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x26,199,0x41,"crypto\\engine\\eng_lib.c",0x83,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  return puVar1;
}

// FUN_14f7025b0 @ 14f7025b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7025b0(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f7025d0 @ 14f7025d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7025d0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7025f0 @ 14f7025f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7025f0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f702610 @ 14f702610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f702610(void)

{
  OPENSSL_sk_push();
  return;
}

