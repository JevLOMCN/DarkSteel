// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// ASN1_TIME_adj @ 14f706920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_TIME_adj(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f70692f;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_2;
  lVar2 = OPENSSL_gmtime(&local_68,local_60);
  if (lVar2 == 0) {
    local_78 = 0x14a;
    ERR_put_error(0xd,0xd9,0xad,"crypto\\asn1\\a_time.c");
LAB_14f706986:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_14f706986;
    }
    uVar3 = asn1_time_from_tm(param_1,lVar2,0xffffffff);
  }
  return uVar3;
}

// ASN1_TIME_check @ 14f7069d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TIME_check(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = ASN1_GENERALIZEDTIME_check();
    return uVar1;
  }
  if (*(int *)(param_1 + 4) == 0x17) {
    uVar1 = ASN1_UTCTIME_check();
    return uVar1;
  }
  return 0;
}

// ASN1_TIME_cmp_time_t @ 14f706a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_TIME_cmp_time_t(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  __time64_t local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f706a1a;
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_2;
  if (param_1 == 0) {
    _time64(&local_70);
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    lVar2 = OPENSSL_gmtime(&local_70,&local_60);
    bVar3 = lVar2 == 0;
  }
  else {
    iVar1 = asn1_time_to_tm(&local_60,param_1);
    bVar3 = iVar1 == 0;
  }
  if (!bVar3) {
    lVar2 = OPENSSL_gmtime(&local_68,local_38);
    if (lVar2 != 0) {
      iVar1 = OPENSSL_gmtime_diff(&local_78,&local_74,local_38,&local_60);
      if (iVar1 != 0) {
        if ((0 < local_78) || (0 < local_74)) {
          return 1;
        }
        if ((-1 < local_78) && (-1 < local_74)) {
          return 0;
        }
        return 0xffffffff;
      }
    }
  }
  return 0xfffffffe;
}

// ASN1_TIME_compare @ 14f706b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TIME_compare(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int local_res18 [2];
  int local_res20 [2];
  
  iVar1 = ASN1_TIME_diff(local_res18,local_res20,param_2,param_1,0x14f706b5a);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  if ((local_res18[0] < 1) && (local_res20[0] < 1)) {
    if ((-1 < local_res18[0]) && (-1 < local_res20[0])) {
      return 0;
    }
    return 0xffffffff;
  }
  return 1;
}

// ASN1_TIME_diff @ 14f706bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 ASN1_TIME_diff(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  __time64_t local_78 [5];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    _time64(local_78);
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    lVar2 = OPENSSL_gmtime(local_78,&local_48);
    bVar4 = lVar2 == 0;
  }
  else {
    iVar1 = asn1_time_to_tm(&local_48,param_3);
    bVar4 = iVar1 == 0;
  }
  if (!bVar4) {
    if (param_4 == 0) {
      _time64(local_78);
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_50 = 0;
      lVar2 = OPENSSL_gmtime(local_78,local_78 + 1);
      bVar4 = lVar2 == 0;
    }
    else {
      iVar1 = asn1_time_to_tm(local_78 + 1,param_4);
      bVar4 = iVar1 == 0;
    }
    if (!bVar4) {
      uVar3 = OPENSSL_gmtime_diff(param_1,param_2,&local_48,local_78 + 1);
      return uVar3;
    }
  }
  return 0;
}

// ASN1_TIME_free @ 14f706cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TIME_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3410);
  return;
}

// ASN1_TIME_new @ 14f706d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TIME_new(void)

{
  ASN1_item_new(&DAT_1534b3410);
  return;
}

// ASN1_TIME_normalize @ 14f706d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool ASN1_TIME_normalize(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  __time64_t local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f706d3c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    _time64(local_48);
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_20 = 0;
    lVar2 = OPENSSL_gmtime(local_48,local_48 + 1);
    bVar3 = lVar2 == 0;
  }
  else {
    iVar1 = asn1_time_to_tm(local_48 + 1,param_1);
    bVar3 = iVar1 == 0;
  }
  if (bVar3) {
    return false;
  }
  lVar2 = asn1_time_from_tm(param_1,local_48 + 1,0xffffffff);
  return lVar2 != 0;
}

