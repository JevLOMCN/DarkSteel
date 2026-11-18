// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// CMS_si_check_attributes @ 14f7c4e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_si_check_attributes(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  
  iVar4 = X509at_get_attr_count(*(undefined8 *)(param_1 + 0x18));
  iVar5 = X509at_get_attr_count(*(undefined8 *)(param_1 + 0x30));
  puVar9 = &DAT_1534eaecc;
  while( true ) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = puVar9[-1];
    uVar2 = *puVar9;
    iVar6 = X509at_get_attr_by_NID(uVar3,uVar1,0xffffffff);
    if ((iVar6 < 0) || (lVar8 = X509at_get_attr(uVar3,iVar6), lVar8 == 0)) {
      if ((0 < iVar4) && (((byte)uVar2 & 0x11) == 0x11)) break;
    }
    else {
      iVar7 = X509_ATTRIBUTE_count(lVar8);
      if ((((uVar2 & 1) == 0) ||
          (((((uVar2 & 0x20) != 0 && (iVar6 = X509at_get_attr_by_NID(uVar3,uVar1,iVar6), -1 < iVar6)
             ) && (lVar8 = X509at_get_attr(uVar3,iVar6), lVar8 != 0)) ||
           (((uVar2 & 0x40) != 0 && (iVar7 != 1)))))) || (iVar7 == 0)) break;
    }
    iVar6 = FUN_14f7c53b0(uVar1,uVar2,2,*(undefined8 *)(param_1 + 0x30),0 < iVar5);
    if (iVar6 == 0) break;
    puVar9 = puVar9 + 2;
    if (0x1534eaf03 < (longlong)puVar9) {
      return 1;
    }
  }
  ERR_put_error(0x2e,0xb7,0xa1,"crypto\\cms\\cms_att.c",0x117);
  return 0;
}

// CMS_signed_add1_attr @ 14f7c4fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_signed_add1_attr(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr(param_1 + 0x18);
  return lVar1 != 0;
}

// CMS_signed_add1_attr_by_NID @ 14f7c5010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_signed_add1_attr_by_NID(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x18);
  return lVar1 != 0;
}

// CMS_signed_add1_attr_by_OBJ @ 14f7c5050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_signed_add1_attr_by_OBJ(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_OBJ(param_1 + 0x18);
  return lVar1 != 0;
}

// CMS_signed_add1_attr_by_txt @ 14f7c5090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_signed_add1_attr_by_txt(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_txt(param_1 + 0x18);
  return lVar1 != 0;
}

// CMS_signed_delete_attr @ 14f7c50d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_delete_attr(longlong param_1)

{
  X509at_delete_attr(*(undefined8 *)(param_1 + 0x18));
  return;
}

// CMS_signed_get0_data_by_OBJ @ 14f7c50f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_get0_data_by_OBJ(longlong param_1)

{
  X509at_get0_data_by_OBJ(*(undefined8 *)(param_1 + 0x18));
  return;
}

// CMS_signed_get_attr @ 14f7c5110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_get_attr(longlong param_1)

{
  X509at_get_attr(*(undefined8 *)(param_1 + 0x18));
  return;
}

// CMS_signed_get_attr_by_NID @ 14f7c5130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_get_attr_by_NID(longlong param_1)

{
  X509at_get_attr_by_NID(*(undefined8 *)(param_1 + 0x18));
  return;
}

// CMS_signed_get_attr_by_OBJ @ 14f7c5150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_get_attr_by_OBJ(longlong param_1)

{
  X509at_get_attr_by_OBJ(*(undefined8 *)(param_1 + 0x18));
  return;
}

// CMS_signed_get_attr_count @ 14f7c5170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_get_attr_count(longlong param_1)

{
  X509at_get_attr_count(*(undefined8 *)(param_1 + 0x18));
  return;
}

// CMS_unsigned_add1_attr @ 14f7c5190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_unsigned_add1_attr(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr(param_1 + 0x30);
  return lVar1 != 0;
}

// CMS_unsigned_add1_attr_by_NID @ 14f7c51c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_unsigned_add1_attr_by_NID(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x30);
  return lVar1 != 0;
}

// CMS_unsigned_add1_attr_by_OBJ @ 14f7c5200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_unsigned_add1_attr_by_OBJ(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_OBJ(param_1 + 0x30);
  return lVar1 != 0;
}

// CMS_unsigned_add1_attr_by_txt @ 14f7c5240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_unsigned_add1_attr_by_txt(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_txt(param_1 + 0x30);
  return lVar1 != 0;
}

// CMS_unsigned_delete_attr @ 14f7c5280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_unsigned_delete_attr(longlong param_1)

{
  X509at_delete_attr(*(undefined8 *)(param_1 + 0x30));
  return;
}

// CMS_unsigned_get0_data_by_OBJ @ 14f7c52a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_unsigned_get0_data_by_OBJ(longlong param_1)

{
  X509at_get0_data_by_OBJ(*(undefined8 *)(param_1 + 0x30));
  return;
}

// CMS_unsigned_get_attr @ 14f7c52c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_unsigned_get_attr(longlong param_1)

{
  X509at_get_attr(*(undefined8 *)(param_1 + 0x30));
  return;
}

// CMS_unsigned_get_attr_by_NID @ 14f7c52e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_unsigned_get_attr_by_NID(longlong param_1)

{
  X509at_get_attr_by_NID(*(undefined8 *)(param_1 + 0x30));
  return;
}

// CMS_unsigned_get_attr_by_OBJ @ 14f7c5300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_unsigned_get_attr_by_OBJ(longlong param_1)

{
  X509at_get_attr_by_OBJ(*(undefined8 *)(param_1 + 0x30));
  return;
}

// CMS_unsigned_get_attr_count @ 14f7c5320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_unsigned_get_attr_count(longlong param_1)

{
  X509at_get_attr_count(*(undefined8 *)(param_1 + 0x30));
  return;
}

// FUN_14f7c5340 @ 14f7c5340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c5340(undefined4 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = X509at_get_attr_by_NID(param_2,param_1,*param_3);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = X509at_get_attr(param_2,iVar1);
  *param_3 = iVar1;
  return uVar2;
}

// FUN_14f7c53b0 @ 14f7c53b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7c53b0(undefined4 param_1,uint param_2,uint param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = X509at_get_attr_by_NID(param_4,param_1,0xffffffff);
  if ((iVar1 < 0) || (lVar3 = X509at_get_attr(param_4,iVar1), lVar3 == 0)) {
    if (param_5 == 0) {
      return 1;
    }
    if ((param_2 & 0x10) == 0) {
      return 1;
    }
    if ((param_3 & param_2) == 0) {
      return 1;
    }
  }
  else {
    iVar2 = X509_ATTRIBUTE_count(lVar3);
    if ((((param_3 & param_2) != 0) &&
        ((((param_2 & 0x20) == 0 ||
          (iVar1 = X509at_get_attr_by_NID(param_4,param_1,iVar1), iVar1 < 0)) ||
         (lVar3 = X509at_get_attr(param_4,iVar1), lVar3 == 0)))) &&
       ((((param_2 & 0x40) == 0 || (iVar2 == 1)) && (iVar2 != 0)))) {
      return 1;
    }
  }
  return 0;
}

