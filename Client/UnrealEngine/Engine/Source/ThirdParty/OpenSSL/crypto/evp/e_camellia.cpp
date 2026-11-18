// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 29

// FUN_14f6df770 @ 14f6df770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6df770(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6df78a;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  iVar1 = Camellia_set_key(param_2,iVar1 << 3,lVar3);
  if (iVar1 < 0) {
    ERR_put_error(6,0x9f,0x9d,"crypto\\evp\\e_camellia.c",0xdd,uVar6);
    uVar6 = 0;
  }
  else {
    uVar6 = EVP_CIPHER_CTX_cipher(param_1);
    uVar2 = EVP_CIPHER_flags(uVar6);
    if ((1 < (uVar2 & 0xf0007) - 1) || (pcVar4 = Camellia_decrypt, param_4 != 0)) {
      pcVar4 = Camellia_encrypt;
    }
    *(code **)(lVar3 + 0x118) = pcVar4;
    puVar5 = (undefined1 *)0x0;
    uVar6 = 1;
    if ((uVar2 & 0xf0007) == 2) {
      puVar5 = &Camellia_cbc_encrypt;
    }
    *(undefined1 **)(lVar3 + 0x120) = puVar5;
  }
  return uVar6;
}

// FUN_14f6df850 @ 14f6df850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6df850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(longlong *)(lVar3 + 0x120) == 0) {
    iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    if (iVar2 == 0) {
      uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
      CRYPTO_cbc128_decrypt(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0x118));
    }
    else {
      uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
      CRYPTO_cbc128_encrypt(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0x118));
    }
  }
  else {
    uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    (**(code **)(lVar3 + 0x120))(param_3,param_2,param_4,lVar3,uVar4,CONCAT44(uVar5,uVar1));
  }
  return 1;
}

// FUN_14f6df940 @ 14f6df940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6df940(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = EVP_CIPHER_CTX_block_size();
  uVar4 = (ulonglong)iVar1;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (uVar4 <= param_4) {
    lVar3 = param_3;
    do {
      (**(code **)(lVar2 + 0x118))(lVar3,(param_2 - param_3) + lVar3,lVar2);
      lVar3 = lVar3 + uVar4;
    } while ((ulonglong)(lVar3 - param_3) <= param_4 - uVar4);
  }
  return 1;
}

// FUN_14f6df9d0 @ 14f6df9d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6df9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6df9f0;
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_18[0] = EVP_CIPHER_CTX_num(param_1);
  uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_ofb128_encrypt(param_3,param_2,param_4,lVar1,uVar2,local_18,*(undefined8 *)(lVar1 + 0x118))
  ;
  EVP_CIPHER_CTX_set_num(param_1,local_18[0]);
  return 1;
}

// FUN_14f6dfa80 @ 14f6dfa80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6dfa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6dfa9e;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  local_28[0] = EVP_CIPHER_CTX_num(param_1);
  uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
  uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_cfb128_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0x118));
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// FUN_14f6dfb40 @ 14f6dfb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6dfb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6dfb5e;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  local_28[0] = EVP_CIPHER_CTX_num(param_1);
  uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
  uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_cfb128_8_encrypt
            (param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0x118));
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// FUN_14f6dfc00 @ 14f6dfc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dfc00(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_38 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6dfc17;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  if (iVar1 == 0) {
    if (0xfffffffffffffff < param_4) {
      uVar5 = param_4 >> 0x3c;
      param_4 = param_4 + uVar5 * -0x1000000000000000;
      do {
        local_38[0] = EVP_CIPHER_CTX_num(param_1);
        uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
        uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
        CRYPTO_cfb128_1_encrypt
                  (param_3,param_2,0x8000000000000000,lVar3,uVar4,local_38,uVar2,
                   *(undefined8 *)(lVar3 + 0x118));
        EVP_CIPHER_CTX_set_num(param_1,local_38[0]);
        param_2 = param_2 + 0x1000000000000000;
        param_3 = param_3 + 0x1000000000000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 == 0) {
      return 1;
    }
    local_38[0] = EVP_CIPHER_CTX_num(param_1);
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    param_4 = param_4 * 8;
  }
  else {
    local_38[0] = EVP_CIPHER_CTX_num(param_1);
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
  }
  CRYPTO_cfb128_1_encrypt
            (param_3,param_2,param_4,lVar3,uVar4,local_38,uVar2,*(undefined8 *)(lVar3 + 0x118));
  EVP_CIPHER_CTX_set_num(param_1,local_38[0]);
  return 1;
}

