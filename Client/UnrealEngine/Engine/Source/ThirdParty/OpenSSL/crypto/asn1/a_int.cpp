// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 31

// ASN1_ENUMERATED_get @ 14f7052e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_ENUMERATED_get(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_res8 [4];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((param_1[1] & 0xfffffeffU) == 10) && (*param_1 < 5)) {
    iVar1 = FUN_14f705660(local_res8,*(undefined8 *)(param_1 + 2),(longlong)*param_1,
                          param_1[1] & 0x100,0x14f7052ea);
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
      if (local_res8[0] + 0x80000000 < 0x100000000) {
        uVar2 = local_res8[0] & 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}

// ASN1_ENUMERATED_get_int64 @ 14f705360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_ENUMERATED_get_int64(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705800(param_1,param_2,10);
  return;
}

// ASN1_ENUMERATED_set @ 14f705380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_ENUMERATED_set(undefined8 param_1,int param_2)

{
  FUN_14f705950(param_1,(longlong)param_2,10);
  return;
}

// ASN1_ENUMERATED_set_int64 @ 14f7053b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_ENUMERATED_set_int64(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705950(param_1,param_2,10);
  return;
}

// ASN1_ENUMERATED_to_BN @ 14f7053d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_ENUMERATED_to_BN(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705a70(param_1,param_2,10);
  return;
}

// ASN1_INTEGER_cmp @ 14f7053f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_INTEGER_cmp(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar2 != (*(uint *)(param_2 + 4) & 0x100)) {
    uVar1 = 1;
    if (uVar2 != 0) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  uVar1 = ASN1_STRING_cmp();
  if (uVar2 != 0) {
    uVar1 = (ulonglong)(uint)-(int)uVar1;
  }
  return uVar1;
}

// ASN1_INTEGER_dup @ 14f705440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_dup(void)

{
  ASN1_STRING_dup();
  return;
}

// ASN1_INTEGER_get @ 14f705460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_INTEGER_get(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_res8 [4];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((param_1[1] & 0xfffffeffU) != 2) {
    ERR_put_error(0xd,0xe3,0xe1,"crypto\\asn1\\a_int.c",0x146);
    return 0xffffffff;
  }
  iVar1 = FUN_14f705660(local_res8,*(undefined8 *)(param_1 + 2),(longlong)*param_1,
                        param_1[1] & 0x100);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = 0xffffffff;
  if (local_res8[0] + 0x80000000 < 0x100000000) {
    uVar2 = local_res8[0] & 0xffffffff;
  }
  return uVar2;
}

// ASN1_INTEGER_get_int64 @ 14f705500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_get_int64(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705800(param_1,param_2,2);
  return;
}

// ASN1_INTEGER_get_uint64 @ 14f705520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_get_uint64(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705890(param_1,param_2,2);
  return;
}

// ASN1_INTEGER_set @ 14f705540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_set(undefined8 param_1,int param_2)

{
  FUN_14f705950(param_1,(longlong)param_2,2);
  return;
}

// ASN1_INTEGER_set_int64 @ 14f705570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_set_int64(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705950(param_1,param_2,2);
  return;
}

// ASN1_INTEGER_set_uint64 @ 14f705590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ASN1_INTEGER_set_uint64(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [31];
  undefined1 auStack_19 [9];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f70559a;
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_1 + 4) = 2;
  lVar1 = 8;
  do {
    lVar2 = lVar1;
    auStack_19[lVar2] = (char)param_2;
    param_2 = param_2 >> 8;
    lVar1 = lVar2 + -1;
  } while (param_2 != 0);
  ASN1_STRING_set(param_1,auStack_19 + lVar2,8 - (int)(lVar2 + -1));
  return;
}

// ASN1_INTEGER_to_BN @ 14f705600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_INTEGER_to_BN(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705a70(param_1,param_2,2);
  return;
}

// BN_to_ASN1_ENUMERATED @ 14f705620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_to_ASN1_ENUMERATED(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705b30(param_1,param_2,10);
  return;
}

// BN_to_ASN1_INTEGER @ 14f705640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_to_ASN1_INTEGER(undefined8 param_1,undefined8 param_2)

{
  FUN_14f705b30(param_1,param_2,2);
  return;
}