// ASN1_TIME_print @ 14f706df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ASN1_TIME_print(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  iVar3 = asn1_time_to_tm(&local_58);
  if (iVar3 == 0) {
    BIO_write(param_1,"Bad time value",0xe);
    return false;
  }
  lVar2 = *(longlong *)(param_2 + 2);
  iVar3 = *param_2;
  cVar1 = *(char *)((iVar3 + -1) + lVar2);
  if (param_2[1] == 0x18) {
    iVar7 = 0;
    lVar9 = 0;
    if ((0xf < iVar3) && (lVar9 = 0, *(char *)(lVar2 + 0xe) == '.')) {
      lVar9 = lVar2 + 0xe;
      iVar7 = 1;
      if (0xf < iVar3) {
        iVar6 = 0xf;
        puVar8 = (undefined1 *)(lVar2 + 0xf);
        do {
          iVar4 = ascii_isdigit(*puVar8);
          if (iVar4 == 0) break;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 < iVar3);
      }
    }
    pcVar5 = "";
    if (cVar1 == 'Z') {
      pcVar5 = " GMT";
    }
    iVar3 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d%.*s %d%s",
                       &DAT_1534b34f0 + (longlong)local_48 * 4,local_4c,local_50,local_54,local_58,
                       iVar7,lVar9,local_44 + 0x76c,pcVar5);
  }
  else {
    pcVar5 = "";
    if (cVar1 == 'Z') {
      pcVar5 = " GMT";
    }
    iVar3 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d %d%s",&DAT_1534b34f0 + (longlong)local_48 * 4,
                       local_4c,local_50,local_54,local_58,local_44 + 0x76c,pcVar5);
  }
  return 0 < iVar3;
}

// ASN1_TIME_set @ 14f706ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TIME_set(undefined8 param_1,undefined8 param_2)

{
  ASN1_TIME_adj(param_1,param_2,0,0);
  return;
}

// ASN1_TIME_set_string @ 14f707020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TIME_set_string(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ASN1_UTCTIME_set_string();
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = ASN1_GENERALIZEDTIME_set_string(param_1,param_2);
  return uVar2;
}

// ASN1_TIME_set_string_X509 @ 14f707070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TIME_set_string_X509(longlong param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_48;
  int local_44;
  void *local_40;
  undefined4 local_38;
  undefined1 local_30 [20];
  int local_1c;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f707085;
  uVar3 = 0;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)((longlong)param_2 + lVar2) != '\0');
  local_48 = (int)lVar2;
  local_38 = 0x100;
  local_44 = 0x17;
  local_40 = param_2;
  iVar1 = ASN1_UTCTIME_check(&local_48);
  if (iVar1 == 0) {
    local_44 = 0x18;
    iVar1 = ASN1_GENERALIZEDTIME_check(&local_48);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_1 != 0) {
    if (local_44 == 0x18) {
      iVar1 = asn1_time_to_tm(local_30,&local_48);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_1c - 0x32U < 100) {
        iVar1 = local_48 + -1;
        local_48 = local_48 + -2;
        local_40 = (void *)CRYPTO_zalloc((longlong)iVar1,"crypto\\asn1\\a_time.c",0x1a4);
        if (local_40 == (void *)0x0) {
          return 0;
        }
        memcpy(local_40,(void *)((longlong)param_2 + 2),(longlong)local_48);
        local_44 = 0x17;
      }
    }
    iVar1 = ASN1_STRING_copy(param_1,&local_48);
    if (iVar1 == 0) goto LAB_14f70716b;
  }
  uVar3 = 1;
LAB_14f70716b:
  if (local_40 != param_2) {
    CRYPTO_free(local_40,"crypto\\asn1\\a_time.c",0x1b0);
  }
  return uVar3;
}

