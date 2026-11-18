// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 56

// OPENSSL_cipher_name @ 14f664430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * OPENSSL_cipher_name(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = ssl3_get_cipher_by_std_name();
    if (lVar1 != 0) {
      return *(char **)(lVar1 + 8);
    }
  }
  return "(NONE)";
}

// SSL_CIPHER_description @ 14f664470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_CIPHER_description(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (param_2 == 0) {
    param_3 = 0x80;
    param_2 = CRYPTO_malloc(0x80,"ssl\\ssl_ciph.c",0x66d);
    if (param_2 == 0) {
      ERR_put_error(0x14,0x272,0x41,"ssl\\ssl_ciph.c",CONCAT44(uVar9,0x66e));
      return 0;
    }
  }
  else if (param_3 < 0x80) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x1c);
  uVar4 = ssl_protocol_to_string(*(undefined4 *)(param_1 + 0x2c));
  pcVar6 = "unknown";
  pcVar8 = "RSA";
  if (uVar3 < 0x11) {
    if (uVar3 == 0x10) {
      pcVar7 = "GOST";
    }
    else if (uVar3 == 0) {
      pcVar7 = "any";
    }
    else if (uVar3 == 1) {
      pcVar7 = "RSA";
    }
    else if (uVar3 == 2) {
      pcVar7 = "DH";
    }
    else if (uVar3 == 4) {
      pcVar7 = "ECDH";
    }
    else {
      if (uVar3 != 8) goto LAB_14f66459f;
      pcVar7 = "PSK";
    }
  }
  else if (uVar3 == 0x20) {
    pcVar7 = "SRP";
  }
  else if (uVar3 == 0x40) {
    pcVar7 = "RSAPSK";
  }
  else if (uVar3 == 0x80) {
    pcVar7 = "ECDHEPSK";
  }
  else if (uVar3 == 0x100) {
    pcVar7 = "DHEPSK";
  }
  else {
LAB_14f66459f:
    pcVar7 = "unknown";
  }
  switch(uVar9) {
  case 0:
    pcVar8 = "any";
    break;
  case 1:
    break;
  case 2:
    pcVar8 = "DSS";
    break;
  default:
    pcVar8 = "unknown";
    break;
  case 4:
    pcVar8 = "None";
    break;
  case 8:
    pcVar8 = "ECDSA";
    break;
  case 0x10:
    pcVar8 = "PSK";
    break;
  case 0x20:
    pcVar8 = "GOST01";
    break;
  case 0x40:
    pcVar8 = "SRP";
    break;
  case 0xa0:
    pcVar8 = "GOST12";
  }
  pcVar5 = pcVar6;
  if (uVar1 < 0x801) {
    if (uVar1 == 0x800) {
      pcVar5 = "SEED(128)";
    }
    else if (uVar1 < 0x21) {
      pcVar5 = "None";
      if (uVar1 != 0x20) {
        if (uVar1 == 1) {
          pcVar5 = "DES(56)";
        }
        else if (uVar1 == 2) {
          pcVar5 = "3DES(168)";
        }
        else if (uVar1 == 4) {
          pcVar5 = "RC4(128)";
        }
        else if (uVar1 == 8) {
          pcVar5 = "RC2(128)";
        }
        else {
          pcVar5 = pcVar6;
          if (uVar1 == 0x10) {
            pcVar5 = "IDEA(128)";
          }
        }
      }
    }
    else if (uVar1 == 0x40) {
      pcVar5 = "AES(128)";
    }
    else if (uVar1 == 0x80) {
      pcVar5 = "AES(256)";
    }
    else if (uVar1 == 0x100) {
      pcVar5 = "Camellia(128)";
    }
    else if (uVar1 == 0x200) {
      pcVar5 = "Camellia(256)";
    }
    else if (uVar1 == 0x400) goto LAB_14f6646d5;
  }
  else if (uVar1 < 0x20001) {
    if (uVar1 == 0x20000) {
      pcVar5 = "AESCCM8(256)";
    }
    else if (uVar1 == 0x1000) {
      pcVar5 = "AESGCM(128)";
    }
    else if (uVar1 == 0x2000) {
      pcVar5 = "AESGCM(256)";
    }
    else if (uVar1 == 0x4000) {
      pcVar5 = "AESCCM(128)";
    }
    else if (uVar1 == 0x8000) {
      pcVar5 = "AESCCM(256)";
    }
    else if (uVar1 == 0x10000) {
      pcVar5 = "AESCCM8(128)";
    }
  }
  else if (uVar1 == 0x40000) {
LAB_14f6646d5:
    pcVar5 = "GOST89(256)";
  }
  else if (uVar1 == 0x80000) {
    pcVar5 = "CHACHA20/POLY1305(256)";
  }
  else if (uVar1 == 0x100000) {
    pcVar5 = "ARIAGCM(128)";
  }
  else if (uVar1 == 0x200000) {
    pcVar5 = "ARIAGCM(256)";
  }
  if (uVar2 < 0x21) {
    if (uVar2 == 0x20) {
      pcVar6 = "SHA384";
      goto LAB_14f66487a;
    }
    if (uVar2 == 1) {
      pcVar6 = "MD5";
      goto LAB_14f66487a;
    }
    if (uVar2 == 2) {
      pcVar6 = "SHA1";
      goto LAB_14f66487a;
    }
    if (uVar2 == 4) {
      pcVar6 = "GOST94";
      goto LAB_14f66487a;
    }
    if (uVar2 != 8) {
      if (uVar2 == 0x10) {
        pcVar6 = "SHA256";
      }
      goto LAB_14f66487a;
    }
LAB_14f66486a:
    pcVar6 = "GOST89";
  }
  else {
    if (uVar2 == 0x40) {
      pcVar6 = "AEAD";
      goto LAB_14f66487a;
    }
    if (uVar2 != 0x80) {
      if (uVar2 == 0x100) goto LAB_14f66486a;
      if (uVar2 != 0x200) goto LAB_14f66487a;
    }
    pcVar6 = "GOST2012";
  }
LAB_14f66487a:
  BIO_snprintf(param_2,(longlong)param_3,PTR_s___23s__s_Kx___8s_Au___4s_Enc___9_154df49c8,
               *(undefined8 *)(param_1 + 8),uVar4,pcVar7,pcVar8,pcVar5,pcVar6);
  return param_2;
}

// SSL_CIPHER_find @ 14f6649a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CIPHER_find(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6649b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0x90))(param_2);
  return;
}

// SSL_CIPHER_get_cipher_nid @ 14f664a30

undefined4 SSL_CIPHER_get_cipher_nid(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = &DAT_15347aaf0;
    uVar1 = 0;
    while (*piVar2 != *(int *)(param_1 + 0x24)) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
      if (0x15 < uVar1) {
        return 0;
      }
    }
    if ((int)uVar1 != -1) {
      return (&DAT_15347aaf4)[(longlong)(int)uVar1 * 2];
    }
  }
  return 0;
}

// SSL_CIPHER_get_digest_nid @ 14f664a80

