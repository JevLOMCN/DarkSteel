// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 15

// PKCS12_SAFEBAG_create0_p8inf @ 14f7ca2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * PKCS12_SAFEBAG_create0_p8inf(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7ca300;
  puVar1 = (undefined8 *)PKCS12_SAFEBAG_new();
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x23,0x70,0x41,"crypto\\pkcs12\\p12_sbag.c",0x71,uVar2);
    return (undefined8 *)0x0;
  }
  uVar2 = OBJ_nid2obj(0x96);
  *puVar1 = uVar2;
  puVar1[1] = param_1;
  return puVar1;
}

// PKCS12_SAFEBAG_create0_pkcs8 @ 14f7ca370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * PKCS12_SAFEBAG_create0_pkcs8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7ca380;
  puVar1 = (undefined8 *)PKCS12_SAFEBAG_new();
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x23,0x71,0x41,"crypto\\pkcs12\\p12_sbag.c",0x81,uVar2);
    return (undefined8 *)0x0;
  }
  uVar2 = OBJ_nid2obj(0x97);
  *puVar1 = uVar2;
  puVar1[1] = param_1;
  return puVar1;
}

// PKCS12_SAFEBAG_create_cert @ 14f7ca3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_create_cert(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  PKCS12_item_pack_safebag(param_1,uVar1,0x9e);
  return;
}

// PKCS12_SAFEBAG_create_crl @ 14f7ca430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_create_crl(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  PKCS12_item_pack_safebag(param_1,uVar1,0xa0);
  return;
}

// PKCS12_SAFEBAG_create_pkcs8_encrypt @ 14f7ca470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_SAFEBAG_create_pkcs8_encrypt
                   (undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = OBJ_nid2sn();
  lVar2 = EVP_get_cipherbyname(uVar1);
  if (lVar2 != 0) {
    param_1 = 0xffffffff;
  }
  lVar3 = PKCS8_encrypt(param_1,lVar2,param_2,param_3,param_4,param_5,param_6,param_7);
  lVar2 = 0;
  if ((lVar3 != 0) && (lVar2 = PKCS12_SAFEBAG_create0_pkcs8(lVar3), lVar2 == 0)) {
    X509_SIG_free(lVar3);
  }
  return lVar2;
}

// PKCS12_SAFEBAG_get0_attr @ 14f7ca520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_get0_attr(longlong param_1)

{
  PKCS12_get_attr_gen(*(undefined8 *)(param_1 + 0x10));
  return;
}

// PKCS12_SAFEBAG_get0_p8inf @ 14f7ca540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get0_p8inf(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x96) {
    return 0;
  }
  return param_1[1];
}

// PKCS12_SAFEBAG_get0_pkcs8 @ 14f7ca580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get0_pkcs8(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x97) {
    return 0;
  }
  return param_1[1];
}

// PKCS12_SAFEBAG_get0_safes @ 14f7ca5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get0_safes(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x9b) {
    return 0;
  }
  return param_1[1];
}

// PKCS12_SAFEBAG_get1_cert @ 14f7ca610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get1_cert(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 == 0x98) {
    iVar1 = OBJ_obj2nid(*(undefined8 *)param_1[1]);
    if (iVar1 == 0x9e) {
      uVar2 = X509_it();
      uVar2 = ASN1_item_unpack(*(undefined8 *)(param_1[1] + 8),uVar2);
      return uVar2;
    }
  }
  return 0;
}

// PKCS12_SAFEBAG_get1_crl @ 14f7ca670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get1_crl(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 == 0x99) {
    iVar1 = OBJ_obj2nid(*(undefined8 *)param_1[1]);
    if (iVar1 == 0xa0) {
      uVar2 = X509_CRL_it();
      uVar2 = ASN1_item_unpack(*(undefined8 *)(param_1[1] + 8),uVar2);
      return uVar2;
    }
  }
  return 0;
}

// PKCS12_SAFEBAG_get_bag_nid @ 14f7ca6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get_bag_nid(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (2 < iVar1 - 0x98U) {
    return 0xffffffff;
  }
  uVar2 = OBJ_obj2nid(*(undefined8 *)param_1[1]);
  return uVar2;
}

// PKCS12_SAFEBAG_get_nid @ 14f7ca720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_get_nid(undefined8 *param_1)

{
  OBJ_obj2nid(*param_1);
  return;
}

// PKCS12_get_attr @ 14f7ca740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_get_attr(longlong param_1)

{
  PKCS12_get_attr_gen(*(undefined8 *)(param_1 + 0x10));
  return;
}

// PKCS8_get_attr @ 14f7ca760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_get_attr(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS8_pkey_get0_attrs();
  PKCS12_get_attr_gen(uVar1,param_2);
  return;
}

