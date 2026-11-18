// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 31

// X509_CRL_check_suiteb @ 14f6b2940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_check_suiteb(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_res18 [4];
  
  if ((param_3 & 0x30000) == 0) {
    return 0;
  }
  local_res18[0] = param_3;
  uVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_14f6b3580(param_2,uVar1,local_res18);
  return uVar2;
}

// X509_CRL_cmp @ 14f6b2990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_cmp(longlong param_1,longlong param_2)

{
  X509_NAME_cmp(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
  return;
}

// X509_CRL_match @ 14f6b29c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_match(longlong param_1,longlong param_2)

{
  memcmp((void *)(param_1 + 0xb0),(void *)(param_2 + 0xb0),0x14);
  return;
}

// X509_NAME_cmp @ 14f6b29f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_NAME_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = i2d_X509_NAME(param_1,0), iVar1 < 0)) {
    return -2;
  }
  if (((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
     (iVar1 = i2d_X509_NAME(param_2,0), iVar1 < 0)) {
    return -2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = iVar1 - *(int *)(param_2 + 0x20);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar1);
  }
  return iVar2;
}

// X509_NAME_hash @ 14f6b2a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong X509_NAME_hash(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  uint local_28 [6];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  i2d_X509_NAME(param_1,0);
  local_38 = EVP_sha1();
  local_30 = 0;
  uVar1 = EVP_Digest(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_28,0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  return (ulonglong)local_28[0];
}

// X509_NAME_hash_old @ 14f6b2b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint X509_NAME_hash_old(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  uint local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6b2b45;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  lVar2 = EVP_MD_CTX_new();
  uVar4 = 0;
  if (lVar2 != 0) {
    i2d_X509_NAME(param_1,0);
    EVP_MD_CTX_set_flags(lVar2,8);
    uVar3 = EVP_md5();
    iVar1 = EVP_DigestInit_ex(lVar2,uVar3,0);
    uVar4 = 0;
    if (iVar1 != 0) {
      iVar1 = EVP_DigestUpdate(lVar2,(*(undefined8 **)(param_1 + 0x10))[1],
                               **(undefined8 **)(param_1 + 0x10));
      uVar4 = 0;
      if (iVar1 != 0) {
        iVar1 = EVP_DigestFinal_ex(lVar2,local_28,0);
        if (iVar1 != 0) {
          uVar4 = local_28[0];
        }
      }
    }
    EVP_MD_CTX_free(lVar2);
  }
  return uVar4;
}

