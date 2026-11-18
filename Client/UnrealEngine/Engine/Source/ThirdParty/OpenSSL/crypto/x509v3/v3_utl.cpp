// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 61

// X509V3_NAME_from_section @ 14f70c2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_NAME_from_section(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f70c305;
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (0 < iVar3) {
    do {
      lVar5 = OPENSSL_sk_value(param_2,iVar6);
      pbVar8 = *(byte **)(lVar5 + 8);
      bVar2 = *pbVar8;
      pbVar7 = pbVar8;
      while (bVar2 != 0) {
        if ((bVar2 < 0x3b) && ((0x400500000000000U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) {
          if (pbVar7[1] != 0) {
            pbVar8 = pbVar7 + 1;
          }
          break;
        }
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar8 == 0x2b) {
        uVar4 = 0xffffffff;
        pbVar8 = pbVar8 + 1;
      }
      else {
        uVar4 = 0;
      }
      iVar3 = X509_NAME_add_entry_by_txt
                        (param_1,pbVar8,param_3,*(undefined8 *)(lVar5 + 0x10),0xffffffff,0xffffffff,
                         uVar4,uVar9);
      if (iVar3 == 0) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar6 < iVar3);
  }
  return 1;
}

// X509V3_add_value @ 14f70c410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_add_value(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar3 = param_2;
    for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    uVar2 = uVar2 & 0x7fffffff;
  }
  FUN_14f70ec60(param_1,param_2,uVar2,param_3);
  return;
}

// X509V3_add_value_bool @ 14f70c460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_add_value_bool(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    pcVar2 = "FALSE";
    do {
      if (0x7fffffff < uVar1) break;
      pcVar2 = pcVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = "FALSE";
  }
  else {
    pcVar2 = "TRUE";
    do {
      if (0x7fffffff < uVar1) break;
      pcVar2 = pcVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = "TRUE";
  }
  FUN_14f70ec60(param_1,pcVar2,uVar1 & 0x7fffffff,param_3);
  return;
}

// X509V3_add_value_bool_nf @ 14f70c4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_add_value_bool_nf(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  pcVar3 = "TRUE";
  uVar1 = 0;
  do {
    if (0x7fffffff < uVar1) break;
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 + 1;
  } while (*pcVar3 != '\0');
  uVar2 = FUN_14f70ec60(param_1,&s_TRUE,uVar1 & 0x7fffffff,param_3);
  return uVar2;
}

// X509V3_add_value_int @ 14f70c540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509V3_add_value_int(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_2 == 0) {
    return 1;
  }
  pcVar4 = (char *)i2s_ASN1_INTEGER(0);
  if (pcVar4 != (char *)0x0) {
    cVar1 = *pcVar4;
    pcVar5 = pcVar4;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar3 = FUN_14f70ec60(param_1,pcVar4,uVar2 & 0x7fffffff,param_3);
    CRYPTO_free(pcVar4,"crypto\\x509v3\\v3_utl.c",0x103);
    return uVar3;
  }
  return 0;
}

// X509V3_add_value_uchar @ 14f70c600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_add_value_uchar(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar3 = param_2;
    for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    uVar2 = uVar2 & 0x7fffffff;
  }
  FUN_14f70ec60(param_1,param_2,uVar2,param_3);
  return;
}

// X509V3_conf_free @ 14f70c650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_conf_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(param_1[1],"crypto\\x509v3\\v3_utl.c",0x6c);
    CRYPTO_free(param_1[2],"crypto\\x509v3\\v3_utl.c",0x6d);
    CRYPTO_free(*param_1,"crypto\\x509v3\\v3_utl.c",0x6e);
    CRYPTO_free(param_1,"crypto\\x509v3\\v3_utl.c",0x6f);
  }
  return;
}

// X509V3_get_value_bool @ 14f70c6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509V3_get_value_bool(undefined8 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f70c6dc;
  pcVar1 = (char *)param_1[2];
  if (pcVar1 == (char *)0x0) {
LAB_14f70c8d3:
    ERR_put_error(0x22,0x6e,0x68,"crypto\\x509v3\\v3_utl.c",0x121);
    ERR_add_error_data(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar4);
    return 0;
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&s_TRUE)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&s_true)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  if (((*pcVar1 != s_Y) || (pcVar1[1] != DAT_1534b3d1d)) &&
     ((*pcVar1 != s_y || (pcVar1[1] != DAT_1534b3d21)))) {
    lVar2 = 0;
    while (lVar3 = lVar2, pcVar1[lVar3] == (&s_YES)[lVar3]) {
      lVar2 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        *param_2 = 0xff;
        return (int)lVar3 + -2;
      }
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (pcVar1[lVar2] != (&s_yes)[lVar2]) {
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "FALSE"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "false"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        if (((((*pcVar1 == s_N) && (pcVar1[1] == DAT_1534b3d29)) ||
             ((*pcVar1 == s_n && (pcVar1[1] == DAT_15348b181)))) ||
            (((*pcVar1 == s_NO && (pcVar1[1] == DAT_153165089)) && (pcVar1[2] == DAT_15316508a))))
           || (((*pcVar1 == s_no && (pcVar1[1] == DAT_153165c71)) && (pcVar1[2] == DAT_153165c72))))
        {
          *param_2 = 0;
          return 1;
        }
        goto LAB_14f70c8d3;
      }
      lVar2 = lVar3;
    } while (lVar3 != 4);
  }
  *param_2 = 0xff;
  return 1;
}

// X509V3_get_value_int @ 14f70c940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_get_value_int(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f70c950;
  lVar1 = s2i_ASN1_INTEGER(0,param_1[2]);
  if (lVar1 == 0) {
    ERR_add_error_data(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar2);
    return 0;
  }
  *param_2 = lVar1;
  return 1;
}

