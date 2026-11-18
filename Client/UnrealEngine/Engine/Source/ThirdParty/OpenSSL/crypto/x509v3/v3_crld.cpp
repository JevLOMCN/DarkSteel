// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 44

// FUN_14f71bc10 @ 14f71bc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f71bc10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f71bc37;
  lVar5 = 0;
  lVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar3 == 0) {
LAB_14f71bd59:
    ERR_put_error(0x22,0x86,0x41,"crypto\\x509v3\\v3_crld.c",0x11d,uVar9);
LAB_14f71bd79:
    GENERAL_NAME_free(lVar4);
    GENERAL_NAMES_free(lVar5);
    OPENSSL_sk_pop_free(lVar3,DIST_POINT_free);
    lVar3 = 0;
  }
  else {
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(param_3,iVar8);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar4 = X509V3_get_section(param_2,*(undefined8 *)(lVar4 + 8));
          if (lVar4 != 0) {
            lVar5 = FUN_14f71c520(param_2,lVar4);
            X509V3_section_free(param_2,lVar4);
            if (lVar5 != 0) {
              OPENSSL_sk_push(lVar3,lVar5);
              goto LAB_14f71bd3f;
            }
          }
          lVar5 = 0;
          lVar4 = 0;
          goto LAB_14f71bd79;
        }
        lVar4 = v2i_GENERAL_NAME(param_1,param_2,lVar4);
        if (lVar4 == 0) {
          lVar5 = 0;
          goto LAB_14f71bd79;
        }
        lVar5 = GENERAL_NAMES_new();
        if ((lVar5 == 0) || (iVar2 = OPENSSL_sk_push(lVar5,lVar4), iVar2 == 0)) goto LAB_14f71bd59;
        lVar4 = 0;
        plVar6 = (longlong *)ASN1_item_new(&DAT_1534b68e0);
        if (plVar6 == (longlong *)0x0) goto LAB_14f71bd59;
        OPENSSL_sk_push(lVar3,plVar6);
        lVar7 = ASN1_item_new(&DAT_1534b6850);
        *plVar6 = lVar7;
        if (lVar7 == 0) goto LAB_14f71bd59;
        *(longlong *)(lVar7 + 8) = lVar5;
        *(undefined4 *)*plVar6 = 0;
LAB_14f71bd3f:
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
  }
  return lVar3;
}

// FUN_14f71bdc0 @ 14f71bdc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f71bdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      BIO_puts(param_3,"\n");
      plVar2 = (longlong *)OPENSSL_sk_value(param_2,iVar3);
      if (*plVar2 != 0) {
        FUN_14f71c8a0(param_3,*plVar2,param_4);
      }
      if (plVar2[1] != 0) {
        FUN_14f71ca00(param_3,"Reasons",plVar2[1],param_4);
      }
      if (plVar2[2] != 0) {
        BIO_printf(param_3,"%*sCRL Issuer:\n",param_4,"");
        FUN_14f71c950(param_3,plVar2[2],param_4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}

// FUN_14f71bec0 @ 14f71bec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71bec0(int param_1,longlong *param_2)

{
  if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  else if (param_1 == 3) {
    X509_NAME_free(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  return 1;
}

// FUN_14f71bf30 @ 14f71bf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71bf30(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    FUN_14f71c8a0(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    BIO_printf(param_3,"%*sOnly User Certificates\n",param_4,"");
  }
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    BIO_printf(param_3,"%*sOnly CA Certificates\n",param_4,"");
  }
  if (0 < (int)param_2[3]) {
    BIO_printf(param_3,"%*sIndirect CRL\n",param_4,"");
  }
  if (param_2[2] != 0) {
    FUN_14f71ca00(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    BIO_printf(param_3,"%*sOnly Attribute Certificates\n",param_4,"");
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((longlong)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((longlong)param_2 + 0x1c) < 1)))) {
    BIO_printf(param_3,"%*s<EMPTY>\n",param_4,"");
  }
  return 1;
}

