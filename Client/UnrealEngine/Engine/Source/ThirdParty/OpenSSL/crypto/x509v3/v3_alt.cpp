// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 24

// i2v_GENERAL_NAMES @ 14f76bcd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong i2v_GENERAL_NAMES(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_170;
  uint local_168;
  longlong local_158;
  char local_150 [7];
  char acStack_149 [257];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f76bcef;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  iVar9 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  lVar4 = param_3;
  lVar7 = param_3;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)OPENSSL_sk_value(param_2,iVar9);
      local_158 = lVar7;
      switch(*puVar3) {
      case 0:
        pcVar6 = "<unsupported>";
        pcVar5 = "othername";
        break;
      case 1:
        iVar2 = x509v3_add_len_value_uchar
                          ("email",*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                           (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_14f76bf41;
      case 2:
        iVar2 = x509v3_add_len_value_uchar
                          ("DNS",*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                           (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_14f76bf41;
      case 3:
        pcVar6 = "<unsupported>";
        pcVar5 = "X400Name";
        break;
      case 4:
        lVar4 = X509_NAME_oneline(*(undefined8 *)(puVar3 + 2),acStack_149 + 1,0x100);
        if (lVar4 == 0) goto LAB_14f76bf72;
        pcVar5 = "DirName";
        goto LAB_14f76bf32;
      case 5:
        pcVar6 = "<unsupported>";
        pcVar5 = "EdiPartyName";
        break;
      case 6:
        iVar2 = x509v3_add_len_value_uchar
                          ("URI",*(undefined8 *)(*(int **)(puVar3 + 2) + 2),
                           (longlong)**(int **)(puVar3 + 2),&local_158);
        goto LAB_14f76bf41;
      case 7:
        iVar2 = **(int **)(puVar3 + 2);
        puVar8 = *(undefined1 **)(*(int **)(puVar3 + 2) + 2);
        if (iVar2 == 4) {
          local_168 = (uint)(byte)puVar8[3];
          local_170 = (uint)(byte)puVar8[2];
          local_178 = (uint)(byte)puVar8[1];
          BIO_snprintf(acStack_149 + 1,0x100,"%d.%d.%d.%d",*puVar8);
          pcVar5 = "IP Address";
        }
        else {
          if (iVar2 != 0x10) {
            pcVar6 = "<invalid>";
            pcVar5 = "IP Address";
            break;
          }
          acStack_149[1] = '\0';
          iVar2 = 0;
          do {
            BIO_snprintf(local_150,5,"%X",CONCAT11(*puVar8,puVar8[1]));
            pcVar5 = acStack_149;
            puVar8 = puVar8 + 2;
            do {
              pcVar6 = pcVar5 + 1;
              pcVar5 = pcVar5 + 1;
            } while (*pcVar6 != '\0');
            lVar4 = 0;
            do {
              cVar1 = local_150[lVar4];
              pcVar5[lVar4] = cVar1;
              lVar4 = lVar4 + 1;
            } while (cVar1 != '\0');
            if (iVar2 != 7) {
              pcVar5 = acStack_149;
              do {
                pcVar6 = *(char (*) [2])pcVar5;
                pcVar5 = *(char (*) [2])pcVar5 + 1;
              } while (pcVar6[1] != '\0');
              *(char (*) [2])pcVar5 = s__;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 8);
          pcVar5 = "IP Address";
        }
        goto LAB_14f76bf32;
      case 8:
        i2t_ASN1_OBJECT(acStack_149 + 1,0x100,*(undefined8 *)(puVar3 + 2));
        pcVar5 = "Registered ID";
LAB_14f76bf32:
        pcVar6 = acStack_149 + 1;
        break;
      default:
        goto switchD_14f76bd4a_default;
      }
      iVar2 = X509V3_add_value(pcVar5,pcVar6,&local_158);
LAB_14f76bf41:
      if (iVar2 == 0) {
LAB_14f76bf72:
        if (param_3 == 0) {
          OPENSSL_sk_pop_free(lVar7,X509V3_conf_free);
        }
        return 0;
      }
switchD_14f76bd4a_default:
      lVar4 = local_158;
      if (local_158 == 0) goto LAB_14f76bf72;
      iVar9 = iVar9 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
      lVar7 = lVar4;
    } while (iVar9 < iVar2);
  }
  if (lVar4 == 0) {
    lVar4 = OPENSSL_sk_new_null();
  }
  return lVar4;
}

// FUN_14f76bfe0 @ 14f76bfe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f76bfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f76bff3;
  iVar1 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x9a,0x41,"crypto\\x509v3\\v3_alt.c",0x136,uVar8);
    OPENSSL_sk_free(0);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(param_3,iVar7);
      iVar2 = name_cmp(*(undefined8 *)(lVar4 + 8),"email");
      if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar5) != (&s_copy)[lVar5])
          goto LAB_14f76c0c9;
          lVar5 = lVar6;
        } while (lVar6 != 5);
        iVar2 = 0;
