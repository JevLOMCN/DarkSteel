// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 42

// FUN_14f70ee10 @ 14f70ee10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f70ee10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_14f710970(param_3,*param_2,param_4,"Autonomous System Numbers");
  if (iVar1 != 0) {
    iVar1 = FUN_14f710970(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f70eec0 @ 14f70eec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f70eec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int extraout_EAX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar6;
  char *_Str;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong local_res20;
  undefined8 uVar10;
  size_t sVar5;
  
  local_res20 = 0;
  puVar2 = (undefined8 *)ASN1_item_new(&DAT_1534b3f70);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",0x20e);
    return (undefined8 *)0x0;
  }
  iVar9 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar9);
      iVar1 = name_cmp(puVar3[1],"AS");
      if (iVar1 != 0) {
        iVar1 = name_cmp(puVar3[1],"RDI");
        if (iVar1 == 0) {
          uVar7 = 1;
          goto LAB_14f70efa1;
        }
        uVar10 = 0x21f;
        uVar8 = 0x73;
LAB_14f70efed:
        ERR_put_error(0x22,0xa3,uVar8,"crypto\\x509v3\\v3_asid.c",uVar10);
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        goto LAB_14f70f037;
      }
      uVar7 = 0;
LAB_14f70efa1:
      lVar6 = 0;
      do {
        lVar4 = lVar6 + 1;
        if (((char *)puVar3[2])[lVar6] != "inherit"[lVar6]) {
          sVar5 = strspn((char *)puVar3[2],"0123456789");
          extraout_EAX = (int)sVar5;
          _Str = (char *)(puVar3[2] + (longlong)extraout_EAX);
          if (*_Str == '\0') {
            iVar1 = X509V3_get_value_int(puVar3,&local_res20);
            if (iVar1 == 0) {
              uVar8 = 0x24f;
LAB_14f70f273:
              ERR_put_error(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar8);
              goto LAB_14f70f037;
            }
            lVar6 = 0;
LAB_14f70f1b5:
            iVar1 = X509v3_asid_add_id_or_range(puVar2,uVar7,local_res20,lVar6);
            if (iVar1 != 0) {
              local_res20 = 0;
              goto LAB_14f70f1de;
            }
            uVar8 = 0x267;
          }
          else {
            sVar5 = strspn(_Str," \t");
            iVar1 = extraout_EAX + (int)sVar5;
            if (*(char *)((longlong)iVar1 + puVar3[2]) != '-') {
              uVar10 = 0x23b;
              uVar8 = 0xa2;
              goto LAB_14f70efed;
            }
            iVar1 = iVar1 + 1;
            sVar5 = strspn((char *)((longlong)iVar1 + puVar3[2])," \t");
            iVar1 = iVar1 + (int)sVar5;
            sVar5 = strspn((char *)(puVar3[2] + (longlong)iVar1),"0123456789");
            if (*(char *)((longlong)((int)sVar5 + iVar1) + puVar3[2]) != '\0') {
              uVar10 = 0x244;
              uVar8 = 0xa3;
              goto LAB_14f70efed;
            }
            lVar4 = CRYPTO_strdup(puVar3[2],"crypto\\x509v3\\v3_asid.c",0x253);
            if (lVar4 == 0) {
              uVar8 = 0x255;
              goto LAB_14f70f273;
            }
            *(undefined1 *)(extraout_EAX + lVar4) = 0;
            local_res20 = s2i_ASN1_INTEGER(0,lVar4);
            lVar6 = s2i_ASN1_INTEGER(0,iVar1 + lVar4);
            CRYPTO_free(lVar4,"crypto\\x509v3\\v3_asid.c",0x25b);
            if ((local_res20 != 0) && (lVar6 != 0)) {
              iVar1 = ASN1_INTEGER_cmp(local_res20,lVar6);
              if (iVar1 < 1) goto LAB_14f70f1b5;
              ERR_put_error(0x22,0xa3,0x74,"crypto\\x509v3\\v3_asid.c",0x262);
              goto LAB_14f70f039;
            }
            uVar8 = 0x25d;
          }
          ERR_put_error(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar8);
          goto LAB_14f70f039;
        }
        lVar6 = lVar4;
      } while (lVar4 != 8);
      iVar1 = X509v3_asid_add_inherit(puVar2,uVar7);
      if (iVar1 == 0) {
        uVar10 = 0x22b;
        uVar8 = 0xa5;
        goto LAB_14f70efed;
      }