// FUN_14f71c070 @ 14f71c070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f71c070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar3 = ASN1_item_new(&DAT_1534b6a20);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x9d,0x41,"crypto\\x509v3\\v3_crld.c",CONCAT44(uVar8,0x193));
LAB_14f71c277:
    ASN1_item_free(lVar3,&DAT_1534b6a20);
    lVar3 = 0;
  }
  else {
    iVar7 = 0;
    iVar2 = OPENSSL_sk_num(param_3);
    if (0 < iVar2) {
LAB_14f71c0f0:
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      _Str1 = (char *)puVar4[1];
      uVar1 = puVar4[2];
      iVar2 = FUN_14f71cae0(lVar3,param_2,puVar4);
      if (0 < iVar2) goto LAB_14f71c1e9;
      if (-1 < iVar2) {
        iVar2 = strcmp(_Str1,"onlyuser");
        if (iVar2 == 0) {
          iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 8);
        }
        else {
          lVar5 = 0;
          do {
            lVar6 = lVar5 + 1;
            if (_Str1[lVar5] != (&s_onlyCA)[lVar5]) {
              lVar5 = 0;
              goto LAB_14f71c180;
            }
            lVar5 = lVar6;
          } while (lVar6 != 7);
          iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 0xc);
        }
        goto LAB_14f71c1e1;
      }
      goto LAB_14f71c277;
    }
  }
  return lVar3;
  while (lVar5 = lVar6, lVar6 != 7) {
LAB_14f71c180:
    lVar6 = lVar5 + 1;
    if (_Str1[lVar5] != (&s_onlyAA)[lVar5]) {
      iVar2 = strcmp(_Str1,"indirectCRL");
      if (iVar2 == 0) {
        iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 0x18);
        goto LAB_14f71c1e1;
      }
      iVar2 = strcmp(_Str1,"onlysomereasons");
      if (iVar2 == 0) {
        iVar2 = FUN_14f71cce0(lVar3 + 0x10,uVar1);
        goto LAB_14f71c1e1;
      }
      ERR_put_error(0x22,0x9d,0x6a,"crypto\\x509v3\\v3_crld.c",0x18b);
      ERR_add_error_data(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
      goto LAB_14f71c277;
    }
  }
  iVar2 = X509V3_get_value_bool(puVar4,lVar3 + 0x1c);
LAB_14f71c1e1:
  if (iVar2 == 0) goto LAB_14f71c277;
LAB_14f71c1e9:
  iVar7 = iVar7 + 1;
  iVar2 = OPENSSL_sk_num(param_3);
  if (iVar2 <= iVar7) {
    return lVar3;
  }
  goto LAB_14f71c0f0;
}

// CRL_DIST_POINTS_free @ 14f71c2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRL_DIST_POINTS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b6930);
  return;
}

// CRL_DIST_POINTS_new @ 14f71c2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRL_DIST_POINTS_new(void)

{
  ASN1_item_new(&DAT_1534b6930);
  return;
}

// DIST_POINT_NAME_free @ 14f71c310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DIST_POINT_NAME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b6850);
  return;
}

// DIST_POINT_NAME_new @ 14f71c340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DIST_POINT_NAME_new(void)

{
  ASN1_item_new(&DAT_1534b6850);
  return;
}

// DIST_POINT_free @ 14f71c370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DIST_POINT_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b68e0);
  return;
}

// DIST_POINT_new @ 14f71c3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DIST_POINT_new(void)

{
  ASN1_item_new(&DAT_1534b68e0);
  return;
}

// DIST_POINT_set_dpname @ 14f71c3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DIST_POINT_set_dpname(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 2);
  lVar3 = X509_NAME_dup(param_2);
  *(longlong *)(param_1 + 4) = lVar3;
  if (lVar3 == 0) {
    return 0;
  }
  iVar5 = 0;
  iVar2 = OPENSSL_sk_num(uVar1);
  if (0 < iVar2) {
    do {
      uVar4 = OPENSSL_sk_value(uVar1,iVar5);
      iVar2 = X509_NAME_add_entry(*(undefined8 *)(param_1 + 4),uVar4,0xffffffff,iVar5 == 0);
      if (iVar2 == 0) goto LAB_14f71c474;
      iVar5 = iVar5 + 1;
      iVar2 = OPENSSL_sk_num(uVar1);
    } while (iVar5 < iVar2);
  }
  iVar2 = i2d_X509_NAME(*(undefined8 *)(param_1 + 4),0);
  if (-1 < iVar2) {
    return 1;
  }
LAB_14f71c474:
  X509_NAME_free(*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  return 0;
}

// ISSUING_DIST_POINT_free @ 14f71c4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ISSUING_DIST_POINT_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b6a20);
  return;
}

// ISSUING_DIST_POINT_new @ 14f71c4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ISSUING_DIST_POINT_new(void)

{
  ASN1_item_new(&DAT_1534b6a20);
  return;
}

