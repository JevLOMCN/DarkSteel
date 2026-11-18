// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// ASN1_STRING_print_ex @ 14f733720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_print_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14f734310(FUN_14f7344e0,param_1,param_3,param_2);
  return;
}

// ASN1_STRING_print_ex_fp @ 14f733750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_print_ex_fp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14f734310(FUN_14f734520,param_1,param_3,param_2);
  return;
}

// ASN1_STRING_to_UTF8 @ 14f733780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_STRING_to_UTF8(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  uint *local_res10 [3];
  uint local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f73378c;
  local_res10[0] = local_28;
  if (((param_2 == (undefined4 *)0x0) || (0x1e < (uint)param_2[1])) ||
     ((int)(char)(&DAT_1534ba9b8)[(int)param_2[1]] == 0xffffffff)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = 0;
    local_28[0] = 0;
    local_18 = 0;
    uVar1 = ASN1_mbstring_copy(local_res10,*(undefined8 *)(param_2 + 2),*param_2,
                               (int)(char)(&DAT_1534ba9b8)[(int)param_2[1]] | 0x1000,0x2000);
    if (-1 < (int)uVar1) {
      *param_1 = local_20;
      return (ulonglong)local_28[0];
    }
  }
  return uVar1;
}

// X509_NAME_print_ex @ 14f733810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_NAME_print_ex(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    X509_NAME_print();
    return;
  }
  FUN_14f733f70(FUN_14f7344e0,param_1,param_2,param_3,param_4);
  return;
}

// X509_NAME_print_ex_fp @ 14f733850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_NAME_print_ex_fp
                    (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_4 != 0) {
    uVar3 = FUN_14f733f70(FUN_14f734520,param_1,param_2,param_3,param_4,0x14f733860);
    return uVar3;
  }
  lVar2 = BIO_new_fp(param_1,0);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  uVar1 = X509_NAME_print(lVar2,param_2,param_3);
  BIO_free(lVar2);
  return (ulonglong)uVar1;
}

// FUN_14f7338f0 @ 14f7338f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f7338f0(byte *param_1,int param_2,uint param_3,ushort param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte *local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar8 = (ulonglong)param_2;
  pbVar1 = param_1 + uVar8;
  local_70 = param_3 & 7;
  local_68 = param_5;
  iVar6 = 0;
  local_60 = param_6;
  local_58 = param_7;
  local_74 = param_3;
  local_50 = param_1;
  if (local_70 == 2) {
    if ((uVar8 & 1) != 0) {
      local_88 = CONCAT44(local_88._4_4_,0xa1);
      ERR_put_error(0xd,0x8e,0x81,"crypto\\asn1\\a_strex.c");
      return -1;
    }
  }
  else if ((local_70 == 4) && ((uVar8 & 3) != 0)) {
    local_88 = CONCAT44(local_88._4_4_,0x9b);
    ERR_put_error(0xd,0x8e,0x85,"crypto\\asn1\\a_strex.c");
    return -1;
  }
  do {
    do {
      while( true ) {
        if (param_1 == pbVar1) {
          return iVar6;
        }
        if ((param_1 == local_50) && ((param_4 & 1) != 0)) {
          uVar5 = 0x20;
        }
        else {
          uVar5 = 0;
        }
        if (local_70 == 0) {
          iVar3 = UTF8_getc(param_1,uVar8 & 0xffffffff,&local_78);
          if (iVar3 < 0) {
            return -1;
          }
          uVar8 = (ulonglong)(uint)((int)uVar8 - iVar3);
          param_1 = param_1 + iVar3;
        }
        else if (local_70 == 1) {
          bVar2 = *param_1;
          param_1 = param_1 + 1;
          local_78 = (uint)bVar2;
        }
        else if (local_70 == 2) {
          local_78 = (uint)CONCAT11(*param_1,param_1[1]);
          param_1 = param_1 + 2;
        }
        else {
          if (local_70 != 4) {
            return -1;
          }
          local_78 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                     (uint)param_1[3];
          param_1 = param_1 + 4;
        }
        if ((param_1 == pbVar1) && ((param_4 & 1) != 0)) {
          uVar5 = 0x40;
        }
        if ((local_74 & 8) != 0) break;
        local_88 = local_58;
        iVar3 = FUN_14f733cc0(local_78,uVar5 | param_4,local_68,local_60);
        if (iVar3 < 0) {
          return -1;
        }
        iVar6 = iVar6 + iVar3;
      }
      lVar7 = 0;
      iVar3 = UTF8_putc(local_48,6,local_78);
    } while (iVar3 < 1);
    do {
      local_88 = local_58;
      iVar4 = FUN_14f733cc0(local_48[lVar7],uVar5 | param_4,local_68,local_60);
      if (iVar4 < 0) {
        return -1;
      }
      iVar6 = iVar6 + iVar4;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar3);
  } while( true );
}

