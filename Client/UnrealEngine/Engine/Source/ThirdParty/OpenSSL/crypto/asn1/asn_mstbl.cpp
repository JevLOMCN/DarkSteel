// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// ASN1_add_stable_module @ 14f720800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_add_stable_module(void)

{
  CONF_module_add("stbl_section",FUN_14f720bc0,FUN_14f720ba0);
  return;
}

// FUN_14f720840 @ 14f720840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f720840(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int local_res18 [2];
  ulong local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar16;
  char *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f72085f;
  uVar13 = 0;
  uVar4 = 0xffffffff;
  uVar12 = 0;
  local_res18[0] = 0;
  local_res20 = 0xffffffff;
  iVar2 = OBJ_sn2nid(param_2);
  if (iVar2 == 0) {
    iVar2 = OBJ_ln2nid(param_2);
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    uVar5 = uVar13;
    uVar6 = uVar13;
    if (iVar2 != 0) goto LAB_14f7208a5;
  }
  else {
LAB_14f7208a5:
    uVar5 = X509V3_parse_list(param_1);
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    uVar6 = 0;
    if (uVar5 != 0) {
      iVar3 = OPENSSL_sk_num(uVar5);
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      uVar10 = uVar13;
      uVar15 = uVar13;
      if (0 < iVar3) {
LAB_14f7208d0:
        uVar6 = OPENSSL_sk_value(uVar5,uVar15);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        lVar1 = *(longlong *)(uVar6 + 8);
        uVar8 = uVar13;
        do {
          uVar7 = uVar8 + 1;
          uVar9 = uVar13;
          if (*(char *)(lVar1 + uVar8) != (&s_min)[uVar8]) goto LAB_14f720990;
          uVar8 = uVar7;
        } while (uVar7 != 4);
        uVar4 = strtoul(*(char **)(uVar6 + 0x10),&local_48,0);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        if (*local_48 == '\0') goto LAB_14f720a9e;
        goto LAB_14f720933;
      }
LAB_14f720ab2:
      uVar6 = ASN1_STRING_TABLE_add(iVar2,uVar4,local_res20,local_res18[0],CONCAT44(uVar16,uVar12));
      uVar13 = uVar6 & 0xffffffff;
      if ((int)uVar6 == 0) {
        ERR_put_error(0xd,0xde,0x41,"crypto\\asn1\\asn_mstbl.c",0x6d);
      }
      goto LAB_14f720b0d;
    }
  }
LAB_14f720933:
  ERR_put_error(0xd,0xde,0xda,"crypto\\asn1\\asn_mstbl.c",CONCAT44(uVar16,99));
  if (uVar6 == 0) {
    pcVar11 = "name=";
  }
  else {
    param_1 = *(undefined8 *)(uVar6 + 0x10);
    pcVar11 = "field=";
    param_2 = *(undefined8 *)(uVar6 + 8);
  }
  ERR_add_error_data(4,pcVar11,param_2,", value=",param_1);
LAB_14f720b0d:
  OPENSSL_sk_pop_free(uVar5,X509V3_conf_free);
  return uVar13;
  while (uVar9 = uVar7, uVar7 != 4) {
LAB_14f720990:
    uVar7 = uVar9 + 1;
    uVar8 = uVar13;
    if (*(char *)(lVar1 + uVar9) != (&s_max)[uVar9]) goto LAB_14f7209e0;
  }
  local_res20 = strtoul(*(char **)(uVar6 + 0x10),&local_48,0);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (*local_48 != '\0') goto LAB_14f720933;