// X509V3_parse_list @ 14f70c9d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_parse_list(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_res10;
  undefined4 uVar13;
  undefined8 uVar14;
  ulonglong uVar6;
  
  uVar14 = 0x14f70c9ee;
  uVar9 = 0;
  uVar8 = 0;
  local_res10 = 0;
  pcVar1 = (char *)CRYPTO_strdup(param_1,"crypto\\x509v3\\v3_utl.c",0x141);
  if (pcVar1 == (char *)0x0) {
    uVar13 = 0x143;
    uVar11 = 0x41;
LAB_14f70cbb6:
    ERR_put_error(0x22,0x6d,uVar11,"crypto\\x509v3\\v3_utl.c",uVar13,uVar14);
    CRYPTO_free(pcVar1,"crypto\\x509v3\\v3_utl.c",0x18b);
    OPENSSL_sk_pop_free(local_res10,X509V3_conf_free);
    local_res10 = 0;
  }
  else {
    cVar4 = *pcVar1;
    iVar12 = 1;
    pcVar7 = pcVar1;
    uVar3 = uVar9;
    pcVar2 = pcVar1;
    if (cVar4 == '\0') {
LAB_14f70cb96:
      uVar3 = FUN_14f70e8b0(pcVar2);
      if (uVar3 == 0) {
        uVar13 = 0x182;
LAB_14f70cbab:
        uVar11 = 0x6c;
        goto LAB_14f70cbb6;
      }
      uVar8 = 0;
      pcVar2 = (char *)0x0;
    }
    else {
      do {
        if ((cVar4 == '\r') || (cVar4 == '\n')) break;
        if (iVar12 == 1) {
          if (cVar4 == ':') {
            *pcVar7 = '\0';
            iVar12 = 2;
            uVar3 = FUN_14f70e8b0(pcVar2);
            if (uVar3 == 0) {
              uVar13 = 0x154;
              goto LAB_14f70cbab;
            }
            pcVar2 = pcVar7 + 1;
          }
          else if (cVar4 == ',') {
            *pcVar7 = '\0';
            uVar3 = FUN_14f70e8b0(pcVar2);
            pcVar2 = pcVar7 + 1;
            if (uVar3 == 0) {
              uVar13 = 0x15e;
              goto LAB_14f70cbab;
            }
            FUN_14f70ec60(uVar3,0,0,&local_res10);
          }
        }
        else if ((iVar12 == 2) && (cVar4 == ',')) {
          *pcVar7 = '\0';
          pcVar2 = (char *)FUN_14f70e8b0(pcVar2);
          if (pcVar2 == (char *)0x0) {
            uVar13 = 0x16c;
            uVar11 = 0x6d;
            goto LAB_14f70cbb6;
          }
          uVar5 = 0;
          cVar4 = *pcVar2;
          pcVar10 = pcVar2;
          uVar6 = uVar9;
          while ((cVar4 != '\0' && (uVar5 = (uint)uVar6, uVar5 < 0x80000000))) {
            pcVar10 = pcVar10 + 1;
            uVar5 = uVar5 + 1;
            cVar4 = *pcVar10;
            uVar6 = (ulonglong)uVar5;
          }
          FUN_14f70ec60(uVar3,pcVar2,uVar5 & 0x7fffffff,&local_res10);
          pcVar2 = pcVar7 + 1;
          iVar12 = 1;
          uVar3 = uVar9;
        }
        cVar4 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      if (iVar12 != 2) goto LAB_14f70cb96;
      pcVar2 = (char *)FUN_14f70e8b0(pcVar2);
      if (pcVar2 == (char *)0x0) {
        uVar13 = 0x17b;
        uVar11 = 0x6d;
        goto LAB_14f70cbb6;
      }
      cVar4 = *pcVar2;
      pcVar7 = pcVar2;
      while ((cVar4 != '\0' && (uVar8 = (uint)uVar9, uVar8 < 0x80000000))) {
        pcVar7 = pcVar7 + 1;
        uVar8 = uVar8 + 1;
        cVar4 = *pcVar7;
        uVar9 = (ulonglong)uVar8;
      }
      uVar8 = uVar8 & 0x7fffffff;
    }
    FUN_14f70ec60(uVar3,pcVar2,uVar8,&local_res10);
    CRYPTO_free(pcVar1,"crypto\\x509v3\\v3_utl.c",0x187);
  }
  return local_res10;
}

// X509_REQ_get1_email @ 14f70cc40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_REQ_get1_email(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = X509_REQ_get_extensions();
  uVar2 = X509V3_get_d2i(uVar1,0x55,0);
  uVar3 = X509_REQ_get_subject_name(param_1);
  uVar3 = FUN_14f70dd70(uVar3,uVar2);
  OPENSSL_sk_pop_free(uVar2,GENERAL_NAME_free);
  OPENSSL_sk_pop_free(uVar1,X509_EXTENSION_free);
  return uVar3;
}

// X509_check_email @ 14f70ccd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_email(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_14f70ccfe:
    uVar3 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar4 = memchr(param_2,0,_MaxCount);
      if (pvVar4 != (void *)0x0) goto LAB_14f70ccfe;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar3 = FUN_14f70d7d0(param_1,param_2,param_3,param_4,1,0);
  }
  return uVar3;
}

// X509_check_host @ 14f70cda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_check_host(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4,
               undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_14f70cdce:
    uVar3 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar4 = memchr(param_2,0,_MaxCount);
      if (pvVar4 != (void *)0x0) goto LAB_14f70cdce;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar3 = FUN_14f70d7d0(param_1,param_2,param_3,param_4,2,param_5);
  }
  return uVar3;
}

// X509_check_ip @ 14f70ce70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_ip(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  uVar1 = FUN_14f70d7d0();
  return uVar1;
}