LAB_14f70f1de:
      iVar9 = iVar9 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
    } while (iVar9 < iVar1);
  }
  iVar1 = FUN_14f70f420(*puVar2);
  if ((iVar1 == 0) || (iVar1 = FUN_14f70f420(puVar2[1]), iVar1 == 0)) {
LAB_14f70f037:
    lVar6 = 0;
LAB_14f70f039:
    ASN1_item_free(puVar2,&DAT_1534b3f70);
    ASN1_INTEGER_free(local_res20);
    ASN1_INTEGER_free(lVar6);
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

// FUN_14f70f310 @ 14f70f310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70f310(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  iVar3 = *piVar1;
  if ((iVar3 == 0) && (*piVar2 == 0)) {
    uVar4 = *(undefined8 *)(piVar1 + 2);
  }
  else {
    if ((iVar3 == 1) && (*piVar2 == 1)) {
      iVar3 = ASN1_INTEGER_cmp(**(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
      if (iVar3 != 0) {
        return;
      }
      ASN1_INTEGER_cmp(*(undefined8 *)(*(longlong *)(piVar1 + 2) + 8),
                       *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8));
      return;
    }
    if (iVar3 == 0) {
      ASN1_INTEGER_cmp(*(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
      return;
    }
    uVar4 = **(undefined8 **)(piVar1 + 2);
  }
  ASN1_INTEGER_cmp(uVar4,*(undefined8 *)(piVar2 + 2));
  return;
}

// ASIdOrRange_free @ 14f70f3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASIdOrRange_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3e90);
  return;
}

// ASIdOrRange_new @ 14f70f3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASIdOrRange_new(void)

{
  ASN1_item_new(&DAT_1534b3e90);
  return;
}

// FUN_14f70f420 @ 14f70f420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f70f420(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int local_res8;
  ulonglong local_res10;
  longlong local_res18;
  undefined4 uVar14;
  
  uVar6 = 0;
  bVar13 = false;
  local_res10 = 0;
  local_res18 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return true;
  }
  if ((*param_1 != 1) || (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    ERR_put_error(0x22,0xa1,0x74,"crypto\\x509v3\\v3_asid.c",0x179);
    return false;
  }
  OPENSSL_sk_sort(*(undefined8 *)(param_1 + 2));
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  if (0 < iVar1 + -1) {
    local_res8 = 1;
    uVar10 = uVar6;
    do {
      iVar1 = (int)uVar10;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),uVar10);
      piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),local_res8);
      uVar6 = local_res10;
      if (piVar3 == (int *)0x0) goto LAB_14f70f75a;
      if (*piVar3 == 0) {
        uVar9 = *(undefined8 *)(piVar3 + 2);
        uVar11 = uVar9;
      }
      else {
        if (*piVar3 != 1) goto LAB_14f70f75a;
        uVar9 = (*(undefined8 **)(piVar3 + 2))[1];
        uVar11 = **(undefined8 **)(piVar3 + 2);
      }
      if (piVar4 == (int *)0x0) goto LAB_14f70f75a;
      if (*piVar4 == 0) {
        uVar8 = *(undefined8 *)(piVar4 + 2);
        uVar12 = uVar8;
      }
      else {
        if (*piVar4 != 1) goto LAB_14f70f75a;
        uVar8 = **(undefined8 **)(piVar4 + 2);
        uVar12 = (*(undefined8 **)(piVar4 + 2))[1];
      }
      iVar2 = ASN1_INTEGER_cmp(uVar11,uVar8);
      if (((0 < iVar2) || (iVar2 = ASN1_INTEGER_cmp(uVar11,uVar9), 0 < iVar2)) ||
         (iVar2 = ASN1_INTEGER_cmp(uVar8,uVar12), 0 < iVar2)) goto LAB_14f70f75a;
      iVar2 = ASN1_INTEGER_cmp(uVar9,uVar8);
      if (-1 < iVar2) {
        uVar14 = 0x1a2;
        uVar9 = 0x74;
LAB_14f70f73e:
        ERR_put_error(0x22,0xa1,uVar9,"crypto\\x509v3\\v3_asid.c",uVar14);
        uVar6 = local_res10;
        goto LAB_14f70f75a;
      }
      if (((local_res18 == 0) && (local_res18 = BN_new(), local_res18 == 0)) ||
         ((lVar5 = ASN1_INTEGER_to_BN(uVar9,local_res18), lVar5 == 0 ||
          (iVar2 = BN_add_word(local_res18,1), iVar2 == 0)))) {
        uVar14 = 0x1ad;
LAB_14f70f738:
        uVar9 = 0x41;
        goto LAB_14f70f73e;
      }
      uVar6 = BN_to_ASN1_INTEGER(local_res18,local_res10);
      if (uVar6 == 0) {
        ERR_put_error(0x22,0xa1,0x41,"crypto\\x509v3\\v3_asid.c",0x1b5);
        uVar6 = local_res10;
        goto LAB_14f70f75a;
      }
      iVar2 = ASN1_INTEGER_cmp(uVar6,uVar8);
      local_res10 = uVar6;
      if (iVar2 == 0) {
        if (*piVar3 == 0) {
          puVar7 = (undefined8 *)CRYPTO_malloc(0x10,"crypto\\x509v3\\v3_asid.c",0x1c0);
          if (puVar7 == (undefined8 *)0x0) {
            uVar14 = 0x1c2;
            goto LAB_14f70f738;
          }
          *puVar7 = uVar11;
          puVar7[1] = uVar12;
          *piVar3 = 1;
          *(undefined8 **)(piVar3 + 2) = puVar7;
        }
        else if (*piVar3 == 1) {
          ASN1_INTEGER_free(*(undefined8 *)(*(longlong *)(piVar3 + 2) + 8));
          *(undefined8 *)(*(longlong *)(piVar3 + 2) + 8) = uVar12;
        }
        if (*piVar4 == 0) {
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        else if (*piVar4 == 1) {
          *(undefined8 *)(*(longlong *)(piVar4 + 2) + 8) = 0;
        }
        ASN1_item_free(piVar4,&DAT_1534b3e90);
        OPENSSL_sk_delete(*(undefined8 *)(param_1 + 2),local_res8);
        iVar1 = iVar1 + -1;
        local_res8 = local_res8 + -1;
      }
      local_res8 = local_res8 + 1;
      uVar10 = (ulonglong)(iVar1 + 1U);
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
    } while ((int)(iVar1 + 1U) < iVar2 + -1);
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if (((piVar3 == (int *)0x0) || (*piVar3 != 1)) ||
     (iVar1 = ASN1_INTEGER_cmp(**(undefined8 **)(piVar3 + 2),(*(undefined8 **)(piVar3 + 2))[1]),
     iVar1 < 1)) {
    iVar1 = FUN_14f70f850(param_1);
    bVar13 = iVar1 != 0;
  }
