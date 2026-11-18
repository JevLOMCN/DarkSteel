// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// FUN_14f6d75a0 @ 14f6d75a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d75a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)EVP_CIPHER_CTX_get_cipher_data();
  puVar1[0x30] = 0;
  DES_set_key_unchecked(param_2,puVar1);
  DES_set_key_unchecked(param_2 + 8,puVar1 + 0x10);
  puVar1[0x20] = *puVar1;
  puVar1[0x21] = puVar1[1];
  puVar1[0x22] = puVar1[2];
  puVar1[0x23] = puVar1[3];
  puVar1[0x24] = puVar1[4];
  puVar1[0x25] = puVar1[5];
  puVar1[0x26] = puVar1[6];
  puVar1[0x27] = puVar1[7];
  puVar1[0x28] = puVar1[8];
  puVar1[0x29] = puVar1[9];
  puVar1[0x2a] = puVar1[10];
  puVar1[0x2b] = puVar1[0xb];
  puVar1[0x2c] = puVar1[0xc];
  puVar1[0x2d] = puVar1[0xd];
  puVar1[0x2e] = puVar1[0xe];
  puVar1[0x2f] = puVar1[0xf];
  return 1;
}

// FUN_14f6d7660 @ 14f6d7660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7660(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  *(undefined8 *)(lVar1 + 0x180) = 0;
  DES_set_key_unchecked(param_2,lVar1);
  DES_set_key_unchecked(param_2 + 8,lVar1 + 0x80);
  DES_set_key_unchecked(param_2 + 0x10,lVar1 + 0x100);
  return 1;
}

// FUN_14f6d76d0 @ 14f6d76d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d76d0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  uVar1 = EVP_CIPHER_CTX_key_length();
  iVar2 = RAND_priv_bytes(param_4,uVar1);
  if (iVar2 < 1) {
    return 0;
  }
  DES_set_odd_parity(param_4);
  iVar2 = EVP_CIPHER_CTX_key_length(param_1);
  if (0xf < iVar2) {
    DES_set_odd_parity(param_4 + 8);
  }
  iVar2 = EVP_CIPHER_CTX_key_length(param_1);
  if (0x17 < iVar2) {
    DES_set_odd_parity(param_4 + 0x10);
  }
  return 1;
}

// FUN_14f6d7770 @ 14f6d7770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7770(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0x14f6d7784;
  lVar2 = EVP_CIPHER_CTX_cipher();
  uVar6 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar6 <= param_4) {
    lVar2 = param_3;
    do {
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar7 = CONCAT44(uVar8,uVar1);
      DES_ecb3_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar7);
      lVar2 = lVar2 + uVar6;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar6);
  }
  return 1;
}

// FUN_14f6d7850 @ 14f6d7850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7850(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_ofb64_encrypt
                (param_3,param_2,0x40000000,uVar4,lVar3 + 0x80,lVar2 + 0x100,uVar1,local_res20);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = EVP_CIPHER_CTX_num(param_1);
    uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
    lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_ede3_ofb64_encrypt
              (param_3,param_2,param_4 & 0xffffffff,uVar4,lVar3 + 0x80,lVar2 + 0x100,uVar1,
               local_res20);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f6d79f0 @ 14f6d79f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d79f0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6d7a03;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (*(longlong *)(lVar3 + 0x180) == 0) {
    if (0x3fffffff < param_4) {
      uVar5 = param_4 >> 0x1e;
      param_4 = param_4 + uVar5 * -0x40000000;
      do {
        uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
        uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
        uVar6 = CONCAT44(uVar2,uVar1);
        DES_ede3_cbc_encrypt
                  (param_3,param_2,0x40000000,lVar3,lVar3 + 0x80,lVar3 + 0x100,uVar4,uVar6);
        uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 != 0) {
      uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar6 = EVP_CIPHER_CTX_iv_noconst(param_1);
      DES_ede3_cbc_encrypt
                (param_3,param_2,param_4 & 0xffffffff,lVar3,lVar3 + 0x80,lVar3 + 0x100,uVar6,
                 CONCAT44(uVar1,uVar2));
    }
    return 1;
  }
  uVar6 = EVP_CIPHER_CTX_iv_noconst(param_1);
  (**(code **)(lVar3 + 0x180))(param_3,param_2,param_4,lVar3,uVar6);
  return 1;
}