// X509_chain_check_suiteb @ 14f6b2c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_chain_check_suiteb(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  uint local_res20 [2];
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  bVar7 = param_2 == 0;
  local_res20[0] = param_4;
  if (bVar7) {
    param_2 = OPENSSL_sk_value(param_3);
  }
  uVar6 = (uint)bVar7;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = X509_PUBKEY_get0(*(undefined8 *)(param_2 + 0x50));
  }
  if (param_3 == 0) {
    if ((lVar4 != 0) && (iVar1 = EVP_PKEY_id(lVar4), iVar1 == 0x198)) {
      uVar3 = EVP_PKEY_get0_EC_KEY(lVar4);
      lVar4 = EC_KEY_get0_group(uVar3);
      if (lVar4 != 0) {
        iVar1 = EC_GROUP_get_curve_name(lVar4);
        if (iVar1 == 0x2cb) {
          if ((param_4 >> 0x11 & 1) == 0) {
            return 0x3c;
          }
        }
        else {
          if (iVar1 != 0x19f) {
            return 0x3a;
          }
          if ((param_4 >> 0x10 & 1) == 0) {
            return 0x3c;
          }
        }
        return 0;
      }
    }
    return 0x39;
  }
  iVar1 = X509_get_version(param_2);
  if (iVar1 != 2) {
    iVar1 = 0x38;
    uVar6 = 0;
    goto LAB_14f6b2e67;
  }
  if ((lVar4 == 0) || (iVar1 = EVP_PKEY_id(lVar4), iVar1 != 0x198)) {
LAB_14f6b2e3c:
    iVar1 = 0x39;
LAB_14f6b2e41:
    uVar6 = 0;
  }
  else {
    uVar3 = EVP_PKEY_get0_EC_KEY(lVar4);
    lVar5 = EC_KEY_get0_group(uVar3);
    if (lVar5 == 0) goto LAB_14f6b2e3c;
    iVar1 = EC_GROUP_get_curve_name(lVar5);
    if (iVar1 != 0x2cb) {
      if (iVar1 == 0x19f) {
        if ((param_4 >> 0x10 & 1) != 0) goto LAB_14f6b2d90;
        iVar1 = 0x3c;
      }
      else {
        iVar1 = 0x3a;
      }
      goto LAB_14f6b2e41;
    }
    if ((param_4 >> 0x11 & 1) == 0) {
      iVar1 = 0x3c;
      goto LAB_14f6b2e41;
    }
    local_res20[0] = param_4 & 0xfffeffff;
LAB_14f6b2d90:
    iVar1 = OPENSSL_sk_num(param_3);
    if ((int)uVar6 < iVar1) {
      do {
        uVar2 = X509_get_signature_nid(param_2);
        param_2 = OPENSSL_sk_value(param_3,uVar6);
        iVar1 = X509_get_version(param_2);
        if (iVar1 != 2) {
          iVar1 = 0x38;
          goto LAB_14f6b2e67;
        }
        if (param_2 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = X509_PUBKEY_get0(*(undefined8 *)(param_2 + 0x50));
        }
        iVar1 = FUN_14f6b3580(lVar4,uVar2,local_res20);
        if (iVar1 != 0) goto LAB_14f6b2e47;
        uVar6 = uVar6 + 1;
        iVar1 = OPENSSL_sk_num(param_3);
      } while ((int)uVar6 < iVar1);
    }
    uVar2 = X509_get_signature_nid(param_2);
    iVar1 = FUN_14f6b3580(lVar4,uVar2,local_res20);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_14f6b2e47:
  if (iVar1 - 0x3bU < 2) {
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
    }
    if ((iVar1 == 0x3c) && (param_4 != local_res20[0])) {
      iVar1 = 0x3d;
    }
  }
LAB_14f6b2e67:
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar6;
  }
  return iVar1;
}

// X509_chain_up_ref @ 14f6b2ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_chain_up_ref(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = OPENSSL_sk_dup();
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(lVar2);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(lVar2,iVar4);
      iVar1 = X509_up_ref(uVar3);
      if (iVar1 == 0) {
        while (0 < iVar4) {
          iVar4 = iVar4 + -1;
          uVar3 = OPENSSL_sk_value(lVar2,iVar4);
          X509_free(uVar3);
        }
        OPENSSL_sk_free(lVar2);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(lVar2);
    } while (iVar4 < iVar1);
  }
  return lVar2;
}

// X509_check_private_key @ 14f6b2f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_private_key(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6b2f5c;
  if (((param_1 == 0) || (lVar2 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50)), lVar2 == 0)) ||
     (iVar1 = EVP_PKEY_cmp(lVar2,param_2), iVar1 == -2)) {
    uVar4 = 0x135;
    uVar3 = 0x75;
  }
  else if (iVar1 == -1) {
    uVar4 = 0x132;
    uVar3 = 0x73;
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x12f;
    uVar3 = 0x74;
  }
  ERR_put_error(0xb,0x80,uVar3,"crypto\\x509\\x509_cmp.c",uVar4,uVar5);
  return 0;
}

