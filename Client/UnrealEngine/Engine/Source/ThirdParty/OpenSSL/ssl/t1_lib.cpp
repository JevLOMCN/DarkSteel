// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 67

// SSL_CTX_set_tlsext_max_fragment_length @ 14f670770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_tlsext_max_fragment_length(longlong param_1,byte param_2)

{
  if (4 < param_2) {
    ERR_put_error(0x14,0x227,0xe8,"ssl\\t1_lib.c",0xb53);
    return 0;
  }
  *(byte *)(param_1 + 0x23c) = param_2;
  return 1;
}

// SSL_check_chain @ 14f6707e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_check_chain(void)

{
  tls1_check_chain();
  return;
}

// SSL_set_tlsext_max_fragment_length @ 14f6709e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_tlsext_max_fragment_length(longlong param_1,byte param_2)

{
  if (4 < param_2) {
    ERR_put_error(0x14,0x226,0xe8,"ssl\\t1_lib.c",0xb60);
    return 0;
  }
  *(byte *)(param_1 + 0x72c) = param_2;
  return 1;
}

// FUN_14f670a40 @ 14f670a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f670a40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0x14f670a52;
  ERR_set_mark();
  iVar1 = EVP_PKEY_get_default_digest_nid(param_4,&local_28);
  if ((iVar1 == 2) && (*(int *)(param_2 + 0xc) != local_28)) {
    return 0;
  }
  ERR_pop_to_mark();
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(lVar2 + 0x2f0) == 0) {
    return 1;
  }
  uVar5 = 0;
  if (*(longlong *)(lVar2 + 0x300) != 0) {
    do {
      ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
      uVar3 = 0;
      do {
        if (*(short *)(ppuVar4 + 1) == *(short *)(*(longlong *)(lVar2 + 0x2f0) + uVar5 * 2)) {
          iVar1 = X509_get_signature_info(param_3,&local_24,&local_20,0,0);
          if (((iVar1 != 0) && (local_24 == *(int *)((longlong)ppuVar4 + 0xc))) &&
             ((int)local_20 == *(int *)((longlong)ppuVar4 + 0x14))) {
            return 1;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        ppuVar4 = ppuVar4 + 5;
      } while (uVar3 < 0x1a);
      lVar2 = *(longlong *)(param_1 + 0xa8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulonglong *)(lVar2 + 0x300));
  }
  return 0;
}

// FUN_14f670b80 @ 14f670b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f670b80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  uVar8 = 0;
  iVar3 = -1;
  uVar6 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 6000) != 0) {
    do {
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x1768) + uVar7 * 8);
      iVar2 = *(int *)(uVar6 + 0xc);
      if ((((iVar2 != 0x40) && (iVar2 != 0x2a3)) && (*(int *)(uVar6 + 0x14) != 0x74)) &&
         ((*(int *)(uVar6 + 0x14) != 6 &&
          ((iVar2 == 0 || (lVar4 = ssl_md(*(undefined4 *)(uVar6 + 0x10)), lVar4 != 0)))))) {
        if (param_3 == 0) {
          lVar4 = (longlong)(int)*(uint *)(uVar6 + 0x18);
          if ((((*(uint *)(uVar6 + 0x18) < 9) &&
               (lVar1 = *(longlong *)(param_1 + 0x488),
               *(longlong *)(lVar1 + 0x20 + lVar4 * 0x28) != 0)) &&
              (*(longlong *)(lVar1 + 0x28 + lVar4 * 0x28) != 0)) &&
             (iVar2 = FUN_14f670a40(param_1,uVar6,*(undefined8 *)(lVar1 + 0x20 + lVar4 * 0x28),
                                    *(undefined8 *)(lVar1 + 0x28 + lVar4 * 0x28)), iVar2 != 0)) {
            lVar4 = *(longlong *)
                     (*(longlong *)(param_1 + 0x488) + ((longlong)*(int *)(uVar6 + 0x18) + 1) * 0x28
                     );
LAB_14f670ca9:
            if (*(int *)(uVar6 + 0x14) == 0x198) {
              if (iVar3 == -1) {
                uVar5 = EVP_PKEY_get0_EC_KEY();
                uVar5 = EC_KEY_get0_group(uVar5);
                iVar3 = EC_GROUP_get_curve_name(uVar5);
              }
              if ((*(int *)(uVar6 + 0x20) == 0) || (iVar3 == *(int *)(uVar6 + 0x20))) break;
            }
            else {
              if (*(int *)(uVar6 + 0x14) != 0x390) break;
              uVar5 = EVP_PKEY_get0(lVar4);
              iVar2 = FUN_14f671060(uVar5,uVar6);
              if (iVar2 != 0) break;
            }
          }
        }
        else {
          lVar4 = ssl_cert_lookup_by_pkey(param_3,local_res8);
          if (((lVar4 != 0) && (local_res8[0] == *(int *)(uVar6 + 0x18))) &&
             (iVar2 = FUN_14f670a40(param_1,uVar6,param_2,param_3), lVar4 = param_3, iVar2 != 0))
          goto LAB_14f670ca9;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_1 + 6000));
  }
  if (uVar7 == *(ulonglong *)(param_1 + 6000)) {
    uVar6 = uVar8;
  }
  return uVar6;
}

// FUN_14f670d40 @ 14f670d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f670d40(undefined4 *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar3 = lVar5;
  do {
    lVar4 = lVar3 + 1;
    lVar2 = lVar5;
    if (*(char *)(param_3 + lVar3) != (&s_RSA)[lVar3]) {
      do {
        lVar4 = lVar2 + 1;
        lVar3 = lVar5;
        if (*(char *)(param_3 + lVar2) != (&s_RSA_PSS)[lVar2]) {
          do {
            lVar4 = lVar3 + 1;
            lVar2 = lVar5;
            if (*(char *)(param_3 + lVar3) != (&s_PSS)[lVar3]) {
              do {
                lVar3 = lVar2 + 1;
                if (*(char *)(param_3 + lVar2) != (&s_DSA)[lVar2]) {
                  do {
                    lVar3 = lVar5 + 1;
                    if (*(char *)(param_3 + lVar5) != (&s_ECDSA)[lVar5]) {
                      iVar1 = OBJ_sn2nid(param_3);
                      *param_2 = iVar1;
                      if (iVar1 == 0) {
                        iVar1 = OBJ_ln2nid(param_3);
                        *param_2 = iVar1;
                      }
                      return;
                    }
                    lVar5 = lVar3;
                  } while (lVar3 != 6);
                  *param_1 = 0x198;
                  return;
                }
                lVar2 = lVar3;
              } while (lVar3 != 4);
              *param_1 = 0x74;
              return;
            }
            lVar3 = lVar4;
          } while (lVar4 != 4);
          *param_1 = 0x390;
          return;
        }
        lVar2 = lVar4;
      } while (lVar4 != 8);
      *param_1 = 0x390;
      return;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  *param_1 = 6;
  return;
}

// FUN_14f670e80 @ 14f670e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f670e80(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(param_2 + 0x18);
  }
  if (param_3 < 9) {
    lVar2 = (longlong)(int)param_3;
    lVar1 = *(longlong *)(param_1 + 0x488);
    if ((*(longlong *)(lVar1 + 0x20 + lVar2 * 0x28) != 0) &&
       (*(longlong *)(lVar1 + 0x28 + lVar2 * 0x28) != 0)) {
      uVar3 = FUN_14f670a40(param_1,param_2,*(undefined8 *)(lVar1 + 0x20 + lVar2 * 0x28),
                            *(undefined8 *)(lVar1 + 0x28 + lVar2 * 0x28));
      return uVar3;
    }
  }
  return 0;
}

// FUN_14f670ee0 @ 14f670ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f670ee0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f670efa;
  lVar1 = ssl_cert_lookup_by_pkey(param_4,local_18);
  if ((lVar1 == 0) || (local_18[0] != *(int *)(param_2 + 0x18))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14f670a40(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}

// FUN_14f670f60 @ 14f670f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f670f60(void *param_1,int param_2,ulonglong *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (((param_1 == (void *)0x0) || (*param_3 == 0x1e)) || (0x13 < param_2)) {
    return 0;
  }
  uVar4 = (ulonglong)param_2;
  memcpy(local_28,param_1,uVar4);
  if (0x13 < uVar4) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  local_28[uVar4] = 0;
  iVar1 = EC_curve_nist2nid();
  if (((iVar1 == 0) && (iVar1 = OBJ_sn2nid(), iVar1 == 0)) && (iVar1 = OBJ_ln2nid(), iVar1 == 0)) {
    return 0;
  }
  uVar4 = *param_3;
  uVar3 = 0;
  if (uVar4 != 0) {
    puVar2 = param_3 + 1;
    do {
      if ((int)*puVar2 == iVar1) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      puVar2 = (ulonglong *)((longlong)puVar2 + 4);
    } while (uVar3 < uVar4);
  }
  *(int *)((longlong)param_3 + uVar4 * 4 + 8) = iVar1;
  *param_3 = *param_3 + 1;
  return 1;
}

// FUN_14f671060 @ 14f671060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f671060(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != 0) &&
     (((lVar3 = 0, *(int *)(param_2 + 0xc) == 0 ||
       (lVar3 = ssl_md(*(undefined4 *)(param_2 + 0x10)), lVar3 != 0)) && (lVar3 != 0)))) {
    iVar1 = EVP_MD_size(lVar3);
    iVar2 = RSA_size(param_1);
    return iVar1 * 2 + 2 <= iVar2;
  }
  return false;
}

// FUN_14f6710f0 @ 14f6710f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6710f0(void *param_1,int param_2,ulonglong *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  char local_50 [40];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar5 = 0;
  local_58 = 0;
  local_54 = 0;
  if (((param_1 == (void *)0x0) || (*param_3 == 0x34)) || (0x27 < param_2)) {
    return 0;
  }
  uVar6 = (ulonglong)param_2;
  memcpy(local_50,param_1,uVar6);
  if (0x27 < uVar6) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  local_50[uVar6] = '\0';
  pcVar3 = strchr(local_50,0x2b);
  if (pcVar3 == (char *)0x0) {
    ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
    uVar6 = uVar5;
    do {
      if (*ppuVar7 != (undefined *)0x0) {
        pcVar3 = local_50;
        lVar8 = (longlong)*ppuVar7 - (longlong)pcVar3;
        do {
          cVar1 = *pcVar3;
          cVar2 = pcVar3[lVar8];
          if (cVar1 != cVar2) break;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          *(undefined2 *)((longlong)param_3 + *param_3 * 2 + 8) = *(undefined2 *)(ppuVar7 + 1);
          *param_3 = *param_3 + 1;
          break;
        }
      }
      uVar6 = uVar6 + 1;
      ppuVar7 = ppuVar7 + 5;
    } while (uVar6 < 0x1a);
    bVar9 = uVar6 == 0x1a;
  }
  else {
    *pcVar3 = '\0';
    if (pcVar3[1] == '\0') {
      return 0;
    }
    FUN_14f670d40(&local_58,&local_54,local_50);
    FUN_14f670d40(&local_58,&local_54,pcVar3 + 1);
    if (local_58 == 0) {
      return 0;
    }
    if (local_54 == 0) {
      return 0;
    }
    ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
    uVar6 = uVar5;
    do {
      if ((*(int *)((longlong)ppuVar7 + 0xc) == local_54) &&
         (*(int *)((longlong)ppuVar7 + 0x14) == local_58)) {
        *(undefined2 *)((longlong)param_3 + *param_3 * 2 + 8) = *(undefined2 *)(ppuVar7 + 1);
        *param_3 = *param_3 + 1;
        bVar9 = uVar6 == 0x1a;
        goto LAB_14f6711ca;
      }
      uVar6 = uVar6 + 1;
      ppuVar7 = ppuVar7 + 5;
    } while (uVar6 < 0x1a);
    bVar9 = uVar6 == 0x1a;
  }
