// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 39

// FUN_14f6cd320 @ 14f6cd320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6cd320(longlong *param_1,undefined8 *param_2,int param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void *_Src;
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res10;
  void *local_28;
  undefined8 *local_20;
  
  _Src = (void *)*param_2;
  iVar2 = 0x100000;
  if (param_3 < 0x100001) {
    iVar2 = param_3;
  }
  local_res10 = 0;
  local_20 = (undefined8 *)0x0;
  local_28 = _Src;
  uVar4 = ASN1_item_ex_d2i(&local_res10,&local_28,iVar2,&DAT_1534a6560,param_5,param_6,param_7,
                           param_8);
  if (0 < (int)uVar4) {
    if (*param_1 != 0) {
      FUN_14f6cd680(param_1,0);
    }
    iVar2 = FUN_14f6cd5c0(&local_20,0);
    puVar1 = local_20;
    if ((iVar2 != 0) &&
       (lVar5 = BUF_MEM_grow(local_20[2],(longlong)local_28 - (longlong)_Src), lVar5 != 0)) {
      memcpy(*(void **)(puVar1[2] + 8),_Src,(longlong)local_28 - (longlong)_Src);
      iVar7 = 0;
      iVar2 = OPENSSL_sk_num(local_res10);
      if (0 < iVar2) {
        do {
          uVar6 = OPENSSL_sk_value(local_res10,iVar7);
          iVar8 = 0;
          iVar2 = OPENSSL_sk_num(uVar6);
          if (0 < iVar2) {
            do {
              lVar5 = OPENSSL_sk_value(uVar6,iVar8);
              *(int *)(lVar5 + 0x10) = iVar7;
              iVar2 = OPENSSL_sk_push(*puVar1,lVar5);
              if (iVar2 == 0) goto LAB_14f6cd4cc;
              OPENSSL_sk_set(uVar6,iVar8,0);
              iVar8 = iVar8 + 1;
              iVar2 = OPENSSL_sk_num(uVar6);
            } while (iVar8 < iVar2);
          }
          iVar7 = iVar7 + 1;
          iVar2 = OPENSSL_sk_num(local_res10);
        } while (iVar7 < iVar2);
      }
      uVar3 = FUN_14f6cdfd0(puVar1);
      if (uVar3 != 0) {
        OPENSSL_sk_pop_free(local_res10,FUN_14f6cddc0);
        *(undefined4 *)(puVar1 + 1) = 0;
        *param_1 = (longlong)puVar1;
        *param_2 = local_28;
        return (ulonglong)uVar3;
      }
    }
LAB_14f6cd4cc:
    if (puVar1 != (undefined8 *)0x0) {
      ASN1_item_free(puVar1,&DAT_1534a65c8);
    }
    OPENSSL_sk_pop_free(local_res10,FUN_14f6cdde0);
    ERR_put_error(0xd,0x9e,0x3a,"crypto\\x509\\x_name.c",0xce);
    uVar4 = 0;
  }
  return uVar4;
}

// FUN_14f6cd540 @ 14f6cd540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6cd540(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 8) != 0) {
    uVar4 = FUN_14f6ce280(lVar2);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    iVar3 = FUN_14f6cdfd0(lVar2);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  }
  uVar1 = **(uint **)(lVar2 + 0x10);
  if (param_2 != (longlong *)0x0) {
    memcpy((void *)*param_2,*(void **)(*(uint **)(lVar2 + 0x10) + 2),(longlong)(int)uVar1);
    *param_2 = *param_2 + (longlong)(int)uVar1;
  }
  return (ulonglong)uVar1;
}

// FUN_14f6cd5c0 @ 14f6cd5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6cd5c0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6cd5d0;
  plVar1 = (longlong *)CRYPTO_zalloc(0x28,"crypto\\x509\\x_name.c",0x5c);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = OPENSSL_sk_new_null();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = BUF_MEM_new();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(plVar1 + 1) = 1;
        *param_1 = plVar1;
        return 1;
      }
    }
  }
  ERR_put_error(0xd,0xab,0x41,"crypto\\x509\\x_name.c",0x69,uVar3);
  if (plVar1 != (longlong *)0x0) {
    OPENSSL_sk_free(*plVar1);
    CRYPTO_free(plVar1,"crypto\\x509\\x_name.c",0x6c);
  }
  return 0;
}

