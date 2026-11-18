// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 33

// EVP_PKEY_CTX_ctrl @ 14f6ec310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_CTX_ctrl(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     (*(code **)(piVar1 + 0x30) == (code *)0x0)) {
    ERR_put_error(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x174);
    return -2;
  }
  if ((param_2 != -1) && (*piVar1 != param_2)) {
    return -1;
  }
  if (*(longlong *)(piVar1 + 0x3e) == 0) {
    if (*(uint *)(param_1 + 4) == 0) {
      ERR_put_error(6,0x89,0x95,"crypto\\evp\\pmeth_lib.c",0x17f);
      return -1;
    }
    if ((param_3 != 0xffffffff) && ((param_3 & *(uint *)(param_1 + 4)) == 0)) {
      ERR_put_error(6,0x89,0x94,"crypto\\evp\\pmeth_lib.c",0x184);
      return -1;
    }
  }
  iVar2 = (**(code **)(piVar1 + 0x30))(param_1,param_4,param_5,param_6);
  if (iVar2 == -2) {
    ERR_put_error(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x18c);
  }
  return iVar2;
}

// EVP_PKEY_CTX_ctrl_str @ 14f6ec440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_CTX_ctrl_str(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (*(char *)(param_2 + lVar2) != "digest"[lVar2]) {
                    /* WARNING: Could not recover jumptable at 0x00014f6ec4b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
        return uVar1;
      }
      lVar2 = lVar3;
    } while (lVar3 != 7);
    uVar1 = EVP_PKEY_CTX_md(param_1,0xf8,1,param_3);
    return uVar1;
  }
  ERR_put_error(6,0x96,0x93,"crypto\\evp\\pmeth_lib.c",0x19b);
  return 0xfffffffe;
}

// EVP_PKEY_CTX_ctrl_uint64 @ 14f6ec4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_CTX_ctrl_uint64(void)

{
  EVP_PKEY_CTX_ctrl();
  return;
}

// EVP_PKEY_CTX_dup @ 14f6ec520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * EVP_PKEY_CTX_dup(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ec52c;
  if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    return (longlong *)0x0;
  }
  if ((param_1[1] != 0) && (iVar1 = ENGINE_init(), iVar1 == 0)) {
    ERR_put_error(6,0x9c,0x26,"crypto\\evp\\pmeth_lib.c",0x105,uVar3);
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)CRYPTO_malloc(0x50,"crypto\\evp\\pmeth_lib.c",0x109);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(6,0x9c,0x41,"crypto\\evp\\pmeth_lib.c",0x10b,uVar3);
    return (longlong *)0x0;
  }
  *plVar2 = *param_1;
  plVar2[1] = param_1[1];
  if (param_1[2] != 0) {
    EVP_PKEY_up_ref();
  }
  plVar2[2] = param_1[2];
  if (param_1[3] != 0) {
    EVP_PKEY_up_ref();
  }
  plVar2[3] = param_1[3];
  plVar2[5] = 0;
  plVar2[6] = 0;
  *(int *)(plVar2 + 4) = (int)param_1[4];
  iVar1 = (**(code **)(*param_1 + 0x10))(plVar2,param_1);
  if (iVar1 < 1) {
    *plVar2 = 0;
    EVP_PKEY_CTX_free(plVar2);
    return (longlong *)0x0;
  }
  return plVar2;
}

// EVP_PKEY_CTX_free @ 14f6ec660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_CTX_free(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    EVP_PKEY_free(param_1[2]);
    EVP_PKEY_free(param_1[3]);
    ENGINE_finish(param_1[1]);
    CRYPTO_free(param_1,"crypto\\evp\\pmeth_lib.c",0x16b);
  }
  return;
}

// EVP_PKEY_CTX_get0_peerkey @ 14f6ec6d0

undefined8 EVP_PKEY_CTX_get0_peerkey(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// EVP_PKEY_CTX_get0_pkey @ 14f6ec6e0

undefined8 EVP_PKEY_CTX_get0_pkey(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// EVP_PKEY_CTX_get_data @ 14f6ec700

undefined8 EVP_PKEY_CTX_get_data(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// EVP_PKEY_CTX_hex2ctrl @ 14f6ec720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_PKEY_CTX_hex2ctrl(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_res20 [2];
  
  lVar2 = OPENSSL_hexstr2buf(param_3,local_res20);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,local_res20[0],lVar2);
  CRYPTO_free(lVar2,"crypto\\evp\\pmeth_lib.c",0x1bb);
  return uVar1;
}

// EVP_PKEY_CTX_md @ 14f6ec7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_CTX_md(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6ec7c5;
  if (param_4 != 0) {
    lVar1 = EVP_get_digestbyname(param_4);
    if (lVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,param_2,param_3,0,lVar1);
      return uVar2;
    }
  }
  ERR_put_error(6,0xa8,0x98,"crypto\\evp\\pmeth_lib.c",0x1c5,uVar2);
  return 0;
}

// EVP_PKEY_CTX_new @ 14f6ec850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_CTX_new(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6ed1f0(param_1,param_2,0xffffffff);
  return;
}

// EVP_PKEY_CTX_new_id @ 14f6ec870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_CTX_new_id(undefined4 param_1,undefined8 param_2)

{
  FUN_14f6ed1f0(0,param_2,param_1);
  return;
}

// EVP_PKEY_CTX_set0_keygen_info @ 14f6ec8a0

void EVP_PKEY_CTX_set0_keygen_info(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  return;
}

// EVP_PKEY_CTX_set_data @ 14f6ec8c0

void EVP_PKEY_CTX_set_data(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}

// EVP_PKEY_CTX_str2ctrl @ 14f6ec8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_CTX_str2ctrl(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_3 + uVar2) != '\0');
  if (0x7fffffff < uVar2) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6ec906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  return uVar1;
}

// EVP_PKEY_meth_add0 @ 14f6ec920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_meth_add0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ec92c;
  if (DAT_1553e2b28 == 0) {
    DAT_1553e2b28 = OPENSSL_sk_new(&LAB_14f6ed380);
    if (DAT_1553e2b28 == 0) {
      uVar2 = 0x130;
      goto LAB_14f6ec95e;
    }
  }
  iVar1 = OPENSSL_sk_push(DAT_1553e2b28,param_1);
  if (iVar1 != 0) {
    OPENSSL_sk_sort(DAT_1553e2b28);
    return 1;
  }
  uVar2 = 0x135;
LAB_14f6ec95e:
  ERR_put_error(6,0xc2,0x41,"crypto\\evp\\pmeth_lib.c",uVar2,uVar3);
  return 0;
}

// EVP_PKEY_meth_find @ 14f6ecae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_meth_find(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *local_res10 [3];
  undefined4 local_108 [64];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6ecaea;
  local_res10[0] = local_108;
  local_108[0] = param_1;
  if (DAT_1553e2b28 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_1553e2b28,local_108);
    if (-1 < iVar1) {
      lVar2 = OPENSSL_sk_value(DAT_1553e2b28,iVar1);
      return lVar2;
    }
  }
  plVar3 = (longlong *)OBJ_bsearch_(local_res10,&PTR_rsa_pkey_meth_154df8ce0,0x12,8,&LAB_14f6ed3a0);
  if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
    lVar2 = 0;
  }
  return lVar2;
}

// EVP_PKEY_meth_free @ 14f6ecb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_meth_free(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    CRYPTO_free(param_1,"crypto\\evp\\pmeth_lib.c",0xf0,param_4,0x14f6ecb8f);
  }
  return;
}

// EVP_PKEY_meth_get0 @ 14f6ecbc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * EVP_PKEY_meth_get0(ulonglong param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 < 0x12) {
    return (&PTR_rsa_pkey_meth_154df8ce0)[param_1];
  }
  if (DAT_1553e2b28 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (param_1 - 0x12 < (ulonglong)(longlong)iVar1) {
      puVar2 = (undefined *)OPENSSL_sk_value(DAT_1553e2b28,param_1 - 0x12 & 0xffffffff);
      return puVar2;
    }
  }
  return (undefined *)0x0;
}

// EVP_PKEY_meth_get_count @ 14f6ecc90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_meth_get_count(void)

{
  int iVar1;
  
  if (DAT_1553e2b28 != 0) {
    iVar1 = OPENSSL_sk_num();
    return (longlong)iVar1 + 0x12;
  }
  return 0x12;
}

// EVP_PKEY_meth_new @ 14f6ecf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * EVP_PKEY_meth_new(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6ecf40;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x100,"crypto\\evp\\pmeth_lib.c");
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(6,0xc3,0x41,"crypto\\evp\\pmeth_lib.c",0xb0,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2 | 1;
  return puVar1;
}

// EVP_PKEY_meth_remove @ 14f6ecfb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_meth_remove
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = OPENSSL_sk_delete_ptr(DAT_1553e2b28,param_1,param_3,param_4,0x14f6ecfba);
  return lVar1 != 0;
}

// FUN_14f6ed180 @ 14f6ed180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed180(void)

{
  OBJ_bsearch_();
  return;
}

// evp_app_cleanup_int @ 14f6ed1b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_app_cleanup_int(void)

{
  if (DAT_1553e2b28 != 0) {
    OPENSSL_sk_pop_free(DAT_1553e2b28,EVP_PKEY_meth_free);
    return;
  }
  return;
}

// FUN_14f6ed1f0 @ 14f6ed1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f6ed1f0(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 == -1) {
    if (param_1 == (int *)0x0) {
      return (longlong *)0x0;
    }
    param_3 = *param_1;
  }
  if ((param_2 == 0) &&
     ((param_1 == (int *)0x0 ||
      ((param_2 = *(longlong *)(param_1 + 8), param_2 == 0 &&
       (param_2 = *(longlong *)(param_1 + 6), param_2 == 0)))))) {
    param_2 = ENGINE_get_pkey_meth_engine(param_3);
  }
  else {
    iVar1 = ENGINE_init(param_2);
    if (iVar1 == 0) {
      ERR_put_error(6,0x9d,0x26,"crypto\\evp\\pmeth_lib.c",0x77);
      return (longlong *)0x0;
    }
  }
  if (param_2 == 0) {
    lVar2 = EVP_PKEY_meth_find(param_3);
  }
  else {
    lVar2 = ENGINE_get_pkey_meth(param_2,param_3);
  }
  if (lVar2 == 0) {
    ENGINE_finish(param_2);
    ERR_put_error(6,0x9d,0x9c,"crypto\\evp\\pmeth_lib.c",0x8c);
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)CRYPTO_zalloc(0x50,"crypto\\evp\\pmeth_lib.c");
    if (plVar3 == (longlong *)0x0) {
      ENGINE_finish(param_2);
      ERR_put_error(6,0x9d,0x41,"crypto\\evp\\pmeth_lib.c",0x95);
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3[1] = param_2;
      *plVar3 = lVar2;
      *(undefined4 *)(plVar3 + 4) = 0;
      plVar3[2] = (longlong)param_1;
      if (param_1 != (int *)0x0) {
        EVP_PKEY_up_ref(param_1);
      }
      if ((*(code **)(lVar2 + 8) != (code *)0x0) &&
         (iVar1 = (**(code **)(lVar2 + 8))(plVar3), iVar1 < 1)) {
        *plVar3 = 0;
        EVP_PKEY_CTX_free(plVar3);
        plVar3 = (longlong *)0x0;
      }
    }
  }
  return plVar3;
}

// FUN_14f6ed3c0 @ 14f6ed3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed3c0(void)

{
  OPENSSL_sk_delete_ptr();
  return;
}

// FUN_14f6ed3e0 @ 14f6ed3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed3e0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6ed400 @ 14f6ed400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed400(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f6ed420 @ 14f6ed420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed420(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6ed440 @ 14f6ed440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed440(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6ed460 @ 14f6ed460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed460(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6ed480 @ 14f6ed480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed480(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f6ed4a0 @ 14f6ed4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ed4a0(void)

{
  OPENSSL_sk_value();
  return;
}

