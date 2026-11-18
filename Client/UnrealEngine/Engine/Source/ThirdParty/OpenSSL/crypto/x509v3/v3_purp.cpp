// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 54

// FUN_14f6d1b50 @ 14f6d1b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1b50(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 2) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_14f6d2b80(param_2);
      return uVar2;
    }
    if ((((uVar1 & 2) == 0) || ((*(byte *)(param_2 + 0xd4) & 0x88) != 0)) &&
       (((uVar1 & 8) == 0 || ((*(byte *)(param_2 + 0xdc) & 0x80) != 0)))) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f6d1bc0 @ 14f6d1bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1bc0(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_14f6d2b80(param_2);
      return uVar2;
    }
    if ((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f6d1c30 @ 14f6d1c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1c30(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_14f6d2b80(param_2);
      return uVar2;
    }
    if (((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
        (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0x20) != 0)))) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f6d1ca0 @ 14f6d1ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1ca0(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 4) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 & 8) == 0) || ((*(uint *)(param_2 + 0xdc) & 0x20) != 0)) {
        uVar3 = 1;
      }
      else {
        if (-1 < (char)*(uint *)(param_2 + 0xdc)) {
          return 0;
        }
        uVar3 = 2;
      }
      if ((uVar1 & 2) == 0) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xd4) & 0xc0;
    }
    else {
      uVar3 = FUN_14f6d2a60(param_2);
      if ((int)uVar3 == 0) {
        return 0;
      }
      if ((int)uVar3 != 5) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xdc) & 2;
    }
    if (bVar2 != 0) {
      return uVar3;
    }
  }
  return 0;
}

// FUN_14f6d1d20 @ 14f6d1d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1d20(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 4) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 & 8) == 0) || ((*(uint *)(param_2 + 0xdc) & 0x20) != 0)) {
        uVar3 = 1;
      }
      else {
        if (-1 < (char)*(uint *)(param_2 + 0xdc)) {
          return 0;
        }
        uVar3 = 2;
      }
      if ((uVar1 & 2) == 0) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xd4) & 0x20;
    }
    else {
      uVar3 = FUN_14f6d2a60(param_2);
      if ((int)uVar3 == 0) {
        return 0;
      }
      if ((int)uVar3 != 5) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xdc) & 2;
    }
    if (bVar2 != 0) {
      return uVar3;
    }
  }
  return 0;
}

// FUN_14f6d1da0 @ 14f6d1da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6d1da0(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = FUN_14f6d2a60(param_2);
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  if (((*(byte *)(param_2 + 0xd0) & 2) != 0) && ((*(byte *)(param_2 + 0xd4) & 2) == 0)) {
    return 0;
  }
  return 1;
}

