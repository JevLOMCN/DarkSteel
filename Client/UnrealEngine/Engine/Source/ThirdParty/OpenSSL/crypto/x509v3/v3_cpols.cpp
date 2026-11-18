// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 45

// FUN_14f772e50 @ 14f772e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f772e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar5);
      BIO_printf(param_3,"%*sPolicy: ",param_4,"");
      i2a_ASN1_OBJECT(param_3,*puVar3);
      BIO_puts(param_3,"\n");
      lVar1 = puVar3[1];
      if (lVar1 != 0) {
        iVar4 = 0;
        iVar2 = OPENSSL_sk_num(lVar1);
        if (0 < iVar2) {
          do {
            puVar3 = (undefined8 *)OPENSSL_sk_value(lVar1,iVar4);
            iVar2 = OBJ_obj2nid(*puVar3);
            if (iVar2 == 0xa4) {
              BIO_printf(param_3,"%*sCPS: %.*s\n",param_4 + 2,"",*(undefined4 *)puVar3[1],
                         *(undefined8 *)((undefined4 *)puVar3[1] + 2));
            }
            else if (iVar2 == 0xa5) {
              BIO_printf(param_3,"%*sUser Notice:\n",param_4 + 2,"");
              FUN_14f774050(param_3,puVar3[1],param_4 + 4);
            }
            else {
              BIO_printf(param_3,"%*sUnknown Qualifier: ",param_4 + 4,"");
              i2a_ASN1_OBJECT(param_3,*puVar3);
              BIO_puts(param_3,"\n");
            }
            iVar4 = iVar4 + 1;
            iVar2 = OPENSSL_sk_num(lVar1);
          } while (iVar4 < iVar2);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar5 < iVar2);
  }
  return 1;
}

// FUN_14f772ff0 @ 14f772ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f772ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  
  lVar4 = X509V3_parse_list(param_3);
  iVar2 = OPENSSL_sk_num(lVar4);
  if (lVar4 == 0) {
    ERR_put_error(0x22,0x82,0x22,"crypto\\x509v3\\v3_cpols.c",0x65);
    return 0;
  }
  lVar5 = OPENSSL_sk_new_reserve(0,iVar2);
  if (lVar5 == 0) {
    uVar11 = 0x6b;
LAB_14f773084:
    ERR_put_error(0x22,0x82,0x41,"crypto\\x509v3\\v3_cpols.c",uVar11);
LAB_14f773278:
    OPENSSL_sk_pop_free(lVar4,X509V3_conf_free);
    OPENSSL_sk_pop_free(lVar5,POLICYINFO_free);
    lVar5 = 0;
  }
  else {
    iVar12 = 0;
    iVar10 = 0;
    if (0 < iVar2) {
      do {
        puVar6 = (undefined8 *)OPENSSL_sk_value(lVar4,iVar10);
        if ((puVar6[2] != 0) || (pcVar1 = (char *)puVar6[1], pcVar1 == (char *)0x0)) {
          uVar13 = 0x75;
          uVar11 = 0x86;
LAB_14f77322b:
          ERR_put_error(0x22,0x82,uVar11,"crypto\\x509v3\\v3_cpols.c",uVar13);
          ERR_add_error_data(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
          goto LAB_14f773278;
        }
        lVar7 = 0;
        do {
          lVar9 = lVar7;
          if (pcVar1[lVar9] != (&s_ia5org)[lVar9]) {
            if (*pcVar1 == '@') {
              lVar7 = X509V3_get_section(param_2,pcVar1 + 1);
              if (lVar7 == 0) {
                uVar13 = 0x81;
                uVar11 = 0x87;
                goto LAB_14f77322b;
              }
              plVar8 = (longlong *)FUN_14f773d60(param_2,lVar7,iVar12);
              X509V3_section_free(param_2,lVar7);
              if (plVar8 == (longlong *)0x0) goto LAB_14f773278;
            }
            else {
              lVar7 = OBJ_txt2obj(pcVar1,0);
              if (lVar7 == 0) {
                uVar13 = 0x8d;
                uVar11 = 0x6e;
                goto LAB_14f77322b;
              }
              plVar8 = (longlong *)ASN1_item_new(&DAT_1534d8ec0);
              if (plVar8 == (longlong *)0x0) {
                ASN1_OBJECT_free(lVar7);
                uVar11 = 0x94;
                goto LAB_14f773084;
              }
              *plVar8 = lVar7;
            }
            iVar3 = OPENSSL_sk_push(lVar5,plVar8);
            if (iVar3 != 0) goto LAB_14f773189;
            ASN1_item_free(plVar8,&DAT_1534d8ec0);
            uVar11 = 0x9b;
            goto LAB_14f773084;
          }
          lVar7 = lVar9 + 1;
        } while (lVar9 + 1 != 7);
        iVar12 = (int)lVar9 + -5;
LAB_14f773189:
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar2);
    }
    OPENSSL_sk_pop_free(lVar4,X509V3_conf_free);
  }
  return lVar5;
}