// X509_check_ip_asc @ 14f70ceb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 X509_check_ip_asc(undefined8 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f70cebe;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_2 != (char *)0x0) {
    pcVar2 = strchr(param_2,0x3a);
    if (pcVar2 == (char *)0x0) {
      iVar1 = FUN_14f70e050(local_38,param_2);
      bVar4 = -(iVar1 != 0) & 4;
    }
    else {
      iVar1 = FUN_14f70e200();
      bVar4 = -(iVar1 != 0) & 0x10;
    }
    if (bVar4 != 0) {
      local_40 = 0;
      local_48 = 7;
      uVar3 = FUN_14f70d7d0(param_1,local_38,bVar4,param_3);
      return uVar3;
    }
  }
  return 0xfffffffe;
}

// X509_email_free @ 14f70cf60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_email_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,FUN_14f70e880);
  return;
}

// X509_get1_email @ 14f70cf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get1_email(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = X509_get_ext_d2i(param_1,0x55,0,0);
  uVar2 = X509_get_subject_name(param_1);
  uVar2 = FUN_14f70dd70(uVar2,uVar1);
  OPENSSL_sk_pop_free(uVar1,GENERAL_NAME_free);
  return uVar2;
}

// X509_get1_ocsp @ 14f70cff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_get1_ocsp(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  lVar2 = X509_get_ext_d2i(param_1,0xb1,0,0);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = OPENSSL_sk_num(lVar2);
  uVar6 = uVar5;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(lVar2,uVar5);
      iVar1 = OBJ_obj2nid(*puVar3);
      if (((iVar1 == 0xb2) && (*(int *)puVar3[1] == 6)) &&
         (iVar1 = FUN_14f70d3c0(&local_res10,*(undefined8 *)((int *)puVar3[1] + 2)),
         uVar6 = local_res10, iVar1 == 0)) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      iVar1 = OPENSSL_sk_num(lVar2);
      uVar6 = local_res10;
    } while ((int)uVar4 < iVar1);
  }
  AUTHORITY_INFO_ACCESS_free(lVar2);
  return uVar6;
}

// _vsscanf_l @ 14f70d0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void _vsscanf_l(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong64 *puVar1;
  
  puVar1 = __local_stdio_scanf_options();
  __stdio_common_vsscanf(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}

// a2i_IPADDRESS @ 14f70d150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong a2i_IPADDRESS(char *param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f70d160;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pcVar2 = strchr(param_1,0x3a);
  if (pcVar2 == (char *)0x0) {
    iVar1 = FUN_14f70e050(local_28,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    uVar4 = 4;
  }
  else {
    iVar1 = FUN_14f70e200();
    if (iVar1 == 0) {
      return 0;
    }
    uVar4 = 0x10;
  }
  lVar3 = ASN1_OCTET_STRING_new();
  if (lVar3 != 0) {
    iVar1 = ASN1_OCTET_STRING_set(lVar3,local_28,uVar4);
    if (iVar1 != 0) {
      return lVar3;
    }
    ASN1_OCTET_STRING_free(lVar3);
  }
  return 0;
}

// a2i_IPADDRESS_NC @ 14f70d200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * a2i_IPADDRESS_NC(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *_Str;
  char *pcVar3;
  char *pcVar4;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 uStack_10;
  char *pcVar5;
  
  uStack_10 = 0x14f70d215;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar5 = (char *)0x0;
  pcVar4 = (char *)0x0;
  pcVar2 = strchr(param_1,0x2f);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  _Str = (char *)CRYPTO_strdup(param_1,"crypto\\x509v3\\v3_utl.c",0x410);
  if (_Str == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar2[(longlong)_Str - (longlong)param_1] = '\0';
  pcVar3 = strchr(_Str,0x3a);
  if (pcVar3 == (char *)0x0) {
    iVar1 = FUN_14f70e050(local_38,_Str);
    if (iVar1 == 0) goto LAB_14f70d304;
    lVar6 = 4;
  }
  else {
    iVar1 = FUN_14f70e200();
    pcVar4 = pcVar5;
    if (iVar1 == 0) goto LAB_14f70d304;
    lVar6 = 0x10;
  }
  iVar1 = a2i_ipadd(local_38 + lVar6,pcVar2 + ((longlong)_Str - (longlong)param_1) + 1);
  CRYPTO_free(_Str,"crypto\\x509v3\\v3_utl.c",0x41d);
  pcVar2 = (char *)0x0;
  pcVar4 = pcVar5;
  _Str = pcVar5;
  if ((((iVar1 != 0) && (_Str = pcVar2, (int)lVar6 == iVar1)) &&
      (pcVar4 = (char *)ASN1_OCTET_STRING_new(), pcVar4 != (char *)0x0)) &&
     (iVar1 = ASN1_OCTET_STRING_set(pcVar4,local_38,iVar1 + (int)lVar6), iVar1 != 0)) {
    return pcVar4;
  }
LAB_14f70d304:
  CRYPTO_free(_Str,"crypto\\x509v3\\v3_utl.c",0x42c);
  ASN1_OCTET_STRING_free(pcVar4);
  return (char *)0x0;
}

// a2i_ipadd @ 14f70d350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte a2i_ipadd(undefined8 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strchr(param_2,0x3a);
  if (pcVar2 != (char *)0x0) {
    iVar1 = FUN_14f70e200();
    return -(iVar1 != 0) & 0x10;
  }
  iVar1 = FUN_14f70e050(param_1,param_2);
  return -(iVar1 != 0) & 4;
}