// FUN_14f6d1e00 @ 14f6d1e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1e00(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = FUN_14f6d2a60(param_2);
    return uVar2;
  }
  if (((((*(uint *)(param_2 + 0xd0) & 2) == 0) ||
       (((*(uint *)(param_2 + 0xd4) & 0xffffff3f) == 0 && ((*(uint *)(param_2 + 0xd4) & 0xc0) != 0))
       )) && ((*(uint *)(param_2 + 0xd0) & 4) != 0)) && (*(int *)(param_2 + 0xd8) == 0x40)) {
    iVar1 = X509_get_ext_by_NID(param_2,0x7e);
    if (-1 < iVar1) {
      uVar2 = X509_get_ext(param_2,iVar1);
      iVar1 = X509_EXTENSION_get_critical(uVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

// FUN_14f6d1eb0 @ 14f6d1eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d1eb0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_14f6d2a60(param_2);
    return uVar1;
  }
  return 1;
}

// FUN_14f6d1ee0 @ 14f6d1ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1ee0(void)

{
  OBJ_bsearch_();
  return;
}

// X509_PURPOSE_add @ 14f6d1f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_PURPOSE_add(int param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int local_48 [10];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6d1f2e;
  if (param_1 - 1U < 9) {
    iVar1 = param_1 + -1;
LAB_14f6d1f77:
    if (iVar1 != -1) {
      if (iVar1 < 0) {
        piVar2 = (int *)0x0;
      }
      else if (iVar1 < 9) {
        piVar2 = (int *)(&DAT_154df8760 + (longlong)iVar1 * 0x30);
      }
      else {
        piVar2 = (int *)OPENSSL_sk_value(DAT_1553e2af0,iVar1 + -9);
      }
      goto LAB_14f6d1ffe;
    }
  }
  else if (DAT_1553e2af0 == 0) {
    iVar1 = -1;
  }
  else {
    local_48[0] = param_1;
    iVar1 = OPENSSL_sk_find(DAT_1553e2af0,local_48);
    if (-1 < iVar1) {
      iVar1 = iVar1 + 9;
      goto LAB_14f6d1f77;
    }
    iVar1 = -1;
  }
  piVar2 = (int *)CRYPTO_malloc(0x30,"crypto\\x509v3\\v3_purp.c");
  if (piVar2 == (int *)0x0) {
    ERR_put_error(0x22,0x89,0x41,"crypto\\x509v3\\v3_purp.c",0xa9);
    return 0;
  }
  piVar2[2] = 1;
LAB_14f6d1ffe:
  if ((*(byte *)(piVar2 + 2) & 2) != 0) {
    CRYPTO_free(*(undefined8 *)(piVar2 + 6),"crypto\\x509v3\\v3_purp.c",0xb2);
    CRYPTO_free(*(undefined8 *)(piVar2 + 8),"crypto\\x509v3\\v3_purp.c",0xb3);
  }
  uVar3 = CRYPTO_strdup(param_5,"crypto\\x509v3\\v3_purp.c",0xb6);
  *(undefined8 *)(piVar2 + 6) = uVar3;
  lVar4 = CRYPTO_strdup(param_6,"crypto\\x509v3\\v3_purp.c",0xb7);
  *(longlong *)(piVar2 + 8) = lVar4;
  if ((*(longlong *)(piVar2 + 6) == 0) || (lVar4 == 0)) {
    ERR_put_error(0x22,0x89,0x41,"crypto\\x509v3\\v3_purp.c",0xb9);
    if (iVar1 != -1) {
      return 0;
    }
  }
  else {
    piVar2[2] = piVar2[2] & 1;
    piVar2[2] = piVar2[2] | param_3 & 0xfffffffe | 2;
    *piVar2 = param_1;
    piVar2[1] = param_2;
    *(undefined8 *)(piVar2 + 4) = param_4;
    *(undefined8 *)(piVar2 + 10) = param_7;
    if (iVar1 != -1) {
      return 1;
    }
    if ((DAT_1553e2af0 == 0) && (DAT_1553e2af0 = OPENSSL_sk_new(&LAB_14f6d3820), DAT_1553e2af0 == 0)
       ) {
      uVar5 = 0xca;
    }
    else {
      iVar1 = OPENSSL_sk_push(DAT_1553e2af0,piVar2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar5 = 0xce;
    }
    ERR_put_error(0x22,0x89,0x41,"crypto\\x509v3\\v3_purp.c",uVar5);
  }
  CRYPTO_free(*(undefined8 *)(piVar2 + 6),"crypto\\x509v3\\v3_purp.c",0xd5);
  CRYPTO_free(*(undefined8 *)(piVar2 + 8),"crypto\\x509v3\\v3_purp.c",0xd6);
  CRYPTO_free(piVar2,"crypto\\x509v3\\v3_purp.c",0xd7);
  return 0;
}

// X509_PURPOSE_cleanup @ 14f6d21a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_PURPOSE_cleanup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_1553e2af0,FUN_14f6d3840,param_3,param_4,0x14f6d21aa);
  DAT_1553e2af0 = 0;
  return;
}

// X509_PURPOSE_get0 @ 14f6d21e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * X509_PURPOSE_get0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 9) {
    return &DAT_154df8760 + (longlong)param_1 * 0x30;
  }
  puVar1 = (undefined *)OPENSSL_sk_value(DAT_1553e2af0,param_1 + -9);
  return puVar1;
}

// X509_PURPOSE_get_by_id @ 14f6d2250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_PURPOSE_get_by_id(int param_1)

{
  int iVar1;
  int local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6d225a;
  if (param_1 - 1U < 9) {
    return param_1 + -1;
  }
  if (DAT_1553e2af0 != 0) {
    local_38[0] = param_1;
    iVar1 = OPENSSL_sk_find(DAT_1553e2af0,local_38);
    if (-1 < iVar1) {
      return iVar1 + 9;
    }
  }
  return -1;
}

