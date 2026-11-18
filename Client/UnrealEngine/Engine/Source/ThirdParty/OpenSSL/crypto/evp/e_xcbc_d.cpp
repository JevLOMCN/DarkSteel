// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// FUN_14f760a70 @ 14f760a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f760a70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  DES_set_key_unchecked(param_2,uVar1);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 8);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_2 + 0x10);
  return 1;
}

// FUN_14f760ae0 @ 14f760ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f760ae0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f760aff;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar7 = param_4 >> 0x1e;
    param_4 = param_4 + uVar7 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar6 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar8 = CONCAT44(uVar2,uVar1);
      DES_xcbc_encrypt(param_3,param_2,0x40000000,uVar6,uVar5,lVar4 + 0x80,lVar3 + 0x88,uVar8);
      uVar1 = (undefined4)((ulonglong)uVar8 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_4 != 0) {
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    uVar8 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_xcbc_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar5,uVar8,lVar4 + 0x80,lVar3 + 0x88,
                     CONCAT44(uVar1,uVar2));
  }
  return 1;
}

// EVP_desx_cbc @ 14f760c60

undefined * EVP_desx_cbc(void)

{
  return &DAT_1534c2aa0;
}