// CERTIFICATEPOLICIES_free @ 14f773310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CERTIFICATEPOLICIES_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534d8e48);
  return;
}

// CERTIFICATEPOLICIES_new @ 14f773340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CERTIFICATEPOLICIES_new(void)

{
  ASN1_item_new(&DAT_1534d8e48);
  return;
}

// NOTICEREF_free @ 14f773370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NOTICEREF_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534d90b0);
  return;
}

// NOTICEREF_new @ 14f7733a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NOTICEREF_new(void)

{
  ASN1_item_new(&DAT_1534d90b0);
  return;
}

// POLICYINFO_free @ 14f7733d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICYINFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534d8ec0);
  return;
}

// POLICYINFO_new @ 14f773400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICYINFO_new(void)

{
  ASN1_item_new(&DAT_1534d8ec0);
  return;
}

// POLICYQUALINFO_free @ 14f773430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICYQUALINFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534d8fd0);
  return;
}

// POLICYQUALINFO_new @ 14f773460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICYQUALINFO_new(void)

{
  ASN1_item_new(&DAT_1534d8fd0);
  return;
}

// USERNOTICE_free @ 14f773490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void USERNOTICE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534d9040);
  return;
}

// USERNOTICE_new @ 14f7734c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void USERNOTICE_new(void)

{
  ASN1_item_new(&DAT_1534d9040);
  return;
}

// X509_POLICY_NODE_print @ 14f7734f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_POLICY_NODE_print(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f773505;
  pbVar1 = (byte *)*param_2;
  BIO_printf(param_1,"%*sPolicy: ",param_3,"");
  i2a_ASN1_OBJECT(param_1,*(undefined8 *)(pbVar1 + 8));
  BIO_puts(param_1,"\n");
  iVar3 = (int)param_3 + 2;
  pcVar2 = "Non Critical";
  if ((*pbVar1 & 0x10) != 0) {
    pcVar2 = "Critical";
  }
  BIO_printf(param_1,"%*s%s\n",iVar3,"",pcVar2,uVar4);
  if (*(longlong *)(pbVar1 + 0x10) != 0) {
    FUN_14f7741e0();
    return;
  }
  BIO_printf(param_1,"%*sNo Qualifiers\n",iVar3,"");
  return;
}

// d2i_CERTIFICATEPOLICIES @ 14f7735c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_CERTIFICATEPOLICIES(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_NOTICEREF @ 14f7735f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_NOTICEREF(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_POLICYINFO @ 14f773620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_POLICYINFO(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_POLICYQUALINFO @ 14f773650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_POLICYQUALINFO(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_USERNOTICE @ 14f773680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_USERNOTICE(void)

{
  ASN1_item_d2i();
  return;
}

// FUN_14f7736b0 @ 14f7736b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7736b0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strchr(param_1,0x3a);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  return (longlong)pcVar1 - (longlong)param_1;
}