LAB_14f70f75a:
  ASN1_INTEGER_free(uVar6);
  BN_free(local_res18);
  return bVar13;
}

// ASIdentifierChoice_free @ 14f70f820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASIdentifierChoice_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3f00);
  return;
}

// FUN_14f70f850 @ 14f70f850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f70f850(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_res8;
  undefined4 uVar13;
  
  uVar8 = 0;
  local_res8 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 1;
  }
  if ((*param_1 != 1) || (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (0 < iVar1 + -1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),uVar6);
      uVar10 = (int)uVar6 + 1;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),(ulonglong)uVar10);
      if (piVar2 == (int *)0x0) goto LAB_14f70fa3b;
      if (*piVar2 == 0) {
        uVar9 = *(undefined8 *)(piVar2 + 2);
        uVar11 = uVar9;
      }
      else {
        if (*piVar2 != 1) goto LAB_14f70fa3b;
        uVar9 = **(undefined8 **)(piVar2 + 2);
        uVar11 = (*(undefined8 **)(piVar2 + 2))[1];
      }
      if (piVar3 == (int *)0x0) goto LAB_14f70fa3b;
      if (*piVar3 == 0) {
        uVar7 = *(undefined8 *)(piVar3 + 2);
        uVar12 = uVar7;
      }
      else {
        if (*piVar3 != 1) goto LAB_14f70fa3b;
        uVar7 = **(undefined8 **)(piVar3 + 2);
        uVar12 = (*(undefined8 **)(piVar3 + 2))[1];
      }
      iVar1 = ASN1_INTEGER_cmp(uVar9,uVar7);
      if (((-1 < iVar1) || (iVar1 = ASN1_INTEGER_cmp(uVar9,uVar11), 0 < iVar1)) ||
         (iVar1 = ASN1_INTEGER_cmp(uVar7,uVar12), 0 < iVar1)) goto LAB_14f70fa3b;
      if (((uVar4 == 0) && (uVar4 = BN_new(), uVar4 == 0)) ||
         ((lVar5 = ASN1_INTEGER_to_BN(uVar11,uVar4), lVar5 == 0 ||
          (iVar1 = BN_add_word(uVar4,1), iVar1 == 0)))) {
        uVar13 = 0x130;
LAB_14f70fa86:
        ERR_put_error(0x22,0xa2,0x41,"crypto\\x509v3\\v3_asid.c",uVar13);
        goto LAB_14f70fa3b;
      }
      uVar6 = BN_to_ASN1_INTEGER(uVar4,uVar8);
      if (uVar6 == 0) {
        uVar13 = 0x138;
        goto LAB_14f70fa86;
      }
      iVar1 = ASN1_INTEGER_cmp(uVar6,uVar7);
      uVar8 = uVar6;
      if (-1 < iVar1) goto LAB_14f70fa3b;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
      uVar6 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar1 + -1);
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) ||
     (iVar1 = ASN1_INTEGER_cmp(**(undefined8 **)(piVar2 + 2),(*(undefined8 **)(piVar2 + 2))[1]),
     iVar1 < 1)) {
    local_res8 = 1;
  }
