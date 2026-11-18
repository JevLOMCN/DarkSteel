// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 62

// FUN_14f6dccc0 @ 14f6dccc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dccc0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
        CRYPTO_cbc128_decrypt(param_3,param_2,0x40000000,uVar3,uVar2,aria_encrypt);
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
      CRYPTO_cbc128_decrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,aria_encrypt);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}

// FUN_14f6dcde0 @ 14f6dcde0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dcde0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
                (param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,aria_encrypt);
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

// FUN_14f6dcf00 @ 14f6dcf00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dcf00(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_cipher();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      aria_encrypt(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}

// FUN_14f6dcfa0 @ 14f6dcfa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dcfa0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x14f6dcfb7;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      CRYPTO_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,aria_encrypt);
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
              (param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,aria_encrypt,uVar4);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f6dd0e0 @ 14f6dd0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd0e0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
        CRYPTO_cbc128_decrypt(param_3,param_2,0x40000000,uVar3,uVar2,aria_encrypt);
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
      CRYPTO_cbc128_decrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,aria_encrypt);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}

// FUN_14f6dd200 @ 14f6dd200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd200(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
                (param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,aria_encrypt);
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

// FUN_14f6dd320 @ 14f6dd320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd320(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_cipher();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      aria_encrypt(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}

// FUN_14f6dd3c0 @ 14f6dd3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd3c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x14f6dd3d7;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      CRYPTO_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,aria_encrypt);
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
              (param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,aria_encrypt,uVar4);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f6dd500 @ 14f6dd500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd500(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
        CRYPTO_cbc128_decrypt(param_3,param_2,0x40000000,uVar3,uVar2,aria_encrypt);
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
      CRYPTO_cbc128_decrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,aria_encrypt);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}

// FUN_14f6dd620 @ 14f6dd620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd620(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
                (param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,aria_encrypt);
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

// FUN_14f6dd740 @ 14f6dd740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd740(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_cipher();
  uVar3 = (ulonglong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    lVar1 = param_3;
    do {
      EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      aria_encrypt(lVar1,(param_2 - param_3) + lVar1,uVar2);
      lVar1 = lVar1 + uVar3;
    } while ((ulonglong)(lVar1 - param_3) <= param_4 - uVar3);
  }
  return 1;
}

// FUN_14f6dd7e0 @ 14f6dd7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd7e0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x14f6dd7f7;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      CRYPTO_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,aria_encrypt);
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
              (param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,aria_encrypt,uVar4);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f6dd920 @ 14f6dd920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dd920(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 local_res20 [2];
  
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar6) {
        return 1;
      }
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
      iVar7 = (int)uVar6 * 8;
      if (iVar1 != 0) {
        iVar7 = (int)uVar6;
      }
      uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      CRYPTO_cfb128_1_encrypt
                (param_3,param_2,(longlong)iVar7,uVar4,uVar3,local_res20,uVar2,aria_encrypt);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_4 = param_4 - uVar6;
      param_3 = param_3 + uVar6;
      param_2 = param_2 + uVar6;
      uVar5 = param_4;
      if (uVar6 <= param_4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}

// FUN_14f6dda60 @ 14f6dda60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dda60(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 local_res20 [2];
  
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar6) {
        return 1;
      }
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
      iVar7 = (int)uVar6 * 8;
      if (iVar1 != 0) {
        iVar7 = (int)uVar6;
      }
      uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      CRYPTO_cfb128_1_encrypt
                (param_3,param_2,(longlong)iVar7,uVar4,uVar3,local_res20,uVar2,aria_encrypt);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_4 = param_4 - uVar6;
      param_3 = param_3 + uVar6;
      param_2 = param_2 + uVar6;
      uVar5 = param_4;
      if (uVar6 <= param_4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}