// X509_cmp @ 14f6b2ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    X509_check_purpose(param_1,0xffffffff,0);
    X509_check_purpose(param_2,0xffffffff,0);
    if ((((*(uint *)(param_1 + 0xd0) & 0x100000) == 0) &&
        ((*(uint *)(param_2 + 0xd0) & 0x100000) == 0)) &&
       (iVar1 = memcmp((void *)(param_1 + 0x120),(void *)(param_2 + 0x120),0x14), iVar1 != 0)) {
      return iVar1;
    }
    if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_2 + 0x7c) == 0)) {
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 < *(int *)(param_2 + 0x78)) {
        return -1;
      }
      if (iVar1 <= *(int *)(param_2 + 0x78)) {
        iVar1 = memcmp(*(void **)(param_1 + 0x70),*(void **)(param_2 + 0x70),(longlong)iVar1);
        return iVar1;
      }
      return 1;
    }
  }
  return 0;
}

// X509_find_by_issuer_and_serial @ 14f6b30d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong X509_find_by_issuer_and_serial(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_198 [40];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_1 != 0) {
    local_170 = *param_3;
    uStack_16c = param_3[1];
    uStack_168 = param_3[2];
    uStack_164 = param_3[3];
    iVar3 = 0;
    local_160 = *(undefined8 *)(param_3 + 4);
    local_148 = param_2;
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      do {
        lVar2 = OPENSSL_sk_value(param_1,iVar3);
        iVar1 = ASN1_INTEGER_cmp(lVar2 + 8,&local_170);
        if ((iVar1 == 0) &&
           (iVar1 = X509_NAME_cmp(*(undefined8 *)(lVar2 + 0x30),local_148), iVar1 == 0)) {
          return lVar2;
        }
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(param_1);
      } while (iVar3 < iVar1);
    }
  }
  return 0;
}

// X509_find_by_subject @ 14f6b31b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_find_by_subject(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = OPENSSL_sk_num();
  if (0 < iVar2) {
    do {
      lVar4 = OPENSSL_sk_value(param_1,iVar5);
      lVar1 = *(longlong *)(lVar4 + 0x48);
      if ((((*(longlong *)(lVar1 + 0x18) != 0) && (*(int *)(lVar1 + 8) == 0)) ||
          (iVar2 = i2d_X509_NAME(lVar1,0), -1 < iVar2)) &&
         (((*(longlong *)(param_2 + 0x18) != 0 && (*(int *)(param_2 + 8) == 0)) ||
          (iVar2 = i2d_X509_NAME(param_2,0), -1 < iVar2)))) {
        iVar2 = *(int *)(lVar1 + 0x20);
        iVar3 = iVar2 - *(int *)(param_2 + 0x20);
        if ((iVar3 == 0) && (iVar2 != 0)) {
          iVar3 = memcmp(*(void **)(lVar1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar2);
        }
        if (iVar3 == 0) {
          return lVar4;
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = OPENSSL_sk_num(param_1);
    } while (iVar5 < iVar2);
  }
  return 0;
}

// X509_get0_pubkey @ 14f6b3290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get0_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50));
  return uVar1;
}

// X509_get0_serialNumber @ 14f6b32c0

longlong X509_get0_serialNumber(longlong param_1)

{
  return param_1 + 8;
}

// X509_get_issuer_name @ 14f6b32d0

undefined8 X509_get_issuer_name(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}

// X509_get_pubkey @ 14f6b32e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_PUBKEY_get(*(undefined8 *)(param_1 + 0x50));
  return uVar1;
}

// X509_get_serialNumber @ 14f6b3310

longlong X509_get_serialNumber(longlong param_1)

{
  return param_1 + 8;
}

// X509_get_subject_name @ 14f6b3320

undefined8 X509_get_subject_name(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}

// X509_issuer_and_serial_cmp @ 14f6b3330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_issuer_and_serial_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = ASN1_INTEGER_cmp(param_1 + 8,param_2 + 8);
  if (iVar1 == 0) {
    X509_NAME_cmp(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  }
  return;
}