undefined4 SSL_CIPHER_get_digest_nid(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  piVar2 = &DAT_15347aba0;
  uVar1 = 0;
  do {
    if (*piVar2 == *(int *)(param_1 + 0x28)) {
      if ((int)uVar1 == -1) {
        return 0;
      }
      return (&DAT_15347aba4)[(longlong)(int)uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (uVar1 < 0xc);
  return 0;
}

// SSL_CIPHER_get_id @ 14f664ae0

undefined4 SSL_CIPHER_get_id(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// SSL_CIPHER_get_name @ 14f664b30

char * SSL_CIPHER_get_name(longlong param_1)

{
  if (param_1 != 0) {
    return *(char **)(param_1 + 8);
  }
  return "(NONE)";
}

// SSL_CIPHER_get_version @ 14f664b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * SSL_CIPHER_get_version(longlong param_1)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    return "(NONE)";
  }
  if (*(int *)(param_1 + 0x2c) == 0x301) {
    return "TLSv1.0";
  }
  pcVar1 = (char *)ssl_protocol_to_string();
  return pcVar1;
}

// SSL_COMP_add_compression_method @ 14f664be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_COMP_add_compression_method(int param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f664bf0;
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = COMP_get_type(param_2);
  if (iVar1 == 0) {
    return 1;
  }
  if (0x3e < param_1 - 0xc1U) {
    ERR_put_error(0x14,0xa5,0x133,"ssl\\ssl_ciph.c",0x7b9,uVar4);
    return 1;
  }
  CRYPTO_mem_ctrl(3);
  piVar2 = (int *)CRYPTO_malloc(0x18,"ssl\\ssl_ciph.c",0x7be);
  if (piVar2 == (int *)0x0) {
    CRYPTO_mem_ctrl(2);
    uVar3 = 0x7c1;
  }
  else {
    *piVar2 = param_1;
    *(longlong *)(piVar2 + 4) = param_2;
    FUN_14f665460();
    if (DAT_1553dfe20 != 0) {
      iVar1 = OPENSSL_sk_find(DAT_1553dfe20,piVar2);
      if (-1 < iVar1) {
        CRYPTO_free(piVar2,"ssl\\ssl_ciph.c",0x7c9);
        CRYPTO_mem_ctrl(2);
        uVar3 = 0x7cc;
        uVar4 = 0x135;
        goto LAB_14f664cc8;
      }
      if ((DAT_1553dfe20 != 0) && (iVar1 = OPENSSL_sk_push(DAT_1553dfe20,piVar2), iVar1 != 0)) {
        CRYPTO_mem_ctrl(2);
        return 0;
      }
    }
    CRYPTO_free(piVar2,"ssl\\ssl_ciph.c",2000);
    CRYPTO_mem_ctrl(2);
    uVar3 = 0x7d2;
  }
  uVar4 = 0x41;
LAB_14f664cc8:
  ERR_put_error(0x14,0xa5,uVar4,"ssl\\ssl_ciph.c",uVar3);
  return 1;
}

// SSL_COMP_get_compression_methods @ 14f664db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_COMP_get_compression_methods
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_THREAD_run_once(&DAT_1553dfe28,FUN_14f6652f0,param_3,param_4,0x14f664dba);
  return DAT_1553dfe20;
}

// SSL_COMP_get_name @ 14f664e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_COMP_get_name(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = COMP_get_name();
    return uVar1;
  }
  return 0;
}

// SSL_CTX_set_ciphersuites @ 14f664e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_ciphersuites(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14f6654a0(param_1 + 0x18);
  if ((iVar1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_14f667b50(param_1 + 8,param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  }
  return;
}

// SSL_set_ciphersuites @ 14f664ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_set_ciphersuites(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = FUN_14f6654a0(param_1 + 0x128);
  uVar4 = (ulonglong)uVar1;
  if ((*(longlong *)(param_1 + 0x118) == 0) && (lVar2 = SSL_get_ciphers(param_1), lVar2 != 0)) {
    uVar3 = OPENSSL_sk_dup(lVar2);
    *(undefined8 *)(param_1 + 0x118) = uVar3;
  }
  if ((uVar1 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar4 = FUN_14f667b50(param_1 + 0x118,param_1 + 0x120,*(undefined8 *)(param_1 + 0x128));
  }
  return uVar4;
}

// FUN_14f664f70 @ 14f664f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f664f70(longlong param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f664f8a;
  bVar1 = false;
  iVar2 = strncmp((char *)*param_3,"SUITEB128ONLY",0xd);
  if (iVar2 == 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
    uVar4 = 0x10000;
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x10000;
    bVar1 = false;
  }
  else {
    iVar2 = strncmp((char *)*param_3,"SUITEB128C2",0xb);
    if (iVar2 == 0) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
      bVar1 = true;
      uVar4 = 0x30000;
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x30000;
    }
    else {
      iVar2 = strncmp((char *)*param_3,"SUITEB128",9);
      if (iVar2 == 0) {
        *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
        uVar4 = 0x30000;
        *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x30000;
      }
      else {
        iVar2 = strncmp((char *)*param_3,"SUITEB192",9);
        if (iVar2 == 0) {
          *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
          uVar4 = 0x20000;
          *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x20000;
        }
        else {
          uVar4 = *(uint *)(param_2 + 0x1c) & 0x30000;
        }
      }
    }
  }
  if (uVar4 != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 0x10) == 0) {
      ERR_put_error(0x14,0x14b,0x9e,"ssl\\ssl_ciph.c",0x4e0,uVar5);
      return 0;
    }
    if (uVar4 == 0x10000) {
      pcVar3 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar4 == 0x20000) {
      pcVar3 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else {
      if (uVar4 != 0x30000) {
        return 1;
      }
      pcVar3 = "ECDHE-ECDSA-AES256-GCM-SHA384";
      if (!bVar1) {
        pcVar3 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
      }
    }
    *param_3 = pcVar3;
  }
  return 1;
}

// FUN_14f6650f0 @ 14f6650f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6650f0(void *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6650fc;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_2 < 0x50) {
    _Size = (ulonglong)param_2;
    memcpy(local_68,param_1,_Size);
    if (0x4f < _Size) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_68[_Size] = 0;
    lVar2 = ssl3_get_cipher_by_std_name(local_68);
    if (lVar2 == 0) {
      local_78 = 0x50c;
      uVar3 = 0xb9;
    }
    else {
      iVar1 = OPENSSL_sk_push(param_3,lVar2);
      if (iVar1 != 0) {
        return 1;
      }
      local_78 = 0x511;
      uVar3 = 0x44;
    }
    ERR_put_error(0x14,0x26e,uVar3,"ssl\\ssl_ciph.c");
  }
  else {
    local_78 = 0x503;
    ERR_put_error(0x14,0x26e,0xb9,"ssl\\ssl_ciph.c");
  }
  return 0;
}

// FUN_14f665200 @ 14f665200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665200(undefined8 param_1)

{
  CRYPTO_free(param_1,"ssl\\ssl_ciph.c",0x79e);
  return;
}

// FUN_14f665230 @ 14f665230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f665230(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = COMP_zlib();
  CRYPTO_mem_ctrl(3);
  DAT_1553dfe20 = OPENSSL_sk_new(&LAB_14f665760);
  iVar2 = COMP_get_type(uVar3);
  if (((iVar2 != 0) && (DAT_1553dfe20 != 0)) &&
     (puVar4 = (undefined4 *)CRYPTO_malloc(0x18,"ssl\\ssl_ciph.c",0x1d3),
     puVar4 != (undefined4 *)0x0)) {
    *(undefined8 *)(puVar4 + 4) = uVar3;
    *puVar4 = 1;
    uVar3 = COMP_get_name(uVar3);
    lVar1 = DAT_1553dfe20;
    *(undefined8 *)(puVar4 + 2) = uVar3;
    OPENSSL_sk_push(lVar1,puVar4);
    OPENSSL_sk_sort(DAT_1553dfe20);
  }
  CRYPTO_mem_ctrl(2);
  return 1;
}

// FUN_14f6652f0 @ 14f6652f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6652f0(void)

{
  DAT_1553dfe2c = FUN_14f665230();
  return;
}

// FUN_14f665320 @ 14f665320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f665320(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  local_res10[0] = 0;
  lVar2 = EVP_PKEY_asn1_find_str(local_res18,param_1,0xffffffff);
  if ((lVar2 != 0) && (iVar1 = EVP_PKEY_asn1_get0_info(local_res10,0,0,0,0,lVar2), iVar1 < 1)) {
    local_res10[0] = 0;
  }
  ENGINE_finish(local_res18[0]);
  return local_res10[0];
}

// FUN_14f665460 @ 14f665460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f665460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dfe28,FUN_14f6652f0,param_3,param_4,0x14f66546a);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = DAT_1553dfe2c;
  }
  return uVar2;
}