// FUN_14f6ddba0 @ 14f6ddba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ddba0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 local_res20 [2];
  
  uVar6 = param_4;
  if (0x7ffffff < param_4) {
    uVar6 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar6) {
        return 1;
      }
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
      iVar7 = (int)uVar6 * 8;
      if (iVar1 != 0) {
        iVar7 = (int)uVar6;
      }
      uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      CRYPTO_cfb128_1_encrypt
                (param_3,param_2,(longlong)iVar7,uVar4,uVar3,local_res20,uVar2,aria_encrypt);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_4 = param_4 - uVar6;
      param_3 = param_3 + uVar6;
      param_2 = param_2 + uVar6;
      uVar5 = param_4;
      if (uVar6 <= param_4) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}

// FUN_14f6ddce0 @ 14f6ddce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ddce0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      CRYPTO_cfb128_8_encrypt
                (param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,aria_encrypt);
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

// FUN_14f6dde00 @ 14f6dde00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6dde00(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      CRYPTO_cfb128_8_encrypt
                (param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,aria_encrypt);
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

// FUN_14f6ddf20 @ 14f6ddf20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ddf20(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      CRYPTO_cfb128_8_encrypt
                (param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,aria_encrypt);
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

// FUN_14f6de040 @ 14f6de040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6de040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6de05e;
  local_28[0] = EVP_CIPHER_CTX_num();
  uVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  uVar2 = EVP_CIPHER_CTX_buf_noconst(param_1);
  uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
  CRYPTO_ctr128_encrypt(param_3,param_2,param_4,uVar1,uVar3,uVar2,local_28,aria_encrypt);
  EVP_CIPHER_CTX_set_num(param_1,local_28[0]);
  return 1;
}

// FUN_14f6de100 @ 14f6de100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6de100(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6de11a;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x118) == 0) {
      memcpy(*(void **)(lVar2 + 0x2d8),param_3,(longlong)*(int *)(lVar2 + 0x2e0));
    }
    else {
      CRYPTO_gcm128_setiv(lVar2 + 0x120);
    }
    *(undefined4 *)(lVar2 + 0x11c) = 1;
    *(undefined4 *)(lVar2 + 0x2e8) = 0;
    return 1;
  }
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  iVar1 = aria_set_encrypt_key(param_2,iVar1 << 3,lVar2);
  CRYPTO_gcm128_init(lVar2 + 0x120,lVar2,aria_encrypt);
  if (-1 < iVar1) {
    if ((param_3 != (void *)0x0) ||
       ((*(int *)(lVar2 + 0x11c) != 0 &&
        (param_3 = *(void **)(lVar2 + 0x2d8), param_3 != (void *)0x0)))) {
      CRYPTO_gcm128_setiv(lVar2 + 0x120,param_3,(longlong)*(int *)(lVar2 + 0x2e0));
      *(undefined4 *)(lVar2 + 0x11c) = 1;
    }
    *(undefined4 *)(lVar2 + 0x118) = 1;
    return 1;
  }
  ERR_put_error(6,0xb0,0xb0,"crypto\\evp\\e_aria.c",0xdd,uVar3);
  return 0;
}

