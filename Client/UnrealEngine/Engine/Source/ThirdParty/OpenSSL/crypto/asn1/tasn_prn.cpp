// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// ASN1_PCTX_free @ 14f76db00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_PCTX_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\asn1\\tasn_prn.c",0x31);
  return;
}

// ASN1_PCTX_new @ 14f76db80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_PCTX_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x14,"crypto\\asn1\\tasn_prn.c",0x27);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0xcd,0x41,"crypto\\asn1\\tasn_prn.c",0x29);
    lVar1 = 0;
  }
  return lVar1;
}

// ASN1_item_print @ 14f76dc30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                    uint *param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  undefined8 local_res10 [3];
  
  puVar2 = &DAT_154df9a10;
  if (param_5 != (uint *)0x0) {
    puVar2 = param_5;
  }
  uVar1 = 0;
  if ((*puVar2 & 0x100) == 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x28);
  }
  local_res10[0] = param_2;
  FUN_14f76dc90(param_1,local_res10,param_3,param_4,0,uVar1,0,puVar2,0x14f76dc3f);
  return;
}

// FUN_14f76dc90 @ 14f76dc90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

bool FUN_14f76dc90(undefined8 param_1,longlong *param_2,int param_3,char *param_4,longlong param_5,
                  longlong param_6,int param_7,byte *param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 local_48;
  int local_40;
  byte *local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f76dcad;
  lVar6 = *(longlong *)(param_4 + 0x18);
  pcVar5 = (code *)0x0;
  pcVar7 = pcVar5;
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x18) != 0)) {
    local_38 = param_8;
    pcVar7 = *(code **)(lVar6 + 0x18);
    local_48 = param_1;
    local_40 = param_3;
  }
  if (((*param_4 != '\0') || (*(int *)(param_4 + 4) != 1)) && (*param_2 == 0)) {
    if (((*param_8 & 1) != 0) &&
       (((param_7 == 0 &&
         (iVar1 = FUN_14f76e430(param_1,param_3,param_5,param_6,param_8), iVar1 == 0)) ||
        (iVar1 = BIO_puts(param_1,"<ABSENT>\n"), iVar1 < 1)))) {
      return false;
    }
    return true;
  }
  switch(*param_4) {
  case '\0':
    lVar6 = *(longlong *)(param_4 + 8);
    if (lVar6 == 0) goto switchD_14f76dd85_caseD_5;
    break;
  case '\x01':
  case '\x06':
    if ((param_7 == 0) &&
       (iVar1 = FUN_14f76e430(param_1,param_3,param_5,param_6,param_8), iVar1 == 0)) {
      return false;
    }
    if ((param_5 != 0) || (param_6 != 0)) {
      if ((*param_8 & 2) == 0) {
        iVar1 = BIO_puts(param_1,"\n");
      }
      else {
        iVar1 = BIO_puts(param_1," {\n");
      }
      if (iVar1 < 1) {
        return false;
      }
    }
    if (pcVar7 != (code *)0x0) {
      iVar1 = (*pcVar7)(8,param_2,param_4,&local_48);
      if (iVar1 == 0) {
        return false;
      }
      if (iVar1 == 2) {
        return true;
      }
    }
    lVar6 = *(longlong *)(param_4 + 8);
    if (0 < *(int *)(param_4 + 0x10)) {
      do {
        lVar2 = asn1_do_adb(param_2,lVar6,1);
        if (lVar2 == 0) {
          return false;
        }
        uVar3 = asn1_get_field_ptr(param_2,lVar2);
        iVar1 = FUN_14f76e750(param_1,uVar3,param_3 + 2,lVar2,param_8);
        if (iVar1 == 0) {
          return false;
        }
        uVar4 = (int)pcVar5 + 1;
        pcVar5 = (code *)(ulonglong)uVar4;
        lVar6 = lVar6 + 0x20;
      } while ((int)uVar4 < *(int *)(param_4 + 0x10));
    }
    if (((*param_8 & 2) != 0) && (iVar1 = BIO_printf(param_1,"%*s}\n",param_3,""), iVar1 < 0)) {
      return false;
    }
    if (pcVar7 == (code *)0x0) {
      return true;
    }
    iVar1 = (*pcVar7)(9,param_2,param_4,&local_48);
    goto joined_r0x00014f76e043;
  case '\x02':
    iVar1 = asn1_get_choice_selector(param_2,param_4);
    if ((iVar1 < 0) || (*(int *)(param_4 + 0x10) <= iVar1)) {
      iVar1 = BIO_printf(param_1,"ERROR: selector [%d] invalid\n",iVar1);
      return 0 < iVar1;
    }
    lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)(param_4 + 8);
    param_2 = (longlong *)asn1_get_field_ptr(param_2,lVar6);
    break;
  default:
    BIO_printf(param_1,"Unprocessed type %d\n");
    return false;
  case '\x04':
    if ((param_7 == 0) &&
       (iVar1 = FUN_14f76e430(param_1,param_3,param_5,param_6,param_8), iVar1 == 0)) {
      return false;
    }
    if ((*(longlong *)(param_4 + 0x18) != 0) &&
       (pcVar7 = *(code **)(*(longlong *)(param_4 + 0x18) + 0x30), pcVar7 != (code *)0x0)) {
      iVar1 = (*pcVar7)(param_1,param_2,param_3,"",param_8);
      if (iVar1 == 0) {
        return false;
      }
      if (iVar1 == 2) {
        iVar1 = BIO_puts(param_1,"\n");
        if (iVar1 < 1) {
          return false;
        }
        return true;
      }
      return true;
    }
    if (param_6 == 0) {
      return true;
    }
    iVar1 = BIO_printf(param_1,":EXTERNAL TYPE %s\n",param_6);
    if (iVar1 < 1) {
      return false;
    }
    return true;
  case '\x05':
