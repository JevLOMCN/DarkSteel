// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f6d8dc0 @ 14f6d8dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6d8dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [224];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6d8dd0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_4 == 0) {
    uVar2 = EVP_CIPHER_CTX_cipher();
    uVar1 = EVP_CIPHER_flags(uVar2);
    if ((uVar1 & 0xf0007) != 4) {
      uVar2 = EVP_CIPHER_CTX_cipher(param_1);
      uVar1 = EVP_CIPHER_flags(uVar2);
      if ((uVar1 & 0xf0007) != 3) {
        IDEA_set_encrypt_key(param_2,local_f8);
        uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
        IDEA_set_decrypt_key(local_f8,uVar2);
        OPENSSL_cleanse(local_f8,0xd8);
        return 1;
      }
    }
  }
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  IDEA_set_encrypt_key(param_2,uVar2);
  return 1;
}

// FUN_14f6d8ea0 @ 14f6d8ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d8ea0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_cipher();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      IDEA_ecb_encrypt(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}

// FUN_14f6d8f30 @ 14f6d8f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d8f30(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6d8f4f;
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
      IDEA_cbc_encrypt(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
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
    IDEA_cbc_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}

// FUN_14f6d9040 @ 14f6d9040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d9040(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      IDEA_ofb64_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
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
    IDEA_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f6d9160 @ 14f6d9160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d9160(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      IDEA_cfb64_encrypt(param_3,param_2,uVar4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
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

// EVP_idea_cbc @ 14f6d9260

undefined * EVP_idea_cbc(void)

{
  return &DAT_1534a7de0;
}

// EVP_idea_cfb64 @ 14f6d9270

undefined * EVP_idea_cfb64(void)

{
  return &DAT_1534a7e40;
}

// EVP_idea_ecb @ 14f6d9280

undefined * EVP_idea_ecb(void)

{
  return &DAT_1534a7f00;
}

// EVP_idea_ofb @ 14f6d9290

undefined * EVP_idea_ofb(void)

{
  return &DAT_1534a7ea0;
}