LAB_14f6711ca:
  if (bVar9) {
    return 0;
  }
  uVar6 = *param_3 - 1;
  if (uVar6 != 0) {
    puVar4 = param_3 + 1;
    do {
      if ((short)*puVar4 == *(short *)((longlong)param_3 + uVar6 * 2 + 8)) {
        *param_3 = uVar6;
        return 0;
      }
      uVar5 = uVar5 + 1;
      puVar4 = (ulonglong *)((longlong)puVar4 + 2);
    } while (uVar5 < uVar6);
  }
  return 1;
}

// FUN_14f6712b0 @ 14f6712b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6712b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = ssl_md(*(undefined4 *)(param_1 + 0x10));
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (lVar2 == 0) {
    if (*(short *)(param_1 + 8) != 0x807) {
      iVar1 = 0;
      if (*(short *)(param_1 + 8) == 0x808) {
        iVar1 = 0xe0;
      }
      return iVar1;
    }
    return 0x80;
  }
  iVar1 = EVP_MD_size(lVar2);
  return iVar1 << 2;
}

// FUN_14f671360 @ 14f671360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f671360(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f671380 @ 14f671380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f671380(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6713a0 @ 14f6713a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6713a0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6713c0 @ 14f6713c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6713c0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6713e0 @ 14f6713e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6713e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f671400 @ 14f671400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f671400(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f671420 @ 14f671420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f671420(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = X509_get_issuer_name(param_2);
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_1);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_1,iVar4);
      iVar1 = X509_NAME_cmp(uVar2,uVar3);
      if (iVar1 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar4 < iVar1);
  }
  return 0;
}

// ssl_cipher_disabled @ 14f6714b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl_cipher_disabled(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((((*(uint *)(lVar1 + 0x334) & *(uint *)(param_2 + 0x1c)) == 0) &&
      ((*(uint *)(param_2 + 0x20) & *(uint *)(lVar1 + 0x338)) == 0)) &&
     (iVar3 = *(int *)(lVar1 + 0x340), iVar3 != 0)) {
    uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8;
    if (uVar4 == 0) {
      iVar2 = *(int *)(param_2 + 0x2c);
      if (((iVar2 == 0x301) && (param_4 != 0)) && ((*(uint *)(param_2 + 0x1c) & 0x84) != 0)) {
        iVar2 = 0x300;
      }
      if (iVar3 < iVar2) {
        return true;
      }
      if (*(int *)(param_2 + 0x30) < *(int *)(lVar1 + 0x33c)) {
        return true;
      }
    }
    if (uVar4 == 0) {
LAB_14f671593:
      iVar3 = ssl_security(param_1,param_3,*(undefined4 *)(param_2 + 0x44),0,param_2,0x14f6714c5);
      return iVar3 == 0;
    }
    iVar2 = *(int *)(param_2 + 0x34);
    if (iVar2 == 0x100) {
      iVar2 = 0xff00;
    }
    if (iVar3 == 0x100) {
      iVar3 = 0xff00;
    }
    if (iVar3 <= iVar2) {
      iVar3 = *(int *)(param_2 + 0x38);
      iVar2 = *(int *)(lVar1 + 0x33c);
      if (iVar3 == 0x100) {
        iVar3 = 0xff00;
      }
      if (iVar2 == 0x100) {
        iVar2 = 0xff00;
      }
      if (iVar3 <= iVar2) goto LAB_14f671593;
    }
  }
  return true;
}

// ssl_get_auto_dh @ 14f6715e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_get_auto_dh(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = 0x50;
  if (*(int *)(*(longlong *)(param_1 + 0x488) + 0x18) != 2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if ((*(byte *)(lVar3 + 0x20) & 0x14) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
      if (lVar3 == 0) {
        return 0;
      }
      iVar2 = EVP_PKEY_security_bits(*(undefined8 *)(lVar3 + 8));
    }
    else {
      iVar2 = 0x80;
      if (*(int *)(lVar3 + 0x44) != 0x100) {
        iVar2 = 0x50;
      }
    }
  }
  lVar3 = DH_new();
  if (lVar3 != 0) {
    lVar4 = BN_new();
    if ((lVar4 == 0) || (iVar1 = BN_set_word(lVar4,2), iVar1 == 0)) {
      DH_free(lVar3);
    }
    else {
      iVar1 = ssl_get_security_level_bits(param_1,0,0);
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      if (iVar2 < 0xc0) {
        if (iVar2 < 0x98) {
          if (iVar2 < 0x80) {
            if (iVar2 < 0x70) {
              lVar5 = BN_get_rfc2409_prime_1024(0);
            }
            else {
              lVar5 = BN_get_rfc3526_prime_2048();
            }
          }
          else {
            lVar5 = BN_get_rfc3526_prime_3072();
          }
        }
        else {
          lVar5 = BN_get_rfc3526_prime_4096();
        }
      }
      else {
        lVar5 = BN_get_rfc3526_prime_8192();
      }
      if ((lVar5 != 0) && (iVar2 = DH_set0_pqg(lVar3,lVar5,0,lVar4), iVar2 != 0)) {
        return lVar3;
      }
      DH_free(lVar3);
      BN_free(lVar5);
    }
    BN_free(lVar4);
    return 0;
  }
  return 0;
}

// ssl_security_cert @ 14f671790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_security_cert(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0x1000;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  if (param_5 == 0) {
    iVar1 = FUN_14f671970();
    if (iVar1 == 0) {
      return 0x18d;
    }
  }
  else {
    iVar1 = FUN_14f671970();
    if (iVar1 == 0) {
      return 399;
    }
  }
  iVar1 = FUN_14f671a00(param_1,param_2,param_3,uVar3 | 0x60012);
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = 0x18e;
  }
  return uVar2;
}

// ssl_security_cert_chain @ 14f671840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ssl_security_cert_chain(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    param_3 = OPENSSL_sk_value(param_2,0);
    if (param_3 == 0) {
      return 0x44;
    }
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  uVar5 = 0x1000;
  if (param_4 == 0) {
    uVar5 = 0;
  }
  iVar1 = FUN_14f671970(param_1,0,param_3,uVar5 | 0x60010);
  if (iVar1 == 0) {
    uVar2 = 399;
  }
  else {
    iVar1 = FUN_14f671a00(param_1,0,param_3,uVar5 | 0x60012);
    if (iVar1 == 0) {
LAB_14f6718e4:
      uVar2 = 0x18e;
    }
    else {
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar4 < iVar1) {
        do {
          uVar3 = OPENSSL_sk_value(param_2,iVar4);
          iVar1 = FUN_14f671970(param_1,0,uVar3,uVar5 | 0x60011);
          if (iVar1 == 0) {
            return 0x18d;
          }
          iVar1 = FUN_14f671a00(param_1,0,uVar3,uVar5 | 0x60012);
          if (iVar1 == 0) goto LAB_14f6718e4;
          iVar4 = iVar4 + 1;
          iVar1 = OPENSSL_sk_num(param_2);
        } while (iVar4 < iVar1);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

// FUN_14f671970 @ 14f671970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f671970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f671990;
  uVar1 = 0xffffffff;
  lVar2 = X509_get0_pubkey(param_3);
  if (lVar2 != 0) {
    uVar1 = EVP_PKEY_security_bits(lVar2);
  }
  if (param_1 == 0) {
    ssl_ctx_security(param_2,param_4,uVar1,0,param_3,uVar3);
  }
  else {
    ssl_security(param_1);
  }
  return;
}

// FUN_14f671a00 @ 14f671a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f671a00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_18;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0x14f671a1a;
  uVar1 = X509_get_extension_flags(param_3);
  if ((uVar1 >> 0xd & 1) == 0) {
    iVar2 = X509_get_signature_info(param_3,&local_14,&local_10,&local_18,0);
    if (iVar2 == 0) {
      local_18 = 0xffffffff;
    }
    if (local_14 == 0) {
      local_14 = (int)local_10;
    }
    if (param_1 == 0) {
      uVar3 = ssl_ctx_security(param_2,param_4,local_18,local_14,param_3);
    }
    else {
      uVar3 = ssl_security(param_1);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

// ssl_set_client_disabled @ 14f671ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_set_client_disabled(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x338) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x334) = 0;
  ssl_set_sig_mask(*(longlong *)(param_1 + 0xa8) + 0x338,param_1,0x5000e);
  iVar2 = ssl_get_min_max_version
                    (param_1,*(longlong *)(param_1 + 0xa8) + 0x33c,
                     *(longlong *)(param_1 + 0xa8) + 0x340,0);
  if (iVar2 != 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x578) == 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x338);
    *puVar1 = *puVar1 | 0x10;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x334);
    *puVar1 = *puVar1 | 0x1c8;
  }
  if ((*(byte *)(param_1 + 0x824) & 0x20) == 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x338);
    *puVar1 = *puVar1 | 0x40;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x334);
    *puVar1 = *puVar1 | 0x20;
  }
  return 1;
}

// ssl_set_sig_mask @ 14f671ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_set_sig_mask(uint *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined **ppuVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  
  lVar6 = *(longlong *)(param_2 + 0x488);
  uVar8 = 0xb;
  uVar1 = *(uint *)(lVar6 + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    psVar7 = &DAT_15347d374;
    lVar6 = 1;
  }
  else {
    if (uVar1 == 0x20000) {
      psVar7 = &DAT_15347d376;
      lVar6 = 1;
      goto LAB_14f671c70;
    }
    if (uVar1 == 0x30000) {
      psVar7 = &DAT_15347d374;
      lVar6 = 2;
      goto LAB_14f671c70;
    }
    if ((*(int *)(param_2 + 0x38) == 1) &&
       (psVar7 = *(short **)(lVar6 + 0x1a8), psVar7 != (short *)0x0)) {
      lVar6 = *(longlong *)(lVar6 + 0x1b0);
    }
    else {
      psVar7 = *(short **)(lVar6 + 0x198);
      if (psVar7 == (short *)0x0) {
        psVar7 = &DAT_15347d340;
        lVar6 = 0x1a;
        goto LAB_14f671c70;
      }
      lVar6 = *(longlong *)(lVar6 + 0x1a0);
    }
  }
  if (lVar6 == 0) {
    *param_1 = *param_1 | 0xb;
    return;
  }
LAB_14f671c70:
  do {
    ppuVar5 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
    uVar3 = 0;
    do {
      if (*(short *)(ppuVar5 + 1) == *psVar7) {
        lVar4 = ssl_cert_lookup_by_idx((longlong)*(int *)(ppuVar5 + 3));
        if (((lVar4 != 0) && ((*(uint *)(lVar4 + 4) & uVar8) != 0)) &&
           (iVar2 = FUN_14f672480(param_2,param_3,ppuVar5), iVar2 != 0)) {
          uVar8 = uVar8 & ~*(uint *)(lVar4 + 4);
        }
        break;
      }
      uVar3 = uVar3 + 1;
      ppuVar5 = ppuVar5 + 5;
    } while (uVar3 < 0x1a);
    psVar7 = psVar7 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      *param_1 = *param_1 | uVar8;
      return;
    }
  } while( true );
}