// FUN_14f7736f0 @ 14f7736f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7736f0(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  *param_2 = 0;
  pcVar3 = strchr(param_1,0x3a);
  if (pcVar3 == (char *)0x0) {
    return 0x1a;
  }
  uVar1 = (int)pcVar3 - (int)param_1;
  if (uVar1 == 0xffffffff) {
    return 0x1a;
  }
  *param_2 = uVar1;
  if (uVar1 == 4) {
    pcVar3 = "UTF8";
  }
  else {
    if (uVar1 != 10) {
      if (uVar1 == 3) {
        pcVar3 = "BMP";
      }
      else {
        if (uVar1 != 9) {
          if (uVar1 == 7) {
            iVar2 = strncmp(param_1,"VISIBLE",7);
            if (iVar2 == 0) {
              return 0x1a;
            }
          }
          else if ((uVar1 == 0xd) && (iVar2 = strncmp(param_1,"VISIBLESTRING",0xd), iVar2 == 0)) {
            return 0x1a;
          }
          goto LAB_14f7737f4;
        }
        pcVar3 = "BMPSTRING";
      }
      iVar2 = strncmp(param_1,pcVar3,(ulonglong)uVar1);
      if (iVar2 == 0) {
        return 0x1e;
      }
      goto LAB_14f7737f4;
    }
    pcVar3 = "UTF8String";
  }
  iVar2 = strncmp(param_1,pcVar3,(ulonglong)uVar1);
  if (iVar2 == 0) {
    return 0xc;
  }
LAB_14f7737f4:
  *param_2 = 0;
  return 0x1a;
}

// i2d_CERTIFICATEPOLICIES @ 14f773810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_CERTIFICATEPOLICIES(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534d8e48);
  return;
}

// i2d_NOTICEREF @ 14f773840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_NOTICEREF(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534d90b0);
  return;
}

// i2d_POLICYINFO @ 14f773870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_POLICYINFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534d8ec0);
  return;
}

// i2d_POLICYQUALINFO @ 14f7738a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_POLICYQUALINFO(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534d8fd0);
  return;
}

// i2d_USERNOTICE @ 14f7738d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_USERNOTICE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534d9040);
  return;
}

// FUN_14f773900 @ 14f773900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f773900(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar11;
  
  plVar2 = (longlong *)ASN1_item_new(&DAT_1534d8fd0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = OBJ_nid2obj(0xa5);
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      uVar11 = 0x128;
      uVar10 = 0x44;
      goto LAB_14f773a2d;
    }
    plVar4 = (longlong *)ASN1_item_new(&DAT_1534d9040);
    if (plVar4 != (longlong *)0x0) {
      plVar2[1] = (longlong)plVar4;
      iVar9 = 0;
      iVar1 = OPENSSL_sk_num(param_2);
      if (0 < iVar1) {
        do {
          puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar9);
          _Str1 = (char *)puVar5[1];
          lVar3 = puVar5[2];
          iVar1 = strcmp(_Str1,"explicitText");
          if (iVar1 == 0) {
            uVar10 = FUN_14f7736f0(lVar3,local_res20);
            lVar6 = ASN1_STRING_type_new(uVar10);
            plVar4[1] = lVar6;
            if (lVar6 == 0) goto LAB_14f773a1f;
            if (local_res20[0] != 0) {
              lVar3 = lVar3 + (ulonglong)(local_res20[0] + 1);
            }
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)(lVar3 + lVar7) != '\0');
            iVar1 = ASN1_STRING_set(lVar6,lVar3);
joined_r0x00014f773ae4:
            if (iVar1 == 0) goto LAB_14f773a1f;
          }
          else {
            iVar1 = strcmp(_Str1,"organization");
            if (iVar1 == 0) {
              plVar8 = (longlong *)*plVar4;
              if (plVar8 == (longlong *)0x0) {
                plVar8 = (longlong *)ASN1_item_new(&DAT_1534d90b0);
                if (plVar8 == (longlong *)0x0) goto LAB_14f773a1f;
                *plVar4 = (longlong)plVar8;
              }
              if (param_3 == 0) {
                *(undefined4 *)(*plVar8 + 4) = 0x1a;
              }
              else {
                *(undefined4 *)(*plVar8 + 4) = 0x16;
              }
              lVar3 = -1;
              do {
                lVar3 = lVar3 + 1;
              } while (*(char *)(puVar5[2] + lVar3) != '\0');
              iVar1 = ASN1_STRING_set(*plVar8);
              goto joined_r0x00014f773ae4;
            }
            iVar1 = strcmp(_Str1,"noticeNumbers");
            if (iVar1 != 0) {
              ERR_put_error(0x22,0x84,0x8a,"crypto\\x509v3\\v3_cpols.c",0x15e);
              ERR_add_error_data(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
              goto LAB_14f773a41;
            }
            lVar3 = *plVar4;
            if (lVar3 == 0) {
              lVar3 = ASN1_item_new(&DAT_1534d90b0);
              if (lVar3 == 0) goto LAB_14f773a1f;
              *plVar4 = lVar3;
            }
            lVar6 = X509V3_parse_list(puVar5[2]);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
            if (lVar6 == 0) {
LAB_14f773baa:
              ERR_put_error(0x22,0x84,0x8d,"crypto\\x509v3\\v3_cpols.c",CONCAT44(uVar10,0x154));
              ERR_add_error_data(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
              OPENSSL_sk_pop_free(lVar6,X509V3_conf_free);
              goto LAB_14f773a41;
            }
            iVar1 = OPENSSL_sk_num(lVar6);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
            if (iVar1 == 0) goto LAB_14f773baa;
            iVar1 = FUN_14f773c90(*(undefined8 *)(lVar3 + 8),lVar6);
            OPENSSL_sk_pop_free(lVar6,X509V3_conf_free);
            if (iVar1 == 0) goto LAB_14f773a41;
          }
          iVar9 = iVar9 + 1;
          iVar1 = OPENSSL_sk_num(param_2);
        } while (iVar9 < iVar1);
      }
      plVar4 = (longlong *)*plVar4;
      if (plVar4 == (longlong *)0x0) {
        return plVar2;
      }
      if ((plVar4[1] != 0) && (*plVar4 != 0)) {
        return plVar2;
      }
      uVar11 = 0x167;
      uVar10 = 0x8e;
      goto LAB_14f773a2d;
    }
  }
