// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 28

// X509_ATTRIBUTE_count @ 14f7722a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_ATTRIBUTE_count(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  return uVar1;
}

// X509_ATTRIBUTE_create_by_NID @ 14f7722d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_ATTRIBUTE_create_by_NID
                   (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7722ea;
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x88,0x6d,"crypto\\x509\\x509_att.c",0xb1);
    lVar2 = 0;
  }
  else {
    lVar2 = X509_ATTRIBUTE_create_by_OBJ(param_1,lVar1,param_3,param_4,param_5,uVar3);
    if (lVar2 == 0) {
      ASN1_OBJECT_free(lVar1);
    }
  }
  return lVar2;
}

// X509_ATTRIBUTE_create_by_OBJ @ 14f772370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
X509_ATTRIBUTE_create_by_OBJ
          (longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f772390;
  if (((param_1 == (longlong *)0x0) || (plVar2 = (longlong *)*param_1, plVar2 == (longlong *)0x0))
     && (plVar2 = (longlong *)X509_ATTRIBUTE_new(), plVar2 == (longlong *)0x0)) {
    ERR_put_error(0xb,0x89,0x41,"crypto\\x509\\x509_att.c",0xc4,uVar4);
  }
  else {
    if (param_2 != 0) {
      ASN1_OBJECT_free(*plVar2);
      lVar3 = OBJ_dup(param_2);
      *plVar2 = lVar3;
      if ((lVar3 != 0) &&
         (iVar1 = X509_ATTRIBUTE_set1_data(plVar2,param_3,param_4,param_5), iVar1 != 0)) {
        if (param_1 == (longlong *)0x0) {
          return plVar2;
        }
        if (*param_1 != 0) {
          return plVar2;
        }
        *param_1 = (longlong)plVar2;
        return plVar2;
      }
    }
    if ((param_1 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
      X509_ATTRIBUTE_free(plVar2);
    }
  }
  return (longlong *)0x0;
}

// X509_ATTRIBUTE_create_by_txt @ 14f772460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_ATTRIBUTE_create_by_txt
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f772480;
  lVar1 = OBJ_txt2obj(param_2,0);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x8c,0x77,"crypto\\x509\\x509_att.c",0xe3);
    ERR_add_error_data(2,"name=",param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = X509_ATTRIBUTE_create_by_OBJ(param_1,lVar1,param_3,param_4,param_5,uVar2);
    ASN1_OBJECT_free(lVar1);
  }
  return uVar2;
}

// X509_ATTRIBUTE_get0_data @ 14f772520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_ATTRIBUTE_get0_data(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f772530;
  if (param_1 != 0) {
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      if ((param_3 - 1U & 0xfffffffb) != 0) {
        iVar1 = ASN1_TYPE_get(lVar2);
        if (param_3 == iVar1) {
          return *(undefined8 *)(lVar2 + 8);
        }
      }
      ERR_put_error(0xb,0x8b,0x7a,"crypto\\x509\\x509_att.c",0x140,uVar3);
    }
  }
  return 0;
}

// X509_ATTRIBUTE_get0_object @ 14f7725b0

undefined8 X509_ATTRIBUTE_get0_object(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}

// X509_ATTRIBUTE_get0_type @ 14f7725d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_ATTRIBUTE_get0_type(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8));
  return uVar1;
}

// X509_ATTRIBUTE_set1_data @ 14f772600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_ATTRIBUTE_set1_data(undefined8 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f77261c;
  lVar5 = 0;
  lVar3 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((param_2 & 0x1000) == 0) {
    uVar4 = 0;
    if ((param_4 != -1) &&
       ((lVar3 = ASN1_STRING_type_new(param_2), lVar3 == 0 ||
        (iVar2 = ASN1_STRING_set(lVar3,param_3,param_4), uVar4 = param_2, iVar2 == 0))))
    goto LAB_14f772721;
  }
  else {
    uVar1 = OBJ_obj2nid(*param_1);
    lVar3 = ASN1_STRING_set_by_NID(0,param_3,param_4,param_2,uVar1);
    if (lVar3 == 0) {
      ERR_put_error(0xb,0x8a,0xd,"crypto\\x509\\x509_att.c",0x101,uVar6);
      return 0;
    }
    uVar4 = *(uint *)(lVar3 + 4);
  }
  if (param_2 == 0) {
    ASN1_STRING_free(lVar3);
    return 1;
  }
  lVar5 = ASN1_TYPE_new();
  if (lVar5 != 0) {
    if ((param_4 == -1) && ((param_2 & 0x1000) == 0)) {
      iVar2 = ASN1_TYPE_set1(lVar5,param_2,param_3);
      if (iVar2 == 0) goto LAB_14f772721;
    }
    else {
      ASN1_TYPE_set(lVar5,uVar4,lVar3);
      lVar3 = 0;
    }
    iVar2 = OPENSSL_sk_push(param_1[1],lVar5);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_14f772721:
  ERR_put_error(0xb,0x8a,0x41,"crypto\\x509\\x509_att.c",0x122);
  ASN1_TYPE_free(lVar5);
  ASN1_STRING_free(lVar3);
  return 0;
}