// tls12_check_peer_sigalg @ 14f671d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls12_check_peer_sigalg(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  short *psVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined4 uVar14;
  int local_28 [2];
  short *local_20;
  
  local_20 = (short *)0x14f671d23;
  sVar7 = (short)param_2;
  iVar3 = EVP_PKEY_id(param_3);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  piVar1 = *(int **)(param_1 + 8);
  uVar8 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
  if (((uVar8 == 0) && (0x303 < *piVar1)) && (*piVar1 != 0x10000)) {
    if (iVar3 == 0x74) {
      ossl_statem_fatal(param_1,0x2f,0x14d,0x172,"ssl\\t1_lib.c",0x411);
      return 0;
    }
    if (iVar3 == 6) {
      iVar3 = 0x390;
    }
  }
  ppuVar11 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
  uVar13 = 0;
  uVar5 = uVar13;
  do {
    if (*(short *)(ppuVar11 + 1) == sVar7) {
      if ((((uVar8 == 0) && (0x303 < *piVar1)) &&
          ((*piVar1 != 0x10000 &&
           ((*(int *)((longlong)ppuVar11 + 0xc) == 0x40 ||
            (*(int *)((longlong)ppuVar11 + 0xc) == 0x2a3)))))) ||
         ((iVar3 != *(int *)((longlong)ppuVar11 + 0x14) &&
          ((*(int *)((longlong)ppuVar11 + 0x14) != 0x390 || (iVar3 != 6)))))) {
        uVar14 = 0x422;
        goto LAB_14f6720c1;
      }
      uVar14 = EVP_PKEY_id(param_3);
      iVar4 = ssl_cert_lookup_by_nid(uVar14,local_28);
      if ((iVar4 == 0) || (*(int *)(ppuVar11 + 3) != local_28[0])) {
        uVar14 = 0x429;
        goto LAB_14f6720c1;
      }
      if (iVar3 == 0x198) {
        iVar3 = FUN_14f672ff0(param_1,param_3);
        if (iVar3 == 0) {
          uVar14 = 0x434;
          uVar12 = 0xa2;
          goto LAB_14f6720c7;
        }
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
             (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) ||
           ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0)) {
          uVar12 = EVP_PKEY_get0_EC_KEY(param_3);
          uVar12 = EC_KEY_get0_group(uVar12);
          iVar3 = EC_GROUP_get_curve_name(uVar12);
          if ((*(int *)(ppuVar11 + 4) != 0) && (iVar3 != *(int *)(ppuVar11 + 4))) {
            uVar14 = 0x43f;
            uVar12 = 0x17a;
            goto LAB_14f6720c7;
          }
        }
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
            (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
          uVar2 = FUN_14f673320(param_3);
          iVar3 = tls1_check_group_id(param_1,uVar2,1);
          if (iVar3 == 0) {
            uVar14 = 0x447;
            uVar12 = 0x17a;
            goto LAB_14f6720c7;
          }
          if (((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) &&
             ((sVar7 - 0x403U & 0xfeff) != 0)) {
            uVar14 = 0x450;
            uVar9 = 0x28;
            uVar12 = 0x172;
            goto LAB_14f6720cc;
          }
        }
      }
      else if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) {
        uVar14 = 0x457;
        uVar9 = 0x28;
        uVar12 = 0x172;
        goto LAB_14f6720cc;
      }
      uVar6 = tls12_get_psigalgs(param_1,1,&local_20);
      uVar5 = uVar13;
      psVar10 = local_20;
      if (uVar6 == 0) goto LAB_14f671fe1;
      goto LAB_14f671fd0;
    }
    uVar5 = uVar5 + 1;
    ppuVar11 = ppuVar11 + 5;
  } while (uVar5 < 0x1a);
  uVar14 = 0x422;
LAB_14f6720c1:
  uVar12 = 0x172;
LAB_14f6720c7:
  uVar9 = 0x2f;
  goto LAB_14f6720cc;
  while( true ) {
    uVar5 = uVar5 + 1;
    psVar10 = psVar10 + 1;
    if (uVar6 <= uVar5) break;
LAB_14f671fd0:
    if (sVar7 == *psVar10) break;
  }
LAB_14f671fe1:
  if ((uVar5 == uVar6) &&
     ((*(int *)((longlong)ppuVar11 + 0xc) != 0x40 ||
      ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30001) != 0)))) {
    uVar14 = 0x466;
    uVar9 = 0x28;
    uVar12 = 0x172;
  }
  else {
    uVar5 = uVar13;
    if ((*(int *)((longlong)ppuVar11 + 0xc) == 0) ||
       (uVar5 = ssl_md(*(undefined4 *)(ppuVar11 + 2)), uVar5 != 0)) {
      local_res21 = (undefined1)param_2;
      local_res20 = (undefined1)((ulonglong)param_2 >> 8);
      iVar3 = FUN_14f6712b0(ppuVar11);
      if (iVar3 != 0) {
        if (uVar5 != 0) {
          uVar8 = EVP_MD_type(uVar5);
          uVar13 = (ulonglong)uVar8;
        }
        iVar3 = ssl_security(param_1,0x5000d,iVar3,uVar13,&local_res20);
        if (iVar3 != 0) {
          *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x308) = ppuVar11;
          return 1;
        }
      }
      uVar14 = 0x47a;
      uVar9 = 0x28;
      uVar12 = 0x172;
    }
    else {
      uVar14 = 0x46b;
      uVar9 = 0x28;
      uVar12 = 0x170;
    }
  }
LAB_14f6720cc:
  ossl_statem_fatal(param_1,uVar9,0x14d,uVar12,"ssl\\t1_lib.c",uVar14);
  return 0;
}

// tls12_copy_sigalgs @ 14f672110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int tls12_copy_sigalgs(longlong param_1,undefined8 param_2,short *param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f672132;
  iVar5 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = 0;
      ppuVar3 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
      do {
        if (*(short *)(ppuVar3 + 1) == *param_3) goto LAB_14f67217d;
        uVar2 = uVar2 + 1;
        ppuVar3 = ppuVar3 + 5;
      } while (uVar2 < 0x1a);
      ppuVar3 = (undefined **)0x0;
LAB_14f67217d:
      iVar1 = FUN_14f672480(param_1,0x5000b,ppuVar3);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,*param_3,2);
        if (iVar1 == 0) {
          return 0;
        }
        if ((iVar5 == 0) &&
           (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
              (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
            (((*(int *)((longlong)ppuVar3 + 0x14) != 6 &&
              (*(int *)((longlong)ppuVar3 + 0xc) != 0x40)) &&
             (*(int *)((longlong)ppuVar3 + 0xc) != 0x2a3)))))) {
          iVar5 = 1;
        }
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 < param_4);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  ERR_put_error(0x14,0x215,0x76,"ssl\\t1_lib.c",0x6b8,uVar6);
  return 0;
}

// FUN_14f672250 @ 14f672250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f672250(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  piVar4 = (int *)ssl_cert_lookup_by_idx((longlong)iVar1);
  if (piVar4 != (int *)0x0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if (((piVar4[1] & *(uint *)(lVar2 + 0x20)) != 0) &&
       ((*piVar4 != 0x390 || ((*(byte *)(lVar2 + 0x1c) & 1) == 0)))) {
      iVar3 = -1;
      if ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x310 + (longlong)iVar1 * 4) & 1) != 0) {
        iVar3 = iVar1;
      }
      return iVar3;
    }
  }
  return -1;
}

// tls12_get_psigalgs @ 14f6722e0

undefined8 tls12_get_psigalgs(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  uVar2 = *(uint *)(lVar1 + 0x1c) & 0x30000;
  if (uVar2 == 0x10000) {
    *param_3 = (longlong)&DAT_15347d374;
    return 1;
  }
  if (uVar2 == 0x20000) {
    *param_3 = (longlong)&DAT_15347d376;
    return 1;
  }
  if (uVar2 == 0x30000) {
    *param_3 = (longlong)&DAT_15347d374;
    return 2;
  }
  if ((*(int *)(param_1 + 0x38) == param_2) && (*(longlong *)(lVar1 + 0x1a8) != 0)) {
    *param_3 = *(longlong *)(lVar1 + 0x1a8);
    return *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1b0);
  }
  if (*(longlong *)(lVar1 + 0x198) != 0) {
    *param_3 = *(longlong *)(lVar1 + 0x198);
    return *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1a0);
  }
  *param_3 = (longlong)&DAT_15347d340;
  return 0x1a;
}

// FUN_14f672390 @ 14f672390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f672390(undefined8 param_1,undefined8 *param_2,short *param_3,longlong param_4,
                      short *param_5,ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  short *psVar3;
  undefined **ppuVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    if (param_4 == 0) {
      return lVar5;
    }
    ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
    uVar2 = 0;
    do {
      if (*(short *)(ppuVar4 + 1) == *param_3) goto LAB_14f672405;
      uVar2 = uVar2 + 1;
      ppuVar4 = ppuVar4 + 5;
    } while (uVar2 < 0x1a);
    ppuVar4 = (undefined **)0x0;
LAB_14f672405:
    iVar1 = FUN_14f672480(param_1,0x5000c,ppuVar4);
    if ((iVar1 != 0) && (uVar2 = 0, param_6 != 0)) {
      psVar3 = param_5;
      do {
        if (*param_3 == *psVar3) {
          lVar5 = lVar5 + 1;
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = ppuVar4;
            param_2 = param_2 + 1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (uVar2 < param_6);
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  } while( true );
}

// FUN_14f672480 @ 14f672480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f672480(longlong param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_res18;
  undefined1 local_res19;
  
  if ((param_3 != 0) &&
     ((*(int *)(param_3 + 0xc) == 0 || (lVar5 = ssl_md(*(undefined4 *)(param_3 + 0x10)), lVar5 != 0)
      ))) {
    uVar8 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
    if (((uVar8 != 0) ||
        (((iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304 || (iVar1 == 0x10000)) ||
         (*(int *)(param_3 + 0x14) != 0x74)))) &&
       (((((*(int *)(param_1 + 0x38) != 0 || (uVar8 != 0)) ||
          (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x33c) < 0x304)) ||
         (((*(int *)(param_3 + 0x14) != 0x74 && (1 < *(uint *)(param_3 + 0x10))) &&
          (*(uint *)(param_3 + 0x10) != 10)))) &&
        (iVar1 = ssl_cert_is_disabled((longlong)*(int *)(param_3 + 0x18)), iVar1 == 0)))) {
      if ((*(int *)(param_3 + 0x14) - 0x3d3U < 2) || (*(int *)(param_3 + 0x14) == 0x32b)) {
        if (*(int *)(param_1 + 0x38) != 0) {
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
            return 0;
          }
          if (*(int *)(param_1 + 0x38) != 0) goto LAB_14f67263e;
        }
        if ((**(int **)(param_1 + 8) == 0x10000) &&
           (0x303 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340))) {
          if (0x303 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x33c)) {
            return 0;
          }
          lVar5 = SSL_get_ciphers(param_1);
          iVar1 = 0;
          if (lVar5 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = OPENSSL_sk_num(lVar5);
          }
          if (0 < iVar2) {
            do {
              lVar6 = OPENSSL_sk_value(lVar5,iVar1);
              iVar3 = ssl_cipher_disabled(param_1,lVar6,0x10001,0);
              if ((iVar3 == 0) && ((*(byte *)(lVar6 + 0x1c) & 0x10) != 0)) break;
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
          }
          if (iVar1 == iVar2) {
            return 0;
          }
        }
      }
LAB_14f67263e:
      uVar4 = FUN_14f6712b0(param_3);
      local_res18 = *(undefined1 *)(param_3 + 9);
      local_res19 = *(undefined1 *)(param_3 + 8);
      uVar7 = ssl_security(param_1,param_2,uVar4,*(undefined4 *)(param_3 + 0xc),&local_res18);
      return uVar7;
    }
  }
  return 0;
}

// FUN_14f672690 @ 14f672690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f672690(longlong param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar3 = X509_get0_pubkey(param_2);
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = EVP_PKEY_id(lVar3);
  if (iVar2 == 0x198) {
    iVar2 = FUN_14f672ff0(param_1,lVar3);
    if (iVar2 == 0) {
      return 0;
    }
    sVar1 = FUN_14f673320(lVar3);
    uVar5 = 0;
    iVar2 = tls1_check_group_id(param_1,sVar1,*(int *)(param_1 + 0x38) == 0);
    if (iVar2 != 0) {
      if ((param_3 == 0) || ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) == 0)) {
        return 1;
      }
      if (sVar1 == 0x17) {
        iVar2 = 0x31a;
      }
      else {
        if (sVar1 != 0x18) {
          return 0;
        }
        iVar2 = 0x31b;
      }
      if (*(ulonglong *)(param_1 + 6000) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x1768);
        do {
          if (iVar2 == *(int *)(*plVar4 + 0x1c)) {
            return 1;
          }
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 6000));
      }
    }
    return 0;
  }
  return 1;
}