LAB_14f76c108:
        iVar2 = FUN_14f76c7c0(param_2,lVar3,iVar2);
        if (iVar2 == 0) {
LAB_14f76c117:
          OPENSSL_sk_pop_free(lVar3,GENERAL_NAME_free);
          return 0;
        }
      }
      else {
LAB_14f76c0c9:
        iVar2 = name_cmp(*(undefined8 *)(lVar4 + 8),"email");
        if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
          lVar5 = 0;
          do {
            lVar6 = lVar5;
            if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar6) != (&s_move)[lVar6])
            goto LAB_14f76c12a;
            lVar5 = lVar6 + 1;
          } while (lVar6 + 1 != 5);
          iVar2 = (int)lVar6 + -3;
          goto LAB_14f76c108;
        }
LAB_14f76c12a:
        lVar4 = v2i_GENERAL_NAME_ex(0,param_1,param_2,lVar4,0);
        if (lVar4 == 0) goto LAB_14f76c117;
        OPENSSL_sk_push(lVar3,lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar3;
}

// FUN_14f76c190 @ 14f76c190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f76c190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f76c1a3;
  iVar1 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x99,0x41,"crypto\\x509v3\\v3_alt.c",0xe6,uVar8);
    OPENSSL_sk_free(0);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(param_3,iVar7);
      iVar2 = name_cmp(*(undefined8 *)(lVar4 + 8),"issuer");
      if ((iVar2 == 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + lVar5) != (&s_copy)[lVar5])
          goto LAB_14f76c286;
          lVar5 = lVar6;
        } while (lVar6 != 5);
        iVar2 = FUN_14f76c950(param_2,lVar3);
        if (iVar2 == 0) goto LAB_14f76c273;
      }
      else {
LAB_14f76c286:
        lVar4 = v2i_GENERAL_NAME_ex(0,param_1,param_2,lVar4,0);
        if (lVar4 == 0) {
LAB_14f76c273:
          OPENSSL_sk_pop_free(lVar3,GENERAL_NAME_free);
          return 0;
        }
        OPENSSL_sk_push(lVar3,lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar3;
}

// GENERAL_NAME_print @ 14f76c2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 GENERAL_NAME_print(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  switch(*param_2) {
  case 0:
    BIO_printf(param_1,"othername:<unsupported>");
    return 1;
  case 1:
    BIO_printf(param_1,"email:");
    ASN1_STRING_print(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 2:
    BIO_printf(param_1,"DNS:");
    ASN1_STRING_print(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 3:
    BIO_printf(param_1,"X400Name:<unsupported>");
    return 1;
  case 4:
    BIO_printf(param_1,"DirName:");
    X509_NAME_print_ex(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    BIO_printf(param_1,"EdiPartyName:<unsupported>");
    return 1;
  case 6:
    BIO_printf(param_1,"URI:");
    ASN1_STRING_print(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    break;
  case 8:
    BIO_printf(param_1,"Registered ID:");
    i2a_ASN1_OBJECT(param_1,*(undefined8 *)(param_2 + 2));
  default:
    return 1;
  }
  iVar1 = **(int **)(param_2 + 2);
  puVar3 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
  if (iVar1 == 4) {
    BIO_printf(param_1,"IP Address:%d.%d.%d.%d",*puVar3,puVar3[1],puVar3[2],
               CONCAT44(1,(uint)(byte)puVar3[3]));
    return 1;
  }
  if (iVar1 != 0x10) {
    BIO_printf(param_1,"IP Address:<invalid>");
    return 1;
  }
  BIO_printf(param_1,"IP Address");
  lVar2 = 8;
  do {
    BIO_printf(param_1,":%X",CONCAT11(*puVar3,puVar3[1]));
    puVar3 = puVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  BIO_puts(param_1,"\n");
  return 1;
}

// a2i_GENERAL_NAME @ 14f76c550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
a2i_GENERAL_NAME(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                longlong param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f76c56b;
  if (param_5 == 0) {
    ERR_put_error(0x22,0xa4,0x7c,"crypto\\x509v3\\v3_alt.c",0x1b7,0x14f76c56b);
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)GENERAL_NAME_new(), puVar2 == (undefined4 *)0x0)) {
    ERR_put_error(0x22,0xa4,0x41,"crypto\\x509v3\\v3_alt.c",0x1c0);
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    iVar1 = FUN_14f76cb70(puVar2,param_5,param_3);
    if (iVar1 != 0) {
LAB_14f76c729:
      *puVar2 = param_4;
      return puVar2;
    }
    uVar6 = 0x1ed;
    uVar5 = 0x93;
    break;
  case 1:
  case 2:
  case 6:
    lVar3 = ASN1_IA5STRING_new();
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 != 0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(param_5 + lVar4) != '\0');
      iVar1 = ASN1_STRING_set(lVar3,param_5);
      if (iVar1 != 0) goto LAB_14f76c729;
    }
    uVar6 = 0x1fa;
    uVar5 = 0x41;
    break;
  default:
    uVar6 = 0x1f2;
    uVar5 = 0xa7;
    break;
  case 4:
    iVar1 = FUN_14f76ca90(puVar2,param_5,param_3);
    if (iVar1 != 0) goto LAB_14f76c729;
    uVar6 = 0x1e6;
    uVar5 = 0x95;
    break;
  case 7:
    if (param_6 == 0) {
      lVar3 = a2i_IPADDRESS(param_5);
    }
    else {
      lVar3 = a2i_IPADDRESS_NC();
    }
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 != 0) goto LAB_14f76c729;
    ERR_put_error(0x22,0xa4,0x76,"crypto\\x509v3\\v3_alt.c",0x1de);
    ERR_add_error_data(2,"value=",param_5);
    goto LAB_14f76c764;
  case 8:
    lVar3 = OBJ_txt2obj(param_5,0);
    if (lVar3 != 0) {
      *(longlong *)(puVar2 + 2) = lVar3;
      *puVar2 = param_4;
      return puVar2;
    }
    ERR_put_error(0x22,0xa4,0x77,"crypto\\x509v3\\v3_alt.c",0x1d0);
    ERR_add_error_data(2,"value=",param_5);
    goto LAB_14f76c764;
  }
  ERR_put_error(0x22,0xa4,uVar5,"crypto\\x509v3\\v3_alt.c",uVar6,uVar7);
