// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f6e0e70 @ 14f6e0e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e0e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  SEED_set_key(param_2,uVar1);
  return 1;
}

// FUN_14f6e0eb0 @ 14f6e0eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e0eb0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6e0ecf;
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
      SEED_cbc_encrypt(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
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
    SEED_cbc_encrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}

// FUN_14f6e0fc0 @ 14f6e0fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e0fc0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      SEED_cfb128_encrypt(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1);
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

// FUN_14f6e10c0 @ 14f6e10c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e10c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      SEED_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}

// FUN_14f6e1170 @ 14f6e1170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e1170(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      SEED_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
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
    SEED_ofb128_encrypt(param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// EVP_seed_cbc @ 14f6e1290

undefined * EVP_seed_cbc(void)

{
  return &DAT_1534a9590;
}

// EVP_seed_cfb128 @ 14f6e12a0

undefined * EVP_seed_cfb128(void)

{
  return &DAT_1534a95f0;
}

// EVP_seed_ecb @ 14f6e12b0

undefined * EVP_seed_ecb(void)

{
  return &DAT_1534a96b0;
}

// EVP_seed_ofb @ 14f6e12c0

undefined * EVP_seed_ofb(void)

{
  return &DAT_1534a9650;
}

