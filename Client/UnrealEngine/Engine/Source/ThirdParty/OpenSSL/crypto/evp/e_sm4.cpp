// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 15

// FUN_14f761570 @ 14f761570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f761570(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  SM4_set_key(param_2,uVar1);
  return 1;
}

// FUN_14f7615b0 @ 14f7615b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7615b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      if (iVar1 == 0) {
        CRYPTO_cbc128_decrypt(param_3,param_2,0x40000000,uVar3,uVar2,SM4_decrypt);
      }
      else {
        CRYPTO_cbc128_encrypt();
      }
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    if (iVar1 == 0) {
      CRYPTO_cbc128_decrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,SM4_decrypt);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}

// FUN_14f761710 @ 14f761710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f761710(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      CRYPTO_cfb128_encrypt
                (param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,SM4_encrypt);
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

// FUN_14f761830 @ 14f761830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f761830(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = EVP_CIPHER_CTX_cipher();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      if (iVar1 == 0) {
        SM4_decrypt(lVar2,(param_2 - param_3) + lVar2,uVar3);
      }
      else {
        SM4_encrypt();
      }
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}

// FUN_14f7618f0 @ 14f7618f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7618f0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x14f761907;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      CRYPTO_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,SM4_encrypt);
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
    CRYPTO_ofb128_encrypt
              (param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,SM4_encrypt,uVar4);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f761a30 @ 14f761a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f761a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f761a4e;
  local_28[0] = EVP_CIPHER_CTX_num();
  uVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  uVar2 = EVP_CIPHER_CTX_buf_noconst(param_1);
  uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_ctr128_encrypt(param_3,param_2,param_4,uVar1,uVar3,uVar2,local_28,SM4_encrypt);
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// EVP_sm4_cbc @ 14f761af0

undefined * EVP_sm4_cbc(void)

{
  return &DAT_1534c2e00;
}

// EVP_sm4_cfb128 @ 14f761b00

undefined * EVP_sm4_cfb128(void)

{
  return &DAT_1534c2e60;
}

// EVP_sm4_ctr @ 14f761b10

undefined * EVP_sm4_ctr(void)

{
  return &DAT_1534c2f80;
}

// EVP_sm4_ecb @ 14f761b20

undefined * EVP_sm4_ecb(void)

{
  return &DAT_1534c2f20;
}

// EVP_sm4_ofb @ 14f761b30

undefined * EVP_sm4_ofb(void)

{
  return &DAT_1534c2ec0;
}

// FUN_14f761b40 @ 14f761b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761b40(void)

{
  int in_stack_00000030;
  
  if (in_stack_00000030 != 0) {
    CRYPTO_cbc128_encrypt();
    return;
  }
  CRYPTO_cbc128_decrypt();
  return;
}

// FUN_14f761b90 @ 14f761b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761b90(void)

{
  CRYPTO_cfb128_encrypt();
  return;
}

// FUN_14f761be0 @ 14f761be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761be0(void)

{
  int in_R9D;
  
  if (in_R9D != 0) {
    SM4_encrypt();
    return;
  }
  SM4_decrypt();
  return;
}

// FUN_14f761c10 @ 14f761c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f761c10(void)

{
  CRYPTO_ofb128_encrypt();
  return;
}