// FUN_14f705660 @ 14f705660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f705660(ulonglong *param_1,longlong param_2,ulonglong param_3,int param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (param_3 < 9) {
    if (param_2 == 0) {
      return 0;
    }
    uVar2 = 0;
    uVar4 = uVar2;
    if (param_3 != 0) {
      do {
        pbVar1 = (byte *)(uVar4 + param_2);
        uVar4 = uVar4 + 1;
        uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
      } while (uVar4 < param_3);
    }
    if (param_4 != 0) {
      if (uVar2 < 0x8000000000000000) {
        *param_1 = -uVar2;
        return 1;
      }
      if (uVar2 == 0x8000000000000000) {
        *param_1 = 0x8000000000000000;
        return 1;
      }
      uVar3 = 0xe0;
      uVar6 = 0x109;
      uVar5 = 0xe0;
      goto LAB_14f70572b;
    }
    if (uVar2 < 0x8000000000000000) {
      *param_1 = uVar2;
      return 1;
    }
    uVar6 = 0x110;
    uVar3 = 0xe0;
  }
  else {
    uVar6 = 0xd5;
    uVar3 = 0xe1;
  }
  uVar5 = 0xdf;
LAB_14f70572b:
  ERR_put_error(0xd,uVar3,uVar5,"crypto\\asn1\\a_int.c",uVar6);
  return 0;
}

// FUN_14f705750 @ 14f705750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f705750(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 < 9) {
    if (param_2 != 0) {
      uVar2 = 0;
      uVar3 = uVar2;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(uVar3 + param_2);
          uVar3 = uVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
        } while (uVar3 < param_3);
      }
      *param_1 = uVar2;
      return 1;
    }
  }
  else {
    ERR_put_error(0xd,0xe1,0xdf,"crypto\\asn1\\a_int.c",0xd5);
  }
  return 0;
}

// FUN_14f705800 @ 14f705800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f705800(undefined8 param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    ERR_put_error(0xd,0xe3,0x43,"crypto\\asn1\\a_int.c",0x142);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != param_3) {
    ERR_put_error(0xd,0xe3,0xe1,"crypto\\asn1\\a_int.c",0x146);
    return 0;
  }
  uVar1 = FUN_14f705660(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2,param_2[1] & 0x100);
  return uVar1;
}

// FUN_14f705890 @ 14f705890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f705890(undefined8 param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    ERR_put_error(0xd,0xe6,0x43,"crypto\\asn1\\a_int.c",0x165);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != param_3) {
    ERR_put_error(0xd,0xe6,0xe1,"crypto\\asn1\\a_int.c",0x169);
    return 0;
  }
  if (((uint)param_2[1] >> 8 & 1) != 0) {
    ERR_put_error(0xd,0xe6,0xe2,"crypto\\asn1\\a_int.c",0x16d);
    return 0;
  }
  uVar1 = FUN_14f705750(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  return uVar1;
}

// FUN_14f705950 @ 14f705950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f705950(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [31];
  undefined1 auStack_19 [9];
  ulonglong local_10;
  undefined8 uStack_8;
  longlong lVar2;
  
  uStack_8 = 0x14f70595a;
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  *(uint *)(param_1 + 4) = param_3;
  lVar2 = 8;
  if ((longlong)param_2 < 0) {
    param_2 = -param_2;
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 | 0x100;
  }
  else {
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 & 0xfffffeff;
  }
  *(uint *)(param_1 + 4) = param_3;
  ASN1_STRING_set(param_1,auStack_19 + lVar1 + 1,8 - (int)lVar1);
  return;
}

// FUN_14f705a00 @ 14f705a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f705a00(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [31];
  undefined1 auStack_19 [9];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f705a0a;
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_1 + 4) = param_3;
  lVar1 = 8;
  do {
    lVar2 = lVar1;
    auStack_19[lVar2] = (char)param_2;
    param_2 = param_2 >> 8;
    lVar1 = lVar2 + -1;
  } while (param_2 != 0);
  ASN1_STRING_set(param_1,auStack_19 + lVar2,8 - (int)(lVar2 + -1));
  return;
}

// FUN_14f705a70 @ 14f705a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f705a70(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f705a7c;
  if ((param_1[1] & 0xfffffeff) != param_3) {
    ERR_put_error(0xd,0xe4,0xe1,"crypto\\asn1\\a_int.c",499,0x14f705a7c);
    return 0;
  }
  lVar1 = BN_bin2bn(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0xe4,0x69,"crypto\\asn1\\a_int.c",0x1f9,uVar2);
    return 0;
  }
  if ((param_1[1] & 0x100) != 0) {
    BN_set_negative(lVar1,1);
  }
  return lVar1;
}