// FUN_14f6de250 @ 14f6de250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6de250(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  size_t _Size;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  _Size = (size_t)param_3;
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar4 + 0x118) = 0;
    uVar12 = EVP_CIPHER_iv_length(*param_1);
    *(undefined4 *)(lVar4 + 0x2e0) = uVar12;
    uVar8 = EVP_CIPHER_CTX_iv_noconst(param_1);
    *(undefined8 *)(lVar4 + 0x2d8) = uVar8;
    *(undefined4 *)(lVar4 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x2e8) = 0;
    *(undefined4 *)(lVar4 + 0x2ec) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(longlong *)(lVar4 + 0x2a0) != 0) {
      if (*(longlong *)(lVar4 + 0x2a0) != lVar4) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x2a0) = lVar5;
    }
    lVar9 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (*(longlong *)(lVar4 + 0x2d8) == lVar9) {
      uVar8 = EVP_CIPHER_CTX_iv_noconst(param_4);
      *(undefined8 *)(lVar5 + 0x2d8) = uVar8;
      return 1;
    }
    pvVar6 = (void *)CRYPTO_malloc((longlong)*(int *)(lVar4 + 0x2e0),"crypto\\evp\\e_aria.c",0x17a);
    *(void **)(lVar5 + 0x2d8) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      memcpy(pvVar6,*(void **)(lVar4 + 0x2d8),(longlong)*(int *)(lVar4 + 0x2e0));
      return 1;
    }
    uVar12 = 0x17b;
    goto LAB_14f6de358;
  case 9:
    if (param_3 < 1) {
      return 0;
    }
    if ((param_3 < 0x11) || (param_3 <= *(int *)(lVar4 + 0x2e0))) {
LAB_14f6de379:
      *(int *)(lVar4 + 0x2e0) = param_3;
      return 1;
    }
    lVar5 = *(longlong *)(lVar4 + 0x2d8);
    lVar9 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (lVar5 != lVar9) {
      CRYPTO_free(lVar5,"crypto\\evp\\e_aria.c",0x10c);
    }
    lVar5 = CRYPTO_malloc(_Size,"crypto\\evp\\e_aria.c",0x10d);
    *(longlong *)(lVar4 + 0x2d8) = lVar5;
    if (lVar5 != 0) goto LAB_14f6de379;
    uVar12 = 0x10e;
LAB_14f6de358:
    ERR_put_error(6,0xc5,0x41,"crypto\\evp\\e_aria.c",uVar12);
    break;
  case 0x10:
    if (((param_3 - 1U < 0x10) && (iVar3 = EVP_CIPHER_CTX_encrypting(param_1), iVar3 != 0)) &&
       (-1 < *(int *)(lVar4 + 0x2e4))) {
      pvVar6 = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
      memcpy(param_4,pvVar6,_Size);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1U < 0x10) && (iVar3 = EVP_CIPHER_CTX_encrypting(param_1), iVar3 == 0)) {
      pvVar6 = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
      memcpy(pvVar6,param_4,_Size);
      *(int *)(lVar4 + 0x2e4) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == -1) {
      memcpy(*(void **)(lVar4 + 0x2d8),param_4,(longlong)*(int *)(lVar4 + 0x2e0));
    }
    else {
      if (param_3 < 4) {
        return 0;
      }
      if (*(int *)(lVar4 + 0x2e0) - param_3 < 8) {
        return 0;
      }
      memcpy(*(void **)(lVar4 + 0x2d8),param_4,_Size);
      iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
      if ((iVar3 != 0) &&
         (iVar3 = RAND_bytes(*(longlong *)(lVar4 + 0x2d8) + _Size,*(int *)(lVar4 + 0x2e0) - param_3)
         , iVar3 < 1)) {
        return 0;
      }
    }
    *(undefined4 *)(lVar4 + 0x2e8) = 1;
    return 1;
  case 0x13:
    if ((*(int *)(lVar4 + 0x2e8) != 0) && (*(int *)(lVar4 + 0x118) != 0)) {
      CRYPTO_gcm128_setiv(lVar4 + 0x120,*(undefined8 *)(lVar4 + 0x2d8),
                          (longlong)*(int *)(lVar4 + 0x2e0));
      if ((param_3 < 1) || (iVar3 = *(int *)(lVar4 + 0x2e0), iVar3 < param_3)) {
        iVar3 = *(int *)(lVar4 + 0x2e0);
        param_3 = iVar3;
      }
      memcpy(param_4,(void *)(((longlong)iVar3 - (longlong)param_3) + *(longlong *)(lVar4 + 0x2d8)),
             (longlong)param_3);
      lVar9 = *(longlong *)(lVar4 + 0x2d8) + (longlong)*(int *)(lVar4 + 0x2e0) + -8;
      lVar5 = lVar9 + 8;
      do {
        pcVar1 = (char *)(lVar5 + -1);
        *pcVar1 = *pcVar1 + '\x01';
        lVar5 = lVar5 + -1;
        if (*pcVar1 != '\0') break;
      } while (lVar5 != lVar9);
      *(undefined4 *)(lVar4 + 0x11c) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar7 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
      *puVar7 = *param_4;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar4 + 0x2ec) = 0xd;
      lVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar2 = *(undefined1 *)(lVar4 + 0xb);
      lVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar10 = (uint)CONCAT11(uVar2,*(undefined1 *)(lVar4 + 0xc));
      if (7 < uVar10) {
        uVar11 = uVar10 - 8;
        iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
        if (iVar3 == 0) {
          if (uVar11 < 0x10) {
            return 0;
          }
          uVar11 = uVar10 - 0x18;
        }
        lVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar4 + 0xb) = (char)(uVar11 >> 8);
        lVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar4 + 0xc) = (char)uVar11;
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(lVar4 + 0x2e8) != 0) && (*(int *)(lVar4 + 0x118) != 0)) &&
       (iVar3 = EVP_CIPHER_CTX_encrypting(param_1), iVar3 == 0)) {
      memcpy((void *)(((longlong)*(int *)(lVar4 + 0x2e0) - _Size) + *(longlong *)(lVar4 + 0x2d8)),
             param_4,_Size);
      CRYPTO_gcm128_setiv(lVar4 + 0x120,*(undefined8 *)(lVar4 + 0x2d8),
                          (longlong)*(int *)(lVar4 + 0x2e0));
      *(undefined4 *)(lVar4 + 0x11c) = 1;
      return 1;
    }
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar4 + 0x2e0);
    return 1;
  }
  return 0;
}