// FUN_14f6cd680 @ 14f6cd680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd680(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)
     ) {
    BUF_MEM_free(puVar1[2]);
    OPENSSL_sk_pop_free(*puVar1,X509_NAME_ENTRY_free);
    CRYPTO_free(puVar1[3],"crypto\\x509\\x_name.c",0x7b);
    CRYPTO_free(puVar1,"crypto\\x509\\x_name.c",0x7c);
    *param_1 = 0;
  }
  return;
}

// FUN_14f6cd700 @ 14f6cd700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f6cd700(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = X509_NAME_print_ex(param_1,*param_2,param_3,*(undefined4 *)(param_5 + 4),0x14f6cd70a);
  uVar2 = 2;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}

// X509_NAME_ENTRY_dup @ 14f6cd750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_ENTRY_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534a64c0,param_1);
  return;
}

// X509_NAME_ENTRY_free @ 14f6cd780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_ENTRY_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534a64c0);
  return;
}

// X509_NAME_ENTRY_new @ 14f6cd7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_ENTRY_new(void)

{
  ASN1_item_new(&DAT_1534a64c0);
  return;
}

// X509_NAME_dup @ 14f6cd7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534a65c8,param_1);
  return;
}

// X509_NAME_free @ 14f6cd820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534a65c8);
  return;
}

// X509_NAME_get0_der @ 14f6cd850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_get0_der(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d(param_1,0,&DAT_1534a65c8);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = **(undefined8 **)(param_1 + 0x10);
  }
  return 1;
}

// X509_NAME_it @ 14f6cd8d0

undefined * X509_NAME_it(void)

{
  return &DAT_1534a65c8;
}

// X509_NAME_new @ 14f6cd8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_new(void)

{
  ASN1_item_new(&DAT_1534a65c8);
  return;
}

// X509_NAME_print @ 14f6cd910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = (char *)X509_NAME_oneline(param_2,0,0);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  if (*pcVar2 == '\0') {
    CRYPTO_free(pcVar2,"crypto\\x509\\x_name.c",0x1f6);
    return 1;
  }
  pcVar4 = pcVar2 + 1;
  pcVar5 = pcVar4;
  for (; *pcVar4 != '/'; pcVar4 = pcVar4 + 1) {
LAB_14f6cd9c6:
    if (*pcVar4 == '\0') goto LAB_14f6cd9cb;
LAB_14f6cda09:
  }
  iVar1 = ossl_ctype_check((int)pcVar4[1],2);
  if (iVar1 == 0) goto LAB_14f6cd9c6;
  if (pcVar4[2] != '=') {
    iVar1 = ossl_ctype_check((int)pcVar4[2],2);
    if ((iVar1 == 0) || (pcVar4[3] != '=')) goto LAB_14f6cd9c6;
  }
LAB_14f6cd9cb:
  iVar6 = (int)pcVar4 - (int)pcVar5;
  iVar1 = BIO_write(param_1,pcVar5,iVar6);
  if (iVar1 == iVar6) {
    pcVar5 = pcVar4 + 1;
    if (*pcVar4 != '\0') {
      iVar1 = BIO_write(param_1,", ",2);
      if (iVar1 != 2) goto LAB_14f6cda2a;
      if (*pcVar4 != '\0') goto LAB_14f6cda09;
    }
    CRYPTO_free(pcVar2,"crypto\\x509\\x_name.c",0x210);
    uVar3 = 1;
  }
  else {
LAB_14f6cda2a:
    ERR_put_error(0xb,0x75,7,"crypto\\x509\\x_name.c",0x213);
    CRYPTO_free(pcVar2,"crypto\\x509\\x_name.c",0x214);
    uVar3 = 0;
  }
  return uVar3;
}

// X509_NAME_set @ 14f6cda90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_NAME_set(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 == param_2) {
    return *param_1 != 0;
  }
  lVar1 = ASN1_item_dup(&DAT_1534a65c8);
  if (lVar1 == 0) {
    return false;
  }
  ASN1_item_free(*param_1,&DAT_1534a65c8);
  *param_1 = lVar1;
  return true;
}