// X509_PURPOSE_get_by_sname @ 14f6d22b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_PURPOSE_get_by_sname(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = 0;
  lVar8 = DAT_1553e2af0;
  do {
    if (lVar8 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = OPENSSL_sk_num(lVar8);
      lVar8 = DAT_1553e2af0;
    }
    if (iVar3 + 9 <= iVar6) {
      return -1;
    }
    if (iVar6 < 0) {
      puVar4 = (undefined *)0x0;
    }
    else if (iVar6 < 9) {
      puVar4 = &DAT_154df8760 + (longlong)iVar6 * 0x30;
    }
    else {
      puVar4 = (undefined *)OPENSSL_sk_value(lVar8,iVar6 + -9);
      lVar8 = DAT_1553e2af0;
    }
    pcVar5 = *(char **)(puVar4 + 0x20);
    lVar7 = param_1 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[lVar7];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      return iVar6;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

// X509_PURPOSE_get_count @ 14f6d2390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_PURPOSE_get_count(void)

{
  int iVar1;
  
  if (DAT_1553e2af0 == 0) {
    return 9;
  }
  iVar1 = OPENSSL_sk_num();
  return iVar1 + 9;
}

// X509_PURPOSE_get_trust @ 14f6d23e0

undefined4 X509_PURPOSE_get_trust(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// X509_PURPOSE_set @ 14f6d23f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_PURPOSE_set(int *param_1,int param_2)

{
  int iVar1;
  int local_38 [10];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6d2400;
  if (param_2 - 1U < 9) {
    iVar1 = param_2 + -1;
  }
  else {
    if (DAT_1553e2af0 == 0) goto LAB_14f6d244d;
    local_38[0] = param_2;
    iVar1 = OPENSSL_sk_find(DAT_1553e2af0,local_38);
    if (iVar1 < 0) goto LAB_14f6d244d;
    iVar1 = iVar1 + 9;
  }
  if (iVar1 != -1) {
    *param_1 = param_2;
    return 1;
  }
LAB_14f6d244d:
  ERR_put_error(0x22,0x8d,0x92,"crypto\\x509v3\\v3_purp.c",0x65);
  return 0;
}

// X509_check_akid @ 14f6d2480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_akid(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (((*param_2 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) &&
     (iVar2 = ASN1_OCTET_STRING_cmp(), iVar2 != 0)) {
    return 0x1e;
  }
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    uVar3 = X509_get_serialNumber(param_1);
    iVar2 = ASN1_INTEGER_cmp(uVar3,lVar1);
    if (iVar2 != 0) {
      return 0x1f;
    }
  }
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(lVar1);
    if (0 < iVar2) {
      do {
        piVar4 = (int *)OPENSSL_sk_value(lVar1,iVar5);
        if (*piVar4 == 4) {
          lVar1 = *(longlong *)(piVar4 + 2);
          if (lVar1 == 0) {
            return 0;
          }
          uVar3 = X509_get_issuer_name(param_1);
          iVar2 = X509_NAME_cmp(lVar1,uVar3);
          if (iVar2 == 0) {
            return 0;
          }
          return 0x1f;
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(lVar1);
      } while (iVar5 < iVar2);
    }
  }
  return 0;
}

// X509_check_ca @ 14f6d2580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint X509_check_ca(longlong param_1)

{
  uint uVar1;
  
  FUN_14f6d3190();
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (uVar1 & 0xff) >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 & 2) != 0) {
      return 4;
    }
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}

// X509_check_issued @ 14f6d2610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_issued(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = x509_likely_issued();
  if ((int)uVar1 == 0) {
    if ((*(uint *)(param_2 + 0xd0) & 0x400) == 0) {
      if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 4) == 0)) {
        return 0x20;
      }
    }
    else if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 0x80) == 0)) {
      return 0x27;
    }
    uVar1 = 0;
  }
  return uVar1;
}