// FUN_14f6654a0 @ 14f6654a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6654a0(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6654b5;
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
    return 0;
  }
  if ((*param_2 != '\0') &&
     (iVar1 = CONF_parse_list(param_2,0x3a,1,FUN_14f6650f0,lVar2,uVar3), iVar1 == 0)) {
    OPENSSL_sk_free(lVar2);
    return 0;
  }
  OPENSSL_sk_free(*param_1);
  *param_1 = lVar2;
  return 1;
}

// FUN_14f665540 @ 14f665540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665540(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f665560 @ 14f665560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665560(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_14f665580 @ 14f665580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665580(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6655a0 @ 14f6655a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6655a0(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f6655c0 @ 14f6655c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6655c0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6655e0 @ 14f6655e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6655e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f665600 @ 14f665600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665600(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f665620 @ 14f665620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665620(void)

{
  OPENSSL_sk_set_cmp_func();
  return;
}

// FUN_14f665640 @ 14f665640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665640(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f665660 @ 14f665660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665660(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f665680 @ 14f665680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665680(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6656a0 @ 14f6656a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6656a0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f6656c0 @ 14f6656c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6656c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6656e0 @ 14f6656e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6656e0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f665700 @ 14f665700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665700(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f665720 @ 14f665720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665720(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f665740 @ 14f665740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665740(void)

{
  OPENSSL_sk_value();
  return;
}

// ssl3_comp_find @ 14f665780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ssl3_comp_find(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar1 = OPENSSL_sk_num();
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = (int *)OPENSSL_sk_value(param_1,iVar3);
        if (*piVar2 == param_2) {
          return piVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}

// ssl_cert_is_disabled @ 14f665800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_is_disabled(void)

{
  longlong lVar1;
  
  lVar1 = ssl_cert_lookup_by_idx();
  if ((lVar1 != 0) && ((DAT_1553dffac & *(uint *)(lVar1 + 4)) == 0)) {
    return 0;
  }
  return 1;
}

// FUN_14f665840 @ 14f665840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f665840(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,int param_8,int param_9,undefined8 *param_10,undefined8 *param_11)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  bVar2 = false;
  if ((param_8 == 3) || (param_8 == 6)) {
    bVar2 = true;
  }
  plVar4 = (longlong *)*param_10;
  plVar5 = (longlong *)*param_11;
  plVar3 = plVar5;
  plVar6 = plVar4;
  if (bVar2) {
    plVar3 = plVar4;
    plVar6 = plVar5;
  }
  if (plVar3 == (longlong *)0x0) {
    *param_10 = plVar4;
    *param_11 = plVar5;
    return;
  }
  do {
    if (plVar6 == (longlong *)0x0) break;
    if (bVar2) {
      plVar7 = (longlong *)plVar6[3];
    }
    else {
      plVar7 = (longlong *)plVar6[2];
    }
    lVar1 = *plVar6;
    if (param_9 < 0) {
      if (((((((param_1 == 0) || (param_1 == *(int *)(lVar1 + 0x18))) &&
             ((param_2 == 0 || ((*(uint *)(lVar1 + 0x1c) & param_2) != 0)))) &&
            ((param_3 == 0 || ((*(uint *)(lVar1 + 0x20) & param_3) != 0)))) &&
           ((param_4 == 0 || ((*(uint *)(lVar1 + 0x24) & param_4) != 0)))) &&
          ((((param_5 == 0 || ((*(uint *)(lVar1 + 0x28) & param_5) != 0)) &&
            ((param_6 == 0 || (param_6 == *(int *)(lVar1 + 0x2c))))) &&
           (((param_7 & 0x1f) == 0 || ((*(uint *)(lVar1 + 0x3c) & param_7 & 0x1f) != 0)))))) &&
         (((param_7 & 0x20) == 0 || ((*(uint *)(lVar1 + 0x3c) & param_7 & 0x20) != 0))))
      goto LAB_14f665999;
    }
    else if (param_9 == *(int *)(lVar1 + 0x44)) {
LAB_14f665999:
      if (param_8 == 1) {
        if ((int)plVar6[1] == 0) {
          if (plVar6 != plVar5) {
            if (plVar6 == plVar4) {
              plVar4 = (longlong *)plVar6[2];
            }
            if (plVar6[3] != 0) {
              *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
            }
            if (plVar6[2] != 0) {
              *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
            }
            plVar5[2] = (longlong)plVar6;
            plVar6[3] = (longlong)plVar5;
            plVar6[2] = 0;
            plVar5 = plVar6;
          }
          *(undefined4 *)(plVar6 + 1) = 1;
        }
      }
      else if (param_8 == 4) {
        if (((int)plVar6[1] != 0) && (plVar6 != plVar5)) {
          if (plVar6 == plVar4) {
            plVar4 = (longlong *)plVar6[2];
          }
          if (plVar6[3] != 0) {
            *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
          }
          if (plVar6[2] != 0) {
            *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
          }
          plVar5[2] = (longlong)plVar6;
          plVar6[3] = (longlong)plVar5;
          plVar6[2] = 0;
          plVar5 = plVar6;
        }
      }
      else if (param_8 == 3) {
        if ((int)plVar6[1] != 0) {
          if (plVar6 == plVar4) {
            *(undefined4 *)(plVar6 + 1) = 0;
          }
          else {
            if (plVar6 == plVar5) {
              plVar5 = (longlong *)plVar6[3];
            }
            if (plVar6[2] != 0) {
              *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
            }
            if (plVar6[3] != 0) {
              *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
            }
            plVar4[3] = (longlong)plVar6;
            plVar6[2] = (longlong)plVar4;
            plVar6[3] = 0;
            *(undefined4 *)(plVar6 + 1) = 0;
            plVar4 = plVar6;
          }
        }
      }
      else if (param_8 == 6) {
        if (((int)plVar6[1] != 0) && (plVar6 != plVar4)) {
          if (plVar6 == plVar5) {
            plVar5 = (longlong *)plVar6[3];
          }
          if (plVar6[2] != 0) {
            *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
          }
          if (plVar6[3] != 0) {
            *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
          }
          plVar4[3] = (longlong)plVar6;
          plVar6[2] = (longlong)plVar4;
          plVar6[3] = 0;
          plVar4 = plVar6;
        }
      }
      else if (param_8 == 2) {
        if (plVar4 == plVar6) {
          plVar4 = (longlong *)plVar6[2];
        }
        else {
          *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
        }
        if (plVar5 == plVar6) {
          plVar5 = (longlong *)plVar6[3];
        }
        *(undefined4 *)(plVar6 + 1) = 0;
        if (plVar6[2] != 0) {
          *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
        }
        if (plVar6[3] != 0) {
          *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
        }
        plVar6[2] = 0;
        plVar6[3] = 0;
      }
    }
    bVar8 = plVar6 != plVar3;
    plVar6 = plVar7;
  } while (bVar8);
  *param_10 = plVar4;
  *param_11 = plVar5;
  return;
}

// FUN_14f665bc0 @ 14f665bc0

void FUN_14f665bc0(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,undefined8 *param_7)

