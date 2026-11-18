// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// EVP_PBE_CipherInit @ 14f703780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
EVP_PBE_CipherInit(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar2 = OBJ_obj2nid();
  if (iVar2 == 0) goto LAB_14f70396b;
  uVar6 = 0;
  local_c8 = 0;
  local_c4 = iVar2;
  if (DAT_1553e2ec8 == 0) {
LAB_14f7037fc:
    local_e8 = &LAB_14f703d40;
    lVar4 = OBJ_bsearch_(&local_c8,&DAT_1534b2d10,0x1d);
    if (lVar4 == 0) {
LAB_14f70396b:
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x5f);
      ERR_put_error(6,0x74,0x79,"crypto\\evp\\evp_pbe.c");
      if (param_1 == 0) {
        OPENSSL_strlcpy(local_a8,"NULL",0x50);
      }
      else {
        i2t_ASN1_OBJECT(local_a8,0x50,param_1);
      }
      ERR_add_error_data(2,"TYPE=",local_a8);
      return 0;
    }
  }
  else {
    uVar3 = OPENSSL_sk_find(DAT_1553e2ec8,&local_c8);
    lVar4 = OPENSSL_sk_value(DAT_1553e2ec8,uVar3);
    if (lVar4 == 0) goto LAB_14f7037fc;
  }
  iVar2 = *(int *)(lVar4 + 0xc);
  pcVar1 = *(code **)(lVar4 + 0x10);
  uVar8 = uVar6;
  if ((param_2 != 0) && (uVar8 = param_3 & 0xffffffff, (int)param_3 == -1)) {
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)(param_2 + uVar8) != '\0');
  }
  uVar7 = uVar6;
  if (*(int *)(lVar4 + 8) != -1) {
    uVar5 = OBJ_nid2sn();
    uVar7 = EVP_get_cipherbyname(uVar5);
    if (uVar7 == 0) {
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x72);
      uVar3 = 0xa0;
      goto LAB_14f7038b0;
    }
  }
  if (iVar2 != -1) {
    uVar5 = OBJ_nid2sn(iVar2);
    uVar6 = EVP_get_digestbyname(uVar5);
    if (uVar6 == 0) {
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x7c);
      uVar3 = 0xa1;
      goto LAB_14f7038b0;
    }
  }
  local_d8 = param_6;
  local_e8 = (undefined1 *)uVar7;
  local_e0 = uVar6;
  iVar2 = (*pcVar1)(param_5,param_2,uVar8 & 0xffffffff,param_4);
  if (iVar2 != 0) {
    return 1;
  }
  local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x82);
  uVar3 = 0x78;
LAB_14f7038b0:
  ERR_put_error(6,0x74,uVar3,"crypto\\evp\\evp_pbe.c");
  return 0;
}

// EVP_PBE_alg_add @ 14f7039e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PBE_alg_add(undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f703a00;
  uVar2 = 0xffffffff;
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = EVP_CIPHER_nid(param_2);
  }
  if (param_3 != 0) {
    uVar2 = EVP_MD_type(param_3);
  }
  EVP_PBE_alg_add_type(0,param_1,uVar1,uVar2,param_4,uVar3);
  return;
}

// EVP_PBE_alg_add_type @ 14f703a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PBE_alg_add_type
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f703a90;
  if (((DAT_1553e2ec8 != 0) || (DAT_1553e2ec8 = OPENSSL_sk_new(&LAB_14f703d60), DAT_1553e2ec8 != 0))
     && (puVar3 = (undefined4 *)CRYPTO_malloc(0x18,"crypto\\evp\\evp_pbe.c",0xab),
        puVar3 != (undefined4 *)0x0)) {
    *(undefined8 *)(puVar3 + 4) = param_5;
    lVar1 = DAT_1553e2ec8;
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    puVar3[3] = param_4;
    iVar2 = OPENSSL_sk_push(lVar1,puVar3);
    if (iVar2 != 0) {
      return 1;
    }
    CRYPTO_free(puVar3,"crypto\\evp\\evp_pbe.c",0xb5);
  }
  ERR_put_error(6,0xa0,0x41,"crypto\\evp\\evp_pbe.c",0xbb,uVar4);
  return 0;
}

// EVP_PBE_cleanup @ 14f703b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PBE_cleanup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_1553e2ec8,FUN_14f703cf0,param_3,param_4,0x14f703b7a);
  DAT_1553e2ec8 = 0;
  return;
}

// EVP_PBE_find @ 14f703bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PBE_find(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_28;
  int local_24;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f703bc0;
  if (param_2 != 0) {
    local_28 = param_1;
    local_24 = param_2;
    if (DAT_1553e2ec8 != 0) {
      uVar1 = OPENSSL_sk_find(DAT_1553e2ec8,&local_28);
      lVar2 = OPENSSL_sk_value(DAT_1553e2ec8,uVar1);
      if (lVar2 != 0) goto LAB_14f703c3d;
    }
    lVar2 = OBJ_bsearch_(&local_28,&DAT_1534b2d10,0x1d,0x18,&LAB_14f703d40);
    if (lVar2 != 0) {
LAB_14f703c3d:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(lVar2 + 8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(lVar2 + 0xc);
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *(undefined8 *)(lVar2 + 0x10);
      }
      return 1;
    }
  }
  return 0;
}

// FUN_14f703cc0 @ 14f703cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703cc0(void)

{
  OBJ_bsearch_();
  return;
}

// FUN_14f703cf0 @ 14f703cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703cf0(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\evp_pbe.c",0xf0);
  return;
}

// FUN_14f703d80 @ 14f703d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703d80(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f703da0 @ 14f703da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703da0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f703dc0 @ 14f703dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703dc0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f703de0 @ 14f703de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703de0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f703e00 @ 14f703e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f703e00(void)

{
  OPENSSL_sk_value();
  return;
}

