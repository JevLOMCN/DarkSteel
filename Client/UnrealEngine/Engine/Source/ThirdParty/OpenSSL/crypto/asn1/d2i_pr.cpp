// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// d2i_AutoPrivateKey @ 14f6f77a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_AutoPrivateKey(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  ERR_set_mark();
  local_res10[0] = *param_2;
  lVar2 = d2i_PKCS8_PRIV_KEY_INFO(0,local_res10,param_3);
  if (lVar2 == 0) {
    local_res20 = *param_2;
    uVar4 = d2i_ASN1_SEQUENCE_ANY(0,&local_res20,param_3);
    local_res20 = *param_2;
    iVar1 = OPENSSL_sk_num(uVar4);
    if (iVar1 == 6) {
      uVar5 = 0x74;
    }
    else {
      iVar1 = OPENSSL_sk_num(uVar4);
      uVar5 = 6;
      if (iVar1 == 4) {
        uVar5 = 0x198;
      }
    }
    OPENSSL_sk_pop_free(uVar4,ASN1_TYPE_free);
    lVar3 = d2i_PrivateKey(uVar5,param_1,param_2,param_3);
    if (lVar3 == 0) {
      ERR_clear_last_mark();
    }
    else {
      ERR_pop_to_mark();
    }
  }
  else {
    lVar3 = EVP_PKCS82PKEY(lVar2);
    PKCS8_PRIV_KEY_INFO_free(lVar2);
    if (lVar3 == 0) {
      ERR_clear_last_mark();
      ERR_put_error(0xd,0xcf,0xa7,"crypto\\asn1\\d2i_pr.c",0x7b);
      return 0;
    }
    *param_2 = local_res10[0];
    ERR_clear_last_mark();
    if (param_1 != (longlong *)0x0) {
      *param_1 = lVar3;
    }
  }
  return lVar3;
}

// d2i_PrivateKey @ 14f6f7900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_PrivateKey(undefined4 param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6f7919;
  local_res10 = *param_3;
  if ((param_2 == (longlong *)0x0) || (lVar4 = *param_2, lVar4 == 0)) {
    lVar4 = EVP_PKEY_new();
    if (lVar4 == 0) {
      ERR_put_error(0xd,0x9a,6,"crypto\\asn1\\d2i_pr.c",0x1d);
      return 0;
    }
  }
  else {
    ENGINE_finish(*(undefined8 *)(lVar4 + 0x18));
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  iVar2 = EVP_PKEY_set_type(lVar4,param_1);
  if (iVar2 == 0) {
    uVar8 = 0x29;
    uVar7 = 0xa3;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xb8);
    if ((pcVar1 != (code *)0x0) &&
       (iVar2 = (*pcVar1)(lVar4,&local_res10,param_4), lVar6 = lVar4, iVar2 != 0)) {
LAB_14f6f7a29:
      *param_3 = local_res10;
      if (param_2 == (longlong *)0x0) {
        return lVar6;
      }
      *param_2 = lVar6;
      return lVar6;
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x40) != 0) {
      lVar5 = d2i_PKCS8_PRIV_KEY_INFO(0,&local_res10,param_4);
      if (lVar5 != 0) {
        lVar6 = EVP_PKCS82PKEY(lVar5);
        PKCS8_PRIV_KEY_INFO_free(lVar5);
        if (lVar6 != 0) {
          EVP_PKEY_free(lVar4);
          iVar2 = EVP_PKEY_base_id(lVar6);
          iVar3 = EVP_PKEY_type(param_1);
          lVar4 = lVar6;
          if (iVar3 == iVar2) goto LAB_14f6f7a29;
        }
      }
      goto LAB_14f6f7a5f;
    }
    uVar8 = 0x3e;
    uVar7 = 0xd;
  }
  ERR_put_error(0xd,0x9a,uVar7,"crypto\\asn1\\d2i_pr.c",uVar8,uVar9);
LAB_14f6f7a5f:
  if ((param_2 == (longlong *)0x0) || (*param_2 != lVar4)) {
    EVP_PKEY_free(lVar4);
  }
  return 0;
}

// FUN_14f6f7aa0 @ 14f6f7aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6f7aa0(undefined8 *param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  lVar1 = d2i_PKCS8_PRIV_KEY_INFO(0,&local_res8,param_2);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = EVP_PKCS82PKEY(lVar1);
  if (lVar2 == 0) {
    *param_3 = 0;
  }
  PKCS8_PRIV_KEY_INFO_free(lVar1);
  if (lVar2 != 0) {
    *param_1 = local_res8;
  }
  return lVar2;
}

// FUN_14f6f7b40 @ 14f6f7b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f7b40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6f7b60 @ 14f6f7b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f7b60(void)

{
  OPENSSL_sk_pop_free();
  return;
}

