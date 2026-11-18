// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 43

// FUN_14f784420 @ 14f784420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f784420(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  char *local_108;
  char *local_100;
  undefined1 *local_f8;
  char *local_f0;
  int local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f78443a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_e0 = param_1;
  local_d8 = param_2;
  if ((*param_2 == 0) ||
     ((((iVar1 = BIO_printf(param_3,"%*sadmissionAuthority:\n",param_4,""), 0 < iVar1 &&
        (iVar1 = BIO_printf(param_3,"%*s  ",param_4,""), 0 < iVar1)) &&
       (iVar1 = GENERAL_NAME_print(param_3,*param_2), 0 < iVar1)) &&
      (iVar1 = BIO_printf(param_3,"\n"), 0 < iVar1)))) {
    iVar1 = 0;
    iVar2 = OPENSSL_sk_num(param_2[1]);
    if (0 < iVar2) {
      do {
        plVar4 = (longlong *)OPENSSL_sk_value(param_2[1],iVar1);
        iVar1 = iVar1 + 1;
        local_108 = (char *)CONCAT44(local_108._4_4_,iVar1);
        local_e8 = iVar1;
        iVar2 = BIO_printf(param_3,"%*sEntry %0d:\n",param_4,"");
        if ((iVar2 < 1) ||
           (((*plVar4 != 0 &&
             (((iVar2 = BIO_printf(param_3,"%*s  admissionAuthority:\n",param_4,""), iVar2 < 1 ||
               (iVar2 = BIO_printf(param_3,"%*s    ",param_4,""), iVar2 < 1)) ||
              ((iVar2 = GENERAL_NAME_print(param_3,*plVar4), iVar2 < 1 ||
               (iVar2 = BIO_printf(param_3,"\n"), iVar2 < 1)))))) ||
            ((plVar4[1] != 0 &&
             (iVar2 = FUN_14f784ff0(param_1,plVar4[1],param_3,param_4), iVar2 < 1))))))
        goto LAB_14f784887;
        iVar8 = 0;
        iVar2 = OPENSSL_sk_num(plVar4[2]);
        if (0 < iVar2) {
          do {
            plVar5 = (longlong *)OPENSSL_sk_value(plVar4[2],iVar8);
            iVar8 = iVar8 + 1;
            local_108 = (char *)CONCAT44(local_108._4_4_,iVar8);
            iVar1 = BIO_printf(param_3,"%*s  Profession Info Entry %0d:\n",param_4,"");
            if (((iVar1 < 1) ||
                ((plVar5[3] != 0 &&
                 (((iVar1 = BIO_printf(param_3,"%*s    registrationNumber: ",param_4,""), iVar1 < 1
                   || (iVar1 = ASN1_STRING_print(param_3,plVar5[3]), iVar1 < 1)) ||
                  (iVar1 = BIO_printf(param_3,"\n"), iVar1 < 1)))))) ||
               ((*plVar5 != 0 &&
                (iVar1 = FUN_14f784ff0(param_1,*plVar5,param_3,param_4 + 2), iVar1 < 1))))
            goto LAB_14f784887;
            if (plVar5[1] != 0) {
              iVar1 = BIO_printf(param_3,"%*s    Info Entries:\n",param_4,"");
              if (iVar1 < 1) goto LAB_14f784887;
              iVar2 = 0;
              iVar1 = OPENSSL_sk_num(plVar5[1]);
              if (0 < iVar1) {
                do {
                  uVar6 = OPENSSL_sk_value(plVar5[1],iVar2);
                  iVar1 = BIO_printf(param_3,"%*s      ",param_4,"");
                  if (((iVar1 < 1) || (iVar1 = ASN1_STRING_print(param_3,uVar6), iVar1 < 1)) ||
                     (iVar1 = BIO_printf(param_3,"\n"), iVar1 < 1)) goto LAB_14f784887;
                  iVar2 = iVar2 + 1;
                  iVar1 = OPENSSL_sk_num(plVar5[1]);
                } while (iVar2 < iVar1);
              }
            }
            if (plVar5[2] != 0) {
              iVar1 = BIO_printf(param_3,"%*s    Profession OIDs:\n",param_4,"");
              if (iVar1 < 1) goto LAB_14f784887;
              iVar2 = 0;
              iVar1 = OPENSSL_sk_num(plVar5[2]);
              if (0 < iVar1) {
                do {
                  uVar6 = OPENSSL_sk_value(plVar5[2],iVar2);
                  uVar3 = OBJ_obj2nid(uVar6);
                  pcVar7 = (char *)OBJ_nid2ln(uVar3);
                  OBJ_obj2txt(local_c8,0x80,uVar6);
                  bVar9 = pcVar7 != (char *)0x0;
                  local_f0 = "";
                  if (bVar9) {
                    local_f0 = ")";
                  }
                  local_100 = "";
                  if (bVar9) {
                    local_100 = " (";
                  }
                  local_f8 = local_c8;
                  local_108 = "";
                  if (bVar9) {
                    local_108 = pcVar7;
                  }
                  iVar1 = BIO_printf(param_3,"%*s      %s%s%s%s\n",param_4,"");
                  if (iVar1 < 1) goto LAB_14f784887;
                  iVar2 = iVar2 + 1;
                  iVar1 = OPENSSL_sk_num(plVar5[2]);
                } while (iVar2 < iVar1);
              }
            }
            iVar2 = OPENSSL_sk_num(plVar4[2]);
            param_2 = local_d8;
            param_1 = local_e0;
            iVar1 = local_e8;
          } while (iVar8 < iVar2);
        }
        iVar2 = OPENSSL_sk_num(param_2[1]);
      } while (iVar1 < iVar2);
    }
    uVar6 = 1;
  }
  else {
LAB_14f784887:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

// ADMISSIONS_free @ 14f7848e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSIONS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534db9d0);
  return;
}