// tls1_check_chain @ 14f6727b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint tls1_check_chain(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                     uint param_5)

{
  longlong *plVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  short *psVar18;
  char cVar19;
  uint uVar20;
  uint local_res8;
  longlong local_res18;
  uint *local_48;
  undefined8 local_40;
  
  local_40 = 0x14f6727d4;
  plVar1 = *(longlong **)(param_1 + 0x488);
  uVar14 = 0;
  local_res8 = 0;
  uVar5 = 0;
  uVar20 = *(uint *)((longlong)plVar1 + 0x1c) & 0x30000;
  if (param_5 == -1) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    lVar8 = ssl_cert_lookup_by_pkey(param_3,&local_40);
    if (lVar8 == 0) {
      return 0;
    }
    iVar6 = (int)local_40;
    param_5 = 1;
    local_48 = (uint *)(*(longlong *)(param_1 + 0xa8) + ((longlong)iVar6 + 0xc4) * 4);
    local_res8 = 0x6f0;
    local_res18 = param_3;
    if ((*(uint *)((longlong)plVar1 + 0x1c) & 0x30001) == 0) {
      local_res8 = 0x50;
    }
  }
  else {
    if (param_5 == -2) {
      plVar17 = (longlong *)*plVar1;
      iVar6 = (int)(((longlong)plVar17 + (-0x20 - (longlong)plVar1)) / 0x28);
    }
    else {
      plVar17 = plVar1 + (longlong)(int)param_5 * 5 + 4;
      iVar6 = param_5;
    }
    param_4 = plVar17[2];
    param_5 = *(uint *)((longlong)plVar1 + 0x1c) & 0x30001;
    local_48 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x310 + (longlong)iVar6 * 4);
    local_res18 = plVar17[1];
    param_2 = *plVar17;
    uVar16 = 0;
    uVar3 = uVar5;
    if ((param_2 == 0) || (uVar16 = uVar5, local_res18 == 0)) goto LAB_14f672d60;
  }
  uVar13 = 0;
  if (uVar20 != 0) {
    uVar3 = local_res8 | 0x800;
    if (local_res8 == 0) {
      uVar3 = local_res8;
    }
    iVar4 = X509_chain_check_suiteb(0,param_2,param_4,uVar20);
    local_res8 = uVar3;
    if (iVar4 == 0) {
      uVar13 = 0x800;
    }
    else {
      uVar16 = uVar5;
      uVar13 = 0;
      if (uVar3 == 0) goto LAB_14f672d60;
    }
  }
  uVar20 = SSL_version(param_1);
  uVar3 = local_res8;
  if ((((uVar20 & 0xffffff00) == 0x300) && (iVar4 = SSL_version(param_1), 0x302 < iVar4)) &&
     (param_5 != 0)) {
    uVar16 = uVar13;
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) == 0)) {
      switch(iVar6) {
      case 0:
        iVar6 = 6;
        uVar5 = 0x41;
        break;
      default:
        uVar5 = 0xffffffff;
        goto LAB_14f672a9e;
      case 2:
        iVar6 = 0x74;
        uVar5 = 0x71;
        break;
      case 3:
        iVar6 = 0x198;
        uVar5 = 0x1a0;
        break;
      case 4:
        iVar6 = 0x32b;
        uVar5 = 0x327;
        break;
      case 5:
        iVar6 = 0x3d3;
        uVar5 = 0x3d9;
        break;
      case 6:
        iVar6 = 0x3d4;
        uVar5 = 0x3da;
      }
      psVar18 = (short *)plVar1[0x33];
      if (psVar18 != (short *)0x0) {
        uVar15 = plVar1[0x34];
        uVar12 = uVar14;
        if (uVar15 != 0) {
          do {
            ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
            uVar10 = uVar14;
            do {
              if (*(short *)(ppuVar7 + 1) == *psVar18) {
                if ((*(int *)((longlong)ppuVar7 + 0xc) == 0x40) &&
                   (*(int *)((longlong)ppuVar7 + 0x14) == iVar6)) goto LAB_14f672a7d;
                break;
              }
              uVar10 = uVar10 + 1;
              ppuVar7 = ppuVar7 + 5;
            } while (uVar10 < 0x1a);
            uVar12 = uVar12 + 1;
            psVar18 = psVar18 + 1;
          } while (uVar12 < uVar15);
        }
LAB_14f672a7d:
        if (uVar12 == uVar15) {
joined_r0x00014f672a8a:
          uVar20 = uVar13;
          if (local_res8 == 0) goto LAB_14f672d60;
          goto LAB_14f672b5d;
        }
      }
    }
LAB_14f672a9e:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar6 = **(int **)(param_1 + 8), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
      lVar8 = FUN_14f670b80(param_1,param_2,local_res18);
      if (lVar8 != 0) {
LAB_14f672ade:
        uVar13 = uVar13 | 0x10;
      }
    }
    else {
      iVar6 = FUN_14f6730f0(param_1,param_2,uVar5);
      if (iVar6 != 0) goto LAB_14f672ade;
      if (local_res8 == 0) goto LAB_14f672d60;
    }
    uVar20 = uVar13 | 0x20;
    iVar6 = OPENSSL_sk_num(param_4);
    uVar15 = uVar14;
    if (0 < iVar6) {
      do {
        uVar9 = OPENSSL_sk_value(param_4,uVar15);
        iVar6 = FUN_14f6730f0(param_1,uVar9,uVar5);
        uVar16 = uVar20;
        if (iVar6 == 0) goto joined_r0x00014f672a8a;
        uVar16 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar16;
        iVar6 = OPENSSL_sk_num(param_4);
      } while ((int)uVar16 < iVar6);
    }
  }
  else {
    uVar20 = uVar13;
    if (local_res8 != 0) {
      uVar20 = uVar13 | 0x30;
    }
  }
LAB_14f672b5d:
  iVar6 = FUN_14f672690(param_1,param_2,1);
  if (iVar6 == 0) {
    uVar16 = uVar20;
    if (local_res8 == 0) goto LAB_14f672d60;
  }
  else {
    uVar20 = uVar20 | 0x40;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = uVar20 | 0x80;
  }
  else {
    uVar5 = uVar20;
    if (param_5 != 0) {
      uVar5 = uVar20 | 0x80;
      iVar6 = OPENSSL_sk_num(param_4);
      uVar15 = uVar14;
      if (0 < iVar6) {
        do {
          uVar9 = OPENSSL_sk_value(param_4,uVar15);
          lVar8 = X509_get0_pubkey(uVar9);
          if (lVar8 == 0) {
LAB_14f672c1f:
            uVar16 = uVar5;
            uVar5 = uVar20;
            if (local_res8 == 0) goto LAB_14f672d60;
            break;
          }
          iVar6 = EVP_PKEY_id(lVar8);
          if (iVar6 == 0x198) {
            iVar6 = FUN_14f672ff0(param_1,lVar8);
            if (iVar6 != 0) {
              uVar2 = FUN_14f673320(lVar8);
              iVar6 = tls1_check_group_id(param_1,uVar2,*(int *)(param_1 + 0x38) == 0);
              if (iVar6 != 0) goto LAB_14f672c0f;
            }
            goto LAB_14f672c1f;
          }
LAB_14f672c0f:
          uVar16 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar16;
          iVar6 = OPENSSL_sk_num(param_4);
        } while ((int)uVar16 < iVar6);
      }
    }
  }
  if ((*(int *)(param_1 + 0x38) == 0) && (param_5 != 0)) {
    iVar6 = EVP_PKEY_id(local_res18);
    if (iVar6 == 6) {
      cVar19 = '\x01';
LAB_14f672c84:
      uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 600);
      pcVar11 = *(char **)(*(longlong *)(param_1 + 0xa8) + 0x250);
      if (uVar15 != 0) {
        uVar12 = 0;
        do {
          if (*pcVar11 == cVar19) {
            uVar5 = uVar5 | 0x400;
            break;
          }
          pcVar11 = pcVar11 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar15);
      }
      if (((uVar5 >> 10 & 1) == 0) && (uVar16 = uVar5, local_res8 == 0)) goto LAB_14f672d60;
    }
    else {
      if (iVar6 == 0x74) {
        cVar19 = '\x02';
        goto LAB_14f672c84;
      }
      if (iVar6 == 0x198) {
        cVar19 = '@';
        goto LAB_14f672c84;
      }
      uVar5 = uVar5 | 0x400;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260);
    if (((lVar8 == 0) || (iVar6 = OPENSSL_sk_num(lVar8), iVar6 == 0)) ||
       (iVar6 = FUN_14f671420(lVar8,param_2), iVar6 != 0)) {
LAB_14f672d2f:
      uVar5 = uVar5 | 0x200;
    }
    else {
      iVar6 = OPENSSL_sk_num(param_4);
      if (0 < iVar6) {
        do {
          uVar9 = OPENSSL_sk_value(param_4,uVar14);
          iVar6 = FUN_14f671420(lVar8,uVar9);
          if (iVar6 != 0) goto LAB_14f672d2f;
          uVar20 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar20;
          iVar6 = OPENSSL_sk_num(param_4);
        } while ((int)uVar20 < iVar6);
      }
    }
    if (local_res8 == 0) {
      uVar16 = uVar5;
      if ((uVar5 >> 9 & 1) != 0) {
        uVar16 = uVar5 | 1;
      }
      goto LAB_14f672d60;
    }
LAB_14f672d4e:
    uVar16 = uVar5;
    if ((local_res8 & uVar5) != local_res8) goto LAB_14f672d60;
  }
  else {
    uVar5 = uVar5 | 0x600;
    if (local_res8 != 0) goto LAB_14f672d4e;
  }
  uVar16 = uVar5 | 1;
LAB_14f672d60:
  uVar5 = SSL_version(param_1);
  if (((uVar5 & 0xffffff00) == 0x300) && (iVar6 = SSL_version(param_1), 0x302 < iVar6)) {
    uVar5 = *local_48 & 0x102;
  }
  else {
    uVar5 = 0x102;
  }
  uVar5 = uVar5 | uVar16;
  if (uVar3 == 0) {
    if ((uVar16 & 1) == 0) {
      *local_48 = *local_48 & 0x102;
      return 0;
    }
    *local_48 = uVar5;
    return uVar5;
  }
  return uVar5;
}

// tls1_check_ec_tmp_key @ 14f672df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls1_check_ec_tmp_key(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  ulonglong uVar2;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) == 0) {
    sVar1 = tls1_shared_group(param_1,0,param_3,param_4,0x14f672dfa);
    return (ulonglong)(sVar1 != 0);
  }
  if (param_2 == 0x300c02b) {
    uVar2 = tls1_check_group_id(param_1,0x17,1);
    return uVar2;
  }
  if (param_2 == 0x300c02c) {
    uVar2 = tls1_check_group_id(param_1,0x18,1);
    return uVar2;
  }
  return 0;
}