// FUN_14f6de770 @ 14f6de770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6de770(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar2 + 0x118) != 0) {
    if (-1 < *(int *)(lVar2 + 0x2ec)) {
      uVar3 = FUN_14f6df560(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    if (*(int *)(lVar2 + 0x11c) == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(lVar2 + 0x2e4);
        if (iVar1 < 0) {
          return 0xffffffff;
        }
        uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
        iVar1 = CRYPTO_gcm128_finish(lVar2 + 0x120,uVar4,(longlong)iVar1);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
      }
      else {
        uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
        CRYPTO_gcm128_tag(lVar2 + 0x120,uVar4,0x10);
        *(undefined4 *)(lVar2 + 0x2e4) = 0x10;
      }
      *(undefined4 *)(lVar2 + 0x11c) = 0;
      return 0;
    }
    if (param_2 == 0) {
      iVar1 = CRYPTO_gcm128_aad(lVar2 + 0x120,param_3,param_4);
    }
    else {
      iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar1 != 0) {
        iVar1 = CRYPTO_gcm128_encrypt();
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        goto LAB_14f6de833;
      }
      iVar1 = CRYPTO_gcm128_decrypt(lVar2 + 0x120,param_3,param_2,param_4);
    }
    if (iVar1 == 0) {
LAB_14f6de833:
      return param_4 & 0xffffffff;
    }
  }
  return 0xffffffff;
}

// FUN_14f6de8d0 @ 14f6de8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6de8d0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  lVar1 = *(longlong *)(lVar1 + 0x2d8);
  lVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
  if (lVar1 != lVar2) {
    CRYPTO_free(lVar1,"crypto\\evp\\e_aria.c",0x1f2);
  }
  return 1;
}

// FUN_14f6de930 @ 14f6de930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6de930(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6de94a;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_14f6de9f7;
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  iVar1 = aria_set_encrypt_key(param_2,iVar1 << 3,lVar2);
  uVar3 = 1;
  CRYPTO_ccm128_init(lVar2 + 0x138,*(undefined4 *)(lVar2 + 300),*(undefined4 *)(lVar2 + 0x128),lVar2
                     ,aria_encrypt,uVar4);
  if (iVar1 < 0) {
    ERR_put_error(6,0xaf,0xb0,"crypto\\evp\\e_aria.c",CONCAT44(uVar3,0x206));
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x170) = 0;
  *(undefined4 *)(lVar2 + 0x118) = 1;
