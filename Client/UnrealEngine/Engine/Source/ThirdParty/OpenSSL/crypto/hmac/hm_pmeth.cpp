// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f759830 @ 14f759830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759830(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f759840;
  lVar1 = CRYPTO_zalloc(0x28,"crypto\\hmac\\hm_pmeth.c",0x1f);
  if (lVar1 == 0) {
    ERR_put_error(0xf,0x7b,0x41,"crypto\\hmac\\hm_pmeth.c",0x20,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0xc) = 4;
  lVar2 = HMAC_CTX_new();
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(lVar1,"crypto\\hmac\\hm_pmeth.c",0x26);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}

// FUN_14f7598f0 @ 14f7598f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7598f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = EVP_PKEY_CTX_get_data();
  if (lVar1 != 0) {
    HMAC_CTX_free(*(undefined8 *)(lVar1 + 0x20));
    CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x10),(longlong)*(int *)(lVar1 + 8),
                      "crypto\\hmac\\hm_pmeth.c",0x50);
    CRYPTO_free(lVar1,"crypto\\hmac\\hm_pmeth.c",0x51);
    EVP_PKEY_CTX_set_data(param_1,0);
  }
  return;
}

// FUN_14f759970 @ 14f759970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759970(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_14f759830();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  puVar3 = (undefined8 *)EVP_PKEY_CTX_get_data(param_2);
  puVar4 = (undefined8 *)EVP_PKEY_CTX_get_data(param_1);
  *puVar4 = *puVar3;
  iVar1 = HMAC_CTX_copy(puVar4[4],puVar3[4]);
  if (iVar1 != 0) {
    if (puVar3[2] != 0) {
      iVar1 = ASN1_OCTET_STRING_set(puVar4 + 1,puVar3[2],*(undefined4 *)(puVar3 + 1));
      if (iVar1 == 0) goto LAB_14f7599fe;
    }
    return 1;
  }
LAB_14f7599fe:
  FUN_14f7598f0(param_1);
  return 0;
}

// FUN_14f759a20 @ 14f759a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759a20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) != 0) {
    lVar1 = ASN1_OCTET_STRING_dup(*(longlong *)(param_1 + 0x28) + 8);
    if (lVar1 != 0) {
      EVP_PKEY_assign(param_2,0x357,lVar1);
      return 1;
    }
  }
  return 0;
}

// FUN_14f759a80 @ 14f759a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759a80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = EVP_MD_CTX_test_flags(param_2,0xfffffeff);
  HMAC_CTX_set_flags(*(undefined8 *)(lVar1 + 0x20),uVar2);
  EVP_MD_CTX_set_flags(param_2,0x100);
  EVP_MD_CTX_set_update_fn(param_2,FUN_14f759cc0);
  return 1;
}

// FUN_14f759af0 @ 14f759af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759af0(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar3 = EVP_MD_CTX_md(param_4);
  iVar2 = EVP_MD_size(uVar3);
  if (iVar2 < 0) {
    return 0;
  }
  *param_3 = (longlong)iVar2;
  if (param_2 != 0) {
    iVar2 = HMAC_Final(*(undefined8 *)(lVar1 + 0x20),param_2,local_res8);
    if (iVar2 == 0) {
      return 0;
    }
    *param_3 = (ulonglong)local_res8[0];
  }
  return 1;
}

// FUN_14f759b80 @ 14f759b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759b80(longlong param_1,int param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (param_2 == 1) {
    *plVar1 = param_4;
  }
  else {
    if (param_2 == 6) {
      if ((((param_4 != 0) || (param_3 < 1)) && (-2 < param_3)) &&
         (iVar3 = ASN1_OCTET_STRING_set(plVar1 + 1,param_4), iVar3 != 0)) {
        return 1;
      }
      return 0;
    }
    if (param_2 != 7) {
      return 0xfffffffe;
    }
    puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x28);
    uVar4 = HMAC_Init_ex(plVar1[4],*(undefined8 *)(puVar2 + 2),*puVar2,*plVar1,
                         *(undefined8 *)(param_1 + 8));
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  return 1;
}

// FUN_14f759c20 @ 14f759c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759c20(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    uVar1 = 0;
    if (*(char *)(param_2 + uVar3) != (&s_key)[uVar3]) {
      do {
        uVar3 = uVar1;
        if (*(char *)(param_2 + uVar3) != (&s_hexkey)[uVar3]) {
          return 0xfffffffe;
        }
        uVar1 = uVar3 + 1;
      } while (uVar3 + 1 != 7);
      uVar2 = EVP_PKEY_CTX_hex2ctrl(param_1,uVar3 & 0xffffffff);
      return uVar2;
    }
    uVar3 = uVar4;
  } while (uVar4 != 4);
  uVar2 = EVP_PKEY_CTX_str2ctrl(param_1,6);
  return uVar2;
}

// FUN_14f759cc0 @ 14f759cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f759cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EVP_MD_CTX_pkey_ctx();
  iVar1 = HMAC_Update(*(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20),param_2,param_3);
  return iVar1 != 0;
}

