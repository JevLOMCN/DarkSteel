// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// HMAC @ 14f6ee320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined *
HMAC(undefined8 param_1,undefined *param_2,int param_3,undefined8 param_4,undefined8 param_5,
    undefined *param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6ee33e;
  puVar3 = &DAT_1553e2b30;
  if (param_6 != (undefined *)0x0) {
    puVar3 = param_6;
  }
  plVar2 = (longlong *)CRYPTO_zalloc(0x20,"crypto\\hmac\\hmac.c");
  if ((plVar2 == (longlong *)0x0) || (iVar1 = HMAC_CTX_reset(plVar2), iVar1 != 0)) {
    if (plVar2 != (longlong *)0x0) {
      puVar4 = param_2;
      if ((param_2 == (undefined *)0x0) && (puVar4 = &DAT_1534ab3c0, param_3 != 0)) {
        puVar4 = param_2;
      }
      iVar1 = HMAC_Init_ex(plVar2,puVar4,param_3,param_1,0,uVar5);
      if ((((iVar1 != 0) && (*plVar2 != 0)) &&
          (iVar1 = EVP_DigestUpdate(plVar2[1],param_4,param_5), iVar1 != 0)) &&
         (iVar1 = HMAC_Final(plVar2,puVar3,param_7), iVar1 != 0)) {
        HMAC_CTX_free(plVar2);
        return puVar3;
      }
    }
  }
  else {
    HMAC_CTX_free(plVar2);
    plVar2 = (longlong *)0x0;
  }
  HMAC_CTX_free(plVar2);
  return (undefined *)0x0;
}

// HMAC_CTX_copy @ 14f6ee440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 HMAC_CTX_copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14f6eeb00();
  if (iVar1 != 0) {
    iVar1 = EVP_MD_CTX_copy_ex(param_1[2],param_2[2]);
    if (iVar1 != 0) {
      iVar1 = EVP_MD_CTX_copy_ex(param_1[3],param_2[3]);
      if (iVar1 != 0) {
        iVar1 = EVP_MD_CTX_copy_ex(param_1[1],param_2[1]);
        if (iVar1 != 0) {
          *param_1 = *param_2;
          return 1;
        }
      }
    }
  }
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  return 0;
}

// HMAC_CTX_free @ 14f6ee4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void HMAC_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_MD_CTX_reset(param_1[2]);
    EVP_MD_CTX_reset(param_1[3]);
    EVP_MD_CTX_reset(param_1[1]);
    *param_1 = 0;
    EVP_MD_CTX_free(param_1[2]);
    EVP_MD_CTX_free(param_1[3]);
    EVP_MD_CTX_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\hmac\\hmac.c",0xa3);
  }
  return;
}

// HMAC_CTX_new @ 14f6ee570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong HMAC_CTX_new(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_zalloc(0x20,"crypto\\hmac\\hmac.c",0x89);
  if (lVar2 != 0) {
    iVar1 = HMAC_CTX_reset(lVar2);
    if (iVar1 == 0) {
      HMAC_CTX_free(lVar2);
      return 0;
    }
  }
  return lVar2;
}

// HMAC_CTX_reset @ 14f6ee5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 HMAC_CTX_reset(undefined8 *param_1)

{
  int iVar1;
  
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  iVar1 = FUN_14f6eeb00(param_1);
  if (iVar1 == 0) {
    EVP_MD_CTX_reset(param_1[2]);
    EVP_MD_CTX_reset(param_1[3]);
    EVP_MD_CTX_reset(param_1[1]);
    *param_1 = 0;
    return 0;
  }
  return 1;
}

// HMAC_CTX_set_flags @ 14f6ee650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void HMAC_CTX_set_flags(longlong param_1,undefined4 param_2)

{
  EVP_MD_CTX_set_flags(*(undefined8 *)(param_1 + 0x10));
  EVP_MD_CTX_set_flags(*(undefined8 *)(param_1 + 0x18),param_2);
  EVP_MD_CTX_set_flags(*(undefined8 *)(param_1 + 8),param_2);
  return;
}