// X509_issuer_and_serial_hash @ 14f6b3380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong X509_issuer_and_serial_hash(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar7;
  undefined1 auStack_48 [32];
  uint local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  ulonglong uVar6;
  
  uStack_10 = 0x14f6b339a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  uVar6 = 0;
  uVar5 = 0;
  lVar2 = EVP_MD_CTX_new();
  uVar3 = uVar6;
  if (lVar2 != 0) {
    uVar3 = X509_NAME_oneline(*(undefined8 *)(param_1 + 0x30),0);
    if (uVar3 != 0) {
      uVar4 = EVP_md5();
      iVar1 = EVP_DigestInit_ex(lVar2,uVar4);
      if (iVar1 != 0) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(uVar3 + lVar7) != '\0');
        iVar1 = EVP_DigestUpdate(lVar2,uVar3);
        uVar6 = uVar5;
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(lVar2,*(undefined8 *)(param_1 + 0x10),
                                   *(undefined4 *)(param_1 + 8));
          if (iVar1 != 0) {
            iVar1 = EVP_DigestFinal_ex(lVar2,local_28,0);
            if (iVar1 != 0) {
              uVar6 = (ulonglong)local_28[0];
            }
          }
        }
      }
    }
  }
  CRYPTO_free(uVar3,"crypto\\x509\\x509_cmp.c",0x3a);
  EVP_MD_CTX_free(lVar2);
  return uVar6;
}

// X509_issuer_name_cmp @ 14f6b34a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_issuer_name_cmp(longlong param_1,longlong param_2)

{
  X509_NAME_cmp(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  return;
}

// X509_issuer_name_hash @ 14f6b34d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_issuer_name_hash(longlong param_1)

{
  X509_NAME_hash(*(undefined8 *)(param_1 + 0x30));
  return;
}

// X509_issuer_name_hash_old @ 14f6b34f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_issuer_name_hash_old(longlong param_1)

{
  X509_NAME_hash_old(*(undefined8 *)(param_1 + 0x30));
  return;
}

// X509_subject_name_cmp @ 14f6b3510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_subject_name_cmp(longlong param_1,longlong param_2)

{
  X509_NAME_cmp(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
  return;
}

// X509_subject_name_hash @ 14f6b3540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_subject_name_hash(longlong param_1)

{
  X509_NAME_hash(*(undefined8 *)(param_1 + 0x48));
  return;
}

// X509_subject_name_hash_old @ 14f6b3560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_subject_name_hash_old(longlong param_1)

{
  X509_NAME_hash_old(*(undefined8 *)(param_1 + 0x48));
  return;
}

// FUN_14f6b3580 @ 14f6b3580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b3580(longlong param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (iVar1 = EVP_PKEY_id(), iVar1 == 0x198)) {
    uVar2 = EVP_PKEY_get0_EC_KEY(param_1);
    lVar3 = EC_KEY_get0_group(uVar2);
    if (lVar3 != 0) {
      iVar1 = EC_GROUP_get_curve_name(lVar3);
      if (iVar1 == 0x2cb) {
        if ((param_2 == -1) || (param_2 == 0x31b)) {
          if ((*param_3 >> 0x11 & 1) == 0) {
            return 0x3c;
          }
          *param_3 = *param_3 & 0xfffeffff;
          return 0;
        }
      }
      else {
        if (iVar1 != 0x19f) {
          return 0x3a;
        }
        if ((param_2 == -1) || (param_2 == 0x31a)) {
          if ((*param_3 & 0x10000) == 0) {
            return 0x3c;
          }
          return 0;
        }
      }
      return 0x3b;
    }
  }
  return 0x39;
}

// FUN_14f6b36a0 @ 14f6b36a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b36a0(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_14f6b36c0 @ 14f6b36c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b36c0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6b36e0 @ 14f6b36e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b36e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6b3700 @ 14f6b3700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b3700(void)

{
  OPENSSL_sk_value();
  return;
}

