// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// ASN1_i2d_bio @ 14f7148e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ASN1_i2d_bio(code *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong local_res8;
  undefined8 uVar7;
  
  uVar7 = 0x14f7148f7;
  uVar6 = 1;
  iVar5 = 0;
  uVar1 = (*param_1)(param_3,0);
  uVar4 = (ulonglong)(int)uVar1;
  if ((int)uVar1 < 1) {
    return 0;
  }
  lVar3 = CRYPTO_malloc(uVar4,"crypto\\asn1\\a_i2d_fp.c",0x2c);
  if (lVar3 == 0) {
    ERR_put_error(0xd,0x74,0x41,"crypto\\asn1\\a_i2d_fp.c",0x2e,uVar7);
    uVar6 = 0;
  }
  else {
    local_res8 = lVar3;
    (*param_1)(param_3,&local_res8);
    uVar2 = BIO_write(param_2,lVar3,uVar1);
    if (uVar2 != uVar1) {
      do {
        if ((int)uVar2 < 1) {
          uVar6 = 0;
          break;
        }
        iVar5 = iVar5 + uVar2;
        uVar1 = (int)uVar4 - uVar2;
        uVar4 = (ulonglong)uVar1;
        uVar2 = BIO_write(param_2,iVar5 + lVar3,uVar1);
      } while (uVar2 != uVar1);
    }
    CRYPTO_free(lVar3,"crypto\\asn1\\a_i2d_fp.c",0x40);
  }
  return uVar6;
}

// ASN1_i2d_fp @ 14f7149f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ASN1_i2d_fp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f714a0a;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(0xd,0x75,7,"crypto\\asn1\\a_i2d_fp.c",0x18,uVar4);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_2);
    uVar1 = ASN1_i2d_bio(param_1,lVar3,param_3);
    BIO_free(lVar3);
  }
  return uVar1;
}

// ASN1_item_i2d_bio @ 14f714aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ASN1_item_i2d_bio(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_res20;
  undefined8 uVar5;
  
  uVar5 = 0x14f714aba;
  local_res20 = 0;
  iVar4 = 0;
  uVar3 = 1;
  iVar1 = ASN1_item_i2d(param_3,&local_res20,param_1);
  if (local_res20 == 0) {
    ERR_put_error(0xd,0xc0,0x41,"crypto\\asn1\\a_i2d_fp.c",0x5e,uVar5);
    uVar3 = 0;
  }
  else {
    iVar2 = BIO_write(param_2,local_res20,iVar1);
    if (iVar2 != iVar1) {
      do {
        if (iVar2 < 1) {
          uVar3 = 0;
          break;
        }
        iVar4 = iVar4 + iVar2;
        iVar1 = iVar1 - iVar2;
        iVar2 = BIO_write(param_2,iVar4 + local_res20,iVar1);
      } while (iVar2 != iVar1);
    }
    CRYPTO_free(local_res20,"crypto\\asn1\\a_i2d_fp.c",0x6d);
  }
  return uVar3;
}

// ASN1_item_i2d_fp @ 14f714b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ASN1_item_i2d_fp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f714b9a;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(0xd,0xc1,7,"crypto\\asn1\\a_i2d_fp.c",0x4d,uVar4);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_2);
    uVar1 = ASN1_item_i2d_bio(param_1,lVar3,param_3);
    BIO_free(lVar3);
  }
  return uVar1;
}