LAB_14f70fa3b:
  ASN1_INTEGER_free(uVar8);
  BN_free(uVar4);
  return local_res8;
}

// ASIdentifierChoice_new @ 14f70fac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASIdentifierChoice_new(void)

{
  ASN1_item_new(&DAT_1534b3f00);
  return;
}

// ASIdentifiers_free @ 14f70faf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASIdentifiers_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3f70);
  return;
}

// ASIdentifiers_new @ 14f70fb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASIdentifiers_new(void)

{
  ASN1_item_new(&DAT_1534b3f70);
  return;
}

// ASRange_free @ 14f70fb50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASRange_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3e20);
  return;
}

// ASRange_new @ 14f70fb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASRange_new(void)

{
  ASN1_item_new(&DAT_1534b3e20);
  return;
}

// X509v3_asid_add_id_or_range @ 14f70fbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509v3_asid_add_id_or_range(longlong *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    param_1 = param_1 + 1;
  }
  if ((int *)*param_1 == (int *)0x0) {
    lVar2 = ASN1_item_new(&DAT_1534b3f00);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = OPENSSL_sk_new(FUN_14f70f310);
    *(undefined8 *)(*param_1 + 8) = uVar3;
    if (*(longlong *)((undefined4 *)*param_1 + 2) == 0) {
      return 0;
    }
    *(undefined4 *)*param_1 = 1;
  }
  else if (*(int *)*param_1 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)ASN1_item_new(&DAT_1534b3e90);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = param_3;
  }
  else {
    *puVar4 = 1;
    puVar5 = (undefined8 *)ASN1_item_new(&DAT_1534b3e20);
    *(undefined8 **)(puVar4 + 2) = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_14f70fcbb;
    ASN1_INTEGER_free(*puVar5);
    **(undefined8 **)(puVar4 + 2) = param_3;
    ASN1_INTEGER_free(*(undefined8 *)(*(longlong *)(puVar4 + 2) + 8));
    *(longlong *)(*(longlong *)(puVar4 + 2) + 8) = param_4;
  }
  iVar1 = OPENSSL_sk_push(*(undefined8 *)(*param_1 + 8),puVar4);
  if (iVar1 != 0) {
    return 1;
  }