switchD_14f76dd85_caseD_5:
    iVar1 = FUN_14f76e0b0(param_1,param_2,param_4,param_3,param_5,param_6,param_8);
    goto joined_r0x00014f76e043;
  }
  iVar1 = FUN_14f76e750(param_1,param_2,param_3,lVar6,param_8);
joined_r0x00014f76e043:
  if (iVar1 == 0) {
    return false;
  }
  return true;
}

// FUN_14f76e0b0 @ 14f76e0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f76e0b0(undefined8 param_1,uint *param_2,char *param_3,undefined4 param_4,
                       undefined8 param_5,undefined8 param_6,byte *param_7)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  
  lVar6 = *(longlong *)(param_3 + 0x18);
  bVar1 = true;
  pbVar10 = param_7;
  uVar3 = FUN_14f76e430(param_1,param_4,param_5,param_6,param_7,0x14f76e0c8);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if ((lVar6 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f76e153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  puVar5 = (uint *)0x0;
  if (*param_3 == '\x05') {
    puVar4 = *(uint **)param_2;
    uVar8 = puVar4[1] & 0xfffffeff;
LAB_14f76e193:
    puVar9 = puVar4;
    if (uVar8 != 0xfffffffc) goto LAB_14f76e180;
    param_2 = puVar4 + 2;
    puVar9 = *(uint **)param_2;
    uVar8 = *puVar4;
    if ((*param_7 & 0x10) == 0) {
      puVar5 = (uint *)ASN1_tag2str(uVar8);
    }
  }
  else {
    uVar8 = *(uint *)(param_3 + 4);
    puVar9 = puVar5;
    if (uVar8 != 1) {
      puVar4 = *(uint **)param_2;
      goto LAB_14f76e193;
    }
LAB_14f76e180:
    if ((*param_7 & 8) != 0) {
      puVar5 = (uint *)ASN1_tag2str(uVar8);
    }
  }
  if (uVar8 == 5) {
    iVar2 = BIO_puts(param_1,"NULL\n");
    return (ulonglong)(0 < iVar2);
  }
  if (puVar5 != (uint *)0x0) {
    iVar2 = BIO_puts(param_1,puVar5);
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = BIO_puts(param_1,":");
    if (iVar2 < 1) {
      return 0;
    }
  }
  switch(uVar8) {
  case 1:
    uVar8 = *param_2;
    if ((uVar8 == 0xffffffff) && (uVar8 = *(uint *)(param_3 + 0x20), uVar8 == 0xffffffff)) {
      pcVar7 = "BOOL ABSENT";
    }
    else {
      pcVar7 = "TRUE";
      if (uVar8 == 0) {
        pcVar7 = "FALSE";
      }
    }
    iVar2 = BIO_puts(param_1,pcVar7);
    if (iVar2 < 1) {
      return 0;
    }
    goto LAB_14f76e348;
  case 2:
  case 10:
    lVar6 = i2s_ASN1_INTEGER(0,puVar9);
    if (lVar6 == 0) {
      return 0;
    }
    iVar2 = BIO_puts(param_1,lVar6);
    uVar8 = (uint)(0 < iVar2);
    CRYPTO_free(lVar6,"crypto\\asn1\\tasn_prn.c",0x192);
    break;
  case 3:
  case 4:
    uVar8 = FUN_14f76e5f0(param_1,puVar9,param_4);
    bVar1 = false;
    break;
  case 6:
    uVar8 = FUN_14f76e6a0(param_1,*(undefined8 *)param_2);
    break;
  case 0x17:
    uVar8 = ASN1_UTCTIME_print(param_1,puVar9);
    break;
  case 0x18:
    uVar8 = ASN1_GENERALIZEDTIME_print(param_1,puVar9);
    break;
  case 0xfffffffd:
  case 0x10:
  case 0x11:
    iVar2 = BIO_puts(param_1,"\n");
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = ASN1_parse_dump(param_1,*(undefined8 *)(puVar9 + 2),*puVar9,param_4,
                            (ulonglong)pbVar10 & 0xffffffff00000000);
    uVar8 = (uint)(0 < iVar2);
    bVar1 = false;
    break;
  default:
    uVar8 = ASN1_STRING_print_ex(param_1,puVar9,*(undefined4 *)(param_7 + 0x10));
  }
  if (uVar8 == 0) {
    return 0;
  }
  if (bVar1) {
LAB_14f76e348:
    iVar2 = BIO_puts(param_1,"\n");
    if (iVar2 < 1) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f76e3d0 @ 14f76e3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f76e3d0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 != -1) {
    pcVar2 = "TRUE";
    if (param_2 == 0) {
      pcVar2 = "FALSE";
    }
    iVar1 = BIO_puts(param_1,pcVar2,"FALSE",param_4,0x14f76e3da);
    return 0 < iVar1;
  }
  iVar1 = BIO_puts(param_1,"BOOL ABSENT",param_3,param_4,0x14f76e3da);
  return 0 < iVar1;
}

// FUN_14f76e430 @ 14f76e430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f76e430(undefined8 param_1,int param_2,longlong param_3,longlong param_4,uint *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  for (; 0x14 < param_2; param_2 = param_2 + -0x14) {
    iVar1 = BIO_write(param_1,"                    ",0x14);
    if (iVar1 != 0x14) {
      return false;
    }
  }
  iVar1 = BIO_write(param_1,"                    ",param_2);
  if (iVar1 != param_2) {
    return false;
  }
  lVar3 = 0;
  if ((*param_5 >> 8 & 1) == 0) {
    lVar3 = param_4;
  }
  lVar2 = 0;
  if ((*param_5 & 0x40) == 0) {
    lVar2 = param_3;
  }
  if (lVar3 == 0) {
    if (lVar2 == 0) {
      return true;
    }
LAB_14f76e4e4:
    iVar1 = BIO_puts(param_1,lVar2);
    if (0 < iVar1) goto LAB_14f76e4f3;
LAB_14f76e523:
    bVar4 = false;
  }
  else {
    if (lVar2 != 0) goto LAB_14f76e4e4;
LAB_14f76e4f3:
    if (lVar3 != 0) {
      if (lVar2 == 0) {
        iVar1 = BIO_puts(param_1,lVar3);
        if (iVar1 < 1) goto LAB_14f76e523;
      }
      else {
        iVar1 = BIO_printf(param_1," (%s)",lVar3);
        if (iVar1 < 1) {
          return false;
        }
      }
    }
    iVar1 = BIO_write(param_1,": ",2);
    bVar4 = iVar1 == 2;
  }
  return bVar4;
}