// X509_check_purpose @ 14f6d26a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_purpose(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_14f6d3190();
  if ((*(byte *)(param_1 + 0xd0) & 0x80) == 0) {
    if (param_2 == -1) {
      return 1;
    }
    iVar1 = X509_PURPOSE_get_by_id(param_2);
    if (iVar1 != -1) {
      lVar2 = X509_PURPOSE_get0(iVar1);
                    /* WARNING: Could not recover jumptable at 0x00014f6d2724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}

// X509_get0_authority_issuer @ 14f6d2730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get0_authority_issuer(longlong param_1)

{
  FUN_14f6d3190();
  if (((*(byte *)(param_1 + 0xd0) & 0x80) == 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8);
  }
  return 0;
}

// X509_get0_authority_key_id @ 14f6d2780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get0_authority_key_id(longlong param_1)

{
  FUN_14f6d3190();
  if (((*(byte *)(param_1 + 0xd0) & 0x80) == 0) &&
     (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0)) {
    return **(undefined8 **)(param_1 + 0xe8);
  }
  return 0;
}

// X509_get0_authority_serial @ 14f6d27d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get0_authority_serial(longlong param_1)

{
  FUN_14f6d3190();
  if (((*(byte *)(param_1 + 0xd0) & 0x80) == 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x10);
  }
  return 0;
}

// X509_get0_subject_key_id @ 14f6d2820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get0_subject_key_id(longlong param_1)

{
  FUN_14f6d3190();
  if ((*(byte *)(param_1 + 0xd0) & 0x80) != 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xe0);
}

// X509_get_extended_key_usage @ 14f6d2860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_get_extended_key_usage(longlong param_1)

{
  FUN_14f6d3190();
  if ((char)*(uint *)(param_1 + 0xd0) < '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xd0) & 4) != 0) {
    return *(undefined4 *)(param_1 + 0xd8);
  }
  return 0xffffffff;
}

// X509_get_extension_flags @ 14f6d28b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_get_extension_flags(longlong param_1)

{
  FUN_14f6d3190();
  return *(undefined4 *)(param_1 + 0xd0);
}

// X509_get_key_usage @ 14f6d28e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_get_key_usage(longlong param_1)

{
  FUN_14f6d3190();
  if ((char)*(uint *)(param_1 + 0xd0) < '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xd0) & 2) != 0) {
    return *(undefined4 *)(param_1 + 0xd4);
  }
  return 0xffffffff;
}

// X509_get_pathlen @ 14f6d2930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_get_pathlen(longlong param_1)

{
  FUN_14f6d3190();
  if ((-1 < (char)*(uint *)(param_1 + 0xd0)) && ((*(uint *)(param_1 + 0xd0) & 1) != 0)) {
    return *(undefined4 *)(param_1 + 200);
  }
  return 0xffffffff;
}

// X509_get_proxy_pathlen @ 14f6d2970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_get_proxy_pathlen(longlong param_1)

{
  FUN_14f6d3190();
  if ((-1 < (char)*(uint *)(param_1 + 0xd0)) && ((*(uint *)(param_1 + 0xd0) >> 10 & 1) != 0)) {
    return *(undefined4 *)(param_1 + 0xcc);
  }
  return 0xffffffff;
}

// X509_supported_extension @ 14f6d29f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_supported_extension(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_res10 [6];
  
  uVar1 = X509_EXTENSION_get_object();
  uVar2 = OBJ_obj2nid(uVar1);
  local_res10[0] = (int)uVar2;
  if (local_res10[0] == 0) {
    return uVar2;
  }
  lVar3 = OBJ_bsearch_(local_res10,&DAT_1534a69a0,0xe,4,&LAB_14f6d2c00);
  return (ulonglong)(lVar3 != 0);
}

// FUN_14f6d2a60 @ 14f6d2a60

uint FUN_14f6d2a60(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (uVar1 & 0xff) >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 & 2) != 0) {
      return 4;
    }
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}

// FUN_14f6d2ad0 @ 14f6d2ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6d2ad0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_res8 [2];
  undefined4 local_res18 [4];
  
  if (param_1 == 0) {
    return 0x4d;
  }
  uVar1 = EVP_PKEY_base_id();
  iVar2 = OBJ_find_sigid_algs(uVar1,0,local_res8);
  if (iVar2 == 0) {
    local_res8[0] = EVP_PKEY_base_id(param_1);
  }
  uVar1 = OBJ_obj2nid(*(undefined8 *)(param_2 + 0x20));
  iVar2 = OBJ_find_sigid_algs(uVar1,0,local_res18);
  if (iVar2 == 0) {
    return 0x4e;
  }
  iVar2 = EVP_PKEY_type(local_res18[0]);
  uVar1 = 0;
  if (local_res8[0] != iVar2) {
    uVar1 = 0x4c;
  }
  return uVar1;
}

// FUN_14f6d2b80 @ 14f6d2b80

undefined8 FUN_14f6d2b80(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 0x2040) == 0x2040) {
        return 3;
      }
      if ((uVar1 & 2) != 0) {
        return 4;
      }
      if ((((uVar1 & 8) != 0) && ((*(uint *)(param_1 + 0xdc) & 7) != 0)) &&
         ((*(uint *)(param_1 + 0xdc) & 4) != 0)) {
        return 5;
      }
    }
    else if ((uVar1 & 0x10) != 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f6d2c10 @ 14f6d2c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6d2c10(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if (((*(uint *)(param_1 + 0xd0) & 4) != 0) && ((*(byte *)(param_1 + 0xd8) & 4) == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (((*(uint *)(param_1 + 0xd0) & 8) != 0) && ((*(uint *)(param_1 + 0xdc) & 0x20) == 0)) {
      return (ulonglong)((*(uint *)(param_1 + 0xdc) & 0xff) >> 6 & 2);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_14f6d2a60();
    if ((int)uVar1 == 0) {
      return 0;
    }
    if (((int)uVar1 == 5) && ((*(byte *)(param_1 + 0xdc) & 2) == 0)) {
      return 0;
    }
  }
  return uVar1;
}

// FUN_14f6d2c80 @ 14f6d2c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d2c80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  int local_res8 [2];
  
  lVar2 = X509_get_ext_d2i(param_1,0x67,local_res8,0);
  *(longlong *)(param_1 + 0xf8) = lVar2;
  if ((lVar2 == 0) && (local_res8[0] != -1)) {
    return 0;
  }
  local_res8[0] = 0;
  iVar1 = OPENSSL_sk_num(lVar2);
  if (local_res8[0] < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0xf8),local_res8[0]);
      piVar4 = (int *)puVar3[1];
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(puVar3 + 3) = 0x807f;
      }
      else {
        if (0 < *piVar4) {
          *(uint *)(puVar3 + 3) = (uint)**(byte **)(piVar4 + 2);
        }
        if (1 < *piVar4) {
          *(uint *)(puVar3 + 3) =
               *(uint *)(puVar3 + 3) | (uint)*(byte *)(*(longlong *)(piVar4 + 2) + 1) << 8;
        }
        *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) & 0x807f;
      }
      if (((int *)*puVar3 != (int *)0x0) && (*(int *)*puVar3 == 1)) {
        iVar5 = 0;
        iVar1 = OPENSSL_sk_num(puVar3[2]);
        if (0 < iVar1) {
          do {
            piVar4 = (int *)OPENSSL_sk_value(puVar3[2],iVar5);
            if (*piVar4 == 4) {
              lVar2 = *(longlong *)(piVar4 + 2);
              if (lVar2 != 0) goto LAB_14f6d2d82;
              break;
            }
            iVar5 = iVar5 + 1;
            iVar1 = OPENSSL_sk_num(puVar3[2]);
          } while (iVar5 < iVar1);
        }
        lVar2 = X509_get_issuer_name(param_1);
LAB_14f6d2d82:
        iVar1 = DIST_POINT_set_dpname(*puVar3,lVar2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xf8));
    } while (local_res8[0] < iVar1);
  }
  return 1;
}

// FUN_14f6d2de0 @ 14f6d2de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d2de0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  piVar2 = (int *)param_2[1];
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_2 + 3) = 0x807f;
  }
  else {
    if (0 < *piVar2) {
      *(uint *)(param_2 + 3) = (uint)**(byte **)(piVar2 + 2);
    }
    if (1 < *piVar2) {
      *(uint *)(param_2 + 3) =
           *(uint *)(param_2 + 3) | (uint)*(byte *)(*(longlong *)(piVar2 + 2) + 1) << 8;
    }
    *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) & 0x807f;
  }
  if (((int *)*param_2 == (int *)0x0) || (*(int *)*param_2 != 1)) {
    return 1;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(param_2[2]);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(param_2[2],iVar5);
      if (*piVar2 == 4) {
        lVar3 = *(longlong *)(piVar2 + 2);
        if (lVar3 != 0) goto LAB_14f6d2e92;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(param_2[2]);
    } while (iVar5 < iVar1);
  }
  lVar3 = X509_get_issuer_name(param_1);
LAB_14f6d2e92:
  uVar4 = DIST_POINT_set_dpname(*param_2,lVar3);
  return uVar4;
}

// FUN_14f6d2ed0 @ 14f6d2ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2ed0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d2ef0 @ 14f6d2ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2ef0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6d2f10 @ 14f6d2f10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2f10(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6d2f30 @ 14f6d2f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2f30(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d2f50 @ 14f6d2f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2f50(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6d2f70 @ 14f6d2f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2f70(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d2f90 @ 14f6d2f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2f90(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6d2fb0 @ 14f6d2fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2fb0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6d2fd0 @ 14f6d2fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2fd0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f6d2ff0 @ 14f6d2ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d2ff0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d3010 @ 14f6d3010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d3010(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6d3030 @ 14f6d3030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d3030(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6d3050 @ 14f6d3050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d3050(void)

{
  OPENSSL_sk_value();
  return;
}

// x509_likely_issued @ 14f6d3070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_likely_issued(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = X509_get_issuer_name(param_2);
  uVar3 = X509_get_subject_name(param_1);
  iVar1 = X509_NAME_cmp(uVar3,uVar2);
  if (iVar1 != 0) {
    return 0x1d;
  }
  FUN_14f6d3190(param_1);
  if ((*(byte *)(param_1 + 0xd0) & 0x80) != 0) {
    return 1;
  }
  FUN_14f6d3190(param_2);
  if ((*(byte *)(param_2 + 0xd0) & 0x80) != 0) {
    return 1;
  }
  if ((*(longlong *)(param_2 + 0xe8) != 0) && (uVar2 = X509_check_akid(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  uVar2 = X509_get0_pubkey(param_1);
  uVar2 = FUN_14f6d2ad0(uVar2,param_2);
  return uVar2;
}

// x509_signing_allowed @ 14f6d3140

undefined8 x509_signing_allowed(longlong param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xd0) & 0x400) == 0) {
    if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 4) == 0)) {
      return 0x20;
    }
  }
  else if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 0x80) == 0)) {
    return 0x27;
  }
  return 0;
}

// FUN_14f6d3190 @ 14f6d3190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d3190(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int local_res8 [2];
  int local_res10 [2];
  
  if (*(int *)(param_1 + 0x148) != 0) {
    return;
  }
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x140));
  if ((*(uint *)(param_1 + 0xd0) & 0x100) != 0) {
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
    return;
  }
  uVar5 = EVP_sha1();
  iVar3 = X509_digest(param_1,uVar5,param_1 + 0x120,0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x100080;
  }
  iVar3 = X509_get_version(param_1);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x40;
  }
  piVar6 = (int *)X509_get_ext_d2i(param_1,0x57,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if (*piVar6 != 0) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x10;
    }
    if (*(longlong *)(piVar6 + 2) == 0) {
      *(undefined4 *)(param_1 + 200) = 0xffffffff;
LAB_14f6d32a0:
      BASIC_CONSTRAINTS_free(piVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
    else {
      if (*(int *)(*(longlong *)(piVar6 + 2) + 4) != 0x102) {
        iVar3 = ASN1_INTEGER_get();
        *(int *)(param_1 + 200) = iVar3;
        if ((*piVar6 != 0) || (iVar3 == 0)) goto LAB_14f6d32a0;
      }
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
      *(undefined4 *)(param_1 + 200) = 0;
      BASIC_CONSTRAINTS_free(piVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
  }
  plVar7 = (longlong *)X509_get_ext_d2i(param_1,0x297,local_res8,0);
  if (plVar7 == (longlong *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if ((((*(byte *)(param_1 + 0xd0) & 0x10) != 0) ||
        (iVar3 = X509_get_ext_by_NID(param_1,0x55), -1 < iVar3)) ||
       (iVar3 = X509_get_ext_by_NID(param_1,0x56), -1 < iVar3)) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
    if (*plVar7 == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
    }
    else {
      uVar4 = ASN1_INTEGER_get();
      *(undefined4 *)(param_1 + 0xcc) = uVar4;
    }
    PROXY_CERT_INFO_EXTENSION_free(plVar7);
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x400;
  }
  piVar6 = (int *)X509_get_ext_d2i(param_1,0x53,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if (*piVar6 < 1) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      bVar1 = **(byte **)(piVar6 + 2);
      *(uint *)(param_1 + 0xd4) = (uint)bVar1;
      if (1 < *piVar6) {
        uVar2 = *(undefined1 *)(*(longlong *)(piVar6 + 2) + 1);
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 2;
        *(uint *)(param_1 + 0xd4) = (uint)CONCAT11(uVar2,bVar1);
        ASN1_BIT_STRING_free(piVar6);
        goto LAB_14f6d33dc;
      }
    }
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 2;
    ASN1_BIT_STRING_free(piVar6);
  }
LAB_14f6d33dc:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  lVar8 = X509_get_ext_d2i(param_1,0x7e,local_res8);
  if (lVar8 == 0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 4;
    local_res8[0] = 0;
    iVar3 = OPENSSL_sk_num(lVar8);
    if (local_res8[0] < iVar3) {
      do {
        uVar5 = OPENSSL_sk_value(lVar8,local_res8[0]);
        iVar3 = OBJ_obj2nid(uVar5);
        if (iVar3 < 0xb5) {
          if (iVar3 == 0xb4) {
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
          }
          else {
            switch(iVar3) {
            case 0x81:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
              break;
            case 0x82:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
              break;
            case 0x83:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
              break;
            case 0x84:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
              break;
            case 0x85:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x40;
              break;
            case 0x89:
            case 0x8b:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
            }
          }
        }
        else if (iVar3 == 0x129) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
        }
        else if (iVar3 == 0x38e) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x100;
        }
        local_res8[0] = local_res8[0] + 1;
        iVar3 = OPENSSL_sk_num(lVar8);
      } while (local_res8[0] < iVar3);
    }
    OPENSSL_sk_pop_free(lVar8,ASN1_OBJECT_free);
  }
  piVar6 = (int *)X509_get_ext_d2i(param_1,0x47,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else if (*piVar6 < 1) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 8;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    ASN1_BIT_STRING_free(piVar6);
  }
  else {
    bVar1 = **(byte **)(piVar6 + 2);
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 8;
    *(uint *)(param_1 + 0xdc) = (uint)bVar1;
    ASN1_BIT_STRING_free(piVar6);
  }
  lVar8 = X509_get_ext_d2i(param_1,0x52,local_res8);
  *(longlong *)(param_1 + 0xe0) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = X509_get_ext_d2i(param_1,0x5a,local_res8);
  *(longlong *)(param_1 + 0xe8) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  uVar5 = X509_get_issuer_name(param_1);
  uVar9 = X509_get_subject_name(param_1);
  iVar3 = X509_NAME_cmp(uVar9,uVar5);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x20;
    iVar3 = X509_check_akid(param_1,*(undefined8 *)(param_1 + 0xe8));
    if (iVar3 == 0) {
      uVar5 = X509_get0_pubkey(param_1);
      iVar3 = FUN_14f6d2ad0(uVar5,param_1);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x2000;
      }
    }
  }
  lVar8 = X509_get_ext_d2i(param_1,0x55,local_res8);
  *(longlong *)(param_1 + 0x100) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = X509_get_ext_d2i(param_1,0x29a,local_res8,0);
  *(longlong *)(param_1 + 0x108) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  iVar3 = FUN_14f6d2c80(param_1);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = X509_get_ext_d2i(param_1,0x122,local_res8,0);
  *(longlong *)(param_1 + 0x110) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = X509_get_ext_d2i(param_1,0x123,local_res8,0);
  *(longlong *)(param_1 + 0x118) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  local_res8[0] = 0;
  iVar3 = X509_get_ext_count(param_1);
  if (local_res8[0] < iVar3) {
    do {
      uVar5 = X509_get_ext(param_1,local_res8[0]);
      uVar9 = X509_EXTENSION_get_object(uVar5);
      iVar3 = OBJ_obj2nid(uVar9);
      if (iVar3 == 0x359) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x1000;
      }
      iVar3 = X509_EXTENSION_get_critical(uVar5);
      if (iVar3 != 0) {
        uVar5 = X509_EXTENSION_get_object(uVar5);
        local_res10[0] = OBJ_obj2nid(uVar5);
        if ((local_res10[0] == 0) ||
           (lVar8 = OBJ_bsearch_(local_res10,&DAT_1534a69a0,0xe,4,&LAB_14f6d2c00), lVar8 == 0)) {
          *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x200;
          break;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      iVar3 = X509_get_ext_count(param_1);
    } while (local_res8[0] < iVar3);
  }
  x509_init_sig_info(param_1);
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x100;
  *(undefined4 *)(param_1 + 0x148) = 1;
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
  return;
}

// FUN_14f6d3840 @ 14f6d3840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d3840(longlong param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) {
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\x509v3\\v3_purp.c",0xe2);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x20),"crypto\\x509v3\\v3_purp.c",0xe3);
    }
    CRYPTO_free(param_1,"crypto\\x509v3\\v3_purp.c",0xe5);
  }
  return;
}

