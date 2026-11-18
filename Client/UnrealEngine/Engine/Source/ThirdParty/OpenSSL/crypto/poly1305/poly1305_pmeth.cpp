// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f75d270 @ 14f75d270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d270(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75d27c;
  lVar1 = CRYPTO_zalloc(0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x1f);
  if (lVar1 == 0) {
    ERR_put_error(0xf,0x7c,0x41,"crypto\\poly1305\\poly1305_pmeth.c",0x20,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  EVP_PKEY_CTX_set_data(param_1,lVar1);
  EVP_PKEY_CTX_set0_keygen_info(param_1,0,0);
  return 1;
}

// FUN_14f75d300 @ 14f75d300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75d300(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)EVP_PKEY_CTX_get_data();
  if (piVar1 != (int *)0x0) {
    CRYPTO_clear_free(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,
                      "crypto\\poly1305\\poly1305_pmeth.c",0x2f);
    CRYPTO_clear_free(piVar1,0x110,"crypto\\poly1305\\poly1305_pmeth.c",0x30);
    EVP_PKEY_CTX_set_data(param_1,0);
  }
  return;
}

// FUN_14f75d380 @ 14f75d380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d380(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = FUN_14f75d270();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = EVP_PKEY_CTX_get_data(param_2);
  lVar4 = EVP_PKEY_CTX_get_data(param_1);
  lVar5 = ASN1_STRING_get0_data(lVar3);
  if (lVar5 != 0) {
    iVar1 = ASN1_STRING_copy(lVar4,lVar3);
    if (iVar1 == 0) {
      FUN_14f75d300(param_1);
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
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar4 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar4 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar4 + 0x80) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x90);
  *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(lVar4 + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xa0);
  *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar3 + 0x98);
  *(undefined8 *)(lVar4 + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xb0);
  *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined8 *)(lVar4 + 0xb0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xc0);
  *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xd0);
  *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar3 + 200);
  *(undefined8 *)(lVar4 + 0xd0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar3 + 0xd8);
  *(undefined8 *)(lVar4 + 0xe0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0xf0);
  *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar3 + 0xe8);
  *(undefined8 *)(lVar4 + 0xf0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x100);
  *(undefined8 *)(lVar4 + 0xf8) = *(undefined8 *)(lVar3 + 0xf8);
  *(undefined8 *)(lVar4 + 0x100) = uVar2;
  *(undefined8 *)(lVar4 + 0x108) = *(undefined8 *)(lVar3 + 0x108);
  return 1;
}

// FUN_14f75d4b0 @ 14f75d4b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d4b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = EVP_PKEY_CTX_get_data();
  lVar2 = ASN1_STRING_get0_data(uVar1);
  if (lVar2 != 0) {
    lVar2 = ASN1_OCTET_STRING_dup(uVar1);
    if (lVar2 != 0) {
      uVar1 = EVP_PKEY_assign(param_2,0x425,lVar2);
      return uVar1;
    }
  }
  return 0;
}

// FUN_14f75d520 @ 14f75d520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d520(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*piVar2 != 0x20) {
    return 0;
  }
  EVP_MD_CTX_set_flags(param_2,0x100);
  EVP_MD_CTX_set_update_fn(param_2,FUN_14f75d770);
  Poly1305_Init(lVar1 + 0x18,*(undefined8 *)(piVar2 + 2));
  return 1;
}

// FUN_14f75d5b0 @ 14f75d5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d5b0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *param_3 = 0x10;
  if (param_2 != 0) {
    Poly1305_Final(lVar1 + 0x18);
  }
  return 1;
}

// FUN_14f75d5f0 @ 14f75d5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d5f0(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  local_18[1] = 0x14f75d610;
  lVar3 = EVP_PKEY_CTX_get_data();
  if (param_2 != 1) {
    if (1 < param_2 - 6U) {
      return 0xfffffffe;
    }
    lVar1 = (longlong)param_3;
    if (param_2 != 6) {
      uVar4 = EVP_PKEY_CTX_get0_pkey(param_1);
      param_4 = EVP_PKEY_get0_poly1305(uVar4,local_18);
      lVar1 = local_18[0];
    }
    local_18[0] = lVar1;
    if (((param_4 == 0) || (local_18[0] != 0x20)) ||
       (iVar2 = ASN1_OCTET_STRING_set(lVar3,param_4,0x20), iVar2 == 0)) {
      return 0;
    }
    uVar4 = ASN1_STRING_get0_data(lVar3);
    Poly1305_Init(lVar3 + 0x18,uVar4);
  }
  return 1;
}

// FUN_14f75d6d0 @ 14f75d6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d6d0(undefined8 param_1,longlong param_2,longlong param_3)

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

// FUN_14f75d770 @ 14f75d770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = EVP_MD_CTX_pkey_ctx();
  lVar2 = EVP_PKEY_CTX_get_data(uVar1);
  Poly1305_Update(lVar2 + 0x18,param_2,param_3);
  return 1;
}