// FUN_14f705b30 @ 14f705b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_14f705b30(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f705b45;
  if (param_2 == (int *)0x0) {
    piVar3 = (int *)ASN1_STRING_type_new(param_3);
  }
  else {
    param_2[1] = param_3;
    piVar3 = param_2;
  }
  if (piVar3 == (int *)0x0) {
    uVar5 = 0x1cf;
    uVar4 = 0x3a;
  }
  else {
    iVar1 = BN_is_negative(param_1);
    if ((iVar1 != 0) && (iVar1 = BN_is_zero(param_1), iVar1 == 0)) {
      piVar3[1] = piVar3[1] | 0x102;
    }
    iVar1 = BN_num_bits(param_1);
    iVar1 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    iVar2 = ASN1_STRING_set(piVar3,0,iVar1);
    if (iVar2 != 0) {
      iVar2 = BN_is_zero(param_1);
      if (iVar2 == 0) {
        iVar1 = BN_bn2bin(param_1,*(undefined8 *)(piVar3 + 2));
      }
      else {
        **(undefined1 **)(piVar3 + 2) = 0;
      }
      *piVar3 = iVar1;
      return piVar3;
    }
    uVar5 = 0x1dc;
    uVar4 = 0x41;
  }
  ERR_put_error(0xd,0xe5,uVar4,"crypto\\asn1\\a_int.c",uVar5,uVar6);
  if (piVar3 != param_2) {
    ASN1_INTEGER_free(piVar3);
  }
  return (int *)0x0;
}

// c2i_ASN1_INTEGER @ 14f705c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong c2i_ASN1_INTEGER(longlong *param_1,longlong *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  int local_res18 [4];
  undefined8 uVar10;
  
  uVar10 = 0x14f705c64;
  uVar7 = (ulonglong)param_3;
  pbVar3 = (byte *)*param_2;
  if (uVar7 == 0) {
    ERR_put_error(0xd,0xe2,0xde,"crypto\\asn1\\a_int.c",0x9a,0x14f705c64);
    return 0;
  }
  bVar2 = *pbVar3;
  if (uVar7 == 1) {
    uVar6 = 1;
    goto LAB_14f705cc0;
  }
  uVar6 = 0;
  if (bVar2 == 0) {
    uVar6 = 1;
LAB_14f705d69:
    if ((bVar2 & 0x80) == (pbVar3[1] & 0x80)) {
      ERR_put_error(0xd,0xe2,0xdd,"crypto\\asn1\\a_int.c",0xbb,0x14f705c64);
      return 0;
    }
  }
  else if (bVar2 == 0xff) {
    uVar8 = 1;
    if (1 < uVar7) {
      do {
        pbVar1 = pbVar3 + uVar8;
        uVar8 = uVar8 + 1;
        uVar6 = (ulonglong)((uint)uVar6 | (uint)*pbVar1);
      } while (uVar8 < uVar7);
    }
    bVar9 = (int)uVar6 != 0;
    uVar6 = (ulonglong)bVar9;
    if (bVar9) goto LAB_14f705d69;
  }
  uVar6 = uVar7 - uVar6;
  if (uVar6 == 0) {
    return 0;
  }
LAB_14f705cc0:
  if ((param_1 == (longlong *)0x0) || (lVar5 = *param_1, lVar5 == 0)) {
    lVar5 = ASN1_INTEGER_new();
    if (lVar5 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar5 + 4) = 2;
  }
  iVar4 = ASN1_STRING_set(lVar5,0,uVar6 & 0xffffffff);
  if (iVar4 == 0) {
    ERR_put_error(0xd,0xc2,0x41,"crypto\\asn1\\a_int.c",0x139,uVar10);
    if ((param_1 == (longlong *)0x0) || (*param_1 != lVar5)) {
      ASN1_INTEGER_free(lVar5);
    }
    return 0;
  }
  FUN_14f705e20(*(undefined8 *)(lVar5 + 8),local_res18,*param_2,uVar7);
  if (local_res18[0] != 0) {
    *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x100;
  }
  *param_2 = *param_2 + uVar7;
  if (param_1 != (longlong *)0x0) {
    *param_1 = lVar5;
    return lVar5;
  }
  return lVar5;
}

