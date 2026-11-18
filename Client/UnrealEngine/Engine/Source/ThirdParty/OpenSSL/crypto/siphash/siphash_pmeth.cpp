// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f75d7c0 @ 14f75d7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d7c0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75d7cc;
  lVar1 = CRYPTO_zalloc(0x58,"crypto\\siphash\\siphash_pmeth.c",0x1f);
  if (lVar1 == 0) {
    ERR_put_error(0xf,0x7d,0x41,"crypto\\siphash\\siphash_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  EVP_PKEY_CTX_set_data(param_1,lVar1);
  EVP_PKEY_CTX_set0_keygen_info(param_1,0,0);
  return 1;
}

// FUN_14f75d840 @ 14f75d840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75d840(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)EVP_PKEY_CTX_get_data();
  if (piVar1 != (int *)0x0) {
    CRYPTO_clear_free(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,
                      "crypto\\siphash\\siphash_pmeth.c",0x2f);
    CRYPTO_clear_free(piVar1,0x58,"crypto\\siphash\\siphash_pmeth.c");
    EVP_PKEY_CTX_set_data(param_1,0);
  }
  return;
}

// FUN_14f75d8b0 @ 14f75d8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d8b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = FUN_14f75d7c0();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = EVP_PKEY_CTX_get_data(param_2);
  lVar4 = EVP_PKEY_CTX_get_data(param_1);
  lVar5 = ASN1_STRING_get0_data(lVar3);
  if (lVar5 != 0) {
    iVar1 = ASN1_STRING_copy(lVar4,lVar3);
    if (iVar1 == 0) {
      FUN_14f75d840(param_1);
      return 0;
    }
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar4 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
  *(undefined8 *)(lVar4 + 0x50) = uVar2;
  return 1;
}

// FUN_14f75d970 @ 14f75d970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = EVP_PKEY_CTX_get_data();
  lVar2 = ASN1_STRING_get0_data(uVar1);
  if (lVar2 != 0) {
    lVar2 = ASN1_OCTET_STRING_dup(uVar1);
    if (lVar2 != 0) {
      uVar1 = EVP_PKEY_assign(param_2,0x426,lVar2);
      return uVar1;
    }
  }
  return 0;
}

// FUN_14f75d9e0 @ 14f75d9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d9e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  lVar1 = EVP_PKEY_CTX_get_data();
  uVar2 = EVP_PKEY_CTX_get0_pkey(param_1);
  lVar3 = EVP_PKEY_get0_siphash(uVar2,local_res18);
  if ((lVar3 != 0) && (local_res18[0] == 0x10)) {
    EVP_MD_CTX_set_flags(param_2,0x100);
    EVP_MD_CTX_set_update_fn(param_2,FUN_14f75dd20);
    uVar2 = SipHash_Init(lVar1 + 0x18,lVar3,0,0);
    return uVar2;
  }
  return 0;
}

// FUN_14f75da90 @ 14f75da90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75da90(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = SipHash_hash_size(lVar1 + 0x18);
  *param_3 = uVar2;
  if (param_2 != 0) {
    uVar2 = SipHash_Final(lVar1 + 0x18,param_2,uVar2);
    return uVar2;
  }
  return 1;
}

// FUN_14f75db00 @ 14f75db00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75db00(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  local_18[1] = 0x14f75db20;
  lVar3 = EVP_PKEY_CTX_get_data();
  if (param_2 == 1) {
    return 1;
  }
  if (5 < param_2) {
    if (param_2 < 8) {
      lVar1 = (longlong)param_3;
      if (param_2 != 6) {
        uVar4 = EVP_PKEY_CTX_get0_pkey(param_1);
        param_4 = EVP_PKEY_get0_siphash(uVar4,local_18);
        lVar1 = local_18[0];
      }
      local_18[0] = lVar1;
      if (((param_4 != 0) && (local_18[0] == 0x10)) &&
         (iVar2 = ASN1_OCTET_STRING_set(lVar3,param_4,0x10), iVar2 != 0)) {
        uVar4 = ASN1_STRING_get0_data(lVar3);
        uVar4 = SipHash_Init(lVar3 + 0x18,uVar4,0,0);
        return uVar4;
      }
      return 0;
    }
    if (param_2 == 0xe) {
      uVar4 = SipHash_set_hash_size(lVar3 + 0x18,(longlong)param_3);
      return uVar4;
    }
  }
  return 0xfffffffe;
}

// FUN_14f75dc00 @ 14f75dc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75dc00(undefined8 param_1,char *param_2,char *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_3 == (char *)0x0) {
    return 0;
  }
  iVar2 = strcmp(param_2,"digestsize");
  if (iVar2 != 0) {
    lVar3 = 0;
    do {
      lVar6 = lVar3 + 1;
      uVar1 = 0;
      if (param_2[lVar3] != (&s_key)[lVar3]) {
        do {
          uVar5 = uVar1;
          if (param_2[uVar5] != (&s_hexkey)[uVar5]) {
            return 0xfffffffe;
          }
          uVar1 = uVar5 + 1;
        } while (uVar5 + 1 != 7);
        uVar4 = EVP_PKEY_CTX_hex2ctrl(param_1,uVar5 & 0xffffffff,param_3);
        return uVar4;
      }
      lVar3 = lVar6;
    } while (lVar6 != 4);
    uVar4 = EVP_PKEY_CTX_str2ctrl(param_1,6,param_3);
    return uVar4;
  }
  iVar2 = atoi(param_3);
  lVar3 = EVP_PKEY_CTX_get_data(param_1);
  uVar4 = SipHash_set_hash_size(lVar3 + 0x18,(longlong)iVar2);
  return uVar4;
}

// FUN_14f75dd20 @ 14f75dd20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75dd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = EVP_MD_CTX_pkey_ctx();
  lVar2 = EVP_PKEY_CTX_get_data(uVar1);
  SipHash_Update(lVar2 + 0x18,param_2,param_3);
  return 1;
}