{
  uint *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  for (; param_7 != (undefined8 *)0x0; param_7 = (undefined8 *)param_7[2]) {
    *param_1 = *param_7;
    param_1 = param_1 + 1;
  }
  if (0 < (int)param_2) {
    puVar1 = &DAT_15347acc0;
    puVar2 = &DAT_15347aca0;
    do {
      if (((((puVar1[-1] == 0) || ((~param_3 & puVar1[-1]) != 0)) &&
           ((*puVar1 == 0 || ((~param_4 & *puVar1) != 0)))) &&
          ((puVar1[1] == 0 || ((~param_5 & puVar1[1]) != 0)))) &&
         ((puVar1[2] == 0 || ((~param_6 & puVar1[2]) != 0)))) {
        *param_1 = puVar2;
        param_1 = param_1 + 1;
      }
      puVar2 = puVar2 + 0x50;
      puVar1 = puVar1 + 0x14;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = 0;
  return;
}

// FUN_14f665ca0 @ 14f665ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f665ca0(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong param_7,longlong *param_8,longlong *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  ulonglong uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar21;
  int iVar22;
  int iVar24;
  undefined1 auVar23 [16];
  
  if (0 < param_2) {
    iVar10 = 0;
    iVar11 = 0;
    puVar9 = (undefined8 *)(param_7 + 0x18);
    do {
      piVar6 = (int *)(**(code **)(param_1 + 0xb0))(iVar11);
      if (((((piVar6 != (int *)0x0) && (*piVar6 != 0)) && ((piVar6[7] & param_3) == 0)) &&
          ((((piVar6[8] & param_4) == 0 && ((piVar6[9] & param_5) == 0)) &&
           (((piVar6[10] & param_6) == 0 &&
            ((uVar7 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 8, uVar7 != 0 ||
             (piVar6[0xb] != 0)))))))) && ((uVar7 == 0 || (piVar6[0xd] != 0)))) {
        iVar10 = iVar10 + 1;
        puVar9[-3] = piVar6;
        puVar9[-1] = 0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + -2) = 0;
        puVar9 = puVar9 + 4;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_2);
    if (0 < iVar10) {
      *(undefined8 *)(param_7 + 0x18) = 0;
      if (1 < iVar10) {
        iVar8 = 1;
        iVar11 = iVar10 + -1;
        *(longlong *)(param_7 + 0x10) = param_7 + 0x20;
        iVar5 = __xmm_00000003000000020000000100000000._4_4_;
        iVar4 = (int)__xmm_00000003000000020000000100000000;
        iVar3 = _UNK_150631da4;
        iVar2 = ___xmm_00000001000000010000000100000001;
        if (((1 < iVar11) && (3 < iVar10 - 2U)) && (1 < __isa_available)) {
          uVar7 = iVar10 - 2U & 0x80000003;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
          }
          plVar12 = (longlong *)(param_7 + 0x50);
          iVar22 = iVar8;
          do {
            iVar1 = iVar22 + 2;
            iVar8 = iVar22 + 4;
            iVar21 = iVar22 + iVar4;
            iVar24 = iVar22 + iVar5;
            auVar19._0_4_ = iVar21 - iVar2;
            auVar19._4_4_ = iVar24 - iVar3;
            auVar19._8_4_ = iVar22;
            auVar19._12_4_ = iVar22;
            auVar16._0_4_ = iVar2 + iVar21;
            auVar16._4_4_ = iVar3 + iVar24;
            auVar16._8_4_ = iVar22;
            auVar16._12_4_ = iVar22;
            auVar17 = pmovsxdq(in_XMM2,auVar19);
            auVar16 = pmovsxdq(auVar19,auVar16);
            uVar20 = auVar17._8_8_ * 0x20 + param_7;
            plVar12[-3] = auVar17._0_8_ * 0x20 + param_7;
            iVar22 = iVar1 + iVar4;
            iVar21 = iVar1 + iVar5;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar20;
            plVar12[1] = uVar20;
            plVar12[-4] = auVar16._0_8_ * 0x20 + param_7;
            *plVar12 = auVar16._8_8_ * 0x20 + param_7;
            auVar17._0_4_ = iVar22 - iVar2;
            auVar17._4_4_ = iVar21 - iVar3;
            auVar17._8_4_ = iVar1;
            auVar17._12_4_ = iVar1;
            auVar23._0_4_ = iVar22 + iVar2;
            auVar23._4_4_ = iVar21 + iVar3;
            auVar23._8_4_ = iVar1;
            auVar23._12_4_ = iVar1;
            auVar19 = pmovsxdq(auVar18,auVar17);
            auVar16 = pmovsxdq(auVar17,auVar23);
            uVar20 = auVar19._8_8_ * 0x20 + param_7;
            plVar12[5] = auVar19._0_8_ * 0x20 + param_7;
            in_XMM2._8_8_ = 0;
            in_XMM2._0_8_ = uVar20;
            plVar12[9] = uVar20;
            plVar12[4] = auVar16._0_8_ * 0x20 + param_7;
            plVar12[8] = auVar16._8_8_ * 0x20 + param_7;
            plVar12 = plVar12 + 0x10;
            iVar22 = iVar8;
          } while (iVar8 < (int)(iVar11 - uVar7));
        }
        lVar15 = (longlong)iVar8;
        lVar14 = (longlong)iVar11;
        if (lVar15 < lVar14) {
          lVar13 = lVar14 - lVar15;
          plVar12 = (longlong *)(param_7 + 0x10 + lVar15 * 0x20);
          do {
            *plVar12 = (longlong)(iVar8 + 1) * 0x20 + param_7;
            plVar12[1] = (longlong)(iVar8 + -1) * 0x20 + param_7;
            lVar13 = lVar13 + -1;
            plVar12 = plVar12 + 4;
            iVar8 = iVar8 + 1;
          } while (lVar13 != 0);
        }
        *(longlong *)(lVar14 * 0x20 + 0x18 + param_7) = (longlong)(iVar10 + -2) * 0x20 + param_7;
      }
      lVar14 = (longlong)(iVar10 + -1) * 0x20 + param_7;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *param_8 = param_7;
      *param_9 = lVar14;
    }
  }
  return;
}

// ssl_cipher_get_evp @ 14f665fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ssl_cipher_get_evp(uint *param_1,longlong *param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,undefined8 *param_6,int param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  uint local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f665fc8;
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == 0) {
    return 0;
  }
  piVar9 = (int *)0x0;
  if (param_6 == (undefined8 *)0x0) {
    if (param_2 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    CRYPTO_THREAD_run_once(&DAT_1553dfe28,FUN_14f6652f0);
    lVar7 = DAT_1553dfe20;
    *param_6 = 0;
    local_38[0] = param_1[0x76];
    if (lVar7 != 0) {
      uVar2 = OPENSSL_sk_find(lVar7,local_38);
      uVar5 = OPENSSL_sk_value(DAT_1553dfe20,uVar2);
      *param_6 = uVar5;
    }
    if (param_2 == (longlong *)0x0) {
      if (param_3 != (longlong *)0x0) {
        return 0;
      }
      return 1;
    }
  }
  if (param_3 != (longlong *)0x0) {
    piVar8 = &DAT_15347aaf0;
    piVar6 = piVar9;
    do {
      if (*piVar8 == *(int *)(lVar1 + 0x24)) {
        iVar3 = (int)piVar6;
        if (iVar3 == -1) {
          *param_2 = 0;
        }
        else {
          if (iVar3 == 5) {
            lVar7 = EVP_enc_null();
          }
          else {
            lVar7 = (&DAT_1553dfe90)[iVar3];
          }
          *param_2 = lVar7;
        }
        goto LAB_14f6660c0;
      }
      piVar6 = (int *)((longlong)piVar6 + 1);
      piVar8 = piVar8 + 2;
    } while (piVar6 < &DAT_00000016);
    *param_2 = 0;
LAB_14f6660c0:
    piVar8 = &DAT_15347aba0;
    piVar6 = piVar9;
    do {
      if (*piVar8 == *(int *)(lVar1 + 0x28)) {
        if ((int)piVar6 != -1) {
          lVar7 = (longlong)(int)piVar6;
          *param_3 = (&DAT_1553dfe30)[lVar7];
          if (param_4 != (int *)0x0) {
            *param_4 = *(int *)(&DAT_154df49d0 + lVar7 * 4);
          }
          piVar9 = param_4;
          if (param_5 != (undefined8 *)0x0) {
            *param_5 = (&DAT_1553dff40)[lVar7];
          }
          goto LAB_14f666151;
        }
        break;
      }
      piVar6 = (int *)((longlong)piVar6 + 1);
      piVar8 = piVar8 + 2;
    } while (piVar6 < &DAT_0000000c);
    *param_3 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (*(int *)(lVar1 + 0x28) != 0x40) {
      piVar9 = param_4;
    }
LAB_14f666151:
    if (((*param_2 != 0) &&
        ((*param_3 != 0 || (uVar4 = EVP_CIPHER_flags(), (uVar4 >> 0x15 & 1) != 0)))) &&
       ((piVar9 == (int *)0x0 || (*piVar9 != 0)))) {
      if ((((param_7 == 0) && ((*param_1 & 0xffffff00) == 0x300)) && (0x300 < (int)*param_1)) &&
         (((((*(int *)(lVar1 + 0x24) == 4 && (*(int *)(lVar1 + 0x28) == 1)) &&
            (lVar7 = EVP_get_cipherbyname("RC4-HMAC-MD5"), lVar7 != 0)) ||
           (((((*(int *)(lVar1 + 0x24) == 0x40 && (*(int *)(lVar1 + 0x28) == 2)) &&
              (lVar7 = EVP_get_cipherbyname("AES-128-CBC-HMAC-SHA1"), lVar7 != 0)) ||
             (((*(int *)(lVar1 + 0x24) == 0x80 && (*(int *)(lVar1 + 0x28) == 2)) &&
              (lVar7 = EVP_get_cipherbyname("AES-256-CBC-HMAC-SHA1"), lVar7 != 0)))) ||
            (((*(int *)(lVar1 + 0x24) == 0x40 && (*(int *)(lVar1 + 0x28) == 0x10)) &&
             (lVar7 = EVP_get_cipherbyname("AES-128-CBC-HMAC-SHA256"), lVar7 != 0)))))) ||
          (((*(int *)(lVar1 + 0x24) == 0x80 && (*(int *)(lVar1 + 0x28) == 0x10)) &&
           (lVar7 = EVP_get_cipherbyname("AES-256-CBC-HMAC-SHA256"), lVar7 != 0)))))) {
        *param_2 = lVar7;
        *param_3 = 0;
      }
      return 1;
    }
  }
  return 0;
}