LAB_14f76c764:
  if (param_1 == (undefined4 *)0x0) {
    GENERAL_NAME_free(puVar2);
  }
  return (undefined4 *)0x0;
}

// FUN_14f76c7c0 @ 14f76c7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f76c7c0(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f76c7de;
  lVar6 = 0;
  puVar7 = (undefined4 *)0x0;
  if (param_1 == (int *)0x0) {
LAB_14f76c8f1:
    uVar8 = 0x162;
    uVar3 = 0x7d;
LAB_14f76c8ff:
    ERR_put_error(0x22,0x7a,uVar3,"crypto\\x509v3\\v3_alt.c",uVar8,uVar9);
    GENERAL_NAME_free(puVar7);
    ASN1_IA5STRING_free(lVar6);
    uVar9 = 0;
  }
  else {
    if (*param_1 != 1) {
      if (*(longlong *)(param_1 + 4) == 0) {
        if (*(longlong *)(param_1 + 6) == 0) goto LAB_14f76c8f1;
        uVar3 = X509_REQ_get_subject_name(*(undefined8 *)(param_1 + 6));
      }
      else {
        uVar3 = X509_get_subject_name(*(longlong *)(param_1 + 4));
      }
      iVar1 = X509_NAME_get_index_by_NID(uVar3,0x30);
      if (-1 < iVar1) {
        while( true ) {
          uVar4 = X509_NAME_get_entry(uVar3,iVar1);
          uVar5 = X509_NAME_ENTRY_get_data(uVar4);
          lVar6 = ASN1_STRING_dup(uVar5);
          if (param_3 != 0) {
            X509_NAME_delete_entry(uVar3,iVar1);
            X509_NAME_ENTRY_free(uVar4);
            iVar1 = iVar1 + -1;
          }
          puVar7 = (undefined4 *)0x0;
          if ((lVar6 == 0) ||
             (puVar7 = (undefined4 *)GENERAL_NAME_new(), puVar7 == (undefined4 *)0x0)) break;
          *(longlong *)(puVar7 + 2) = lVar6;
          *puVar7 = 1;
          lVar6 = 0;
          iVar2 = OPENSSL_sk_push(param_2,puVar7);
          if (iVar2 == 0) {
            uVar8 = 0x17d;
            uVar3 = 0x41;
            goto LAB_14f76c8ff;
          }
          iVar1 = X509_NAME_get_index_by_NID(uVar3,0x30,iVar1);
          if (iVar1 < 0) {
            return 1;
          }
        }
        uVar8 = 0x176;
        uVar3 = 0x41;
        goto LAB_14f76c8ff;
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}

// FUN_14f76c950 @ 14f76c950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f76c950(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f76c96a;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      iVar1 = X509_get_ext_by_NID(*(longlong *)(param_1 + 2),0x55,0xffffffff);
      if (iVar1 < 0) {
        return 1;
      }
      lVar3 = X509_get_ext(*(undefined8 *)(param_1 + 2),iVar1);
      if ((lVar3 != 0) && (lVar3 = X509V3_EXT_d2i(lVar3), lVar3 != 0)) {
        iVar1 = OPENSSL_sk_num(lVar3);
        iVar2 = OPENSSL_sk_reserve(param_2,iVar1);
        if (iVar2 == 0) {
          ERR_put_error(0x22,0x7b,0x41,"crypto\\x509v3\\v3_alt.c",0x119);
          OPENSSL_sk_free(lVar3);
          return 0;
        }
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            uVar6 = OPENSSL_sk_value(lVar3,iVar2);
            OPENSSL_sk_push(param_2,uVar6);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        OPENSSL_sk_free(lVar3);
        return 1;
      }
      uVar5 = 0x113;
      uVar4 = 0x7e;
      goto LAB_14f76ca58;
    }
  }
  uVar5 = 0x10b;
  uVar4 = 0x7f;