// FUN_14f6dfdb0 @ 14f6dfdb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6dfdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6dfdd4;
  local_28[0] = EVP_CIPHER_CTX_num();
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  lVar1 = *(longlong *)(lVar2 + 0x120);
  uVar3 = EVP_CIPHER_CTX_buf_noconst(param_1);
  uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
  if (lVar1 == 0) {
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,lVar2,uVar4,uVar3,local_28,*(undefined8 *)(lVar2 + 0x118));
  }
  else {
    CRYPTO_ctr128_encrypt_ctr32(param_3);
  }
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// EVP_camellia_128_cbc @ 14f6dfea0

undefined * EVP_camellia_128_cbc(void)

{
  return &DAT_1534a8c10;
}

// EVP_camellia_128_cfb1 @ 14f6dfeb0

undefined * EVP_camellia_128_cfb1(void)

{
  return &DAT_1534a8d90;
}

// EVP_camellia_128_cfb128 @ 14f6dfec0

undefined * EVP_camellia_128_cfb128(void)

{
  return &DAT_1534a8d30;
}

// EVP_camellia_128_cfb8 @ 14f6dfed0

undefined * EVP_camellia_128_cfb8(void)

{
  return &DAT_1534a8df0;
}

// EVP_camellia_128_ctr @ 14f6dfee0

undefined * EVP_camellia_128_ctr(void)

{
  return &DAT_1534a8e50;
}

// EVP_camellia_128_ecb @ 14f6dfef0

undefined * EVP_camellia_128_ecb(void)

{
  return &DAT_1534a8c70;
}

// EVP_camellia_128_ofb @ 14f6dff00

undefined * EVP_camellia_128_ofb(void)

{
  return &DAT_1534a8cd0;
}

// EVP_camellia_192_cbc @ 14f6dff10

undefined * EVP_camellia_192_cbc(void)

{
  return &DAT_1534a8eb0;
}

// EVP_camellia_192_cfb1 @ 14f6dff20

undefined * EVP_camellia_192_cfb1(void)

{
  return &DAT_1534a9030;
}

// EVP_camellia_192_cfb128 @ 14f6dff30

undefined * EVP_camellia_192_cfb128(void)

{
  return &DAT_1534a8fd0;
}

// EVP_camellia_192_cfb8 @ 14f6dff40

undefined * EVP_camellia_192_cfb8(void)

{
  return &DAT_1534a9090;
}

// EVP_camellia_192_ctr @ 14f6dff50

undefined * EVP_camellia_192_ctr(void)

{
  return &DAT_1534a90f0;
}

// EVP_camellia_192_ecb @ 14f6dff60

undefined * EVP_camellia_192_ecb(void)

{
  return &DAT_1534a8f10;
}

// EVP_camellia_192_ofb @ 14f6dff70

undefined * EVP_camellia_192_ofb(void)

{
  return &DAT_1534a8f70;
}

// EVP_camellia_256_cbc @ 14f6dff80

undefined * EVP_camellia_256_cbc(void)

{
  return &DAT_1534a9150;
}

// EVP_camellia_256_cfb1 @ 14f6dff90

undefined * EVP_camellia_256_cfb1(void)

{
  return &DAT_1534a92d0;
}

// EVP_camellia_256_cfb128 @ 14f6dffa0

undefined * EVP_camellia_256_cfb128(void)

{
  return &DAT_1534a9270;
}

// EVP_camellia_256_cfb8 @ 14f6dffb0

undefined * EVP_camellia_256_cfb8(void)

{
  return &DAT_1534a9330;
}

// EVP_camellia_256_ctr @ 14f6dffc0

undefined * EVP_camellia_256_ctr(void)

{
  return &DAT_1534a9390;
}

// EVP_camellia_256_ecb @ 14f6dffd0

undefined * EVP_camellia_256_ecb(void)

{
  return &DAT_1534a91b0;
}

// EVP_camellia_256_ofb @ 14f6dffe0

undefined * EVP_camellia_256_ofb(void)

{
  return &DAT_1534a9210;
}