// FUN_14f705e20 @ 14f705e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f705e20(byte *param_1,uint *param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  
  if (param_4 == 0) {
    ERR_put_error(0xd,0xe2,0xde,"crypto\\asn1\\a_int.c",0x9a,0x14f705e2c);
    return 0;
  }
  bVar2 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar2 & 0x80;
  }
  if (param_4 == 1) {
    if (param_1 != (byte *)0x0) {
      bVar3 = *param_3;
      if ((bVar2 & 0x80) != 0) {
        bVar3 = ~bVar3 + 1;
      }
      *param_1 = bVar3;
    }
    return 1;
  }
  uVar6 = 0;
  if (*param_3 == 0) {
    uVar6 = 1;
  }
  else {
    if (*param_3 != 0xff) goto LAB_14f705f14;
    uVar4 = 1;
    uVar5 = 0;
    if (1 < param_4) {
      do {
        pbVar8 = param_3 + uVar4;
        uVar4 = uVar4 + 1;
        uVar5 = (uint)uVar6 | (uint)*pbVar8;
        uVar6 = (ulonglong)uVar5;
      } while (uVar4 < param_4);
    }
    uVar6 = (ulonglong)(uVar5 != 0);
    if (uVar5 == 0) goto LAB_14f705f14;
  }
  if ((bVar2 & 0x80) == (param_3[1] & 0x80)) {
    ERR_put_error(0xd,0xe2,0xdd,"crypto\\asn1\\a_int.c",0xbb,0x14f705e2c);
    return 0;
  }
LAB_14f705f14:
  lVar9 = param_4 - uVar6;
  if (param_1 != (byte *)0x0) {
    bVar2 = -((bVar2 & 0x80) != 0);
    pbVar8 = param_3 + lVar9 + uVar6;
    uVar5 = bVar2 & 1;
    if (lVar9 != 0) {
      pbVar7 = pbVar8 + (-(longlong)param_3 - uVar6);
      do {
        pbVar1 = pbVar8 + -1;
        pbVar8 = pbVar8 + -1;
        pbVar7 = pbVar7 + -1;
        uVar5 = uVar5 + (bVar2 ^ *pbVar1);
        param_1[(longlong)pbVar7] = (byte)uVar5;
        uVar5 = uVar5 >> 8;
      } while (pbVar7 != (byte *)0x0);
    }
  }
  return lVar9;
}

// c2i_uint64_int @ 14f705f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 c2i_uint64_int(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  byte local_28 [8];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pbVar3 = (byte *)*param_3;
  uVar10 = (ulonglong)param_4;
  if (uVar10 == 0) {
    uVar6 = 0xe2;
    local_38 = 0x9a;
    uVar9 = 0xde;
LAB_14f7060c1:
    ERR_put_error(0xd,uVar6,uVar9,"crypto\\asn1\\a_int.c");
LAB_14f7060d2:
    uVar6 = 0;
  }
  else {
    bVar2 = *pbVar3;
    uVar7 = 0;
    if (uVar10 == 1) {
      uVar10 = 1;
    }
    else {
      if (bVar2 == 0) {
        uVar8 = 1;
LAB_14f70607a:
        if ((bVar2 & 0x80) == (pbVar3[1] & 0x80)) {
          uVar6 = 0xe2;
          local_38 = 0xbb;
          uVar9 = 0xdd;
          goto LAB_14f7060c1;
        }
      }
      else {
        uVar8 = uVar7;
        if (bVar2 == 0xff) {
          uVar4 = 1;
          uVar5 = 0;
          if (1 < uVar10) {
            do {
              pbVar1 = pbVar3 + uVar4;
              uVar4 = uVar4 + 1;
              uVar5 = (uint)uVar8 | (uint)*pbVar1;
              uVar8 = (ulonglong)uVar5;
            } while (uVar4 < uVar10);
          }
          uVar8 = (ulonglong)(uVar5 != 0);
          if (uVar5 != 0) goto LAB_14f70607a;
        }
      }
      uVar10 = uVar10 - uVar8;
      if (uVar10 == 0) goto LAB_14f7060d2;
      if (8 < uVar10) {
        uVar6 = 0x65;
        local_38 = 0x267;
        uVar9 = 0xdf;
        goto LAB_14f7060c1;
      }
    }
    FUN_14f705e20(local_28,param_2);
    uVar8 = uVar7;
    if (uVar10 != 0) {
      do {
        pbVar3 = local_28 + uVar7;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 << 8 | (ulonglong)*pbVar3;
      } while (uVar7 < uVar10);
    }
    *param_1 = uVar8;
    uVar6 = 1;
  }
  return uVar6;
}