// ssl_cipher_get_overhead @ 14f666280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_cipher_get_overhead
          (longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)(param_1 + 0x24);
  lVar8 = 0;
  lVar7 = 0;
  lVar9 = 0;
  lVar5 = lVar8;
  if (((uVar3 & 0x303000) == 0) && ((uVar3 & 0xc000) == 0)) {
    if (((uVar3 & 0x30000) == 0) && ((uVar3 >> 0x13 & 1) == 0)) {
      if ((*(byte *)(param_1 + 0x28) & 0x40) == 0) {
        uVar1 = SSL_CIPHER_get_digest_nid();
        uVar4 = OBJ_nid2sn(uVar1);
        lVar5 = EVP_get_digestbyname(uVar4);
        if (lVar5 != 0) {
          iVar2 = EVP_MD_size(lVar5);
          lVar5 = (longlong)iVar2;
          lVar6 = lVar8;
          if (*(int *)(param_1 + 0x24) != 0x20) {
            uVar1 = SSL_CIPHER_get_cipher_nid(param_1);
            uVar4 = OBJ_nid2sn(uVar1);
            lVar9 = EVP_get_cipherbyname(uVar4);
            if (lVar9 == 0) {
              return 0;
            }
            uVar3 = EVP_CIPHER_flags(lVar9);
            if ((uVar3 & 0xf0007) != 2) {
              return 0;
            }
            lVar7 = 1;
            iVar2 = EVP_CIPHER_iv_length(lVar9);
            lVar6 = (longlong)iVar2;
            iVar2 = EVP_CIPHER_block_size(lVar9);
            lVar9 = (longlong)iVar2;
          }
          goto LAB_14f66636d;
        }
      }
      return 0;
    }
    lVar6 = 0x10;
  }
  else {
    lVar6 = 0x18;
    lVar7 = lVar8;
    lVar9 = lVar8;
  }
LAB_14f66636d:
  *param_2 = lVar5;
  *param_3 = lVar7;
  *param_4 = lVar9;
  *param_5 = lVar6;
  return 1;
}