// tls1_check_group_id @ 14f672e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_check_group_id(longlong param_1,short param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if ((uVar4 != 0) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar1 != 0)) {
    iVar2 = *(int *)(lVar1 + 0x18);
    if (iVar2 == 0x300c02b) {
      if (param_2 != 0x17) {
        return 0;
      }
    }
    else {
      if (iVar2 != 0x300c02c) {
        return 0;
      }
      if (param_2 != 0x18) {
        return 0;
      }
    }
  }
  uVar7 = 1;
  if (param_3 == 0) goto LAB_14f672f87;
  if (uVar4 == 0x10000) {
    puVar5 = &DAT_15347d33c;
    uVar6 = 1;
LAB_14f672f60:
    uVar3 = 0;
    if (uVar6 == 0) {
      return 0;
    }
  }
  else if (uVar4 == 0x20000) {
    puVar5 = &DAT_15347d33e;
    uVar6 = 1;
    uVar3 = 0;
  }
  else if (uVar4 == 0x30000) {
    puVar5 = &DAT_15347d33c;
    uVar6 = 2;
    uVar3 = 0;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x6a8);
    if (puVar5 != (undefined2 *)0x0) {
      uVar6 = *(ulonglong *)(param_1 + 0x6a0);
      goto LAB_14f672f60;
    }
    puVar5 = &DAT_15347d330;
    uVar3 = 0;
    uVar6 = 5;
  }
  while (puVar5[uVar3] != param_2) {
    uVar3 = uVar3 + 1;
    if (uVar6 <= uVar3) {
      return 0;
    }
  }
LAB_14f672f87:
  iVar2 = tls_curve_allowed(param_1,param_2,0x20006);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar6 = *(ulonglong *)(param_1 + 0x6b0);
    if (uVar6 != 0) {
      uVar3 = 0;
      if (uVar6 != 0) {
        do {
          if (*(short *)(*(longlong *)(param_1 + 0x6b8) + uVar3 * 2) == param_2) {
            return 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
      }
      uVar7 = 0;
    }
  }
  return uVar7;
}

// FUN_14f672ff0 @ 14f672ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f672ff0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  
  iVar1 = EVP_PKEY_id(param_2);
  if (iVar1 != 0x198) {
    return 1;
  }
  uVar2 = EVP_PKEY_get0_EC_KEY(param_2);
  uVar2 = EC_KEY_get0_group(uVar2);
  iVar1 = EC_KEY_get_conv_form();
  if (iVar1 == 4) {
    cVar4 = '\0';
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
      return 1;
    }
    uVar2 = EC_GROUP_method_of(uVar2);
    iVar1 = EC_METHOD_get_field_type(uVar2);
    if (iVar1 == 0x196) {
      cVar4 = '\x01';
    }
    else {
      if (iVar1 != 0x197) {
        return 0;
      }
      cVar4 = '\x02';
    }
  }
  if (*(longlong *)(param_1 + 0x698) == 0) {
    return 1;
  }
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x690) != 0) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x698) + uVar3) == cVar4) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x690));
  }
  return 0;
}

// FUN_14f6730f0 @ 14f6730f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6730f0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  if (param_3 == -1) {
    return true;
  }
  iVar2 = X509_get_signature_nid(param_2);
  ppuVar8 = (undefined **)0x0;
  if (param_3 != 0) {
    return iVar2 == param_3;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
       (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) != 0)) {
    ppuVar9 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x300);
    ppuVar5 = (undefined **)0x1;
  }
  else {
    ppuVar9 = *(undefined ***)(param_1 + 6000);
    ppuVar5 = ppuVar8;
  }
  ppuVar7 = ppuVar8;
  if (ppuVar9 != (undefined **)0x0) {
    do {
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(*(longlong *)(param_1 + 0x1768) + (longlong)ppuVar7 * 8);
      }
      else {
        ppuVar3 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
        ppuVar6 = ppuVar8;
        do {
          ppuVar4 = ppuVar3;
          if (*(short *)(ppuVar3 + 1) ==
              *(short *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) +
                        (longlong)ppuVar7 * 2)) break;
          ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
          ppuVar3 = ppuVar3 + 5;
          ppuVar4 = ppuVar8;
        } while (ppuVar6 < (undefined **)0x1a);
      }
      if ((ppuVar4 != (undefined **)0x0) && (iVar2 == *(int *)((longlong)ppuVar4 + 0x1c))) {
        return true;
      }
      ppuVar7 = (undefined **)((longlong)ppuVar7 + 1);
    } while (ppuVar7 < ppuVar9);
  }
  return false;
}

// tls1_clear @ 14f673230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_clear(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ssl3_clear();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = **(int **)(param_1 + 2);
  if (**(int **)(param_1 + 2) == 0x10000) {
    iVar1 = 0x304;
  }
  *param_1 = iVar1;
  return 1;
}

// tls1_free @ 14f673290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls1_free(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x6c0),"ssl\\t1_lib.c",0x75);
  ssl3_free(param_1);
  return;
}

// tls1_get_formatlist @ 14f6732d0

void tls1_get_formatlist(longlong param_1,longlong *param_2,longlong *param_3)

{
  if (*(longlong *)(param_1 + 0x688) != 0) {
    *param_2 = *(longlong *)(param_1 + 0x688);
    *param_3 = *(longlong *)(param_1 + 0x680);
    return;
  }
  *param_2 = (longlong)&DAT_15347d328;
  *param_3 = 3 - (ulonglong)((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0);
  return;
}

// FUN_14f673320 @ 14f673320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f673320(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar3 = EVP_PKEY_get0_EC_KEY();
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = EC_KEY_get0_group(lVar3);
  iVar1 = EC_GROUP_get_curve_name(uVar4);
  iVar2 = 0;
  uVar5 = 0;
  do {
    if (*(int *)((longlong)&DAT_15347d1c0 + uVar5) == iVar1) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
    uVar5 = uVar5 + 0xc;
  } while (uVar5 < 0x168);
  return 0;
}

// FUN_14f673390 @ 14f673390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** FUN_14f673390(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  
  uVar4 = 0;
  uVar6 = param_2 & 0xffffffff;
  if ((int)param_2 == -1) {
    uVar6 = uVar4;
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar6 = ((**(longlong **)(param_1 + 0x488) - (longlong)*(longlong **)(param_1 + 0x488)) +
              -0x20) / 0x28;
    }
    else {
      while (lVar2 = ssl_cert_lookup_by_idx(uVar6),
            (*(uint *)(lVar2 + 4) &
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20)) == 0) {
        uVar6 = uVar6 + 1;
        if (8 < uVar6) {
          return (undefined **)0x0;
        }
      }
      if ((int)uVar6 == 4) {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) != 0x20) {
          uVar5 = 6;
          lVar2 = 6;
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x488) + 0x118);
          do {
            if (*plVar3 != 0) {
              uVar6 = (ulonglong)uVar5;
              goto LAB_14f673476;
            }
            uVar5 = uVar5 - 1;
            lVar2 = lVar2 + -1;
            plVar3 = plVar3 + -5;
          } while (3 < lVar2);
        }
        goto LAB_14f67347b;
      }
    }
  }
LAB_14f673476:
  if (8 < (uint)uVar6) {
    return (undefined **)0x0;
  }
LAB_14f67347b:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) &&
     ((int)uVar6 == 0)) {
    iVar1 = FUN_14f672480(param_1,0x5000b,&PTR_s_rsa_pkcs1_md5_sha1_15347d378);
    if (iVar1 == 0) {
      return (undefined **)0x0;
    }
    return &PTR_s_rsa_pkcs1_md5_sha1_15347d378;
  }
  ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
  while (*(short *)(ppuVar7 + 1) != *(short *)(&DAT_15347d7b0 + (longlong)(int)uVar6 * 2)) {
    uVar4 = uVar4 + 1;
    ppuVar7 = ppuVar7 + 5;
    if (0x19 < uVar4) {
      return (undefined **)0x0;
    }
  }
  if ((*(int *)((longlong)ppuVar7 + 0xc) != 0) &&
     (lVar2 = ssl_md(*(undefined4 *)(ppuVar7 + 2)), lVar2 == 0)) {
    return (undefined **)0x0;
  }
  iVar1 = FUN_14f672480(param_1,0x5000b,ppuVar7);
  if (iVar1 != 0) {
    return ppuVar7;
  }
  return (undefined **)0x0;
}

// tls1_get_supported_groups @ 14f673570

void tls1_get_supported_groups(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    *param_2 = (longlong)&DAT_15347d33c;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x20000) {
    *param_2 = (longlong)&DAT_15347d33e;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x30000) {
    *param_2 = (longlong)&DAT_15347d33c;
    *param_3 = 2;
    return;
  }
  if (*(longlong *)(param_1 + 0x6a8) == 0) {
    *param_2 = (longlong)&DAT_15347d330;
    *param_3 = 5;
    return;
  }
  *param_2 = *(longlong *)(param_1 + 0x6a8);
  *param_3 = *(undefined8 *)(param_1 + 0x6a0);
  return;
}

// tls1_group_id_lookup @ 14f673610

undefined4 * tls1_group_id_lookup(ushort param_1)

{
  if ((ushort)(param_1 - 1) < 0x1e) {
    return &DAT_15347d1c0 + (longlong)(int)(param_1 - 1) * 3;
  }
  return (undefined4 *)0x0;
}

// tls1_lookup_md @ 14f673670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_lookup_md(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = ssl_md(*(undefined4 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar1;
  }
  return 1;
}

// tls1_new @ 14f6736f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls1_new(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = ssl3_new();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
  return (ulonglong)(iVar1 != 0);
}

// tls1_process_sigalgs @ 14f673770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_process_sigalgs(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xa8);
  puVar5 = (undefined8 *)(lVar4 + 0x310);
  uVar2 = FUN_14f6740b0();
  if ((int)uVar2 != 0) {
    uVar3 = 0;
    *puVar5 = 0;
    *(undefined8 *)(lVar4 + 0x318) = 0;
    *(undefined8 *)(lVar4 + 800) = 0;
    *(undefined8 *)(lVar4 + 0x328) = 0;
    *(undefined4 *)(lVar4 + 0x330) = 0;
    if (*(longlong *)(param_1 + 6000) != 0) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1768) + uVar3 * 8);
        if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
              (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
            (*(int *)(lVar4 + 0x14) != 6)) &&
           ((lVar4 = (longlong)*(int *)(lVar4 + 0x18), *(int *)((longlong)puVar5 + lVar4 * 4) == 0
            && (iVar1 = ssl_cert_is_disabled(lVar4), iVar1 == 0)))) {
          *(undefined4 *)((longlong)puVar5 + lVar4 * 4) = 0x102;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulonglong *)(param_1 + 6000));
    }
    return 1;
  }
  return uVar2;
}

// tls1_save_sigalgs @ 14f673860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_save_sigalgs(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x488) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (param_3 != 0) {
    uVar2 = tls1_save_u16(param_2,lVar1 + 0x2f0,lVar1 + 0x300);
    return uVar2;
  }
  uVar2 = tls1_save_u16(param_2,lVar1 + 0x2e8,lVar1 + 0x2f8);
  return uVar2;
}

// tls1_save_u16 @ 14f6738e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_save_u16(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6738fb;
  uVar5 = param_1[1];
  if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
    uVar5 = uVar5 >> 1;
    lVar4 = CRYPTO_malloc(uVar5 * 2,"ssl\\t1_lib.c",0x713);
    if (lVar4 == 0) {
      ERR_put_error(0x14,0x274,0x41,"ssl\\t1_lib.c",0x714,uVar7);
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          if ((ulonglong)param_1[1] < 2) break;
          puVar3 = (undefined1 *)*param_1;
          uVar1 = *puVar3;
          uVar2 = puVar3[1];
          *param_1 = (longlong)(puVar3 + 2);
          param_1[1] = param_1[1] - 2;
          *(ushort *)(lVar4 + uVar6 * 2) = CONCAT11(uVar1,uVar2);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      if (uVar6 == uVar5) {
        CRYPTO_free(*param_2,"ssl\\t1_lib.c",0x71f);
        *param_2 = lVar4;
        *param_3 = uVar5;
        return 1;
      }
      CRYPTO_free(lVar4,"ssl\\t1_lib.c",0x71b);
    }
  }
  return 0;
}