// FUN_14f70d3c0 @ 14f70d3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70d3c0(longlong *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  if (((param_2[1] == 0x16) && (*(void **)(param_2 + 2) != (void *)0x0)) && (*param_2 != 0)) {
    pvVar2 = memchr(*(void **)(param_2 + 2),0,(longlong)*param_2);
    if (pvVar2 != (void *)0x0) {
      return 1;
    }
    if (*param_1 == 0) {
      lVar3 = OPENSSL_sk_new(&LAB_14f70e800);
      *param_1 = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    lVar3 = CRYPTO_strndup(*(undefined8 *)(param_2 + 2),(longlong)*param_2,
                           "crypto\\x509v3\\v3_utl.c",0x21c);
    if (lVar3 == 0) {
      OPENSSL_sk_pop_free(*param_1,FUN_14f70e880);
      *param_1 = 0;
      return 0;
    }
    iVar1 = OPENSSL_sk_find(*param_1,lVar3);
    if (iVar1 == -1) {
      iVar1 = OPENSSL_sk_push(*param_1,lVar3);
      if (iVar1 == 0) {
        CRYPTO_free(lVar3,"crypto\\x509v3\\v3_utl.c",0x229);
        OPENSSL_sk_pop_free(*param_1,FUN_14f70e880);
        *param_1 = 0;
        return 0;
      }
    }
    else {
      CRYPTO_free(lVar3,"crypto\\x509v3\\v3_utl.c",0x225);
    }
  }
  return 1;
}

// FUN_14f70d4f0 @ 14f70d4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f70d4f0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f70d4fc;
  iVar2 = BN_num_bits();
  if (iVar2 < 0x80) {
    lVar4 = BN_bn2dec();
    return lVar4;
  }
  pcVar5 = (char *)BN_bn2hex(param_1);
  if (pcVar5 != (char *)0x0) {
    cVar1 = *pcVar5;
    pcVar6 = pcVar5;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    iVar2 = (uVar3 & 0x7fffffff) + 3;
    lVar4 = CRYPTO_malloc(iVar2,"crypto\\x509v3\\v3_utl.c",0x94);
    if (lVar4 != 0) {
      if (*pcVar5 == '-') {
        OPENSSL_strlcpy(lVar4,"-0x",iVar2);
        pcVar6 = pcVar5 + 1;
      }
      else {
        OPENSSL_strlcpy(lVar4,"0x",iVar2);
        pcVar6 = pcVar5;
      }
      OPENSSL_strlcat(lVar4,pcVar6,iVar2);
      CRYPTO_free(pcVar5,"crypto\\x509v3\\v3_utl.c",0xa3);
      return lVar4;
    }
    ERR_put_error(0x22,0xa7,0x41,"crypto\\x509v3\\v3_utl.c",0x96,uVar7);
    CRYPTO_free(pcVar5,"crypto\\x509v3\\v3_utl.c",0x97);
    return 0;
  }
  return 0;
}

// FUN_14f70d630 @ 14f70d630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f70d630(int *param_1,int param_2,code *param_3,undefined4 param_4,void *param_5,
                 size_t param_6,longlong *param_7)

{
  void *_Buf1;
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0x14f70d643;
  _Buf1 = *(void **)(param_1 + 2);
  if (_Buf1 == (void *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 < 1) {
    iVar1 = ASN1_STRING_to_UTF8(&local_res8,param_1);
    if (-1 < iVar1) {
      iVar2 = (*param_3)(local_res8,(longlong)iVar1,param_5,param_6,param_4,uVar4);
      if ((0 < iVar2) && (param_7 != (longlong *)0x0)) {
        lVar3 = CRYPTO_strndup(local_res8,(longlong)iVar1,"crypto\\x509v3\\v3_utl.c",0x354);
        *param_7 = lVar3;
        if (lVar3 == 0) {
          CRYPTO_free(local_res8,"crypto\\x509v3\\v3_utl.c",0x356);
          return -1;
        }
      }
      CRYPTO_free(local_res8,"crypto\\x509v3\\v3_utl.c",0x35a);
      return iVar2;
    }
  }
  else {
    if (param_2 != param_1[1]) {
      return 0;
    }
    if (param_2 == 0x16) {
      iVar1 = (*param_3)(_Buf1,(longlong)iVar1,param_5,param_6,param_4,0x14f70d643);
      if (iVar1 < 1) {
        return iVar1;
      }
    }
    else {
      if (iVar1 != (int)param_6) {
        return 0;
      }
      iVar1 = memcmp(_Buf1,param_5,param_6);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = 1;
    }
    if (param_7 == (longlong *)0x0) {
      return iVar1;
    }
    lVar3 = CRYPTO_strndup(*(undefined8 *)(param_1 + 2),(longlong)*param_1,
                           "crypto\\x509v3\\v3_utl.c",0x343);
    *param_7 = lVar3;
    if (lVar3 != 0) {
      return iVar1;
    }
  }
  return -1;
}

// FUN_14f70d7d0 @ 14f70d7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f70d7d0(undefined8 param_1,char *param_2,ulonglong param_3,uint param_4,int param_5,
                 longlong *param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int local_res20;
  char *in_stack_ffffffffffffff88;
  undefined8 local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x14f70d7f0;
  bVar2 = false;
  local_res20 = 0;
  param_4 = param_4 & 0xffff7fff;
  iVar5 = 0;
  if (param_5 == 1) {
    uVar14 = 0x16;
    local_res20 = 0x30;
    pcVar7 = FUN_14f70db40;
  }
  else if (param_5 == 2) {
    local_res20 = 0xd;
    if ((1 < param_3) && (*param_2 == '.')) {
      param_4 = param_4 | 0x8000;
    }
    pcVar7 = FUN_14f70dc00;
    uVar14 = 0x16;
    if ((param_4 & 2) == 0) {
      pcVar7 = FUN_14f70dcb0;
    }
  }
  else {
    uVar14 = 4;
    pcVar7 = FUN_14f70dab0;
  }
  if (param_3 == 0) {
    cVar1 = *param_2;
    pcVar12 = param_2;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar12;
    }
    param_3 = (ulonglong)(uVar3 & 0x7fffffff);
  }
  lVar8 = X509_get_ext_d2i(param_1,0x55,0);
  if (lVar8 != 0) {
    iVar13 = 0;
    iVar4 = OPENSSL_sk_num(lVar8);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar6;
        piVar9 = (int *)OPENSSL_sk_value(lVar8,iVar13);
        if (*piVar9 == param_5) {
          bVar2 = true;
          in_stack_ffffffffffffff88 = param_2;
          iVar5 = FUN_14f70d630(*(undefined8 *)(piVar9 + 2),uVar14,pcVar7,param_4,param_2,param_3,
                                param_6);
          if (iVar5 != 0) break;
        }
        iVar13 = iVar13 + 1;
        iVar4 = OPENSSL_sk_num(lVar8);
        iVar6 = iVar5;
      } while (iVar13 < iVar4);
    }
    GENERAL_NAMES_free(lVar8);
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((bVar2) && ((param_4 & 1) == 0)) {
      return 0;
    }
  }
  if ((local_res20 != 0) && ((param_4 & 0x20) == 0)) {
    uVar10 = X509_get_subject_name(param_1);
    for (iVar5 = X509_NAME_get_index_by_NID(uVar10,local_res20,0xffffffff); -1 < iVar5;
        iVar5 = X509_NAME_get_index_by_NID(uVar10,local_res20,iVar5)) {
      uVar11 = X509_NAME_get_entry(uVar10,iVar5);
      piVar9 = (int *)X509_NAME_ENTRY_get_data(uVar11);
      uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
      if ((*(longlong *)(piVar9 + 2) != 0) && (*piVar9 != 0)) {
        iVar6 = ASN1_STRING_to_UTF8(local_58,piVar9);
        if (iVar6 < 0) {
          return -1;
        }
        in_stack_ffffffffffffff88 = (char *)CONCAT44(uVar14,param_4);
        iVar4 = (*pcVar7)(local_58[0],(longlong)iVar6,param_2,param_3,in_stack_ffffffffffffff88);
        if ((0 < iVar4) && (param_6 != (longlong *)0x0)) {
          lVar8 = CRYPTO_strndup(local_58[0],(longlong)iVar6,"crypto\\x509v3\\v3_utl.c",0x354);
          *param_6 = lVar8;
          if (lVar8 == 0) {
            CRYPTO_free(local_58[0],"crypto\\x509v3\\v3_utl.c",0x356);
            return -1;
          }
        }
        CRYPTO_free(local_58[0],"crypto\\x509v3\\v3_utl.c",0x35a);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
  }
  return 0;
}

// FUN_14f70dab0 @ 14f70dab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f70dab0(char *param_1,ulonglong param_2,void *param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  
  uVar1 = param_2;
  pcVar2 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar1 && (*pcVar2 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar2 != '.'))))
        ; pcVar2 = pcVar2 + 1) {
      uVar1 = uVar1 - 1;
    }
    if (uVar1 == param_4) {
      param_1 = pcVar2;
      param_2 = uVar1;
    }
  }
  if (param_2 != param_4) {
    return false;
  }
  iVar3 = memcmp(param_1,param_3,param_2);
  return iVar3 == 0;
}