// FUN_14f6d7b70 @ 14f6d7b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7b70(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  undefined4 local_48 [2];
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6d7b8f;
  if (0x3fffffff < param_4) {
    uVar6 = param_4 >> 0x1e;
    local_res20 = param_4 + uVar6 * -0x40000000;
    do {
      local_48[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_cfb64_encrypt
                (param_3,param_2,0x40000000,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,local_48,uVar1);
      EVP_CIPHER_CTX_set_num(param_1,local_48[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar6 = uVar6 - 1;
      param_4 = local_res20;
    } while (uVar6 != 0);
  }
  if (param_4 != 0) {
    uVar1 = EVP_CIPHER_CTX_num(param_1);
    local_res20 = CONCAT44(local_res20._4_4_,uVar1);
    uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
    lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    uVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_ede3_cfb64_encrypt
              (param_3,param_2,param_4 & 0xffffffff,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,
               &local_res20,uVar1);
    EVP_CIPHER_CTX_set_num(param_1,local_res20 & 0xffffffff);
  }
  return 1;
}

// FUN_14f6d7d40 @ 14f6d7d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7d40(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte local_res20 [8];
  byte local_48 [16];
  
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  if (iVar1 == 0) {
    param_4 = param_4 * 8;
  }
  uVar8 = 0;
  if (param_4 != 0) {
    do {
      bVar7 = (byte)uVar8;
      uVar9 = uVar8 >> 3;
      local_res20[0] =
           -(((byte)(1 << (7 - (bVar7 & 7) & 0x1f)) & *(byte *)(uVar9 + param_3)) != 0) & 0x80;
      uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar6 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_cfb_encrypt(local_res20,local_48,1,1,uVar6,lVar5 + 0x80,lVar4 + 0x100,uVar3,uVar2);
      uVar8 = uVar8 + 1;
      *(byte *)(uVar9 + param_2) =
           ~(byte)(0x80 >> (bVar7 & 7)) & *(byte *)(uVar9 + param_2) |
           (local_48[0] & 0x80) >> (bVar7 & 7);
    } while (uVar8 < param_4);
  }
  return 1;
}

// FUN_14f6d7eb0 @ 14f6d7eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7eb0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (0x3fffffff < param_4) {
    uVar6 = param_4 >> 0x1e;
    param_4 = param_4 + uVar6 * -0x40000000;
    do {
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_cfb_encrypt
                (param_3,param_2,8,0x40000000,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,uVar1);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_4 != 0) {
    uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
    lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    uVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_ede3_cfb_encrypt
              (param_3,param_2,8,param_4 & 0xffffffff,uVar5,lVar4 + 0x80,lVar3 + 0x100,uVar2,uVar1);
  }
  return 1;
}

