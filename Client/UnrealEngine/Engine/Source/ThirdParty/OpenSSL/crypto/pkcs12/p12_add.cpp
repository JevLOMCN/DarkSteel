// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// PKCS12_decrypt_skey @ 14f7ca790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_decrypt_skey(longlong param_1)

{
  PKCS8_decrypt(*(undefined8 *)(param_1 + 8));
  return;
}

// PKCS12_item_pack_safebag @ 14f7ca7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
PKCS12_item_pack_safebag
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7ca7d0;
  puVar1 = (undefined8 *)PKCS12_BAGS_new();
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x23,0x75,0x41,"crypto\\pkcs12\\p12_add.c",0x18,uVar6);
  }
  else {
    uVar2 = OBJ_nid2obj(param_3);
    *puVar1 = uVar2;
    lVar3 = ASN1_item_pack(param_1,param_2,puVar1 + 1);
    if (lVar3 == 0) {
      uVar5 = 0x1d;
    }
    else {
      puVar4 = (undefined8 *)PKCS12_SAFEBAG_new();
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = puVar1;
        uVar6 = OBJ_nid2obj(param_4);
        *puVar4 = uVar6;
        return puVar4;
      }
      uVar5 = 0x21;
    }
    ERR_put_error(0x23,0x75,0x41,"crypto\\pkcs12\\p12_add.c",uVar5,uVar6);
    PKCS12_BAGS_free(puVar1);
  }
  return (undefined8 *)0x0;
}

// PKCS12_pack_authsafes @ 14f7ca8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS12_pack_authsafes(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar1 = PKCS12_AUTHSAFES_it();
  lVar2 = ASN1_item_pack(param_2,uVar1,lVar2 + 0x20);
  return lVar2 != 0;
}

// PKCS12_pack_p7data @ 14f7ca900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_pack_p7data(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7ca910;
  lVar1 = PKCS7_new();
  if (lVar1 == 0) {
    ERR_put_error(0x23,0x72,0x41,"crypto\\pkcs12\\p12_add.c",0x33,uVar6);
    return 0;
  }
  uVar2 = OBJ_nid2obj(0x15);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  lVar3 = ASN1_OCTET_STRING_new();
  *(longlong *)(lVar1 + 0x20) = lVar3;
  if (lVar3 == 0) {
    uVar5 = 0x38;
    uVar4 = 0x41;
  }
  else {
    uVar2 = PKCS12_SAFEBAGS_it();
    lVar3 = ASN1_item_pack(param_1,uVar2,lVar1 + 0x20);
    if (lVar3 != 0) {
      return lVar1;
    }
    uVar5 = 0x3d;
    uVar4 = 100;
  }
  ERR_put_error(0x23,0x72,uVar4,"crypto\\pkcs12\\p12_add.c",uVar5,uVar6);
  PKCS7_free(lVar1);
  return 0;
}

// PKCS12_pack_p7encdata @ 14f7ca9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_pack_p7encdata
                   (undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar6 = 0x14f7caa10;
  lVar2 = PKCS7_new();
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x73,0x41,"crypto\\pkcs12\\p12_add.c",CONCAT44(uVar5,0x5d),uVar6);
  }
  else {
    iVar1 = PKCS7_set_type(lVar2,0x1a);
    if (iVar1 == 0) {
      uVar3 = 0x62;
      uVar5 = 0x78;
    }
    else {
      uVar3 = OBJ_nid2sn(param_1);
      lVar4 = EVP_get_cipherbyname(uVar3);
      if (lVar4 == 0) {
        lVar4 = PKCS5_pbe_set(param_1,param_6,param_4,param_5);
      }
      else {
        lVar4 = PKCS5_pbe2_set(lVar4);
      }
      if (lVar4 == 0) {
        uVar3 = 0x6e;
        uVar5 = 0x41;
      }
      else {
        X509_ALGOR_free(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 8) + 8));
        uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 8) + 8) = lVar4;
        ASN1_OCTET_STRING_free
                  (*(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 8) + 0x10));
        uVar3 = PKCS12_SAFEBAGS_it();
        uVar6 = CONCAT44(uVar5,1);
        lVar4 = PKCS12_item_i2d_encrypt(lVar4,uVar3,param_2,param_3,param_7,uVar6);
        *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 8) + 0x10) = lVar4;
        if (lVar4 != 0) {
          return lVar2;
        }
        uVar3 = 0x77;
        uVar5 = 0x67;
      }
    }
    ERR_put_error(0x23,0x73,uVar5,"crypto\\pkcs12\\p12_add.c",uVar3,uVar6);
    PKCS7_free(lVar2);
  }
  return 0;
}

// PKCS12_unpack_authsafes @ 14f7cab70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_unpack_authsafes(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7cab7c;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar1 != 0x15) {
    ERR_put_error(0x23,0x82,0x79,"crypto\\pkcs12\\p12_add.c",0x9f,uVar2);
    return 0;
  }
  uVar2 = PKCS12_AUTHSAFES_it();
  uVar2 = ASN1_item_unpack(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar2);
  return uVar2;
}

// PKCS12_unpack_p7data @ 14f7cabe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_unpack_p7data(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7cabec;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0x15) {
    ERR_put_error(0x23,0x83,0x79,"crypto\\pkcs12\\p12_add.c",0x4c,uVar2);
    return 0;
  }
  uVar2 = PKCS12_SAFEBAGS_it();
  uVar2 = ASN1_item_unpack(*(undefined8 *)(param_1 + 0x20),uVar2);
  return uVar2;
}

// PKCS12_unpack_p7encdata @ 14f7cac50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_unpack_p7encdata(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 != 0x1a) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  uVar3 = PKCS12_SAFEBAGS_it();
  uVar3 = PKCS12_item_decrypt_d2i
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8),uVar3,
                     param_2,param_3,*(undefined8 *)(lVar1 + 0x10),CONCAT44(uVar4,1));
  return uVar3;
}