// FUN_14f6663e0 @ 14f6663e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f6663e0(byte *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,longlong param_5
             )

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  byte *_Str1;
  longlong lVar12;
  size_t _MaxCount;
  int local_res8;
  undefined4 uVar13;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  
  bVar1 = *param_1;
  uVar13 = 1;
  local_res8 = 0;
  local_64 = 1;
  uVar6 = local_64;
  do {
    if (bVar1 == 0) {
      return uVar13;
    }
    local_64 = uVar6;
    if (bVar1 == 0x2d) {
      local_54 = 3;
      local_58 = 3;
      local_60 = 3;
LAB_14f666467:
      param_1 = param_1 + 1;
LAB_14f66646c:
      local_5c = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_70 = 0;
      local_78 = 0;
      do {
        _Str1 = param_1;
        _MaxCount = 0;
        lVar11 = 0;
        param_1 = _Str1;
        while( true ) {
          bVar1 = *param_1;
          iVar9 = (int)_MaxCount;
          if (((0x2d < (byte)(bVar1 - 0x2d)) ||
              ((0x3ffffff11ffbU >> ((longlong)(char)(bVar1 - 0x2d) & 0x3fU) & 1) == 0)) &&
             (0x19 < (byte)(bVar1 + 0x9f))) break;
          param_1 = param_1 + 1;
          _MaxCount = (size_t)(iVar9 + 1);
          lVar11 = lVar11 + 1;
        }
        if (iVar9 == 0) {
          ERR_put_error(0x14,0xe6,0x118,"ssl\\ssl_ciph.c",0x404);
          return 0;
        }
        if (local_60 == 5) {
LAB_14f66663f:
          bVar5 = false;
          break;
        }
        if (bVar1 == 0x2b) {
          param_1 = param_1 + 1;
        }
        local_res8 = 0;
        lVar12 = 0;
        if (*param_4 == 0) goto LAB_14f66663f;
        plVar10 = param_4;
        while ((iVar8 = strncmp((char *)_Str1,*(char **)(*plVar10 + 8),(longlong)iVar9), iVar8 != 0
               || (*(char *)(*(longlong *)(*plVar10 + 8) + lVar11) != '\0'))) {
          lVar12 = lVar12 + 1;
          plVar10 = param_4 + lVar12;
          if (param_4[lVar12] == 0) goto LAB_14f66663f;
        }
        bVar5 = true;
        piVar4 = (int *)param_4[lVar12];
        uVar2 = piVar4[7];
        uVar7 = local_5c;
        if ((((((uVar2 != 0) && (uVar7 = uVar2, local_5c != 0)) &&
              (local_5c = local_5c & uVar2, uVar7 = local_5c, local_5c == 0)) ||
             (((local_5c = uVar7, uVar2 = piVar4[8], uVar7 = local_68, uVar2 != 0 &&
               (uVar7 = uVar2, local_68 != 0)) &&
              (local_68 = local_68 & uVar2, uVar7 = local_68, local_68 == 0)))) ||
            (((local_68 = uVar7, uVar2 = piVar4[9], uVar7 = local_6c, uVar2 != 0 &&
              (uVar7 = uVar2, local_6c != 0)) &&
             (local_6c = local_6c & uVar2, uVar7 = local_6c, local_6c == 0)))) ||
           (((local_6c = uVar7, uVar2 = piVar4[10], uVar7 = local_70, uVar2 != 0 &&
             (uVar7 = uVar2, local_70 != 0)) &&
            (local_70 = local_70 & uVar2, uVar7 = local_70, local_70 == 0)))) goto LAB_14f66663f;
        local_70 = uVar7;
        uVar2 = piVar4[0xf];
        uVar7 = local_74;
        if ((((uVar2 & 0x1f) != 0) && (uVar7 = uVar2 & 0x1f, (local_74 & 0x1f) != 0)) &&
           (local_74 = local_74 & (uVar2 | 0xffffffe0), uVar7 = local_74, (local_74 & 0x1f) == 0))
        goto LAB_14f66663f;
        local_74 = uVar7;
        if ((uVar2 & 0x20) != 0) {
          if ((local_74 & 0x20) == 0) {
            local_74 = local_74 | uVar2 & 0x20;
          }
          else {
            local_74 = local_74 & (uVar2 | 0xffffffdf);
            if ((local_74 & 0x20) == 0) goto LAB_14f66663f;
          }
        }
        iVar8 = local_78;
        if (*piVar4 == 0) {
          iVar3 = piVar4[0xb];
          if (((iVar3 != 0) && (iVar8 = iVar3, local_78 != 0)) && (local_78 != iVar3)) {
            bVar5 = false;
            break;
          }
        }
        else {
          local_res8 = piVar4[6];
        }
        local_78 = iVar8;
      } while (bVar1 == 0x2b);
      if (local_58 == 5) {
        iVar8 = 0;
        if (iVar9 == 8) {
          iVar9 = strncmp((char *)_Str1,"STRENGTH",_MaxCount);
          if (iVar9 != 0) {
LAB_14f6668c2:
            uVar13 = 0x4a7;
            goto LAB_14f6668ca;
          }
          iVar8 = FUN_14f666a20(param_2,param_3);
        }
        else {
          if ((iVar9 != 10) || (iVar9 = strncmp((char *)_Str1,"SECLEVEL=",9), iVar9 != 0))
          goto LAB_14f6668c2;
          if ((int)(char)_Str1[9] - 0x30U < 6) {
            iVar8 = 1;
            *(uint *)(param_5 + 0x1f0) = (int)(char)_Str1[9] - 0x30U;
            goto LAB_14f6668e5;
          }
          uVar13 = 0x4a1;
LAB_14f6668ca:
          ERR_put_error(0x14,0xe6,0x118,"ssl\\ssl_ciph.c",uVar13);
        }
LAB_14f6668e5:
        local_64 = 0;
        if (iVar8 != 0) {
          local_64 = uVar6;
        }
        bVar1 = *param_1;
        while ((bVar1 != 0 &&
               ((0x3b < bVar1 || ((0xc00100100000000U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
               ))) {
          bVar1 = param_1[1];
          param_1 = param_1 + 1;
        }
      }
      else if (bVar5) {
        FUN_14f665840(local_res8,local_5c,local_68,local_6c,local_70,local_78,local_74,local_54,
                      0xffffffff,param_2,param_3);
      }
      else {
        bVar1 = *param_1;
        while( true ) {
          if (bVar1 == 0) {
            return uVar6;
          }
          if ((bVar1 < 0x3c) && ((0xc00100100000000U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0))
          break;
          bVar1 = param_1[1];
          param_1 = param_1 + 1;
        }
      }
      uVar13 = local_64;
      if (*param_1 == 0) {
        return local_64;
      }
    }
    else {
      if (bVar1 == 0x2b) {
        local_54 = 4;
        local_58 = 4;
        local_60 = 4;
        goto LAB_14f666467;
      }
      if (bVar1 == 0x21) {
        local_54 = 2;
        local_58 = 2;
        local_60 = 2;
        goto LAB_14f666467;
      }
      if (bVar1 == 0x40) {
        local_54 = 5;
        local_58 = 5;
        local_60 = 5;
        goto LAB_14f666467;
      }
      local_54 = 1;
      local_60 = 1;
      local_58 = 1;
      if ((0x3b < bVar1) || ((0xc00100100000000U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
      goto LAB_14f66646c;
      param_1 = param_1 + 1;
    }
    bVar1 = *param_1;
    uVar6 = local_64;
  } while( true );
}

// FUN_14f666a20 @ 14f666a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f666a20(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = 0x14f666a3a;
  iVar6 = 0;
  for (plVar2 = (longlong *)*param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
    if (((int)plVar2[1] != 0) && (iVar6 < *(int *)(*plVar2 + 0x44))) {
      iVar6 = *(int *)(*plVar2 + 0x44);
    }
  }
  lVar5 = CRYPTO_zalloc((longlong)(iVar6 + 1) << 2,"ssl\\ssl_ciph.c",0x3a1);
  if (lVar5 == 0) {
    ERR_put_error(0x14,0xe7,0x41,"ssl\\ssl_ciph.c",0x3a3,uVar12);
    uVar12 = 0;
  }
  else {
    for (plVar2 = (longlong *)*param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
      if ((int)plVar2[1] != 0) {
        piVar1 = (int *)(lVar5 + (longlong)*(int *)(*plVar2 + 0x44) * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        if (0 < *(int *)(lVar5 + lVar7 * 4)) {
          plVar2 = (longlong *)*param_2;
          plVar10 = (longlong *)*param_1;
          plVar8 = plVar2;
          plVar9 = plVar10;
          if (plVar2 != (longlong *)0x0) {
            do {
              if (plVar9 == (longlong *)0x0) break;
              plVar3 = (longlong *)plVar9[2];
              if ((((lVar7 < 0) || (iVar6 == *(int *)(*plVar9 + 0x44))) && ((int)plVar9[1] != 0)) &&
                 (plVar9 != plVar8)) {
                if (plVar9 == plVar10) {
                  plVar10 = plVar3;
                }
                if (plVar9[3] != 0) {
                  *(longlong **)(plVar9[3] + 0x10) = plVar3;
                }
                lVar4 = plVar9[2];
                if (lVar4 != 0) {
                  *(longlong *)(lVar4 + 0x18) = plVar9[3];
                }
                plVar8[2] = (longlong)plVar9;
                plVar9[3] = (longlong)plVar8;
                plVar9[2] = 0;
                plVar8 = plVar9;
              }
              bVar11 = plVar9 != plVar2;
              plVar9 = plVar3;
            } while (bVar11);
          }
          *param_1 = plVar10;
          *param_2 = (longlong)plVar8;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    CRYPTO_free(lVar5,"ssl\\ssl_ciph.c",0x3b9);
    uVar12 = 1;
  }
  return uVar12;
}

// ssl_comp_free_compression_methods_int @ 14f666bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_comp_free_compression_methods_int(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_1553dfe20;
  DAT_1553dfe20 = 0;
  OPENSSL_sk_pop_free(uVar1,FUN_14f665200);
  return;
}

// ssl_create_cipher_list @ 14f666c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_create_cipher_list
                   (longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                   char *param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  char *pcVar14;
  longlong *plVar15;
  uint uVar16;
  char *pcVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  bool bVar21;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar23;
  undefined8 uVar22;
  longlong *local_48;
  longlong *local_40;
  
  uVar12 = param_6;
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar16 = 0;
  local_48 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  if (((param_5 == (char *)0x0) || (param_3 == (longlong *)0x0)) || (param_4 == 0)) {
    return 0;
  }
  iVar7 = FUN_14f664f70(param_1,param_6,&param_5);
  uVar6 = DAT_1553dffac;
  uVar5 = DAT_1553dffa8;
  uVar4 = DAT_1553dffa4;
  uVar3 = DAT_1553dffa0;
  if (iVar7 == 0) {
    return 0;
  }
  iVar7 = (**(code **)(param_1 + 0xa8))();
  lVar10 = CRYPTO_malloc((longlong)iVar7 << 5,"ssl\\ssl_ciph.c",0x5a2);
  if (lVar10 == 0) {
    uVar12 = CONCAT44(uVar23,0x5a4);
LAB_14f6674e1:
    ERR_put_error(0x14,0xa6,0x41,"ssl\\ssl_ciph.c",uVar12);
    return 0;
  }
  uVar22 = CONCAT44(uVar23,uVar3);
  FUN_14f665ca0(param_1,iVar7,uVar5,uVar6,uVar22,uVar4,lVar10,&local_48,&local_40);
  uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
  iVar9 = 1;
  plVar15 = local_48;
  plVar18 = local_40;
  if (local_40 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar20 = (longlong *)plVar15[2];
      if ((((*(byte *)(*plVar15 + 0x1c) & 4) != 0) && ((*(byte *)(*plVar15 + 0x20) & 8) != 0)) &&
         ((int)plVar15[1] == 0)) {
        if (plVar15 != plVar18) {
          if (plVar15 == local_48) {
            local_48 = plVar20;
          }
          if (plVar15[3] != 0) {
            *(longlong **)(plVar15[3] + 0x10) = plVar20;
          }
          lVar11 = plVar15[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar15[3];
          }
          plVar18[2] = (longlong)plVar15;
          plVar15[3] = (longlong)plVar18;
          plVar15[2] = 0;
          plVar18 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 1;
      }
      bVar21 = plVar15 != local_40;
      plVar15 = plVar20;
    } while (bVar21);
  }
  plVar15 = local_48;
  plVar20 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[2];
      if (((*(byte *)(*plVar15 + 0x1c) & 4) != 0) && ((int)plVar15[1] == 0)) {
        if (plVar15 != plVar20) {
          if (plVar15 == local_48) {
            local_48 = plVar19;
          }
          if (plVar15[3] != 0) {
            *(longlong **)(plVar15[3] + 0x10) = plVar19;
          }
          lVar11 = plVar15[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar15[3];
          }
          plVar20[2] = (longlong)plVar15;
          plVar15[3] = (longlong)plVar20;
          plVar15[2] = 0;
          plVar20 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 1;
      }
      bVar21 = plVar15 != plVar18;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = local_48;
  plVar18 = plVar20;
  if (local_48 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar18[3];
      if (((*(byte *)(*plVar18 + 0x1c) & 4) != 0) && ((int)plVar18[1] != 0)) {
        if (plVar18 != plVar15) {
          if (plVar18 == plVar20) {
            plVar20 = plVar19;
          }
          if (plVar18[2] != 0) {
            *(longlong **)(plVar18[2] + 0x18) = plVar19;
          }
          lVar11 = plVar18[3];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x10) = plVar18[2];
          }
          plVar15[3] = (longlong)plVar18;
          plVar18[2] = (longlong)plVar15;
          plVar18[3] = 0;
          plVar15 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 0;
      }
      bVar21 = plVar18 != local_48;
      plVar18 = plVar19;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if (((*(uint *)(*plVar18 + 0x24) & 0x3000) != 0) && ((int)plVar18[1] == 0)) {
        if (plVar18 != plVar19) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar19[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar19;
          plVar18[2] = 0;
          plVar19 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if (((*(uint *)(*plVar18 + 0x24) & 0x80000) != 0) && ((int)plVar18[1] == 0)) {
        if (plVar18 != plVar20) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar20[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar20;
          plVar18[2] = 0;
          plVar20 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if (((*(uint *)(*plVar18 + 0x24) & 0x3c0c0) != 0) && ((int)plVar18[1] == 0)) {
        if (plVar18 != plVar19) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar19[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar19;
          plVar18[2] = 0;
          plVar19 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((int)plVar18[1] == 0) {
        if (plVar18 != plVar20) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar20[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar20;
          plVar18[2] = 0;
          plVar20 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x28) & 1) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar19)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar19[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar19;
        plVar18[2] = 0;
        plVar19 = plVar18;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x20) & 4) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar20)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar20[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar20;
        plVar18[2] = 0;
        plVar20 = plVar18;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x1c) & 1) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar19)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar19[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar19;
        plVar18[2] = 0;
        plVar19 = plVar18;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x1c) & 8) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar20)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar20[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar20;
        plVar18[2] = 0;
        plVar20 = plVar18;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  local_40 = plVar20;
  plVar18 = plVar15;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x24) & 4) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != local_40)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar19;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar19;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        local_40[2] = (longlong)plVar18;
        plVar18[3] = (longlong)local_40;
        plVar18[2] = 0;
        local_40 = plVar18;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar19;
    } while (bVar21);
  }
  local_48 = plVar15;
  iVar8 = FUN_14f666a20(&local_48,&local_40);
  if (iVar8 == 0) {
    CRYPTO_free(lVar10,"ssl\\ssl_ciph.c",0x5e7);
    return 0;
  }
  plVar15 = local_40;
  plVar18 = local_48;
  if (local_48 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar20 = (longlong *)plVar15[3];
      if (((*(int *)(*plVar15 + 0x2c) == 0x303) && ((int)plVar15[1] != 0)) && (plVar15 != plVar18))
      {
        if (plVar15 == local_40) {
          local_40 = plVar20;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar20;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar18[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar18;
        plVar15[3] = 0;
        plVar18 = plVar15;
      }
      bVar21 = plVar15 != local_48;
      plVar15 = plVar20;
    } while (bVar21);
  }
  plVar15 = local_40;
  plVar20 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x28) & 0x40) != 0) && ((int)plVar15[1] != 0)) &&
         (plVar15 != plVar20)) {
        if (plVar15 == local_40) {
          local_40 = plVar19;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar19;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar20[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar20;
        plVar15[3] = 0;
        plVar20 = plVar15;
      }
      bVar21 = plVar15 != plVar18;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = local_40;
  plVar18 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x1c) & 6) != 0) && ((int)plVar15[1] != 0)) &&
         (plVar15 != plVar18)) {
        if (plVar15 == local_40) {
          local_40 = plVar19;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar19;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar18[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar18;
        plVar15[3] = 0;
        plVar18 = plVar15;
      }
      bVar21 = plVar15 != plVar20;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = local_40;
  plVar20 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x1c) & 6) != 0) && ((*(byte *)(*plVar15 + 0x28) & 0x40) != 0)) &&
         (((int)plVar15[1] != 0 && (plVar15 != plVar20)))) {
        if (plVar15 == local_40) {
          local_40 = plVar19;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar19;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar20[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar20;
        plVar15[3] = 0;
        plVar20 = plVar15;
      }
      bVar21 = plVar15 != plVar18;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = plVar20;
  plVar18 = local_40;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar18[3];
      if ((int)plVar18[1] != 0) {
        if (plVar18 != plVar15) {
          if (plVar18 == local_40) {
            local_40 = plVar19;
          }
          if (plVar18[2] != 0) {
            *(longlong **)(plVar18[2] + 0x18) = plVar19;
          }
          lVar11 = plVar18[3];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x10) = plVar18[2];
          }
          plVar15[3] = (longlong)plVar18;
          plVar18[2] = (longlong)plVar15;
          plVar18[3] = 0;
          plVar15 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 0;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar19;
    } while (bVar21);
  }
  local_48 = plVar15;
  lVar11 = CRYPTO_malloc((longlong)(iVar7 + 0x4d) << 3,"ssl\\ssl_ciph.c",0x613);
  if (lVar11 == 0) {
    CRYPTO_free(lVar10,"ssl\\ssl_ciph.c",0x615);
    uVar12 = CONCAT44(uVar23,0x616);
    goto LAB_14f6674e1;
  }
  FUN_14f665bc0(lVar11,0x4c,uVar5,uVar6,CONCAT44(uVar23,uVar3),uVar4,plVar15);
  pcVar17 = param_5;
  iVar7 = strncmp(param_5,"DEFAULT",7);
  pcVar14 = pcVar17;
  if (iVar7 == 0) {
    iVar9 = FUN_14f6663e0("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&local_48,&local_40,lVar11,uVar12);
    pcVar14 = pcVar17 + 7;
    if (*pcVar14 == ':') {
      pcVar14 = pcVar17 + 8;
    }
    if (iVar9 == 0) goto LAB_14f6675c6;
  }
  cVar1 = *pcVar14;
  pcVar17 = pcVar14;
  for (uVar13 = uVar16; (cVar1 != '\0' && (uVar13 < 0x80000000)); uVar13 = uVar13 + 1) {
    pcVar17 = pcVar17 + 1;
    cVar1 = *pcVar17;
  }
  if ((uVar13 & 0x7fffffff) != 0) {
    iVar9 = FUN_14f6663e0(pcVar14,&local_48,&local_40,lVar11,uVar12);
  }
LAB_14f6675c6:
  CRYPTO_free(lVar11,"ssl\\ssl_ciph.c",0x62e);
  if (iVar9 == 0) {
    CRYPTO_free(lVar10,"ssl\\ssl_ciph.c",0x631);
    lVar11 = 0;
  }
  else {
    lVar11 = OPENSSL_sk_new_null();
    if (lVar11 == 0) {
      CRYPTO_free(lVar10,"ssl\\ssl_ciph.c",0x63a);
      lVar11 = 0;
    }
    else {
      iVar7 = OPENSSL_sk_num(param_2);
      if (0 < iVar7) {
        do {
          uVar12 = OPENSSL_sk_value(param_2,uVar16);
          iVar7 = OPENSSL_sk_push(lVar11,uVar12);
          if (iVar7 == 0) {
            uVar12 = 0x642;
            goto LAB_14f6676fe;
          }
          uVar16 = uVar16 + 1;
          iVar7 = OPENSSL_sk_num(param_2);
        } while ((int)uVar16 < iVar7);
      }
      plVar15 = local_48;
      if (local_48 != (longlong *)0x0) {
LAB_14f667665:
        if (((int)plVar15[1] == 0) || (iVar7 = OPENSSL_sk_push(lVar11,*plVar15), iVar7 != 0))
        goto LAB_14f66767a;
        uVar12 = 0x64f;
LAB_14f6676fe:
        CRYPTO_free(lVar10,"ssl\\ssl_ciph.c",uVar12);
        goto LAB_14f66770d;
      }
LAB_14f667683:
      CRYPTO_free(lVar10,"ssl\\ssl_ciph.c",0x658);
      iVar7 = FUN_14f667c70(param_4,lVar11);
      if (iVar7 == 0) {
LAB_14f66770d:
        OPENSSL_sk_free(lVar11);
        lVar11 = 0;
      }
      else {
        OPENSSL_sk_free(*param_3);
        *param_3 = lVar11;
      }
    }
  }
  return lVar11;
LAB_14f66767a:
  plVar15 = (longlong *)plVar15[2];
  if (plVar15 == (longlong *)0x0) goto LAB_14f667683;
  goto LAB_14f667665;
}