LAB_14f773a1f:
  uVar11 = 0x16e;
  uVar10 = 0x41;
LAB_14f773a2d:
  ERR_put_error(0x22,0x84,uVar10,"crypto\\x509v3\\v3_cpols.c",uVar11);
LAB_14f773a41:
  ASN1_item_free(plVar2,&DAT_1534d8fd0);
  return (longlong *)0x0;
}

// FUN_14f773c90 @ 14f773c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f773c90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(param_2,iVar3);
      lVar2 = s2i_ASN1_INTEGER(0,*(undefined8 *)(lVar2 + 8));
      if (lVar2 == 0) {
        uVar5 = 0x17f;
        uVar4 = 0x8c;
LAB_14f773d3b:
        ERR_put_error(0x22,0x85,uVar4,"crypto\\x509v3\\v3_cpols.c",uVar5);
        return 0;
      }
      iVar1 = OPENSSL_sk_push(param_1,lVar2);
      if (iVar1 == 0) {
        ASN1_INTEGER_free(lVar2);
        uVar4 = 0x41;
        uVar5 = 0x189;
        goto LAB_14f773d3b;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}

// FUN_14f773d60 @ 14f773d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f773d60(undefined8 param_1,undefined8 param_2)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar2 = (longlong *)ASN1_item_new(&DAT_1534d8ec0);
  if (plVar2 == (longlong *)0x0) {
LAB_14f773ff0:
    uVar9 = 0xf3;
    uVar8 = 0x41;
  }
  else {
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
LAB_14f773dc0:
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar6);
      _Str1 = (char *)puVar3[1];
      iVar1 = strcmp(_Str1,"policyIdentifier");
      if (iVar1 == 0) {
        lVar4 = OBJ_txt2obj(puVar3[2],0);
        if (lVar4 == 0) {
          uVar9 = 0xb7;
          uVar8 = 0x6e;
LAB_14f773f59:
          ERR_put_error(0x22,0x83,uVar8,"crypto\\x509v3\\v3_cpols.c",uVar9);
          ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
          goto LAB_14f774012;
        }
        *plVar2 = lVar4;
      }
      else {
        iVar1 = name_cmp(_Str1,"CPS");
        if (iVar1 != 0) {
          iVar1 = name_cmp(puVar3[1],"userNotice");
          if (iVar1 == 0) {
            if (*(char *)puVar3[2] == '@') {
              lVar4 = X509V3_get_section(param_1,(char *)puVar3[2] + 1);
              if (lVar4 == 0) {
                uVar9 = 0xd7;
                uVar8 = 0x87;
                goto LAB_14f773f59;
              }
              lVar7 = FUN_14f773900(param_1,lVar4);
              X509V3_section_free(param_1,lVar4);
              if (lVar7 != 0) {
                if (plVar2[1] == 0) {
                  lVar4 = OPENSSL_sk_new_null();
                  plVar2[1] = lVar4;
                }
                iVar1 = OPENSSL_sk_push(plVar2[1],lVar7);
                goto LAB_14f773f14;
              }
              goto LAB_14f774012;
            }
            uVar9 = 0xd1;
            uVar8 = 0x89;
          }
          else {
            uVar9 = 0xe5;
            uVar8 = 0x8a;
          }
          goto LAB_14f773f59;
        }
        if (plVar2[1] == 0) {
          lVar4 = OPENSSL_sk_new_null();
          plVar2[1] = lVar4;
        }
        plVar5 = (longlong *)ASN1_item_new(&DAT_1534d8fd0);
        if ((plVar5 == (longlong *)0x0) || (iVar1 = OPENSSL_sk_push(plVar2[1],plVar5), iVar1 == 0))
        goto LAB_14f773ff0;
        lVar4 = OBJ_nid2obj(0xa4);
        *plVar5 = lVar4;
        if (lVar4 == 0) {
          uVar9 = 0xc5;
          uVar8 = 0x44;
          goto LAB_14f773ffe;
        }
        lVar4 = ASN1_IA5STRING_new();
        plVar5[1] = lVar4;
        if (lVar4 == 0) goto LAB_14f773ff0;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(puVar3[2] + lVar7) != '\0');
        iVar1 = ASN1_STRING_set(lVar4);