// ADMISSIONS_new @ 14f784940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSIONS_new(void)

{
  ASN1_item_new(&DAT_1534db9d0);
  return;
}

// ADMISSIONS_set0_admissionAuthority @ 14f784970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSIONS_set0_admissionAuthority(undefined8 *param_1,undefined8 param_2)

{
  GENERAL_NAME_free(*param_1);
  *param_1 = param_2;
  return;
}

// ADMISSIONS_set0_namingAuthority @ 14f7849b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSIONS_set0_namingAuthority(longlong param_1,undefined8 param_2)

{
  ASN1_item_free(*(undefined8 *)(param_1 + 8),&DAT_1534db870);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

// ADMISSIONS_set0_professionInfos @ 14f7849f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSIONS_set0_professionInfos(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),PROFESSION_INFO_free);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

// ADMISSION_SYNTAX_free @ 14f784a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSION_SYNTAX_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534dba40);
  return;
}

// ADMISSION_SYNTAX_new @ 14f784a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSION_SYNTAX_new(void)

{
  ASN1_item_new(&DAT_1534dba40);
  return;
}

// ADMISSION_SYNTAX_set0_admissionAuthority @ 14f784ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSION_SYNTAX_set0_admissionAuthority(undefined8 *param_1,undefined8 param_2)

{
  GENERAL_NAME_free(*param_1);
  *param_1 = param_2;
  return;
}

// ADMISSION_SYNTAX_set0_contentsOfAdmissions @ 14f784af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ADMISSION_SYNTAX_set0_contentsOfAdmissions(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),ADMISSIONS_free);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

// NAMING_AUTHORITY_free @ 14f784b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NAMING_AUTHORITY_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534db870);
  return;
}

// NAMING_AUTHORITY_new @ 14f784b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NAMING_AUTHORITY_new(void)

{
  ASN1_item_new(&DAT_1534db870);
  return;
}

// NAMING_AUTHORITY_set0_authorityId @ 14f784bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NAMING_AUTHORITY_set0_authorityId(undefined8 *param_1,undefined8 param_2)

{
  ASN1_OBJECT_free(*param_1);
  *param_1 = param_2;
  return;
}

// NAMING_AUTHORITY_set0_authorityText @ 14f784c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NAMING_AUTHORITY_set0_authorityText(longlong param_1,undefined8 param_2)