LAB_14f6de9f7:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x128);
    _Dst = (void *)EVP_CIPHER_CTX_iv_noconst(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0x11c) = 1;
  }
  return 1;
}

// FUN_14f6dea50 @ 14f6dea50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6dea50(undefined8 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  void *_Dst;
  ushort uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar3 + 0x128) = 8;
    *(undefined8 *)(lVar3 + 0x118) = 0;
    *(undefined8 *)(lVar3 + 0x120) = 0;
    *(undefined4 *)(lVar3 + 300) = 0xc;
    *(undefined4 *)(lVar3 + 0x130) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(longlong *)(lVar3 + 0x168) != 0) {
      if (*(longlong *)(lVar3 + 0x168) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x168) = lVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (param_3 - 2U < 7) {
      *(int *)(lVar3 + 0x128) = param_3;
      return 1;
    }
    break;
  case 0x10:
    iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    if (((iVar2 != 0) && (*(int *)(lVar3 + 0x120) != 0)) &&
       (lVar5 = CRYPTO_ccm128_tag(lVar3 + 0x138,param_4,_Size), lVar5 != 0)) {
      *(undefined8 *)(lVar3 + 0x11c) = 0;
      *(undefined4 *)(lVar3 + 0x124) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((_Size & 1) == 0) && (param_3 - 4U < 0xd)) {
      iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar2 == 0) {
        if (param_4 != (int *)0x0) {
          *(undefined4 *)(lVar3 + 0x120) = 1;
          _Dst = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
          memcpy(_Dst,param_4,_Size);
        }
      }
      else if (param_4 != (int *)0x0) {
        return 0;
      }
      *(int *)(lVar3 + 300) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      piVar6 = (int *)EVP_CIPHER_CTX_iv_noconst(param_1);
      *piVar6 = *param_4;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
      *puVar4 = *(undefined8 *)param_4;
      *(int *)(puVar4 + 1) = param_4[2];
      *(char *)((longlong)puVar4 + 0xc) = (char)param_4[3];
      *(undefined4 *)(lVar3 + 0x130) = 0xd;
      lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar1 = *(undefined1 *)(lVar5 + 0xb);
      lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar7 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 0xc));
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
        if (iVar2 == 0) {
          if ((int)(uint)uVar7 < *(int *)(lVar3 + 300)) {
            return 0;
          }
          uVar7 = uVar7 - *(short *)(lVar3 + 300);
        }
        lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar5 + 0xb) = (char)(uVar7 >> 8);
        lVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
        *(char *)(lVar5 + 0xc) = (char)uVar7;
        return *(undefined4 *)(lVar3 + 300);
      }
    }
    break;
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar3 + 0x128);
    return 1;
  }
  return 0;
}