// ASN1_TIME_to_generalizedtime @ 14f7071a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong ASN1_TIME_to_generalizedtime(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  __time64_t local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7071b0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar3 = 0;
  if (param_1 == 0) {
    _time64(local_48);
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_20 = 0;
    lVar2 = OPENSSL_gmtime(local_48,local_48 + 1);
    bVar4 = lVar2 == 0;
  }
  else {
    iVar1 = asn1_time_to_tm(local_48 + 1,param_1);
    bVar4 = iVar1 == 0;
  }
  if (bVar4) {
    lVar3 = 0;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      lVar3 = *param_2;
    }
    lVar3 = asn1_time_from_tm(lVar3,local_48 + 1,0x18);
    if ((param_2 != (longlong *)0x0) && (lVar3 != 0)) {
      *param_2 = lVar3;
    }
  }
  return lVar3;
}

// ASN1_TIME_to_tm @ 14f707270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_TIME_to_tm(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  __time64_t local_res8 [4];
  
  if (param_1 == 0) {
    _time64(local_res8);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    lVar1 = OPENSSL_gmtime(local_res8,param_2);
    return (ulonglong)(lVar1 != 0);
  }
  uVar2 = asn1_time_to_tm(param_2,param_1);
  return uVar2;
}

// asn1_time_from_tm @ 14f7072e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * asn1_time_from_tm(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f7072fa;
  puVar3 = (undefined4 *)0x0;
  if (param_3 == -1) {
    param_3 = 0x18 - (uint)(param_2[5] - 0x32 < 100);
  }
  else if (param_3 == 0x17) {
    if (99 < param_2[5] - 0x32) goto LAB_14f707334;
  }
  else if (param_3 != 0x18) goto LAB_14f707334;
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)ASN1_STRING_new();
  }
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar1 = ASN1_STRING_set(puVar3,0,0x14);
  if (iVar1 != 0) {
    puVar3[1] = param_3;
    if (param_3 == 0x18) {
      uVar2 = *param_2;
      iVar1 = param_2[4];
      uVar8 = param_2[1];
      iVar5 = param_2[5] + 0x76c;
      uVar7 = param_2[2];
      uVar6 = param_2[3];
      pcVar4 = "%04d%02d%02d%02d%02d%02dZ";
    }
    else {
      iVar1 = param_2[4];
      pcVar4 = "%02d%02d%02d%02d%02d%02dZ";
      iVar5 = (int)param_2[5] % 100;
      uVar2 = *param_2;
      uVar8 = param_2[1];
      uVar7 = param_2[2];
      uVar6 = param_2[3];
    }
    uVar2 = BIO_snprintf(*(undefined8 *)(puVar3 + 2),0x14,pcVar4,iVar5,iVar1 + 1,uVar6,uVar7,uVar8,
                         uVar2,uVar9);
    *puVar3 = uVar2;
    return puVar3;
  }
LAB_14f707334:
  if (puVar3 != param_1) {
    ASN1_STRING_free(puVar3);
  }
  return (undefined4 *)0x0;
}