// FUN_14f6d8040 @ 14f6d8040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d8040(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6d805a;
  if ((param_4 < 0x40000000) && ((param_4 & 7) == 0)) {
    iVar1 = is_partially_overlapping(param_2,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_14f6d81d0(param_1,param_2,param_3,param_4);
      }
      else {
        uVar2 = FUN_14f6d8420();
      }
    }
    else {
      ERR_put_error(6,0xab,0xa2,"crypto\\evp\\e_des3.c",0x18e,uVar2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// EVP_des_ede @ 14f6d8100

undefined * EVP_des_ede(void)

{
  return &DAT_1534a7a10;
}

// EVP_des_ede3 @ 14f6d8110

undefined * EVP_des_ede3(void)

{
  return &DAT_1534a7b90;
}

// EVP_des_ede3_cbc @ 14f6d8120

undefined * EVP_des_ede3_cbc(void)

{
  return &DAT_1534a7a70;
}

// EVP_des_ede3_cfb1 @ 14f6d8130

undefined * EVP_des_ede3_cfb1(void)

{
  return &DAT_1534a7bf0;
}

// EVP_des_ede3_cfb64 @ 14f6d8140

undefined * EVP_des_ede3_cfb64(void)

{
  return &DAT_1534a7ad0;
}

// EVP_des_ede3_cfb8 @ 14f6d8150

undefined * EVP_des_ede3_cfb8(void)

{
  return &DAT_1534a7c50;
}

// EVP_des_ede3_ofb @ 14f6d8170

undefined * EVP_des_ede3_ofb(void)

{
  return &DAT_1534a7b30;
}

// EVP_des_ede3_wrap @ 14f6d8180

undefined * EVP_des_ede3_wrap(void)

{
  return &DAT_1534a7cb0;
}

// EVP_des_ede_cbc @ 14f6d8190

undefined * EVP_des_ede_cbc(void)

{
  return &DAT_1534a78f0;
}

// EVP_des_ede_cfb64 @ 14f6d81a0

undefined * EVP_des_ede_cfb64(void)

{
  return &DAT_1534a7950;
}

// EVP_des_ede_ofb @ 14f6d81c0

undefined * EVP_des_ede_ofb(void)

{
  return &DAT_1534a79b0;
}

// FUN_14f6d81d0 @ 14f6d81d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6d81d0(undefined8 param_1,void *param_2,void *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar6 = 0xffffffff;
  if (0x17 < param_4) {
    if (param_2 == (void *)0x0) {
      return param_4 - 0x10;
    }
    puVar3 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst();
    *puVar3 = DAT_1534a7948;
    FUN_14f6d79f0(param_1,local_68,param_3,8);
    if (param_2 == param_3) {
      memmove(param_2,(void *)((longlong)param_2 + 8),param_4 - 8);
      param_3 = (void *)((longlong)param_3 + -8);
    }
    FUN_14f6d79f0(param_1,param_2,(longlong)param_3 + 8,param_4 - 0x10);
    FUN_14f6d79f0(param_1,local_60,(param_4 - 8) + (longlong)param_3,8);
    BUF_reverse(local_68,0,8);
    BUF_reverse(param_2,0,param_4 - 0x10);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    BUF_reverse(uVar4,local_60,8);
    FUN_14f6d79f0(param_1,param_2,param_2,param_4 - 0x10);
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    if (*(longlong *)(lVar5 + 0x180) == 0) {
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      local_78 = EVP_CIPHER_CTX_iv_noconst(param_1);
      local_80 = lVar5 + 0x100;
      local_88 = lVar5 + 0x80;
      local_70 = uVar1;
      DES_ede3_cbc_encrypt(local_68,local_68,8,lVar5);
    }
    else {
      local_88 = EVP_CIPHER_CTX_iv_noconst();
      (**(code **)(lVar5 + 0x180))(local_68,local_68,8,lVar5);
    }
    SHA1(param_2,param_4 - 0x10,local_58);
    iVar2 = CRYPTO_memcmp(local_58,local_68,8);
    if (iVar2 == 0) {
      uVar6 = (int)param_4 - 0x10;
    }
    OPENSSL_cleanse(local_68,8);
    OPENSSL_cleanse(local_58,0x14);
    OPENSSL_cleanse(local_60,8);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    OPENSSL_cleanse(uVar4,8);
    if (uVar6 == 0xffffffff) {
      OPENSSL_cleanse(param_2,param_4 - 0x10);
    }
  }
  return (ulonglong)uVar6;
}

// FUN_14f6d8420 @ 14f6d8420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6d8420(undefined8 param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48 [3];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = param_4 + 0x10;
  }
  else {
    memmove(param_2 + 1,param_3,param_4);
    SHA1(param_3,param_4,local_48);
    *(undefined8 *)(param_4 + 8 + (longlong)param_2) = local_48[0];
    OPENSSL_cleanse(local_48,0x14);
    uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar1 = RAND_bytes(uVar2,8);
    if (iVar1 < 1) {
      uVar4 = 0xffffffff;
    }
    else {
      puVar3 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
      *param_2 = *puVar3;
      FUN_14f6d79f0(param_1,param_2 + 1,param_2 + 1,param_4 + 8);
      uVar4 = param_4 + 0x10;
      BUF_reverse(param_2,0,uVar4);
      puVar3 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
      *puVar3 = DAT_1534a7948;
      FUN_14f6d79f0(param_1,param_2,param_2,uVar4);
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  return uVar4;
}