// tls1_set_cert_validity @ 14f673a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls1_set_cert_validity(undefined8 param_1)

{
  tls1_check_chain(param_1,0,0,0,0,0x14f673a1c);
  tls1_check_chain(param_1,0,0,0,1);
  tls1_check_chain(param_1,0,0,0,2);
  tls1_check_chain(param_1,0,0,0,3);
  tls1_check_chain(param_1,0,0,0,4);
  tls1_check_chain(param_1,0,0,0,5);
  tls1_check_chain(param_1,0,0,0,6);
  tls1_check_chain(param_1,0,0,0,7);
  tls1_check_chain(param_1,0,0,0,8);
  return;
}

// tls1_set_groups @ 14f673b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_groups(longlong *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  short sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f673b2f;
  uVar8 = 0;
  if (param_4 == 0) {
    ERR_put_error(0x14,0x275,0x10f,"ssl\\t1_lib.c",0x15e,0x14f673b2f);
    uVar9 = 0;
  }
  else {
    lVar2 = CRYPTO_malloc(param_4 * 2,"ssl\\t1_lib.c",0x161);
    if (lVar2 == 0) {
      ERR_put_error(0x14,0x275,0x41,"ssl\\t1_lib.c",0x162,uVar9);
      uVar9 = 0;
    }
    else {
      uVar6 = uVar8;
      uVar7 = uVar8;
      if (param_4 != 0) {
        do {
          uVar3 = uVar8;
          uVar5 = uVar8;
          do {
            if (*(int *)((longlong)&DAT_15347d1c0 + uVar3) == *(int *)(param_3 + uVar7 * 4)) {
              sVar4 = (short)uVar5 + 1;
              goto LAB_14f673bfe;
            }
            uVar5 = uVar5 + 1;
            uVar3 = uVar3 + 0xc;
          } while (uVar3 < 0x168);
          sVar4 = 0;
LAB_14f673bfe:
          uVar1 = 1 << ((byte)sVar4 & 0x1f);
          if ((sVar4 == 0) || (((uint)uVar6 & uVar1) != 0)) {
            CRYPTO_free(lVar2,"ssl\\t1_lib.c",0x16c);
            return 0;
          }
          *(short *)(lVar2 + uVar7 * 2) = sVar4;
          uVar7 = uVar7 + 1;
          uVar6 = (ulonglong)((uint)uVar6 | uVar1);
        } while (uVar7 < param_4);
      }
      CRYPTO_free(*param_1,"ssl\\t1_lib.c",0x172);
      *param_1 = lVar2;
      uVar9 = 1;
      *param_2 = param_4;
    }
  }
  return uVar9;
}

// tls1_set_groups_list @ 14f673c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls1_set_groups_list(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined1 local_90 [120];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f673c90;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_a8 = &local_98;
  uVar1 = CONF_parse_list(param_3,0x3a,1,FUN_14f670f60);
  if ((int)uVar1 != 0) {
    if (param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = tls1_set_groups(param_1,param_2,local_90,local_98);
    }
  }
  return uVar1;
}

// tls1_set_peer_legacy_sigalg @ 14f673d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_peer_legacy_sigalg(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  lVar1 = ssl_cert_lookup_by_pkey(param_2,local_res18);
  if (lVar1 != 0) {
    lVar1 = FUN_14f673390(param_1,local_res18[0]);
    if (lVar1 != 0) {
      *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308) = lVar1;
      return 1;
    }
  }
  return 0;
}

// tls1_set_raw_sigalgs @ 14f673da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_raw_sigalgs(longlong param_1,void *param_2,longlong param_3,int param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x14f673dbe;
  _Dst = (void *)CRYPTO_malloc(param_3 * 2,"ssl\\t1_lib.c",0x7f9);
  if (_Dst == (void *)0x0) {
    ERR_put_error(0x14,0x276,0x41,"ssl\\t1_lib.c",0x7fa,uVar1);
    uVar1 = 0;
  }
  else {
    memcpy(_Dst,param_2,param_3 * 2);
    if (param_4 == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x198),"ssl\\t1_lib.c",0x804);
      *(void **)(param_1 + 0x198) = _Dst;
      *(longlong *)(param_1 + 0x1a0) = param_3;
    }
    else {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1a8),"ssl\\t1_lib.c",0x800);
      *(void **)(param_1 + 0x1a8) = _Dst;
      *(longlong *)(param_1 + 0x1b0) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// tls1_set_server_sigalgs @ 14f673ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_server_sigalgs(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  
  uVar5 = 1;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x1768),"ssl\\t1_lib.c",0x4e5);
  uVar11 = 0;
  uVar10 = 0x310;
  *(undefined8 *)(param_1 + 0x1768) = 0;
  uVar6 = 0x310;
  *(undefined8 *)(param_1 + 6000) = 0;
  do {
    *(undefined4 *)(uVar6 + *(longlong *)(param_1 + 0xa8)) = 0;
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x334);
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) != 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) != 0)) {
    iVar2 = tls1_process_sigalgs(param_1);
    if (iVar2 == 0) {
      uVar12 = CONCAT44(uVar5,0x507);
      uVar5 = 0x50;
      uVar9 = 0x44;
    }
    else {
      if (*(longlong *)(param_1 + 0x1768) != 0) {
        return 1;
      }
      uVar12 = CONCAT44(uVar5,0x50f);
      uVar5 = 0x28;
      uVar9 = 0x178;
    }
    ossl_statem_fatal(param_1,uVar5,0x14f,uVar9,"ssl\\t1_lib.c",uVar12);
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x488);
  uVar1 = *(uint *)(lVar3 + 0x1c) & 0x30000;
  uVar6 = uVar11;
  if (uVar1 == 0x10000) {
    uVar8 = 1;
  }
  else {
    if (uVar1 == 0x20000) {
      puVar7 = &DAT_15347d376;
      uVar8 = 1;
      goto LAB_14f673fc0;
    }
    if (uVar1 != 0x30000) {
      if ((*(int *)(param_1 + 0x38) == 1) &&
         (puVar7 = *(undefined2 **)(lVar3 + 0x1a8), puVar7 != (undefined2 *)0x0)) {
        uVar8 = *(ulonglong *)(lVar3 + 0x1b0);
      }
      else {
        puVar7 = *(undefined2 **)(lVar3 + 0x198);
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = &DAT_15347d340;
          uVar8 = 0x1a;
        }
        else {
          uVar8 = *(ulonglong *)(lVar3 + 0x1a0);
        }
      }
      goto LAB_14f673fc0;
    }
    uVar8 = 2;
  }
  puVar7 = &DAT_15347d374;
LAB_14f673fc0:
  do {
    lVar3 = FUN_14f673390(param_1,uVar6 & 0xffffffff);
    if ((lVar3 != 0) && (uVar8 != 0)) {
      uVar4 = uVar11;
      do {
        if (*(short *)(lVar3 + 8) == puVar7[uVar4]) {
          *(undefined4 *)(uVar10 + *(longlong *)(param_1 + 0xa8)) = 2;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar8);
    }
    uVar10 = uVar10 + 4;
    uVar6 = uVar6 + 1;
    if (0x333 < uVar10) {
      return 1;
    }
  } while( true );
}

// FUN_14f6740b0 @ 14f6740b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6740b0(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **ppuVar5;
  short *psVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar19;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  uVar14 = *(uint *)(lVar1 + 0x1c) & 0x30000;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x1768),"ssl\\t1_lib.c",0x6df);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  ppuVar7 = (undefined **)0x0;
  *(undefined8 *)(param_1 + 0x1768) = 0;
  *(undefined8 *)(param_1 + 6000) = 0;
  if (((*(int *)(param_1 + 0x38) == 0) &&
      (psVar12 = *(short **)(lVar1 + 0x1a8), psVar12 != (short *)0x0)) && (uVar14 == 0)) {
    ppuVar16 = *(undefined ***)(lVar1 + 0x1b0);
  }
  else {
    psVar12 = *(short **)(lVar1 + 0x198);
    if ((psVar12 == (short *)0x0) || (uVar14 != 0)) {
      lVar1 = *(longlong *)(param_1 + 0x488);
      uVar9 = *(uint *)(lVar1 + 0x1c) & 0x30000;
      if (uVar9 == 0x10000) {
        ppuVar16 = (undefined **)&DAT_00000001;
      }
      else {
        if (uVar9 == 0x20000) {
          psVar12 = &DAT_15347d376;
          ppuVar16 = (undefined **)&DAT_00000001;
          goto LAB_14f6741d6;
        }
        if (uVar9 != 0x30000) {
          if ((*(int *)(param_1 + 0x38) == 0) &&
             (psVar12 = *(short **)(lVar1 + 0x1a8), psVar12 != (short *)0x0)) {
            ppuVar16 = *(undefined ***)(lVar1 + 0x1b0);
          }
          else {
            psVar12 = *(short **)(lVar1 + 0x198);
            if (psVar12 == (short *)0x0) {
              psVar12 = &DAT_15347d340;
              ppuVar16 = (undefined **)&DAT_0000001a;
            }
            else {
              ppuVar16 = *(undefined ***)(lVar1 + 0x1a0);
            }
          }
          goto LAB_14f6741d6;
        }
        ppuVar16 = (undefined **)&DAT_00000002;
      }
      psVar12 = &DAT_15347d374;
    }
    else {
      ppuVar16 = *(undefined ***)(lVar1 + 0x1a0);
    }
  }
LAB_14f6741d6:
  ppuVar15 = ppuVar7;
  ppuVar18 = ppuVar7;
  if (((*(uint *)(param_1 + 0x5cc) & 0x400000) == 0) && (uVar14 == 0)) {
    psVar2 = *(short **)(*(longlong *)(param_1 + 0xa8) + 0x2e8);
    ppuVar3 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x2f8);
    ppuVar17 = ppuVar16;
    psVar13 = psVar12;
    ppuVar16 = ppuVar3;
    psVar12 = psVar2;
  }
  else {
    psVar13 = *(short **)(*(longlong *)(param_1 + 0xa8) + 0x2e8);
    ppuVar17 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x2f8);
    psVar2 = psVar12;
    ppuVar3 = ppuVar16;
  }
  do {
    if (ppuVar3 == (undefined **)0x0) {
      uVar8 = 0;
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar7 = (undefined **)CRYPTO_malloc((longlong)ppuVar18 * 8,"ssl\\t1_lib.c",0x6f8);
        if (ppuVar7 == (undefined **)0x0) {
          ERR_put_error(0x14,0x277,0x41,"ssl\\t1_lib.c",CONCAT44(uVar19,0x6f9));
          return 0;
        }
        uVar8 = FUN_14f672390(param_1,ppuVar7,psVar12,ppuVar16,psVar13,ppuVar17);
      }
      *(undefined ***)(param_1 + 0x1768) = ppuVar7;
      *(undefined8 *)(param_1 + 6000) = uVar8;
      return 1;
    }
    ppuVar10 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
    ppuVar5 = ppuVar7;
    do {
      ppuVar11 = ppuVar10;
      if (*(short *)(ppuVar10 + 1) == *psVar2) break;
      ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
      ppuVar10 = ppuVar10 + 5;
      ppuVar11 = ppuVar7;
    } while (ppuVar5 < &DAT_0000001a);
    iVar4 = FUN_14f672480(param_1,0x5000c,ppuVar11);
    uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    if ((iVar4 != 0) && (ppuVar17 != (undefined **)0x0)) {
      psVar6 = psVar13;
      ppuVar5 = ppuVar7;
      do {
        if (*psVar2 == *psVar6) {
          ppuVar18 = (undefined **)((longlong)ppuVar18 + 1);
          if (ppuVar15 != (undefined **)0x0) {
            *ppuVar15 = (undefined *)ppuVar11;
            ppuVar15 = ppuVar15 + 1;
          }
          break;
        }
        ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
        psVar6 = psVar6 + 1;
      } while (ppuVar5 < ppuVar17);
    }
    psVar2 = psVar2 + 1;
    ppuVar3 = (undefined **)((longlong)ppuVar3 + -1);
  } while( true );
}