// asn1_time_to_tm @ 14f707430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 asn1_time_to_tm(undefined8 *param_1,uint *param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_94;
  uint local_90;
  ulonglong local_88;
  uint *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar18 = 0;
  local_94 = 0;
  local_88 = 6;
  local_90 = 6;
  if (param_2[1] == 0x17) {
    uVar4 = param_2[4] & 0x100;
    iVar6 = 0xd;
    if (uVar4 == 0) {
      iVar6 = 0xb;
    }
    local_94 = (uint)(uVar4 != 0);
    uVar9 = (ulonglong)(uVar4 != 0);
    local_88 = 5;
  }
  else {
    if (param_2[1] != 0x18) {
      return 0;
    }
    local_90 = 7;
    if ((param_2[4] & 0x100) == 0) {
      iVar6 = 0xd;
      uVar9 = uVar18;
      local_88 = 6;
    }
    else {
      iVar6 = 0xf;
      local_94 = 1;
      uVar9 = 1;
    }
  }
  uVar4 = *param_2;
  uVar16 = (ulonglong)(int)uVar4;
  lVar2 = *(longlong *)(param_2 + 2);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar8 = uVar18;
  uVar12 = uVar18;
  uVar15 = uVar18;
  uVar17 = uVar18;
  local_98 = uVar4;
  local_80 = param_2;
  local_78 = param_1;
  if ((int)uVar4 < iVar6) {
    return 0;
  }
  do {
    uVar13 = (uint)uVar15;
    iVar6 = (int)uVar17;
    if (((((int)uVar9 == 0) && (uVar12 == local_88)) &&
        (bVar3 = *(char *)(uVar8 + lVar2) - 0x2b, bVar3 < 0x30)) &&
       (uVar14 = 0, (0x800000000005U >> ((longlong)(char)bVar3 & 0x3fU) & 1) != 0)) break;
    iVar5 = ascii_isdigit(*(undefined1 *)(uVar8 + lVar2));
    if (iVar5 == 0) {
      return 0;
    }
    cVar1 = *(char *)(uVar8 + lVar2);
    uVar9 = uVar8 + 1;
    if (uVar9 == uVar16) {
      return 0;
    }
    iVar5 = ascii_isdigit(*(undefined1 *)(uVar9 + lVar2));
    if (iVar5 == 0) {
      return 0;
    }
    uVar13 = uVar13 + 2;
    iVar5 = (int)*(char *)(uVar9 + lVar2) + cVar1 * 10 + -0x210;
    if (uVar8 + 2 == uVar16) {
      return 0;
    }
    uVar9 = uVar12;
    iVar7 = iVar6;
    if (local_80[1] == 0x17) {
      uVar9 = uVar12 + 1;
      iVar7 = iVar6 + 1;
    }
    if (iVar5 < (int)(&DAT_1534b3470)[uVar9]) {
      return 0;
    }
    if ((int)(&DAT_1534b3498)[uVar9] < iVar5) {
      return 0;
    }
    switch(iVar7) {
    case 0:
      local_60 = CONCAT44((iVar5 + -0x13) * 100,(int)local_60);
      break;
    case 1:
      if (local_80[1] == 0x17) {
        if (iVar5 < 0x32) {
          local_60 = CONCAT44(iVar5 + 100,(int)local_60);
        }
        else {
          local_60 = CONCAT44(iVar5,(int)local_60);
        }
      }
      else {
        local_60 = CONCAT44(local_60._4_4_ + iVar5,(int)local_60);
      }
      break;
    case 2:
      local_60 = CONCAT44(local_60._4_4_,iVar5 + -1);
      break;
    case 3:
      if ((int)local_60 == 1) {
        iVar7 = FUN_14f707aa0(local_60._4_4_ + 0x76c);
        iVar7 = iVar7 + 0x1c;
      }
      else {
        iVar7 = *(int *)(&DAT_1534b34c0 + (longlong)(int)local_60 * 4);
      }
      if (iVar7 < iVar5) {
        return 0;
      }
      uStack_68 = CONCAT44(iVar5,(undefined4)uStack_68);
      FUN_14f707950(&local_70);
      break;
    case 4:
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar5);
      break;
    case 5:
      local_70 = CONCAT44(iVar5,(undefined4)local_70);
      break;
    case 6:
      local_70 = CONCAT44(local_70._4_4_,iVar5);
    }
    uVar12 = uVar12 + 1;
    uVar9 = (ulonglong)local_94;
    uVar8 = uVar8 + 2;
    uVar15 = (ulonglong)uVar13;
    uVar17 = (ulonglong)(iVar6 + 1);
    uVar14 = local_94;
  } while ((longlong)uVar12 < (longlong)(ulonglong)local_90);
  if ((local_80[1] == 0x18) && (*(char *)((int)uVar13 + lVar2) == '.')) {
    if (uVar14 != 0) {
      return 0;
    }
    uVar14 = uVar13 + 1;
    if (uVar14 == uVar4) {
      return 0;
    }
    lVar10 = (longlong)(int)uVar14;
    uVar13 = uVar14;
    if ((longlong)uVar16 <= lVar10) {
      return 0;
    }
    do {
      iVar6 = ascii_isdigit(*(undefined1 *)(lVar10 + lVar2));
      if (iVar6 == 0) break;
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (longlong)uVar16);
    if (uVar14 == uVar13) {
      return 0;
    }
    if (uVar13 == uVar4) {
      return 0;
    }
  }
  cVar1 = *(char *)((int)uVar13 + lVar2);
  if (cVar1 == 'Z') {
    uVar14 = uVar13 + 1;
    local_98 = uVar4;
  }
  else {
    if (local_94 != 0) {
      return 0;
    }
    if ((cVar1 - 0x2bU & 0xfd) != 0) {
      return 0;
    }
    iVar6 = -1;
    if (cVar1 == '-') {
      iVar6 = 1;
    }
    uVar14 = uVar13 + 1;
    if (uVar13 + 5 != uVar4) {
      return 0;
    }
    uVar9 = (ulonglong)local_90;
    pcVar11 = (char *)((int)uVar14 + lVar2);
    iVar5 = local_90 + 2;
    uVar4 = local_90;
    do {
      iVar7 = ascii_isdigit(*pcVar11);
      if (iVar7 == 0) {
        return 0;
      }
      cVar1 = *pcVar11;
      iVar7 = ascii_isdigit(pcVar11[1]);
      if (iVar7 == 0) {
        return 0;
      }
      iVar7 = (int)pcVar11[1] + cVar1 * 10 + -0x210;
      uVar8 = uVar9 + 1;
      if (local_80[1] != 0x17) {
        uVar8 = uVar9;
      }
      if (iVar7 < (int)(&DAT_1534b3470)[uVar8]) {
        return 0;
      }
      if ((int)(&DAT_1534b3498)[uVar8] < iVar7) {
        return 0;
      }
      if (local_78 != (undefined8 *)0x0) {
        if (uVar9 == local_90) {
          uVar18 = (ulonglong)(uint)(iVar7 * 0xe10);
        }
        else if (uVar4 == local_90 + 1) {
          uVar18 = (ulonglong)(uint)((int)uVar18 + iVar7 * 0x3c);
        }
      }
      uVar14 = uVar14 + 2;
      pcVar11 = pcVar11 + 2;
      uVar4 = uVar4 + 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar4 < iVar5);
    if (((int)uVar18 != 0) &&
       (iVar6 = OPENSSL_gmtime_adj(&local_70,0,(int)uVar18 * iVar6), iVar6 == 0)) {
      return 0;
    }
  }
  if (uVar14 != local_98) {
    return 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    *local_78 = local_70;
    local_78[1] = uStack_68;
    local_78[2] = local_60;
    local_78[3] = uStack_58;
    *(undefined4 *)(local_78 + 4) = local_50;
  }
  return 1;
}