// FUN_14f6ded20 @ 14f6ded20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6ded20(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  lVar6 = lVar3 + 0x138;
  if (*(int *)(lVar3 + 0x118) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar3 + 0x130)) {
    uVar4 = FUN_14f6df260(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if ((param_3 == 0) && (param_2 != 0)) {
    return 0;
  }
  if (*(int *)(lVar3 + 0x11c) == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(lVar3 + 0x128);
      uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
      if (iVar2 == 0) {
        *(undefined4 *)(lVar3 + 0x124) = 1;
        return param_4 & 0xffffffff;
      }
    }
    else if ((*(int *)(lVar3 + 0x124) != 0) || (param_4 == 0)) {
      CRYPTO_ccm128_aad(lVar6,param_3,param_4);
      return param_4 & 0xffffffff;
    }
    return 0xffffffff;
  }
  iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x120) == 0)) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x124) == 0) {
    iVar2 = *(int *)(lVar3 + 0x128);
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar2 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar2),param_4);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x124) = 1;
  }
  iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
  lVar1 = *(longlong *)(lVar3 + 0x170);
  if (iVar2 != 0) {
    if (lVar1 == 0) {
      iVar2 = CRYPTO_ccm128_encrypt();
    }
    else {
      local_78 = lVar1;
      iVar2 = CRYPTO_ccm128_encrypt_ccm64();
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x120) = 1;
    return param_4 & 0xffffffff;
  }
  if (lVar1 == 0) {
    iVar2 = CRYPTO_ccm128_decrypt(lVar6,param_3,param_2,param_4);
  }
  else {
    local_78 = lVar1;
    iVar2 = CRYPTO_ccm128_decrypt_ccm64();
  }
  uVar4 = 0xffffffff;
  if ((iVar2 == 0) &&
     (lVar6 = CRYPTO_ccm128_tag(lVar6,local_68,(longlong)*(int *)(lVar3 + 300)), uVar4 = 0xffffffff,
     lVar6 != 0)) {
    iVar2 = *(int *)(lVar3 + 300);
    uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
    iVar2 = CRYPTO_memcmp(local_68,uVar5,(longlong)iVar2);
    if ((iVar2 == 0) && (uVar4 = param_4 & 0xffffffff, (int)param_4 != -1)) goto LAB_14f6def3d;
  }
  OPENSSL_cleanse(param_2,param_4);
LAB_14f6def3d:
  *(undefined8 *)(lVar3 + 0x11c) = 0;
  *(undefined4 *)(lVar3 + 0x124) = 0;
  return uVar4;
}

// FUN_14f6def80 @ 14f6def80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6def80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = EVP_CIPHER_CTX_cipher();
  uVar1 = EVP_CIPHER_flags(uVar3);
  if ((param_4 == 0) && ((uVar1 & 0xf0007) - 1 < 2)) {
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = aria_set_decrypt_key(param_2,iVar2 << 3,uVar3);
  }
  else {
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar2 = EVP_CIPHER_CTX_key_length(param_1);
    iVar2 = aria_set_encrypt_key(param_2,iVar2 << 3,uVar3);
  }
  if (iVar2 < 0) {
    ERR_put_error(6,0xb9,0xb0,"crypto\\evp\\e_aria.c",0x49);
    return 0;
  }
  return 1;
}

// EVP_aria_128_cbc @ 14f6df060

undefined * EVP_aria_128_cbc(void)

{
  return &DAT_1534a81e0;
}

// EVP_aria_128_ccm @ 14f6df070

undefined * EVP_aria_128_ccm(void)

{
  return &DAT_1534a8ae0;
}

// EVP_aria_128_cfb1 @ 14f6df080

undefined * EVP_aria_128_cfb1(void)

{
  return &DAT_1534a8660;
}

// EVP_aria_128_cfb128 @ 14f6df090

undefined * EVP_aria_128_cfb128(void)

{
  return &DAT_1534a8240;
}

// EVP_aria_128_cfb8 @ 14f6df0a0

undefined * EVP_aria_128_cfb8(void)

{
  return &DAT_1534a8780;
}

// EVP_aria_128_ctr @ 14f6df0b0

undefined * EVP_aria_128_ctr(void)

{
  return &DAT_1534a88a0;
}

// EVP_aria_128_ecb @ 14f6df0c0

undefined * EVP_aria_128_ecb(void)

{
  return &DAT_1534a8300;
}

// EVP_aria_128_gcm @ 14f6df0d0

undefined * EVP_aria_128_gcm(void)

{
  return &DAT_1534a89c0;
}

// EVP_aria_128_ofb @ 14f6df0e0

undefined * EVP_aria_128_ofb(void)

{
  return &DAT_1534a82a0;
}

// EVP_aria_192_cbc @ 14f6df0f0

undefined * EVP_aria_192_cbc(void)

{
  return &DAT_1534a8360;
}

// EVP_aria_192_ccm @ 14f6df100

undefined * EVP_aria_192_ccm(void)

