// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// PKCS8_encrypt @ 14f7aa980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS8_encrypt(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 1;
  if (param_1 == -1) {
    lVar2 = PKCS5_pbe2_set(param_2,param_7,param_5,param_6);
  }
  else {
    uVar4 = 0;
    iVar1 = EVP_PBE_find(1,param_1,0,0,0,0x14f7aa99a);
    if (iVar1 == 0) {
      ERR_clear_error();
      lVar2 = PKCS5_pbe_set(param_1,param_7,param_5,param_6);
    }
    else {
      uVar4 = 0;
      lVar2 = PKCS5_pbe2_set_iv(param_2,param_7,param_5,param_6,0,CONCAT44(uVar5,param_1));
    }
  }
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x7d,0xd,"crypto\\pkcs12\\p12_p8e.c",CONCAT44(uVar4,0x20));
  }
  else {
    lVar3 = PKCS8_set0_pbe(param_3,param_4,param_8,lVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
    X509_ALGOR_free(lVar2);
  }
  return 0;
}

// PKCS8_set0_pbe @ 14f7aaa90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
PKCS8_set0_pbe(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = PKCS8_PRIV_KEY_INFO_it();
  lVar2 = PKCS12_item_i2d_encrypt(param_4,uVar1,param_1,param_2,param_3,CONCAT44(uVar4,1));
  uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x84,0x67,"crypto\\pkcs12\\p12_p8e.c",CONCAT44(uVar4,0x36));
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)CRYPTO_zalloc(0x10,"crypto\\pkcs12\\p12_p8e.c");
    if (puVar3 == (undefined8 *)0x0) {
      ERR_put_error(0x23,0x84,0x41,"crypto\\pkcs12\\p12_p8e.c",CONCAT44(uVar4,0x3d));
      ASN1_OCTET_STRING_free(lVar2);
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = param_4;
      puVar3[1] = lVar2;
    }
  }
  return puVar3;
}