// FUN_14f733ba0 @ 14f733ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f733ba0(uint param_1,code *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong local_res10;
  undefined4 local_18 [2];
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x14f733bba;
  iVar1 = (*param_2)(param_3,"#",1);
  if (iVar1 != 0) {
    if ((param_1 >> 9 & 1) == 0) {
      iVar1 = FUN_14f733e40(param_2,param_3,*(undefined8 *)(param_4 + 2),*param_4);
      if (-1 < iVar1) {
        return iVar1 + 1;
      }
    }
    else {
      local_18[0] = param_4[1];
      local_10 = param_4;
      iVar1 = i2d_ASN1_TYPE(local_18,0);
      if (0 < iVar1) {
        lVar2 = CRYPTO_malloc((longlong)iVar1,"crypto\\asn1\\a_strex.c",0x11d);
        if (lVar2 == 0) {
          ERR_put_error(0xd,0x7d,0x41,"crypto\\asn1\\a_strex.c",0x11e);
        }
        else {
          local_res10 = lVar2;
          i2d_ASN1_TYPE(local_18,&local_res10);
          iVar1 = FUN_14f733e40(param_2,param_3,lVar2,iVar1);
          CRYPTO_free(lVar2,"crypto\\asn1\\a_strex.c",0x124);
          if (-1 < iVar1) {
            return iVar1 + 1;
          }
        }
      }
    }
  }
  return -1;
}

// FUN_14f733cc0 @ 14f733cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_14f733cc0(uint param_1,ushort param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  byte local_38 [8];
  byte local_30 [16];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      local_38[0] = (byte)param_1;
      if (local_38[0] < 0x80) {
        uVar1 = *(ushort *)(&DAT_1534ba8a0 + (ulonglong)(param_1 & 0xff) * 2);
      }
      else {
        uVar1 = 4;
      }
      uVar1 = uVar1 & param_2;
      if ((uVar1 & 0x61) == 0) {
        if ((uVar1 & 0x406) == 0) {
          if ((local_38[0] != 0x5c) || ((param_2 & 0x40f) == 0)) goto LAB_14f733d78;
          uVar4 = 2;
          pbVar3 = &s___;
        }
        else {
          BIO_snprintf(local_30,0xb,"\\%02X",param_1 & 0xff);
          pbVar3 = local_30;
          uVar4 = 3;
        }
      }
      else {
        if ((uVar1 & 8) == 0) {
          iVar2 = (*param_4)(param_5,"\\",1);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          iVar2 = (*param_4)(param_5,local_38,1);
          uVar4 = 2;
          goto LAB_14f733d8a;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
LAB_14f733d78:
        pbVar3 = local_38;
        uVar4 = 1;
      }
    }
    else {
      BIO_snprintf(local_30,0xb,"\\U%04lX",param_1);
      pbVar3 = local_30;
      uVar4 = 6;
    }
  }
  else {
    BIO_snprintf(local_30,0xb,"\\W%08lX",param_1);
    pbVar3 = local_30;
    uVar4 = 10;
  }
  iVar2 = (*param_4)(param_5,pbVar3,uVar4);
LAB_14f733d8a:
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

// FUN_14f733e40 @ 14f733e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f733e40(code *param_1,longlong param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  char local_res10;
  char local_res11;
  
  if (param_2 != 0) {
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_res10 = "0123456789ABCDEF"[*param_3 >> 4];
      local_res11 = "0123456789ABCDEF"[*param_3 & 0xf];
      iVar2 = (*param_1)(param_2,&local_res10,2);
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return param_4 * 2;
}