LAB_14f70fcbb:
  ASN1_item_free(puVar4,&DAT_1534b3e90);
  return 0;
}

// X509v3_asid_add_inherit @ 14f70fcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509v3_asid_add_inherit(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return false;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return false;
    }
    param_1 = param_1 + 1;
  }
  if (*param_1 != 0) {
LAB_14f70fd5f:
    return *(int *)*param_1 == 0;
  }
  lVar1 = ASN1_item_new(&DAT_1534b3f00);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    lVar1 = ASN1_NULL_new();
    *(longlong *)(*param_1 + 8) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)*param_1 = 0;
      goto LAB_14f70fd5f;
    }
  }
  return false;
}

// X509v3_asid_canonize @ 14f70fd80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_asid_canonize(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar1 = FUN_14f70f420(*param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_14f70f420(param_1[1]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// X509v3_asid_inherits @ 14f70fdd0

undefined8 X509v3_asid_inherits(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) &&
     ((((int *)*param_1 != (int *)0x0 && (*(int *)*param_1 == 0)) ||
      (((int *)param_1[1] != (int *)0x0 && (*(int *)param_1[1] == 0)))))) {
    return 1;
  }
  return 0;
}

// X509v3_asid_is_canonical @ 14f70fe00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_asid_is_canonical(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar1 = FUN_14f70f850(*param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_14f70f850(param_1[1]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// X509v3_asid_subset @ 14f70fe50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_asid_subset(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_1 == param_2)) {
    return 1;
  }
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  piVar1 = (int *)*param_1;
  if ((((piVar1 == (int *)0x0) || (*piVar1 != 0)) &&
      (((int *)param_1[1] == (int *)0x0 || (*(int *)param_1[1] != 0)))) &&
     (iVar2 = X509v3_asid_inherits(param_2), iVar2 == 0)) {
    if (piVar1 != (int *)0x0) {
      if (*param_2 == 0) {
        return 0;
      }
      iVar2 = FUN_14f7101f0(*(undefined8 *)(*param_2 + 8),*(undefined8 *)(piVar1 + 2));
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (param_1[1] == 0) {
      return 1;
    }
    if ((param_2[1] != 0) &&
       (iVar2 = FUN_14f7101f0(*(undefined8 *)(param_2[1] + 8),*(undefined8 *)(param_1[1] + 8)),
       iVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}

// X509v3_asid_validate_path @ 14f70ff40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_asid_validate_path(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = FUN_14f710350(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}

// X509v3_asid_validate_resource_set @ 14f70ffa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509v3_asid_validate_resource_set(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  if (param_2 == (undefined8 *)0x0) {
    return true;
  }
  if (((param_1 == 0) || (iVar3 = OPENSSL_sk_num(), iVar3 == 0)) ||
     ((param_3 == 0 && (iVar3 = X509v3_asid_inherits(param_2), iVar3 != 0)))) {
    return false;
  }
  uVar11 = 0;
  bVar12 = true;
  iVar3 = OPENSSL_sk_num(param_1);
  if ((iVar3 < 1) || (iVar3 = X509v3_asid_is_canonical(param_2), iVar3 == 0)) {
    bVar12 = false;
  }
  else {
    piVar1 = (int *)*param_2;
    uVar6 = uVar11;
    uVar9 = uVar11;
    if (piVar1 != (int *)0x0) {
      uVar6 = 0;
      if (*piVar1 == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
        if (*piVar1 == 1) {
          uVar6 = *(ulonglong *)(piVar1 + 2);
        }
      }
    }
    piVar1 = (int *)param_2[1];
    uVar7 = uVar11;
    uVar8 = uVar11;
    if (piVar1 != (int *)0x0) {
      uVar7 = 0;
      if (*piVar1 == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        if (*piVar1 == 1) {
          uVar7 = *(ulonglong *)(piVar1 + 2);
        }
      }
    }
    iVar3 = OPENSSL_sk_num(param_1);
    if (iVar3 < 1) {
LAB_14f7101af:
      bVar12 = false;
    }
    else {
      do {
        lVar4 = OPENSSL_sk_value(param_1,uVar11);
        if (lVar4 == 0) goto LAB_14f7101af;
        if (*(longlong *)(lVar4 + 0x118) == 0) {
          if ((uVar6 != 0) || (uVar7 != 0)) goto LAB_14f710193;
        }
        else {
          iVar3 = X509v3_asid_is_canonical();
          if (iVar3 == 0) goto LAB_14f7101af;
          plVar5 = *(longlong **)(lVar4 + 0x118);
          piVar1 = (int *)*plVar5;
          if (piVar1 == (int *)0x0) {
            if (uVar6 != 0) goto LAB_14f710193;
          }
          else if (*piVar1 == 1) {
            if (((int)uVar9 == 0) &&
               (iVar3 = FUN_14f7101f0(*(undefined8 *)(piVar1 + 2),uVar6), iVar3 == 0))
            goto LAB_14f710193;
            plVar5 = *(longlong **)(lVar4 + 0x118);
            uVar6 = *(ulonglong *)(*plVar5 + 8);
            uVar9 = 0;
          }
          piVar1 = (int *)plVar5[1];
          if (piVar1 == (int *)0x0) {
            if (uVar7 != 0) goto LAB_14f7101af;
          }
          else if (*piVar1 == 1) {
            if (((int)uVar8 == 0) &&
               (iVar3 = FUN_14f7101f0(*(undefined8 *)(piVar1 + 2),uVar7), iVar3 == 0))
            goto LAB_14f710193;
            uVar8 = 0;
            uVar7 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar4 + 0x118) + 8) + 8);
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        iVar3 = OPENSSL_sk_num(param_1);
      } while ((int)uVar10 < iVar3);
      puVar2 = *(undefined8 **)(lVar4 + 0x118);
      if (puVar2 != (undefined8 *)0x0) {
        if (((int *)*puVar2 == (int *)0x0) || (*(int *)*puVar2 != 0)) {
          if ((int *)puVar2[1] != (int *)0x0) {
            bVar12 = *(int *)puVar2[1] != 0;
          }
        }
        else {
LAB_14f710193:
          bVar12 = false;
        }
      }
    }
  }
  return bVar12;
}