// d2i_ASN1_UINTEGER @ 14f7060e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * d2i_ASN1_UINTEGER(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *_Dst;
  undefined4 uVar3;
  int local_res8 [2];
  int local_res20 [2];
  undefined1 local_28 [8];
  char *local_20;
  
  local_20 = (char *)0x14f7060f3;
  if ((param_1 == (longlong *)0x0) || (piVar2 = (int *)*param_1, piVar2 == (int *)0x0)) {
    piVar2 = (int *)ASN1_INTEGER_new();
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2[1] = 2;
  }
  local_20 = (char *)*param_2;
  cVar1 = ASN1_get_object(&local_20,local_res8,local_res20,local_28,param_3);
  if (cVar1 < '\0') {
    uVar3 = 0x66;
  }
  else if (local_res20[0] == 2) {
    _Dst = (void *)CRYPTO_malloc((longlong)(local_res8[0] + 1),"crypto\\asn1\\a_int.c",0x1a4);
    if (_Dst != (void *)0x0) {
      piVar2[1] = 2;
      if (local_res8[0] != 0) {
        if ((*local_20 == '\0') && (local_res8[0] != 1)) {
          local_20 = local_20 + 1;
          local_res8[0] = local_res8[0] + -1;
        }
        memcpy(_Dst,local_20,(longlong)local_res8[0]);
        local_20 = local_20 + local_res8[0];
      }
      CRYPTO_free(*(undefined8 *)(piVar2 + 2),"crypto\\asn1\\a_int.c",0x1b3);
      *(void **)(piVar2 + 2) = _Dst;
      *piVar2 = local_res8[0];
      if (param_1 != (longlong *)0x0) {
        *param_1 = (longlong)piVar2;
      }
      *param_2 = (longlong)local_20;
      return piVar2;
    }
    uVar3 = 0x41;
  }
  else {
    uVar3 = 0x73;
  }
  ERR_put_error(0xd,0x96,uVar3,"crypto\\asn1\\a_int.c",0x1bb);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar2)) {
    ASN1_INTEGER_free(piVar2);
  }
  return (int *)0x0;
}

// i2c_ASN1_INTEGER @ 14f706260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2c_ASN1_INTEGER(int *param_1,undefined8 param_2)

{
  FUN_14f7062a0(*(undefined8 *)(param_1 + 2),(longlong)*param_1,param_1[1] & 0x100,param_2);
  return;
}

// FUN_14f7062a0 @ 14f7062a0

void FUN_14f7062a0(byte *param_1,ulonglong param_2,int param_3,longlong *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  
  uVar6 = 0;
  uVar7 = 0;
  uVar10 = 0;
  uVar5 = uVar6;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    lVar4 = 1;
  }
  else {
    bVar2 = *param_1;
    if (param_3 == 0) {
      if (0x7f < bVar2) {
        lVar4 = param_2 + 1;
        uVar6 = param_2;
        uVar5 = 1;
        goto LAB_14f706330;
      }
    }
    else {
      uVar10 = 0xff;
      if (0x80 < bVar2) {
        lVar4 = param_2 + 1;
        uVar6 = param_2;
        uVar5 = 1;
        goto LAB_14f706330;
      }
      if (bVar2 == 0x80) {
        uVar5 = 1;
        if (1 < param_2) {
          do {
            pbVar9 = param_1 + uVar5;
            uVar5 = uVar5 + 1;
            uVar7 = (uint)uVar6 | (uint)*pbVar9;
            uVar6 = (ulonglong)uVar7;
          } while (uVar5 < param_2);
        }
        uVar10 = (uint)(byte)-(uVar7 != 0);
        uVar5 = (ulonglong)((byte)-(uVar7 != 0) & 1);
      }
    }
    lVar4 = uVar5 + param_2;
    uVar6 = param_2;
  }
LAB_14f706330:
  if ((param_4 != (longlong *)0x0) && (puVar3 = (undefined1 *)*param_4, puVar3 != (undefined1 *)0x0)
     ) {
    uVar7 = uVar10 & 1;
    pbVar9 = param_1 + uVar6;
    *puVar3 = (char)uVar10;
    if (uVar6 != 0) {
      lVar8 = (longlong)pbVar9 - (longlong)param_1;
      do {
        pbVar1 = pbVar9 + -1;
        pbVar9 = pbVar9 + -1;
        lVar8 = lVar8 + -1;
        uVar7 = uVar7 + (*pbVar1 ^ uVar10);
        puVar3[lVar8 + uVar5] = (char)uVar7;
        uVar7 = uVar7 >> 8;
      } while (lVar8 != 0);
    }
    *param_4 = *param_4 + lVar4;
  }
  return;
}

// i2c_uint64_int @ 14f7063b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void i2c_uint64_int(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7063ba;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  lVar1 = 8;
  do {
    lVar2 = lVar1;
    local_20[lVar2 + -1] = (char)param_2;
    param_2 = param_2 >> 8;
    lVar1 = lVar2 + -1;
  } while (param_2 != 0);
  local_28 = param_1;
  FUN_14f7062a0(local_20 + lVar2 + -1,8 - (lVar2 + -1),param_3,&local_28);
  return;
}

