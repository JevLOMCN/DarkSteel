// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ASN1_digest @ 14f719110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASN1_digest(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar4 = 0x14f719124;
  iVar1 = (*param_1)(param_3,0);
  if (iVar1 < 1) {
    ERR_put_error(0xd,0xb8,0x44,"crypto\\asn1\\a_digest.c",CONCAT44(uVar3,0x1f),uVar4);
    return 0;
  }
  lVar2 = CRYPTO_malloc((longlong)iVar1,"crypto\\asn1\\a_digest.c",0x22);
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xb8,0x41,"crypto\\asn1\\a_digest.c",CONCAT44(uVar3,0x23),uVar4);
    uVar4 = 0;
  }
  else {
    local_res8 = lVar2;
    (*param_1)(param_3,&local_res8);
    iVar1 = EVP_Digest(lVar2,(longlong)iVar1,param_4,param_5,param_2,0);
    if (iVar1 == 0) {
      CRYPTO_free(lVar2,"crypto\\asn1\\a_digest.c",0x2a);
      uVar4 = 0;
    }
    else {
      CRYPTO_free(lVar2,"crypto\\asn1\\a_digest.c",0x2d);
      uVar4 = 1;
    }
  }
  return uVar4;
}

// ASN1_item_digest @ 14f719240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASN1_item_digest(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  longlong local_18 [2];
  
  local_18[1] = 0x14f719250;
  local_18[0] = 0;
  iVar1 = ASN1_item_i2d(param_3,local_18,param_1);
  if (local_18[0] != 0) {
    iVar1 = EVP_Digest(local_18[0],(longlong)iVar1,param_4,param_5,param_2,0);
    if (iVar1 != 0) {
      CRYPTO_free(local_18[0],"crypto\\asn1\\a_digest.c",0x41);
      return 1;
    }
    CRYPTO_free(local_18[0],"crypto\\asn1\\a_digest.c",0x3e);
  }
  return 0;
}