LAB_14f720a9e:
  uVar12 = (undefined4)uVar10;
  uVar14 = (int)uVar15 + 1;
  iVar3 = OPENSSL_sk_num(uVar5);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar15 = (ulonglong)uVar14;
  if (iVar3 <= (int)uVar14) goto LAB_14f720ab2;
  goto LAB_14f7208d0;
  while (uVar8 = uVar7, uVar7 != 5) {
LAB_14f7209e0:
    uVar7 = uVar8 + 1;
    uVar9 = uVar13;
    if (*(char *)(lVar1 + uVar8) != (&s_mask)[uVar8]) goto LAB_14f720a30;
  }
  iVar3 = ASN1_str2mask(*(undefined8 *)(uVar6 + 0x10),local_res18);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((iVar3 == 0) || (local_res18[0] == 0)) goto LAB_14f720933;
  goto LAB_14f720a9e;
  while (uVar9 = uVar10, uVar10 != 6) {
LAB_14f720a30:
    uVar10 = uVar9 + 1;
    if (*(char *)(lVar1 + uVar9) != "flags"[uVar9]) goto LAB_14f720933;
  }
  uVar10 = uVar13;
  do {
    uVar8 = uVar10;
    uVar10 = uVar13;
    if (*(char *)(*(longlong *)(uVar6 + 0x10) + uVar8) != "nomask"[uVar8]) goto LAB_14f720a83;
    uVar10 = uVar8 + 1;
  } while (uVar8 + 1 != 7);
  uVar10 = (ulonglong)((int)uVar8 - 4);
  goto LAB_14f720a9e;
  while (uVar10 = uVar8 + 1, uVar8 + 1 != 5) {
LAB_14f720a83:
    uVar8 = uVar10;
    if (*(char *)(*(longlong *)(uVar6 + 0x10) + uVar8) != (&s_none)[uVar8]) goto LAB_14f720933;
  }
  uVar10 = (ulonglong)((int)uVar8 - 3);
  goto LAB_14f720a9e;
}

// FUN_14f720b40 @ 14f720b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f720b40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f720b60 @ 14f720b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f720b60(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f720b80 @ 14f720b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f720b80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f720ba0 @ 14f720ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f720ba0(void)

{
  ASN1_STRING_TABLE_cleanup();
  return;
}

// FUN_14f720bc0 @ 14f720bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f720bc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int local_res18 [2];
  int local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar16;
  char *local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar5 = CONF_imodule_get_value();
  lVar6 = NCONF_get_section(param_2,uVar5);
  local_40 = lVar6;
  if (lVar6 == 0) {
    ERR_put_error(0xd,0xdf,0xac,"crypto\\asn1\\asn_mstbl.c",0x1d);
    return 0;
  }
  iVar15 = 0;
  iVar1 = OPENSSL_sk_num(lVar6);
  if (0 < iVar1) {
    do {
      uVar12 = 0;
      lVar6 = OPENSSL_sk_value(lVar6,iVar15);
      uVar3 = 0xffffffff;
      uVar14 = 0;
      local_res20 = 0;
      uVar4 = 0xffffffff;
      local_res18[0] = 0;
      uVar5 = *(undefined8 *)(lVar6 + 8);
      local_48 = *(undefined8 *)(lVar6 + 0x10);
      iVar1 = OBJ_sn2nid(uVar5);
      uVar8 = uVar12;
      if (((iVar1 == 0) && (iVar1 = OBJ_ln2nid(uVar5), uVar7 = uVar12, iVar1 == 0)) ||
         (uVar7 = X509V3_parse_list(local_48), uVar7 == 0)) {
LAB_14f720d2c:
        ERR_put_error(0xd,0xde,0xda,"crypto\\asn1\\asn_mstbl.c",99);
        if (uVar8 == 0) {
          pcVar11 = "name=";
          in_stack_ffffffffffffff98 = local_48;
        }
        else {
          pcVar11 = "field=";
          uVar5 = *(undefined8 *)(uVar8 + 8);
          in_stack_ffffffffffffff98 = *(undefined8 *)(uVar8 + 0x10);
        }
        ERR_add_error_data(4,pcVar11,uVar5,", value=",in_stack_ffffffffffffff98);
      }
      else {
        iVar13 = 0;
        iVar2 = OPENSSL_sk_num(uVar7);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        if (0 < iVar2) {
LAB_14f720cd2:
          uVar8 = OPENSSL_sk_value(uVar7);
          lVar6 = *(longlong *)(uVar8 + 8);
          lVar9 = 0;
          do {
            lVar10 = lVar9 + 1;
            if (*(char *)(lVar6 + lVar9) != (&s_min)[lVar9]) {
              lVar9 = 0;
              goto LAB_14f720d80;
            }
            lVar9 = lVar10;
          } while (lVar10 != 4);
          uVar3 = strtoul(*(char **)(uVar8 + 0x10),&local_50,0);
          if (*local_50 == '\0') goto LAB_14f720e8d;
          goto LAB_14f720d2c;
        }
LAB_14f720e9f:
        in_stack_ffffffffffffff98 = CONCAT44(uVar16,uVar14);
        local_res20 = ASN1_STRING_TABLE_add
                                (iVar1,uVar3,uVar4,local_res18[0],in_stack_ffffffffffffff98);
        if (local_res20 == 0) {
          in_stack_ffffffffffffff98 =
               CONCAT44((int)((ulonglong)in_stack_ffffffffffffff98 >> 0x20),0x6d);
          ERR_put_error(0xd,0xde,0x41,"crypto\\asn1\\asn_mstbl.c",in_stack_ffffffffffffff98);
        }
      }
      OPENSSL_sk_pop_free(uVar7,X509V3_conf_free);
      lVar6 = local_40;
      if (local_res20 == 0) {
        ERR_put_error(0xd,0xdf,0xdb,"crypto\\asn1\\asn_mstbl.c",0x23);
        return 0;
      }
      iVar15 = iVar15 + 1;
      iVar1 = OPENSSL_sk_num(local_40);
    } while (iVar15 < iVar1);
  }
  return 1;
  while (lVar9 = lVar10, lVar10 != 4) {
LAB_14f720d80:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != (&s_max)[lVar9]) {
      lVar9 = 0;
      goto LAB_14f720dd0;
    }
  }
  uVar4 = strtoul(*(char **)(uVar8 + 0x10),&local_50,0);
  if (*local_50 != '\0') goto LAB_14f720d2c;