// FUN_14f7101f0 @ 14f7101f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7101f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((param_2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar7 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(param_2,iVar7);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      if (*piVar2 == 0) {
        uVar5 = *(undefined8 *)(piVar2 + 2);
        uVar8 = uVar5;
      }
      else {
        if (*piVar2 != 1) {
          return 0;
        }
        uVar5 = (*(undefined8 **)(piVar2 + 2))[1];
        uVar8 = **(undefined8 **)(piVar2 + 2);
      }
      while( true ) {
        iVar1 = OPENSSL_sk_num(param_1);
        if (iVar1 <= iVar4) {
          return 0;
        }
        piVar2 = (int *)OPENSSL_sk_value(param_1,iVar4);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (*piVar2 == 0) {
          uVar3 = *(undefined8 *)(piVar2 + 2);
          uVar6 = uVar3;
        }
        else {
          if (*piVar2 != 1) {
            return 0;
          }
          uVar3 = (*(undefined8 **)(piVar2 + 2))[1];
          uVar6 = **(undefined8 **)(piVar2 + 2);
        }
        iVar1 = ASN1_INTEGER_cmp(uVar3,uVar5);
        if (-1 < iVar1) break;
        iVar4 = iVar4 + 1;
      }
      iVar1 = ASN1_INTEGER_cmp(uVar6,uVar8);
      if (0 < iVar1) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar7 < iVar1);
  }
  return 1;
}