// FUN_14f70db40 @ 14f70db40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f70db40(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  size_t _Size;
  
  if (param_2 == param_4) {
    _Size = param_2;
    if (param_2 != 0) {
      pcVar3 = (char *)((longlong)param_1 + param_2);
      do {
        pcVar3 = pcVar3 + -1;
        _Size = _Size - 1;
        if ((*pcVar3 == '@') || (pcVar3[(longlong)param_3 - (longlong)param_1] == '@')) {
          uVar2 = FUN_14f70dc00(pcVar3,param_2 - _Size,(longlong)param_3 + _Size,param_2 - _Size,0,
                                0x14f70db5a);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          break;
        }
      } while (_Size != 0);
    }
    if (_Size == 0) {
      _Size = param_2;
    }
    iVar1 = memcmp(param_1,param_3,_Size);
    uVar2 = (ulonglong)(iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// FUN_14f70dc00 @ 14f70dc00

undefined8
FUN_14f70dc00(char *param_1,ulonglong param_2,char *param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  
  uVar1 = param_2;
  pcVar2 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar1 && (*pcVar2 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar2 != '.'))))
        ; pcVar2 = pcVar2 + 1) {
      uVar1 = uVar1 - 1;
    }
    if (uVar1 == param_4) {
      param_1 = pcVar2;
      param_2 = uVar1;
    }
  }
  if (param_2 == param_4) {
    if (param_2 != 0) {
      lVar5 = (longlong)param_1 - (longlong)param_3;
      do {
        cVar3 = param_3[lVar5];
        cVar4 = *param_3;
        if (cVar3 == '\0') {
          return 0;
        }
        if (cVar3 != cVar4) {
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          if (cVar3 != cVar4) {
            return 0;
          }
        }
        param_3 = param_3 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    return 1;
  }
  return 0;
}

// FUN_14f70dcb0 @ 14f70dcb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70dcb0(longlong param_1,longlong param_2,char *param_3,ulonglong param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (((param_4 < 2) || (*param_3 != '.')) &&
     (lVar1 = FUN_14f70e980(param_1,param_2,param_5), lVar1 != 0)) {
    FUN_14f70eb00(param_1,lVar1 - param_1,lVar1 + 1,param_2 + -1 + (param_1 - lVar1),param_3,param_4
                  ,param_5);
    return;
  }
  FUN_14f70dc00(param_1,param_2,param_3,param_4,CONCAT44(uVar2,param_5));
  return;
}