// tls1_set_sigalgs @ 14f674380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_sigalgs(longlong param_1,int *param_2,ulonglong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f67439b;
  if ((param_3 & 1) == 0) {
    puVar3 = (undefined2 *)CRYPTO_malloc(param_3 & 0xfffffffffffffffe,"ssl\\t1_lib.c",0x813);
    if (puVar3 == (undefined2 *)0x0) {
      ERR_put_error(0x14,0x278,0x41,"ssl\\t1_lib.c",0x814,uVar8);
      uVar8 = 0;
    }
    else {
      uVar6 = 0;
      puVar7 = puVar3;
      if (param_3 != 0) {
        do {
          iVar2 = *param_2;
          uVar5 = 0;
          piVar1 = param_2 + 1;
          param_2 = param_2 + 2;
          ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
          do {
            if ((*(int *)((longlong)ppuVar4 + 0xc) == iVar2) &&
               (*(int *)((longlong)ppuVar4 + 0x14) == *piVar1)) {
              *puVar7 = *(undefined2 *)(ppuVar4 + 1);
              puVar7 = puVar7 + 1;
              break;
            }
            uVar5 = uVar5 + 1;
            ppuVar4 = ppuVar4 + 5;
          } while (uVar5 < 0x1a);
          if (uVar5 == 0x1a) {
            CRYPTO_free(puVar3,"ssl\\t1_lib.c",0x836);
            return 0;
          }
          uVar6 = uVar6 + 2;
        } while (uVar6 < param_3);
      }
      if (param_4 == 0) {
        CRYPTO_free(*(undefined8 *)(param_1 + 0x198),"ssl\\t1_lib.c",0x82e);
        *(ulonglong *)(param_1 + 0x1a0) = param_3 >> 1;
        *(undefined2 **)(param_1 + 0x198) = puVar3;
      }
      else {
        CRYPTO_free(*(undefined8 *)(param_1 + 0x1a8),"ssl\\t1_lib.c",0x82a);
        *(ulonglong *)(param_1 + 0x1b0) = param_3 >> 1;
        *(undefined2 **)(param_1 + 0x1a8) = puVar3;
      }
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

// tls1_set_sigalgs_list @ 14f674500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls1_set_sigalgs_list(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined1 local_80 [104];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f674510;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_98 = &local_88;
  uVar1 = CONF_parse_list(param_2,0x3a,1,FUN_14f6710f0);
  if ((int)uVar1 != 0) {
    if (param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = tls1_set_raw_sigalgs(param_1,local_80,local_88,param_3);
    }
  }
  return uVar1;
}

// tls1_shared_group @ 14f6745b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls1_shared_group(longlong param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8;
  undefined1 local_res9;
  uint local_res10;
  undefined2 *local_res18;
  
  uVar12 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  uVar9 = (ulonglong)param_2;
  local_res10 = param_2;
  if (param_2 == 0xfffffffe) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x18);
      if (iVar2 == 0x300c02b) {
        return 0x17;
      }
      if (iVar2 != 0x300c02c) {
        return 0;
      }
      return 0x18;
    }
    local_res10 = 0;
    uVar9 = uVar12;
  }
  iVar2 = (int)uVar9;
  if ((*(uint *)(param_1 + 0x5cc) & 0x400000) == 0) {
    local_res18 = *(undefined2 **)(param_1 + 0x6b8);
    uVar10 = *(ulonglong *)(param_1 + 0x6b0);
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
    if (uVar5 == 0x10000) {
      uVar7 = 1;
    }
    else {
      if (uVar5 == 0x20000) {
        puVar8 = &DAT_15347d33e;
        uVar7 = 1;
        goto LAB_14f67477b;
      }
      if (uVar5 != 0x30000) {
        puVar8 = *(undefined2 **)(param_1 + 0x6a8);
        if (puVar8 == (undefined2 *)0x0) {
          puVar8 = &DAT_15347d330;
          uVar7 = 5;
        }
        else {
          uVar7 = *(ulonglong *)(param_1 + 0x6a0);
        }
        goto LAB_14f67477b;
      }
      uVar7 = 2;
    }
    puVar8 = &DAT_15347d33c;
    goto LAB_14f67477b;
  }
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if (uVar5 == 0x10000) {
    uVar10 = 1;
LAB_14f6746e1:
    local_res18 = &DAT_15347d33c;
  }
  else if (uVar5 == 0x20000) {
    local_res18 = &DAT_15347d33e;
    uVar10 = 1;
  }
  else {
    if (uVar5 == 0x30000) {
      uVar10 = 2;
      goto LAB_14f6746e1;
    }
    local_res18 = *(undefined2 **)(param_1 + 0x6a8);
    if (local_res18 != (undefined2 *)0x0) {
      uVar10 = *(ulonglong *)(param_1 + 0x6a0);
      puVar8 = *(undefined2 **)(param_1 + 0x6b8);
      uVar7 = *(ulonglong *)(param_1 + 0x6b0);
      goto LAB_14f67477b;
    }
    local_res18 = &DAT_15347d330;
    uVar10 = 5;
  }
  puVar8 = *(undefined2 **)(param_1 + 0x6b8);
  uVar7 = *(ulonglong *)(param_1 + 0x6b0);
LAB_14f67477b:
  puVar6 = local_res18;
  uVar4 = uVar12;
  uVar11 = uVar12;
  if (uVar10 != 0) {
    do {
      uVar1 = puVar6[uVar11];
      uVar3 = uVar12;
      if (uVar7 != 0) {
        do {
          if (puVar8[uVar3] == uVar1) {
            if ((ushort)(uVar1 - 1) < 0x1e) {
              puVar6 = local_res18;
              if (&DAT_15347d1c0 + (longlong)(int)(uVar1 - 1) * 3 != (undefined4 *)0x0) {
                local_res8 = (undefined1)(uVar1 >> 8);
                local_res9 = (undefined1)uVar1;
                iVar2 = ssl_security(param_1,0x20005,
                                     *(undefined4 *)
                                      (&DAT_15347d1c4 + (longlong)(int)(uVar1 - 1) * 0xc),
                                     (&DAT_15347d1c0)[(longlong)(int)(uVar1 - 1) * 3],&local_res8);
                uVar9 = (ulonglong)local_res10;
                puVar6 = local_res18;
                if (iVar2 != 0) {
                  if (local_res10 == (uint)uVar4) {
                    return (ulonglong)uVar1;
                  }
                  uVar4 = (ulonglong)((uint)uVar4 + 1);
                }
              }
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      iVar2 = (int)uVar9;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  uVar4 = uVar4 & 0xffff;
  if (iVar2 != -1) {
    uVar4 = 0;
  }
  return uVar4;
}

// tls_check_sigalg_curve @ 14f674880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_check_sigalg_curve(longlong param_1,int param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  
  puVar5 = *(undefined2 **)(*(longlong *)(param_1 + 0x488) + 0x198);
  if (puVar5 == (undefined2 *)0x0) {
    puVar5 = &DAT_15347d340;
    uVar4 = 0x1a;
  }
  else {
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x488) + 0x1a0);
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = 0;
      ppuVar1 = &PTR_s_ecdsa_secp256r1_sha256_15347d3a0;
      do {
        if (*(short *)(ppuVar1 + 1) == puVar5[uVar3]) {
          if (((*(int *)((longlong)ppuVar1 + 0x14) == 0x198) && (*(int *)(ppuVar1 + 4) != 0)) &&
             (param_2 == *(int *)(ppuVar1 + 4))) {
            return 1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        ppuVar1 = ppuVar1 + 5;
      } while (uVar2 < 0x1a);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}

// tls_choose_sigalg @ 14f674940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_choose_sigalg(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  short *local_res8;
  int local_res10;
  undefined4 uVar15;
  
  uVar12 = 0;
  uVar4 = 0xffffffff;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) = 0;
  uVar5 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60);
  local_res10 = param_2;
  if ((((uVar5 & 8) == 0) && (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)
     ) {
    uVar7 = FUN_14f670b80(param_1,0,0);
    if (uVar7 == 0) {
      if (param_2 == 0) {
        return 1;
      }
      uVar15 = 0xac8;
LAB_14f6749d1:
      uVar11 = 0x28;
      uVar13 = 0x76;
LAB_14f6749da:
      ossl_statem_fatal(param_1,uVar11,0x201,uVar13,"ssl\\t1_lib.c",uVar15);
      return 0;
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0xab) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x488);
      uVar10 = (uint)(((*plVar1 - (longlong)plVar1) + -0x20) / 0x28);
      if (8 < uVar10) {
        return 1;
      }
      if (plVar1[(longlong)(int)uVar10 * 5 + 4] == 0) {
        return 1;
      }
      if (plVar1[(longlong)(int)uVar10 * 5 + 5] == 0) {
        return 1;
      }
    }
    if ((uVar5 & 2) == 0) {
      uVar7 = FUN_14f673390(param_1,0xffffffff);
      if (uVar7 == 0) {
        if (param_2 == 0) {
          return 1;
        }
        uVar15 = 0xb41;
        uVar11 = 0x50;
        uVar13 = 0x44;
        goto LAB_14f6749da;
      }
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) == 0) {
      uVar7 = FUN_14f673390(param_1,0xffffffff);
      if (uVar7 == 0) {
        if (param_2 == 0) {
          return 1;
        }
        uVar15 = 0xb28;
        uVar11 = 0x50;
        uVar13 = 0x44;
        goto LAB_14f6749da;
      }
      uVar14 = tls12_get_psigalgs(param_1,1,&local_res8);
      if (uVar14 != 0) {
        do {
          if ((*(short *)(uVar7 + 8) == *local_res8) && (*(uint *)(uVar7 + 0x18) < 9)) {
            lVar9 = (longlong)(int)*(uint *)(uVar7 + 0x18);
            lVar2 = *(longlong *)(param_1 + 0x488);
            if ((*(longlong *)(lVar2 + 0x20 + lVar9 * 0x28) != 0) &&
               ((*(longlong *)(lVar2 + 0x28 + lVar9 * 0x28) != 0 &&
                (iVar3 = FUN_14f670a40(param_1,uVar7,*(undefined8 *)(lVar2 + 0x20 + lVar9 * 0x28),
                                       *(undefined8 *)(lVar2 + 0x28 + lVar9 * 0x28)), iVar3 != 0))))
            break;
          }
          uVar12 = uVar12 + 1;
          local_res8 = local_res8 + 1;
        } while (uVar12 < uVar14);
      }
      if (uVar12 == uVar14) {
        if (param_2 == 0) {
          return 1;
        }
        uVar15 = 0xb38;
        uVar11 = 0x2f;
        uVar13 = 0x172;
        goto LAB_14f6749da;
      }
    }
    else {
      if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) == 0) {
        iVar3 = -1;
      }
      else {
        uVar8 = EVP_PKEY_get0_EC_KEY(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0xa0));
        uVar8 = EC_KEY_get0_group(uVar8);
        iVar3 = EC_GROUP_get_curve_name(uVar8);
      }
      uVar7 = uVar12;
      uVar14 = uVar12;
      if (*(longlong *)(param_1 + 6000) != 0) {
        do {
          uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x1768) + uVar14 * 8);
          if (*(int *)(param_1 + 0x38) == 0) {
            uVar4 = *(uint *)(uVar7 + 0x18);
            if ((uint)(((**(longlong **)(param_1 + 0x488) -
                        (longlong)*(longlong **)(param_1 + 0x488)) + -0x20) / 0x28) == uVar4)
            goto LAB_14f674b48;
          }
          else {
            uVar4 = FUN_14f672250(param_1,uVar7);
            if (uVar4 != 0xffffffff) {
LAB_14f674b48:
              uVar5 = uVar4;
              if (uVar4 == 0xffffffff) {
                uVar5 = *(uint *)(uVar7 + 0x18);
              }
              if (uVar5 < 9) {
                lVar9 = (longlong)(int)uVar5;
                lVar2 = *(longlong *)(param_1 + 0x488);
                if (((*(longlong *)(lVar2 + 0x20 + lVar9 * 0x28) != 0) &&
                    (*(longlong *)(lVar2 + 0x28 + lVar9 * 0x28) != 0)) &&
                   (iVar6 = FUN_14f670a40(param_1,uVar7,*(undefined8 *)(lVar2 + 0x20 + lVar9 * 0x28)
                                          ,*(undefined8 *)(lVar2 + 0x28 + lVar9 * 0x28)), iVar6 != 0
                   )) {
                  if (*(int *)(uVar7 + 0x14) == 0x390) {
                    uVar8 = EVP_PKEY_get0(*(undefined8 *)
                                           (*(longlong *)(param_1 + 0x488) +
                                           ((longlong)(int)uVar4 + 1) * 0x28));
                    iVar6 = FUN_14f671060(uVar8,uVar7);
                    if (iVar6 == 0) goto LAB_14f674bc9;
                  }
                  param_2 = local_res10;
                  if ((iVar3 == -1) || (*(int *)(uVar7 + 0x20) == iVar3)) break;
                }
              }
            }
          }