// FUN_14f710350 @ 14f710350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f710350(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = 1;
  bVar3 = false;
  if ((param_2 == 0) || (iVar4 = OPENSSL_sk_num(param_2), iVar4 < 1)) {
LAB_14f710776:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_14f710776;
  if (param_3 == (undefined8 *)0x0) {
    iVar4 = 0;
    lVar7 = OPENSSL_sk_value(param_2,0);
    param_3 = *(undefined8 **)(lVar7 + 0x118);
    if (param_3 == (undefined8 *)0x0) goto LAB_14f71076f;
  }
  else {
    iVar4 = -1;
    lVar7 = 0;
  }
  iVar5 = X509v3_asid_is_canonical(param_3);
  uVar6 = 1;
  if (iVar5 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(int *)(param_1 + 0xac) = iVar4;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (uVar6 == 0) goto LAB_14f71076f;
      goto LAB_14f71042c;
    }
  }
  else {
LAB_14f71042c:
    piVar1 = (int *)*param_3;
    lVar9 = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        bVar3 = true;
        lVar9 = 0;
      }
      else if (*piVar1 == 1) {
        lVar9 = *(longlong *)(piVar1 + 2);
      }
    }
    piVar1 = (int *)param_3[1];
    lVar10 = 0;
    bVar2 = false;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        bVar2 = true;
        lVar10 = 0;
      }
      else {
        bVar2 = false;
        if (*piVar1 == 1) {
          lVar10 = *(longlong *)(piVar1 + 2);
        }
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = OPENSSL_sk_num(param_2);
    if (iVar4 < iVar5) {
      do {
        lVar7 = OPENSSL_sk_value(param_2,iVar4);
        if (lVar7 == 0) goto LAB_14f7106c4;
        if (*(longlong *)(lVar7 + 0x118) == 0) {
          if ((lVar9 != 0) || (lVar10 != 0)) {
            if (param_1 == 0) goto LAB_14f71076d;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x00014f71068e:
            if (uVar6 == 0) goto LAB_14f71076f;
          }
        }
        else {
          iVar5 = X509v3_asid_is_canonical();
          if (iVar5 == 0) {
            if (param_1 == 0) goto LAB_14f71076d;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (uVar6 == 0) goto LAB_14f71076f;
          }
          if ((**(longlong **)(lVar7 + 0x118) == 0) && (lVar9 != 0)) {
            if (param_1 == 0) goto LAB_14f71076d;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (uVar6 == 0) goto LAB_14f71076f;
            lVar9 = 0;
            bVar3 = false;
          }
          piVar1 = (int *)**(undefined8 **)(lVar7 + 0x118);
          if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
            if ((bVar3) || (iVar5 = FUN_14f7101f0(*(undefined8 *)(piVar1 + 2),lVar9), iVar5 != 0)) {
              bVar3 = false;
              lVar9 = *(longlong *)(**(longlong **)(lVar7 + 0x118) + 8);
            }
            else {
              if (param_1 == 0) goto LAB_14f71076d;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = iVar4;
              *(longlong *)(param_1 + 0xb8) = lVar7;
              uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (uVar6 == 0) goto LAB_14f71076f;
            }
          }
          if ((*(longlong *)(*(longlong *)(lVar7 + 0x118) + 8) == 0) && (lVar10 != 0)) {
            if (param_1 == 0) goto LAB_14f71076d;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (uVar6 == 0) goto LAB_14f71076f;
            lVar10 = 0;
            bVar2 = false;
          }
          piVar1 = *(int **)(*(longlong *)(lVar7 + 0x118) + 8);
          if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
            if ((!bVar2) && (iVar5 = FUN_14f7101f0(*(undefined8 *)(piVar1 + 2),lVar10), iVar5 == 0))
            {
              if (param_1 != 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = iVar4;
                *(longlong *)(param_1 + 0xb8) = lVar7;
                uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
                goto joined_r0x00014f71068e;
              }
              goto LAB_14f71076d;
            }
            bVar2 = false;
            lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x118) + 8) + 8);
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = OPENSSL_sk_num(param_2);
      } while (iVar4 < iVar5);
    }
    if (lVar7 == 0) {
LAB_14f7106c4:
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 1;
      }
      return 0;
    }
    if (*(undefined8 **)(lVar7 + 0x118) == (undefined8 *)0x0) goto LAB_14f71076f;
    piVar1 = (int *)**(undefined8 **)(lVar7 + 0x118);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      if (param_1 == 0) goto LAB_14f71076d;
      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
      *(int *)(param_1 + 0xac) = iVar4;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (uVar6 == 0) goto LAB_14f71076f;
    }
    piVar1 = *(int **)(*(longlong *)(lVar7 + 0x118) + 8);
    if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) goto LAB_14f71076f;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
      *(int *)(param_1 + 0xac) = iVar4;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar8;
    }
  }
