// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// PKCS7_add0_attrib_signing_time @ 14f7c1130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add0_attrib_signing_time(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f7c113c;
  if (param_2 == 0) {
    param_2 = X509_gmtime_adj(0);
    if (param_2 == 0) {
      ERR_put_error(0x21,0x87,0x41,"crypto\\pkcs7\\pk7_attr.c",100,uVar1);
      return 0;
    }
  }
  uVar1 = PKCS7_add_signed_attribute(param_1,0x34,0x17,param_2);
  return uVar1;
}

// PKCS7_add1_attrib_digest @ 14f7c11a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add1_attrib_digest(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ASN1_OCTET_STRING_new();
  if (lVar2 != 0) {
    iVar1 = ASN1_STRING_set(lVar2,param_2,param_3);
    if ((iVar1 != 0) && (iVar1 = PKCS7_add_signed_attribute(param_1,0x33,4,lVar2), iVar1 != 0)) {
      return 1;
    }
    ASN1_OCTET_STRING_free(lVar2);
  }
  return 0;
}

// PKCS7_add_attrib_content_type @ 14f7c1230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add_attrib_content_type(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = PKCS7_get_signed_attribute(param_1,0x32);
  if (lVar1 != 0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = OBJ_nid2obj(0x15);
  }
  uVar2 = PKCS7_add_signed_attribute(param_1,0x32,6,param_2);
  return uVar2;
}

// PKCS7_add_attrib_smimecap @ 14f7c12a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add_attrib_smimecap(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7c12b5;
  puVar2 = (undefined4 *)ASN1_STRING_new();
  if (puVar2 == (undefined4 *)0x0) {
    ERR_put_error(0x21,0x76,0x41,"crypto\\pkcs7\\pk7_attr.c",0x1a,uVar3);
    return 0;
  }
  uVar3 = X509_ALGORS_it();
  uVar1 = ASN1_item_i2d(param_2,puVar2 + 2,uVar3);
  *puVar2 = uVar1;
  uVar3 = PKCS7_add_signed_attribute(param_1,0xa7,0x10,puVar2);
  return uVar3;
}

// PKCS7_get_smimecap @ 14f7c1340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_get_smimecap(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  piVar1 = (int *)PKCS7_get_signed_attribute(param_1,0xa7);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x10)) {
    local_res10[0] = *(undefined8 *)(*(longlong *)(piVar1 + 2) + 8);
    uVar2 = X509_ALGORS_it();
    uVar2 = ASN1_item_d2i(0,local_res10,**(undefined4 **)(piVar1 + 2),uVar2);
    return uVar2;
  }
  return 0;
}

// PKCS7_simple_smimecap @ 14f7c13b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_simple_smimecap(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f7c13d0;
  lVar4 = 0;
  puVar2 = (undefined8 *)X509_ALGOR_new();
  if (puVar2 == (undefined8 *)0x0) {
    ERR_put_error(0x21,0x77,0x41,"crypto\\pkcs7\\pk7_attr.c",0x38,uVar5);
    return 0;
  }
  ASN1_OBJECT_free(*puVar2);
  uVar5 = OBJ_nid2obj(param_2);
  *puVar2 = uVar5;
  if (0 < param_3) {
    lVar3 = ASN1_TYPE_new();
    puVar2[1] = lVar3;
    if (((lVar3 == 0) || (lVar4 = ASN1_INTEGER_new(), lVar4 == 0)) ||
       (iVar1 = ASN1_INTEGER_set(lVar4,param_3), iVar1 == 0)) goto LAB_14f7c1471;
    *(longlong *)(puVar2[1] + 8) = lVar4;
    *(undefined4 *)puVar2[1] = 2;
  }
  lVar4 = 0;
  iVar1 = OPENSSL_sk_push(param_1,puVar2);
  if (iVar1 != 0) {
    return 1;
  }
LAB_14f7c1471:
  ERR_put_error(0x21,0x77,0x41,"crypto\\pkcs7\\pk7_attr.c",0x50);
  ASN1_INTEGER_free(lVar4);
  X509_ALGOR_free(puVar2);
  return 0;
}

// FUN_14f7c14d0 @ 14f7c14d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c14d0(void)

{
  OPENSSL_sk_push();
  return;
}