// ssl_get_cipher_by_char @ 14f667730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ssl_get_cipher_by_char(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(longlong *)(param_1 + 8) + 0x90))(param_2);
  if ((piVar1 == (int *)0x0) || ((param_3 == 0 && (*piVar1 == 0)))) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

// ssl_handshake_md @ 14f667770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_handshake_md(void)

{
  uint uVar1;
  
  uVar1 = ssl_get_algorithm2();
  if ((uVar1 & 0xff) < 0xc) {
    return (&DAT_1553dfe30)[uVar1 & 0xff];
  }
  return 0;
}

// ssl_load_ciphers @ 14f6677b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_load_ciphers(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint *puVar8;
  int local_res8 [2];
  undefined8 local_res10;
  
  uVar6 = 0;
  DAT_1553dffa0 = 0;
  ssl_sort_cipher_list();
  piVar7 = &DAT_15347aaf4;
  uVar5 = uVar6;
  do {
    if (*piVar7 == 0) {
      *(undefined8 *)((longlong)&DAT_1553dfe90 + uVar5) = 0;
    }
    else {
      uVar3 = OBJ_nid2sn();
      lVar4 = EVP_get_cipherbyname(uVar3);
      *(longlong *)((longlong)&DAT_1553dfe90 + uVar5) = lVar4;
      if (lVar4 == 0) {
        DAT_1553dffa0 = DAT_1553dffa0 | piVar7[-1];
      }
    }
    uVar5 = uVar5 + 8;
    piVar7 = piVar7 + 2;
  } while (uVar5 < 0xb0);
  DAT_1553dffa4 = 0;
  puVar8 = &DAT_15347aba0;
  do {
    uVar3 = OBJ_nid2sn(puVar8[1]);
    lVar4 = EVP_get_digestbyname(uVar3);
    *(longlong *)((longlong)&DAT_1553dfe30 + uVar6) = lVar4;
    if (lVar4 == 0) {
      DAT_1553dffa4 = DAT_1553dffa4 | *puVar8;
    }
    else {
      iVar1 = EVP_MD_size(lVar4);
      if (iVar1 < 0) goto LAB_14f667ad3;
      *(longlong *)((longlong)&DAT_1553dff40 + uVar6) = (longlong)iVar1;
    }
    uVar6 = uVar6 + 8;
    puVar8 = puVar8 + 2;
  } while (uVar6 < 0x60);
  if ((DAT_1553dfe30 == 0) || (DAT_1553dfe38 == 0)) {
LAB_14f667ad3:
    uVar3 = 0;
  }
  else {
    DAT_1553dffa8 = 0;
    DAT_1553dffac = 0;
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost-mac",0xffffffff);
    if ((lVar4 != 0) && (iVar1 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar1 < 1)) {
      local_res8[0] = 0;
    }
    ENGINE_finish(local_res10);
    _DAT_154df49dc = local_res8[0];
    if (local_res8[0] == 0) {
      DAT_1553dffa4 = DAT_1553dffa4 | 8;
    }
    else {
      _DAT_1553dff58 = 0x20;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost-mac-12",0xffffffff);
    iVar1 = 0;
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    _DAT_154df49ec = local_res8[0];
    if (local_res8[0] == 0) {
      DAT_1553dffa4 = DAT_1553dffa4 | 0x100;
    }
    else {
      _DAT_1553dff78 = 0x20;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost2001",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    if (local_res8[0] == 0) {
      DAT_1553dffac = DAT_1553dffac | 0xa0;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost2012_256",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    if (local_res8[0] == 0) {
      DAT_1553dffac = DAT_1553dffac | 0x80;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost2012_512",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    if (local_res8[0] == 0) {
      DAT_1553dffac = DAT_1553dffac | 0x80;
    }
    if (((byte)DAT_1553dffac & 0xa0) == 0xa0) {
      DAT_1553dffa8 = DAT_1553dffa8 | 0x10;
    }
    uVar3 = 1;
  }
  return uVar3;
}