// X509_ATTRIBUTE_set1_object @ 14f772780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_ATTRIBUTE_set1_object(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    ASN1_OBJECT_free(*param_1);
    lVar1 = OBJ_dup(param_2);
    *param_1 = lVar1;
    return lVar1 != 0;
  }
  return false;
}

// X509at_add1_attr @ 14f7727e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509at_add1_attr(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7727fa;
  lVar3 = 0;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0x50;
    uVar4 = 0x43;
    lVar2 = lVar3;
  }
  else {
    lVar2 = *param_1;
    if ((lVar2 != 0) || (lVar2 = OPENSSL_sk_new_null(), lVar2 != 0)) {
      lVar3 = X509_ATTRIBUTE_dup(param_2);
      if (lVar3 == 0) goto LAB_14f77282a;
      iVar1 = OPENSSL_sk_push(lVar2,lVar3);
      if (iVar1 != 0) {
        if (*param_1 != 0) {
          return lVar2;
        }
        *param_1 = lVar2;
        return lVar2;
      }
    }
    uVar5 = 0x62;
    uVar4 = 0x41;
  }
  ERR_put_error(0xb,0x87,uVar4,"crypto\\x509\\x509_att.c",uVar5,uVar6);
LAB_14f77282a:
  X509_ATTRIBUTE_free(lVar3);
  OPENSSL_sk_free(lVar2);
  return 0;
}

// X509at_add1_attr_by_NID @ 14f7728c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509at_add1_attr_by_NID
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7728d0;
  lVar1 = X509_ATTRIBUTE_create_by_NID(0);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = X509at_add1_attr(param_1,lVar1,param_3,param_4,param_5,uVar2);
  X509_ATTRIBUTE_free(lVar1);
  return uVar2;
}

// X509at_add1_attr_by_OBJ @ 14f772930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509at_add1_attr_by_OBJ
          (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f772950;
  plVar2 = (longlong *)X509_ATTRIBUTE_new();
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0xb,0x89,0x41,"crypto\\x509\\x509_att.c",0xc4,uVar4);
  }
  else {
    if (param_2 != 0) {
      ASN1_OBJECT_free(*plVar2);
      lVar3 = OBJ_dup(param_2);
      *plVar2 = lVar3;
      if ((lVar3 != 0) &&
         (iVar1 = X509_ATTRIBUTE_set1_data(plVar2,param_3,param_4,param_5), iVar1 != 0)) {
        uVar4 = X509at_add1_attr(param_1,plVar2);
        X509_ATTRIBUTE_free(plVar2);
        return uVar4;
      }
    }
    X509_ATTRIBUTE_free(plVar2);
  }
  return 0;
}

// X509at_add1_attr_by_txt @ 14f772a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509at_add1_attr_by_txt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f772a20;
  lVar1 = X509_ATTRIBUTE_create_by_txt(0);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = X509at_add1_attr(param_1,lVar1,param_3,param_4,param_5,uVar2);
  X509_ATTRIBUTE_free(lVar1);
  return uVar2;
}

// X509at_delete_attr @ 14f772a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509at_delete_attr(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_delete(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// X509at_get0_data_by_OBJ @ 14f772ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509at_get0_data_by_OBJ(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = X509at_get_attr_by_OBJ();
  if ((iVar1 != -1) &&
     ((-2 < param_3 || (iVar2 = X509at_get_attr_by_OBJ(param_1,param_2,iVar1), iVar2 == -1)))) {
    if ((param_1 == 0) || ((iVar2 = OPENSSL_sk_num(param_1), iVar2 <= iVar1 || (iVar1 < 0)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = OPENSSL_sk_value(param_1,iVar1);
    }
    if ((-3 < param_3) ||
       ((lVar3 != 0 && (iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar3 + 8)), iVar1 == 1)))) {
      uVar4 = X509_ATTRIBUTE_get0_data(lVar3,0,param_4,0);
      return uVar4;
    }
  }
  return 0;
}

// X509at_get_attr @ 14f772bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509at_get_attr(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_value(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// X509at_get_attr_by_NID @ 14f772c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509at_get_attr_by_NID(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = X509at_get_attr_by_OBJ(param_1,lVar1,param_3);
  return uVar2;
}

// X509at_get_attr_by_OBJ @ 14f772c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509at_get_attr_by_OBJ(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar4 = 0;
  if (-1 < param_3 + 1) {
    iVar4 = param_3 + 1;
  }
  iVar1 = OPENSSL_sk_num();
  while( true ) {
    if (iVar1 <= iVar4) {
      return -1;
    }
    puVar3 = (undefined8 *)OPENSSL_sk_value(param_1,iVar4);
    iVar2 = OBJ_cmp(*puVar3,param_2);
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

// X509at_get_attr_count @ 14f772d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509at_get_attr_count(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f772d30 @ 14f772d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772d30(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f772d50 @ 14f772d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772d50(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f772d70 @ 14f772d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772d70(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f772d90 @ 14f772d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772d90(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f772db0 @ 14f772db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772db0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f772dd0 @ 14f772dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772dd0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f772df0 @ 14f772df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772df0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f772e10 @ 14f772e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772e10(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f772e30 @ 14f772e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f772e30(void)

{
  OPENSSL_sk_value();
  return;
}