// FUN_14f71c520 @ 14f71c520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f71c520(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = ASN1_item_new(&DAT_1534b68e0);
  if (lVar2 == 0) {
LAB_14f71c615:
    ASN1_item_free(lVar2,&DAT_1534b68e0);
    lVar2 = 0;
  }
  else {
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        lVar3 = OPENSSL_sk_value(param_2,iVar6);
        iVar1 = FUN_14f71cae0(lVar2,param_1,lVar3);
        if (iVar1 < 1) {
          if (iVar1 < 0) goto LAB_14f71c615;
          lVar4 = 0;
          do {
            lVar5 = lVar4 + 1;
            if ((*(char **)(lVar3 + 8))[lVar4] != "reasons"[lVar4]) {
              iVar1 = strcmp(*(char **)(lVar3 + 8),"CRLissuer");
              if (iVar1 != 0) goto LAB_14f71c5fe;
              lVar3 = FUN_14f71c710(param_1,*(undefined8 *)(lVar3 + 0x10));
              *(longlong *)(lVar2 + 0x10) = lVar3;
              bVar7 = lVar3 == 0;
              goto LAB_14f71c5fc;
            }
            lVar4 = lVar5;
          } while (lVar5 != 8);
          iVar1 = FUN_14f71cce0(lVar2 + 8,*(undefined8 *)(lVar3 + 0x10));
          bVar7 = iVar1 == 0;
LAB_14f71c5fc:
          if (bVar7) goto LAB_14f71c615;
        }
LAB_14f71c5fe:
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
      } while (iVar6 < iVar1);
    }
  }
  return lVar2;
}

// d2i_CRL_DIST_POINTS @ 14f71c650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_CRL_DIST_POINTS(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_DIST_POINT @ 14f71c680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DIST_POINT(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_DIST_POINT_NAME @ 14f71c6b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DIST_POINT_NAME(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_ISSUING_DIST_POINT @ 14f71c6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ISSUING_DIST_POINT(void)

{
  ASN1_item_d2i();
  return;
}

// FUN_14f71c710 @ 14f71c710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71c710(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f71c725;
  if (*param_2 == '@') {
    lVar1 = X509V3_get_section(param_1,param_2 + 1);
  }
  else {
    lVar1 = X509V3_parse_list(param_2);
  }
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x9c,0x96,"crypto\\x509v3\\v3_crld.c",0x37,uVar2);
    return 0;
  }
  uVar2 = v2i_GENERAL_NAMES(0,param_1,lVar1);
  if (*param_2 == '@') {
    X509V3_section_free(param_1,lVar1);
  }
  else {
    OPENSSL_sk_pop_free(lVar1,X509V3_conf_free);
  }
  return uVar2;
}

// i2d_CRL_DIST_POINTS @ 14f71c7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_CRL_DIST_POINTS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b6930);
  return;
}

// i2d_DIST_POINT @ 14f71c810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DIST_POINT(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b68e0);
  return;
}

// i2d_DIST_POINT_NAME @ 14f71c840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DIST_POINT_NAME(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b6850);
  return;
}

// i2d_ISSUING_DIST_POINT @ 14f71c870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ISSUING_DIST_POINT(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b6a20);
  return;
}

// FUN_14f71c8a0 @ 14f71c8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71c8a0(undefined8 param_1,int *param_2,ulonglong param_3)

{
  undefined8 local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71c8b5;
  if (*param_2 == 0) {
    BIO_printf(param_1,"%*sFull Name:\n");
    FUN_14f71c950(param_1,*(undefined8 *)(param_2 + 2),param_3 & 0xffffffff);
  }
  else {
    local_38[0] = *(undefined8 *)(param_2 + 2);
    BIO_printf(param_1,"%*sRelative Name:\n%*s",param_3,"",(int)param_3 + 2,"");
    X509_NAME_print_ex(param_1,local_38,0,0x82031f);
    BIO_puts(param_1,"\n");
  }
  return 1;
}

// FUN_14f71c950 @ 14f71c950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71c950(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      BIO_printf(param_1,"%*s",param_3 + 2,"");
      uVar2 = OPENSSL_sk_value(param_2,iVar3);
      GENERAL_NAME_print(param_1,uVar2);
      BIO_puts(param_1,"\n");
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}

// FUN_14f71ca00 @ 14f71ca00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71ca00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  BIO_printf(param_1,"%*s%s:\n%*s",param_4,"",param_2,param_4 + 2,"",0x14f71ca15);
  if (PTR_s_Unused_1534b6728 != (undefined *)0x0) {
    ppuVar4 = &PTR_s_Unused_1534b6728;
    do {
      iVar2 = ASN1_BIT_STRING_get_bit(param_3,*(undefined4 *)(ppuVar4 + -1));
      if (iVar2 != 0) {
        if (bVar1) {
          bVar1 = false;
        }
        else {
          BIO_puts(param_1,", ");
        }
        BIO_puts(param_1,*ppuVar4);
      }
      ppuVar4 = ppuVar4 + 3;
    } while (*ppuVar4 != (undefined *)0x0);
    pcVar3 = "\n";
    if (!bVar1) goto LAB_14f71cab4;
  }
  pcVar3 = "<EMPTY>\n";
LAB_14f71cab4:
  BIO_puts(param_1,pcVar3);
  return 1;
}