// FUN_14f733f00 @ 14f733f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f733f00(code *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (*param_1)(param_2," ",1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return 1;
}

// FUN_14f733f70 @ 14f733f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f733f70(code *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  char *local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  ulonglong local_b8;
  char *local_b0;
  undefined8 local_a8;
  char local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar10 = 0;
  if (-1 < param_4) {
    iVar10 = param_4;
  }
  local_c0 = param_3;
  iVar1 = FUN_14f733f00(param_1,param_2,iVar10);
  if (iVar1 == 0) {
    return -1;
  }
  uVar2 = param_5 & 0xf0000;
  iVar1 = 1;
  if (uVar2 == 0x10000) {
    local_e8 = 1;
    local_e4 = 0;
    local_d8 = ",";
    pcVar12 = "+";
  }
  else {
    if (uVar2 == 0x20000) {
      local_d8 = ", ";
    }
    else {
      if (uVar2 != 0x30000) {
        if (uVar2 != 0x40000) {
          return -1;
        }
        local_d8 = "\n";
        local_e8 = 3;
        pcVar12 = " + ";
        local_e4 = iVar10;
        goto LAB_14f734070;
      }
      local_d8 = "; ";
    }
    local_e8 = 3;
    local_e4 = 0;
    pcVar12 = " + ";
    iVar1 = 2;
  }