{
  return &DAT_1534a8b40;
}

// EVP_aria_192_cfb1 @ 14f6df110

undefined * EVP_aria_192_cfb1(void)

{
  return &DAT_1534a86c0;
}

// EVP_aria_192_cfb128 @ 14f6df120

undefined * EVP_aria_192_cfb128(void)

{
  return &DAT_1534a83c0;
}

// EVP_aria_192_cfb8 @ 14f6df130

undefined * EVP_aria_192_cfb8(void)

{
  return &DAT_1534a87e0;
}

// EVP_aria_192_ctr @ 14f6df140

undefined * EVP_aria_192_ctr(void)

{
  return &DAT_1534a8900;
}

// EVP_aria_192_ecb @ 14f6df150

undefined * EVP_aria_192_ecb(void)

{
  return &DAT_1534a8480;
}

// EVP_aria_192_gcm @ 14f6df160

undefined * EVP_aria_192_gcm(void)

{
  return &DAT_1534a8a20;
}

// EVP_aria_192_ofb @ 14f6df170

undefined * EVP_aria_192_ofb(void)

{
  return &DAT_1534a8420;
}

// EVP_aria_256_cbc @ 14f6df180

undefined * EVP_aria_256_cbc(void)

{
  return &DAT_1534a84e0;
}

// EVP_aria_256_ccm @ 14f6df190

undefined * EVP_aria_256_ccm(void)

{
  return &DAT_1534a8ba0;
}

// EVP_aria_256_cfb1 @ 14f6df1a0

undefined * EVP_aria_256_cfb1(void)

{
  return &DAT_1534a8720;
}

// EVP_aria_256_cfb128 @ 14f6df1b0

undefined * EVP_aria_256_cfb128(void)

{
  return &DAT_1534a8540;
}

// EVP_aria_256_cfb8 @ 14f6df1c0

undefined * EVP_aria_256_cfb8(void)

{
  return &DAT_1534a8840;
}

// EVP_aria_256_ctr @ 14f6df1d0

undefined * EVP_aria_256_ctr(void)

{
  return &DAT_1534a8960;
}

// EVP_aria_256_ecb @ 14f6df1e0

undefined * EVP_aria_256_ecb(void)

{
  return &DAT_1534a8600;
}

// EVP_aria_256_gcm @ 14f6df1f0

undefined * EVP_aria_256_gcm(void)

{
  return &DAT_1534a8a80;
}

// EVP_aria_256_ofb @ 14f6df200

undefined * EVP_aria_256_ofb(void)

{
  return &DAT_1534a85a0;
}

// FUN_14f6df210 @ 14f6df210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6df210(void)

{
  int in_stack_00000030;
  
  if (in_stack_00000030 != 0) {
    CRYPTO_cbc128_encrypt();
    return;
  }
  CRYPTO_cbc128_decrypt();
  return;
}

