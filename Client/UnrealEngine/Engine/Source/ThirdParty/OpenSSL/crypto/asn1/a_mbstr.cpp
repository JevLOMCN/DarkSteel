// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// ASN1_mbstring_copy @ 14f780660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_mbstring_copy(void)

{
  ASN1_mbstring_ncopy();
  return;
}

// ASN1_mbstring_ncopy @ 14f780690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint ASN1_mbstring_ncopy(undefined8 *param_1,longlong param_2,ulonglong param_3,int param_4,
                        uint param_5,int param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_88;
  int local_84;
  longlong local_80;
  undefined1 local_78 [8];
  undefined8 *local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pcVar11 = (code *)0x0;
  local_88 = 0;
  uVar6 = param_3 & 0xffffffff;
  if ((int)param_3 == -1) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(param_2 + uVar6) != '\0');
  }
  if (param_5 == 0) {
    param_5 = 0x2806;
  }
  uVar10 = (uint)uVar6;
  local_84 = param_4;
  local_70 = param_1;
  if (param_4 == 0x1000) {
    uVar9 = uVar6 & 0xffffffff;
    uVar3 = 0;
    lVar7 = param_2;
    uVar8 = uVar10;
    while (uVar10 = uVar3, uVar8 != 0) {
      iVar4 = UTF8_getc(lVar7,uVar9,local_78);
      if (iVar4 < 0) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x55);
        ERR_put_error(0xd,0x7a,0x86,"crypto\\asn1\\a_mbstr.c");
        return 0xffffffff;
      }
      uVar8 = (int)uVar9 - iVar4;
      uVar9 = (ulonglong)uVar8;
      lVar7 = lVar7 + iVar4;
      uVar3 = uVar10 + 1;
    }
  }
  else if (param_4 != 0x1001) {
    if (param_4 == 0x1002) {
      if ((uVar6 & 1) != 0) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x41);
        ERR_put_error(0xd,0x7a,0x81,"crypto\\asn1\\a_mbstr.c");
        return 0xffffffff;
      }
      uVar10 = (int)uVar10 >> 1;
    }
    else {
      if (param_4 != 0x1004) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x5f);
        ERR_put_error(0xd,0x7a,0xa0,"crypto\\asn1\\a_mbstr.c");
        return 0xffffffff;
      }
      if ((uVar6 & 3) != 0) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x4a);
        ERR_put_error(0xd,0x7a,0x85,"crypto\\asn1\\a_mbstr.c");
        return 0xffffffff;
      }
      uVar10 = (int)uVar10 >> 2;
    }
  }
  iVar2 = param_7;
  iVar4 = param_6;
  if ((0 < param_6) && ((int)uVar10 < param_6)) {
    local_98 = (uint *)CONCAT44(local_98._4_4_,100);
    ERR_put_error(0xd,0x7a,0x98,"crypto\\asn1\\a_mbstr.c");
    BIO_snprintf(local_68,0x20,"%ld",iVar4);
    ERR_add_error_data(2,"minsize=",local_68);
    return 0xffffffff;
  }
  if ((0 < param_7) && (param_7 < (int)uVar10)) {
    local_98 = (uint *)CONCAT44(local_98._4_4_,0x6b);
    ERR_put_error(0xd,0x7a,0x97,"crypto\\asn1\\a_mbstr.c");
    BIO_snprintf(local_68,0x20,"%ld",iVar2);
    ERR_add_error_data(2,"maxsize=",local_68);
    return 0xffffffff;
  }
  local_98 = &param_5;
  iVar4 = FUN_14f780cc0(param_2,uVar6 & 0xffffffff,local_84,FUN_14f780dd0);
  if (iVar4 < 0) {
    local_98 = (uint *)CONCAT44(local_98._4_4_,0x73);
    ERR_put_error(0xd,0x7a,0x7c,"crypto\\asn1\\a_mbstr.c");
    return 0xffffffff;
  }
  iVar4 = 0x1001;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x10) == 0) {
        if ((param_5 & 4) == 0) {
          if ((param_5 >> 0xb & 1) == 0) {
            if ((param_5 >> 8 & 1) == 0) {
              uVar8 = 0xc;
              iVar4 = 0x1000;
            }
            else {
              uVar8 = 0x1c;
              iVar4 = 0x1004;
            }
          }
          else {
            uVar8 = 0x1e;
            iVar4 = 0x1002;
          }
        }
        else {
          uVar8 = 0x14;
        }
      }
      else {
        uVar8 = 0x16;
      }
    }
    else {
      uVar8 = 0x13;
    }
  }
  else {
    uVar8 = 0x12;
  }
  if (param_1 == (undefined8 *)0x0) {
    return uVar8;
  }
  puVar5 = (uint *)*param_1;
  if (puVar5 == (uint *)0x0) {
    bVar1 = true;
    puVar5 = (uint *)ASN1_STRING_type_new(uVar8);
    if (puVar5 == (uint *)0x0) {
      local_98 = (uint *)CONCAT44(local_98._4_4_,0x98);
      goto LAB_14f780b0b;
    }
    *local_70 = puVar5;
  }
  else {
    bVar1 = false;
    CRYPTO_free(*(undefined8 *)(puVar5 + 2),"crypto\\asn1\\a_mbstr.c",0x90);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = uVar8;
  }
  if (local_84 == iVar4) {
    iVar4 = ASN1_STRING_set(puVar5,param_2,uVar6 & 0xffffffff);
    if (iVar4 != 0) {
      return uVar8;
    }
    local_98 = (uint *)CONCAT44(local_98._4_4_,0xa0);
  }
  else {
    if (iVar4 == 0x1000) {
      local_98 = &local_88;
      local_88 = 0;
      FUN_14f780cc0(param_2,uVar6 & 0xffffffff,local_84,FUN_14f780c80);
      pcVar11 = FUN_14f780c30;
    }
    else if (iVar4 == 0x1001) {
      pcVar11 = (code *)&LAB_14f780bb0;
      local_88 = uVar10;
    }
    else if (iVar4 == 0x1002) {
      pcVar11 = (code *)&LAB_14f780bd0;
      local_88 = uVar10 * 2;
    }
    else if (iVar4 == 0x1004) {
      pcVar11 = (code *)&LAB_14f780bf0;
      local_88 = uVar10 * 4;
    }
    local_80 = CRYPTO_malloc((longlong)(int)(local_88 + 1),"crypto\\asn1\\a_mbstr.c",0xbd);
    if (local_80 != 0) {
      *puVar5 = local_88;
      *(longlong *)(puVar5 + 2) = local_80;
      *(undefined1 *)((int)local_88 + local_80) = 0;
      local_98 = (uint *)&local_80;
      FUN_14f780cc0(param_2,uVar6 & 0xffffffff,local_84,pcVar11);
      return uVar8;
    }
    if (bVar1) {
      ASN1_STRING_free(puVar5);
    }
    local_98 = (uint *)CONCAT44(local_98._4_4_,0xc0);
  }