LAB_14f773f14:
        if (iVar1 == 0) goto LAB_14f773ff0;
      }
      iVar6 = iVar6 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar6) goto LAB_14f773f2e;
      goto LAB_14f773dc0;
    }
LAB_14f773f2e:
    if (*plVar2 != 0) {
      return plVar2;
    }
    uVar9 = 0xec;
    uVar8 = 0x8b;
  }
LAB_14f773ffe:
  ERR_put_error(0x22,0x83,uVar8,"crypto\\x509v3\\v3_cpols.c",uVar9);
LAB_14f774012:
  ASN1_item_free(plVar2,&DAT_1534d8ec0);
  return (longlong *)0x0;
}

// FUN_14f774050 @ 14f774050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774050(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    uVar7 = *(undefined8 *)((undefined4 *)*puVar1 + 2);
    BIO_printf(param_1,"%*sOrganization: %.*s\n",param_3,"",*(undefined4 *)*puVar1,uVar7);
    iVar3 = OPENSSL_sk_num(puVar1[1]);
    pcVar5 = "";
    if (1 < iVar3) {
      pcVar5 = "s";
    }
    BIO_printf(param_1,"%*sNumber%s: ",param_3 & 0xffffffff,"",pcVar5,uVar7);
    iVar6 = 0;
    iVar3 = OPENSSL_sk_num(puVar1[1]);
    if (0 < iVar3) {
      do {
        lVar4 = OPENSSL_sk_value(puVar1[1],iVar6);
        if (iVar6 != 0) {
          BIO_puts(param_1,", ");
        }
        if (lVar4 == 0) {
          BIO_puts(param_1,"(null)");
        }
        else {
          lVar4 = i2s_ASN1_INTEGER(0,lVar4);
          if (lVar4 == 0) {
            return;
          }
          BIO_puts(param_1,lVar4);
          CRYPTO_free(lVar4,"crypto\\x509v3\\v3_cpols.c",0x1d5);
        }
        iVar6 = iVar6 + 1;
        iVar3 = OPENSSL_sk_num(puVar1[1]);
      } while (iVar6 < iVar3);
    }
    BIO_puts(param_1,"\n");
  }
  puVar2 = (undefined4 *)param_2[1];
  if (puVar2 != (undefined4 *)0x0) {
    BIO_printf(param_1,"%*sExplicit Text: %.*s\n",param_3 & 0xffffffff,"",*puVar2,
               *(undefined8 *)(puVar2 + 2));
  }
  return;
}

