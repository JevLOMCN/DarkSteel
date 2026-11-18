// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f760c70 @ 14f760c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f760c70(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = EVP_CIPHER_CTX_key_length();
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  BF_set_key(uVar2,uVar1,param_2);
  return 1;
}

// FUN_14f760cd0 @ 14f760cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f760cd0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f760cef;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      BF_cbc_encrypt(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar6 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    BF_cbc_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}

// FUN_14f760de0 @ 14f760de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f760de0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      BF_cfb64_encrypt(param_3,param_2,uVar4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}

// FUN_14f760ee0 @ 14f760ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f760ee0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = EVP_CIPHER_CTX_cipher();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      BF_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}

// FUN_14f760f90 @ 14f760f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f760f90(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      BF_ofb64_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = EVP_CIPHER_CTX_num(param_1);
    uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    BF_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// EVP_bf_cbc @ 14f7610b0

undefined * EVP_bf_cbc(void)

{
  return &DAT_1534c2b00;
}

// EVP_bf_cfb64 @ 14f7610c0

undefined * EVP_bf_cfb64(void)

{
  return &DAT_1534c2b60;
}

// EVP_bf_ecb @ 14f7610d0

undefined * EVP_bf_ecb(void)

{
  return &DAT_1534c2c20;
}

// EVP_bf_ofb @ 14f7610e0

undefined * EVP_bf_ofb(void)

{
  return &DAT_1534c2bc0;
}