// FUN_14f70dd70 @ 14f70dd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f70dd70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong local_res18;
  
  uVar9 = 0;
  local_res18 = 0;
  iVar1 = X509_NAME_get_index_by_NID(param_1,0x30,0xffffffff);
  uVar6 = uVar9;
  do {
    if (iVar1 < 0) {
      iVar1 = OPENSSL_sk_num(param_2);
      if (0 < iVar1) {
        do {
          piVar4 = (int *)OPENSSL_sk_value(param_2,uVar9);
          if ((*piVar4 == 1) &&
             (iVar1 = FUN_14f70d3c0(&local_res18,*(undefined8 *)(piVar4 + 2)), iVar1 == 0)) {
            return 0;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          iVar1 = OPENSSL_sk_num(param_2);
          uVar6 = local_res18;
        } while ((int)uVar8 < iVar1);
      }
      return uVar6;
    }
    uVar3 = X509_NAME_get_entry(param_1,iVar1);
    piVar4 = (int *)X509_NAME_ENTRY_get_data(uVar3);
    if ((((piVar4[1] == 0x16) && (*(void **)(piVar4 + 2) != (void *)0x0)) && (*piVar4 != 0)) &&
       (pvVar5 = memchr(*(void **)(piVar4 + 2),0,(longlong)*piVar4), pvVar5 == (void *)0x0)) {
      if ((uVar6 == 0) && (uVar6 = OPENSSL_sk_new(&LAB_14f70e800), local_res18 = uVar6, uVar6 == 0))
      {
        return 0;
      }
      lVar7 = CRYPTO_strndup(*(undefined8 *)(piVar4 + 2),(longlong)*piVar4,
                             "crypto\\x509v3\\v3_utl.c",0x21c);
      if (lVar7 == 0) {
LAB_14f70df18:
        OPENSSL_sk_pop_free(uVar6,FUN_14f70e880);
        return 0;
      }
      iVar2 = OPENSSL_sk_find(uVar6,lVar7);
      if (iVar2 == -1) {
        iVar2 = OPENSSL_sk_push(uVar6,lVar7);
        if (iVar2 == 0) {
          CRYPTO_free(lVar7,"crypto\\x509v3\\v3_utl.c",0x229);
          goto LAB_14f70df18;
        }
      }
      else {
        CRYPTO_free(lVar7,"crypto\\x509v3\\v3_utl.c",0x225);
      }
    }
    iVar1 = X509_NAME_get_index_by_NID(param_1,0x30,iVar1);
  } while( true );
}

// i2s_ASN1_ENUMERATED @ 14f70df30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong i2s_ASN1_ENUMERATED(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f70df3c;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = ASN1_ENUMERATED_to_BN(param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_14f70d4f0(lVar1);
    if (lVar2 != 0) goto LAB_14f70df96;
  }
  ERR_put_error(0x22,0x79,0x41,"crypto\\x509v3\\v3_utl.c",0xb0,uVar3);
LAB_14f70df96:
  BN_free(lVar1);
  return lVar2;
}

// i2s_ASN1_INTEGER @ 14f70dfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong i2s_ASN1_INTEGER(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f70dfcc;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = ASN1_INTEGER_to_BN(param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_14f70d4f0(lVar1);
    if (lVar2 != 0) goto LAB_14f70e026;
  }
  ERR_put_error(0x22,0x78,0x41,"crypto\\x509v3\\v3_utl.c",0xbe,uVar3);
LAB_14f70e026:
  BN_free(lVar1);
  return lVar2;
}

// FUN_14f70e050 @ 14f70e050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70e050(undefined1 *param_1,char *param_2)

{
  int iVar1;
  uint local_res18 [2];
  uint local_res20 [2];
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  local_10 = 0x14f70e060;
  puVar4 = &local_10;
  puVar3 = local_res18;
  puVar2 = local_res20;
  iVar1 = sscanf(param_2,"%d.%d.%d.%d%n");
  if ((((iVar1 == 4) && (local_14 < 0x100)) && (local_18 < 0x100)) &&
     ((local_res20[0] < 0x100 && (local_res18[0] < 0x100)))) {
    if ((param_2[(int)local_10] == '\0') ||
       (iVar1 = ossl_ctype_check((int)param_2[(int)local_10],8,local_res20[0],local_res18[0],puVar2,
                                 puVar3,puVar4), iVar1 != 0)) {
      *param_1 = (char)local_14;
      param_1[1] = (char)local_18;
      param_1[2] = (char)local_res20[0];
      param_1[3] = (char)local_res18[0];
      return 1;
    }
  }
  return 0;
}