{
  ASN1_IA5STRING_free(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

// NAMING_AUTHORITY_set0_authorityURL @ 14f784c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NAMING_AUTHORITY_set0_authorityURL(longlong param_1,undefined8 param_2)

{
  ASN1_IA5STRING_free(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

// PROFESSION_INFO_free @ 14f784c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROFESSION_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534db940);
  return;
}

// PROFESSION_INFO_new @ 14f784d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROFESSION_INFO_new(void)

{
  ASN1_item_new(&DAT_1534db940);
  return;
}

// PROFESSION_INFO_set0_addProfessionInfo @ 14f784d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROFESSION_INFO_set0_addProfessionInfo(longlong param_1,undefined8 param_2)

{
  ASN1_OCTET_STRING_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}

// PROFESSION_INFO_set0_namingAuthority @ 14f784d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROFESSION_INFO_set0_namingAuthority(undefined8 *param_1,undefined8 param_2)

{
  ASN1_item_free(*param_1,&DAT_1534db870);
  *param_1 = param_2;
  return;
}

// PROFESSION_INFO_set0_professionItems @ 14f784db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROFESSION_INFO_set0_professionItems(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),ASN1_STRING_free);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

// PROFESSION_INFO_set0_professionOIDs @ 14f784df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROFESSION_INFO_set0_professionOIDs(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),ASN1_OBJECT_free);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

// PROFESSION_INFO_set0_registrationNumber @ 14f784e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PROFESSION_INFO_set0_registrationNumber(longlong param_1,undefined8 param_2)

{
  ASN1_PRINTABLESTRING_free(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}

// d2i_ADMISSIONS @ 14f784e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ADMISSIONS(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_ADMISSION_SYNTAX @ 14f784ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ADMISSION_SYNTAX(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_NAMING_AUTHORITY @ 14f784ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_NAMING_AUTHORITY(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PROFESSION_INFO @ 14f784f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PROFESSION_INFO(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_ADMISSIONS @ 14f784f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ADMISSIONS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534db9d0);
  return;
}

// i2d_ADMISSION_SYNTAX @ 14f784f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ADMISSION_SYNTAX(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534dba40);
  return;
}

// i2d_NAMING_AUTHORITY @ 14f784f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_NAMING_AUTHORITY(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534db870);
  return;
}

// i2d_PROFESSION_INFO @ 14f784fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PROFESSION_INFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534db940);
  return;
}

// FUN_14f784ff0 @ 14f784ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f784ff0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  char *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f784ffe;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) || (((*param_2 == 0 && (param_2[2] == 0)) && (param_2[1] == 0))))
  {
    return 0;
  }
  iVar1 = BIO_printf(param_3,"%*snamingAuthority: ",param_4,"");
  if (iVar1 < 1) {
    return 0;
  }
  if (*param_2 != 0) {
    uVar2 = OBJ_obj2nid();
    pcVar3 = (char *)OBJ_nid2ln(uVar2);
    iVar1 = BIO_printf(param_3,"%*s  admissionAuthorityId: ",param_4,"");
    if (iVar1 < 1) {
      return 0;
    }
    OBJ_obj2txt(local_a8,0x80,*param_2);
    bVar6 = pcVar3 != (char *)0x0;
    local_b0 = "";
    if (bVar6) {
      local_b0 = ")";
    }
    pcVar5 = "";
    if (bVar6) {
      pcVar5 = " (";
    }
    local_b8 = local_a8;
    pcVar4 = "";
    if (bVar6) {
      pcVar4 = pcVar3;
    }
    iVar1 = BIO_printf(param_3,"%s%s%s%s\n",pcVar4,pcVar5);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (((param_2[2] == 0) ||
      (((iVar1 = BIO_printf(param_3,"%*s  namingAuthorityText: ",param_4,""), 0 < iVar1 &&
        (iVar1 = ASN1_STRING_print(param_3,param_2[2]), 0 < iVar1)) &&
       (iVar1 = BIO_printf(param_3,"\n"), 0 < iVar1)))) &&
     ((param_2[1] == 0 ||
      (((iVar1 = BIO_printf(param_3,"%*s  namingAuthorityUrl: ",param_4,""), 0 < iVar1 &&
        (iVar1 = ASN1_STRING_print(param_3,param_2[1]), 0 < iVar1)) &&
       (iVar1 = BIO_printf(param_3,"\n"), 0 < iVar1)))))) {
    return 1;
  }
  return 0;
}

// FUN_14f7851d0 @ 14f7851d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7851d0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7851f0 @ 14f7851f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7851f0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f785210 @ 14f785210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f785210(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f785230 @ 14f785230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f785230(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f785250 @ 14f785250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f785250(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f785270 @ 14f785270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f785270(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f785290 @ 14f785290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f785290(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7852b0 @ 14f7852b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7852b0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7852d0 @ 14f7852d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7852d0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7852f0 @ 14f7852f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7852f0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f785310 @ 14f785310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f785310(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f785330 @ 14f785330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f785330(void)

{
  OPENSSL_sk_value();
  return;
}