LAB_14f71076d:
  uVar6 = 0;
LAB_14f71076f:
  return (ulonglong)uVar6;
}

// d2i_ASIdOrRange @ 14f7107a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASIdOrRange(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_ASIdentifierChoice @ 14f7107d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASIdentifierChoice(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_ASIdentifiers @ 14f710800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASIdentifiers(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_ASRange @ 14f710830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASRange(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_ASIdOrRange @ 14f7108b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASIdOrRange(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3e90);
  return;
}

// i2d_ASIdentifierChoice @ 14f7108e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASIdentifierChoice(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3f00);
  return;
}

// i2d_ASIdentifiers @ 14f710910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASIdentifiers(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3f70);
  return;
}

// i2d_ASRange @ 14f710940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASRange(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3e20);
  return;
}

// FUN_14f710970 @ 14f710970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f710970(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f710980;
  if (param_2 == (int *)0x0) {
    return 1;
  }
  BIO_printf(param_1,"%*s%s:\n",param_3,"",param_4,0x14f710980);
  iVar1 = (int)param_3;
  if (*param_2 == 0) {
    BIO_printf(param_1,"%*sinherit\n",iVar1 + 2,"",param_4,uVar6);
  }
  else {
    if (*param_2 != 1) {
      return 0;
    }
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
    if (0 < iVar2) {
      do {
        piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_2 + 2),iVar5);
        if (*piVar3 == 0) {
          lVar4 = i2s_ASN1_INTEGER(0,*(undefined8 *)(piVar3 + 2));
          if (lVar4 == 0) {
            return 0;
          }
          BIO_printf(param_1,"%*s%s\n",iVar1 + 2,"",lVar4);
          uVar6 = 0x53;
        }
        else {
          if (*piVar3 != 1) {
            return 0;
          }
          lVar4 = i2s_ASN1_INTEGER(0,**(undefined8 **)(piVar3 + 2));
          if (lVar4 == 0) {
            return 0;
          }
          BIO_printf(param_1,"%*s%s-",iVar1 + 2,"",lVar4);
          CRYPTO_free(lVar4,"crypto\\x509v3\\v3_asid.c",0x59);
          lVar4 = i2s_ASN1_INTEGER(0,*(undefined8 *)(*(longlong *)(piVar3 + 2) + 8));
          if (lVar4 == 0) {
            return 0;
          }
          BIO_printf(param_1,"%s\n",lVar4);
          uVar6 = 0x5d;
        }
        CRYPTO_free(lVar4,"crypto\\x509v3\\v3_asid.c",uVar6);
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
      } while (iVar5 < iVar2);
    }
  }
  return 1;
}

// FUN_14f710b30 @ 14f710b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710b30(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f710b50 @ 14f710b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710b50(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f710b70 @ 14f710b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710b70(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f710b90 @ 14f710b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710b90(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f710bb0 @ 14f710bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710bb0(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f710bd0 @ 14f710bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710bd0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f710bf0 @ 14f710bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710bf0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f710c10 @ 14f710c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710c10(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f710c30 @ 14f710c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710c30(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f710c50 @ 14f710c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f710c50(void)

{
  OPENSSL_sk_value();
  return;
}