// FUN_14f6df260 @ 14f6df260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6df260(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4
                       )

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  lVar6 = lVar2 + 0x138;
  if ((param_2 != param_3) || (param_4 < (longlong)*(int *)(lVar2 + 300) + 8U)) {
    return 0xffffffff;
  }
  iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    *param_2 = *puVar3;
  }
  lVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
  *(undefined8 *)(lVar4 + 4) = *param_3;
  param_4 = param_4 - (longlong)(*(int *)(lVar2 + 300) + 8);
  iVar1 = *(int *)(lVar2 + 0x128);
  uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
  iVar1 = CRYPTO_ccm128_setiv(lVar6,uVar5,(longlong)(0xf - iVar1),param_4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(lVar2 + 0x130);
    uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
    CRYPTO_ccm128_aad(lVar6,uVar5,(longlong)iVar1);
    param_2 = param_2 + 1;
    iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    lVar4 = *(longlong *)(lVar2 + 0x170);
    if (iVar1 == 0) {
      if (lVar4 == 0) {
        iVar1 = CRYPTO_ccm128_decrypt(lVar6,param_3 + 1,param_2,param_4);
      }
      else {
        local_68 = lVar4;
        iVar1 = CRYPTO_ccm128_decrypt_ccm64();
      }
      if (((iVar1 == 0) &&
          (lVar6 = CRYPTO_ccm128_tag(lVar6,local_58,(longlong)*(int *)(lVar2 + 300)), lVar6 != 0))
         && (iVar1 = CRYPTO_memcmp(local_58,param_4 + (longlong)(param_3 + 1),
                                   (longlong)*(int *)(lVar2 + 300)), iVar1 == 0)) {
        return param_4 & 0xffffffff;
      }
      OPENSSL_cleanse(param_2,param_4);
    }
    else {
      if (lVar4 == 0) {
        iVar1 = CRYPTO_ccm128_encrypt();
      }
      else {
        local_68 = lVar4;
        iVar1 = CRYPTO_ccm128_encrypt_ccm64();
      }
      if ((iVar1 == 0) &&
         (lVar6 = CRYPTO_ccm128_tag(lVar6,param_4 + (longlong)param_2,
                                    (longlong)*(int *)(lVar2 + 300)), lVar6 != 0)) {
        return (ulonglong)*(uint *)(lVar2 + 300) + 8 + param_4;
      }
    }
  }
  return 0xffffffff;
}

// FUN_14f6df450 @ 14f6df450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6df450(void)

{
  CRYPTO_cfb128_encrypt();
  return;
}

// FUN_14f6df4a0 @ 14f6df4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6df4a0(void)

{
  CRYPTO_cfb128_1_encrypt();
  return;
}

// FUN_14f6df4f0 @ 14f6df4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6df4f0(void)

{
  CRYPTO_cfb128_8_encrypt();
  return;
}

// FUN_14f6df540 @ 14f6df540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6df540(void)

{
  aria_encrypt();
  return;
}

// FUN_14f6df560 @ 14f6df560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6df560(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  iVar3 = -1;
  if ((param_2 == param_3) && (0x17 < param_4)) {
    iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar5 = 0x18;
    if (iVar1 != 0) {
      uVar5 = 0x13;
    }
    iVar2 = EVP_CIPHER_CTX_ctrl(param_1,uVar5,8,param_2);
    iVar1 = -1;
    if (0 < iVar2) {
      iVar2 = *(int *)(lVar4 + 0x2ec);
      uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      iVar2 = CRYPTO_gcm128_aad(lVar4 + 0x120,uVar5,(longlong)iVar2);
      if (iVar2 == 0) {
        param_2 = param_2 + 8;
        lVar6 = param_4 - 0x18;
        iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
        iVar1 = iVar3;
        if (iVar2 == 0) {
          iVar2 = CRYPTO_gcm128_decrypt(lVar4 + 0x120,param_3 + 8,param_2,lVar6);
          if (iVar2 == 0) {
            uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
            CRYPTO_gcm128_tag(lVar4 + 0x120,uVar5,0x10);
            uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
            iVar2 = CRYPTO_memcmp(uVar5,param_3 + 8 + lVar6,0x10);
            iVar1 = (int)lVar6;
            if (iVar2 != 0) {
              OPENSSL_cleanse(param_2,lVar6);
              iVar1 = iVar3;
            }
          }
        }
        else {
          iVar3 = CRYPTO_gcm128_encrypt();
          if (iVar3 == 0) {
            CRYPTO_gcm128_tag(lVar4 + 0x120,param_2 + lVar6,0x10);
            iVar1 = (int)lVar6 + 0x18;
          }
        }
      }
    }
    *(undefined4 *)(lVar4 + 0x11c) = 0;
    *(undefined4 *)(lVar4 + 0x2ec) = 0xffffffff;
    return iVar1;
  }
  return -1;
}

// FUN_14f6df700 @ 14f6df700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6df700(void)

{
  CRYPTO_ofb128_encrypt();
  return;
}