// FUN_14f70e140 @ 14f70e140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70e140(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 != 0x10) {
    if (param_2 == 0) {
      if (*(int *)(param_3 + 0x14) == -1) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        *(int *)(param_3 + 0x14) = iVar1;
        return 1;
      }
      if (*(int *)(param_3 + 0x14) == iVar1) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        return 1;
      }
    }
    else if (param_2 < 5) {
      iVar1 = FUN_14f70e370(param_3 + iVar1,param_1,param_2);
      if (iVar1 != 0) {
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 2;
        return 1;
      }
    }
    else if ((iVar1 < 0xd) && (*(char *)(param_2 + param_1) == '\0')) {
      iVar1 = FUN_14f70e050(param_3 + iVar1,param_1);
      if (iVar1 != 0) {
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 4;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f70e200 @ 14f70e200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f70e200(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t _Size;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f70e20c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_24 = -1;
  local_28 = 0;
  local_20 = 0;
  local_48 = &local_38;
  uVar2 = CONF_parse_list(param_2,0x3a,0,FUN_14f70e140);
  iVar1 = local_28;
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  _Size = (size_t)local_24;
  if (local_24 == -1) {
    if (local_28 != 0x10) {
      return 0;
    }
  }
  else {
    if (local_28 == 0x10) {
      return 0;
    }
    if (3 < local_20) {
      return 0;
    }
    if (local_20 == 3) {
      if (0 < local_28) {
        return 0;
      }
    }
    else if (local_20 == 2) {
      if ((local_24 != 0) && (local_24 != local_28)) {
        return 0;
      }
    }
    else {
      if (local_24 == 0) {
        return 0;
      }
      if (local_24 == local_28) {
        return 0;
      }
    }
    if (-1 < local_24) {
      memcpy(param_1,&local_38,_Size);
      memset((void *)(_Size + (longlong)param_1),0,(longlong)(0x10 - iVar1));
      if (local_28 == local_24) {
        return 1;
      }
      memcpy((void *)(((longlong)local_24 - (longlong)local_28) + 0x10 + (longlong)param_1),
             (void *)((longlong)&local_38 + (longlong)local_24),(longlong)(local_28 - local_24));
      return 1;
    }
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
  return 1;
}

// FUN_14f70e370 @ 14f70e370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70e370(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  uVar4 = 0;
  if (param_3 < 5) {
    while (param_3 != 0) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      iVar2 = OPENSSL_hexchar2int(uVar1);
      if (iVar2 < 0) goto LAB_14f70e39f;
      uVar4 = uVar4 << 4 | (short)(char)iVar2;
    }
    param_1[1] = (char)uVar4;
    *param_1 = (char)(uVar4 >> 8);
    uVar3 = 1;
  }
  else {
LAB_14f70e39f:
    uVar3 = 0;
  }
  return uVar3;
}

// name_cmp @ 14f70e400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int name_cmp(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  iVar3 = strncmp(param_1,param_2,(ulonglong)(uVar2 & 0x7fffffff));
  if (iVar3 == 0) {
    if ((param_1[uVar2 & 0x7fffffff] != '\0') && (param_1[uVar2 & 0x7fffffff] != '.')) {
      return 1;
    }
    iVar3 = 0;
  }
  return iVar3;
}

// s2i_ASN1_INTEGER @ 14f70e480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong s2i_ASN1_INTEGER(undefined8 param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong local_res10;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f70e490;
  local_res10 = 0;
  if (param_2 == (char *)0x0) {
    ERR_put_error(0x22,0x6c,0x6d,"crypto\\x509v3\\v3_utl.c",0xca,0x14f70e490);
    return 0;
  }
  local_res10 = BN_new();
  if (local_res10 != 0) {
    bVar4 = *param_2 == '-';
    if (bVar4) {
      param_2 = param_2 + 1;
    }
    if ((*param_2 == '0') && ((param_2[1] + 0xa8U & 0xdf) == 0)) {
      param_2 = param_2 + 2;
      iVar1 = BN_hex2bn(&local_res10,param_2);
    }
    else {
      iVar1 = BN_dec2bn(&local_res10,param_2);
    }
    if ((iVar1 == 0) || (param_2[iVar1] != '\0')) {
      BN_free(local_res10);
      uVar3 = 100;
      uVar5 = 0xe5;
    }
    else {
      if ((bVar4) && (iVar1 = BN_is_zero(local_res10), iVar1 != 0)) {
        bVar4 = false;
      }
      lVar2 = BN_to_ASN1_INTEGER(local_res10,0);
      BN_free(local_res10);
      if (lVar2 != 0) {
        if (bVar4) {
          *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | 0x100;
        }
        return lVar2;
      }
      uVar5 = 0xf0;
      uVar3 = 0x65;
    }
    ERR_put_error(0x22,0x6c,uVar3,"crypto\\x509v3\\v3_utl.c",uVar5);
    return 0;
  }
  ERR_put_error(0x22,0x6c,0x41,"crypto\\x509v3\\v3_utl.c",0xcf,uVar6);
  return 0;
}

// FUN_14f70e600 @ 14f70e600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e600(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70e620 @ 14f70e620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e620(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f70e640 @ 14f70e640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e640(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f70e660 @ 14f70e660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e660(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f70e680 @ 14f70e680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e680(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70e6a0 @ 14f70e6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e6a0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f70e6c0 @ 14f70e6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e6c0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f70e6e0 @ 14f70e6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e6e0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f70e700 @ 14f70e700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e700(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70e720 @ 14f70e720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e720(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f70e740 @ 14f70e740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e740(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f70e760 @ 14f70e760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e760(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f70e780 @ 14f70e780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e780(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f70e7a0 @ 14f70e7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e7a0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f70e7c0 @ 14f70e7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e7c0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f70e7e0 @ 14f70e7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e7e0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f70e880 @ 14f70e880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70e880(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\x509v3\\v3_utl.c",0x20a);
  return;
}

