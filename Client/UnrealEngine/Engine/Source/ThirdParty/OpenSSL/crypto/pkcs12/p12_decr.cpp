// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// PKCS12_item_decrypt_d2i @ 14f7aa520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_item_decrypt_d2i
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 *param_5,int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_18 [2];
  undefined8 local_10;
  
  local_10 = 0x14f7aa52c;
  lVar2 = PKCS12_pbe_crypt(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_10,
                           local_18,0);
  uVar1 = local_10;
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x6a,0x75,"crypto\\pkcs12\\p12_decr.c",0x5e);
    return 0;
  }
  param_5 = (undefined4 *)local_10;
  lVar2 = ASN1_item_d2i(0,&param_5,local_18[0],param_2);
  if (param_6 != 0) {
    OPENSSL_cleanse(uVar1,(longlong)local_18[0]);
  }
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x6a,0x65,"crypto\\pkcs12\\p12_decr.c",0x72);
  }
  CRYPTO_free(uVar1,"crypto\\pkcs12\\p12_decr.c",0x73);
  return lVar2;
}

// PKCS12_item_i2d_encrypt @ 14f7aa630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_item_i2d_encrypt
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  local_18[1] = 0x14f7aa650;
  local_18[0] = 0;
  lVar2 = ASN1_OCTET_STRING_new();
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x6c,0x41,"crypto\\pkcs12\\p12_decr.c",0x86);
    ASN1_OCTET_STRING_free(0);
    lVar2 = 0;
  }
  else {
    iVar1 = ASN1_item_i2d(param_5,local_18,param_2);
    if (local_18[0] == 0) {
      ERR_put_error(0x23,0x6c,0x66,"crypto\\pkcs12\\p12_decr.c",0x8b);
      ASN1_OCTET_STRING_free(lVar2);
      lVar2 = 0;
    }
    else {
      lVar3 = PKCS12_pbe_crypt(param_1,param_3,param_4,local_18[0],iVar1,lVar2 + 8,lVar2,1);
      if (lVar3 == 0) {
        ERR_put_error(0x23,0x6c,0x67,"crypto\\pkcs12\\p12_decr.c",0x90);
        CRYPTO_free(local_18[0],"crypto\\pkcs12\\p12_decr.c",0x91);
        ASN1_OCTET_STRING_free(lVar2);
        lVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          OPENSSL_cleanse(local_18[0],(longlong)iVar1);
        }
        CRYPTO_free(local_18[0],"crypto\\pkcs12\\p12_decr.c",0x96);
      }
    }
  }
  return lVar2;
}

// PKCS12_pbe_crypt @ 14f7aa7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_pbe_crypt(undefined8 *param_1,undefined8 param_2,undefined4 param_3,
                         undefined8 param_4,int param_5,longlong *param_6,int *param_7,
                         undefined4 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  undefined8 uVar6;
  longlong lVar7;
  int local_28 [2];
  undefined8 uStack_20;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uStack_20 = 0x14f7aa7de;
  lVar4 = 0;
  lVar3 = EVP_CIPHER_CTX_new();
  if (lVar3 == 0) {
    uVar6 = CONCAT44(uVar8,0x21);
LAB_14f7aa804:
    uVar5 = 0x41;
  }
  else {
    lVar7 = lVar3;
    iVar1 = EVP_PBE_CipherInit(*param_1,param_2,param_3,param_1[1],lVar3,param_8);
    uVar8 = (undefined4)((ulonglong)lVar7 >> 0x20);
    if (iVar1 == 0) {
      ERR_put_error(0x23,0x77,0x73,"crypto\\pkcs12\\p12_decr.c",CONCAT44(uVar8,0x29));
      goto LAB_14f7aa94d;
    }
    iVar1 = EVP_CIPHER_CTX_block_size(lVar3);
    lVar4 = CRYPTO_malloc((longlong)(iVar1 + param_5),"crypto\\pkcs12\\p12_decr.c",0x2d);
    if (lVar4 == 0) {
      uVar6 = CONCAT44(uVar8,0x2f);
      goto LAB_14f7aa804;
    }
    uVar5 = CONCAT44(uVar8,param_5);
    iVar2 = EVP_CipherUpdate(lVar3,lVar4,local_28,param_4,uVar5);
    iVar1 = local_28[0];
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (iVar2 == 0) {
      CRYPTO_free(lVar4,"crypto\\pkcs12\\p12_decr.c",0x34);
      lVar4 = 0;
      uVar6 = CONCAT44(uVar8,0x36);
      uVar5 = 6;
    }
    else {
      iVar2 = EVP_CipherFinal_ex(lVar3,lVar4 + local_28[0],local_28);
      if (iVar2 != 0) {
        if (param_7 != (int *)0x0) {
          *param_7 = local_28[0] + iVar1;
        }
        if (param_6 != (longlong *)0x0) {
          *param_6 = lVar4;
        }
        goto LAB_14f7aa94d;
      }
      CRYPTO_free(lVar4,"crypto\\pkcs12\\p12_decr.c",0x3c);
      lVar4 = 0;
      uVar6 = CONCAT44(uVar8,0x3f);
      uVar5 = 0x74;
    }
  }
  ERR_put_error(0x23,0x77,uVar5,"crypto\\pkcs12\\p12_decr.c",uVar6);
LAB_14f7aa94d:
  EVP_CIPHER_CTX_free(lVar3);
  return lVar4;
}