// FUN_14f7741e0 @ 14f7741e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7741e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  iVar7 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar7);
      iVar2 = OBJ_obj2nid(*puVar3);
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      if (iVar2 == 0xa4) {
        puVar5 = (undefined4 *)puVar3[1];
        pcVar6 = "%*sCPS: %.*s\n";
        iVar2 = param_3;
LAB_14f7743d0:
        in_stack_ffffffffffffffc8 = (char *)CONCAT44(uVar9,*puVar5);
        BIO_printf(param_1,pcVar6,iVar2,"",in_stack_ffffffffffffffc8,*(undefined8 *)(puVar5 + 2));
      }
      else if (iVar2 == 0xa5) {
        BIO_printf(param_1,"%*sUser Notice:\n",param_3,"");
        puVar3 = (undefined8 *)puVar3[1];
        puVar1 = (undefined8 *)*puVar3;
        if (puVar1 != (undefined8 *)0x0) {
          uVar10 = *(undefined8 *)((undefined4 *)*puVar1 + 2);
          BIO_printf(param_1,"%*sOrganization: %.*s\n",param_3 + 2,"",*(undefined4 *)*puVar1,uVar10)
          ;
          iVar2 = OPENSSL_sk_num(puVar1[1]);
          in_stack_ffffffffffffffc8 = "";
          if (1 < iVar2) {
            in_stack_ffffffffffffffc8 = "s";
          }
          BIO_printf(param_1,"%*sNumber%s: ",param_3 + 2,"",in_stack_ffffffffffffffc8,uVar10);
          iVar8 = 0;
          iVar2 = OPENSSL_sk_num(puVar1[1]);
          if (0 < iVar2) {
            do {
              lVar4 = OPENSSL_sk_value(puVar1[1],iVar8);
              if (iVar8 != 0) {
                BIO_puts(param_1,", ");
              }
              if (lVar4 == 0) {
                BIO_puts(param_1,"(null)");
              }
              else {
                lVar4 = i2s_ASN1_INTEGER(0,lVar4);
                if (lVar4 == 0) goto LAB_14f7743ee;
                BIO_puts(param_1,lVar4);
                CRYPTO_free(lVar4,"crypto\\x509v3\\v3_cpols.c",0x1d5);
              }
              iVar8 = iVar8 + 1;
              iVar2 = OPENSSL_sk_num(puVar1[1]);
            } while (iVar8 < iVar2);
          }
          BIO_puts(param_1,"\n");
        }
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
        puVar5 = (undefined4 *)puVar3[1];
        if (puVar5 != (undefined4 *)0x0) {
          pcVar6 = "%*sExplicit Text: %.*s\n";
          iVar2 = param_3 + 2;
          goto LAB_14f7743d0;
        }
      }
      else {
        BIO_printf(param_1,"%*sUnknown Qualifier: ",param_3 + 2,"");
        i2a_ASN1_OBJECT(param_1,*puVar3);
        BIO_puts(param_1,"\n");
      }
LAB_14f7743ee:
      iVar7 = iVar7 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar7 < iVar2);
  }
  return;
}

// FUN_14f774430 @ 14f774430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774430(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f774450 @ 14f774450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774450(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f774470 @ 14f774470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774470(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f774490 @ 14f774490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774490(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7744b0 @ 14f7744b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7744b0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7744d0 @ 14f7744d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7744d0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7744f0 @ 14f7744f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7744f0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f774510 @ 14f774510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774510(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f774530 @ 14f774530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774530(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f774550 @ 14f774550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774550(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f774570 @ 14f774570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774570(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f774590 @ 14f774590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774590(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7745b0 @ 14f7745b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7745b0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7745d0 @ 14f7745d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7745d0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7745f0 @ 14f7745f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7745f0(void)

{
  OPENSSL_sk_value();
  return;
}