// FUN_14f70e8b0 @ 14f70e8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f70e8b0(char *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*param_1 != '\0') {
    while (iVar1 = ossl_ctype_check((int)*param_1,8), iVar1 != 0) {
      param_1 = param_1 + 1;
      if (*param_1 == '\0') {
        return (char *)0x0;
      }
    }
  }
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  pcVar4 = (char *)0x0;
  pcVar3 = param_1;
  do {
    uVar2 = (uint)pcVar4;
    if (0x7fffffff < uVar2) break;
    pcVar3 = pcVar3 + 1;
    uVar2 = uVar2 + 1;
    pcVar4 = (char *)(ulonglong)uVar2;
  } while (*pcVar3 != '\0');
  pcVar4 = param_1 + ((ulonglong)(uVar2 & 0x7fffffff) - 1);
  do {
    if (pcVar4 == param_1) {
LAB_14f70e955:
      if (*param_1 == '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    iVar1 = ossl_ctype_check((int)*pcVar4,8);
    if (iVar1 == 0) {
      if (param_1 != pcVar4) {
        pcVar4[1] = '\0';
      }
      goto LAB_14f70e955;
    }
    pcVar4 = pcVar4 + -1;
  } while( true );
}

// FUN_14f70e980 @ 14f70e980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f70e980(char *param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *_Str1;
  
  pcVar6 = (char *)0x0;
  uVar7 = 1;
  bVar3 = false;
  iVar8 = 0;
  if (param_2 != 0) {
    _Str1 = param_1;
    do {
      cVar2 = *_Str1;
      if (cVar2 == '*') {
        lVar1 = -(longlong)param_1 + (longlong)_Str1;
        if ((lVar1 == param_2 - 1) || (param_1[lVar1 + 1] == '.')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((((pcVar6 != (char *)0x0) || (bVar3)) || (iVar8 != 0)) ||
            (((param_3 & 4) != 0 && (((uVar7 & 1) == 0 || (!bVar4)))))) ||
           (((uVar7 & 1) == 0 && (!bVar4)))) goto LAB_14f70eacc;
        uVar7 = uVar7 & 0xfffffffe;
        pcVar6 = _Str1;
      }
      else if (((byte)(cVar2 + 0x9fU) < 0x1a) ||
              (((byte)(cVar2 - 0x30U) < 0x2b &&
               ((0x7fffffe03ffU >> ((ulonglong)(byte)(cVar2 - 0x30U) & 0x3f) & 1) != 0)))) {
        if (((uVar7 & 1) != 0) &&
           (((char *)0x3 < param_1 + (param_2 - (longlong)_Str1) &&
            (iVar5 = _strnicmp(_Str1,"xn--",4), iVar5 == 0)))) {
          bVar3 = true;
        }
        uVar7 = 0;
      }
      else if (cVar2 == '.') {
        if (uVar7 != 0) goto LAB_14f70eacc;
        uVar7 = 1;
        bVar3 = false;
        iVar8 = iVar8 + 1;
      }
      else {
        if ((cVar2 != '-') || ((uVar7 & 1) != 0)) goto LAB_14f70eacc;
        uVar7 = uVar7 | 4;
      }
      _Str1 = _Str1 + 1;
    } while ((ulonglong)(-(longlong)param_1 + (longlong)_Str1) < param_2);
  }
  if ((uVar7 != 0) || (iVar8 < 2)) {
LAB_14f70eacc:
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}

// FUN_14f70eb00 @ 14f70eb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f70eb00(undefined8 param_1,longlong param_2,char *param_3,longlong param_4,char *param_5,
             ulonglong param_6,uint param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f70eb10;
  if (param_6 < (ulonglong)(param_2 + param_4)) {
    return 0;
  }
  uVar4 = FUN_14f70dc00(param_1,param_2,param_5,param_2,param_7,0x14f70eb10);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  pbVar5 = (byte *)(param_5 + param_2);
  pbVar6 = (byte *)(param_5 + (param_6 - param_4));
  iVar3 = FUN_14f70dc00(pbVar6,param_4,param_3,param_4,param_7,uVar7);
  if (iVar3 != 0) {
    bVar2 = false;
    if ((param_2 == 0) && (*param_3 == '.')) {
      if (pbVar5 != pbVar6) {
        if ((param_7 & 8) != 0) {
          bVar2 = true;
        }
LAB_14f70ebde:
        if ((pbVar6 != pbVar5 + 1) || (*pbVar5 != 0x2a)) {
          for (; pbVar5 != pbVar6; pbVar5 = pbVar5 + 1) {
            bVar1 = *pbVar5;
            if (((0x2d < (byte)(bVar1 - 0x2d)) ||
                ((0x3ffffff01ff9U >> ((ulonglong)(bVar1 - 0x2d & 0xff) & 0x3f) & 1) == 0)) &&
               (0x19 < (byte)(bVar1 + 0x9f))) {
              if (!bVar2) {
                return 0;
              }
              if (bVar1 != 0x2e) {
                return 0;
              }
            }
          }
        }
        return 1;
      }
    }
    else if ((param_6 < 4) || (iVar3 = _strnicmp(param_5,"xn--",4), bVar2 = false, iVar3 != 0))
    goto LAB_14f70ebde;
  }
  return 0;
}

// FUN_14f70ec60 @ 14f70ec60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70ec60(longlong param_1,void *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f70ec84;
  lVar1 = *param_4;
  puVar6 = (undefined8 *)0x0;
  lVar3 = 0;
  lVar5 = 0;
  if ((((param_1 == 0) ||
       (lVar3 = CRYPTO_strdup(param_1,"crypto\\x509v3\\v3_utl.c",0x2d), lVar3 != 0)) &&
      (((param_2 == (void *)0x0 || (param_3 == 0)) ||
       ((pvVar4 = memchr(param_2,0,param_3 - 1), pvVar4 == (void *)0x0 &&
        (lVar5 = CRYPTO_strndup(param_2,param_3,"crypto\\x509v3\\v3_utl.c",0x36), lVar5 != 0))))))
     && (puVar6 = (undefined8 *)CRYPTO_malloc(0x18,"crypto\\x509v3\\v3_utl.c"),
        puVar6 != (undefined8 *)0x0)) {
    if (lVar1 == 0) {
      lVar7 = OPENSSL_sk_new_null();
      *param_4 = lVar7;
      if (lVar7 == 0) goto LAB_14f70ed4d;
    }
    *puVar6 = 0;
    puVar6[1] = lVar3;
    puVar6[2] = lVar5;
    iVar2 = OPENSSL_sk_push(*param_4,puVar6);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_14f70ed4d:
  ERR_put_error(0x22,0xae,0x41,"crypto\\x509v3\\v3_utl.c",0x45,uVar8);
  if (lVar1 == 0) {
    OPENSSL_sk_free(*param_4);
    *param_4 = 0;
  }
  CRYPTO_free(puVar6,"crypto\\x509v3\\v3_utl.c",0x4a);
  CRYPTO_free(lVar3,"crypto\\x509v3\\v3_utl.c",0x4b);
  CRYPTO_free(lVar5,"crypto\\x509v3\\v3_utl.c",0x4c);
  return 0;
}

// x509v3_add_len_value_uchar @ 14f70edf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void x509v3_add_len_value_uchar(void)

{
  FUN_14f70ec60();
  return;
}