// ssl_md @ 14f667af0

undefined8 ssl_md(byte param_1)

{
  if (param_1 < 0xc) {
    return (&DAT_1553dfe30)[param_1];
  }
  return 0;
}

// ssl_prf_md @ 14f667b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_prf_md(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = ssl_get_algorithm2();
  uVar2 = iVar1 >> 8 & 0xff;
  if (uVar2 < 0xc) {
    return (&DAT_1553dfe30)[uVar2];
  }
  return 0;
}

// FUN_14f667b50 @ 14f667b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f667b50(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  
  lVar2 = OPENSSL_sk_dup(*param_1);
  bVar6 = false;
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num(lVar2);
    while ((0 < iVar1 && (lVar3 = OPENSSL_sk_value(lVar2,0), *(int *)(lVar3 + 0x2c) == 0x304))) {
      OPENSSL_sk_delete(lVar2);
      iVar1 = OPENSSL_sk_num(lVar2);
    }
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      do {
        uVar4 = OPENSSL_sk_value(param_3,iVar5);
        OPENSSL_sk_insert(lVar2,uVar4,iVar5);
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(param_3);
      } while (iVar5 < iVar1);
    }
    lVar3 = OPENSSL_sk_dup(lVar2);
    bVar6 = lVar3 != 0;
    if (bVar6) {
      OPENSSL_sk_free(*param_2);
      *param_2 = lVar3;
      OPENSSL_sk_set_cmp_func(lVar3,&ssl_cipher_ptr_id_cmp);
      OPENSSL_sk_sort(*param_2);
      OPENSSL_sk_free(*param_1);
      *param_1 = lVar2;
    }
  }
  return bVar6;
}

// FUN_14f667c70 @ 14f667c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f667c70(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = OPENSSL_sk_dup(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  OPENSSL_sk_free(*param_1);
  *param_1 = lVar1;
  OPENSSL_sk_set_cmp_func(lVar1,&ssl_cipher_ptr_id_cmp);
  OPENSSL_sk_sort(*param_1);
  return 1;
}