LAB_14f780b0b:
  ERR_put_error(0xd,0x7a,0x41,"crypto\\asn1\\a_mbstr.c");
  return 0xffffffff;
}

// FUN_14f780c30 @ 14f780c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f780c30(undefined4 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = UTF8_putc(*param_2,0xff,param_1);
  *param_2 = *param_2 + (longlong)iVar1;
  return 1;
}

// FUN_14f780c80 @ 14f780c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f780c80(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = UTF8_putc(0,0xffffffff,param_1);
  *param_2 = *param_2 + iVar1;
  return 1;
}

// FUN_14f780cc0 @ 14f780cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f780cc0(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_res10 [2];
  
  do {
    if (param_2 == 0) {
      return 1;
    }
    if (param_3 == 0x1001) {
      bVar4 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      local_res10[0] = (uint)bVar4;
    }
    else if (param_3 == 0x1002) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      local_res10[0] = (uint)CONCAT11(bVar4,*pbVar1);
      param_2 = param_2 + -2;
    }
    else if (param_3 == 0x1004) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      pbVar2 = param_1 + 2;
      pbVar3 = param_1 + 3;
      param_1 = param_1 + 4;
      local_res10[0] =
           (uint)bVar4 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 << 8 | (uint)*pbVar3;
      param_2 = param_2 + -4;
    }
    else {
      iVar5 = UTF8_getc(param_1,param_2,local_res10);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      param_2 = param_2 - iVar5;
      param_1 = param_1 + iVar5;
    }
  } while ((param_4 == (code *)0x0) || (uVar6 = (*param_4)(local_res10[0],param_5), 0 < (int)uVar6))
  ;
  return uVar6;
}

// FUN_14f780dd0 @ 14f780dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f780dd0(uint param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_1;
  if (0x7fffffff < param_1) {
    uVar4 = 0x7fffffff;
  }
  if ((uVar3 & 1) != 0) {
    iVar1 = ossl_ctype_check(uVar4,4);
    if ((iVar1 == 0) && (uVar4 != 0x20)) {
      uVar3 = uVar3 & 0xfffffffe;
    }
  }
  if ((uVar3 & 2) != 0) {
    iVar1 = ossl_ctype_check(uVar4,0x800);
    if (iVar1 == 0) {
      uVar3 = uVar3 & 0xfffffffd;
    }
  }
  if (((uVar3 & 0x10) != 0) && ((uVar4 & 0xffffff80) != 0)) {
    uVar3 = uVar3 & 0xffffffef;
  }
  if (((uVar3 & 4) != 0) && (0xff < param_1)) {
    uVar3 = uVar3 & 0xfffffffb;
  }
  if (((uVar3 >> 0xb & 1) != 0) && (0xffff < param_1)) {
    uVar3 = uVar3 & 0xfffff7ff;
  }
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_2 = uVar3;
    uVar2 = 1;
  }
  return uVar2;
}