// FUN_14f76e570 @ 14f76e570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f76e570(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = i2s_ASN1_INTEGER(0);
  if (lVar2 == 0) {
    return false;
  }
  iVar1 = BIO_puts(param_1,lVar2);
  CRYPTO_free(lVar2,"crypto\\asn1\\tasn_prn.c",0x192);
  return 0 < iVar1;
}

// FUN_14f76e5f0 @ 14f76e5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f76e5f0(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_2[1] == 3) {
    iVar1 = BIO_printf(param_1," (%ld unused bits)\n",param_2[4] & 7);
    if (iVar1 < 1) {
      return 0;
    }
  }
  else {
    iVar1 = BIO_puts(param_1,"\n");
    if (iVar1 < 1) {
      return 0;
    }
  }
  if ((0 < *param_2) &&
     (iVar1 = BIO_dump_indent(param_1,*(undefined8 *)(param_2 + 2),*param_2,param_3 + 2), iVar1 < 1)
     ) {
    return 0;
  }
  return 1;
}

// FUN_14f76e6a0 @ 14f76e6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14f76e6a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14f76e6b5;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar1 = OBJ_obj2nid(param_2);
  pcVar3 = (char *)OBJ_nid2ln(uVar1);
  pcVar4 = "";
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
  }
  OBJ_obj2txt(local_68,0x50,param_2);
  iVar2 = BIO_printf(param_1,"%s (%s)",pcVar4,local_68);
  return 0 < iVar2;
}