// FUN_14f6cdb10 @ 14f6cdb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6cdb10(int *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar7 = ASN1_tag2bit(*(undefined4 *)(param_2 + 4));
  if ((uVar7 & 0x2956) == 0) {
    iVar4 = ASN1_STRING_copy(param_1);
    return iVar4 != 0;
  }
  param_1[1] = 0xc;
  iVar4 = ASN1_STRING_to_UTF8(param_1 + 2,param_2);
  *param_1 = iVar4;
  if (iVar4 == -1) {
    bVar3 = false;
  }
  else {
    pbVar8 = *(byte **)(param_1 + 2);
    while ((0 < iVar4 && (iVar5 = ossl_ctype_check(*pbVar8,8), iVar5 != 0))) {
      pbVar8 = pbVar8 + 1;
      iVar4 = iVar4 + -1;
    }
    if (0 < iVar4) {
      pbVar9 = pbVar8 + (longlong)iVar4 + -1;
      do {
        iVar5 = ossl_ctype_check(*pbVar9,8);
        if (iVar5 == 0) break;
        pbVar9 = pbVar9 + -1;
        iVar4 = iVar4 + -1;
      } while (0 < iVar4);
    }
    pbVar9 = *(byte **)(param_1 + 2);
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        bVar2 = *pbVar8;
        if ((bVar2 & 0x80) == 0) {
          iVar6 = ossl_ctype_check(bVar2,8);
          if (iVar6 == 0) {
            bVar2 = ossl_tolower(*pbVar8);
            *pbVar9 = bVar2;
            goto LAB_14f6cdc34;
          }
          *pbVar9 = 0x20;
          do {
            pbVar1 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            iVar5 = iVar5 + 1;
            iVar6 = ossl_ctype_check(*pbVar1,8);
          } while (iVar6 != 0);
        }
        else {
          *pbVar9 = bVar2;
LAB_14f6cdc34:
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + 1;
        }
        pbVar9 = pbVar9 + 1;
      } while (iVar5 < iVar4);
    }
    bVar3 = true;
    *param_1 = (int)pbVar9 - param_1[2];
  }
  return bVar3;
}

// d2i_X509_NAME @ 14f6cdc70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_NAME(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_X509_NAME_ENTRY @ 14f6cdca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_NAME_ENTRY(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_NAME @ 14f6cdcd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_NAME(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534a65c8);
  return;
}

// i2d_X509_NAME_ENTRY @ 14f6cdd00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_NAME_ENTRY(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534a64c0);
  return;
}

// FUN_14f6cdd30 @ 14f6cdd30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6cdd30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x14f6cdd4a;
  uVar4 = 0;
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      local_res8 = OPENSSL_sk_value(param_1,iVar3);
      uVar2 = ASN1_item_ex_i2d(&local_res8,param_2,&DAT_1534a6510,0xffffffff,0xffffffff,uVar5);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar4 = uVar4 + (int)uVar2;
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar3 < iVar1);
  }
  return (ulonglong)uVar4;
}

// FUN_14f6cddc0 @ 14f6cddc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cddc0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6cdde0 @ 14f6cdde0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdde0(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,X509_NAME_ENTRY_free);
  return;
}