LAB_14f76ca58:
  ERR_put_error(0x22,0x7b,uVar4,"crypto\\x509v3\\v3_alt.c",uVar5,uVar6);
  return 0;
}

// FUN_14f76ca90 @ 14f76ca90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f76ca90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f76caae;
  lVar3 = 0;
  lVar2 = X509_NAME_new();
  iVar1 = 0;
  if (lVar2 != 0) {
    lVar3 = X509V3_get_section(param_3,param_2);
    if (lVar3 == 0) {
      ERR_put_error(0x22,0x90,0x96,"crypto\\x509v3\\v3_alt.c",0x256,uVar4);
      ERR_add_error_data(2,"section=",param_2);
      iVar1 = 0;
    }
    else {
      iVar1 = X509V3_NAME_from_section(lVar2,lVar3,0x1001);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 8) = lVar2;
        goto LAB_14f76cb18;
      }
    }
  }
  X509_NAME_free(lVar2);
LAB_14f76cb18:
  X509V3_section_free(param_3,lVar3);
  return iVar1;
}

// FUN_14f76cb70 @ 14f76cb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f76cb70(longlong param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pcVar1 = strchr(param_2,0x3b);
  if (pcVar1 != (char *)0x0) {
    lVar2 = OTHERNAME_new();
    *(longlong *)(param_1 + 8) = lVar2;
    if (lVar2 != 0) {
      ASN1_TYPE_free(*(undefined8 *)(lVar2 + 8));
      lVar2 = ASN1_generate_v3(pcVar1 + 1,param_3);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = lVar2;
      if ((lVar2 != 0) &&
         (lVar2 = CRYPTO_strndup(param_2,(longlong)((int)pcVar1 - (int)param_2),
                                 "crypto\\x509v3\\v3_alt.c",0x242), lVar2 != 0)) {
        uVar3 = OBJ_txt2obj(lVar2,0);
        **(undefined8 **)(param_1 + 8) = uVar3;
        CRYPTO_free(lVar2,"crypto\\x509v3\\v3_alt.c",0x246);
        return **(longlong **)(param_1 + 8) != 0;
      }
    }
  }
  return false;
}