LAB_14f720e8d:
  uVar14 = (undefined4)uVar12;
  iVar13 = iVar13 + 1;
  iVar2 = OPENSSL_sk_num(uVar7);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (iVar2 <= iVar13) goto LAB_14f720e9f;
  goto LAB_14f720cd2;
  while (lVar9 = lVar10, lVar10 != 5) {
LAB_14f720dd0:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != (&s_mask)[lVar9]) {
      lVar9 = 0;
      goto LAB_14f720e20;
    }
  }
  iVar2 = ASN1_str2mask(*(undefined8 *)(uVar8 + 0x10),local_res18);
  if ((iVar2 == 0) || (local_res18[0] == 0)) goto LAB_14f720d2c;
  goto LAB_14f720e8d;
  while (lVar9 = lVar10, lVar10 != 6) {
LAB_14f720e20:
    lVar10 = lVar9 + 1;
    if (*(char *)(lVar6 + lVar9) != "flags"[lVar9]) goto LAB_14f720d2c;
  }
  lVar6 = 0;
  do {
    lVar9 = lVar6;
    if (*(char *)(*(longlong *)(uVar8 + 0x10) + lVar9) != "nomask"[lVar9]) {
      lVar6 = 0;
      goto LAB_14f720e72;
    }
    lVar6 = lVar9 + 1;
  } while (lVar9 + 1 != 7);
  uVar12 = (ulonglong)((int)lVar9 - 4);
  goto LAB_14f720e8d;
  while (lVar6 = lVar9 + 1, lVar9 + 1 != 5) {
LAB_14f720e72:
    lVar9 = lVar6;
    if (*(char *)(*(longlong *)(uVar8 + 0x10) + lVar9) != (&s_none)[lVar9]) goto LAB_14f720d2c;
  }
  uVar12 = (ulonglong)((int)lVar9 - 3);
  goto LAB_14f720e8d;
}