// FUN_14f76e750 @ 14f76e750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f76e750(undefined8 param_1,uint *param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  uint *puVar9;
  undefined8 local_res20;
  
  puVar2 = param_5;
  uVar1 = *param_4;
  if ((*param_5 & 0x80) == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = (**(code **)(param_4 + 6))();
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
  }
  if ((*puVar2 & 0x40) == 0) {
    lVar4 = *(longlong *)(param_4 + 4);
  }
  else {
    lVar4 = 0;
  }
  if ((uVar1 & 0x1000) != 0) {
    param_5 = param_2;
  }
  puVar9 = (uint *)&param_5;
  if ((uVar1 & 0x1000) == 0) {
    puVar9 = param_2;
  }
  if ((uVar1 & 6) == 0) {
    uVar6 = (**(code **)(param_4 + 6))();
    uVar5 = FUN_14f76dc90(param_1,puVar9,param_3,uVar6,lVar4,uVar5,0,puVar2);
    return uVar5;
  }
  if (lVar4 != 0) {
    if ((*puVar2 & 4) == 0) {
      iVar3 = BIO_printf(param_1,"%*s%s:\n",param_3,"",lVar4);
      if (iVar3 < 1) {
        return 0;
      }
    }
    else {
      pcVar7 = "SET";
      if ((uVar1 & 2) == 0) {
        pcVar7 = "SEQUENCE";
      }
      iVar3 = BIO_printf(param_1,"%*s%s OF %s {\n",param_3,"",pcVar7,*(undefined8 *)(param_4 + 4));
      if (iVar3 < 1) {
        return 0;
      }
    }
  }
  lVar4 = *(longlong *)puVar9;
  iVar8 = 0;
  iVar3 = OPENSSL_sk_num(lVar4);
  if (0 < iVar3) {
    do {
      if ((0 < iVar8) && (iVar3 = BIO_puts(param_1,"\n"), iVar3 < 1)) {
        return 0;
      }
      local_res20 = OPENSSL_sk_value(lVar4,iVar8);
      uVar5 = (**(code **)(param_4 + 6))();
      pcVar7 = (char *)0x0;
      iVar3 = FUN_14f76dc90(param_1,&local_res20,param_3 + 2,uVar5,0,0,1,puVar2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar8 = iVar8 + 1;
      iVar3 = OPENSSL_sk_num(lVar4);
    } while (iVar8 < iVar3);
    if (iVar8 != 0) goto LAB_14f76e923;
  }
  pcVar7 = "EMPTY";
  if (lVar4 == 0) {
    pcVar7 = "ABSENT";
  }
  iVar3 = BIO_printf(param_1,"%*s<%s>\n",param_3 + 2,"",pcVar7);
  if (iVar3 < 1) {
    return 0;
  }
LAB_14f76e923:
  if (((*puVar2 & 2) != 0) && (iVar3 = BIO_printf(param_1,"%*s}\n",param_3,"",pcVar7), iVar3 < 1)) {
    return 0;
  }
  return 1;
}

// FUN_14f76e9a0 @ 14f76e9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76e9a0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f76e9c0 @ 14f76e9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76e9c0(void)

{
  OPENSSL_sk_value();
  return;
}