// i2v_GENERAL_NAME @ 14f76cc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 i2v_GENERAL_NAME(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 auStack_168 [32];
  uint local_148;
  uint local_140;
  uint local_138;
  undefined8 local_128;
  char local_120 [7];
  char acStack_119 [257];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f76cc5c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_128 = param_3;
  switch(*param_2) {
  case 0:
    pcVar4 = "othername";
    goto LAB_14f76cc9f;
  case 1:
    iVar2 = x509v3_add_len_value_uchar
                      ("email",*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                       (longlong)**(int **)(param_2 + 2),&local_128);
    break;
  case 2:
    iVar2 = x509v3_add_len_value_uchar
                      ("DNS",*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                       (longlong)**(int **)(param_2 + 2),&local_128);
    break;
  case 3:
    pcVar4 = "X400Name";
    goto LAB_14f76cc9f;
  case 4:
    lVar3 = X509_NAME_oneline(*(undefined8 *)(param_2 + 2),acStack_119 + 1,0x100);
    if (lVar3 != 0) {
      pcVar5 = acStack_119 + 1;
      pcVar4 = "DirName";
      goto LAB_14f76cca6;
    }
    goto LAB_14f76ccb8;
  case 5:
    pcVar4 = "EdiPartyName";
LAB_14f76cc9f:
    pcVar5 = "<unsupported>";
LAB_14f76cca6:
    iVar2 = X509V3_add_value(pcVar4,pcVar5,&local_128);
    break;
  case 6:
    iVar2 = x509v3_add_len_value_uchar
                      ("URI",*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                       (longlong)**(int **)(param_2 + 2),&local_128);
    break;
  case 7:
    iVar2 = **(int **)(param_2 + 2);
    puVar6 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    if (iVar2 == 4) {
      local_138 = (uint)(byte)puVar6[3];
      local_140 = (uint)(byte)puVar6[2];
      local_148 = (uint)(byte)puVar6[1];
      BIO_snprintf(acStack_119 + 1,0x100,"%d.%d.%d.%d",*puVar6);
      pcVar5 = acStack_119 + 1;
      pcVar4 = "IP Address";
    }
    else if (iVar2 == 0x10) {
      iVar2 = 0;
      acStack_119[1] = '\0';
      do {
        BIO_snprintf(local_120,5,"%X",CONCAT11(*puVar6,puVar6[1]));
        pcVar5 = acStack_119;
        puVar6 = puVar6 + 2;
        do {
          pcVar4 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar4 != '\0');
        lVar3 = 0;
        do {
          cVar1 = local_120[lVar3];
          pcVar5[lVar3] = cVar1;
          lVar3 = lVar3 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != 7) {
          pcVar5 = acStack_119;
          do {
            pcVar4 = *(char (*) [2])pcVar5;
            pcVar5 = *(char (*) [2])pcVar5 + 1;
          } while (pcVar4[1] != '\0');
          *(char (*) [2])pcVar5 = s__;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
      pcVar5 = acStack_119 + 1;
      pcVar4 = "IP Address";
    }
    else {
      pcVar5 = "<invalid>";
      pcVar4 = "IP Address";
    }
    goto LAB_14f76cca6;
  case 8:
    i2t_ASN1_OBJECT(acStack_119 + 1,0x100,*(undefined8 *)(param_2 + 2));
    pcVar5 = acStack_119 + 1;
    pcVar4 = "Registered ID";
    goto LAB_14f76cca6;
  default:
    goto switchD_14f76cc96_default;
  }
  param_3 = local_128;
  if (iVar2 == 0) {
LAB_14f76ccb8:
    param_3 = 0;
  }
switchD_14f76cc96_default:
  return param_3;
}

// FUN_14f76cf00 @ 14f76cf00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cf00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f76cf20 @ 14f76cf20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cf20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f76cf40 @ 14f76cf40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cf40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f76cf60 @ 14f76cf60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cf60(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f76cf80 @ 14f76cf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cf80(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f76cfa0 @ 14f76cfa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cfa0(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f76cfc0 @ 14f76cfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cfc0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f76cfe0 @ 14f76cfe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76cfe0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f76d000 @ 14f76d000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76d000(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f76d020 @ 14f76d020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76d020(void)

{
  OPENSSL_sk_reserve();
  return;
}

// FUN_14f76d040 @ 14f76d040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76d040(void)

{
  OPENSSL_sk_value();
  return;
}

// v2i_GENERAL_NAME @ 14f76d060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void v2i_GENERAL_NAME(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  v2i_GENERAL_NAME_ex(0,param_1,param_2,param_3,0);
  return;
}