// HMAC_Final @ 14f6ee6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 HMAC_Final(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6ee6ae;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((((*param_1 != 0) && (iVar1 = EVP_DigestFinal_ex(param_1[1],local_68,local_78), iVar1 != 0))
      && (iVar1 = EVP_MD_CTX_copy_ex(param_1[1],param_1[3]), iVar1 != 0)) &&
     ((iVar1 = EVP_DigestUpdate(param_1[1],local_68,local_78[0]), iVar1 != 0 &&
      (iVar1 = EVP_DigestFinal_ex(param_1[1],param_2,param_3), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}

// HMAC_Init @ 14f6ee750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void HMAC_Init(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f6ee76a;
  if ((param_2 != 0) && (param_4 != 0)) {
    HMAC_CTX_reset();
  }
  HMAC_Init_ex(param_1,param_2,param_3,param_4,0,uVar1);
  return;
}

// HMAC_Init_ex @ 14f6ee7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong HMAC_Init_ex(longlong *param_1,void *param_2,uint param_3,longlong param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_1a8 [32];
  uint local_188 [4];
  ulonglong local_178 [16];
  byte abStack_f8 [16];
  ulonglong local_e8 [16];
  byte abStack_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar9 = 0;
  bVar4 = false;
  if (param_4 == 0) {
    param_4 = *param_1;
    if (param_4 == 0) {
      return 0;
    }
  }
  else {
    if (param_4 != *param_1) {
      if (param_2 == (void *)0x0) {
        return 0;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
    }
    *param_1 = param_4;
  }
  uVar6 = EVP_MD_meth_get_flags(param_4);
  if ((uVar6 & 2) != 0) {
    return 0;
  }
  if (param_2 != (void *)0x0) {
    bVar4 = true;
    iVar5 = EVP_MD_block_size(param_4);
    if (0x90 < iVar5) {
      return 0;
    }
    if (iVar5 < (int)param_3) {
      iVar5 = EVP_DigestInit_ex(param_1[1],param_4,param_5);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = EVP_DigestUpdate(param_1[1],param_2,(longlong)(int)param_3);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = EVP_DigestFinal_ex(param_1[1],local_178,local_188);
      if (iVar5 == 0) {
        return 0;
      }
    }
    else {
      if (0x90 < param_3) {
        return 0;
      }
      memcpy(local_178,param_2,(longlong)(int)param_3);
      local_188[0] = param_3;
    }
    if (local_188[0] != 0x90) {
      memset((void *)((longlong)local_178 + (ulonglong)local_188[0]),0,
             (ulonglong)(0x90 - local_188[0]));
    }
    lVar8 = 0x80;
    uVar6 = uVar9;
    do {
      uVar3 = *(ulonglong *)((longlong)local_178 + uVar6 + 8);
      uVar1 = *(ulonglong *)((longlong)local_178 + uVar6 + 0x10);
      uVar2 = *(ulonglong *)((longlong)local_178 + uVar6 + 0x18);
      *(ulonglong *)((longlong)local_e8 + uVar6) =
           *(ulonglong *)((longlong)local_178 + uVar6) ^ ___xmm_36363636363636363636363636363636;
      *(ulonglong *)((longlong)local_e8 + uVar6 + 8) = uVar3 ^ _UNK_1506bff78;
      *(ulonglong *)((longlong)local_e8 + uVar6 + 0x10) =
           uVar1 ^ ___xmm_36363636363636363636363636363636;
      *(ulonglong *)((longlong)local_e8 + uVar6 + 0x18) = uVar2 ^ _UNK_1506bff78;
      uVar6 = uVar6 + 0x20;
    } while ((longlong)uVar6 < 0x80);
    lVar7 = 0x80;
    do {
      *(byte *)((longlong)local_e8 + lVar7) = *(byte *)((longlong)local_178 + lVar7) ^ 0x36;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0x90);
    iVar5 = EVP_DigestInit_ex(param_1[2],param_4,param_5);
    if (iVar5 == 0) goto LAB_14f6eea45;
    iVar5 = EVP_MD_block_size(param_4);
    iVar5 = EVP_DigestUpdate(param_1[2],local_e8,(longlong)iVar5);
    uVar6 = uVar9;
    if (iVar5 == 0) goto LAB_14f6eea45;
    do {
      uVar3 = *(ulonglong *)((longlong)local_178 + uVar6 + 8);
      uVar1 = *(ulonglong *)((longlong)local_178 + uVar6 + 0x10);
      uVar2 = *(ulonglong *)((longlong)local_178 + uVar6 + 0x18);
      *(ulonglong *)((longlong)local_e8 + uVar6) =
           *(ulonglong *)((longlong)local_178 + uVar6) ^ ___xmm_5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c;
      *(ulonglong *)((longlong)local_e8 + uVar6 + 8) = uVar3 ^ _UNK_1506bff88;
      *(ulonglong *)((longlong)local_e8 + uVar6 + 0x10) =
           uVar1 ^ ___xmm_5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c5c;
      *(ulonglong *)((longlong)local_e8 + uVar6 + 0x18) = uVar2 ^ _UNK_1506bff88;
      uVar6 = uVar6 + 0x20;
    } while ((longlong)uVar6 < 0x80);
    do {
      *(byte *)((longlong)local_e8 + lVar8) = *(byte *)((longlong)local_178 + lVar8) ^ 0x5c;
      lVar8 = lVar8 + 1;
    } while (lVar8 < 0x90);
    iVar5 = EVP_DigestInit_ex(param_1[3],param_4,param_5);
    if (iVar5 == 0) goto LAB_14f6eea45;
    iVar5 = EVP_MD_block_size(param_4);
    iVar5 = EVP_DigestUpdate(param_1[3],local_e8,(longlong)iVar5);
    uVar9 = 0;
    if (iVar5 == 0) goto LAB_14f6eea45;
  }
  iVar5 = EVP_MD_CTX_copy_ex(param_1[1],param_1[2]);
  uVar9 = (ulonglong)(iVar5 != 0);
  if (!bVar4) {
    return uVar9;
  }
LAB_14f6eea45:
  OPENSSL_cleanse(local_178,0x90);
  OPENSSL_cleanse(local_e8,0x90);
  return uVar9;
}

// HMAC_Update @ 14f6eeaa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 HMAC_Update(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = EVP_DigestUpdate(param_1[1]);
  return uVar1;
}

// HMAC_size @ 14f6eead0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong HMAC_size(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = EVP_MD_size(*param_1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return (longlong)iVar1;
}

// FUN_14f6eeb00 @ 14f6eeb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6eeb00(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = EVP_MD_CTX_new();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = EVP_MD_CTX_new();
      *(longlong *)(param_1 + 0x18) = lVar2;
      if (lVar2 == 0) {
        return false;
      }
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar1 = EVP_MD_CTX_new();
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
    return *(longlong *)(param_1 + 8) != 0;
  }
  return false;
}

// FUN_14f6eeb70 @ 14f6eeb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6eeb70(undefined8 *param_1)

{
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  return;
}