LAB_14f674bc9:
          uVar14 = uVar14 + 1;
          param_2 = local_res10;
        } while (uVar14 < *(ulonglong *)(param_1 + 6000));
      }
      if (uVar14 == *(ulonglong *)(param_1 + 6000)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0xa0) != 0) {
          uVar7 = FUN_14f673390(param_1,0xffffffff);
          if (uVar7 == 0) {
            if (param_2 == 0) {
              return 1;
            }
            uVar15 = 0xb0d;
            goto LAB_14f6749d1;
          }
          uVar4 = *(uint *)(uVar7 + 0x18);
          uVar14 = uVar12;
        }
        if (uVar14 == *(ulonglong *)(param_1 + 6000)) {
          if (param_2 == 0) {
            return 1;
          }
          uVar15 = 0xb1a;
          goto LAB_14f6749d1;
        }
      }
      if (uVar4 != 0xffffffff) goto LAB_14f674c5a;
    }
  }
  uVar4 = *(uint *)(uVar7 + 0x18);
LAB_14f674c5a:
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) =
       *(longlong *)(param_1 + 0x488) + ((longlong)(int)uVar4 * 5 + 4) * 8;
  **(undefined8 **)(param_1 + 0x488) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) = uVar7;
  return 1;
}

// tls_curve_allowed @ 14f674dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_curve_allowed(undefined8 param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  
  if ((ushort)((short)param_2 - 1U) < 0x1e) {
    lVar1 = (longlong)(int)((param_2 & 0xffff) - 1);
    if (&DAT_15347d1c0 + lVar1 * 3 != (undefined4 *)0x0) {
      local_res10 = (undefined1)(param_2 >> 8);
      local_res11 = (undefined1)param_2;
      uVar2 = ssl_security(param_1,param_3,*(undefined4 *)(&DAT_15347d1c4 + lVar1 * 0xc),
                           (&DAT_15347d1c0)[lVar1 * 3],&local_res10);
      return uVar2;
    }
  }
  return 0;
}

// tls_decrypt_ticket @ 14f674e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int tls_decrypt_ticket(longlong param_1,longlong *param_2,ulonglong param_3,void *param_4,
                      size_t param_5,longlong *param_6)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  ulonglong local_d0;
  int local_c8 [2];
  longlong *local_c0;
  longlong local_b8;
  int local_b0 [2];
  void *local_a8;
  longlong *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f674e47;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar7 = 0;
  lVar6 = *(longlong *)(param_1 + 0x768);
  iVar9 = 0;
  plVar3 = (longlong *)0x0;
  lVar4 = 0;
  local_a0 = param_6;
  iVar8 = 4;
  local_c0 = param_2;
  local_a8 = param_4;
  if (param_3 == 0) {
    iVar8 = 3;
    param_2 = param_2;
    goto LAB_14f675206;
  }
  if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar10 = **(int **)(param_1 + 8), iVar10 < 0x304)) || (iVar10 == 0x10000)) &&
      (*(longlong *)(param_1 + 0x6d8) != 0)) || (param_3 < 0x20)) goto LAB_14f675206;
  plVar3 = (longlong *)HMAC_CTX_new();
  if (plVar3 == (longlong *)0x0) {
    iVar8 = 0;
    param_2 = local_c0;
    lVar4 = 0;
    goto LAB_14f675206;
  }
  lVar4 = EVP_CIPHER_CTX_new();
  if (lVar4 == 0) {
    iVar8 = 0;
    param_2 = local_c0;
    goto LAB_14f675206;
  }
  if (*(code **)(lVar6 + 0x220) == (code *)0x0) {
    if ((*param_2 == *(longlong *)(lVar6 + 0x208)) && (param_2[1] == *(longlong *)(lVar6 + 0x210)))
    {
      uVar5 = EVP_sha256();
      local_d8 = (longlong *)0x0;
      iVar8 = HMAC_Init_ex(plVar3,*(undefined8 *)(lVar6 + 0x218),0x20,uVar5);
      if (0 < iVar8) {
        lVar6 = *(longlong *)(lVar6 + 0x218);
        uVar5 = EVP_aes_256_cbc();
        local_d8 = param_2 + 2;
        iVar8 = EVP_DecryptInit_ex(lVar4,uVar5,0,lVar6 + 0x20);
        if (0 < iVar8) {
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar9 = 0, iVar8 != 0x10000)) {
            iVar9 = 1;
          }
          goto LAB_14f674ff0;
        }
      }
      goto LAB_14f674f2c;
    }
  }
  else {
    local_d0 = local_d0 & 0xffffffff00000000;
    local_d8 = plVar3;
    iVar8 = (**(code **)(lVar6 + 0x220))(param_1,param_2,param_2 + 2,lVar4);
    if (iVar8 < 0) {
LAB_14f674f2c:
      iVar8 = 1;
      param_2 = local_c0;
      goto LAB_14f675206;
    }
    if (iVar8 != 0) {
      iVar9 = 0;
      if (iVar8 == 2) {
        iVar9 = 1;
      }
LAB_14f674ff0:
      lVar6 = HMAC_size(plVar3);
      if (lVar6 == 0) {
        iVar8 = 1;
        param_2 = local_c0;
      }
      else {
        iVar8 = EVP_CIPHER_CTX_iv_length(lVar4);
        param_2 = local_c0;
        if ((ulonglong)((iVar8 + 0x10) + lVar6) < param_3) {
          param_3 = param_3 - lVar6;
          iVar8 = HMAC_Update(plVar3,local_c0,param_3);
          if ((0 < iVar8) && (iVar8 = HMAC_Final(plVar3,local_98,0), 0 < iVar8)) {
            iVar8 = CRYPTO_memcmp(local_98,param_3 + (longlong)param_2,lVar6);
            if (iVar8 != 0) {
              iVar8 = 4;
              goto LAB_14f675206;
            }
            iVar8 = EVP_CIPHER_CTX_iv_length(lVar4);
            local_b8 = (longlong)param_2 + (longlong)iVar8 + 0x10;
            iVar8 = EVP_CIPHER_CTX_iv_length(lVar4);
            param_3 = param_3 - (longlong)(iVar8 + 0x10);
            lVar6 = CRYPTO_malloc(param_3,"ssl\\t1_lib.c",0x5c1);
            if (lVar6 != 0) {
              local_d8 = (longlong *)CONCAT44(local_d8._4_4_,(int)param_3);
              iVar8 = EVP_DecryptUpdate(lVar4,lVar6,local_c8,local_b8);
              if (0 < iVar8) {
                iVar8 = EVP_DecryptFinal(lVar4,local_c8[0] + lVar6,local_b0);
                if (iVar8 < 1) {
                  CRYPTO_free(lVar6,"ssl\\t1_lib.c",0x5c9);
                  iVar8 = 4;
                  lVar7 = 0;
                }
                else {
                  local_c8[0] = local_c8[0] + local_b0[0];
                  local_b8 = lVar6;
                  lVar7 = d2i_SSL_SESSION(0,&local_b8);
                  local_c8[0] = local_c8[0] + ((int)lVar6 - (int)local_b8);
                  CRYPTO_free(lVar6,"ssl\\t1_lib.c",0x5d2);
                  if (lVar7 == 0) {
                    ERR_clear_error();
                    iVar8 = 4;
                  }
                  else if (local_c8[0] == 0) {
                    if (param_5 != 0) {
                      memcpy((void *)(lVar7 + 0x158),local_a8,param_5);
                      *(size_t *)(lVar7 + 0x150) = param_5;
                    }
                    iVar8 = iVar9 + 5;
                  }
                  else {
                    SSL_SESSION_free(lVar7);
                    iVar8 = 4;
                    lVar7 = 0;
                  }
                }
                goto LAB_14f675206;
              }
            }
            CRYPTO_free(lVar6,"ssl\\t1_lib.c",0x5c4);
          }
          iVar8 = 1;
          lVar7 = 0;
        }
        else {
          iVar8 = 4;
        }
      }
      goto LAB_14f675206;
    }
  }
  iVar8 = 4;
  param_2 = local_c0;
LAB_14f675206:
  iVar10 = 1;
  EVP_CIPHER_CTX_free(lVar4);
  HMAC_CTX_free(plVar3);
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x768) + 0x3b8);
  iVar9 = iVar8;
  if ((pcVar1 != (code *)0x0) && (iVar8 - 3U < 4)) {
    if (0x10 < param_3) {
      param_3 = 0x10;
    }
    local_d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x768) + 0x3c0);
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,iVar8);
    iVar2 = (*pcVar1)(param_1,lVar7,param_2,param_3);
    iVar9 = iVar10;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        SSL_SESSION_free(lVar7);
        lVar7 = 0;
        iVar9 = 2;
      }
      else if (iVar2 == 2) {
        if (1 < iVar8 - 3U) {
          iVar8 = 4;
        }
        SSL_SESSION_free(lVar7);
        lVar7 = 0;
        iVar9 = iVar8;
      }
      else if ((iVar2 - 3U < 2) && (iVar8 - 5U < 2)) {
        iVar9 = (iVar2 != 3) + 5;
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x6d8) == 0) ||
      ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
        (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar8 != 0x10000)))) &&
     (((iVar9 - 3U & 0xfffffffc) == 0 && (iVar9 != 5)))) {
    *(undefined4 *)(param_1 + 0x678) = 1;
  }
  *local_a0 = lVar7;
  return iVar9;
}

// tls_get_ticket_from_client @ 14f675340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_get_ticket_from_client(int *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  param_1[0x19e] = 0;
  if ((0x300 < *param_1) && ((param_1[0x173] & 0x4000U) == 0)) {
    iVar2 = ssl_security(param_1,10,0,0,0,0x14f675355);
    if ((iVar2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x288), *(int *)(lVar1 + 0x100) != 0)) {
      uVar3 = tls_decrypt_ticket(param_1,*(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0xf8)
                                 ,param_2 + 0x30,*(undefined8 *)(param_2 + 0x28),param_3);
      return uVar3;
    }
  }
  return 2;
}

// tls_use_ticket @ 14f675400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_use_ticket(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x5cc) & 0x4000) != 0) {
    return 0;
  }
  uVar1 = ssl_security(param_1,10,0,0,0);
  return uVar1;
}