LAB_14f734070:
  local_d0 = 3;
  if ((param_5 & 0x800000) == 0) {
    local_d0 = 1;
  }
  local_b0 = " = ";
  if ((param_5 & 0x800000) == 0) {
    local_b0 = "=";
  }
  local_cc = X509_NAME_entry_count(local_c0);
  local_e0 = 0;
  if (0 < local_cc) {
    local_b8 = (ulonglong)(param_5 & 0x600000);
    local_c4 = param_5 & 0x100000;
    iVar4 = -1;
    local_dc = local_cc;
    do {
      local_dc = local_dc + -1;
      iVar11 = local_dc;
      if (local_c4 == 0) {
        iVar11 = local_e0;
      }
      uVar5 = X509_NAME_get_entry(local_c0,iVar11);
      if (iVar4 != -1) {
        iVar3 = X509_NAME_ENTRY_set(uVar5);
        iVar11 = local_e8;
        if (iVar4 == iVar3) {
          iVar4 = (*param_1)(param_2,pcVar12,local_e8);
          if (iVar4 == 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar11;
        }
        else {
          iVar11 = (*param_1)(param_2,local_d8,iVar1);
          iVar4 = local_e4;
          if (iVar11 == 0) {
            return -1;
          }
          iVar11 = FUN_14f733f00(param_1,param_2,local_e4);
          if (iVar11 == 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar1 + iVar4;
        }
      }
      local_c8 = X509_NAME_ENTRY_set(uVar5);
      uVar6 = X509_NAME_ENTRY_get_object(uVar5);
      uVar5 = X509_NAME_ENTRY_get_data(uVar5);
      local_a8 = uVar5;
      iVar4 = OBJ_obj2nid(uVar6);
      if (local_b8 != 0x600000) {
        if ((local_b8 == 0x400000) || (iVar4 == 0)) {
          OBJ_obj2txt(local_98,0x50,uVar6);
          pcVar7 = local_98;
LAB_14f7341f8:
          iVar11 = 0;
        }
        else if (local_b8 == 0) {
          iVar11 = 10;
          pcVar7 = (char *)OBJ_nid2sn(iVar4);
        }
        else {
          if (local_b8 != 0x200000) {
            pcVar7 = "";
            goto LAB_14f7341f8;
          }
          iVar11 = 0x19;
          pcVar7 = (char *)OBJ_nid2ln(iVar4);
        }
        uVar9 = 0xffffffffffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while (pcVar7[uVar9] != '\0');
        iVar8 = (int)uVar9;
        iVar3 = (*param_1)(param_2,pcVar7,uVar9 & 0xffffffff);
        if (iVar3 == 0) {
          return -1;
        }
        if ((iVar8 < iVar11) && ((param_5 & 0x2000000) != 0)) {
          iVar3 = FUN_14f733f00(param_1,param_2,iVar11 - iVar8);
          if (iVar3 == 0) {
            return -1;
          }
          iVar10 = iVar10 + (iVar11 - iVar8);
        }
        iVar11 = local_d0;
        iVar3 = (*param_1)(param_2,local_b0,local_d0);
        if (iVar3 == 0) {
          return -1;
        }
        iVar10 = iVar10 + iVar11 + iVar8;
        uVar5 = local_a8;
      }
      if ((iVar4 == 0) && ((param_5 >> 0x18 & 1) != 0)) {
        uVar2 = 0x80;
      }
      else {
        uVar2 = 0;
      }
      iVar4 = FUN_14f734310(param_1,param_2,uVar2 | param_5,uVar5);
      if (iVar4 < 0) {
        return -1;
      }
      iVar10 = iVar10 + iVar4;
      local_e0 = local_e0 + 1;
      iVar4 = local_c8;
    } while (local_e0 < local_cc);
  }
  return iVar10;
}

// FUN_14f734310 @ 14f734310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f734310(code *param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  char local_res18 [8];
  undefined8 uVar10;
  
  uVar10 = 0x14f734332;
  iVar3 = param_4[1];
  iVar2 = 0;
  local_res18[0] = '\0';
  uVar8 = (ushort)param_3 & 0x40f;
  uVar9 = 1;
  if ((param_3 & 0x40) != 0) {
    lVar4 = ASN1_tag2str(iVar3);
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(char *)(lVar4 + uVar5) != '\0');
    iVar2 = (*param_1)(param_2,lVar4,uVar5 & 0xffffffff);
    if (iVar2 == 0) {
      return -1;
    }
    iVar2 = (*param_1)(param_2,":",1);
    if (iVar2 == 0) {
      return -1;
    }
    iVar2 = (int)uVar5 + 1;
  }
  if (((char)param_3 < '\0') ||
     ((uVar6 = uVar9, (param_3 & 0x20) == 0 &&
      (((0x1d < iVar3 - 1U ||
        (uVar6 = (int)(char)(&DAT_1534ba9b8)[iVar3],
        (int)(char)(&DAT_1534ba9b8)[iVar3] == 0xffffffff)) &&
       (uVar6 = uVar9, (param_3 >> 8 & 1) != 0)))))) {
    iVar3 = FUN_14f733ba0(param_3,param_1,param_2,param_4);
    if (-1 < iVar3) {
      return iVar3 + iVar2;
    }
  }
  else {
    uVar7 = uVar6;
    if (((param_3 & 0x10) != 0) && (uVar7 = uVar6 | 8, uVar6 == 0)) {
      uVar7 = uVar9;
    }
    iVar3 = FUN_14f7338f0(*(undefined8 *)(param_4 + 2),*param_4,uVar7,uVar8,local_res18,param_1,0,
                          uVar10);
    cVar1 = local_res18[0];
    if (-1 < iVar3) {
      iVar2 = iVar2 + iVar3;
      if (local_res18[0] != '\0') {
        iVar2 = iVar2 + 2;
      }
      if (param_2 == 0) {
        return iVar2;
      }
      if (((local_res18[0] == '\0') || (iVar3 = (*param_1)(param_2,"\"",1), iVar3 != 0)) &&
         (iVar3 = FUN_14f7338f0(*(undefined8 *)(param_4 + 2),*param_4,uVar7,uVar8,0,param_1,param_2,
                                uVar10), -1 < iVar3)) {
        if (cVar1 == '\0') {
          return iVar2;
        }
        iVar3 = (*param_1)(param_2,"\"",1);
        if (iVar3 != 0) {
          return iVar2;
        }
      }
    }
  }
  return -1;
}

// FUN_14f7344e0 @ 14f7344e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7344e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return true;
  }
  iVar1 = BIO_write();
  return iVar1 == param_3;
}

// FUN_14f734520 @ 14f734520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f734520(FILE *param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  
  if (param_1 == (FILE *)0x0) {
    return true;
  }
  sVar1 = fwrite(param_2,1,(longlong)(int)param_3,param_1);
  return sVar1 == param_3;
}