// v2i_GENERAL_NAMES @ 14f76d090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_GENERAL_NAMES(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f76d0a9;
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x22,0x76,0x41,"crypto\\x509v3\\v3_alt.c",0x197);
    OPENSSL_sk_free(0);
    lVar2 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(param_3,iVar5);
        lVar4 = v2i_GENERAL_NAME_ex(0,param_1,param_2,uVar3,0,uVar6);
        if (lVar4 == 0) {
          OPENSSL_sk_pop_free(lVar2,GENERAL_NAME_free);
          return 0;
        }
        OPENSSL_sk_push(lVar2,lVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return lVar2;
}

// v2i_GENERAL_NAME_ex @ 14f76d180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
v2i_GENERAL_NAME_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                   undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 1;
  lVar1 = *(longlong *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 8);
  if (lVar1 == 0) {
    ERR_put_error(0x22,0x75,0x7c,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x215),0x14f76d1a0);
LAB_14f76d2d7:
    uVar3 = 0;
  }
  else {
    iVar2 = name_cmp(uVar3,"email");
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      iVar2 = name_cmp(uVar3,"URI");
      if (iVar2 == 0) {
        uVar4 = 6;
      }
      else {
        iVar2 = name_cmp(uVar3,"DNS");
        if (iVar2 == 0) {
          uVar4 = 2;
        }
        else {
          iVar2 = name_cmp(uVar3,"RID");
          if (iVar2 == 0) {
            uVar4 = 8;
          }
          else {
            iVar2 = name_cmp(uVar3,"IP");
            if (iVar2 == 0) {
              uVar4 = 7;
            }
            else {
              iVar2 = name_cmp(uVar3,"dirName");
              if (iVar2 == 0) {
                uVar4 = 4;
              }
              else {
                iVar2 = name_cmp(uVar3,"otherName");
                if (iVar2 != 0) {
                  ERR_put_error(0x22,0x75,0x75,"crypto\\x509v3\\v3_alt.c",CONCAT44(uVar4,0x228));
                  ERR_add_error_data(2,"name=",uVar3);
                  goto LAB_14f76d2d7;
                }
                uVar4 = 0;
              }
            }
          }
        }
      }
    }
    uVar3 = a2i_GENERAL_NAME(param_1,param_2,param_3,uVar4,lVar1,CONCAT44(uVar5,param_5));
  }
  return uVar3;
}