// FUN_14f71cae0 @ 14f71cae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71cae0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f71cafe;
  lVar2 = 0;
  uVar6 = 0;
  iVar1 = strncmp(*(char **)(param_3 + 8),"fullname",9);
  if (iVar1 == 0) {
    lVar2 = FUN_14f71c710(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar2 == 0) goto LAB_14f71cb65;
LAB_14f71cb3b:
    if (*param_1 == 0) {
      puVar5 = (undefined4 *)ASN1_item_new(&DAT_1534b6850);
      *param_1 = (longlong)puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        if (lVar2 != 0) {
          *puVar5 = 0;
          *(longlong *)(*param_1 + 8) = lVar2;
          return 1;
        }
        *puVar5 = 1;
        *(undefined8 *)(*param_1 + 8) = uVar6;
        return 1;
      }
      goto LAB_14f71cb65;
    }
    uVar8 = 0x6e;
    uVar7 = 0xa0;
  }
  else {
    iVar1 = strcmp(*(char **)(param_3 + 8),"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    puVar3 = (undefined8 *)X509_NAME_new();
    if (puVar3 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    lVar4 = X509V3_get_section(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar4 == 0) {
      ERR_put_error(0x22,0x9e,0x96,"crypto\\x509v3\\v3_crld.c",0x56,uVar9);
      return 0xffffffff;
    }
    iVar1 = X509V3_NAME_from_section(puVar3,lVar4,0x1001);
    X509V3_section_free(param_2,lVar4);
    uVar6 = *puVar3;
    *puVar3 = 0;
    X509_NAME_free(puVar3);
    if ((iVar1 == 0) || (iVar1 = OPENSSL_sk_num(uVar6), iVar1 < 1)) goto LAB_14f71cb65;
    iVar1 = OPENSSL_sk_num(uVar6);
    lVar4 = OPENSSL_sk_value(uVar6,iVar1 + -1);
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_14f71cb3b;
    uVar8 = 0x66;
    uVar7 = 0xa1;
  }
  ERR_put_error(0x22,0x9e,uVar7,"crypto\\x509v3\\v3_crld.c",uVar8,uVar9);
LAB_14f71cb65:
  OPENSSL_sk_pop_free(lVar2,GENERAL_NAME_free);
  OPENSSL_sk_pop_free(uVar6,X509_NAME_ENTRY_free);
  return 0xffffffff;
}

// FUN_14f71cce0 @ 14f71cce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f71cce0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = 0;
  lVar6 = X509V3_parse_list(param_2);
  if (lVar6 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar5 = OPENSSL_sk_num(lVar6);
    iVar10 = iVar11;
    if (0 < iVar5) {
      do {
        lVar7 = OPENSSL_sk_value(lVar6,iVar10);
        lVar7 = *(longlong *)(lVar7 + 8);
        if (*param_1 == 0) {
          lVar8 = ASN1_BIT_STRING_new();
          *param_1 = lVar8;
          if (lVar8 == 0) goto LAB_14f71cdf9;
        }
        puVar4 = &DAT_1534b6720;
        puVar3 = PTR_s_Unused_1534b6728;
        while (puVar3 != (undefined *)0x0) {
          pcVar9 = *(char **)(puVar4 + 4);
          lVar8 = lVar7 - (longlong)pcVar9;
          do {
            cVar1 = *pcVar9;
            cVar2 = pcVar9[lVar8];
            if (cVar1 != cVar2) break;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            iVar5 = ASN1_BIT_STRING_set_bit(*param_1,*puVar4,1);
            if (iVar5 == 0) goto LAB_14f71cdf9;
            break;
          }
          puVar3 = *(undefined **)(puVar4 + 8);
          puVar4 = puVar4 + 6;
        }
        if (*(longlong *)(puVar4 + 2) == 0) goto LAB_14f71cdf9;
        iVar10 = iVar10 + 1;
        iVar5 = OPENSSL_sk_num(lVar6);
      } while (iVar10 < iVar5);
    }
    iVar11 = 1;
  }
LAB_14f71cdf9:
  OPENSSL_sk_pop_free(lVar6,X509V3_conf_free);
  return iVar11;
}

// FUN_14f71ce20 @ 14f71ce20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71ce20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f71ce40 @ 14f71ce40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71ce40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f71ce60 @ 14f71ce60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71ce60(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f71ce80 @ 14f71ce80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71ce80(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f71cea0 @ 14f71cea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cea0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f71cec0 @ 14f71cec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cec0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f71cee0 @ 14f71cee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cee0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f71cf00 @ 14f71cf00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cf00(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f71cf20 @ 14f71cf20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cf20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f71cf40 @ 14f71cf40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cf40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f71cf60 @ 14f71cf60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cf60(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f71cf80 @ 14f71cf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cf80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f71cfa0 @ 14f71cfa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cfa0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f71cfc0 @ 14f71cfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cfc0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f71cfe0 @ 14f71cfe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71cfe0(void)

{
  OPENSSL_sk_value();
  return;
}