// d2i_ASN1_TIME @ 14f707920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_ASN1_TIME(void)

{
  ASN1_item_d2i();
  return;
}

// FUN_14f707950 @ 14f707950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707950(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0x14) + 0x76c;
  iVar5 = iVar2 + -1 + *(int *)(&DAT_1534b3440 + (longlong)iVar1 * 4);
  *(int *)(param_1 + 0x1c) = iVar5;
  if (iVar1 < 2) {
    iVar6 = *(int *)(param_1 + 0x14) + 0x76b;
    iVar4 = 0xe;
  }
  else {
    iVar3 = FUN_14f707aa0(iVar6);
    iVar4 = 2;
    *(int *)(param_1 + 0x1c) = iVar3 + iVar5;
  }
  iVar5 = iVar6 / 100;
  iVar6 = iVar6 % 100;
  *(int *)(param_1 + 0x18) =
       (((iVar4 + iVar1) * 0xd) / 5 + ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + 6 +
        iVar2 + iVar5 * 5 + ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) + iVar6) % 7;
  return;
}

// i2d_ASN1_TIME @ 14f707a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_TIME(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b3410);
  return;
}

// FUN_14f707aa0 @ 14f707aa0

undefined8 FUN_14f707aa0(uint param_1)

{
  if (param_1 == ((int)param_1 / 400) * 400) {
    return 1;
  }
  if (param_1 != ((int)param_1 / 100) * 100) {
    param_1 = param_1 & 0x80000003;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xfffffffc) + 1;
    }
    if (param_1 == 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f707b10 @ 14f707b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f707b10(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f707b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