// FUN_14f6cde10 @ 14f6cde10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cde10(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cde30 @ 14f6cde30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cde30(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6cde50 @ 14f6cde50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cde50(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6cde70 @ 14f6cde70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cde70(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cde90 @ 14f6cde90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cde90(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cdeb0 @ 14f6cdeb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdeb0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6cded0 @ 14f6cded0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cded0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6cdef0 @ 14f6cdef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdef0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6cdf10 @ 14f6cdf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdf10(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6cdf30 @ 14f6cdf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdf30(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cdf50 @ 14f6cdf50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdf50(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cdf70 @ 14f6cdf70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdf70(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6cdf90 @ 14f6cdf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdf90(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f6cdfb0 @ 14f6cdfb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cdfb0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6cdfd0 @ 14f6cdfd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6cdfd0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong local_res8;
  undefined8 local_res10;
  undefined4 uVar11;
  
  lVar5 = 0;
  plVar6 = (longlong *)0x0;
  iVar2 = -1;
  uVar9 = 0;
  CRYPTO_free(param_1[3],"crypto\\x509\\x_name.c",0x134);
  param_1[3] = 0;
  iVar1 = OPENSSL_sk_num(*param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    ERR_put_error(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x13d);
  }
  else {
    iVar10 = 0;
    iVar1 = OPENSSL_sk_num(*param_1);
    if (0 < iVar1) {
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar10);
        if (*(int *)(puVar4 + 2) != iVar2) {
          lVar5 = OPENSSL_sk_new_null();
          if (lVar5 == 0) goto LAB_14f6ce22d;
          iVar2 = OPENSSL_sk_push(lVar3,lVar5);
          if (iVar2 == 0) {
            OPENSSL_sk_free(lVar5);
            ERR_put_error(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x148);
            goto LAB_14f6ce22d;
          }
          iVar2 = *(int *)(puVar4 + 2);
        }
        plVar6 = (longlong *)ASN1_item_new(&DAT_1534a64c0);
        if (plVar6 == (longlong *)0x0) {
          uVar11 = 0x14f;
          goto LAB_14f6ce168;
        }
        lVar7 = OBJ_dup(*puVar4);
        *plVar6 = lVar7;
        if (lVar7 == 0) {
          uVar11 = 0x154;
          goto LAB_14f6ce168;
        }
        iVar1 = FUN_14f6cdb10(plVar6[1],puVar4[1]);
        if (iVar1 == 0) goto LAB_14f6ce239;
        iVar1 = OPENSSL_sk_push(lVar5,plVar6);
        if (iVar1 == 0) {
          uVar11 = 0x15a;
          goto LAB_14f6ce168;
        }
        iVar10 = iVar10 + 1;
        iVar1 = OPENSSL_sk_num(*param_1);
      } while (iVar10 < iVar1);
    }
    iVar2 = FUN_14f6cdd30(lVar3,0);
    plVar6 = (longlong *)0x0;
    if (-1 < iVar2) {
      *(int *)(param_1 + 4) = iVar2;
      local_res8 = CRYPTO_malloc((longlong)iVar2,"crypto\\x509\\x_name.c",0x166);
      if (local_res8 == 0) {
        uVar11 = 0x168;
LAB_14f6ce168:
        ERR_put_error(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",uVar11);
      }
      else {
        param_1[3] = local_res8;
        iVar2 = OPENSSL_sk_num(lVar3);
        if (0 < iVar2) {
          do {
            local_res10 = OPENSSL_sk_value(lVar3,plVar6);
            iVar2 = ASN1_item_ex_i2d(&local_res10,&local_res8,&DAT_1534a6510,0xffffffff,0xffffffff);
            if (iVar2 < 0) break;
            uVar8 = (int)plVar6 + 1;
            plVar6 = (longlong *)(ulonglong)uVar8;
            iVar2 = OPENSSL_sk_num(lVar3);
          } while ((int)uVar8 < iVar2);
        }
        uVar9 = 1;
LAB_14f6ce22d:
        plVar6 = (longlong *)0x0;
      }
    }
  }
LAB_14f6ce239:
  ASN1_item_free(plVar6,&DAT_1534a64c0);
  OPENSSL_sk_pop_free(lVar3,FUN_14f6cdde0);
  return uVar9;
}

// FUN_14f6ce280 @ 14f6ce280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6ce280(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 uVar6;
  
  uVar6 = 0x14f6ce298;
  local_res10 = 0;
  lVar4 = 0;
  iVar2 = -1;
  local_res10 = OPENSSL_sk_new_null();
  if (local_res10 != 0) {
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(*param_1);
    if (0 < iVar1) {
      do {
        lVar3 = OPENSSL_sk_value(*param_1,iVar5);
        if (*(int *)(lVar3 + 0x10) != iVar2) {
          lVar4 = OPENSSL_sk_new_null();
          if (lVar4 == 0) goto LAB_14f6ce3b8;
          iVar2 = OPENSSL_sk_push(local_res10,lVar4);
          if (iVar2 == 0) {
            OPENSSL_sk_free(lVar4);
            goto LAB_14f6ce3b8;
          }
          iVar2 = *(int *)(lVar3 + 0x10);
        }
        iVar1 = OPENSSL_sk_push(lVar4,lVar3);
        if (iVar1 == 0) goto LAB_14f6ce3b8;
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(*param_1);
      } while (iVar5 < iVar1);
    }
    iVar2 = ASN1_item_ex_i2d(&local_res10,0,&DAT_1534a6560,0xffffffff,0xffffffff,uVar6);
    lVar4 = BUF_MEM_grow(param_1[2],(longlong)iVar2);
    if (lVar4 != 0) {
      local_res18 = *(undefined8 *)(param_1[2] + 8);
      ASN1_item_ex_i2d(&local_res10,&local_res18,&DAT_1534a6560,0xffffffff,0xffffffff);
      OPENSSL_sk_pop_free(local_res10,FUN_14f6cddc0);
      *(undefined4 *)(param_1 + 1) = 0;
      return iVar2;
    }
  }
LAB_14f6ce3b8:
  OPENSSL_sk_pop_free(local_res10,FUN_14f6cddc0);
  ERR_put_error(0xd,0xcb,0x41,"crypto\\x509\\x_name.c",0x114);
  return -1;
}

